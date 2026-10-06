/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fe5374; end: 104fe53df; -[SCAutoCaptionsWorkflow _resetState] */

void FUN_104fe5374(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf11420(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174a40();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c130620(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf74640();
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 104fe53e0; end: 104fe54d7; -[SCAutoCaptionsWorkflow _handleLoadConfigEventWithConfig:] */

void FUN_104fe53e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x38) = 2;
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf11420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174a40();
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b3708;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010c0fb840(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27a460(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c035ea0(puVar1,param_2,uVar4,uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c130620(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf778a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104fe54d8; end: 104fe5853; -[SCAutoCaptionsWorkflow _mapTokenLattice:fullTranscription:tokensShouldIncludeWhitespace:] */

void FUN_104fe54d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if ((param_6 & 1) == 0) {
    puVar4 = param_5;
    func_0x00010bf44740(param_5,param_3,&PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_4;
    func_0x00010bf529e0();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        puVar5 = param_4;
        func_0x00010c0dfd40(param_4,param_3,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf529e0();
        if (puVar8 < puVar6) {
          puVar6 = puVar4;
          func_0x00010c0dfd40(puVar4,param_3,puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126b3738;
          _objc_alloc(PTR_PTR_1126b3738);
          func_0x00010c2510e0(puVar5);
          uVar9 = param_1;
          func_0x00010bf957e0(puVar5);
          func_0x00010c053ea0(param_1,uVar9,puVar7,param_3,puVar6);
          func_0x00010befa120(puVar1,param_3,puVar7);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
        puVar8 = puVar8 + 1;
        puVar5 = param_4;
        func_0x00010bf529e0();
      } while (puVar8 < puVar5);
    }
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25da60(PTR__OBJC_CLASS___NSMutableString_1126af7f8,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_4;
    func_0x00010bf529e0();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        puVar5 = param_4;
        func_0x00010c0dfd40(param_4,param_3,puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c272ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c08fa60();
        puVar2 = puVar4;
        func_0x00010c260c20(puVar4,param_3,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar2;
        func_0x00010c08fa60(puVar2);
        func_0x00010bf6b860(puVar4,param_3,0,puVar6);
        while (puVar6 = puVar4, func_0x00010c08fa60(), puVar6 != (undefined *)0x0) {
          func_0x00010bf35920(puVar4,param_3,0);
          puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c11bb40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf359c0();
          _objc_release(puVar6);
          puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
          func_0x00010c2a4be0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar6;
          func_0x00010bf359c0();
          _objc_release(puVar6);
          if ((((ulong)puVar7 & 1) == 0) && ((int)puVar3 == 0)) break;
          func_0x00010bf6b860(puVar4,param_3,0,1);
          puVar6 = puVar2;
          if ((int)puVar7 != 0) {
            func_0x00010c25cde0(puVar2,param_3,&PTR____CFConstantStringClassReference_110dc1af8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
          }
          puVar2 = puVar6;
          if ((int)puVar3 != 0) {
            func_0x00010c25cde0(puVar6,param_3,&PTR____CFConstantStringClassReference_110dc1af8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
          }
        }
        puVar6 = PTR_PTR_1126b3738;
        _objc_alloc(PTR_PTR_1126b3738);
        func_0x00010c2510e0(puVar5);
        uVar9 = param_1;
        func_0x00010bf957e0(puVar5);
        func_0x00010c053ea0(param_1,uVar9,puVar6,param_3,puVar2);
        func_0x00010befa120(puVar1,param_3,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar2);
        _objc_release(puVar5);
        puVar8 = puVar8 + 1;
        puVar5 = param_4;
        func_0x00010bf529e0();
      } while (puVar8 < puVar5);
    }
  }
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fe5854; end: 104fe58d7; -[SCAutoCaptionsWorkflow .cxx_destruct] */

void FUN_104fe5854(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 104fe58d8; end: 104fe59c7; -[SCPreviewAutoCaptionsImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe58d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b3750;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112719038;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11271903c;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_112719040;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_112719044;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + _DAT_112719048;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bff5c20(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271904c);
  *(undefined **)(param_1 + _DAT_11271904c) = puVar1;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104fe59c8; end: 104fe5a23; -[SCPreviewAutoCaptionsImplEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe59c8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271904c);
  *(undefined8 *)(param_1 + _DAT_11271904c) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e5878;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe5a24; end: 104fe5a8f; -[SCPreviewAutoCaptionsImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe5a24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112719048);
  _objc_destroyWeak(param_1 + _DAT_112719044);
  _objc_destroyWeak(param_1 + _DAT_112719040);
  _objc_destroyWeak(param_1 + _DAT_11271903c);
  _objc_destroyWeak(param_1 + _DAT_112719038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271904c,0);
  return;
}



/* Entry: 104fe5a90; end: 104fe5ad7;  */

void FUN_104fe5a90(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc1b58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc1b58,
                      &PTR____CFConstantStringClassReference_110dc1b78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104fe5ad8; end: 104fe5b4b; -[SCAutoCaptionsLoggingServices initWithPerformanceLogger:] */

undefined1 * FUN_104fe5ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5880;
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



/* Entry: 104fe5b4c; end: 104fe5b53; -[SCAutoCaptionsLoggingServices performanceLogger] */

undefined8 FUN_104fe5b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fe5b54; end: 104fe5b5f; -[SCAutoCaptionsLoggingServices .cxx_destruct] */

void FUN_104fe5b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fe5b60; end: 104fe5c03; -[SCPreviewContextCardsPresenterImpl initWithPreviewScopeServices:previewContextCardsScopeExposer:] */

undefined1 *
FUN_104fe5b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5888;
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



/* Entry: 104fe5c04; end: 104fe5d0b; -[SCPreviewContextCardsPresenterImpl presentContextCardsWithInfo:] */

void FUN_104fe5c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c240640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c27ed00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cfd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b3758;
    _objc_alloc(PTR_PTR_1126b3758);
    func_0x00010bffcc20();
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fe5d0c; end: 104fe5d3b; -[SCPreviewContextCardsPresenterImpl .cxx_destruct] */

void FUN_104fe5d0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fe5d3c; end: 104fe5e3b; -[SCPreviewContextCardsPresenterImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe5d3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3760;
  _objc_alloc(PTR_PTR_1126b3760);
  func_0x00010c038a60();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11271905c));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104fe5e3c; end: 104fe5e7b;  */

void FUN_104fe5e3c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104fe5e7c; end: 104fe5eeb; -[SCPreviewContextCardsPresenterImplEntryPoint _makeContextCardsPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe5e7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3768;
  _objc_alloc(PTR_PTR_1126b3768);
  lVar2 = param_1 + _DAT_112719060;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c039c00(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + _DAT_112719064));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fe5eec; end: 104fe5f43; -[SCPreviewContextCardsPresenterImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe5eec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112719064,0);
  _objc_storeStrong(param_1 + _DAT_11271905c,0);
  _objc_destroyWeak(param_1 + _DAT_112719060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112719068);
  return;
}



/* Entry: 104fe5f44; end: 104fe600f; -[SCPreviewCTLensRemoteApiPluginV2EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe5f44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1 + _DAT_11271906c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3770;
  func_0x00010c104620(PTR_PTR_1126b3770);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    func_0x00010be89080(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be89670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerGenerativeAILensPlugin_11257ff38);
    return;
  }
  return;
}



/* Entry: 104fe6010; end: 104fe619f; -[SCPreviewCTLensRemoteApiPluginV2EntryPoint _registerAiModePlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe6010(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104fe61a0;
  puStack_60 = &UNK_1108614b8;
  puVar1 = PTR_PTR_1126ae720;
  lStack_58 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0250;
  _objc_alloc(PTR_PTR_1126b0250);
  puVar3 = PTR_PTR_1126b0258;
  func_0x00010c1111a0(PTR_PTR_1126b0258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa40(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110f029b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b0260;
  _objc_alloc(PTR_PTR_1126b0260);
  func_0x00010c03ee80();
  param_1 = param_1 + _DAT_112719070;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104fe61a0; end: 104fe622b;  */

void FUN_104fe61a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_104fe622c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0c240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf56700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104fe622c; end: 104fe624f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe622c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112719078);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe6250; end: 104fe63f3; -[SCPreviewCTLensRemoteApiPluginV2EntryPoint _registerGenerativeAILensPlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe6250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104fe63f4;
  puStack_60 = &UNK_1108614b8;
  puVar1 = PTR_PTR_1126ae720;
  lStack_58 = param_1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0258;
  func_0x00010befebe0(PTR_PTR_1126b0258);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0250;
  _objc_alloc(PTR_PTR_1126b0250);
  func_0x00010bfefa40();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar5 = PTR_PTR_1126b3778;
  func_0x00010bf76e00(PTR_PTR_1126b3778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b0260;
  _objc_alloc(PTR_PTR_1126b0260);
  func_0x00010c03ee80();
  param_1 = param_1 + _DAT_112719070;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104fe63f4; end: 104fe64a3;  */

void FUN_104fe63f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_104fe622c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0c240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3778;
  func_0x00010bf0c280(PTR_PTR_1126b3778);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf56700(uVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104fe64a4; end: 104fe64f3; -[SCPreviewCTLensRemoteApiPluginV2EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe64a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112719078);
  _objc_destroyWeak(param_1 + _DAT_112719070);
  _objc_destroyWeak(param_1 + _DAT_11271906c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112719074);
  return;
}



/* Entry: 104fe64f4; end: 104fe65c7; -[SCGeoFilterData initWithGeoFilter:geoFilterAppearanceSetting:geoFilterImage:] */

undefined1 *
FUN_104fe64f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5890;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fe65c8; end: 104fe65cf; -[SCGeoFilterData geoFilter] */

undefined8 FUN_104fe65c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fe65d0; end: 104fe65d7; -[SCGeoFilterData geoFilterAppearanceSetting] */

undefined8 FUN_104fe65d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104fe65d8; end: 104fe65df; -[SCGeoFilterData geoFilterImage] */

undefined8 FUN_104fe65d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104fe65e0; end: 104fe661b; -[SCGeoFilterData .cxx_destruct] */

void FUN_104fe65e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fe661c; end: 104fe6bbf; -[SCSnapEditorFilterPlugin initWithFilterDataProvider:swipeFilterView:previewABProvider:filterArranger:valdiRuntimeProvider:snapEditorCarouselFeature:lensFetcher:lensFetchObservable:userLocationServices:deckContainerFactory:snapDocEditor:lensProcessingSharedServices:lensProcessingLaunchDataServices:] */

undefined8 *
FUN_104fe661c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126e5898;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_12);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b3780;
    func_0x00010bf8eb20(PTR_PTR_1126b3780);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
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
    puVar3 = PTR_PTR_1126b3788;
    _objc_alloc();
    func_0x00010c03b720();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b3790;
    _objc_alloc();
    func_0x00010c012fc0();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_11;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[2]);
    func_0x00010c203400(puVar1[1]);
    func_0x00010c18b5e0(puVar1[1]);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    func_0x00010beaa8e0(puVar1);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    func_0x00010beac9e0(puVar1);
    _objc_initWeak(auStack_90,puVar1);
    uVar5 = puVar1[0x13];
    func_0x00010c292d20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0f9ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104fe6bc0;
    puStack_a0 = &UNK_1108614e8;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_retain(param_14);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_14;
    _objc_release(uVar2);
    uVar2 = puVar1[0x17];
    func_0x00010c277220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c0e33e0(uVar2);
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_15;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
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



/* Entry: 104fe6bc0; end: 104fe6c6b;  */

void FUN_104fe6bc0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd7e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104fe6c6c; end: 104fe6d2f;  */

void FUN_104fe6c6c(long param_1,long param_2)

{
  if (param_2 == 1) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bfd16c0(*(undefined8 *)(param_1 + 0x88));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104fe6d30; end: 104fe7207; -[SCSnapEditorFilterPlugin populateDependencies:] */

void FUN_104fe6d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104fe7208;
  puStack_90 = &UNK_110858d90;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar2 = uVar5;
  func_0x00010c0b7ac0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104fe7278;
  puStack_b8 = &UNK_110858d90;
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_opt_class(PTR_PTR_1126b37a0);
  uVar1 = uVar5;
  func_0x00010c0b7ac0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b37a8;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c272120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcda0();
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c272120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c2a0(puVar4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c272120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc200(puVar4);
  _objc_release(uVar5);
  puStack_f8 = puVar6;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_104fe72c0;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c1622a0(puVar4);
  puStack_120 = puVar6;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_104fe739c;
  puStack_108 = &UNK_110861548;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c1ad060(puVar4);
  puStack_148 = puVar6;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_104fe74dc;
  puStack_130 = &UNK_110861578;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c1d2220(puVar4);
  puStack_170 = puVar6;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_104fe7758;
  puStack_158 = &UNK_1108450c8;
  lStack_150 = param_1;
  func_0x00010c1fac60(puVar4);
  puStack_198 = puVar6;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_104fe780c;
  puStack_180 = &UNK_110842e18;
  lStack_178 = param_1;
  func_0x00010c1ec7c0(puVar4);
  _objc_copyWeak(auStack_1a0,auStack_80);
  func_0x00010c223260(puVar4);
  puVar6 = PTR_PTR_1126b1678;
  _objc_alloc();
  _objc_retain(puVar4);
  func_0x00010c017a80();
  func_0x00010c19c900(param_3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 104fe7208; end: 104fe7277;  */

void FUN_104fe7208(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf32c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104fe7278; end: 104fe72bf;  */

void FUN_104fe7278(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fe72c0; end: 104fe7367;  */

void FUN_104fe72c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104fe7368; end: 104fe739b;  */

void FUN_104fe7368(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c251560(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe739c; end: 104fe74db;  */

void FUN_104fe739c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_a8 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b1588;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfbb6e0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar2 = puVar1;
    puVar6 = param_2;
    func_0x00010be3bf80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar1 = puVar6;
  _objc_retain(puVar6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,param_2 + 0x20);
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  return;
}



/* Entry: 104fe74dc; end: 104fe75db;  */

void FUN_104fe74dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104fe75dc; end: 104fe7757;  */

void FUN_104fe75dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc1c18);
    if ((int)uVar2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc1c38);
      if ((int)uVar2 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc1c58);
        if ((int)uVar2 == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc1c78);
          if ((int)uVar2 == 0) {
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc1c98);
            if ((int)uVar2 == 0) {
              uVar2 = *(undefined8 *)(param_1 + 0x20);
              func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc1cb8);
              if ((int)uVar2 == 0) {
                uVar2 = *(undefined8 *)(param_1 + 0x20);
                func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc1cd8);
                if ((int)uVar2 == 0) {
                  uVar2 = *(undefined8 *)(param_1 + 0x20);
                  func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc1cf8
                                     );
                  if ((int)uVar2 == 0) {
                    uVar2 = *(undefined8 *)(param_1 + 0x20);
                    func_0x00010c0720c0(uVar2,param_2,
                                        &PTR____CFConstantStringClassReference_110dc1d18);
                    if ((int)uVar2 == 0) goto LAB_104fe767c;
                    uVar2 = *(undefined8 *)(lVar1 + 0x10);
                    uVar3 = 0;
                  }
                  else {
                    uVar2 = *(undefined8 *)(lVar1 + 0x10);
                    uVar3 = 1;
                  }
                  func_0x00010c187340(uVar2,param_2,uVar3);
                  goto LAB_104fe767c;
                }
                uVar2 = *(undefined8 *)(lVar1 + 0x10);
                uVar3 = 1;
              }
              else {
                uVar2 = *(undefined8 *)(lVar1 + 0x10);
                uVar3 = 0;
              }
              func_0x00010c19c920(uVar2,param_2,uVar3);
              goto LAB_104fe767c;
            }
            uVar2 = *(undefined8 *)(lVar1 + 0x10);
            uVar3 = 0;
          }
          else {
            uVar2 = *(undefined8 *)(lVar1 + 0x10);
            uVar3 = 1;
          }
          func_0x00010c21ae40(uVar2,param_2,uVar3);
          goto LAB_104fe767c;
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      func_0x00010bea2960(lVar1,param_2,uVar2);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfadea0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9d920(lVar1,param_2,uVar2);
      _objc_release(uVar2);
    }
  }
LAB_104fe767c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fe7758; end: 104fe77ff;  */

void FUN_104fe7758(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104fe7800; end: 104fe780b;  */

void FUN_104fe7800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__selectFilterWithId__112584ff0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104fe780c; end: 104fe7883;  */

void FUN_104fe780c(undefined8 param_1)

{
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 104fe7884; end: 104fe788b;  */

void FUN_104fe7884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetFilterCarousel_1125824a0);
  return;
}



/* Entry: 104fe788c; end: 104fe7933;  */

void FUN_104fe788c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104fe7934; end: 104fe79a7;  */

void FUN_104fe7934(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c23eea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3300();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe79a8; end: 104fe79cf; -[SCSnapEditorFilterPlugin appliedLensNameObservable] */

void FUN_104fe79a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fe79d0; end: 104fe79f7; -[SCSnapEditorFilterPlugin appliedLensVenueObservable] */

void FUN_104fe79d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fe79f8; end: 104fe7a3b; -[SCSnapEditorFilterPlugin resetAppliedLensVenue] */

void FUN_104fe79f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1 = PTR_PTR_1126b3780;
  func_0x00010bf8eb20(PTR_PTR_1126b3780);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fe7a3c; end: 104fe7c03; -[SCSnapEditorFilterPlugin _setupApplyFiltersOnCarouselSettleSubscription] */

void FUN_104fe7a3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfae840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104fe7c04;
  puStack_88 = &UNK_1108615a8;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 104fe7c04; end: 104fe7cfb;  */

void FUN_104fe7c04(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bddbce0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104fe7cfc; end: 104fe7d4f;  */

void FUN_104fe7cfc(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bfd2620(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fe7d50; end: 104fe7e37; -[SCSnapEditorFilterPlugin _carouselItemForFilterItem:] */

void FUN_104fe7d50(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b37b0;
  _objc_alloc(PTR_PTR_1126b37b0);
  lVar2 = param_3;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010bfae180(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126b37b8;
  lVar4 = param_3;
  func_0x00010bfae5a0(param_3);
  func_0x00010c111140(puVar5,param_2,lVar4);
  lVar4 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0130c0(puVar1,param_2,lVar3,puVar5,lVar4);
  _objc_release(lVar4);
  if (lVar2 == 0) {
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fe7e38; end: 104fe7e43; -[SCSnapEditorFilterPlugin _resetFilterCarousel] */

void FUN_104fe7e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_scrollToInitSectionAndReloadToIn_112632368,0);
  return;
}



/* Entry: 104fe7e44; end: 104fe7f3f; -[SCSnapEditorFilterPlugin injectLensWithId:] */

void FUN_104fe7e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be3bf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0e3040(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104fe7f40; end: 104fe8033;  */

void FUN_104fe7f40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104fe8034; end: 104fe806f;  */

void FUN_104fe8034(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be9d920(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fe8070; end: 104fe889f; -[SCSnapEditorFilterPlugin handleSelectedItem:] */

void FUN_104fe8070(double param_1,undefined *param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar14 = *(undefined ***)(param_2 + 0x78);
  if ((ppuVar14 != (undefined **)0x0) &&
     (ppuVar1 = param_4, func_0x00010c071ae0(), ((ulong)ppuVar1 & 1) != 0)) goto LAB_104fe885c;
  ppuVar1 = param_4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_4;
  func_0x00010bfae5a0();
  if (ppuVar14 == (undefined **)0x3) {
    ppuVar14 = param_4;
    func_0x00010bfadea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010bdf6380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    ppuVar16 = (undefined **)0x0;
    puVar13 = PTR_PTR_1126b3800;
joined_r0x000104fe855c:
    puVar5 = PTR____NSArray0__struct_11034ab48;
    PTR_PTR_1126b3800 = puVar13;
    if (puVar4 != (undefined *)0x0) {
      _objc_alloc(puVar13);
      puVar5 = puVar4;
      func_0x00010bf63640(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffa140(puVar13);
      _objc_release(puVar5);
      puVar6 = PTR_PTR_1126b3808;
      _objc_alloc();
      func_0x00010c006c80();
      puVar5 = PTR_PTR_1126b3810;
      func_0x00010c26e3e0(PTR_PTR_1126b3810);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2144c0(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar5);
      func_0x00010c18fca0(puVar6);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b1460(puVar6);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar13);
      _objc_release(puVar4);
    }
  }
  else {
    ppuVar14 = param_4;
    func_0x00010bfae5a0();
    if (ppuVar14 == (undefined **)0x4) {
      ppuVar14 = param_4;
      func_0x00010bfadea0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_2;
      func_0x00010be1c7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar14);
      func_0x00010c073cc0();
      puVar4 = PTR_PTR_1126b0cc0;
      _objc_alloc_init();
      puVar5 = PTR_PTR_1126b0cb8;
      _objc_alloc_init(PTR_PTR_1126b0cb8);
      puVar6 = PTR_PTR_1126b37c0;
      _objc_alloc_init(PTR_PTR_1126b37c0);
      puVar7 = PTR_PTR_1126b37c8;
      _objc_alloc_init(PTR_PTR_1126b37c8);
      puVar17 = PTR_PTR_1126b37d0;
      _objc_alloc_init(PTR_PTR_1126b37d0);
      puVar2 = puVar13;
      func_0x00010c2813a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c11fae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7380(puVar17);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar13;
      func_0x00010c2813a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c11fa40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e72c0(puVar17);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar13;
      func_0x00010c2813a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163720(puVar17);
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010c219320(puVar7);
      func_0x00010c1baa40(puVar7);
      puVar2 = PTR_PTR_1126b37d8;
      _objc_alloc_init(PTR_PTR_1126b37d8);
      ppuVar14 = param_4;
      func_0x00010bfadea0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1a99c0(puVar2);
      _objc_release(ppuVar14);
      puVar3 = puVar13;
      func_0x00010c06c000();
      if ((int)puVar3 != 0) {
        puVar3 = PTR_PTR_1126ae740;
        func_0x00010bf09f00(PTR_PTR_1126ae740);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc800();
        func_0x00010c18c160(puVar2);
        _objc_release(puVar3);
      }
      func_0x00010c1ba8a0(puVar7);
      func_0x00010c1bcc80(puVar6);
      func_0x00010c196600(puVar5);
      func_0x00010c1b5d40(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar17);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar13);
      ppuVar16 = (undefined **)0x0;
      puVar13 = PTR_PTR_1126b3800;
      goto joined_r0x000104fe855c;
    }
    ppuVar14 = param_4;
    func_0x00010bfae5a0();
    if (ppuVar14 == (undefined **)0x5) {
      ppuVar16 = *(undefined ***)(param_2 + 8);
      func_0x00010bf60ac0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b0cc0;
      _objc_alloc_init();
      puVar13 = PTR_PTR_1126b37e0;
      _objc_alloc_init(PTR_PTR_1126b37e0);
      puVar5 = PTR_PTR_1126b37e8;
      _objc_alloc_init(PTR_PTR_1126b37e8);
      puVar6 = PTR_PTR_1126b37f0;
      _objc_alloc_init(PTR_PTR_1126b37f0);
      puVar7 = PTR_PTR_1126b37f8;
      _objc_alloc_init(PTR_PTR_1126b37f8);
      ppuVar14 = ppuVar16;
      func_0x00010c0d4f60(ppuVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cafa0(puVar7);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar16;
      func_0x00010c297e20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar14;
      func_0x000100576d08();
      if ((int)ppuVar8 == 0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = PTR_PTR_1126afad0;
        _objc_alloc_init(PTR_PTR_1126afad0);
        func_0x00010c1a85a0();
        func_0x00010c1c0fe0(puVar17);
      }
      func_0x00010c1dc3a0(puVar7);
      _objc_release(puVar17);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar16;
      func_0x00010c09e300(ppuVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bf480(puVar7);
      _objc_release(ppuVar14);
      func_0x00010c2bec60(ppuVar16);
      func_0x00010c2277c0((float)param_1,puVar7);
      func_0x00010c220900(puVar6);
      func_0x00010c19c1c0(puVar5);
      func_0x00010c19c280(puVar13);
      func_0x00010c1c73c0(puVar4);
      ppuVar14 = ppuVar16;
      func_0x00010c0d4f60(ppuVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar13);
      ppuVar1 = ppuVar14;
      puVar13 = PTR_PTR_1126b3800;
      goto joined_r0x000104fe855c;
    }
    ppuVar16 = (undefined **)0x0;
    puVar5 = PTR____NSArray0__struct_11034ab48;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x38));
  ppuVar14 = param_4;
  func_0x00010bfae5a0();
  if (ppuVar14 == (undefined **)0x5) {
    ppuVar14 = ppuVar16;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar14;
    func_0x00010c08fa60();
    if (ppuVar8 == (undefined **)0x0) {
      _objc_release(ppuVar14);
      goto LAB_104fe8764;
    }
    ppuVar8 = ppuVar16;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c08fa60();
    _objc_release(ppuVar8);
    _objc_release(ppuVar14);
    if (ppuVar9 == (undefined **)0x0) goto LAB_104fe8764;
    puVar4 = PTR_PTR_1126b3780;
    _objc_alloc(PTR_PTR_1126b3780);
    ppuVar14 = ppuVar16;
    func_0x00010c297e20(ppuVar16);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar16;
    func_0x00010c0d4f60(ppuVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060860(puVar4);
    _objc_release(ppuVar8);
    _objc_release(ppuVar14);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x48));
    _objc_release(puVar4);
  }
  else {
LAB_104fe8764:
    func_0x00010c1381c0(param_2);
  }
  lVar10 = *(long *)(param_2 + 0x20);
  func_0x00010c297ee0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_4;
  func_0x00010bfae5a0();
  if ((ppuVar14 == (undefined **)0x4) && (lVar11 = lVar10, func_0x00010c08fa60(), lVar11 != 0)) {
    ppuVar8 = param_4;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar8;
    func_0x00010c0720c0();
    _objc_release(ppuVar8);
  }
  else {
    ppuVar14 = (undefined **)0x0;
  }
  ppuVar9 = param_4;
  func_0x00010bfae5a0();
  ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((ppuVar9 == (undefined **)0x4) && (((ulong)ppuVar14 & 1) == 0)) {
    ppuVar14 = param_4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar14 != (undefined **)0x0) {
      ppuVar8 = ppuVar14;
    }
    _objc_retain(ppuVar8);
    _objc_release(ppuVar14);
  }
  ppuVar14 = ppuVar8;
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(param_4);
  uVar12 = *(undefined8 *)(param_2 + 0x78);
  *(undefined ***)(param_2 + 0x78) = param_4;
  _objc_release(uVar12);
  _objc_release(ppuVar8);
  _objc_release(lVar10);
  _objc_release(puVar5);
  _objc_release(ppuVar16);
  _objc_release(ppuVar1);
LAB_104fe885c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar14);
  puVar13 = param_4[1];
  func_0x00010bfc1440(puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar14);
  puVar4 = puVar13;
  func_0x00010bfb2040(puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(ppuVar14);
  _objc_release(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fe88a0; end: 104fe8957; -[SCSnapEditorFilterPlugin _geofilterForFilterId:] */

void FUN_104fe88a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc1440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104fe8958;
  puStack_40 = &UNK_110861678;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010bfb2040(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104fe8958; end: 104fe899f;  */

undefined8 FUN_104fe8958(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104fe89a0; end: 104fe8c3b; -[SCSnapEditorFilterPlugin _ctItemInstanceForFilterId:] */

void FUN_104fe89a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be1c7e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc1240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104fe8c3c;
  puStack_70 = &UNK_1108616a8;
  uStack_68 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010bfb2040(uVar2,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b3818;
  _objc_alloc_init(PTR_PTR_1126b3818);
  uVar2 = uVar3;
  func_0x00010c14e3c0(uVar3);
  lVar5 = param_1;
  func_0x00010be9a940(param_1,param_2,uVar2);
  uVar2 = uVar3;
  func_0x00010c104360(uVar3);
  func_0x00010be76320(param_1,param_2,uVar2);
  func_0x00010c1f5fe0(puVar4,param_2,lVar5);
  func_0x00010c1dee80(puVar4,param_2,param_1);
  puVar6 = PTR_PTR_1126b3820;
  _objc_alloc_init(PTR_PTR_1126b3820);
  lVar5 = lVar1;
  func_0x00010c06c000(lVar1);
  func_0x00010c1af280(puVar6,param_2,lVar5);
  puVar7 = PTR_PTR_1126b0ce8;
  _objc_alloc_init(PTR_PTR_1126b0ce8);
  func_0x00010c1c4360(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  lVar5 = lVar1;
  func_0x00010bfe8f00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0c45e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a60();
  _objc_release(puVar7);
  _objc_release(lVar8);
  _objc_release(lVar5);
  puVar7 = PTR_PTR_1126b3828;
  _objc_alloc_init(PTR_PTR_1126b3828);
  uVar2 = param_3;
  func_0x00010c0b4ca0(param_3);
  func_0x00010c19c120(puVar7,param_2,uVar2);
  func_0x00010c17d020(puVar7,param_2,puVar4);
  func_0x00010c1c4020(puVar7,param_2,puVar6);
  puVar9 = PTR_PTR_1126b37c0;
  _objc_alloc_init(PTR_PTR_1126b37c0);
  func_0x00010c19bd60();
  puVar10 = PTR_PTR_1126b0cb8;
  _objc_alloc_init(PTR_PTR_1126b0cb8);
  func_0x00010c196600();
  puVar11 = PTR_PTR_1126b0cc0;
  _objc_alloc_init(PTR_PTR_1126b0cc0);
  func_0x00010c1b5d40();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 104fe8c3c; end: 104fe8c83;  */

undefined8 FUN_104fe8c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfadea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104fe8c84; end: 104fe8c9f; -[SCSnapEditorFilterPlugin _scaleForGeoFilterScaleSetting:] */

undefined4 FUN_104fe8c84(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 1) {
    uVar2 = 2;
  }
  uVar1 = 3;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 104fe8ca0; end: 104fe8cc3; -[SCSnapEditorFilterPlugin _positionForGeoFilterPositionSetting:] */

undefined4 FUN_104fe8ca0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 8) {
    return *(undefined4 *)(&UNK_10dd8db14 + (param_3 - 1U) * 4);
  }
  return 9;
}



/* Entry: 104fe8cc4; end: 104fe8d1f; -[SCSnapEditorFilterPlugin _selectFilterWithId:] */

void FUN_104fe8cc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3830;
  func_0x00010bfae1a0(PTR_PTR_1126b3830);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf5f000(lVar2,param_2,puVar1);
  if (lVar2 != 0x7fffffffffffffff) {
    func_0x00010c152520(*(undefined8 *)(param_1 + 0x10),param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fe8d20; end: 104fe8ee7; -[SCSnapEditorFilterPlugin _setupFilterSwipeSubscription] */

void FUN_104fe8d20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfae840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104fe8ee8;
  puStack_88 = &UNK_1108616d8;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar2 = uVar1;
  func_0x00010bf41860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 104fe8ee8; end: 104fe8ff7;  */

void FUN_104fe8ee8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_2, func_0x00010bfae5a0(), lVar1 == 7)) {
    lVar1 = param_2;
    func_0x00010bfc1680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = (undefined *)0x0;
    if (lVar1 == 0) goto LAB_104fe8fc8;
    lVar1 = param_2;
    func_0x00010bfc1680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      puVar4 = PTR_PTR_1126b3838;
      _objc_alloc(PTR_PTR_1126b3838);
      func_0x00010c04fc80();
      goto LAB_104fe8fc8;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_104fe8fc8:
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fe8ff8; end: 104fe9047;  */

void FUN_104fe8ff8(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed8180();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104fe9048; end: 104fe90bb; -[SCSnapEditorFilterPlugin _updateFiltersWithMetadata:] */

void FUN_104fe9048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2652c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfadfe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2878e0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fe90bc; end: 104fe9113; -[SCSnapEditorFilterPlugin _isLensAlreadyPresentInCarousel:] */

bool FUN_104fe90bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3830;
  func_0x00010bfae1a0(PTR_PTR_1126b3830);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf5f000(lVar2,param_2,puVar1);
  _objc_release(puVar1);
  return lVar2 != 0x7fffffffffffffff;
}



/* Entry: 104fe9114; end: 104fe9297; -[SCSnapEditorFilterPlugin _injectLensWithIdIfNeeded:] */

void FUN_104fe9114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  lVar2 = param_1;
  func_0x00010be416c0();
  if ((int)lVar2 == 0) {
    puVar4 = *(undefined **)(param_1 + 0x90);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa75e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    puVar3 = puVar1;
    _objc_retain(puVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    puVar4 = PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fe9298; end: 104fe94b3;  */

void FUN_104fe9298(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
LAB_104fe9338:
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb6e0(uVar7);
    _objc_release(puVar3);
  }
  else {
    if (param_3 != 0) {
      func_0x00010bfbb6e0(*(undefined8 *)(param_1 + 0x20));
      goto LAB_104fe942c;
    }
    if (param_2 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_104fe9338;
    }
    uVar7 = *(undefined8 *)(lVar1 + 8);
    lVar4 = param_2;
    func_0x00010bfc1120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010bfc1200(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010bfc1140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066840(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(uVar7);
  }
  _objc_release(puVar2);
LAB_104fe942c:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 104fe94b4; end: 104fe94ef; -[SCSnapEditorFilterPlugin _setCarouselHidden:] */

void FUN_104fe94b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fe94f0; end: 104fe95df; -[SCSnapEditorFilterPlugin turnOnFiltersButtonPressed] */

void FUN_104fe94f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c292d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c135c40(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104fe95e0; end: 104fe961b;  */

void FUN_104fe95e0(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bfd16c0(*(undefined8 *)(param_1 + 0x88));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe961c; end: 104fe96a7; -[SCSnapEditorFilterPlugin permissionsManagerWantsToPresentPermissionsPrompt:] */

void FUN_104fe961c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0320;
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_3);
  func_0x00010c0cf9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa00(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0xa8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fe96a8; end: 104fe972f; -[SCSnapEditorFilterPlugin permissionsManagerWantsToDismissPermissionsPrompt:completion:] */

void FUN_104fe96a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104fe9730;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 104fe9730; end: 104fe973b;  */

void FUN_104fe9730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104fe9738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104fe973c; end: 104fe9adf; -[SCSnapEditorFilterPlugin updateVenueWithLensId:venueId:venueName:venueIdsListed:normalizedCenter:normalizedSize:rotation:] */

void FUN_104fe973c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,long param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126b37e8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b37f0;
  _objc_alloc_init(PTR_PTR_1126b37f0);
  puVar3 = PTR_PTR_1126b3840;
  _objc_alloc_init(PTR_PTR_1126b3840);
  func_0x00010c1bbd60();
  func_0x00010c2208c0(puVar3);
  _objc_release(param_6);
  func_0x00010c2209c0(puVar3);
  _objc_release(param_7);
  uVar12 = param_8;
  func_0x00010c0d3c80(param_8);
  _objc_release(param_8);
  func_0x00010c1beb00(puVar3);
  _objc_release(uVar12);
  if (((param_9 != 0) && (param_10 != 0)) && (param_11 != 0)) {
    func_0x00010bdc1060(param_9);
    uVar12 = param_1;
    uVar14 = param_2;
    func_0x00010bdc10a0(param_10);
    uVar13 = uVar12;
    func_0x00010bf885a0(param_11);
    func_0x00010c1cdca0(param_1,puVar3);
    func_0x00010c1cdcc0(param_2,puVar3);
    func_0x00010c1cdc80(uVar12,puVar3);
    func_0x00010c1cdc20(uVar14,puVar3);
    func_0x00010c1ee820(uVar13,puVar3);
  }
  func_0x00010c220960(puVar2);
  func_0x00010c19c1c0(puVar1);
  uVar12 = *(undefined8 *)(param_3 + 0x50);
  puVar4 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar12);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b3848;
  _objc_alloc_init();
  lVar6 = *(long *)(param_3 + 200);
  func_0x00010c15fc40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0fa320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  if (lVar8 != 0) {
    puVar5 = PTR_PTR_1126b3850;
    _objc_alloc_init(PTR_PTR_1126b3850);
    func_0x00010c1bbd60();
    func_0x00010c1fd060(puVar5);
    puVar9 = puVar5;
    func_0x00010bf63640(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd100(puVar4);
    _objc_release(puVar9);
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    puVar9 = puVar4;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar5);
  }
  _objc_release(lVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_5 + 200,0);
  _objc_storeStrong(param_5 + 0xc0,0);
  _objc_storeStrong(param_5 + 0xb8,0);
  _objc_storeStrong(param_5 + 0xb0,0);
  _objc_storeStrong(param_5 + 0xa8,0);
  _objc_storeStrong(param_5 + 0xa0,0);
  _objc_storeStrong(param_5 + 0x98,0);
  _objc_storeStrong(param_5 + 0x90,0);
  _objc_storeStrong(param_5 + 0x88,0);
  _objc_storeStrong(param_5 + 0x80,0);
  _objc_storeStrong(param_5 + 0x78,0);
  _objc_storeStrong(param_5 + 0x70,0);
  _objc_storeStrong(param_5 + 0x68,0);
  _objc_storeStrong(param_5 + 0x60,0);
  _objc_storeStrong(param_5 + 0x58,0);
  _objc_storeStrong(param_5 + 0x50,0);
  _objc_storeStrong(param_5 + 0x48,0);
  _objc_storeStrong(param_5 + 0x40,0);
  _objc_storeStrong(param_5 + 0x38,0);
  _objc_storeStrong(param_5 + 0x30,0);
  _objc_storeStrong(param_5 + 0x28,0);
  _objc_storeStrong(param_5 + 0x20,0);
  _objc_storeStrong(param_5 + 0x18,0);
  _objc_storeStrong(param_5 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_5 + 8,0);
  return;
}



/* Entry: 104fe9ae0; end: 104fe9c23; -[SCSnapEditorFilterPlugin .cxx_destruct] */

void FUN_104fe9ae0(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fe9c24; end: 104fe9cc7; -[SCSnapEditorFiltersGestureDelegate initWithSwipeFilterView:touchController:] */

undefined1 *
FUN_104fe9c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e58a0;
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



/* Entry: 104fe9cc8; end: 104fe9d27; -[SCSnapEditorFiltersGestureDelegate isAnyLensTouchProcessingGestureRecognizer:] */

undefined8 FUN_104fe9cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3858;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c08fb40(puVar1);
  func_0x00010c074620(uVar2,param_2,param_3,puVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104fe9d28; end: 104fe9d97; -[SCSnapEditorFiltersGestureDelegate gestureRecognizerShouldBegin:] */

undefined8 FUN_104fe9d28(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c232a60(uVar1,param_2,param_3);
  if (((uVar1 & 1) == 0) &&
     ((uVar1 = param_1, func_0x00010c06c2a0(param_1,param_2,param_3), (int)uVar1 == 0 ||
      (func_0x00010c22e5c0(param_1,param_2,param_3), (param_1 & 1) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104fe9d98; end: 104fe9fc7; -[SCSnapEditorFiltersGestureDelegate shouldBlockTouchesForGestureRecognizer:] */

undefined8
FUN_104fe9d98(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  
  _objc_retain(param_7);
  func_0x00010c0db140(PTR_PTR_1126b3860);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  uVar6 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar1);
  if ((uVar6 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
    _objc_opt_class(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
    uVar6 = param_7;
    _objc_opt_isKindOfClass(param_7,puVar1);
    if ((uVar6 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      uVar6 = param_7;
      _objc_opt_isKindOfClass(param_7,puVar1);
      if ((uVar6 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
        _objc_opt_class(PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870);
        uVar6 = param_7;
        _objc_opt_isKindOfClass(param_7,puVar1);
        if ((uVar6 & 1) != 0) {
          func_0x00010c264560(PTR_PTR_1126b3860);
        }
      }
      else {
        func_0x00010c0f35e0(PTR_PTR_1126b3860);
      }
    }
    else {
      func_0x00010c0fc1c0(PTR_PTR_1126b3860);
    }
  }
  else {
    uVar6 = param_7;
    func_0x00010c0df4e0();
    if (uVar6 == 2) {
      func_0x00010bf883c0();
    }
    else {
      func_0x00010c268bc0(PTR_PTR_1126b3860);
    }
  }
  uVar4 = *(undefined8 *)(param_5 + 8);
  _objc_retain(uVar4);
  func_0x00010bf20c00(uVar4);
  uVar5 = 0;
  if ((0.0 < param_3) && (0.0 < param_4)) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    param_3 = 1.0 / param_3;
    param_4 = 1.0 / param_4;
    _CGAffineTransformMakeScale(&dStack_90,param_3,param_4);
    uVar6 = param_7;
    func_0x00010c0df520();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        func_0x00010c09f140(param_7);
        dVar7 = dStack_88 * param_3;
        param_3 = dStack_70 + dStack_80 * param_4 + dStack_90 * param_3;
        param_4 = dStack_68 + dStack_78 * param_4 + dVar7;
        puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297180(param_3,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar2);
        uVar6 = uVar6 + 1;
        uVar3 = param_7;
        func_0x00010c0df520();
      } while (uVar6 < uVar3);
    }
    uVar5 = *(undefined8 *)(param_5 + 0x10);
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010bf1d560(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(uVar4);
  _objc_release(param_7);
  return uVar5;
}



/* Entry: 104fe9fc8; end: 104fea02b; -[SCSnapEditorFiltersGestureDelegate gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_104fe9fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c06c2a0(param_1,param_2,param_3);
  func_0x00010c06c2a0(param_1,param_2,param_4);
  _objc_release(param_4);
  return (uint)uVar1 ^ (uint)param_1 ^ 1;
}



/* Entry: 104fea02c; end: 104fea09f; -[SCSnapEditorFiltersGestureDelegate isLensTouchProcessingGestureRecognizer:] */

undefined8 FUN_104fea02c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b3858;
  func_0x00010c08fb40(PTR_PTR_1126b3858);
  func_0x00010c081600(uVar2,param_2,puVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0835c0(uVar2,param_2,param_3);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104fea0a0; end: 104fea10b; -[SCSnapEditorFiltersGestureDelegate gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_104fea0a0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c076940(param_1,param_2,param_3);
  if (((int)uVar1 == 0) || (func_0x00010c072f00(param_1,param_2,param_4), (param_1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 104fea10c; end: 104fea16b; -[SCSnapEditorFiltersGestureDelegate isFilterSwipeGestureRecognizer:] */

bool FUN_104fea10c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c152be0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  return lVar1 == param_3;
}



/* Entry: 104fea16c; end: 104fea19b; -[SCSnapEditorFiltersGestureDelegate .cxx_destruct] */

void FUN_104fea16c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fea19c; end: 104fea83b; -[SCSnapEditorFiltersPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fea19c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
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
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lStack_110;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puStack_a0 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_104fea83c;
  uStack_78 = 0x104fea84c;
  uStack_70 = 0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104fea854;
  puStack_a8 = &UNK_110861768;
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = puStack_a0;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3878;
  _objc_alloc(PTR_PTR_1126b3878);
  func_0x00010c024c00();
  if (param_1 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(param_1 + _DAT_112719160);
  }
  _objc_retain(uVar21);
  func_0x00010bf9d660(uVar21);
  _objc_release(uVar21);
  lVar27 = (long)_DAT_1127190f4;
  lVar3 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar23 = lVar3;
  func_0x00010c08baa0();
  if ((int)lVar23 == 0) {
    lVar23 = param_1 + lVar27;
    _objc_loadWeakRetained();
    lVar4 = lVar23;
    func_0x00010c108b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar23);
    _objc_release(lVar3);
    if (lVar4 != 0) goto LAB_104fea2d8;
    if (param_1 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = param_1 + _DAT_112719140;
      _objc_loadWeakRetained(lVar23);
    }
    lVar3 = lVar23;
    func_0x00010bfadc00(lVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar23);
    lVar23 = param_1 + _DAT_1127190f8;
    _objc_loadWeakRetained(lVar23);
    lVar4 = lVar23;
    func_0x00010c0cefe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8760(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar23);
    puVar5 = PTR_PTR_1126b3880;
    _objc_alloc();
    lVar23 = param_1;
    FUN_104fea884(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar23;
    func_0x00010c27e5e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar25 = 0;
    }
    else {
      lVar25 = param_1 + _DAT_11271910c;
      _objc_loadWeakRetained(lVar25);
    }
    lVar6 = lVar25;
    func_0x00010c293740(lVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057fe0();
    _objc_release(lVar6);
    _objc_release(lVar25);
    _objc_release(lVar4);
    _objc_release(lVar23);
    puVar7 = PTR_PTR_1126b3888;
    _objc_alloc();
    lVar25 = param_1;
    func_0x000104fea8a8();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar25;
    func_0x00010c264900();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + _DAT_1127190fc;
    _objc_loadWeakRetained();
    lVar8 = lVar23;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x000104fea8a8();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c23eb80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112719100;
    _objc_loadWeakRetained();
    lVar11 = lVar4;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = param_1 + _DAT_112719148;
      _objc_loadWeakRetained();
    }
    lVar12 = lVar20;
    func_0x00010bf323e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    FUN_104fea884();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c27e5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bfab9c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lStack_110 = 0;
    }
    else {
      lStack_110 = param_1 + _DAT_112719134;
      _objc_loadWeakRetained();
    }
    lVar17 = param_1 + lVar27;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = param_1 + lVar27;
      _objc_loadWeakRetained();
    }
    lVar19 = lVar27;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar24 = 0;
      lVar26 = 0;
    }
    else {
      lVar24 = param_1 + _DAT_112719150;
      _objc_loadWeakRetained();
      lVar26 = param_1 + _DAT_11271915c;
      _objc_loadWeakRetained();
    }
    func_0x00010c013060();
    uVar21 = puStack_90[5];
    puStack_90[5] = puVar7;
    _objc_release(uVar21);
    _objc_release(lVar26);
    _objc_release(lVar24);
    _objc_release(lVar19);
    _objc_release(lVar27);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lStack_110);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar20);
    _objc_release(lVar11);
    _objc_release(lVar4);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar23);
    _objc_release(lVar6);
    _objc_release(lVar25);
    if (param_1 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = param_1 + _DAT_112719154;
      _objc_loadWeakRetained(lVar27);
    }
    func_0x00010c220760(lVar27);
    _objc_release(lVar27);
    uVar21 = puStack_90[5];
    func_0x00010bf07f00(uVar21);
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_1;
    func_0x000104fea8cc(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169aa0();
    _objc_release(lVar27);
    _objc_release(uVar21);
    uVar21 = puStack_90[5];
    func_0x00010bf07f60(uVar21);
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_1;
    func_0x000104fea8cc(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169ae0();
    _objc_release(lVar27);
    _objc_release(uVar21);
    uVar22 = puStack_90[5];
    lVar27 = (long)_DAT_112719104;
    _objc_retain(uVar22);
    uVar21 = *(undefined8 *)(param_1 + lVar27);
    *(undefined8 *)(param_1 + lVar27) = uVar22;
    _objc_release(uVar21);
    param_1 = param_1 + _DAT_112719108;
    _objc_loadWeakRetained(param_1);
    lVar27 = param_1;
    func_0x00010c127e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar27);
    _objc_release(param_1);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
LAB_104fea2d8:
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  return;
}



/* Entry: 104fea83c; end: 104fea853;  */

void FUN_104fea83c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fea854; end: 104fea883;  */

void FUN_104fea854(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fea884; end: 104fea8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fea884(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112719114);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fea8f0; end: 104fea97b; -[SCSnapEditorFiltersPluginEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fea8f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_112719104;
  func_0x00010c1381c0(*(undefined8 *)(param_1 + lVar3));
  lVar1 = param_1;
  func_0x000104fea8cc(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  puStack_38 = PTR_PTR_1126e58a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fea97c; end: 104feaaf3; -[SCSnapEditorFiltersPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fea97c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112719160,0);
  _objc_destroyWeak(param_1 + _DAT_11271915c);
  _objc_destroyWeak(param_1 + _DAT_112719158);
  _objc_destroyWeak(param_1 + _DAT_112719154);
  _objc_destroyWeak(param_1 + _DAT_112719150);
  _objc_destroyWeak(param_1 + _DAT_11271914c);
  _objc_destroyWeak(param_1 + _DAT_112719148);
  _objc_destroyWeak(param_1 + _DAT_112719144);
  _objc_destroyWeak(param_1 + _DAT_112719140);
  _objc_destroyWeak(param_1 + _DAT_11271913c);
  _objc_destroyWeak(param_1 + _DAT_112719138);
  _objc_destroyWeak(param_1 + _DAT_112719134);
  _objc_destroyWeak(param_1 + _DAT_1127190f8);
  _objc_destroyWeak(param_1 + _DAT_112719130);
  _objc_destroyWeak(param_1 + _DAT_11271912c);
  _objc_destroyWeak(param_1 + _DAT_112719100);
  _objc_destroyWeak(param_1 + _DAT_112719128);
  _objc_destroyWeak(param_1 + _DAT_112719124);
  _objc_destroyWeak(param_1 + _DAT_112719120);
  _objc_destroyWeak(param_1 + _DAT_11271911c);
  _objc_destroyWeak(param_1 + _DAT_112719118);
  _objc_destroyWeak(param_1 + _DAT_112719114);
  _objc_destroyWeak(param_1 + _DAT_112719110);
  _objc_destroyWeak(param_1 + _DAT_1127190fc);
  _objc_destroyWeak(param_1 + _DAT_11271910c);
  _objc_destroyWeak(param_1 + _DAT_1127190f4);
  _objc_destroyWeak(param_1 + _DAT_112719108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719104,0);
  return;
}



/* Entry: 104feaaf4; end: 104feab97; -[SCSnapEditorLensFetcher initWithUcoDataFetcher:userSession:] */

undefined1 *
FUN_104feaaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e58b0;
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



/* Entry: 104feab98; end: 104fead27; -[SCSnapEditorLensFetcher fetchGeoFilterDataForLensId:performer:] */

void FUN_104feab98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104fead28;
  puStack_60 = &UNK_110861798;
  _objc_retain(puVar1);
  puStack_58 = puVar1;
  func_0x00010bfab0c0(uVar2);
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_80);
  puVar4 = puVar3;
  func_0x00010bfb2660(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fead28; end: 104fead3b;  */

void FUN_104fead28(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 104fead3c; end: 104feb1cb;  */

void FUN_104fead3c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar10 = PTR_PTR_1126ae558;
  if (param_1 == 0) {
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010bfe9c80(puVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar8 = PTR_PTR_1126b3890;
    _objc_alloc();
    lVar2 = param_2;
    func_0x00010bf32760(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf32760(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf32a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0191e0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar2 = param_2;
    func_0x00010bf29280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bf29280(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar9);
      _objc_release(lVar2);
    }
    lVar2 = param_2;
    func_0x00010bf07540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bf07540(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar9);
      _objc_release(lVar2);
    }
    puVar6 = PTR_PTR_1126b3898;
    lVar2 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bf32720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b38a0;
    lVar5 = param_2;
    func_0x00010c2813a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2467a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a7e0();
    func_0x00010c07eda0();
    func_0x00010c27e700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126b38a8;
    func_0x00010bf69120(PTR_PTR_1126b38a8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b2718;
    _objc_alloc();
    func_0x00010c0044c0();
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar10;
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(puVar6);
    puVar12 = puVar10;
    func_0x00010bfa7640(uVar14);
    _objc_release(puVar10);
    puVar10 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar7);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR_PTR_1126b38b0;
  _objc_retain(puVar12);
  _objc_retain(lVar11);
  _objc_alloc(puVar10);
  func_0x00010c017860();
  _objc_release(puVar12);
  _objc_release(lVar11);
  func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}


