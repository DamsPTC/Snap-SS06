/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e752a0; end: 105e75367; -[SCAdReportReportAdRouter submitReportWithReasonId:comment:completion:] */

void FUN_105e752a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132500();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9a3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277ca0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  (**(code **)(param_5 + 0x10))(param_5,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105e75368; end: 105e753f3; -[SCAdReportReportAdRouter didSelectWebViewReasonWithReasonId:] */

void FUN_105e75368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132500();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9a3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277ca0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e753f4; end: 105e756cf; -[SCAdReportReportAdRouter _showReportAdV3] */

void FUN_105e753f4(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  func_0x00010be08be0();
  puVar1 = param_1;
  func_0x00010be36e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c133f80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c133a00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c5430;
  func_0x00010c069040(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c0720c0();
  _objc_release(puVar6);
  _objc_release(uVar9);
  _objc_release(uVar5);
  if ((int)uVar7 == 0) {
    if (lVar4 < 1) {
      puVar6 = param_1;
      func_0x00010beb4020(param_1);
      FUN_105e7438c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar4 == 2) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010c133a00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c5430;
        func_0x00010c0e1940(PTR_PTR_1126c5430);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar9;
        func_0x00010c0720c0();
        _objc_release(puVar6);
        _objc_release(uVar9);
        _objc_release(uVar5);
        if ((int)uVar7 != 0) {
          puVar6 = PTR_PTR_1126c5430;
          func_0x00010c0e1940(PTR_PTR_1126c5430);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105e754e4;
        }
      }
      puVar6 = PTR_PTR_1126c5448;
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf45e20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c133a00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf45e20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06c420();
      func_0x00010c121f60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar9);
      _objc_release(uVar7);
    }
    puVar8 = PTR_PTR_1126b0a48;
    _objc_alloc(PTR_PTR_1126b0a48);
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27ed80(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010be5c060(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058860(puVar8);
    _objc_release(puVar10);
    _objc_release(uVar9);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar8);
  }
  else {
    puVar6 = PTR_PTR_1126c5430;
    func_0x00010bfe4ee0(PTR_PTR_1126c5430);
    _objc_retainAutoreleasedReturnValue();
LAB_105e754e4:
    func_0x00010beba5e0(param_1);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e756d0; end: 105e7578b; -[SCAdReportReportAdRouter _makeReportViewConfig] */

void FUN_105e756d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0a40;
  _objc_opt_new(PTR_PTR_1126b0a40);
  func_0x00010c1ee140();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf45e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f40(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x000105e77c44();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eda0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c167280(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e7578c; end: 105e75823; -[SCAdReportReportAdRouter _shouldHideCommentBox] */

undefined8 FUN_105e7578c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bfe1c80();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfe1c80();
    if ((int)uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f480();
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 105e75824; end: 105e7586b; -[SCAdReportReportAdRouter _enableIllegalContentReport] */

undefined8 FUN_105e75824(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105e7586c; end: 105e758c3; -[SCAdReportReportAdRouter _illegalContentRedirectUrl] */

void FUN_105e7586c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e758c4; end: 105e75adb; -[SCAdReportReportAdRouter _showPostReportPageWithReasonId:] */

void FUN_105e758c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c5420;
  _objc_alloc(PTR_PTR_1126c5420);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c03e880(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c295440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c5428;
  _objc_alloc(PTR_PTR_1126c5428);
  func_0x00010c061d40();
  puVar5 = PTR_PTR_1126afcd0;
  _objc_alloc(PTR_PTR_1126afcd0);
  func_0x00010c0601e0();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132500();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9a3c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277ca0();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105e75adc; end: 105e75b53;  */

void FUN_105e75adc(long param_1)

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
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1324e0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e75b54; end: 105e75b9b; -[SCAdReportReportAdRouter .cxx_destruct] */

void FUN_105e75b54(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e75b9c; end: 105e75c3f; -[SCAdReportReportAdWorkflow initWithRouter:reportAdScope:] */

undefined1 *
FUN_105e75b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ed810;
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



/* Entry: 105e75c40; end: 105e75c7f; -[SCAdReportReportAdWorkflow begin] */

void FUN_105e75c40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf9a3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277c80();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c239970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_showReportAd_11266c080);
  return;
}



/* Entry: 105e75c80; end: 105e75c83; -[SCAdReportReportAdWorkflow end] */

void FUN_105e75c80(void)

{
  return;
}



/* Entry: 105e75c84; end: 105e75cb3; -[SCAdReportReportAdWorkflow .cxx_destruct] */

void FUN_105e75c84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e75cb4; end: 105e7605b; +[SCReportAdReasons reasonRootForVersion:selectedMenuReason:showIllegalContentOption:illegalContentRedirectUrl:isAppInstallOrDeeplink:] */

void FUN_105e75cb4(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  ,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar3 = param_1;
  if (2 < param_3 - 3U) {
    if (param_3 == 2) {
      func_0x00010c1416c0(param_1,param_2,param_4,param_6,param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0d3c80();
      goto LAB_105e75e2c;
    }
    if (param_3 != 1) {
      func_0x00010bf88280();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_1;
      puStack_c0 = puVar3;
      func_0x00010bfeb940();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      puStack_b8 = puVar5;
      func_0x00010bfb73e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      puStack_b0 = puVar6;
      func_0x00010bfee1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      puStack_a8 = puVar7;
      func_0x00010bfe4f00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a0 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar9;
      func_0x00010c0d3c80();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      goto LAB_105e75e2c;
    }
  }
  func_0x00010c0e1940();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  puStack_98 = puVar3;
  func_0x00010bfb73e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  puStack_90 = puVar5;
  func_0x00010c29f8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  puStack_88 = puVar6;
  func_0x00010bfdee40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  puStack_80 = puVar7;
  func_0x00010bfee1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  puStack_78 = puVar8;
  func_0x00010c0edfa0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
LAB_105e75e2c:
  _objc_release(puVar3);
  if ((param_5 != 0) && (lVar2 = param_6, func_0x00010c08fa60(), lVar2 != 0)) {
    func_0x00010bfe6a60(param_1,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,param_1);
    _objc_release(param_1);
  }
  puVar5 = PTR_PTR_1126b0a18;
  _objc_alloc();
  func_0x00010c03d260();
  puVar3 = PTR_PTR_1126b0a20;
  _objc_alloc();
  puVar6 = puVar3;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e2d498,puVar6,puVar7)
  ;
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126b0a10;
    puVar4 = PTR_PTR_1126c5418;
    func_0x00010c06b080(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000105e77c74();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f960(puVar3,param_2,puVar4,puVar5,PTR_PTR_1133bb228);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e7605c; end: 105e760e7; +[SCReportAdReasons irrelevant] */

void FUN_105e7605c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  func_0x00010c06b080(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77c74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e760e8; end: 105e76173; +[SCReportAdReasons iSeeSimilarAdsTooOften] */

void FUN_105e760e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  func_0x00010bfe5020(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77cec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e76174; end: 105e761ff; +[SCReportAdReasons iSeeItTooManyAds] */

void FUN_105e76174(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  func_0x00010bfe4fe0(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77d04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e76200; end: 105e7628b; +[SCReportAdReasons iDislikeProductOrBrandOrService] */

void FUN_105e76200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c06b100(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77b6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e7628c; end: 105e76317; +[SCReportAdReasons alreadyInstalled] */

void FUN_105e7628c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  func_0x00010bf01ce0(PTR_PTR_1126c5418);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77cd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e76318; end: 105e763c7; +[SCReportAdReasons alreadyInstalledWithAppInstallAd:] */

void FUN_105e76318(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5418;
  if (param_3 == 0) {
    func_0x00010bf01cc0(PTR_PTR_1126c5418);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000105e77cbc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf01ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000105e77cd4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e763c8; end: 105e76453; +[SCReportAdReasons offensiveSexual] */

void FUN_105e763c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c0e1940(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77aac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e76454; end: 105e764ff; +[SCReportAdReasons fraudulent] */

void FUN_105e76454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c117f00(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77b84();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000(puVar4,param_2,puVar1,puVar2,puVar3,1,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e76500; end: 105e765ab; +[SCReportAdReasons violent] */

void FUN_105e76500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c0e1980(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77ac4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000(puVar4,param_2,puVar1,puVar2,puVar3,1,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e765ac; end: 105e76657; +[SCReportAdReasons hateSpeech] */

void FUN_105e765ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c0e1960(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77adc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000(puVar4,param_2,puVar1,puVar2,puVar3,1,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e76658; end: 105e7670b; +[SCReportAdReasons ipCopyrightInfringement] */

void FUN_105e76658(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c06b000(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77bb4();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e2d418;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e2d418,
                      &PTR____CFConstantStringClassReference_110e2d438,
                      &PTR____CFConstantStringClassReference_110db4078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4520(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e7670c; end: 105e767bf; +[SCReportAdReasons ipTrademarkInfringement] */

void FUN_105e7670c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c06b040(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77bcc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e2d458;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e2d458,
                      &PTR____CFConstantStringClassReference_110e2d478,
                      &PTR____CFConstantStringClassReference_110db4078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4520(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e767c0; end: 105e7690f; +[SCReportAdReasons infringesIP] */

void FUN_105e767c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar6 = PTR_PTR_1126b0a10;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010bfee1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77b9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c06b000();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = uVar4;
  func_0x00010c06b040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09a380(puVar6,param_2,puVar1,puVar2,puVar3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126b0a10;
    puVar1 = PTR_PTR_1126c5430;
    func_0x00010c06b0e0(PTR_PTR_1126c5430);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000105e77af4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000107cbc9a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42000(puVar6,param_2,puVar1,puVar2,puVar3,1,PTR_PTR_1133bb228);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e76910; end: 105e769bb; +[SCReportAdReasons others] */

void FUN_105e76910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c06b0e0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77af4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000(puVar4,param_2,puVar1,puVar2,puVar3,1,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e769bc; end: 105e76a67; +[SCReportAdReasons offensiveOthers] */

void FUN_105e769bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c0e1900(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77af4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000(puVar4,param_2,puVar1,puVar2,puVar3,1,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e76a68; end: 105e76b03; +[SCReportAdReasons illegalContentWithContentRedirectUrl:] */

void FUN_105e76a68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c5430;
  puVar3 = PTR_PTR_1126b0a10;
  _objc_retain(param_3);
  func_0x00010bfe6a40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77c2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4520(puVar3,param_2,puVar1,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e76b04; end: 105e76baf; +[SCReportAdReasons makeMeSmile] */

void FUN_105e76b04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c0b7380(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77bfc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000(puVar4,param_2,puVar1,puVar2,puVar3,1,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e76bb0; end: 105e76c3b; +[SCReportAdReasons productOrServiceILike] */

void FUN_105e76bb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c1160c0(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77c14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f960(puVar3,param_2,puVar1,puVar2,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e76c3c; end: 105e76ce7; +[SCReportAdReasons relevantOther] */

void FUN_105e76c3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b0a10;
  puVar1 = PTR_PTR_1126c5430;
  func_0x00010c128800(PTR_PTR_1126c5430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000105e77af4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107cbc9a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42000(puVar4,param_2,puVar1,puVar2,puVar3,1,PTR_PTR_1133bb228);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105e76ce8; end: 105e76e4b; +[SCReportAdReasons dontLikeIt] */

void FUN_105e76ce8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined **ppuVar29;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined1 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  long lStack_1b0;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar21 = param_1;
  func_0x00010c06b080();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  func_0x00010bfe4fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar22);
  _objc_release(uVar21);
  ppuVar29 = (undefined **)PTR_PTR_1126b0a10;
  puVar2 = PTR_PTR_1126c5430;
  func_0x00010bf88280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105e77b0c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09a380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
    ___stack_chk_fail();
    lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar1;
    func_0x00010c0e1940();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c29f8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfdee40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
    ppuVar29 = (undefined **)PTR_PTR_1126b0a10;
    func_0x000105e77a94();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x000107cbc9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09a380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
      ___stack_chk_fail();
      lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = puVar5;
      func_0x00010c0b7380();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c1160c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128800();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar1);
      ppuVar29 = (undefined **)PTR_PTR_1126b0a10;
      puVar1 = PTR_PTR_1126c5430;
      func_0x00010bfe4ee0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x000105e77be4();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x000107cbc9c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      puVar20 = puVar2;
      puVar7 = puVar4;
      func_0x00010c09a380();
      uVar25 = SUB81(puVar7,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
        ___stack_chk_fail();
        lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(puVar20);
        puVar2 = PTR_PTR_1126c5430;
        _objc_retain(puVar5);
        func_0x00010bf88280();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_258 = 0xc0000000;
        pcStack_250 = FUN_105e7750c;
        puStack_248 = &UNK_1108efb58;
        ppuVar29 = &puStack_260;
        puStack_240 = puVar3;
        uStack_238 = uVar25;
        puStack_230 = puVar2;
        _objc_retainBlock();
        puVar4 = PTR_PTR_1126c5430;
        ppuStack_1f0 = ppuVar29;
        func_0x00010c0e1940();
        _objc_retainAutoreleasedReturnValue();
        puStack_288 = puVar1;
        uStack_280 = 0xc0000000;
        pcStack_278 = FUN_105e77634;
        puStack_270 = &UNK_1108efb78;
        ppuVar6 = &puStack_288;
        puStack_268 = puVar3;
        puStack_228 = puVar4;
        _objc_retainBlock();
        puVar7 = PTR_PTR_1126c5430;
        ppuStack_1e8 = ppuVar6;
        func_0x00010c117f00();
        _objc_retainAutoreleasedReturnValue();
        puStack_2b0 = puVar1;
        uStack_2a8 = 0xc0000000;
        uStack_2a0 = 0x105e776c4;
        puStack_298 = &UNK_1108efb78;
        ppuVar8 = &puStack_2b0;
        puStack_290 = puVar3;
        puStack_220 = puVar7;
        _objc_retainBlock();
        puVar9 = PTR_PTR_1126c5430;
        ppuStack_1e0 = ppuVar8;
        func_0x00010c0e1980();
        _objc_retainAutoreleasedReturnValue();
        puStack_2d8 = puVar1;
        uStack_2d0 = 0xc0000000;
        uStack_2c8 = 0x105e77754;
        puStack_2c0 = &UNK_1108efb78;
        ppuVar10 = &puStack_2d8;
        puStack_2b8 = puVar3;
        puStack_218 = puVar9;
        _objc_retainBlock();
        puVar11 = PTR_PTR_1126c5430;
        ppuStack_1d8 = ppuVar10;
        func_0x00010c0e1960();
        _objc_retainAutoreleasedReturnValue();
        puStack_300 = puVar1;
        uStack_2f8 = 0xc0000000;
        uStack_2f0 = 0x105e777e4;
        puStack_2e8 = &UNK_1108efb78;
        ppuVar12 = &puStack_300;
        puStack_2e0 = puVar3;
        puStack_210 = puVar11;
        _objc_retainBlock();
        puVar13 = PTR_PTR_1126c5430;
        ppuStack_1d0 = ppuVar12;
        func_0x00010bfee1a0();
        _objc_retainAutoreleasedReturnValue();
        puStack_328 = puVar1;
        uStack_320 = 0xc0000000;
        pcStack_318 = FUN_105e77874;
        puStack_310 = &UNK_1108efb78;
        ppuVar14 = &puStack_328;
        puStack_308 = puVar3;
        puStack_208 = puVar13;
        _objc_retainBlock();
        puVar15 = PTR_PTR_1126c5430;
        ppuStack_1c8 = ppuVar14;
        func_0x00010bfe6a40();
        _objc_retainAutoreleasedReturnValue();
        puStack_358 = puVar1;
        uStack_350 = 0xc2000000;
        pcStack_348 = FUN_105e77930;
        puStack_340 = &UNK_1108efb98;
        puStack_330 = puVar3;
        puStack_200 = puVar15;
        _objc_retain(puVar20);
        ppuVar16 = &puStack_358;
        puStack_338 = puVar20;
        _objc_retainBlock();
        puVar17 = PTR_PTR_1126c5430;
        ppuStack_1c0 = ppuVar16;
        func_0x00010c06b0e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_380 = puVar1;
        uStack_378 = 0xc0000000;
        uStack_370 = 0x105e779d4;
        puStack_368 = &UNK_1108efb78;
        ppuVar18 = &puStack_380;
        puStack_360 = puVar3;
        puStack_1f8 = puVar17;
        _objc_retainBlock();
        ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        ppuStack_1b8 = ppuVar18;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar18);
        _objc_release(puVar17);
        _objc_release(ppuVar16);
        _objc_release(puVar15);
        _objc_release(ppuVar14);
        _objc_release(puVar13);
        _objc_release(ppuVar12);
        _objc_release(puVar11);
        _objc_release(ppuVar10);
        _objc_release(puVar9);
        _objc_release(ppuVar8);
        _objc_release(puVar7);
        _objc_release(ppuVar6);
        _objc_release(puVar4);
        _objc_release(ppuVar29);
        _objc_release(puVar2);
        ppuVar6 = ppuVar19;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        if (ppuVar6 == (undefined **)0x0) {
          ppuVar29 = (undefined **)0x0;
        }
        else {
          ppuVar29 = ppuVar6;
          (*(code *)ppuVar6[2])();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar6);
        _objc_release(ppuVar19);
        _objc_release(puStack_338);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
          ___stack_chk_fail();
          lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar26 = *(long *)(puVar20 + 0x20);
          func_0x00010c06b080();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = *(undefined8 *)(puVar20 + 0x20);
          func_0x00010bfe5020();
          _objc_retainAutoreleasedReturnValue();
          uVar22 = *(undefined8 *)(puVar20 + 0x20);
          func_0x00010bfe4fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar23 = *(undefined8 *)(puVar20 + 0x20);
          func_0x00010bfe4ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = *(undefined8 *)(puVar20 + 0x20);
          func_0x00010bf01d00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar24);
          _objc_release(uVar23);
          _objc_release(uVar22);
          _objc_release(uVar21);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
            ___stack_chk_fail();
            lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar26 = *(long *)(lVar26 + 0x20);
            func_0x00010c0e1940();
            _objc_retainAutoreleasedReturnValue();
            ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
              ___stack_chk_fail();
              lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar26 = *(long *)(lVar26 + 0x20);
              func_0x00010bfb73e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
                ___stack_chk_fail();
                lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
                lVar26 = *(long *)(lVar26 + 0x20);
                func_0x00010c29f8e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
                  ___stack_chk_fail();
                  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  lVar26 = *(long *)(lVar26 + 0x20);
                  func_0x00010bfdee40();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                  func_0x00010bf0a140();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
                    ___stack_chk_fail();
                    lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    lVar27 = *(long *)(lVar26 + 0x20);
                    func_0x00010c06b000();
                    _objc_retainAutoreleasedReturnValue();
                    uVar21 = *(undefined8 *)(lVar26 + 0x20);
                    func_0x00010c06b040();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                    func_0x00010bf0a140();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar21);
                    _objc_release();
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar28) {
                      ___stack_chk_fail();
                      lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      lVar26 = *(long *)(lVar27 + 0x28);
                      func_0x00010bfe6a60();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                      func_0x00010bf0a140();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar28) {
                        ___stack_chk_fail();
                        lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
                        uVar21 = *(undefined8 *)(lVar26 + 0x20);
                        func_0x00010c0edfa0();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                        func_0x00010bf0a140();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(uVar21);
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
                          ___stack_chk_fail();
                          ppuVar6 = &PTR____CFConstantStringClassReference_110e2d558;
                          func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2d558,
                                              &PTR____CFConstantStringClassReference_110e2d578,0);
                          func_0x000107c61180();
                          if (lRam00000001137fe070 != -1) {
                            func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
                          }
                          ppuVar29 = ppuVar6;
                          if ((bRam00000001137fe068 & 1) != 0) {
                            func_0x000107c312ec(ppuVar6);
                            func_0x000107c61180();
                            func_0x000107c61170(ppuVar6);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar29);
  return;
}



/* Entry: 105e76e4c; end: 105e76fb3; +[SCReportAdReasons inappropriateOffensiveReason] */

void FUN_105e76e4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined1 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined **ppuVar29;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = param_1;
  func_0x00010c0e1940();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1;
  func_0x00010c29f8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_1;
  func_0x00010bfdee40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1920();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release();
  ppuVar29 = (undefined **)PTR_PTR_1126b0a10;
  func_0x000105e77a94();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09a380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
    ___stack_chk_fail();
    lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar1;
    func_0x00010c0b7380();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c1160c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128800();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuVar29 = (undefined **)PTR_PTR_1126b0a10;
    puVar1 = PTR_PTR_1126c5430;
    func_0x00010bfe4ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000105e77be4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000107cbc9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar1;
    puVar19 = puVar2;
    puVar6 = puVar3;
    func_0x00010c09a380();
    uVar25 = SUB81(puVar6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
      ___stack_chk_fail();
      lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar19);
      puVar2 = PTR_PTR_1126c5430;
      _objc_retain(puVar24);
      func_0x00010bf88280();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1f8 = 0xc0000000;
      pcStack_1f0 = FUN_105e7750c;
      puStack_1e8 = &UNK_1108efb58;
      ppuVar29 = &puStack_200;
      puStack_1e0 = puVar4;
      uStack_1d8 = uVar25;
      puStack_1d0 = puVar2;
      _objc_retainBlock();
      puVar3 = PTR_PTR_1126c5430;
      ppuStack_190 = ppuVar29;
      func_0x00010c0e1940();
      _objc_retainAutoreleasedReturnValue();
      puStack_228 = puVar1;
      uStack_220 = 0xc0000000;
      pcStack_218 = FUN_105e77634;
      puStack_210 = &UNK_1108efb78;
      ppuVar5 = &puStack_228;
      puStack_208 = puVar4;
      puStack_1c8 = puVar3;
      _objc_retainBlock();
      puVar6 = PTR_PTR_1126c5430;
      ppuStack_188 = ppuVar5;
      func_0x00010c117f00();
      _objc_retainAutoreleasedReturnValue();
      puStack_250 = puVar1;
      uStack_248 = 0xc0000000;
      uStack_240 = 0x105e776c4;
      puStack_238 = &UNK_1108efb78;
      ppuVar7 = &puStack_250;
      puStack_230 = puVar4;
      puStack_1c0 = puVar6;
      _objc_retainBlock();
      puVar8 = PTR_PTR_1126c5430;
      ppuStack_180 = ppuVar7;
      func_0x00010c0e1980();
      _objc_retainAutoreleasedReturnValue();
      puStack_278 = puVar1;
      uStack_270 = 0xc0000000;
      uStack_268 = 0x105e77754;
      puStack_260 = &UNK_1108efb78;
      ppuVar9 = &puStack_278;
      puStack_258 = puVar4;
      puStack_1b8 = puVar8;
      _objc_retainBlock();
      puVar10 = PTR_PTR_1126c5430;
      ppuStack_178 = ppuVar9;
      func_0x00010c0e1960();
      _objc_retainAutoreleasedReturnValue();
      puStack_2a0 = puVar1;
      uStack_298 = 0xc0000000;
      uStack_290 = 0x105e777e4;
      puStack_288 = &UNK_1108efb78;
      ppuVar11 = &puStack_2a0;
      puStack_280 = puVar4;
      puStack_1b0 = puVar10;
      _objc_retainBlock();
      puVar12 = PTR_PTR_1126c5430;
      ppuStack_170 = ppuVar11;
      func_0x00010bfee1a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_2c8 = puVar1;
      uStack_2c0 = 0xc0000000;
      pcStack_2b8 = FUN_105e77874;
      puStack_2b0 = &UNK_1108efb78;
      ppuVar13 = &puStack_2c8;
      puStack_2a8 = puVar4;
      puStack_1a8 = puVar12;
      _objc_retainBlock();
      puVar14 = PTR_PTR_1126c5430;
      ppuStack_168 = ppuVar13;
      func_0x00010bfe6a40();
      _objc_retainAutoreleasedReturnValue();
      puStack_2f8 = puVar1;
      uStack_2f0 = 0xc2000000;
      pcStack_2e8 = FUN_105e77930;
      puStack_2e0 = &UNK_1108efb98;
      puStack_2d0 = puVar4;
      puStack_1a0 = puVar14;
      _objc_retain(puVar19);
      ppuVar15 = &puStack_2f8;
      puStack_2d8 = puVar19;
      _objc_retainBlock();
      puVar16 = PTR_PTR_1126c5430;
      ppuStack_160 = ppuVar15;
      func_0x00010c06b0e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_320 = puVar1;
      uStack_318 = 0xc0000000;
      uStack_310 = 0x105e779d4;
      puStack_308 = &UNK_1108efb78;
      ppuVar17 = &puStack_320;
      puStack_300 = puVar4;
      puStack_198 = puVar16;
      _objc_retainBlock();
      ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_158 = ppuVar17;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar17);
      _objc_release(puVar16);
      _objc_release(ppuVar15);
      _objc_release(puVar14);
      _objc_release(ppuVar13);
      _objc_release(puVar12);
      _objc_release(ppuVar11);
      _objc_release(puVar10);
      _objc_release(ppuVar9);
      _objc_release(puVar8);
      _objc_release(ppuVar7);
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      _objc_release(puVar3);
      _objc_release(ppuVar29);
      _objc_release(puVar2);
      ppuVar5 = ppuVar18;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar24);
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar29 = (undefined **)0x0;
      }
      else {
        ppuVar29 = ppuVar5;
        (*(code *)ppuVar5[2])();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar5);
      _objc_release(ppuVar18);
      _objc_release(puStack_2d8);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) {
        ___stack_chk_fail();
        lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar26 = *(long *)(puVar19 + 0x20);
        func_0x00010c06b080();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = *(undefined8 *)(puVar19 + 0x20);
        func_0x00010bfe5020();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = *(undefined8 *)(puVar19 + 0x20);
        func_0x00010bfe4fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar22 = *(undefined8 *)(puVar19 + 0x20);
        func_0x00010bfe4ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar23 = *(undefined8 *)(puVar19 + 0x20);
        func_0x00010bf01d00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar23);
        _objc_release(uVar22);
        _objc_release(uVar21);
        _objc_release(uVar20);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
          ___stack_chk_fail();
          lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar26 = *(long *)(lVar26 + 0x20);
          func_0x00010c0e1940();
          _objc_retainAutoreleasedReturnValue();
          ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
            ___stack_chk_fail();
            lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar26 = *(long *)(lVar26 + 0x20);
            func_0x00010bfb73e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
              ___stack_chk_fail();
              lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar26 = *(long *)(lVar26 + 0x20);
              func_0x00010c29f8e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
                ___stack_chk_fail();
                lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
                lVar26 = *(long *)(lVar26 + 0x20);
                func_0x00010bfdee40();
                _objc_retainAutoreleasedReturnValue();
                ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
                  ___stack_chk_fail();
                  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  lVar27 = *(long *)(lVar26 + 0x20);
                  func_0x00010c06b000();
                  _objc_retainAutoreleasedReturnValue();
                  uVar20 = *(undefined8 *)(lVar26 + 0x20);
                  func_0x00010c06b040();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                  func_0x00010bf0a140();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar20);
                  _objc_release();
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar28) {
                    ___stack_chk_fail();
                    lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    lVar26 = *(long *)(lVar27 + 0x28);
                    func_0x00010bfe6a60();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                    func_0x00010bf0a140();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar28) {
                      ___stack_chk_fail();
                      lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
                      uVar20 = *(undefined8 *)(lVar26 + 0x20);
                      func_0x00010c0edfa0();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                      func_0x00010bf0a140();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar20);
                      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
                        ___stack_chk_fail();
                        ppuVar5 = &PTR____CFConstantStringClassReference_110e2d558;
                        func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2d558,
                                            &PTR____CFConstantStringClassReference_110e2d578,0);
                        func_0x000107c61180();
                        if (lRam00000001137fe070 != -1) {
                          func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
                        }
                        ppuVar29 = ppuVar5;
                        if ((bRam00000001137fe068 & 1) != 0) {
                          func_0x000107c312ec(ppuVar5);
                          func_0x000107c61180();
                          func_0x000107c61170(ppuVar5);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar29);
  return;
}



/* Entry: 105e76fb4; end: 105e77117; +[SCReportAdReasons iLikeItReason] */

void FUN_105e76fb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined1 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined **ppuVar29;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = param_1;
  func_0x00010c0b7380();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_1;
  func_0x00010c1160c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128800();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar21);
  _objc_release(uVar20);
  ppuVar29 = (undefined **)PTR_PTR_1126b0a10;
  puVar2 = PTR_PTR_1126c5430;
  func_0x00010bfe4ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000105e77be4();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000107cbc9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar2;
  puVar19 = puVar3;
  puVar6 = puVar4;
  func_0x00010c09a380();
  uVar25 = SUB81(puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar26) {
    ___stack_chk_fail();
    lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar19);
    puVar3 = PTR_PTR_1126c5430;
    _objc_retain(puVar24);
    func_0x00010bf88280();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc0000000;
    pcStack_180 = FUN_105e7750c;
    puStack_178 = &UNK_1108efb58;
    ppuVar29 = &puStack_190;
    puStack_170 = puVar1;
    uStack_168 = uVar25;
    puStack_160 = puVar3;
    _objc_retainBlock();
    puVar4 = PTR_PTR_1126c5430;
    ppuStack_120 = ppuVar29;
    func_0x00010c0e1940();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar2;
    uStack_1b0 = 0xc0000000;
    pcStack_1a8 = FUN_105e77634;
    puStack_1a0 = &UNK_1108efb78;
    ppuVar5 = &puStack_1b8;
    puStack_198 = puVar1;
    puStack_158 = puVar4;
    _objc_retainBlock();
    puVar6 = PTR_PTR_1126c5430;
    ppuStack_118 = ppuVar5;
    func_0x00010c117f00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = puVar2;
    uStack_1d8 = 0xc0000000;
    uStack_1d0 = 0x105e776c4;
    puStack_1c8 = &UNK_1108efb78;
    ppuVar7 = &puStack_1e0;
    puStack_1c0 = puVar1;
    puStack_150 = puVar6;
    _objc_retainBlock();
    puVar8 = PTR_PTR_1126c5430;
    ppuStack_110 = ppuVar7;
    func_0x00010c0e1980();
    _objc_retainAutoreleasedReturnValue();
    puStack_208 = puVar2;
    uStack_200 = 0xc0000000;
    uStack_1f8 = 0x105e77754;
    puStack_1f0 = &UNK_1108efb78;
    ppuVar9 = &puStack_208;
    puStack_1e8 = puVar1;
    puStack_148 = puVar8;
    _objc_retainBlock();
    puVar10 = PTR_PTR_1126c5430;
    ppuStack_108 = ppuVar9;
    func_0x00010c0e1960();
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = puVar2;
    uStack_228 = 0xc0000000;
    uStack_220 = 0x105e777e4;
    puStack_218 = &UNK_1108efb78;
    ppuVar11 = &puStack_230;
    puStack_210 = puVar1;
    puStack_140 = puVar10;
    _objc_retainBlock();
    puVar12 = PTR_PTR_1126c5430;
    ppuStack_100 = ppuVar11;
    func_0x00010bfee1a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_258 = puVar2;
    uStack_250 = 0xc0000000;
    pcStack_248 = FUN_105e77874;
    puStack_240 = &UNK_1108efb78;
    ppuVar13 = &puStack_258;
    puStack_238 = puVar1;
    puStack_138 = puVar12;
    _objc_retainBlock();
    puVar14 = PTR_PTR_1126c5430;
    ppuStack_f8 = ppuVar13;
    func_0x00010bfe6a40();
    _objc_retainAutoreleasedReturnValue();
    puStack_288 = puVar2;
    uStack_280 = 0xc2000000;
    pcStack_278 = FUN_105e77930;
    puStack_270 = &UNK_1108efb98;
    puStack_260 = puVar1;
    puStack_130 = puVar14;
    _objc_retain(puVar19);
    ppuVar15 = &puStack_288;
    puStack_268 = puVar19;
    _objc_retainBlock();
    puVar16 = PTR_PTR_1126c5430;
    ppuStack_f0 = ppuVar15;
    func_0x00010c06b0e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b0 = puVar2;
    uStack_2a8 = 0xc0000000;
    uStack_2a0 = 0x105e779d4;
    puStack_298 = &UNK_1108efb78;
    ppuVar17 = &puStack_2b0;
    puStack_290 = puVar1;
    puStack_128 = puVar16;
    _objc_retainBlock();
    ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_e8 = ppuVar17;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    _objc_release(puVar16);
    _objc_release(ppuVar15);
    _objc_release(puVar14);
    _objc_release(ppuVar13);
    _objc_release(puVar12);
    _objc_release(ppuVar11);
    _objc_release(puVar10);
    _objc_release(ppuVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar29);
    _objc_release(puVar3);
    ppuVar5 = ppuVar18;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar29 = (undefined **)0x0;
    }
    else {
      ppuVar29 = ppuVar5;
      (*(code *)ppuVar5[2])();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar18);
    _objc_release(puStack_268);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e0) {
      ___stack_chk_fail();
      lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar26 = *(long *)(puVar19 + 0x20);
      func_0x00010c06b080();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(puVar19 + 0x20);
      func_0x00010bfe5020();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(puVar19 + 0x20);
      func_0x00010bfe4fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = *(undefined8 *)(puVar19 + 0x20);
      func_0x00010bfe4ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(puVar19 + 0x20);
      func_0x00010bf01d00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar23);
      _objc_release(uVar22);
      _objc_release(uVar21);
      _objc_release(uVar20);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
        ___stack_chk_fail();
        lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar26 = *(long *)(lVar26 + 0x20);
        func_0x00010c0e1940();
        _objc_retainAutoreleasedReturnValue();
        ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
          ___stack_chk_fail();
          lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar26 = *(long *)(lVar26 + 0x20);
          func_0x00010bfb73e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
            ___stack_chk_fail();
            lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar26 = *(long *)(lVar26 + 0x20);
            func_0x00010c29f8e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
              ___stack_chk_fail();
              lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar26 = *(long *)(lVar26 + 0x20);
              func_0x00010bfdee40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
                ___stack_chk_fail();
                lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
                lVar27 = *(long *)(lVar26 + 0x20);
                func_0x00010c06b000();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = *(undefined8 *)(lVar26 + 0x20);
                func_0x00010c06b040();
                _objc_retainAutoreleasedReturnValue();
                ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar20);
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar28) {
                  ___stack_chk_fail();
                  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  lVar26 = *(long *)(lVar27 + 0x28);
                  func_0x00010bfe6a60();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                  func_0x00010bf0a140();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar28) {
                    ___stack_chk_fail();
                    lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    uVar20 = *(undefined8 *)(lVar26 + 0x20);
                    func_0x00010c0edfa0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar29 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                    func_0x00010bf0a140();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar20);
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
                      ___stack_chk_fail();
                      ppuVar5 = &PTR____CFConstantStringClassReference_110e2d558;
                      func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2d558,
                                          &PTR____CFConstantStringClassReference_110e2d578,0);
                      func_0x000107c61180();
                      if (lRam00000001137fe070 != -1) {
                        func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
                      }
                      ppuVar29 = ppuVar5;
                      if ((bRam00000001137fe068 & 1) != 0) {
                        func_0x000107c312ec(ppuVar5);
                        func_0x000107c61180();
                        func_0x000107c61170(ppuVar5);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar29);
  return;
}



/* Entry: 105e77118; end: 105e7750b; +[SCReportAdReasons rootReasonForSelectedMenuReason:illegalContentRedirectUrl:isAppInstallOrDeeplink:] */

void FUN_105e77118(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c5430;
  _objc_retain(param_3);
  func_0x00010bf88280();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc0000000;
  pcStack_120 = FUN_105e7750c;
  puStack_118 = &UNK_1108efb58;
  ppuVar3 = &puStack_130;
  uStack_110 = param_1;
  uStack_108 = param_5;
  puStack_100 = puVar2;
  _objc_retainBlock();
  puVar4 = PTR_PTR_1126c5430;
  ppuStack_c0 = ppuVar3;
  func_0x00010c0e1940();
  _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar1;
  uStack_150 = 0xc0000000;
  pcStack_148 = FUN_105e77634;
  puStack_140 = &UNK_1108efb78;
  ppuVar25 = &puStack_158;
  uStack_138 = param_1;
  puStack_f8 = puVar4;
  _objc_retainBlock();
  puVar5 = PTR_PTR_1126c5430;
  ppuStack_b8 = ppuVar25;
  func_0x00010c117f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar1;
  uStack_178 = 0xc0000000;
  uStack_170 = 0x105e776c4;
  puStack_168 = &UNK_1108efb78;
  ppuVar6 = &puStack_180;
  uStack_160 = param_1;
  puStack_f0 = puVar5;
  _objc_retainBlock();
  puVar7 = PTR_PTR_1126c5430;
  ppuStack_b0 = ppuVar6;
  func_0x00010c0e1980();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = puVar1;
  uStack_1a0 = 0xc0000000;
  uStack_198 = 0x105e77754;
  puStack_190 = &UNK_1108efb78;
  ppuVar8 = &puStack_1a8;
  uStack_188 = param_1;
  puStack_e8 = puVar7;
  _objc_retainBlock();
  puVar9 = PTR_PTR_1126c5430;
  ppuStack_a8 = ppuVar8;
  func_0x00010c0e1960();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc0000000;
  uStack_1c0 = 0x105e777e4;
  puStack_1b8 = &UNK_1108efb78;
  ppuVar10 = &puStack_1d0;
  uStack_1b0 = param_1;
  puStack_e0 = puVar9;
  _objc_retainBlock();
  puVar11 = PTR_PTR_1126c5430;
  ppuStack_a0 = ppuVar10;
  func_0x00010bfee1a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1f8 = puVar1;
  uStack_1f0 = 0xc0000000;
  pcStack_1e8 = FUN_105e77874;
  puStack_1e0 = &UNK_1108efb78;
  ppuVar12 = &puStack_1f8;
  uStack_1d8 = param_1;
  puStack_d8 = puVar11;
  _objc_retainBlock();
  puVar13 = PTR_PTR_1126c5430;
  ppuStack_98 = ppuVar12;
  func_0x00010bfe6a40();
  _objc_retainAutoreleasedReturnValue();
  puStack_228 = puVar1;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_105e77930;
  puStack_210 = &UNK_1108efb98;
  uStack_200 = param_1;
  puStack_d0 = puVar13;
  _objc_retain(param_4);
  ppuVar14 = &puStack_228;
  lStack_208 = param_4;
  _objc_retainBlock();
  puVar15 = PTR_PTR_1126c5430;
  ppuStack_90 = ppuVar14;
  func_0x00010c06b0e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_250 = puVar1;
  uStack_248 = 0xc0000000;
  uStack_240 = 0x105e779d4;
  puStack_238 = &UNK_1108efb78;
  ppuVar16 = &puStack_250;
  uStack_230 = param_1;
  puStack_c8 = puVar15;
  _objc_retainBlock();
  ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_88 = ppuVar16;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar16);
  _objc_release(puVar15);
  _objc_release(ppuVar14);
  _objc_release(puVar13);
  _objc_release(ppuVar12);
  _objc_release(puVar11);
  _objc_release(ppuVar10);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar25);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  ppuVar3 = ppuVar17;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar25 = (undefined **)0x0;
  }
  else {
    ppuVar25 = ppuVar3;
    (*(code *)ppuVar3[2])();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar17);
  _objc_release(lStack_208);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar18 = *(long *)(param_4 + 0x20);
    func_0x00010c06b080();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bfe5020();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bfe4fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bfe4ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010bf01d00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
      ___stack_chk_fail();
      lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *(long *)(lVar18 + 0x20);
      func_0x00010c0e1940();
      _objc_retainAutoreleasedReturnValue();
      ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
        ___stack_chk_fail();
        lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar18 = *(long *)(lVar18 + 0x20);
        func_0x00010bfb73e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
          ___stack_chk_fail();
          lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar18 = *(long *)(lVar18 + 0x20);
          func_0x00010c29f8e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
            ___stack_chk_fail();
            lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar18 = *(long *)(lVar18 + 0x20);
            func_0x00010bfdee40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
              ___stack_chk_fail();
              lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar23 = *(long *)(lVar18 + 0x20);
              func_0x00010c06b000();
              _objc_retainAutoreleasedReturnValue();
              uVar19 = *(undefined8 *)(lVar18 + 0x20);
              func_0x00010c06b040();
              _objc_retainAutoreleasedReturnValue();
              ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar19);
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
                ___stack_chk_fail();
                lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
                lVar18 = *(long *)(lVar23 + 0x28);
                func_0x00010bfe6a60();
                _objc_retainAutoreleasedReturnValue();
                ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
                  ___stack_chk_fail();
                  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
                  uVar19 = *(undefined8 *)(lVar18 + 0x20);
                  func_0x00010c0edfa0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar25 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                  func_0x00010bf0a140();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar19);
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
                    ___stack_chk_fail();
                    ppuVar3 = &PTR____CFConstantStringClassReference_110e2d558;
                    func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2d558,
                                        &PTR____CFConstantStringClassReference_110e2d578,0);
                    func_0x000107c61180();
                    if (lRam00000001137fe070 != -1) {
                      func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
                    }
                    ppuVar25 = ppuVar3;
                    if ((bRam00000001137fe068 & 1) != 0) {
                      func_0x000107c312ec(ppuVar3);
                      func_0x000107c61180();
                      func_0x000107c61170(ppuVar3);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar25);
  return;
}



/* Entry: 105e7750c; end: 105e77633;  */

void FUN_105e7750c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c06b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5020();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe4fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe4ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf01d00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *(long *)(lVar2 + 0x20);
    func_0x00010c0e1940();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = *(long *)(lVar2 + 0x20);
      func_0x00010bfb73e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        ___stack_chk_fail();
        lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar2 = *(long *)(lVar2 + 0x20);
        func_0x00010c29f8e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
          ___stack_chk_fail();
          lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar2 = *(long *)(lVar2 + 0x20);
          func_0x00010bfdee40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
            ___stack_chk_fail();
            lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar8 = *(long *)(lVar2 + 0x20);
            func_0x00010c06b000();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = *(undefined8 *)(lVar2 + 0x20);
            func_0x00010c06b040();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
              ___stack_chk_fail();
              lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar2 = *(long *)(lVar8 + 0x28);
              func_0x00010bfe6a60();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
                ___stack_chk_fail();
                lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                uVar3 = *(undefined8 *)(lVar2 + 0x20);
                func_0x00010c0edfa0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar3);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
                  ___stack_chk_fail();
                  ppuVar1 = &PTR____CFConstantStringClassReference_110e2d558;
                  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2d558,
                                      &PTR____CFConstantStringClassReference_110e2d578,0);
                  func_0x000107c61180();
                  if (lRam00000001137fe070 != -1) {
                    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
                  }
                  ppuVar7 = ppuVar1;
                  if ((bRam00000001137fe068 & 1) != 0) {
                    func_0x000107c312ec(ppuVar1);
                    func_0x000107c61180();
                    func_0x000107c61170(ppuVar1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 105e77634; end: 105e77873;  */

void FUN_105e77634(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e1940();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *(long *)(lVar2 + 0x20);
    func_0x00010bfb73e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = *(long *)(lVar2 + 0x20);
      func_0x00010c29f8e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar2 = *(long *)(lVar2 + 0x20);
        func_0x00010bfdee40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
          ___stack_chk_fail();
          lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar5 = *(long *)(lVar2 + 0x20);
          func_0x00010c06b000();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(lVar2 + 0x20);
          func_0x00010c06b040();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
            ___stack_chk_fail();
            lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar2 = *(long *)(lVar5 + 0x28);
            func_0x00010bfe6a60();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
              ___stack_chk_fail();
              lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
              uVar4 = *(undefined8 *)(lVar2 + 0x20);
              func_0x00010c0edfa0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
                ___stack_chk_fail();
                ppuVar1 = &PTR____CFConstantStringClassReference_110e2d558;
                func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2d558,
                                    &PTR____CFConstantStringClassReference_110e2d578,0);
                func_0x000107c61180();
                if (lRam00000001137fe070 != -1) {
                  func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
                }
                ppuVar3 = ppuVar1;
                if ((bRam00000001137fe068 & 1) != 0) {
                  func_0x000107c312ec(ppuVar1);
                  func_0x000107c61180();
                  func_0x000107c61170(ppuVar1);
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105e77874; end: 105e7792f;  */

void FUN_105e77874(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c06b000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c06b040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *(long *)(lVar2 + 0x28);
    func_0x00010bfe6a60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      func_0x00010c0edfa0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        ppuVar1 = &PTR____CFConstantStringClassReference_110e2d558;
        func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2d558,
                            &PTR____CFConstantStringClassReference_110e2d578,0);
        func_0x000107c61180();
        if (lRam00000001137fe070 != -1) {
          func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
        }
        ppuVar4 = ppuVar1;
        if ((bRam00000001137fe068 & 1) != 0) {
          func_0x000107c312ec(ppuVar1);
          func_0x000107c61180();
          func_0x000107c61170(ppuVar1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105e77930; end: 105e77a63;  */

void FUN_105e77930(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x28);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (*(undefined ***)(param_1 + 0x20) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x20);
  }
  func_0x00010bfe6a60(lVar2,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    func_0x00010c0edfa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      ppuVar1 = &PTR____CFConstantStringClassReference_110e2d558;
      func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2d558,
                          &PTR____CFConstantStringClassReference_110e2d578,0);
      func_0x000107c61180();
      if (lRam00000001137fe070 != -1) {
        func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
      }
      ppuVar3 = ppuVar1;
      if ((bRam00000001137fe068 & 1) != 0) {
        func_0x000107c312ec(ppuVar1);
        func_0x000107c61180();
        func_0x000107c61170(ppuVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105e77a64; end: 105e77d1b;  */

void FUN_105e77a64(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2d558;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2d558,
                      &PTR____CFConstantStringClassReference_110e2d578,0);
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



/* Entry: 105e77d1c; end: 105e77daf; +[SCAdAboutAdsViewModel dynamicWithViewModel:context:] */

void FUN_105e77d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c5370;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e77db0; end: 105e77df7; +[SCAdAboutAdsViewModel static] */

void FUN_105e77db0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5370;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e77df8; end: 105e77e1b; -[SCAdAboutAdsViewModel copyWithZone:] */

undefined8 FUN_105e77df8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e77e1c; end: 105e77e93; -[SCAdAboutAdsViewModel hash] */

void FUN_105e77e1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126ed818;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e77e94; end: 105e77ed7; -[SCAdAboutAdsViewModel internalInit] */

void FUN_105e77e94(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ed818;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e77ed8; end: 105e77f8f; -[SCAdAboutAdsViewModel isEqual:] */

long FUN_105e77ed8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105e77f68:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e77f74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105e77f74;
        }
        goto LAB_105e77f68;
      }
    }
    lVar3 = 0;
  }
LAB_105e77f74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e77f90; end: 105e78013; -[SCAdAboutAdsViewModel matchStatic:dynamic:] */

void FUN_105e77f90(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e78014; end: 105e78043; -[SCAdAboutAdsViewModel .cxx_destruct] */

void FUN_105e78014(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105e78044; end: 105e7815f; -[SCCustomReportV3Scope initWithUiContainer:reportType:rootReason:delegate:viewConfig:] */

undefined1 *
FUN_105e78044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ed820;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
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



/* Entry: 105e78160; end: 105e78167; -[SCCustomReportV3Scope uiContainer] */

undefined8 FUN_105e78160(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e78168; end: 105e7816f; -[SCCustomReportV3Scope reportType] */

undefined8 FUN_105e78168(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e78170; end: 105e78177; -[SCCustomReportV3Scope rootReason] */

undefined8 FUN_105e78170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e78178; end: 105e7818f; -[SCCustomReportV3Scope delegate] */

void FUN_105e78178(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e78190; end: 105e78197; -[SCCustomReportV3Scope viewConfig] */

undefined8 FUN_105e78190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105e78198; end: 105e781e7; -[SCCustomReportV3Scope .cxx_destruct] */

void FUN_105e78198(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e781e8; end: 105e7848b; -[SCAdNetworkManagerObjCSupport submitLegacyRequest:useCustomUserAgent:successBlock:failureBlock:] */

void FUN_105e781e8(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010bfcb800();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = param_3;
  func_0x00010bfcbc40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_4 != 0) {
    puVar4 = param_3;
    func_0x00010bfcbce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar4,&PTR____CFConstantStringClassReference_110e2d8f8);
    _objc_release(puVar4);
  }
  puVar5 = param_3;
  func_0x00010bfc8680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar5;
  }
  func_0x00010bef7f60(puVar2,param_2,puVar4);
  _objc_release(puVar5);
  puVar4 = PTR_PTR_1126b4960;
  puVar5 = param_3;
  func_0x00010bfc3140(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010c135a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf587c0(puVar4,param_2,puVar3,0,puVar5,puVar2,puVar6,PTR____NSArray0__struct_11034ab48
                      ,4,1,3,puVar1 == (undefined *)0x1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105e7848c;
  puStack_70 = &UNK_1108efbc8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105e784a8;
  puStack_98 = &UNK_1108a0d30;
  uStack_90 = param_6;
  uStack_68 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_5);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c25f5a0(puVar5,param_2,puVar4,0,PTR___dispatch_main_q_11034be20,
                      PTR___dispatch_main_q_11034be20,&puStack_88,&puStack_b0);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105e7848c; end: 105e784c3;  */

void FUN_105e7848c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e784a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 105e784c4; end: 105e7860b; -[SCAdNetworkManagerObjCSupport submitRetryRequest:successBlock:failureBlock:] */

void FUN_105e784c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2721c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105e7860c;
  puStack_50 = &UNK_1108efbc8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105e78620;
  puStack_78 = &UNK_1108a0d30;
  uStack_70 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c25f5a0(puVar2,param_2,uVar3,0,PTR___dispatch_main_q_11034be20,
                      PTR___dispatch_main_q_11034be20,&puStack_68,&puStack_90);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105e7860c; end: 105e7861f;  */

void FUN_105e7860c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e78618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e78620; end: 105e7865f;  */

void FUN_105e78620(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c252ee0(param_3);
                    /* WARNING: Could not recover jumptable at 0x000105e78650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 105e78660; end: 105e7872b; -[SCAdNetworkManagerObjCSupport logRetroNilInstanceForCategory:] */

void FUN_105e78660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010c13f200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105e7872c; end: 105e7873b; -[SCAdNetworkManager submit:successBlock:failureBlock:] */

void FUN_105e7872c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_submit_useMainThread_successBloc_1126755a8,param_3,1,param_4,param_5);
  return;
}



/* Entry: 105e7873c; end: 105e789a7; -[SCAdNetworkManager submit:useMainThread:successBlock:failureBlock:] */

void FUN_105e7873c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c25ee00(*(long *)(param_1 + 0x48),param_2,param_3,param_4,param_5,param_6);
    goto LAB_105e7896c;
  }
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e789a8;
  puStack_90 = &UNK_1108efbf8;
  _objc_retain(param_5);
  uStack_88 = param_5;
  uStack_78 = (char)param_4;
  _objc_retain(param_6);
  ppuVar2 = &puStack_a8;
  uStack_80 = param_6;
  _objc_retainBlock();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105e78bec;
  puStack_c0 = &UNK_1108efc28;
  _objc_retain(param_6);
  ppuVar3 = &puStack_d8;
  uStack_b8 = param_6;
  uStack_b0 = (char)param_4;
  _objc_retainBlock();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x105e78d88;
  puStack_e8 = &UNK_1108efbc8;
  _objc_retain(ppuVar2);
  ppuVar4 = &puStack_100;
  ppuStack_e0 = ppuVar2;
  _objc_retainBlock(ppuVar4);
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x105e78d9c;
  puStack_110 = &UNK_1108a0d30;
  _objc_retain(ppuVar3);
  ppuVar5 = &puStack_128;
  ppuStack_108 = ppuVar3;
  _objc_retainBlock(ppuVar5);
  lVar6 = param_3;
  func_0x00010c13f260();
  if ((lVar6 == 6) || (lVar6 = param_3, func_0x00010c07b140(), (int)lVar6 == 0)) {
LAB_105e78910:
    func_0x00010bec6500(param_1,param_2,param_3,ppuVar4,ppuVar5);
  }
  else {
    lVar6 = param_1;
    func_0x00010bdf29c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c13f540();
    if ((lVar7 == 0) && (lVar7 = lVar6, func_0x00010c231c80(), (int)lVar7 == 0)) {
      _objc_release(lVar6);
      goto LAB_105e78910;
    }
    func_0x00010bec6660(param_1,param_2,lVar6,ppuVar2,ppuVar3);
    _objc_release(lVar6);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuStack_108);
  _objc_release(ppuVar4);
  _objc_release(ppuStack_e0);
  _objc_release(ppuVar3);
  _objc_release(uStack_b8);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
LAB_105e7896c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105e789a8; end: 105e78b47;  */

void FUN_105e789a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aeec0;
  puVar4 = PTR_PTR_1126ae960;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    else {
      puVar3 = PTR_PTR_1126b8dd8;
      func_0x00010bef4da0(PTR_PTR_1126b8dd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef22a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae970;
      func_0x00010c292920(PTR_PTR_1126ae970);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar7);
      _objc_retain(param_2);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      _objc_retain(param_3);
      func_0x00010bf0caa0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_3);
      _objc_release(uVar6);
      _objc_release(param_2);
      _objc_release(uVar7);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105e78b48; end: 105e78beb;  */

void FUN_105e78b48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((int)param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e78bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        *(undefined8 *)PTR__NSURLErrorDomain_110345620,0xfffffffffffffc19,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105e78bec; end: 105e78d73;  */

void FUN_105e78bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aeec0;
  puVar4 = PTR_PTR_1126ae960;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    else {
      puVar3 = PTR_PTR_1126b8dd8;
      func_0x00010bef4da0(PTR_PTR_1126b8dd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef22a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae970;
      func_0x00010c292920(PTR_PTR_1126ae970);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      _objc_retain(param_2);
      _objc_retain(param_3);
      func_0x00010bf0ca80(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(uVar6);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105e78d74; end: 105e78daf;  */

void FUN_105e78d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105e78d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105e78db0; end: 105e78f6f; -[SCAdNetworkManager submitRetryRequest:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_105e78db0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_b0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105e78f70;
    puStack_70 = &UNK_1108efbc8;
    _objc_retain(param_6);
    uStack_68 = param_6;
    _objc_retain(param_3);
    ppuVar2 = &puStack_88;
    _objc_retainBlock(ppuVar2);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105e78f84;
    puStack_98 = &UNK_1108a0d30;
    _objc_retain(param_7);
    uStack_90 = param_7;
    _objc_retainBlock(&puStack_b0);
    puVar4 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c2721c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar1 = PTR___dispatch_main_q_11034be20;
    func_0x00010c25f5a0(puVar4,param_2,uVar5,0,PTR___dispatch_main_q_11034be20,
                        PTR___dispatch_main_q_11034be20,ppuVar2,ppuVar3);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(uStack_90);
    _objc_release(ppuVar2);
    param_3 = uStack_68;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c25f7e0(lVar6,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 105e78f70; end: 105e78f83;  */

void FUN_105e78f70(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105e78f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105e78f84; end: 105e78fc3;  */

void FUN_105e78f84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c252ee0(param_3);
                    /* WARNING: Could not recover jumptable at 0x000105e78fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 105e78fc4; end: 105e7901f; -[SCAdNetworkManager cleanup] */

void FUN_105e78fc4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3a210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x48),PTR_s_cleanup_1125ac228);
    return;
  }
  func_0x00010bf3bc80(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  func_0x00010bf3bc80(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf2eed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_cancelRequests_1125a9558);
  return;
}



/* Entry: 105e79020; end: 105e790ef; -[SCAdNetworkManager _createRetriableWithRequest:] */

void FUN_105e79020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c5460;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c135a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047160(puVar1,param_2,param_3,uVar2,0,0,uVar3,uVar4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e790f0; end: 105e7911b; -[SCAdNetworkManager _shouldUseCustomUserAgent:] */

ulong FUN_105e790f0(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb71d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__shouldUseCustomUserAgent__11258b618);
    return uVar1;
  }
  func_0x00010c136d60(param_3);
  return (ulong)(param_3 == 6);
}



/* Entry: 105e7911c; end: 105e79127; -[SCAdNetworkManager _httpMethodFromRequestType:] */

bool FUN_105e7911c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 105e79128; end: 105e7939f; -[SCAdNetworkManager _submitRequest:successBlock:failureBlock:] */

void FUN_105e79128(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010c13f260();
  if (((puVar1 == (undefined *)0x5) && (*(long *)(param_1 + 0x38) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    func_0x00010bec61e0(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    puVar1 = param_3;
    func_0x00010bfcb800(param_3);
    lVar2 = param_1;
    func_0x00010be364e0(param_1,param_2,puVar1);
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar3 = param_3;
    func_0x00010bfcbc40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010beb71c0(param_1,param_2,param_3);
    if ((int)param_1 != 0) {
      puVar4 = param_3;
      func_0x00010bfcbce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110e2d8f8);
      _objc_release(puVar4);
    }
    puVar5 = param_3;
    func_0x00010bfc8680();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar5 != (undefined *)0x0) {
      puVar4 = puVar5;
    }
    func_0x00010bef7f60(puVar3,param_2,puVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b4960;
    puVar4 = param_3;
    func_0x00010bfc3140(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010c135a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf587c0(puVar5,param_2,puVar1,0,puVar4,puVar3,puVar6,
                        PTR____NSArray0__struct_11034ab48,4,1,3,lVar2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar6 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___dispatch_main_q_11034be20;
    func_0x00010c25f5a0();
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e793a0; end: 105e799af; -[SCAdNetworkManager _submitMatchaRequest:successBlock:failureBlock:] */

void FUN_105e793a0(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_138;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0 || lVar2 == 0) {
    if (param_5 == 0) goto LAB_105e79944;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    param_2 = (undefined *)0x0;
    (**(code **)(param_5 + 0x10))(param_5,0,0,puVar14);
  }
  else {
    func_0x00010bfcb800(param_3);
    func_0x00010be364e0(param_1);
    puVar14 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar3 = param_3;
    func_0x00010bfcbc40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar14 == (undefined *)0x0) {
      if (param_5 == 0) {
        puVar14 = (undefined *)0x0;
        goto LAB_105e7993c;
      }
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      param_2 = (undefined *)0x0;
      (**(code **)(param_5 + 0x10))(param_5,0,0,puVar3);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      func_0x00010beb71c0();
      if ((int)param_1 != 0) {
        puVar4 = param_3;
        func_0x00010bfcbce0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar4);
      }
      puVar4 = param_3;
      func_0x00010bfc8680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar3);
      _objc_release(puVar4);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = param_3;
      func_0x00010bfc3140();
      _objc_retainAutoreleasedReturnValue();
      param_2 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
      puVar15 = puVar4;
      _objc_opt_isKindOfClass(puVar4,param_2);
      if (((ulong)puVar15 & 1) == 0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar4);
        puVar15 = puVar4;
      }
      lVar5 = lVar2;
      func_0x00010bf225e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (lVar5 == 0) {
        if (param_5 != 0) {
          puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          param_2 = (undefined *)0x0;
          (**(code **)(param_5 + 0x10))(param_5,0,0,puVar12);
          goto LAB_105e79910;
        }
      }
      else {
        puVar11 = PTR_PTR_1126b7220;
        func_0x00010c135080(PTR_PTR_1126b7220);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_3;
        func_0x00010c135a00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        if (puVar6 == (undefined *)0x0) {
          puStack_138 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          func_0x00010bdc3540();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puStack_138;
          func_0x00010bdc3580();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar8 = puVar11;
        func_0x00010c2af9a0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c2bcaa0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c2b7240();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar10;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        if (puVar6 == (undefined *)0x0) {
          _objc_release(puVar7);
          _objc_release(puStack_138);
        }
        _objc_release(puVar6);
        _objc_release(puVar11);
        _objc_retain(param_5);
        _objc_retain(param_4);
        func_0x00010c25f600(lVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(param_4);
        _objc_release(param_5);
LAB_105e79910:
        _objc_release(puVar12);
      }
      _objc_release(lVar5);
      _objc_release(puVar15);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
LAB_105e7993c:
  _objc_release(puVar14);
LAB_105e79944:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  if ((param_3[0x20] & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c290a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_useSnapTokenHeaderWithAccessType_112681cb8,6)
  ;
  return;
}



/* Entry: 105e799b0; end: 105e799c7;  */

void FUN_105e799b0(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c290a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_useSnapTokenHeaderWithAccessType_112681cb8,6)
  ;
  return;
}



/* Entry: 105e799c8; end: 105e79b83;  */

void FUN_105e799c8(long param_1,long param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  code *pcVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  ppuVar4 = param_4;
  ppuVar9 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((long)param_3 - 1U < 2) {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      pcVar11 = *(code **)(lVar2 + 0x10);
      ppuVar4 = param_6;
LAB_105e79a50:
      ppuVar8 = param_4;
      (*pcVar11)(lVar2,0,param_4,ppuVar4);
    }
  }
  else if (param_3 == (undefined **)0x0) {
    ppuVar3 = param_4;
    func_0x00010c252ee0();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if ((long)ppuVar3 < 400) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 != 0) {
        pcVar11 = *(code **)(lVar2 + 0x10);
        ppuVar4 = param_5;
        goto LAB_105e79a50;
      }
    }
    else {
      ppuVar4 = param_4;
      func_0x00010c252ee0(param_4);
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &PTR____CFConstantStringClassReference_110e2d918;
      ppuVar9 = ppuVar3;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 != 0) {
        ppuVar8 = param_4;
        ppuVar4 = ppuVar5;
        (**(code **)(lVar2 + 0x10))(lVar2,0,param_4,ppuVar5);
      }
      _objc_release(ppuVar5);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar9);
  ppuVar5 = ppuVar8;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar5;
  func_0x00010c13f260();
  _objc_release(ppuVar5);
  if ((long)ppuVar3 - 3U < 2) {
    func_0x00010c281660(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (ppuVar3 == (undefined **)0x1) {
      uVar6 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf90160();
      _objc_release(uVar6);
      if ((int)uVar7 != 0) {
        func_0x00010c23f340(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25f640();
        goto LAB_105e79c98;
      }
    }
    func_0x00010c23f320(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c25f660();
  _objc_release(puVar1);
LAB_105e79c98:
  _objc_release(param_2);
  _objc_release(ppuVar9);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 105e79b84; end: 105e79cc7; -[SCAdNetworkManager _submitRetriableRequest:successBlock:failureBlock:] */

void FUN_105e79b84(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c13f260();
  _objc_release(lVar2);
  if (lVar3 - 3U < 2) {
    func_0x00010c281660(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar3 == 1) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf90160();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        func_0x00010c23f340(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25f640();
        goto LAB_105e79c98;
      }
    }
    func_0x00010c23f320(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c25f660();
  _objc_release(puVar1);
LAB_105e79c98:
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e79cc8; end: 105e79d3b; -[SCAdNetworkManager unlockablesRetriableRequestManager] */

void FUN_105e79cc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010bdf29a0(param_1,param_2,3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      *(long *)(param_1 + 0x50) = lVar1;
      _objc_release(uVar2);
      lVar1 = *(long *)(param_1 + 0x50);
    }
    _objc_retain(lVar1);
  }
  else {
    func_0x00010c281660();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e79d3c; end: 105e79daf; -[SCAdNetworkManager snapAdsRetriableRequestManager] */

void FUN_105e79d3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010bdf29a0(param_1,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      *(long *)(param_1 + 0x58) = lVar1;
      _objc_release(uVar2);
      lVar1 = *(long *)(param_1 + 0x58);
    }
    _objc_retain(lVar1);
  }
  else {
    func_0x00010c23f320();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e79db0; end: 105e79e23; -[SCAdNetworkManager snapAdsRetriableRequestManagerV3] */

void FUN_105e79db0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c23f340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010c1da9c0(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x28));
    lVar4 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105e79e24; end: 105e79ee3; -[SCAdNetworkManager _createRetriableRequestManager:] */

void FUN_105e79e24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 4) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c23f320();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 3) {
      lVar2 = 0;
      goto LAB_105e79e94;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c281660();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
LAB_105e79e94:
  lVar1 = param_1;
  func_0x00010be703e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6ee40(param_1,param_2,lVar2,lVar1);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be57f00(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e79ee4; end: 105e79fc7; -[SCAdNetworkManager _logRetroNilInstanceMetric:] */

void FUN_105e79ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c13f200(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5468;
  func_0x00010bf33660(PTR_PTR_1126c5468,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcef38,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105e79fc8; end: 105e7a06b; -[SCAdNetworkManager _overwriteRetryAndPersistBlock:statusCodes:] */

void FUN_105e79fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c200f00(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108efc78);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e7a098;
  puStack_30 = &UNK_1108efc98;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c200b60(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 105e7a06c; end: 105e7a097;  */

bool FUN_105e7a06c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c252ee0(param_2);
    return 499 < param_2;
  }
  return true;
}



/* Entry: 105e7a098; end: 105e7a13b;  */

undefined8 FUN_105e7a098(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c252ee0();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 < 500) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c252ee0(param_2);
      func_0x00010c0df780(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar3);
      _objc_release(puVar2);
    }
    else {
      uVar3 = 1;
    }
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105e7a13c; end: 105e7a1c7; -[SCAdNetworkManager _parsePersistenceStatusCodes] */

void FUN_105e7a13c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf44740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e7a1c8; end: 105e7a1f7;  */

void FUN_105e7a1c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_2);
  return;
}



/* Entry: 105e7a1f8; end: 105e7a293; -[SCAdNetworkManager .cxx_destruct] */

void FUN_105e7a1f8(long param_1)

{
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



/* Entry: 105e7a294; end: 105e7a503; -[SCAdTrackPersistenceRequest toRetriableRequest:adConfigProviderV2:userAdIdProvider:] */

void FUN_105e7a294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  puVar1 = PTR_PTR_1126b8df0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c291200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c27dd80();
  uVar5 = param_2;
  func_0x00010c0f01c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf1e9c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c13f260();
  uVar8 = param_2;
  func_0x00010bef2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010bef60a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010c136d60();
  func_0x00010c135580();
  func_0x00010bef4240();
  uVar11 = param_2;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4dc0(param_2);
  uVar12 = param_2;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a380(param_1,puVar1,param_3,uVar2,uVar3,uVar4,uVar5,uVar6,0,uVar7,uVar8,uVar9,
                      uVar10,0);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar13 = PTR_PTR_1126c5460;
  _objc_alloc(PTR_PTR_1126c5460);
  uVar2 = param_2;
  func_0x00010c086560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf519a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047160(puVar13,param_3,puVar1,uVar2,param_2,0,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105e7a504; end: 105e7a59b; -[SCRetriableRequestCallbackInvoker setResponse:data:error:] */

void FUN_105e7a504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_5;
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e7a59c; end: 105e7a59f; -[SCRetriableRequestCallbackInvoker invokeSuccess] */

void FUN_105e7a59c(void)

{
  return;
}



/* Entry: 105e7a5a0; end: 105e7a5a3; -[SCRetriableRequestCallbackInvoker invokeFailure] */

void FUN_105e7a5a0(void)

{
  return;
}



/* Entry: 105e7a5a4; end: 105e7a5ab; -[SCRetriableRequestCallbackInvoker response] */

undefined8 FUN_105e7a5a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105e7a5ac; end: 105e7a5b3; -[SCRetriableRequestCallbackInvoker data] */

undefined8 FUN_105e7a5ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e7a5b4; end: 105e7a5bb; -[SCRetriableRequestCallbackInvoker error] */

undefined8 FUN_105e7a5b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


