/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ba97d0; end: 107ba9857; -[SCWebBrowserV11ViewController _shouldPresentPrivacyPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107ba97d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b7c0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c231fe0();
  if ((int)uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b760);
    func_0x00010bef2500(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf80ee0();
    uVar4 = (uint)uVar2 ^ 1;
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 107ba9858; end: 107ba9923; -[SCWebBrowserV11ViewController _getAuthorizePromise] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba9858(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b7d0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf11140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107ba9924;
  puStack_50 = &UNK_110860818;
  puStack_48 = puVar1;
  func_0x00010c297260(uVar3,param_2,&puStack_68,*(undefined8 *)(param_1 + _DAT_11276b7b8));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ba9924; end: 107ba9937;  */

void FUN_107ba9924(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfbb6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithError__1125cc760);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768,param_2);
  return;
}



/* Entry: 107ba9938; end: 107ba9a87; -[SCWebBrowserV11ViewController _webview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba9938(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + _DAT_11276b82c);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126d6d80;
    func_0x00010bfef960(PTR_PTR_1126d6d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd180(param_1);
    _objc_release(puVar2);
    lVar4 = param_1;
    func_0x00010be3bde0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d6d80;
    func_0x00010bfee740(PTR_PTR_1126d6d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd180(param_1);
    _objc_release(puVar2);
    iVar1 = 2;
    func_0x000100029b9c(2,0x10,4,0);
    if (iVar1 != 0) {
      func_0x00010c1ada00(lVar4);
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(lVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c152980(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar3);
    _objc_release(puVar2);
    func_0x00010c1d4c20(lVar4);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107ba9a88; end: 107ba9e13; -[SCWebBrowserV11ViewController _initializeWebView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba9a88(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = param_1;
  func_0x00010beb4960();
  if ((int)uVar1 != 0) {
    lVar10 = param_1 + (long)_DAT_11276b75c;
    _objc_loadWeakRetained(lVar10);
    uVar1 = param_1;
    func_0x00010beead40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3000(lVar10);
    _objc_release(uVar1);
    _objc_release(lVar10);
  }
  lVar10 = (long)_DAT_11276b760;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf92340();
  _objc_release(uVar2);
  if ((int)uVar9 != 0) {
    uVar1 = param_1;
    func_0x00010c2a4360();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bef2500(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c107740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfc8f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    if (uVar4 != 0) {
      uVar9 = *(undefined8 *)(param_1 + (long)_DAT_11276b788);
      puVar5 = PTR_PTR_1126d6d08;
      func_0x00010c09bec0(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(uVar9);
      _objc_release(puVar5);
      uVar1 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) {
        uVar1 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3200();
        _objc_release(uVar1);
      }
      *(undefined1 *)(param_1 + (long)_DAT_11276b83c) = 1;
    }
    _objc_release(uVar4);
  }
  puVar6 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_opt_new(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x00010c189540();
  func_0x00010c167600(puVar6);
  uVar1 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf7fd40();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126af390;
  if ((uVar4 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf45e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf9c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bf45e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b9e0();
    func_0x00010bf07bc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169940(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  puVar5 = PTR_PTR_1126b4f58;
  uVar9 = *(undefined8 *)(param_1 + (long)_DAT_11276b814);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf91a80();
  func_0x00010bdc3640(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11276b82c);
  *(undefined **)(param_1 + (long)_DAT_11276b82c) = puVar5;
  _objc_release(uVar2);
  _objc_retain(puVar5);
  _objc_release(uVar9);
  func_0x00010bea9d40(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107ba9e14; end: 107ba9ebb; -[SCWebBrowserV11ViewController _createTextInputAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba9e14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6db8;
  _objc_alloc(PTR_PTR_1126d6db8);
  puVar2 = PTR_PTR_1126d6dc0;
  _objc_opt_new(PTR_PTR_1126d6dc0);
  lVar3 = param_1;
  func_0x00010bdeb1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar1,param_2,puVar2,lVar3,*(undefined8 *)(param_1 + _DAT_11276b7e8));
  _objc_release(lVar3);
  _objc_release(puVar2);
  func_0x00010c19f0e0(0,0,0,0x404e000000000000,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ba9ebc; end: 107baa203; -[SCWebBrowserV11ViewController _createAutofillKeyboardAccessoryContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba9ebc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar2 = PTR_PTR_1126d6dc8;
  _objc_opt_new(PTR_PTR_1126d6dc8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107baa204;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  puVar3 = puVar2;
  func_0x00010c19e0e0(puVar2);
  FUN_107ba2134();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276b7ec);
  func_0x00010c0b7600(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166aa0(puVar2);
  _objc_release(uVar7);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107baa284;
  puStack_b0 = &UNK_1109feef8;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c1a3340(puVar2);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x107baa2dc;
  puStack_d8 = &UNK_1109fef88;
  _objc_copyWeak(auStack_d0,auStack_78);
  func_0x00010c1d33c0(puVar2);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276b804);
  func_0x00010c272120(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e080(puVar2);
  _objc_release(uVar7);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x107baa3ac;
  puStack_100 = &UNK_110843540;
  _objc_copyWeak(auStack_f8,auStack_78);
  func_0x00010c17c880(puVar2);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_107baa45c;
  puStack_128 = &UNK_1109fefb8;
  _objc_copyWeak(auStack_120,auStack_78);
  func_0x00010c1a3300(puVar2);
  _objc_copyWeak(auStack_148,auStack_78);
  func_0x00010c1c0400(puVar2);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107baa204; end: 107baa27b;  */

void FUN_107baa204(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107baa27c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107baa27c; end: 107baa283;  */

void FUN_107baa27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be680d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__onBlur_1125779d0);
  return;
}



/* Entry: 107baa284; end: 107baa44f;  */

void FUN_107baa284(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d6d68;
    _objc_opt_new(PTR_PTR_1126d6d68);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bfc2ae0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107baa450; end: 107baa45b;  */

void FUN_107baa450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde0590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearForm__112555b00,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107baa45c; end: 107baa4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107baa45c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276b7cc);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf55bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf553a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107baa4fc; end: 107baa553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107baa4fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0b0320(*(undefined8 *)(param_1 + _DAT_11276b7e0));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107baa554; end: 107baa9c3; -[SCWebBrowserV11ViewController getAutofillUserInfoWithServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107baa554(ulong param_1,undefined8 param_2)

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
  ulong uVar10;
  undefined *puVar11;
  
  uVar1 = param_1;
  func_0x00010b88e048();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d6d68;
  _objc_alloc_init(PTR_PTR_1126d6d68);
  uVar3 = uVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010901e6c8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(ulong *)(param_1 + (long)_DAT_11276b7dc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bfb18a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c08fa60();
  if (uVar6 == 0) {
    func_0x00010c19d320(puVar2,param_2,uVar4);
  }
  else {
    uVar6 = uVar5;
    func_0x00010bfb18a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d320(puVar2,param_2,uVar6);
    _objc_release(uVar6);
  }
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010c089720();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c08fa60();
  _objc_release(uVar3);
  if (uVar6 == 0) {
    uVar3 = uVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c08fa60();
    uVar7 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    if (uVar6 <= uVar7) goto LAB_107baa784;
    uVar3 = uVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c08fa60(uVar4);
    uVar7 = uVar1;
    func_0x00010bf85d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08fa60();
    uVar9 = uVar4;
    func_0x00010c08fa60(uVar4);
    uVar10 = uVar3;
    func_0x00010c260c80(uVar3,param_2,uVar6,uVar8 - uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar3);
    puVar11 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar10;
    func_0x00010c25d0a0(uVar10,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    uVar6 = uVar3;
    func_0x00010c08fa60();
    if (uVar6 != 0) {
      func_0x00010c1b8360(puVar2,param_2,uVar3);
    }
    _objc_release(uVar3);
  }
  else {
    uVar10 = uVar5;
    func_0x00010c089720(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8360(puVar2,param_2,uVar10);
  }
  _objc_release(uVar10);
LAB_107baa784:
  uVar3 = uVar5;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c08fa60();
  if (uVar6 == 0) {
    uVar6 = uVar1;
    func_0x00010c0faaa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = uVar5;
    func_0x00010c0faf60(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1db1c0(puVar2,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar6 = uVar5;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08fa60();
  uVar3 = uVar1;
  if (uVar7 != 0) {
    uVar3 = uVar5;
  }
  func_0x00010bf8d6c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194080(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar3 = uVar5;
  func_0x00010c1055e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c08fa60();
  if (uVar6 == 0) {
    uVar6 = uVar1;
    func_0x00010c2befe0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = uVar5;
    func_0x00010c1055e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1df540(puVar2,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010befd5a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010befd5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c08fa60();
  _objc_release(uVar6);
  if (uVar7 != 0) {
    uVar6 = uVar3;
    func_0x00010c25ce40(uVar3,param_2,&PTR____CFConstantStringClassReference_110db2d98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar7 = uVar5;
    func_0x00010befd5c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c25ce40(uVar6,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  func_0x00010c165c20(puVar2,param_2,uVar3);
  uVar6 = uVar5;
  func_0x00010bf39960(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c640(puVar2,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010c252440(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0(puVar2,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107baa9c4; end: 107bab4f7; -[SCWebBrowserV11ViewController _setUpWebView:webViewConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107baa9c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126d6dd0;
  _objc_alloc();
  _objc_copyWeak(auStack_70,auStack_68);
  puVar3 = PTR_PTR_1126b9450;
  func_0x00010c0f9860(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9450;
  func_0x00010c0f9820(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b9450;
  func_0x00010c0f9840(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b9450;
  func_0x00010c0867e0(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b9450;
  func_0x00010c086800(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000500();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d6dd8;
  _objc_alloc();
  lVar8 = param_1;
  func_0x00010bef4d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11276b760;
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bef2500(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044b80();
  _objc_release(uVar16);
  _objc_release(uVar9);
  _objc_release(lVar8);
  func_0x00010befa120(puVar1);
  func_0x00010c1da980(param_1);
  func_0x00010befa120(puVar1);
  puVar4 = PTR_PTR_1126d6de0;
  _objc_alloc();
  func_0x00010c00a2c0();
  func_0x00010c1a3700(param_1);
  func_0x00010befa120(puVar1);
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010c06b9e0();
  _objc_release(uVar9);
  if ((int)uVar16 != 0) {
    puVar5 = PTR_PTR_1126d6de8;
    _objc_alloc(PTR_PTR_1126d6de8);
    func_0x00010c062c00();
    func_0x00010c18b5e0();
    func_0x00010c1a19c0(param_1);
    func_0x00010befa120(puVar1);
    _objc_release(puVar5);
  }
  lVar10 = *(long *)(param_1 + lVar17);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010bfcc820();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  _objc_release(lVar10);
  if (lVar11 != 0) {
    lVar11 = *(long *)(param_1 + _DAT_11276b798);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010bef2500(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar9;
    func_0x00010bfcc820();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar11;
    func_0x00010bfc9f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar16);
    _objc_release(uVar9);
    _objc_release(lVar11);
    lVar11 = lVar8;
    func_0x00010c08fa60();
    if (lVar11 != 0) {
      puVar5 = PTR_PTR_1126d6df0;
      _objc_alloc(PTR_PTR_1126d6df0);
      uVar9 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010bef2500(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar9;
      func_0x00010bfcc800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0427c0(puVar5);
      _objc_release(uVar16);
      _objc_release(uVar9);
      func_0x00010c18b5e0(puVar5);
      func_0x00010befa120(puVar1);
      _objc_release(puVar5);
    }
    _objc_release(lVar8);
  }
  lVar10 = (long)_DAT_11276b814;
  lVar11 = *(long *)(param_1 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar11;
  func_0x00010bf8bae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = lVar8;
  func_0x00010c08fa60();
  if (lVar11 != 0) {
    lVar12 = *(long *)(param_1 + _DAT_11276b798);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar12;
    func_0x00010bfc9f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    lVar12 = lVar11;
    func_0x00010c08fa60();
    if (lVar12 != 0) {
      lVar12 = param_1;
      func_0x00010bf8baa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126d6df8;
      _objc_alloc(PTR_PTR_1126d6df8);
      func_0x00010c00ad40();
      func_0x00010befa120(puVar1);
      _objc_release(puVar5);
      _objc_release(lVar12);
    }
    _objc_release(lVar11);
  }
  lVar11 = param_1;
  func_0x00010bdf49e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6d60(param_3);
  _objc_release(lVar11);
  puVar5 = PTR_PTR_1126d6e00;
  _objc_alloc();
  func_0x00010c00a2c0();
  func_0x00010befa120(puVar1);
  puVar6 = PTR_PTR_1126d6e08;
  _objc_alloc_init();
  func_0x00010befa120(puVar1);
  func_0x00010bea9b60(param_1);
  lVar11 = *(long *)(param_1 + _DAT_11276b844);
  func_0x00010c151c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 != 0) {
    func_0x00010befa120(puVar1);
  }
  func_0x00010befa160(puVar1);
  puVar7 = PTR_PTR_1126d6e10;
  _objc_alloc(PTR_PTR_1126d6e10);
  func_0x00010c00a2c0();
  func_0x00010befa120(puVar1);
  puVar13 = PTR_PTR_1126d6e18;
  _objc_alloc(PTR_PTR_1126d6e18);
  lVar12 = param_1;
  func_0x00010bfcdfa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0427e0(puVar13);
  func_0x00010c1b6900(param_1);
  _objc_release(puVar13);
  _objc_release(lVar12);
  func_0x00010c1cb840(param_3);
  func_0x00010c21aea0(param_3);
  func_0x00010c167480(param_3);
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010bfe67e0();
  _objc_release(uVar9);
  if ((int)uVar16 != 0) {
    uVar16 = param_3;
    func_0x00010c152980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f80(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
    _objc_release(uVar16);
    uVar16 = param_3;
    func_0x00010c152980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181fc0();
    _objc_release(uVar16);
  }
  lVar12 = param_1;
  func_0x00010c085c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b65e0();
  _objc_release(lVar12);
  puVar13 = PTR_s_title_112679e90;
  _NSStringFromSelector(PTR_s_title_112679e90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa220(param_3);
  _objc_release(puVar13);
  puVar13 = PTR_s_estimatedProgress_1125c3fa0;
  _NSStringFromSelector(PTR_s_estimatedProgress_1125c3fa0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa220(param_3);
  _objc_release(puVar13);
  puVar13 = PTR_s_URL_11254e480;
  _NSStringFromSelector(PTR_s_URL_11254e480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa220(param_3);
  _objc_release(puVar13);
  puVar13 = PTR_s_canGoBack_1125a8c58;
  _NSStringFromSelector(PTR_s_canGoBack_1125a8c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa220(param_3);
  _objc_release(puVar13);
  puVar13 = PTR_s_canGoForward_1125a8c60;
  _NSStringFromSelector(PTR_s_canGoForward_1125a8c60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa220(param_3);
  _objc_release(puVar13);
  lVar14 = *(long *)(param_1 + lVar17);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar14;
  func_0x00010c104020();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar12;
  func_0x00010c08fa60();
  _objc_release(lVar12);
  _objc_release(lVar14);
  puVar13 = PTR_PTR_1126d6e20;
  if (lVar15 != 0) {
    uVar9 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010bef2500(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar9;
    func_0x00010c104020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1edc40(puVar13);
    _objc_release(uVar16);
    _objc_release(uVar9);
    puVar13 = PTR_PTR_1126d6e20;
    _objc_alloc();
    func_0x00010c062ec0();
    uVar16 = *(undefined8 *)(param_1 + _DAT_11276b888);
    *(undefined **)(param_1 + _DAT_11276b888) = puVar13;
    _objc_release(uVar16);
  }
  puVar13 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar17 = (long)_DAT_11276b878;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar13;
  _objc_release(uVar16);
  func_0x00010c178280(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010bef9040(param_3);
  puVar13 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  lVar17 = (long)_DAT_11276b87c;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar13;
  _objc_release(uVar16);
  func_0x00010c178280(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010bef9040(param_3);
  lVar12 = *(long *)(param_1 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar12;
  func_0x00010bf9a780();
  _objc_release(lVar12);
  if (lVar17 != 0) {
    puVar13 = PTR__OBJC_CLASS___UIRefreshControl_1126d6e28;
    _objc_opt_new();
    lVar12 = (long)_DAT_11276b880;
    uVar16 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar13;
    _objc_release(uVar16);
    lVar10 = *(long *)(param_1 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar10;
    func_0x00010bf9a780();
    _objc_release(lVar10);
    if (lVar17 == 3) {
      uVar16 = param_3;
      func_0x00010c152980(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e9540();
      _objc_release(uVar16);
      uVar16 = param_3;
      func_0x00010c152980(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar16);
    }
    else {
      func_0x00010befbd60(*(undefined8 *)(param_1 + lVar12));
    }
    uVar16 = param_3;
    func_0x00010c152980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167a20();
    _objc_release(uVar16);
  }
  *(undefined1 *)(param_1 + _DAT_11276b874) = 0;
  _objc_release(puVar7);
  _objc_release(lVar11);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bab4f8; end: 107bab53f;  */

void FUN_107bab4f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1b6600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bab540; end: 107bab5a7; -[SCWebBrowserV11ViewController _isThirdPartyLoginPlugInEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107bab540(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_11276b760);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26d380();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + _DAT_11276b7ac) != 0;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 107bab5a8; end: 107bab72b; -[SCWebBrowserV11ViewController _setUpThirdPartyLoginPlugInIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bab5a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010be449c0();
  if ((int)lVar1 != 0) {
    func_0x00010becaec0(param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276b7b0);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b760);
    func_0x00010bef2500(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c26d380();
    func_0x00010bf23b20(uVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x107bab69c;
    puStack_40 = &UNK_1108d4780;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107bab72c;
    puStack_70 = &UNK_110844e40;
    uStack_68 = uVar4;
    lStack_60 = param_1;
    lStack_38 = param_1;
    func_0x00010bf9d5c0(*(undefined8 *)(param_1 + _DAT_11276b7ac),param_2,&puStack_58,&puStack_88);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 107bab72c; end: 107bab7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bab72c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c0d3c80();
  func_0x00010befa160();
  lVar1 = param_2;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = (long)_DAT_11276b844;
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(lVar3 + lVar4);
    *(long *)(lVar3 + lVar4) = lVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar4));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bab7bc; end: 107bab83f; -[SCWebBrowserV11ViewController _tearDownThirdPartyLoginPlugInIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bab7bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010be449c0();
  if ((int)lVar2 != 0) {
    lVar2 = (long)_DAT_11276b844;
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
    lVar3 = (long)_DAT_11276b7ac;
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar3),PTR_s_removeScope_112629290);
      return;
    }
  }
  return;
}



/* Entry: 107bab840; end: 107babcaf; -[SCWebBrowserV11ViewController setJavaScriptMetrics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bab840(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_4);
  lVar11 = (long)_DAT_11276b864;
  lVar10 = *(long *)(param_2 + lVar11);
  puVar1 = PTR_PTR_1126b9450;
  func_0x00010c0f9860(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfaf0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c1f7940(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010c2ac460(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar1);
  lVar9 = (long)_DAT_11276b788;
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + lVar9));
  if (lVar10 == 0) {
    _objc_retain(param_4);
    uVar8 = *(undefined8 *)(param_2 + lVar11);
    *(ulong *)(param_2 + lVar11) = param_4;
    _objc_release(uVar8);
    uVar2 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a31a0();
      _objc_release(uVar2);
      *(undefined1 *)(param_2 + (long)_DAT_11276b88c) = 1;
    }
    uVar2 = param_2;
    func_0x00010bf99d00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      uVar2 = param_2;
      func_0x00010bf99d00(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010becdd80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a31c0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    uVar8 = *(undefined8 *)(param_2 + lVar9);
    puVar1 = PTR_PTR_1126b9450;
    func_0x00010c0f9840(PTR_PTR_1126b9450);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    func_0x00010befa780(uVar8);
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126b9450;
    func_0x00010c0f97e0(PTR_PTR_1126b9450);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (uVar2 != 0) {
      puVar1 = PTR_PTR_1126b9450;
      func_0x00010c0f97e0(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar2);
      _objc_release(puVar1);
      uVar8 = *(undefined8 *)(param_2 + lVar9);
      puVar1 = PTR_PTR_1126d6d08;
      func_0x00010bfb1020(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbfc0(param_1,uVar8);
      _objc_release(puVar1);
      if (0.0 < param_1) {
        uVar8 = *(undefined8 *)(param_2 + lVar9);
        puVar1 = PTR_PTR_1126d6d08;
        func_0x00010bfb1000(PTR_PTR_1126d6d08);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0(uVar8);
        _objc_release(puVar1);
      }
    }
    func_0x00010be56f00(param_2);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107babcb0; end: 107bac357; -[SCWebBrowserV11ViewController _logPerfMetricsToAsm:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107babcb0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276b798);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11276b760;
  uVar2 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010bef2500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bfcc820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfc9f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c08fa60();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar5 = PTR_PTR_1126b9450;
  func_0x00010c0f9840(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar7 = uVar6;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    puVar5 = PTR_PTR_1126bde58;
    func_0x00010c0d6ba0(PTR_PTR_1126bde58);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0b4ca0();
    _objc_release(uVar7);
    _objc_release(puVar5);
    if (0 < (long)uVar8) {
      puVar5 = PTR_PTR_1126b9450;
      func_0x00010c0f97e0(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar5);
      uVar7 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar9);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0b4ca0();
      _objc_release(uVar7);
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010c08fa60();
      if (puVar11 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126b9450;
        func_0x00010c0f97e0(PTR_PTR_1126b9450);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar11);
      }
      puVar11 = PTR_PTR_1126bde58;
      func_0x00010bf87b80(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c0b4ca0();
      _objc_release(uVar7);
      _objc_release(puVar11);
      if (0 < (long)(uVar9 - uVar8)) {
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126b9450;
        func_0x00010bf87bc0(PTR_PTR_1126b9450);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar12);
        _objc_release(puVar11);
      }
      puVar11 = PTR_PTR_1126bde58;
      func_0x00010c09b460(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c0b4ca0();
      _objc_release(uVar7);
      _objc_release(puVar11);
      if (0 < (long)(uVar9 - uVar8)) {
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126b9450;
        func_0x00010bfbb920(PTR_PTR_1126b9450);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar12);
        _objc_release(puVar11);
      }
      puVar11 = PTR_PTR_1126b9450;
      func_0x00010c06c660(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar11);
      uVar1 = *(undefined8 *)(param_2 + lVar18);
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar1;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      puVar11 = PTR_PTR_1126b9450;
      func_0x00010c06b7e0(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar11);
      _objc_release(uVar17);
      _objc_release(uVar1);
      lVar18 = param_2;
      func_0x00010bdfb2e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010c1d0640(puVar4);
      func_0x00010c1d0640(puVar4);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar12);
      _objc_release(puVar11);
      puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      lVar13 = param_2;
      func_0x00010becdd80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_2;
      func_0x00010beb4920();
      if ((int)lVar14 != 0) {
        puVar15 = PTR_PTR_1126d6d98;
        _objc_alloc(PTR_PTR_1126d6d98);
        puVar16 = PTR_PTR_1126d6da0;
        _objc_alloc(PTR_PTR_1126d6da0);
        if (lVar13 == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(undefined8 *)(lVar13 + 8);
        }
        _objc_retain(uVar17);
        uVar1 = *(undefined8 *)(param_2 + _DAT_11276b82c);
        func_0x00010c296f60(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b892220(puVar16,uVar17,3,puVar12,
                            &PTR____CFConstantStringClassReference_110eb19d8,lVar18,uVar1);
        func_0x00010c000060(puVar15);
        _objc_release(puVar16);
        _objc_release(uVar1);
        _objc_release(uVar17);
        func_0x00010bf99d00(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e7b20();
        _objc_release(param_2);
        _objc_release(puVar15);
      }
      _objc_release(lVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lVar18);
      _objc_release(puVar5);
    }
  }
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bac358; end: 107bac58b; -[SCWebBrowserV11ViewController _showConnectionError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bac358(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_11276b788);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010bf48ba0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar6,param_2,puVar1);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar1 = PTR_PTR_1126b10a0;
  puVar3 = puVar2;
  FUN_107bb9fd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c269d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  lVar5 = param_1;
  func_0x00010bf428c0();
  puVar1 = PTR_PTR_1126b10a0;
  if (lVar5 != 0) {
    func_0x000107bb9fec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar1,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(lVar5);
  }
  puVar1 = PTR_PTR_1126b10a0;
  func_0x000107bba004();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar1,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c269d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar5);
  puVar1 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  puVar4 = puVar1;
  func_0x000107bba01c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f40(puVar1,param_2,0,puVar4,puVar2,puVar3);
  _objc_release(puVar4);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c180e20(param_1,param_2,puVar1);
  func_0x00010c10af80(param_1,param_2,puVar1,0);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107bac58c; end: 107bac627; -[SCWebBrowserV11ViewController _connectionErrorRetryPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bac58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6d08;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b788);
  _objc_retain(param_3);
  func_0x00010bf48be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf82fe0(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be96dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__retry_112583510);
  return;
}



/* Entry: 107bac628; end: 107bac6ef; -[SCWebBrowserV11ViewController _retry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bac628(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bf6eb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    _objc_release(lVar1);
  }
  func_0x00010c138220(*(undefined8 *)(param_1 + _DAT_11276b844));
  puVar3 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ece0(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107bac6f0; end: 107bac723; -[SCWebBrowserV11ViewController _connectionErrorIgnorePressed:] */

void FUN_107bac6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bac724; end: 107bac807; -[SCWebBrowserV11ViewController _connectionErrorExitPressed:] */

void FUN_107bac724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107bac808; end: 107bac837;  */

void FUN_107bac808(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be097c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bac838; end: 107bac9bf; -[SCWebBrowserV11ViewController _isScCidAbsentOrEmpty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107bac838(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar8 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = puVar2;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar16 = *plStack_120;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(puVar3);
        }
        lVar14 = *(long *)(lStack_128 + (long)puVar17 * 8);
        lVar11 = lVar14;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar11;
        ppuVar8 = &PTR____CFConstantStringClassReference_110eb1818;
        func_0x00010c0720c0();
        _objc_release(lVar11);
        if ((int)lVar15 != 0) {
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar14;
          func_0x00010c08fa60();
          bVar1 = lVar16 == 0;
          _objc_release(lVar14);
          goto LAB_107bac970;
        }
        puVar17 = puVar17 + 1;
      } while (puVar4 != puVar17);
      puVar4 = puVar3;
      ppuVar8 = &puStack_130;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  bVar1 = true;
LAB_107bac970:
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar1;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = ppuVar8;
  _objc_retain(ppuVar8);
  if (ppuVar8 == (undefined **)0x0) {
LAB_107bacb68:
    ppuVar13 = ppuVar12;
    bVar1 = false;
  }
  else {
    lVar16 = (long)_DAT_11276b760;
    uVar5 = *(ulong *)(puVar2 + lVar16);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c06b9e0();
    if ((uVar6 & 1) == 0) {
LAB_107bacb60:
      _objc_release(uVar5);
      goto LAB_107bacb68;
    }
    uVar7 = *(ulong *)(puVar2 + lVar16);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf8f440();
    if ((uVar6 & 1) == 0) {
      _objc_release(uVar7);
      goto LAB_107bacb60;
    }
    ppuVar12 = *(undefined ***)(puVar2 + _DAT_11276b868);
    puVar2 = PTR_PTR_1126bddf8;
    func_0x00010c22b0a0(PTR_PTR_1126bddf8,param_2,ppuVar12,ppuVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    if ((int)puVar2 == 0) goto LAB_107bacb68;
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,ppuVar8,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    puStack_260 = (undefined *)0x0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar3 = puVar2;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar16 = *plStack_250;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar16) {
            _objc_enumerationMutation(puVar3);
          }
          uVar5 = *(ulong *)(lStack_258 + (long)puVar17 * 8);
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          ppuVar13 = &PTR____CFConstantStringClassReference_110eb1818;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((uVar6 & 1) != 0) {
            bVar1 = false;
            goto LAB_107bacbb4;
          }
          puVar17 = puVar17 + 1;
        } while (puVar4 != puVar17);
        puVar4 = puVar3;
        ppuVar13 = &puStack_260;
        func_0x00010bf52a60(puVar3,param_2,&puStack_260,auStack_218,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    bVar1 = true;
LAB_107bacbb4:
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar13);
  uVar9 = *(undefined8 *)((long)ppuVar8 + (long)_DAT_11276b814);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf8f420();
  if ((int)uVar10 == 0) {
    bVar1 = false;
    goto LAB_107baccd8;
  }
  lVar15 = (long)_DAT_11276b760;
  lVar11 = *(long *)((long)ppuVar8 + lVar15);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar11;
  func_0x00010c247520();
  if (lVar16 == 0x1e) {
    puVar2 = PTR_PTR_1126d6d18;
    func_0x00010bf4b6c0(PTR_PTR_1126d6d18,param_2,ppuVar13);
    if (((ulong)puVar2 & 1) == 0) {
      bVar1 = *(long *)((long)ppuVar8 + (long)_DAT_11276b868) == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    lVar15 = *(long *)((long)ppuVar8 + lVar15);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c247520();
    if (lVar16 == 0x20) {
      puVar2 = PTR_PTR_1126d6d18;
      func_0x00010bf4b6c0(PTR_PTR_1126d6d18,param_2,ppuVar13);
      if (((ulong)puVar2 & 1) != 0) goto LAB_107bacc94;
      bVar1 = *(long *)((long)ppuVar8 + (long)_DAT_11276b868) == 0;
    }
    else {
LAB_107bacc94:
      bVar1 = false;
    }
    _objc_release(lVar15);
  }
  _objc_release(lVar11);
LAB_107baccd8:
  _objc_release(uVar9);
  _objc_release(ppuVar13);
  return bVar1;
}



/* Entry: 107bac9c0; end: 107bacbcb; -[SCWebBrowserV11ViewController _shouldAppendClickId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107bac9c0(long param_1,undefined8 param_2,undefined **param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  ppuVar12 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
LAB_107bacb68:
    ppuVar12 = ppuVar11;
    bVar1 = false;
  }
  else {
    lVar13 = (long)_DAT_11276b760;
    uVar2 = *(ulong *)(param_1 + lVar13);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06b9e0();
    if ((uVar3 & 1) == 0) {
LAB_107bacb60:
      _objc_release(uVar2);
      goto LAB_107bacb68;
    }
    uVar4 = *(ulong *)(param_1 + lVar13);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf8f440();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar4);
      goto LAB_107bacb60;
    }
    ppuVar11 = *(undefined ***)(param_1 + _DAT_11276b868);
    puVar5 = PTR_PTR_1126bddf8;
    func_0x00010c22b0a0(PTR_PTR_1126bddf8,param_2,ppuVar11,param_3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((int)puVar5 == 0) goto LAB_107bacb68;
    puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar6 = puVar5;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar13 = *plStack_120;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(puVar6);
          }
          uVar2 = *(ulong *)(lStack_128 + (long)puVar15 * 8);
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          ppuVar12 = &PTR____CFConstantStringClassReference_110eb1818;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          if ((uVar3 & 1) != 0) {
            bVar1 = false;
            goto LAB_107bacbb4;
          }
          puVar15 = puVar15 + 1;
        } while (puVar7 != puVar15);
        puVar7 = puVar6;
        ppuVar12 = &puStack_130;
        func_0x00010bf52a60(puVar6,param_2,&puStack_130,auStack_e8,0x10);
      } while (puVar7 != (undefined *)0x0);
    }
    bVar1 = true;
LAB_107bacbb4:
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_11276b814);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf8f420();
  if ((int)uVar9 == 0) {
    bVar1 = false;
    goto LAB_107baccd8;
  }
  lVar14 = (long)_DAT_11276b760;
  lVar10 = *(long *)((long)param_3 + lVar14);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar10;
  func_0x00010c247520();
  if (lVar13 == 0x1e) {
    puVar5 = PTR_PTR_1126d6d18;
    func_0x00010bf4b6c0(PTR_PTR_1126d6d18,param_2,ppuVar12);
    if (((ulong)puVar5 & 1) == 0) {
      bVar1 = *(long *)((long)param_3 + (long)_DAT_11276b868) == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    lVar14 = *(long *)((long)param_3 + lVar14);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar14;
    func_0x00010c247520();
    if (lVar13 == 0x20) {
      puVar5 = PTR_PTR_1126d6d18;
      func_0x00010bf4b6c0(PTR_PTR_1126d6d18,param_2,ppuVar12);
      if (((ulong)puVar5 & 1) != 0) goto LAB_107bacc94;
      bVar1 = *(long *)((long)param_3 + (long)_DAT_11276b868) == 0;
    }
    else {
LAB_107bacc94:
      bVar1 = false;
    }
    _objc_release(lVar14);
  }
  _objc_release(lVar10);
LAB_107baccd8:
  _objc_release(uVar8);
  _objc_release(ppuVar12);
  return bVar1;
}



/* Entry: 107bacbcc; end: 107baccff; -[SCWebBrowserV11ViewController _shouldAppendGaUtmForOrganicAndReloadUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107bacbcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b814);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8f420();
  if ((int)uVar3 == 0) {
    bVar1 = false;
    goto LAB_107baccd8;
  }
  lVar7 = (long)_DAT_11276b760;
  lVar4 = *(long *)(param_1 + lVar7);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c247520();
  if (lVar5 == 0x1e) {
    puVar6 = PTR_PTR_1126d6d18;
    func_0x00010bf4b6c0(PTR_PTR_1126d6d18,param_2,param_3);
    if (((ulong)puVar6 & 1) == 0) {
      bVar1 = *(long *)(param_1 + _DAT_11276b868) == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + lVar7);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c247520();
    if (lVar5 == 0x20) {
      puVar6 = PTR_PTR_1126d6d18;
      func_0x00010bf4b6c0(PTR_PTR_1126d6d18,param_2,param_3);
      if (((ulong)puVar6 & 1) != 0) goto LAB_107bacc94;
      bVar1 = *(long *)(param_1 + _DAT_11276b868) == 0;
    }
    else {
LAB_107bacc94:
      bVar1 = false;
    }
    _objc_release(lVar7);
  }
  _objc_release(lVar4);
LAB_107baccd8:
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107bacd00; end: 107bacdcf; -[SCWebBrowserV11ViewController _shouldAppendGaUtmForMapsAndReloadUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107bacd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b814);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8f420();
  if ((int)uVar3 == 0) {
    bVar1 = false;
    goto LAB_107bacdac;
  }
  lVar4 = *(long *)(param_1 + _DAT_11276b760);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c247520();
  if (lVar5 == 10) {
    puVar6 = PTR_PTR_1126d6d18;
    func_0x00010bf4b6c0(PTR_PTR_1126d6d18,param_2,param_3);
    if (((ulong)puVar6 & 1) != 0) goto LAB_107bacd80;
    bVar1 = *(long *)(param_1 + _DAT_11276b868) == 0;
  }
  else {
LAB_107bacd80:
    bVar1 = false;
  }
  _objc_release(lVar4);
LAB_107bacdac:
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107bacdd0; end: 107bace7b; -[SCWebBrowserV11ViewController _appendGaUtmForOrganicAndReloadUrl:decisionHandler:] */

void FUN_107bacdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d6db0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  FUN_107bc01ac();
  (**(code **)(param_4 + 0x10))(param_4,0);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126d6d18;
  func_0x00010bf07280(PTR_PTR_1126d6d18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be4eca0(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bace7c; end: 107bad013; -[SCWebBrowserV11ViewController _handleNavigationFailedWithShouldShowConnectionError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bace7c(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c1b2c60(param_1,param_2,0);
  func_0x00010bede000(0,param_1);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = param_1;
    func_0x00010c11e060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107bad014;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2ee0();
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2f80(0);
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + (long)_DAT_11276b860) = 0;
  }
  return;
}



/* Entry: 107bad014; end: 107bad03f;  */

void FUN_107bad014(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bad040; end: 107bad1bb; -[SCWebBrowserV11ViewController _handleNavigationError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bad040(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b788);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c09b4c0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf3ec40(param_3);
  func_0x00010bfec2e0(uVar4,param_2,puVar1,lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010beb4960();
  if ((int)lVar2 != 0) {
    lVar2 = param_1 + _DAT_11276b75c;
    _objc_loadWeakRetained(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_3;
    func_0x00010bf3ec40(param_3);
    func_0x00010c0df780(puVar1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010beeace0(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3000(lVar2,param_2,param_1,lVar3);
    _objc_release(lVar3);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010bf3ec40();
    if (((lVar2 + 0x3f1U < 9) && ((1L << (lVar2 + 0x3f1U & 0x3f) & 0x179U) != 0)) ||
       (lVar2 + 0x4b2U < 3)) {
      func_0x00010be2cb20(param_1,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bad1bc; end: 107bad253; -[SCWebBrowserV11ViewController actionSheetDidDismiss:] */

void FUN_107bad1bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf48bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((param_3 == uVar1) && (uVar2 = param_1, func_0x00010bf428c0(), uVar2 == 0)) {
    uVar2 = param_1;
    func_0x00010c078820();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010be097c0(param_1);
    }
  }
  else {
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c180e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setConnectionErrorActionSheet__11263dda8,0);
  return;
}



/* Entry: 107bad254; end: 107bad37f; -[SCWebBrowserV11ViewController goBackFromSafeBrowsing] */

void FUN_107bad254(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar2 = param_1;
  func_0x00010bf428c0();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107bad380;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010bf03420(0x3fd3333333333333,puVar1);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be097d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endBrowserSessionAndDismiss__11255ff90,1);
  return;
}



/* Entry: 107bad380; end: 107bad3c7;  */

void FUN_107bad380(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c149160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bad3c8; end: 107bad433;  */

void FUN_107bad3c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c149160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1f5140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bad434; end: 107bad507; -[SCWebBrowserV11ViewController learnMoreFromSafeBrowsing] */

void FUN_107bad434(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107bad508;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x107bad540;
  puStack_68 = &UNK_110841f20;
  uStack_60 = param_1;
  uStack_38 = param_1;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58,
                      &puStack_80);
  uVar1 = param_1;
  func_0x00010c1490c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08e0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4eca0(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107bad508; end: 107bad583;  */

void FUN_107bad508(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c149160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bad584; end: 107bad58b; -[SCWebBrowserV11ViewController webViewDidClose:] */

void FUN_107bad584(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be097d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endBrowserSessionAndDismiss__11255ff90,1);
  return;
}



/* Entry: 107bad58c; end: 107bad6bb; -[SCWebBrowserV11ViewController webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:] */

undefined8
FUN_107bad58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be52080(param_1,param_2,param_5);
  uVar1 = param_5;
  func_0x00010c269f20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar1 = param_5;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar4 == 0) goto LAB_107bad694;
  }
  else {
    _objc_release();
  }
  uVar1 = param_5;
  func_0x00010c269f20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077440();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010c134680(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060(param_3,param_2,uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
LAB_107bad694:
  _objc_release(param_5);
  _objc_release(param_3);
  return 0;
}



/* Entry: 107bad6bc; end: 107bad877; -[SCWebBrowserV11ViewController _logCreateWebViewForNavigationAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bad6bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_3;
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  func_0x00010c0df760(puVar5,param_2,lVar4 == 0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c269f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c269f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077440();
    _objc_release(lVar1);
  }
  puVar5 = PTR_PTR_1126d6d08;
  func_0x00010bf5a140(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110e63818,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + _DAT_11276b788),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bad878; end: 107badb03; -[SCWebBrowserV11ViewController webView:didFinishNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bad878(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_2 + (long)_DAT_11276b814);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf9a780();
  if (lVar7 == 0) {
    _objc_release(lVar2);
  }
  else {
    lVar7 = (long)_DAT_11276b880;
    iVar1 = (int)*(undefined8 *)(param_2 + lVar7);
    func_0x00010c07c0e0();
    _objc_release(lVar2);
    if (iVar1 != 0) {
      func_0x00010bf95220(*(undefined8 *)(param_2 + lVar7));
      *(undefined1 *)(param_2 + (long)_DAT_11276b884) = 0;
    }
  }
  if (*(char *)(param_2 + (long)_DAT_11276b840) == '\x01') {
    *(undefined1 *)(param_2 + (long)_DAT_11276b840) = 0;
    uVar5 = *(undefined8 *)(param_2 + (long)_DAT_11276b788);
    puVar6 = PTR_PTR_1126d6d08;
    func_0x00010c09d240(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar5);
  }
  else {
    lVar7 = (long)_DAT_11276b788;
    func_0x00010bf768c0(*(undefined8 *)(param_2 + lVar7));
    uVar5 = *(undefined8 *)(param_2 + lVar7);
    puVar6 = PTR_PTR_1126d6d08;
    func_0x00010c09c400(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar5);
    _objc_release(puVar6);
    uVar3 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar3 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a2ee0();
      _objc_release(uVar3);
    }
    func_0x00010beddfe0(param_2);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar3 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010becdd80(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3380(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00010beb4960();
    if ((int)uVar3 != 0) {
      lVar7 = param_2 + (long)_DAT_11276b75c;
      _objc_loadWeakRetained(lVar7);
      uVar3 = param_2;
      func_0x00010beead00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3000(lVar7);
      _objc_release(uVar3);
      _objc_release(lVar7);
    }
    lVar7 = (long)_DAT_11276b868;
    if (*(long *)(param_2 + lVar7) != 0) goto LAB_107badae8;
    uVar5 = param_4;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(param_2 + lVar7);
    *(undefined8 *)(param_2 + lVar7) = uVar5;
  }
  _objc_release(puVar6);
LAB_107badae8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107badb04; end: 107badd43; -[SCWebBrowserV11ViewController webView:didCommitNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107badb04(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + (long)_DAT_11276b840) == '\x01') {
    func_0x00010c0f97a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf780e0();
    _objc_release(param_1);
    goto LAB_107badd2c;
  }
  func_0x00010c1b2c60(param_1);
  func_0x00010bf428c0(param_1);
  func_0x00010c17f4a0(param_1);
  puVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = puVar3;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
LAB_107badc88:
      puVar2 = param_3;
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      puVar2 = param_3;
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010be40fa0();
      _objc_release(puVar2);
      if ((int)uVar4 == 0) goto LAB_107badc88;
      puVar2 = puVar3;
      func_0x00010c11f420();
      puVar1 = puVar3;
      if ((puVar2 == (undefined *)0x0) &&
         (puVar2 = puVar3, func_0x00010c08fa60(), (undefined *)0x4 < puVar2)) {
        func_0x00010c260c00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      _objc_retain(puVar1);
      puVar3 = puVar1;
    }
    func_0x00010bee2f60(param_1);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  uVar4 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  _objc_opt_respondsToSelector();
  _objc_release(uVar4);
  if ((uVar5 & 1) != 0) {
    uVar4 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a30e0();
    _objc_release(uVar4);
  }
  func_0x00010be62460(param_1);
LAB_107badd2c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107badd44; end: 107bade1b; -[SCWebBrowserV11ViewController _updateUrlInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107badd44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6e38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059ea0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c216240(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276b800),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bade1c; end: 107badeb7; -[SCWebBrowserV11ViewController _getSharableUrl] */

void FUN_107bade1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bdccfc0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bdcd140(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bece2e0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107badeb8; end: 107bae0bb; -[SCWebBrowserV11ViewController _destinationUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107badeb8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010bfaf0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      lVar6 = (long)_DAT_11276b760;
      lVar3 = *(long *)(param_1 + lVar6);
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf6ee80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        puVar1 = param_1;
        func_0x00010bf6eb40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar1 != (undefined *)0x0) {
          func_0x00010bf6eb40(param_1);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107badf6c;
        }
        lVar5 = *(long *)(param_1 + lVar6);
        func_0x00010bef2500();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        func_0x00010bf9c2c0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar4);
        _objc_release(lVar5);
        if (lVar3 == 0) {
          puVar1 = PTR_PTR_1126b9450;
          func_0x00010bf8ecc0(PTR_PTR_1126b9450);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107badf88;
        }
        param_1 = *(undefined **)(param_1 + lVar6);
        func_0x00010bef2500(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        func_0x00010bf9c2c0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_1 = *(undefined **)(param_1 + lVar6);
        func_0x00010bef2500(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        func_0x00010bf6ee80();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107badf20;
    }
    func_0x00010bfaf0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
LAB_107badf6c:
    puVar1 = param_1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010beeac40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
LAB_107badf20:
    puVar1 = puVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_1);
LAB_107badf88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107bae0bc; end: 107bae20f; -[SCWebBrowserV11ViewController _appendClickIdIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bae0bc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  puVar7 = param_3;
  func_0x00010beb2740();
  puVar5 = PTR_PTR_1126d6d18;
  if ((int)lVar1 == 0) {
    _objc_retain(param_3);
    puVar5 = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b760);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010bf11520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar6 = *(undefined **)(param_3 + _DAT_11276b760);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c06b9e0();
  if ((int)puVar5 != 0) {
    puVar5 = PTR_PTR_1126bddf8;
    func_0x00010c22b0a0();
    if ((int)puVar5 != 0) {
      puVar5 = PTR_PTR_1126d6d18;
      func_0x00010bf4b6c0();
      if ((int)puVar5 != 0) {
        puVar5 = PTR_PTR_1126d6d18;
        func_0x00010bf4b6c0();
        _objc_release(puVar6);
        if (((ulong)puVar5 & 1) != 0) goto LAB_107bae2c8;
        puVar6 = PTR_PTR_1126d6db0;
        _objc_opt_new(PTR_PTR_1126d6db0);
        FUN_107bc0404();
      }
    }
  }
  _objc_release(puVar6);
LAB_107bae2c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107bae210; end: 107bae2df; -[SCWebBrowserV11ViewController _trackUtmNotPropagatedIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bae210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + _DAT_11276b760);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06b9e0();
  if ((int)puVar2 != 0) {
    puVar2 = PTR_PTR_1126bddf8;
    func_0x00010c22b0a0();
    if ((int)puVar2 != 0) {
      puVar2 = PTR_PTR_1126d6d18;
      func_0x00010bf4b6c0();
      if ((int)puVar2 != 0) {
        puVar2 = PTR_PTR_1126d6d18;
        func_0x00010bf4b6c0();
        _objc_release(puVar1);
        if (((ulong)puVar2 & 1) != 0) goto LAB_107bae2c8;
        puVar1 = PTR_PTR_1126d6db0;
        _objc_opt_new(PTR_PTR_1126d6db0);
        FUN_107bc0404();
      }
    }
  }
  _objc_release(puVar1);
LAB_107bae2c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bae2e0; end: 107bae3a3; -[SCWebBrowserV11ViewController _appendGaUtmsIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bae2e0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276b868;
  puVar1 = PTR_PTR_1126bddf8;
  func_0x00010c22b0a0(PTR_PTR_1126bddf8,param_2,*(undefined8 *)(param_1 + lVar4),param_3);
  if ((int)puVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b760);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06b9e0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      puVar1 = PTR_PTR_1126d6d18;
      func_0x00010bf07260(PTR_PTR_1126d6d18,param_2,param_3,*(undefined8 *)(param_1 + lVar4));
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107bae384;
    }
  }
  _objc_retain(param_3);
  puVar1 = param_3;
LAB_107bae384:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107bae3a4; end: 107bae493; -[SCWebBrowserV11ViewController _openExbAndDismissBrowser:] */

void FUN_107bae3a4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c079340();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1b30c0(param_1);
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010beec820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9a860(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    func_0x00010c197ec0(param_1);
    func_0x00010c1b8080(param_1);
    func_0x00010c2003e0(param_1);
    func_0x00010be6d160(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bae494; end: 107baf597; -[SCWebBrowserV11ViewController webView:decidePolicyForNavigationAction:decisionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bae494(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_98;
  uStack_98 = 0;
  uVar20 = 0x2020000000;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107baf598;
  puStack_b0 = &UNK_1109ff018;
  puStack_90 = puStack_a0;
  _objc_retain(param_5);
  ppuVar3 = &puStack_c8;
  uStack_a8 = param_5;
  _objc_retainBlock();
  puVar4 = param_4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010c269f20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c077440();
  if ((int)puVar5 == 0) {
    _objc_release(puVar4);
LAB_107bae640:
    puVar4 = param_1;
    func_0x00010c076d00();
    if ((int)puVar4 != 0) {
      puVar4 = param_1;
      func_0x00010c1077c0();
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010c1e0500(param_1);
        (*(code *)ppuVar3[2])(ppuVar3,1);
        goto LAB_107baf4c4;
      }
      func_0x00010c1b24e0(param_1);
    }
    puVar4 = param_4;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar19;
    func_0x00010bf4bb00();
    puVar9 = puVar5;
    if ((int)puVar7 == 0) {
LAB_107bae7a4:
      _objc_release(puVar19);
      _objc_release(puVar4);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + _DAT_11276b814);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar8;
      func_0x00010bf92620();
      _objc_release(uVar8);
      _objc_release(puVar19);
      _objc_release(puVar4);
      if ((int)uVar16 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
        func_0x00010bf44780();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar5;
        func_0x00010c1504a0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar19;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c25cfc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1f6900(puVar4);
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(puVar19);
        puVar9 = puVar4;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar5;
        goto LAB_107bae7a4;
      }
    }
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010c269f20();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar5;
    func_0x00010c077440();
    if ((int)puVar19 == 0) {
      _objc_release(puVar5);
    }
    else {
      puVar19 = param_1;
      func_0x00010bf428c0();
      _objc_release(puVar5);
      if (puVar19 == (undefined *)0x0) {
        func_0x00010c0d6720(param_1);
        func_0x00010c1cb820(param_1);
        func_0x00010c1b9480(param_1);
      }
    }
    puVar5 = param_4;
    func_0x00010c269f20();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar5;
    func_0x00010c077440();
    _objc_release(puVar5);
    if ((int)puVar19 == 0) {
LAB_107baea78:
      puVar5 = puVar9;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 == (undefined *)0x0) {
        uVar20 = *(undefined8 *)(param_1 + _DAT_11276b788);
        puVar5 = PTR_PTR_1126d6d08;
        func_0x00010c103100(PTR_PTR_1126d6d08);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0(uVar20);
        uVar20 = 0;
LAB_107baec34:
        _objc_release(puVar5);
        (*(code *)ppuVar3[2])(ppuVar3,uVar20);
      }
      else {
        puVar5 = puVar9;
        func_0x00010c1504a0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar5;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar19;
        func_0x00010c0720c0();
        _objc_release(puVar19);
        _objc_release(puVar5);
        if ((int)puVar7 == 0) {
          puVar5 = puVar9;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = PTR_PTR_1126b9450;
          func_0x00010bf8ecc0(PTR_PTR_1126b9450);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010c0720c0();
          _objc_release(puVar19);
          _objc_release(puVar5);
          if ((int)puVar7 != 0) {
            uVar20 = *(undefined8 *)(param_1 + _DAT_11276b788);
            puVar5 = PTR_PTR_1126d6d08;
            func_0x00010c103060(PTR_PTR_1126d6d08);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfec2a0(uVar20);
            goto LAB_107baec30;
          }
          lVar17 = (long)_DAT_11276b770;
          iVar15 = (int)*(undefined8 *)(param_1 + lVar17);
          puVar5 = puVar9;
          func_0x00010beec820(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c231460();
          _objc_release(puVar5);
          if (iVar15 != 0) {
            puVar5 = param_1;
            func_0x00010bf6b020();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar5;
            _objc_opt_respondsToSelector();
            _objc_release(puVar5);
            if (((ulong)puVar19 & 1) != 0) {
              puVar5 = param_1;
              func_0x00010bf6b020(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f320(puVar4);
              func_0x00010c2a31e0(puVar5);
              _objc_release(puVar5);
            }
            uVar16 = *(undefined8 *)(param_1 + _DAT_11276b788);
            puVar5 = PTR_PTR_1126d6d08;
            func_0x00010c103080(PTR_PTR_1126d6d08);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfec2a0(uVar16);
            _objc_release(puVar5);
            uVar18 = *(undefined8 *)(param_1 + lVar17);
            uVar8 = *(undefined8 *)(param_1 + _DAT_11276b760);
            func_0x00010bef2500(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar8;
            func_0x00010bf0ea40();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar9;
            func_0x00010beec820(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c105560(uVar18);
            _objc_release(puVar5);
            _objc_release(uVar16);
            _objc_release(uVar8);
          }
          puVar5 = param_4;
          func_0x00010c269f20();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar5;
          if (puVar5 == (undefined *)0x0) {
            puVar19 = param_4;
            func_0x00010c2477c0();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c077440();
          if (puVar5 == (undefined *)0x0) {
            _objc_release(puVar19);
          }
          _objc_release(puVar5);
          puVar19 = param_1;
          func_0x00010be634e0();
          if (puVar19 != (undefined *)0x0) {
            (*(code *)ppuVar3[2])(ppuVar3,0);
            puVar5 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
            func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be4ece0(param_1);
            _objc_release(puVar5);
            uVar20 = *(undefined8 *)(param_1 + _DAT_11276b788);
            puVar5 = PTR_PTR_1126d6d08;
            func_0x00010c13c660(PTR_PTR_1126d6d08);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfec2a0(uVar20);
            _objc_release(puVar5);
            goto LAB_107baf4ac;
          }
          lVar17 = *(long *)(param_1 + _DAT_11276b7e4);
          func_0x00010c2a3be0();
          if (lVar17 == 0) {
            (*(code *)ppuVar3[2])(ppuVar3,0);
            func_0x00010be58b00(param_1);
          }
          else {
            puVar5 = param_4;
            func_0x00010c269f20();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar5;
            func_0x00010c077440();
            _objc_release(puVar5);
            if ((int)puVar19 == 0) {
              bVar1 = true;
            }
            else {
              puVar5 = param_1;
              func_0x00010c28f620();
              _objc_retainAutoreleasedReturnValue();
              bVar1 = puVar5 == (undefined *)0x0;
              _objc_release();
            }
            puVar5 = param_1;
            func_0x00010be42800();
            if (bVar1) {
              puVar5 = param_4;
              func_0x00010c269f20(param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c077440();
              func_0x00010bde8980(param_1);
              _objc_release(puVar5);
            }
            else {
              puVar19 = param_1;
              func_0x00010c28f620();
              _objc_retainAutoreleasedReturnValue();
              if (puVar19 != (undefined *)0x0) {
                puVar7 = param_1;
                func_0x00010bf6b020();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar7;
                _objc_opt_respondsToSelector();
                _objc_release(puVar7);
                _objc_release(puVar19);
                if (((ulong)puVar10 & 1) != 0) {
                  puVar19 = param_1;
                  func_0x00010bf6b020(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = param_1;
                  func_0x00010c28f620(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2a3060(puVar19);
                  _objc_release(puVar7);
                  _objc_release(puVar19);
                }
              }
              lVar17 = (long)_DAT_11276b760;
              uVar16 = *(undefined8 *)(param_1 + lVar17);
              func_0x00010bef2500();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf01400();
              _objc_release(uVar16);
              _objc_initWeak(auStack_d0,param_1);
              puVar19 = param_1;
              func_0x00010c28f620();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar19;
              _objc_opt_respondsToSelector();
              _objc_release(puVar19);
              if (((ulong)puVar7 & 1) == 0) {
                if ((int)puVar5 == 0) {
                  uVar13 = *(ulong *)(param_1 + lVar17);
                  func_0x00010bef2500();
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = uVar13;
                  func_0x00010c06b9e0();
                  _objc_release(uVar13);
                  if ((uVar14 & 1) == 0) {
                    puVar5 = param_1;
                    func_0x00010c28f620();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c083860(param_1);
                    func_0x00010bf428c0(param_1);
                    puVar19 = puVar5;
                    func_0x00010c068f20();
                    _objc_release(puVar5);
                    puVar5 = param_4;
                    func_0x00010c269f20(param_4);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c077440();
                    func_0x00010be280c0(param_1);
                    _objc_release(puVar5);
                    if (((ulong)puVar19 & 1) != 0) goto LAB_107baf348;
                  }
                  else {
                    (*(code *)ppuVar3[2])(ppuVar3,1);
                  }
                }
                else {
                  puVar5 = param_1;
                  func_0x00010c28f620();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c083860(param_1);
                  func_0x00010bf428c0(param_1);
                  _objc_copyWeak(auStack_118,auStack_d0);
                  _objc_retain(puVar9);
                  _objc_retain(param_4);
                  _objc_retain(ppuVar3);
                  puVar19 = puVar5;
                  func_0x00010c068f20();
                  _objc_release(puVar5);
                  if (((ulong)puVar19 & 1) != 0) {
                    _objc_release(ppuVar3);
                    _objc_release(param_4);
                    _objc_release(puVar9);
                    _objc_destroyWeak(auStack_118);
                    goto LAB_107baf348;
                  }
                  puVar5 = param_4;
                  func_0x00010c269f20(param_4);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c077440();
                  func_0x00010be280c0(param_1);
                  _objc_release(puVar5);
                  _objc_release(ppuVar3);
                  _objc_release(param_4);
                  _objc_release(puVar9);
                  _objc_destroyWeak(auStack_118);
                }
LAB_107baf3f8:
                bVar1 = false;
              }
              else {
                puVar5 = param_1;
                func_0x00010c28f620();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c083860();
                func_0x00010bf428c0(param_1);
                uVar16 = *(undefined8 *)(param_1 + lVar17);
                func_0x00010bef2500(uVar16);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf01060();
                puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_108 = 0xc2000000;
                pcStack_100 = FUN_107baf5c0;
                puStack_f8 = &UNK_1108a0570;
                _objc_copyWeak(auStack_d8,auStack_d0);
                _objc_retain(puVar9);
                puStack_f0 = puVar9;
                _objc_retain(param_4);
                puStack_e8 = param_4;
                _objc_retain(ppuVar3);
                puVar19 = puVar5;
                ppuStack_e0 = ppuVar3;
                func_0x00010c068f40();
                _objc_release(uVar16);
                _objc_release(puVar5);
                _objc_release(ppuStack_e0);
                _objc_release(puStack_e8);
                _objc_release(puStack_f0);
                _objc_destroyWeak(auStack_d8);
                if (((ulong)puVar19 & 1) == 0) goto LAB_107baf3f8;
LAB_107baf348:
                puVar5 = param_1;
                func_0x00010bf6b020();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = puVar5;
                _objc_opt_respondsToSelector();
                _objc_release(puVar5);
                if (((ulong)puVar19 & 1) != 0) {
                  puVar5 = param_1;
                  func_0x00010bf6b020(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2a30c0();
                  _objc_release(puVar5);
                }
                bVar1 = true;
              }
              func_0x00010bf604c0(PTR_PTR_1126afec0);
              if (bVar1) {
                puVar5 = param_1;
                func_0x00010bf99d00();
                _objc_retainAutoreleasedReturnValue();
                puVar19 = puVar5;
                _objc_opt_respondsToSelector();
                _objc_release(puVar5);
                if (((ulong)puVar19 & 1) != 0) {
                  puVar5 = param_1;
                  func_0x00010bf99d00(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010becdd80(uVar20,param_1);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2a2f00(puVar5);
                  _objc_release(param_1);
                  _objc_release(puVar5);
                }
              }
              _objc_destroyWeak(auStack_d0);
            }
          }
          puVar19 = (undefined *)0x0;
          goto LAB_107baf4ac;
        }
        puVar5 = param_4;
        func_0x00010c269f20();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar5;
        func_0x00010c077440();
        _objc_release(puVar5);
        uVar20 = *(undefined8 *)(param_1 + _DAT_11276b788);
        if ((int)puVar19 == 0) {
          puVar5 = PTR_PTR_1126d6d08;
          func_0x00010c103020(PTR_PTR_1126d6d08);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfec2a0(uVar20);
LAB_107baec30:
          uVar20 = 1;
          goto LAB_107baec34;
        }
        puVar5 = PTR_PTR_1126d6d08;
        func_0x00010c103040();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0(uVar20);
        _objc_release(puVar5);
        (*(code *)ppuVar3[2])(ppuVar3,0);
        func_0x00010beb8720(param_1);
      }
    }
    else {
      puVar5 = param_4;
      func_0x00010c0d6ca0();
      if ((puVar5 != (undefined *)0x1) && (puVar5 != (undefined *)0x4)) {
        puVar19 = PTR_PTR_1126d6d80;
        func_0x00010befd2a0(PTR_PTR_1126d6d80);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dd180(param_1);
        _objc_release(puVar19);
      }
      puVar19 = param_1;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar19;
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010bf9a9a0();
      uVar2 = 0;
      if (puVar5 == (undefined *)0x0) {
        uVar2 = (uint)puVar10;
      }
      if ((uVar2 & 1) == 0) {
        _objc_release(puVar7);
LAB_107baea70:
        _objc_release(puVar19);
        goto LAB_107baea78;
      }
      puVar5 = param_1;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf39780();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf529e0();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar19);
      puVar19 = PTR_PTR_1126d6d18;
      if (puVar12 == (undefined *)0x0) goto LAB_107baea78;
      puVar5 = param_1;
      func_0x00010bf45e20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010bf39780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf11520(puVar19);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar5);
      puVar5 = param_1;
      func_0x00010c28f600();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf2cf00();
      _objc_release(puVar5);
      if ((int)puVar7 == 0) goto LAB_107baea70;
      (*(code *)ppuVar3[2])(ppuVar3,0);
      puVar5 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      _objc_opt_respondsToSelector();
      _objc_release(puVar5);
      if (((ulong)puVar7 & 1) != 0) {
        puVar5 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9a940();
        _objc_release(puVar5);
      }
      func_0x00010be6d160(param_1);
LAB_107baf4ac:
      _objc_release(puVar19);
    }
    _objc_release(puVar4);
  }
  else {
    puVar5 = puVar6;
    func_0x00010bfdcf80();
    _objc_release(puVar4);
    if ((int)puVar5 == 0) goto LAB_107bae640;
    puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010c134680(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar4);
    (*(code *)ppuVar3[2])(ppuVar3,0);
  }
  _objc_release(puVar9);
LAB_107baf4c4:
  _objc_release(puVar6);
  _objc_release(ppuVar3);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107baf598; end: 107baf5bf;  */

void FUN_107baf598(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000107baf5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107baf5c0; end: 107baf6b3;  */

void FUN_107baf5c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269f20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077440();
    func_0x00010be280c0(lVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107baf6b4; end: 107baf6b7;  */

void FUN_107baf6b4(void)

{
  return;
}



/* Entry: 107baf6b8; end: 107baf6cb; -[SCWebBrowserV11ViewController _universalLinkExceptionList] */

void FUN_107baf6b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c225c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSSet_1126ae870,PTR_s_setWithArray__112667130,
             &PTR__OBJC_CLASS___NSConstantArray_111181928);
  return;
}



/* Entry: 107baf6cc; end: 107baf7f7; -[SCWebBrowserV11ViewController _isOrganicUniversalLinkException:] */

undefined8 FUN_107baf6cc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar3 = ppuVar1;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  ppuVar1 = ppuVar3;
  func_0x00010bfda7c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e36198);
  ppuVar2 = ppuVar3;
  if ((int)ppuVar1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e36198;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110e36198);
    func_0x00010c260c00(ppuVar3,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  ppuVar3 = ppuVar2;
  func_0x00010bfda7c0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110ea7238);
  ppuVar1 = ppuVar2;
  if ((int)ppuVar3 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ea7238;
    func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110ea7238);
    func_0x00010c260c00(ppuVar2,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
  }
  func_0x00010bed1400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_1);
  _objc_release(ppuVar1);
  return uVar4;
}



/* Entry: 107baf7f8; end: 107bafa2f; -[SCWebBrowserV11ViewController _handleDeeplinkIntercepted:didIntercept:isMainFrame:decisionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107baf7f8(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_4 == 0) {
    uVar3 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar3 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3100();
      _objc_release(uVar3);
    }
    func_0x00010c1b8080(param_1);
    func_0x00010bde8980(param_1);
  }
  else {
    func_0x00010c2003e0();
    func_0x00010c1b8080(param_1);
    uVar6 = *(undefined8 *)(param_1 + (long)_DAT_11276b788);
    puVar1 = PTR_PTR_1126d6d08;
    func_0x00010c1030a0(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar6);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126d6db0;
    _objc_opt_new(PTR_PTR_1126d6db0);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11276b760);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c06b9e0();
    _objc_release(uVar2);
    if ((int)uVar6 == 0) {
      FUN_107bc038c(puVar1,1);
    }
    else {
      FUN_107bc0314();
    }
    uVar3 = param_1;
    func_0x00010beb4960();
    if ((int)uVar3 != 0) {
      lVar5 = param_1 + (long)_DAT_11276b75c;
      _objc_loadWeakRetained(lVar5);
      uVar3 = param_1;
      func_0x00010beead00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3000(lVar5);
      _objc_release(uVar3);
      _objc_release(lVar5);
    }
    (**(code **)(param_6 + 0x10))(param_6,0);
    uVar3 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3100();
      _objc_release(param_1);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bafa30; end: 107bafecf; -[SCWebBrowserV11ViewController _continueNavigation:isMainFrame:decisionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bafa30(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_4 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + (long)_DAT_11276b788);
    puVar2 = PTR_PTR_1126d6d08;
    func_0x00010c1030e0(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar10);
    _objc_release(puVar2);
    pcVar9 = *(code **)(param_5 + 0x10);
    uVar10 = 1;
  }
  else {
    uVar1 = param_1;
    func_0x00010be40fa0();
    if ((uVar1 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010beb42e0();
      if ((int)uVar1 != 0) {
        (**(code **)(param_5 + 0x10))(param_5,0);
        func_0x00010c09c520(param_1);
        goto LAB_107bafb48;
      }
      uVar1 = param_3;
      func_0x00010bfb6820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126d6d08;
      func_0x00010c103120(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c2ac460(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar11 = (long)_DAT_11276b788;
      func_0x00010bfec2a0(*(undefined8 *)(param_1 + lVar11));
      uVar1 = param_1;
      func_0x00010beb2760();
      if ((int)uVar1 == 0) {
        uVar1 = param_1;
        func_0x00010c1490c0();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar1 == 0) || (uVar6 = param_1, func_0x00010c078820(), (uVar6 & 1) != 0)) {
LAB_107bafc7c:
          _objc_release(uVar1);
        }
        else {
          uVar6 = *(ulong *)(param_1 + (long)_DAT_11276b760);
          func_0x00010bf02040();
          if (((uVar6 & 1) == 0) && (uVar6 = param_1, func_0x00010bf428c0(), uVar6 == 0))
          goto LAB_107bafc7c;
          uVar6 = param_1;
          func_0x00010c1490c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c08e0c0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_3;
          func_0x00010c071ae0();
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar1);
          if ((uVar8 & 1) == 0) {
            _objc_initWeak(auStack_78,param_1);
            _objc_initWeak(auStack_80,param_5);
            uVar1 = param_1;
            func_0x00010c0d6740(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = param_5;
            _objc_retainBlock(param_5);
            func_0x00010befa120(uVar1);
            _objc_release(lVar11);
            _objc_release(uVar1);
            func_0x00010c1490c0(param_1);
            _objc_retainAutoreleasedReturnValue();
            puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b0 = 0xc2000000;
            pcStack_a8 = FUN_107bafed0;
            puStack_a0 = &UNK_1109ff068;
            _objc_copyWeak(auStack_90,auStack_78);
            _objc_retain(param_3);
            uStack_98 = param_3;
            _objc_copyWeak(auStack_88,auStack_80);
            _objc_copyWeak(auStack_c8,auStack_78);
            _objc_copyWeak(auStack_c0,auStack_80);
            func_0x00010bf386a0(param_1);
            _objc_release(param_1);
            _objc_destroyWeak(auStack_c0);
            _objc_destroyWeak(auStack_c8);
            _objc_destroyWeak(auStack_88);
            _objc_release(uStack_98);
            _objc_destroyWeak(auStack_90);
            _objc_destroyWeak(auStack_80);
            _objc_destroyWeak(auStack_78);
            goto LAB_107bafcc0;
          }
        }
        uVar10 = *(undefined8 *)(param_1 + lVar11);
        puVar2 = PTR_PTR_1126d6d08;
        func_0x00010c103000(PTR_PTR_1126d6d08);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0(uVar10);
        _objc_release(puVar2);
        (**(code **)(param_5 + 0x10))(param_5,1);
      }
      else {
        func_0x00010bdcd120(param_1);
      }
LAB_107bafcc0:
      _objc_release(puVar5);
      goto LAB_107bafb48;
    }
    uVar10 = *(undefined8 *)(param_1 + (long)_DAT_11276b788);
    puVar2 = PTR_PTR_1126d6d08;
    func_0x00010c1030c0(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar10);
    _objc_release(puVar2);
    pcVar9 = *(code **)(param_5 + 0x10);
    uVar10 = 0;
  }
  (*pcVar9)(param_5,uVar10);
LAB_107bafb48:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107bafed0; end: 107baff9f;  */

void FUN_107bafed0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be98460(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107baffa0; end: 107bb010f; -[SCWebBrowserV11ViewController _safeBrowsingSucceededWithURLType:url:decisionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107baffa0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276b788);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c149140(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec300(uVar5);
  _objc_release(puVar1);
  if (param_5 != 0) {
    lVar2 = param_1;
    func_0x00010c0d6740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    _objc_retainBlock(param_5);
    lVar4 = lVar2;
    func_0x00010bf4b900();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 != 0) {
      lVar2 = param_1;
      func_0x00010c0d6740(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_5;
      _objc_retainBlock(param_5);
      func_0x00010c12d360(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_1;
      func_0x00010beb2780();
      if ((param_3 == 0) && ((int)lVar2 != 0)) {
        func_0x00010bdcd120(param_1);
      }
      else if (param_3 == 0) {
        (**(code **)(param_5 + 0x10))(param_5,1);
      }
      else {
        (**(code **)(param_5 + 0x10))(param_5,0);
        func_0x00010bebbaa0(param_1);
      }
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb0110; end: 107bb024b; -[SCWebBrowserV11ViewController _safeBrowsingFailedWithDecisionHandler:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb0110(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d6d08;
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276b788);
  _objc_retain(param_4);
  func_0x00010c1490e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  _objc_release(param_4);
  func_0x00010bfec2e0(uVar5);
  _objc_release(puVar1);
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010c0d6740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    _objc_retainBlock(param_3);
    lVar4 = lVar2;
    func_0x00010bf4b900();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 != 0) {
      lVar2 = param_1;
      func_0x00010c0d6740(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      _objc_retainBlock(param_3);
      func_0x00010c12d360(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar2);
      (**(code **)(param_3 + 0x10))(param_3,0);
      func_0x00010be2cb20(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb024c; end: 107bb02cb; -[SCWebBrowserV11ViewController _isHypertextURL:] */

ulong FUN_107bb024c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d58);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107bb02cc; end: 107bb03b7; -[SCWebBrowserV11ViewController webView:didFailProvisionalNavigation:withError:] */

void FUN_107bb02cc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010be2cb00(param_1,param_2,param_5);
  uVar1 = param_1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9a760();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
LAB_107bb0394:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  uVar3 = param_1;
  func_0x00010bf9a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 == 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9a7c0();
      uVar1 = param_1;
      goto LAB_107bb0394;
    }
  }
  return;
}



/* Entry: 107bb03b8; end: 107bb040f; -[SCWebBrowserV11ViewController webView:didFailNavigation:withError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb03b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b788);
  _objc_retain(param_5);
  func_0x00010bf768c0(uVar1,param_2,0);
  func_0x00010be2cb00(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107bb0410; end: 107bb05d7; -[SCWebBrowserV11ViewController webView:didStartProvisionalNavigation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb0410(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c1b2c60(param_1);
  uVar1 = param_1;
  func_0x00010c076d00();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a32e0();
      _objc_release(uVar1);
    }
  }
  uVar1 = param_1;
  func_0x00010c063fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    func_0x00010bede000(0,param_1);
    func_0x00010be62460(param_1);
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a2f60(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
  }
  uVar1 = param_1;
  func_0x00010beb4960();
  if ((int)uVar1 != 0) {
    lVar4 = param_1 + (long)_DAT_11276b75c;
    _objc_loadWeakRetained(lVar4);
    uVar1 = param_1;
    func_0x00010beead00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3000(lVar4);
    _objc_release(uVar1);
    _objc_release(lVar4);
  }
  uVar3 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be65200(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb05d8; end: 107bb0857; -[SCWebBrowserV11ViewController _notifyUrlLoadEventStream:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb05d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  uVar10 = param_3;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar4 = param_1;
  func_0x00010becdd80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010beb4920();
  if ((int)lVar5 != 0) {
    puVar6 = PTR_PTR_1126d6d98;
    _objc_alloc(PTR_PTR_1126d6d98);
    puVar7 = PTR_PTR_1126d6da0;
    _objc_alloc(PTR_PTR_1126d6da0);
    if (lVar4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar4 + 8);
    }
    _objc_retain(uVar10);
    uVar8 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11276b82c);
    func_0x00010c296f60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b892220(puVar7,uVar10,3,puVar3,&PTR____CFConstantStringClassReference_110eb19d8,
                        uVar8,uVar9);
    func_0x00010c000060(puVar6);
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar10);
    func_0x00010bf99d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7b20();
    _objc_release(param_1);
    _objc_release(puVar6);
  }
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb0858; end: 107bb08d7; -[SCWebBrowserV11ViewController webView:didReceiveServerRedirectForProvisionalNavigation:] */

void FUN_107bb0858(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a32c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107bb08d8; end: 107bb10db; -[SCWebBrowserV11ViewController webView:decidePolicyForNavigationResponse:decisionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb08d8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
  _objc_opt_class(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  puVar2 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar18);
  puVar18 = puVar1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar18 = (undefined *)0x0;
  }
  _objc_retain(puVar18);
  _objc_release(puVar1);
  puVar1 = puVar18;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar18;
  func_0x00010c252ee0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + (long)_DAT_11276b84c);
  *(undefined **)(param_1 + (long)_DAT_11276b84c) = puVar3;
  _objc_release(uVar16);
  puVar3 = puVar18;
  func_0x00010bdc1c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  puVar4 = puVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if ((int)puVar5 == 0) {
    if ((puVar18 != (undefined *)0x0) &&
       (puVar18 = param_4, func_0x00010c073400(), ((ulong)puVar18 & 1) != 0)) {
      uVar6 = param_1;
      func_0x00010c063fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar2 + -400;
      _objc_release();
      if (puVar18 < (undefined *)0xffffffffffffff9c && uVar6 == 0) {
        uVar16 = *(undefined8 *)(param_1 + (long)_DAT_11276b788);
        puVar3 = PTR_PTR_1126d6d08;
        func_0x00010c103160(PTR_PTR_1126d6d08);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec300(uVar16);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1acb40(param_1);
        _objc_release(puVar3);
        func_0x00010c19cb60(param_1);
        uVar7 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        _objc_opt_respondsToSelector();
        _objc_release(uVar7);
        if ((uVar8 & 1) != 0) {
          uVar7 = param_1;
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a2f40();
          _objc_release(uVar7);
        }
      }
      if (puVar18 < (undefined *)0xffffffffffffff38) {
        puVar3 = PTR_PTR_1126d6d08;
        func_0x00010c103140(PTR_PTR_1126d6d08);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010c2ac460(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        func_0x00010bfec300(*(undefined8 *)(param_1 + (long)_DAT_11276b788));
        func_0x00010be2cb20(param_1);
        _objc_release(puVar9);
      }
      uVar7 = param_1;
      func_0x00010bf428c0();
      if (uVar7 == 0 && (puVar18 < (undefined *)0xffffffffffffff9c && uVar6 == 0)) {
        uVar6 = param_1;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bef2500();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf39780();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010bf529e0();
        puStack_68 = PTR_PTR_1126d6d18;
        if (uVar10 == 0) {
          _objc_retain(puVar1);
          puStack_68 = puVar1;
        }
        else {
          uVar10 = param_1;
          func_0x00010bf45e20(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bef2500();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010bf39780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf11520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
        }
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        func_0x00010be43780(param_1);
        puVar18 = puVar1;
        if (((puStack_68 != (undefined *)0x0) &&
            (uVar6 = param_1, func_0x00010be43780(), puVar18 = puStack_68,
            (undefined *)0xffffffffffffff9b < puVar2 + -300)) && ((uVar6 & 1) == 0)) {
          uVar6 = param_1;
          func_0x00010bf6b020();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          _objc_opt_respondsToSelector();
          _objc_release(uVar6);
          if ((uVar7 & 1) != 0) {
            uVar6 = param_1;
            func_0x00010bf6b020(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6f960();
            _objc_release(uVar6);
          }
        }
        _objc_retain(puVar18);
        uVar6 = param_1;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bef2500();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c28f7c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar6);
        puVar2 = puVar18;
        if (uVar8 != 0) {
          puVar2 = PTR_PTR_1126d6d18;
          func_0x00010c0d05e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126d6d18;
          uVar6 = uVar8;
          func_0x00010bf87dc0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar17 = (long)_DAT_11276b760;
          uVar13 = *(undefined8 *)(param_1 + lVar17);
          func_0x00010bef2500();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar13;
          func_0x00010bef2c20();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = *(undefined8 *)(param_1 + lVar17);
          func_0x00010bef2500(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010bef4d20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b7360(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar16);
          _objc_release(uVar13);
          _objc_release(uVar6);
          lVar17 = param_1 + (long)_DAT_11276b75c;
          _objc_loadWeakRetained(lVar17);
          func_0x00010c2a3020();
          _objc_release(lVar17);
          _objc_release(puVar18);
          _objc_release(puVar3);
        }
        uVar6 = param_1;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bef2500();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar7;
        func_0x00010bf9a760();
        _objc_release(uVar7);
        _objc_release(uVar6);
        if ((int)uVar10 == 0) {
          puVar18 = puVar2;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010beec820(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar18;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          _objc_release(puVar18);
          if (((ulong)puVar4 & 1) != 0) {
            _objc_release(uVar8);
            _objc_release(puVar2);
            _objc_release(puStack_68);
            goto LAB_107bb1020;
          }
          (**(code **)(param_5 + 0x10))(param_5,0);
          uVar16 = *(undefined8 *)(param_1 + (long)_DAT_11276b890);
          *(undefined **)(param_1 + (long)_DAT_11276b890) = puVar2;
          _objc_retain(puVar2);
          _objc_release(uVar16);
          puVar18 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
          func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          func_0x00010be4ece0(param_1);
          _objc_release(puVar18);
        }
        else {
          uVar16 = *(undefined8 *)(param_1 + (long)_DAT_11276b890);
          *(undefined **)(param_1 + (long)_DAT_11276b890) = puVar2;
          _objc_retain(puVar2);
          _objc_release(uVar16);
          func_0x00010be6d140(param_1);
          _objc_release(puVar2);
          (**(code **)(param_5 + 0x10))(param_5,0);
        }
        _objc_release(uVar8);
        goto LAB_107bb0a64;
      }
    }
LAB_107bb1020:
    (**(code **)(param_5 + 0x10))(param_5,1);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0);
    puStack_68 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f6900();
    puVar18 = puStack_68;
    func_0x00010bdc2b80(puStack_68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4eca0(param_1);
    _objc_release(puVar18);
LAB_107bb0a64:
    _objc_release(puStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb10dc; end: 107bb127f; -[SCWebBrowserV11ViewController _openExternalBrowserForUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb10dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  uVar1 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be681a0(param_1,param_2);
  _objc_release(uVar1);
  lVar2 = param_2;
  func_0x00010beb4960();
  if ((int)lVar2 != 0) {
    lVar2 = param_2 + _DAT_11276b75c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_2;
    func_0x00010beead00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3000(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_initWeak(auStack_48,param_2);
  func_0x00010c28f600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c14d740(param_2);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 107bb1280; end: 107bb12c3;  */

void FUN_107bb1280(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bb12c4; end: 107bb12ff; -[SCWebBrowserV11ViewController _handleOpenExbResult:success:] */

void FUN_107bb12c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  func_0x00010c1b30c0(param_1,param_2,0);
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportExbOpenFail_1125817a0);
  return;
}



/* Entry: 107bb1300; end: 107bb13e7; -[SCWebBrowserV11ViewController _reportExbOpenFail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb1300(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276b7a8);
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110eb1c98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132d60(uVar5,param_2,puVar3,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107bb13e8; end: 107bb13ef; -[SCWebBrowserV11ViewController cardTransitionShouldBeginWithView:touchLocation:] */

undefined8 FUN_107bb13e8(void)

{
  return 0;
}



/* Entry: 107bb13f0; end: 107bb13f3; -[SCWebBrowserV11ViewController cardToExpandTransition] */

void FUN_107bb13f0(void)

{
  return;
}



/* Entry: 107bb13f4; end: 107bb13ff; -[SCWebBrowserV11ViewController cardTransitionWillBeginWithView:] */

void FUN_107bb13f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107bb1400; end: 107bb1493; -[SCWebBrowserV11ViewController cardTransitionDidUpdateProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb1400(double param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  if (5.0 < param_1 * param_4) {
    uVar2 = *(undefined8 *)(param_5 + _DAT_11276b82c);
    func_0x00010c152980(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107bb1494; end: 107bb153f; -[SCWebBrowserV11ViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb1494(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276b82c);
    func_0x00010c152980(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(uVar1);
    func_0x00010be097c0(param_1,param_2,0);
  }
  else if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276b82c);
    func_0x00010c152980(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb1540; end: 107bb175f; -[SCWebBrowserV11ViewController popupBridge:requestsPresentationOfViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb1540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
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
  
  _objc_retain(param_8);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11276b788);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c104000(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar4,param_6,puVar1);
  _objc_release(puVar1);
  if (param_8 != 0) {
    func_0x00010c2a6740(param_8,param_6,param_5);
    func_0x00010bef7700(param_5,param_6,param_8);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_8;
    func_0x00010c29bf00(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2,param_6,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    lVar3 = param_8;
    func_0x00010c29bf00(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGAffineTransformMakeTranslation(&uStack_80,0,param_4);
    lVar3 = param_8;
    func_0x00010c29bf00(param_8);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    func_0x00010c219960();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bf77e80(param_8,param_6,param_5);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107bb1760;
    puStack_c0 = &UNK_110842e18;
    _objc_retain(param_8);
    lStack_b8 = param_8;
    func_0x00010bf03440(0x3fd3333333333333,0,puVar1,param_6,0x20000,&puStack_d8,0);
    _objc_release(lStack_b8);
  }
  _objc_release(param_8);
  return;
}



/* Entry: 107bb1760; end: 107bb17bb;  */

void FUN_107bb1760(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 107bb17bc; end: 107bb18e3; -[SCWebBrowserV11ViewController popupBridge:requestsDismissalOfViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb17bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b788);
  puVar2 = PTR_PTR_1126d6d08;
  func_0x00010c103fe0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  if (param_4 != 0) {
    func_0x00010c2a6740(param_4,param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107bb18e4;
    puStack_58 = &UNK_110841f80;
    _objc_retain(param_4);
    puStack_98 = puVar2;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x107bb196c;
    puStack_80 = &UNK_110841f20;
    lStack_50 = param_4;
    lStack_48 = param_1;
    _objc_retain(param_4);
    lStack_78 = param_4;
    func_0x00010bf03440(0x3fd3333333333333,0,puVar1,param_2,0x10000,&puStack_70,&puStack_98);
    _objc_release(lStack_78);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107bb18e4; end: 107bb19ab;  */

void FUN_107bb18e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_d3;
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGAffineTransformMakeTranslation(auStack_50,0,in_d3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107bb19ac; end: 107bb1c37; -[SCWebBrowserV11ViewController gaMetricsScriptDidReceiveHit:hitTimestampMs:isPageView:pageURLString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb19ac(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_2;
    uVar8 = param_1;
    func_0x00010becdd80(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_2 + (long)_DAT_11276b890);
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c0720c0(param_6);
    }
    if (*(long *)(param_2 + (long)_DAT_11276b894) == 0) {
      uVar8 = 0;
    }
    else {
      func_0x00010bf885a0();
    }
    uVar2 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a32a0(uVar8);
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_2 + (long)_DAT_11276b890);
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c0720c0(param_6);
    }
    uVar1 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3280(param_1);
    _objc_release(uVar1);
    _objc_release(lVar3);
  }
  puVar4 = PTR_PTR_1126d6d08;
  func_0x00010bfbc960(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + (long)_DAT_11276b788));
  _objc_release(puVar7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb1c38; end: 107bb1ee7; -[SCWebBrowserV11ViewController _newURLToLoadWithRetainedQueryItemsIfNecessary:url:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107bb1c38(ulong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_4);
  if ((param_3 == 0) || ((*(byte *)(param_1 + (long)_DAT_11276b840) & 1) != 0)) {
LAB_107bb1c78:
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar9 = (long)_DAT_11276b760;
    puVar1 = *(undefined **)(param_1 + lVar9);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c064260();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf529e0();
    if ((puVar8 == (undefined *)0x0) || (uVar3 = param_1, func_0x00010bf428c0(), uVar3 != 0)) {
LAB_107bb1cc0:
      puVar8 = (undefined *)0x0;
    }
    else {
      uVar3 = param_1;
      func_0x00010bf6eb40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((uVar4 & 1) != 0) goto LAB_107bb1c78;
      puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_4,0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = *(undefined **)(param_1 + lVar9);
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c064260();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010c0d3c80();
      _objc_release(puVar8);
      _objc_release(puVar5);
      puVar8 = puVar1;
      func_0x00010c11d4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010bf529e0();
      _objc_release(puVar8);
      if (puVar5 != (undefined *)0x0) {
        puVar8 = puVar1;
        func_0x00010c11d4e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d500(puVar2,param_2,puVar8);
        _objc_release(puVar8);
      }
      puVar8 = puVar2;
      func_0x00010bf529e0();
      if (puVar8 == (undefined *)0x0) goto LAB_107bb1cc0;
      puVar8 = puVar1;
      func_0x00010c11d4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010c0d3c80();
      if (puVar5 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      }
      else {
        _objc_retain(puVar5);
        puVar6 = puVar5;
      }
      _objc_release(puVar5);
      _objc_release(puVar8);
      func_0x00010befa160(puVar6,param_2,puVar2);
      puVar8 = puVar6;
      func_0x00010bf51e00(puVar6);
      func_0x00010c1e6460(puVar1,param_2,puVar8);
      _objc_release(puVar8);
      puVar8 = puVar1;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c25cf40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar8);
      if (puVar7 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return puVar8;
}



/* Entry: 107bb1ee8; end: 107bb1f73; -[SCWebBrowserV11ViewController performanceEntriesReceived:] */

void FUN_107bb1ee8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2f20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb1f74; end: 107bb23af; -[SCWebBrowserV11ViewController publishToTrace:entries:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb1f74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276b814);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf92580();
  _objc_release(uVar1);
  if (((int)uVar2 != 0) && (uVar3 = param_5, func_0x00010bf529e0(), uVar3 != 0)) {
    uVar3 = param_5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c250f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(uVar10);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf60700();
    _objc_release(puVar4);
    param_1 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_5);
    param_4 = &uStack_130;
    uVar3 = param_5;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        uVar10 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_5);
          }
          puVar9 = *(undefined **)(lStack_128 + uVar10 * 8);
          puVar4 = puVar9;
          func_0x00010c250f20(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          _objc_release(puVar4);
          puVar4 = puVar9;
          func_0x00010bf8b160(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          _objc_release(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar5 = puVar9;
          func_0x00010bf97860();
          FUN_107bbbc28();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar5 = puVar9;
          func_0x00010bf97860();
          if (puVar5 == (undefined *)0x4) {
            puVar6 = puVar9;
            func_0x00010c064f40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (puVar6 != (undefined *)0x0) {
              puVar6 = puVar9;
              func_0x00010c064f40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
              _objc_release(puVar6);
              puVar4 = puVar5;
            }
          }
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
          _objc_alloc();
          func_0x00010c04e820();
          puVar6 = puVar9;
          if (puVar5 != (undefined *)0x0) {
            func_0x00010c1e6360(puVar5);
            puVar6 = puVar5;
            func_0x00010c25cd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
          }
          puVar9 = puVar6;
          func_0x00010c25cfc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar7 = puVar6;
          func_0x00010c08fa60();
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if ((undefined *)0x96 < puVar7) {
            puVar7 = puVar6;
            func_0x00010c260c20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            _objc_release(puVar7);
            puVar6 = puVar4;
          }
          puVar4 = PTR_PTR_1126ae4e8;
          func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0665e0();
          _objc_release(puVar4);
          _objc_release(puVar5);
          _objc_release(puVar9);
          _objc_release(puVar6);
          uVar10 = uVar10 + 1;
        } while (uVar3 != uVar10);
        param_4 = &uStack_130;
        uVar3 = param_5;
        func_0x00010bf52a60();
      } while (uVar3 != 0);
    }
    _objc_release(param_5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  uVar3 = param_5;
  func_0x00010c076d00();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_5;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar10 & 1) != 0) {
      uVar3 = param_5;
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a33a0();
      _objc_release(uVar3);
    }
    uVar3 = param_5;
    func_0x00010bf99d00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar10 & 1) != 0) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      uVar3 = param_5;
      func_0x00010bf99d00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becdd80(param_1,param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3380(uVar3);
      _objc_release(param_5);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb23b0; end: 107bb24e7; -[SCWebBrowserV11ViewController lifecycleMarkerHtmlLoaded:] */

void FUN_107bb23b0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c076d00();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a33a0();
      _objc_release(uVar1);
    }
    uVar1 = param_2;
    func_0x00010bf99d00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      uVar1 = param_2;
      func_0x00010bf99d00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becdd80(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3380(uVar1);
      _objc_release(param_2);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb24e8; end: 107bb2633; -[SCWebBrowserV11ViewController lifecycleMarkerDomContentLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb24e8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + (long)_DAT_11276b898);
  *(undefined8 *)(param_2 + (long)_DAT_11276b898) = 0;
  _objc_release(uVar1);
  uVar2 = param_2;
  func_0x00010c076d00();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar2 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a33a0();
      _objc_release(uVar2);
    }
    uVar2 = param_2;
    func_0x00010bf99d00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      uVar2 = param_2;
      func_0x00010bf99d00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becdd80(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3380(uVar2);
      _objc_release(param_2);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb2634; end: 107bb275f; -[SCWebBrowserV11ViewController lifecycleMarkerFirstContentfulPaint:] */

void FUN_107bb2634(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a33a0();
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar1 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becdd80(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3380(uVar1);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb2760; end: 107bb2897; -[SCWebBrowserV11ViewController lifecycleMarkerFullLoad:] */

void FUN_107bb2760(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c076d00();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_2;
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a33a0();
      _objc_release(uVar1);
    }
    uVar1 = param_2;
    func_0x00010bf99d00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      uVar1 = param_2;
      func_0x00010bf99d00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becdd80(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3380(uVar1);
      _objc_release(param_2);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb2898; end: 107bb298f; -[SCWebBrowserV11ViewController notifyEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb2898(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    puVar3 = PTR_PTR_1126d6e40;
    _objc_alloc(PTR_PTR_1126d6e40);
    uVar4 = *(undefined8 *)(param_2 + (long)_DAT_11276b760);
    func_0x00010bef2500(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052b20(param_1,puVar3);
    _objc_release(uVar4);
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2fa0();
    _objc_release(param_2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bb2990; end: 107bb2a47; -[SCWebBrowserV11ViewController webviewErrorDetected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb2990(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_11276b88c) & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e4f738);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb1d38);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        *(int *)(param_1 + _DAT_11276b858) = *(int *)(param_1 + _DAT_11276b858) + 1;
      }
    }
    else {
      func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_11276b7a0),param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb2a48; end: 107bb2b63; -[SCWebBrowserV11ViewController adobePingWithUrl:timestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb2a48(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf885a0(param_5);
    puVar3 = PTR_PTR_1126d6e40;
    _objc_alloc(PTR_PTR_1126d6e40);
    puVar4 = PTR_PTR_1126d6d80;
    func_0x00010befdcc0(PTR_PTR_1126d6d80);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + (long)_DAT_11276b760);
    func_0x00010bef2500(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052b20(param_1,puVar3);
    _objc_release(uVar5);
    _objc_release(puVar4);
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2fa0();
    _objc_release(param_2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107bb2b64; end: 107bb2cd7; -[SCWebBrowserV11ViewController didReceivePostClickEvent:topicType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb2b64(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_1, func_0x00010beb4920(), (int)lVar1 != 0)) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    lVar1 = param_1;
    func_0x00010becdd80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d6d98;
    _objc_alloc(PTR_PTR_1126d6d98);
    puVar3 = PTR_PTR_1126d6da0;
    _objc_alloc(PTR_PTR_1126d6da0);
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276b82c);
    func_0x00010c296f60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b892220(puVar3,uVar5,3,param_3,param_4,0,uVar4);
    func_0x00010c000060(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    func_0x00010bf99d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7b20();
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb2cd8; end: 107bb2d4b; -[SCWebBrowserV11ViewController handleAutofillBlurEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb2cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6e48;
  func_0x00010bfb5700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11276b898;
  func_0x00010c0cab80(puVar1,param_2,param_3,*(undefined8 *)(param_1 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bb2d4c; end: 107bb2e1f; -[SCWebBrowserV11ViewController handleAutofillFieldsDetected:] */

void FUN_107bb2d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d6e48;
  func_0x00010bfac900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51320(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR_PTR_1126d6e48;
  func_0x00010c2499c0(PTR_PTR_1126d6e48,param_2,puVar1);
  if ((int)puVar3 != 0) {
    func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb9e0);
  }
  puVar3 = PTR_PTR_1126d6e48;
  func_0x00010c2499e0(PTR_PTR_1126d6e48,param_2,puVar1);
  if ((int)puVar3 != 0) {
    func_0x00010befa120(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb9f8);
  }
  func_0x00010be58e20(param_1,param_2,3,0,puVar2,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bb2e20; end: 107bb2eb7; -[SCWebBrowserV11ViewController handleAutofillFocusInEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb2e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6e48;
  _objc_retain(param_3);
  func_0x00010bf50f60(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb5740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b89c);
  *(undefined8 *)(param_1 + _DAT_11276b89c) = uVar2;
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276b804),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


