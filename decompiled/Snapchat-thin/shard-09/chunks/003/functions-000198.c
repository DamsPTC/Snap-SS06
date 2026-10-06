/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b946fc; end: 106b94703; +[_SCSettingsConstants innerVerticalPadding] */

undefined8 FUN_106b946fc(void)

{
  return 0x4020000000000000;
}



/* Entry: 106b94704; end: 106b9470b; +[_SCSettingsConstants innerHorizontalPadding] */

undefined8 FUN_106b94704(void)

{
  return 0x4014000000000000;
}



/* Entry: 106b9470c; end: 106b94713; +[_SCSettingsConstants primaryTextFontSize] */

undefined8 FUN_106b9470c(void)

{
  return 0x402e000000000000;
}



/* Entry: 106b94714; end: 106b9471b; +[_SCSettingsConstants secondaryTextFontSize] */

undefined8 FUN_106b94714(void)

{
  return 0x4028000000000000;
}



/* Entry: 106b9471c; end: 106b94723; +[_SCSettingsConstants detailTextFontSize] */

undefined8 FUN_106b9471c(void)

{
  return 0x402a000000000000;
}



/* Entry: 106b94724; end: 106b9474b; +[_SCSettingsConstants primaryTextFont] */

void FUN_106b94724(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c1130e0();
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 106b9474c; end: 106b94773; +[_SCSettingsConstants secondaryTextFont] */

void FUN_106b9474c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c1551a0();
                    /* WARNING: Could not recover jumptable at 0x00010c127e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_regularAvenirNextFontOfSize__1126279b0);
  return;
}



/* Entry: 106b94774; end: 106b9479b; +[_SCSettingsConstants detailTextFont] */

void FUN_106b94774(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6f700();
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 106b9479c; end: 106b947ab; +[_SCSettingsConstants primaryTextColor] */

void FUN_106b9479c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc6);
  return;
}



/* Entry: 106b947ac; end: 106b947bb; +[_SCSettingsConstants secondaryTextColor] */

void FUN_106b947ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xbf);
  return;
}



/* Entry: 106b947bc; end: 106b947cb; +[_SCSettingsConstants detailTextColor] */

void FUN_106b947bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xbf);
  return;
}



/* Entry: 106b947cc; end: 106b947db; +[_SCSettingsConstants disabledTextColor] */

void FUN_106b947cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xbf);
  return;
}



/* Entry: 106b947dc; end: 106b947eb; +[_SCSettingsConstants warningTintColor] */

void FUN_106b947dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x98);
  return;
}



/* Entry: 106b947ec; end: 106b947fb; +[_SCSettingsConstants errorTintColor] */

void FUN_106b947ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd0);
  return;
}



/* Entry: 106b947fc; end: 106b9480b; +[_SCSettingsConstants controlTintColor] */

void FUN_106b947fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x94);
  return;
}



/* Entry: 106b9480c; end: 106b9481b; +[_SCSettingsConstants linkColor] */

void FUN_106b9480c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xc3);
  return;
}



/* Entry: 106b9481c; end: 106b9482f; +[_SCSettingsConstants shareImage] */

void FUN_106b9481c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110e76c18);
  return;
}



/* Entry: 106b94830; end: 106b94837; -[SCWebViewToolbarViewController initWithURL:] */

void FUN_106b94830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0579b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithURL_cookies__1125f3878,param_3,0);
  return;
}



/* Entry: 106b94838; end: 106b948b3; -[SCWebViewToolbarViewController initWithURL:cookies:] */

undefined8
FUN_106b94838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  _objc_retain(param_4);
  func_0x00010c137160(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057d20(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106b948b4; end: 106b948bb; -[SCWebViewToolbarViewController initWithURLRequest:] */

void FUN_106b948b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithURLRequest_cookies__1125f3958,param_3,0);
  return;
}



/* Entry: 106b948bc; end: 106b9494f; -[SCWebViewToolbarViewController initWithURLRequest:cookies:] */

undefined1 *
FUN_106b948bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1ebac0(puVar1);
    func_0x00010c183fc0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b94950; end: 106b94993; -[SCWebViewToolbarViewController loadURL:] */

void FUN_106b94950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c540(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b94994; end: 106b949e7; -[SCWebViewToolbarViewController loadURLRequest:] */

void FUN_106b94994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0834c0();
  if ((int)uVar1 == 0) {
    func_0x00010c1ebac0(param_1,param_2,param_3);
  }
  else {
    func_0x00010be4ef20(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b949e8; end: 106b94a9f; -[SCWebViewToolbarViewController pageViewName] */

undefined8 FUN_106b949e8(ulong param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e681b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e681b8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0720c0();
    _objc_release(param_1);
    uVar4 = 100;
    if ((int)uVar1 == 0) {
      uVar4 = 0x1c;
    }
  }
  else {
    uVar4 = 0x146;
  }
  return uVar4;
}



/* Entry: 106b94aa0; end: 106b95d43; -[SCWebViewToolbarViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b94aa0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_440;
  undefined *puStack_438;
  long lStack_430;
  long lStack_428;
  undefined1 *puStack_420;
  code *pcStack_418;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  undefined *puStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  undefined *puStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  long lStack_258;
  long lStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_158 = PTR_PTR_1126f5540;
  lStack_160 = param_1;
  _objc_msgSendSuper2(&lStack_160,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  _objc_alloc_init();
  uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar3 = PTR_PTR_1126b4f58;
  puStack_168 = puVar1;
  func_0x00010bdc3620(uVar13,uVar14,uVar15,uVar16,PTR_PTR_1126b4f58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224f00(param_1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb840();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126d0b18;
  _objc_alloc();
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  func_0x00010c219b60();
  fVar12 = -0.37254903;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3feebebebebebebf,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_alloc_init();
  func_0x00010bef9680(puVar1);
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x00010c16e100(param_1);
  _objc_release(puVar5);
  lVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf13860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar1);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x00010c19edc0(param_1);
  _objc_release(puVar5);
  lVar2 = param_1;
  func_0x00010bfb62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfb62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfb62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfb62a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfb62a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfb62a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar1);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc_init(PTR__OBJC_CLASS___UIButton_1126aec48);
  func_0x00010c1e9520(param_1);
  _objc_release(puVar5);
  lVar2 = param_1;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c0e0();
  _objc_release(lVar2);
  lVar10 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar10);
  func_0x00010c1e3380(fVar12 + -1.0,lVar4);
  lVar2 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar8);
  _objc_release(lVar2);
  func_0x00010c1e3380(fVar12 + -1.0,lVar11);
  puStack_2b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_190 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_1a0 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_198 = lVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_1b0 = lVar2;
  lStack_150 = lVar2;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = lVar8;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_1c8 = lVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c0 = lVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  lStack_1d8 = lVar8;
  lStack_188 = lVar11;
  lStack_180 = lVar4;
  lStack_148 = lVar8;
  lStack_140 = lVar4;
  lStack_138 = lVar11;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  puStack_1e8 = puVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e0 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_1f8 = puVar7;
  puStack_130 = puVar7;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  puStack_208 = puVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_200 = lVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_210 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_218 = puVar5;
  puStack_128 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  puStack_228 = puVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_220 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_230 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_238 = puVar6;
  puStack_120 = puVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  puStack_248 = puVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_240 = lVar2;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lStack_250 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = lVar2;
  func_0x00010bf493c0(0xc046000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puStack_260 = puVar7;
  puStack_118 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_268 = puVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_270 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  puStack_278 = puVar5;
  puStack_110 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_280 = puVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_288 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puStack_290 = puVar7;
  puStack_108 = puVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_298 = puVar5;
  puStack_170 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_2a0 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  puStack_2a8 = puVar5;
  puStack_100 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  puStack_2c0 = puVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_2b8 = lVar2;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lStack_2c8 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_2d0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  puStack_2d8 = puVar1;
  puStack_f8 = puVar1;
  func_0x00010bf13860();
  _objc_retainAutoreleasedReturnValue();
  lStack_2e0 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  lStack_2e8 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_2f0 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_2f8 = lVar2;
  lStack_f0 = lVar2;
  func_0x00010bf13860();
  _objc_retainAutoreleasedReturnValue();
  lStack_300 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  lStack_308 = lVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_310 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_318 = lVar4;
  lStack_e8 = lVar4;
  func_0x00010bf13860();
  _objc_retainAutoreleasedReturnValue();
  lStack_320 = lVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = lVar2;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_330 = lVar2;
  lStack_e0 = lVar2;
  func_0x00010bf13860();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = lVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_348 = lVar4;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_340 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lStack_350 = lVar2;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_358 = lVar4;
  lStack_d8 = lVar4;
  func_0x00010bfb62a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_360 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  lStack_368 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_370 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  lStack_378 = lVar2;
  lStack_d0 = lVar2;
  func_0x00010bfb62a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_380 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  lStack_388 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_390 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_398 = lVar8;
  lStack_c8 = lVar8;
  func_0x00010bfb62a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_3a0 = lVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lStack_3a8 = lVar4;
  func_0x00010bf49420(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_3b0 = lVar4;
  lStack_c0 = lVar4;
  func_0x00010bfb62a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_3b8 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_3c8 = lVar2;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_3c0 = lVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_3d0 = lVar4;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_3d8 = lVar2;
  lStack_b8 = lVar2;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_3e0 = lVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lStack_3e8 = lVar4;
  func_0x00010bf49420(0x4035000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_3f0 = lVar4;
  lStack_b0 = lVar4;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_3f8 = lVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lStack_400 = lVar2;
  func_0x00010bf49420(0x4037000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_408 = lVar2;
  lStack_a8 = lVar2;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  lStack_a0 = lVar9;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_178 = puVar3;
  func_0x00010c274200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010bf493c0(0x4025000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_98 = lVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_2b0);
  _objc_release(puVar1);
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(puVar5);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lStack_408);
  _objc_release(lStack_400);
  _objc_release(lStack_3f8);
  _objc_release(lStack_3f0);
  _objc_release(lStack_3e8);
  _objc_release(lStack_3e0);
  _objc_release(lStack_3d8);
  _objc_release(lStack_3d0);
  _objc_release(lStack_3c0);
  _objc_release(lStack_3c8);
  _objc_release(lStack_3b8);
  _objc_release(lStack_3b0);
  _objc_release(lStack_3a8);
  _objc_release(lStack_3a0);
  _objc_release(lStack_398);
  _objc_release(puStack_390);
  _objc_release(lStack_388);
  _objc_release(lStack_380);
  _objc_release(lStack_378);
  _objc_release(puStack_370);
  _objc_release(lStack_368);
  _objc_release(lStack_360);
  _objc_release(lStack_358);
  _objc_release(lStack_350);
  _objc_release(lStack_340);
  _objc_release(lStack_348);
  _objc_release(lStack_338);
  _objc_release(lStack_330);
  _objc_release(lStack_328);
  _objc_release(lStack_320);
  _objc_release(lStack_318);
  _objc_release(puStack_310);
  _objc_release(lStack_308);
  _objc_release(lStack_300);
  _objc_release(lStack_2f8);
  _objc_release(puStack_2f0);
  _objc_release(lStack_2e8);
  _objc_release(lStack_2e0);
  _objc_release(puStack_2d8);
  _objc_release(lStack_2d0);
  _objc_release(lStack_2c8);
  _objc_release(lStack_2b8);
  _objc_release(puStack_2c0);
  _objc_release(puStack_2a8);
  _objc_release(puStack_2a0);
  _objc_release(puStack_298);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(puStack_280);
  _objc_release(puStack_278);
  _objc_release(puStack_270);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(lStack_258);
  _objc_release(lStack_250);
  _objc_release(lStack_240);
  _objc_release(puStack_248);
  _objc_release(puStack_238);
  _objc_release(lStack_230);
  _objc_release(lStack_220);
  _objc_release(puStack_228);
  _objc_release(puStack_218);
  _objc_release(lStack_210);
  _objc_release(lStack_200);
  _objc_release(puStack_208);
  _objc_release(puStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e0);
  _objc_release(puStack_1e8);
  _objc_release(lStack_1d8);
  _objc_release(lStack_1d0);
  _objc_release(lStack_1c0);
  _objc_release(lStack_1c8);
  _objc_release(lStack_1b8);
  _objc_release(lStack_1b0);
  _objc_release(lStack_1a8);
  _objc_release(lStack_198);
  _objc_release(lStack_1a0);
  _objc_release(lStack_190);
  lVar4 = param_1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar4 != 0) {
    lVar2 = param_1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4ef20(param_1);
    _objc_release(lVar2);
  }
  _objc_release(lStack_188);
  _objc_release(lStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
  puVar1 = puStack_168;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_418 = FUN_106b95d44;
  lStack_430 = lVar2;
  lStack_428 = param_1;
  puStack_420 = &stack0xfffffffffffffff0;
  func_0x00010c1cb840(*(undefined8 *)(puVar1 + _DAT_112759560));
  puStack_438 = PTR_PTR_1126f5540;
  puStack_440 = puVar1;
  _objc_msgSendSuper2(&puStack_440,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106b95d44; end: 106b95d97; -[SCWebViewToolbarViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b95d44(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c1cb840(*(undefined8 *)(param_1 + _DAT_112759560),param_2,0);
  puStack_28 = PTR_PTR_1126f5540;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106b95d98; end: 106b95dcb; -[SCWebViewToolbarViewController viewWillAppear:] */

void FUN_106b95d98(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f5540;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 106b95dcc; end: 106b95dd7; -[SCWebViewToolbarViewController supportedInterfaceOrientations] */

undefined8 FUN_106b95dcc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 106b95dd8; end: 106b95ddb; -[SCWebViewToolbarViewController getTitle] */

void FUN_106b95dd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2711b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_title_112679e90);
  return;
}



/* Entry: 106b95ddc; end: 106b95f1f; -[SCWebViewToolbarViewController viewDidLoad] */

void FUN_106b95ddc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f5540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf61860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar4 = uVar2;
    func_0x00010bfe7940();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar4 != 0) && (uVar5 = uVar4, func_0x00010c130820(), uVar5 != 2)) {
      uVar5 = uVar4;
      func_0x00010bfe9720(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9fc0(uVar2);
      _objc_release(uVar5);
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 106b95f20; end: 106b95f57; -[SCWebViewToolbarViewController setBackButtonEnabled:] */

void FUN_106b95f20(undefined8 param_1)

{
  func_0x00010bf13860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b95f58; end: 106b95f8f; -[SCWebViewToolbarViewController setForwardButtonEnabled:] */

void FUN_106b95f58(undefined8 param_1)

{
  func_0x00010bfb62a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b95f90; end: 106b95fc7; -[SCWebViewToolbarViewController setRefreshOrStopButtonEnabled:] */

void FUN_106b95f90(undefined8 param_1)

{
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b95fc8; end: 106b960c3; -[SCWebViewToolbarViewController updateRefreshButtonStateLoading:] */

void FUN_106b95fc8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = param_1;
  func_0x00010c1250a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e752f8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e752d8;
  }
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2,param_2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e752f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar2,param_2,puVar3,1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c1250a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b960c4; end: 106b9613f; -[SCWebViewToolbarViewController backPressed] */

void FUN_106b960c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2cac0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c2a3bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd2c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b96140; end: 106b961bb; -[SCWebViewToolbarViewController forwardPressed] */

void FUN_106b96140(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2cae0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c2a3bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd320();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b961bc; end: 106b9622f; -[SCWebViewToolbarViewController refreshPressed] */

void FUN_106b961bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076be0();
  _objc_release(uVar1);
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    func_0x00010c1288e0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c256160();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b96230; end: 106b9623f; -[SCWebViewToolbarViewController webView:didStartProvisionalNavigation:] */

void FUN_106b96230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateStateForWebView_showActivi_112680310,param_3,1,1,0);
  return;
}



/* Entry: 106b96240; end: 106b9624f; -[SCWebViewToolbarViewController webView:didReceiveServerRedirectForProvisionalNavigation:] */

void FUN_106b96240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateStateForWebView_showActivi_112680310,param_3,1,1,0);
  return;
}



/* Entry: 106b96250; end: 106b9625f; -[SCWebViewToolbarViewController webView:didFinishNavigation:] */

void FUN_106b96250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateStateForWebView_showActivi_112680310,param_3,0,0,0);
  return;
}



/* Entry: 106b96260; end: 106b9626f; -[SCWebViewToolbarViewController webView:didFailNavigation:withError:] */

void FUN_106b96260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateStateForWebView_showActivi_112680310,param_3,0,0,1);
  return;
}



/* Entry: 106b96270; end: 106b9627f; -[SCWebViewToolbarViewController webView:didFailProvisionalNavigation:withError:] */

void FUN_106b96270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateStateForWebView_showActivi_112680310,param_3,0,0,1);
  return;
}



/* Entry: 106b96280; end: 106b9628f; -[SCWebViewToolbarViewController webViewWebContentProcessDidTerminate:] */

void FUN_106b96280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateStateForWebView_showActivi_112680310,param_3,0,0,1);
  return;
}



/* Entry: 106b96290; end: 106b9634f; -[SCWebViewToolbarViewController webView:decidePolicyForNavigationAction:decisionHandler:] */

void FUN_106b96290(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c269f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
    _objc_release(param_5);
    param_5 = param_4;
    func_0x00010c134680(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b96350; end: 106b9635f; -[SCWebViewToolbarViewController webView:decidePolicyForNavigationResponse:decisionHandler:] */

void FUN_106b96350(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000106b9635c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))(in_x4,1);
  return;
}



/* Entry: 106b96360; end: 106b9645b; -[SCWebViewToolbarViewController updateStateForWebView:showActivityIndicator:isLoading:showError:] */

void FUN_106b96360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_3);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc0a0();
  _objc_release(puVar1);
  func_0x00010bf2cac0(param_3);
  func_0x00010c16e1a0(param_1);
  func_0x00010bf2cae0(param_3);
  _objc_release(param_3);
  func_0x00010c19ede0(param_1);
  func_0x00010c2891a0(param_1);
  puVar1 = PTR_PTR_1126afca8;
  if (param_6 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e75518;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e75518,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  return;
}



/* Entry: 106b9645c; end: 106b96777; -[SCWebViewToolbarViewController _loadWebViewWithRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9645c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = (long)_DAT_112759564;
  lVar2 = *(long *)(param_1 + lVar9);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010c2a3bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c060();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_108,param_1);
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_106b96778;
    puStack_120 = &UNK_110841fb0;
    _objc_copyWeak(auStack_110,auStack_108);
    _objc_retain(param_3);
    ppuVar3 = &puStack_138;
    lStack_118 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112759560);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a46c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe4ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar2 = *(long *)(param_1 + lVar9);
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      lVar2 = *(long *)(param_1 + lVar9);
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183f80(uVar6);
    }
    else {
      _dispatch_group_create();
      lVar8 = *(long *)(param_1 + lVar9);
      _objc_retain(lVar8);
      lVar9 = lVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar9 != 0) {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar8);
          }
          _dispatch_group_enter(lVar2);
          _objc_retain(lVar2);
          func_0x00010c183f80(uVar6);
          _objc_release(lVar2);
          lVar7 = lVar7 + 1;
        } while (lVar9 != lVar7);
        lVar9 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
      func_0x000100bc0718(lVar2,PTR___dispatch_main_q_11034be20,ppuVar3);
    }
    _objc_release(lVar2);
    _objc_release(uVar6);
    _objc_release(ppuVar3);
    _objc_release(lStack_118);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  lVar2 = param_3;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b96778; end: 106b967d3;  */

void FUN_106b96778(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b967d4; end: 106b967db;  */

void FUN_106b967d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106b967dc; end: 106b967eb; -[SCWebViewToolbarViewController webView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b967dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759560);
}



/* Entry: 106b967ec; end: 106b9682b; -[SCWebViewToolbarViewController setWebView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b967ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759560;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b9682c; end: 106b9683b; -[SCWebViewToolbarViewController backButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9682c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759568);
}



/* Entry: 106b9683c; end: 106b9687b; -[SCWebViewToolbarViewController setBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9683c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759568;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b9687c; end: 106b9688b; -[SCWebViewToolbarViewController forwardButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9687c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275956c);
}



/* Entry: 106b9688c; end: 106b968cb; -[SCWebViewToolbarViewController setForwardButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9688c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275956c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b968cc; end: 106b968db; -[SCWebViewToolbarViewController refreshButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b968cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759570);
}



/* Entry: 106b968dc; end: 106b9691b; -[SCWebViewToolbarViewController setRefreshButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b968dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759570;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b9691c; end: 106b9692b; -[SCWebViewToolbarViewController request] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9691c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759574);
}



/* Entry: 106b9692c; end: 106b9696b; -[SCWebViewToolbarViewController setRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9692c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759574;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b9696c; end: 106b9697b; -[SCWebViewToolbarViewController cookies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9696c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759564);
}



/* Entry: 106b9697c; end: 106b969bb; -[SCWebViewToolbarViewController setCookies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9697c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112759564;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b969bc; end: 106b96a3b; -[SCWebViewToolbarViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b969bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759564,0);
  _objc_storeStrong(param_1 + _DAT_112759574,0);
  _objc_storeStrong(param_1 + _DAT_112759570,0);
  _objc_storeStrong(param_1 + _DAT_11275956c,0);
  _objc_storeStrong(param_1 + _DAT_112759568,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759560,0);
  return;
}



/* Entry: 106b96a3c; end: 106b96b0f; -[SCCountryCodePickerView initWithFrame:] */

undefined1 * FUN_106b96a3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5548;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bdc17c0(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184ac0(puVar1);
    _objc_release(puVar2);
    func_0x00010c18b5e0(puVar1);
    func_0x00010c189840(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010c18b5e0(puVar2);
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b96b10; end: 106b96bab; -[SCCountryCodePickerView setSelectedCountryCode:animated:] */

void FUN_106b96b10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf535c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 == 0x7fffffffffffffff) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c158fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_selectRow_inComponent_animated__112633e10,lVar2,0,param_4);
  return;
}



/* Entry: 106b96bac; end: 106b96cd7; -[SCCountryCodePickerView didTapRow:] */

void FUN_106b96bac(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  func_0x00010c09ef00(param_5,param_4,param_3);
  dVar6 = param_1;
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  dVar6 = dVar6 + -34.0;
  dVar7 = dVar6 * 0.5;
  uVar2 = param_3;
  func_0x00010bf20c00();
  iVar1 = (int)uVar2;
  _CGRectGetWidth();
  _CGRectContainsPoint(0,dVar7,dVar6,0x4041000000000000,param_1,param_2);
  if ((iVar1 != 0) && (uVar2 = param_3, func_0x00010c07f1e0(), (uVar2 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010bf532e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf535c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c159ec0(param_3,param_4,0);
    uVar5 = uVar3;
    func_0x00010c0dfd40(uVar3,param_4,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf53480(uVar2,param_4,param_3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106b96cd8; end: 106b96cdf; -[SCCountryCodePickerView numberOfComponentsInPickerView:] */

undefined8 FUN_106b96cd8(void)

{
  return 1;
}



/* Entry: 106b96ce0; end: 106b96d1b; -[SCCountryCodePickerView pickerView:numberOfRowsInComponent:] */

undefined8 FUN_106b96ce0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf535c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106b96d1c; end: 106b96d9f; -[SCCountryCodePickerView pickerView:didSelectRow:inComponent:] */

void FUN_106b96d1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf532e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf535c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf534a0(uVar1,param_2,param_1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b96da0; end: 106b96f03; -[SCCountryCodePickerView pickerView:titleForRow:forComponent:] */

undefined8 FUN_106b96da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf535c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  uStack_58 = *(undefined8 *)PTR__NSLocaleCountryCode_11034aa58;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = uVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e240(puVar3,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf85f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110e17af8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return param_1;
  }
  ___stack_chk_fail();
  return 0x4041000000000000;
}



/* Entry: 106b96f04; end: 106b96f0f; -[SCCountryCodePickerView pickerView:rowHeightForComponent:] */

undefined8 FUN_106b96f04(void)

{
  return 0x4041000000000000;
}



/* Entry: 106b96f10; end: 106b96f17; -[SCCountryCodePickerView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_106b96f10(void)

{
  return 1;
}



/* Entry: 106b96f18; end: 106b96fb7; -[SCCountryCodePickerView isSpinning] */

undefined1 FUN_106b96f18(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106b96fb8;
  puStack_50 = &UNK_1109646a8;
  puStack_38 = puStack_48;
  func_0x00010c14cb40(param_1,param_2,&puStack_68);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106b96fb8; end: 106b97047;  */

void FUN_106b96fb8(long param_1,ulong param_2,undefined1 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_2);
    uVar2 = param_2;
    func_0x00010c070ea0();
    if (((uVar2 & 1) != 0) || (uVar2 = param_2, func_0x00010c070400(), (int)uVar2 != 0)) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
      *param_3 = 1;
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b97048; end: 106b97067; -[SCCountryCodePickerView countryCodeDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b97048(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112759578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b97068; end: 106b9707b; -[SCCountryCodePickerView setCountryCodeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b97068(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112759578,param_3);
  return;
}



/* Entry: 106b9707c; end: 106b9708b; -[SCCountryCodePickerView countryCodes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b9707c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275957c);
}



/* Entry: 106b9708c; end: 106b970cb; -[SCCountryCodePickerView setCountryCodes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9708c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275957c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b970cc; end: 106b97107; -[SCCountryCodePickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b970cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275957c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112759578);
  return;
}



/* Entry: 106b97108; end: 106b97187; -[SCGenericSettingsViewController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106b97108(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5550;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    puVar2 = PTR_PTR_1126af080;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759584);
    *(undefined **)((long)puVar1 + (long)_DAT_112759584) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b97188; end: 106b971bb; -[SCGenericSettingsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b97188(long param_1)

{
  param_1 = param_1 + _DAT_112759588;
  _objc_loadWeakRetained(param_1);
  func_0x00010c227e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b971bc; end: 106b97527; -[SCGenericSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b971bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010bfeed60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c181a20(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300();
  _objc_release(param_1);
  return;
}



/* Entry: 106b97528; end: 106b97603; -[SCGenericSettingsViewController enableAppThemeSupportWithCustomAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b97528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1830;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c051be0();
  _objc_release(param_3);
  lVar3 = (long)_DAT_112759590;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0678a0(uVar2,param_2,lVar3,1);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b97604; end: 106b979cf; -[SCGenericSettingsViewController initHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b97604(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_b8 [48];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar15 = (long)_DAT_11275958c;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_88 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  lVar14 = (long)_DAT_112759584;
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c187440(uVar12);
  puVar1 = PTR_PTR_1126b0620;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf138e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar12);
  func_0x00010befbd60(puVar1);
  puVar11 = puVar1;
  func_0x00010c160fc0(puVar1);
  func_0x000106b9c3d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1);
  _objc_release(puVar11);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf8d060();
  _objc_release(lVar2);
  if (lVar4 == 1) {
    _CGAffineTransformMakeScale(auStack_b8,0xbff0000000000000,0x3ff0000000000000);
    func_0x00010c219960(puVar1);
  }
  func_0x00010c188540(*(undefined8 *)(param_1 + lVar14));
  lVar2 = param_1;
  func_0x00010bfcb3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar14));
  _objc_release(lVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_exception_throw(puVar11);
  return;
}



/* Entry: 106b979d0; end: 106b97a6f; -[SCGenericSettingsViewController getTitle] */

void FUN_106b979d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_exception_throw(puVar2);
  return;
}



/* Entry: 106b97a70; end: 106b97a73; -[SCGenericSettingsViewController saveSetting] */

void FUN_106b97a70(void)

{
  return;
}



/* Entry: 106b97a74; end: 106b97bbb; +[SCGenericSettingsViewController heightForHeaderInSection:labelText:] */

double FUN_106b97a74(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c0c7340(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSStringDrawingContext_1126bb2c8;
  _objc_alloc_init();
  func_0x00010bfb68e0(param_7);
  _objc_release(param_7);
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 1;
  func_0x00010bf20ba0(param_3 + -64.0,0x47efffffe0000000,param_8,param_6,1,puVar3,puVar2);
  _objc_release(param_8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4 + 32.0;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  dVar5 = *(double *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(dVar5,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010bef9640(puVar1,param_6,puVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return dVar5;
}



/* Entry: 106b97bbc; end: 106b97c33; +[SCGenericSettingsViewController viewForHeaderInSection:] */

void FUN_106b97bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010bef9640(param_1,param_2,puVar1,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b97c34; end: 106b97cc7; +[SCGenericSettingsViewController viewForHeaderInSection:labelColor:] */

void FUN_106b97c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010bef9620(0x4030000000000000,param_1,param_2,puVar1,param_3,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b97cc8; end: 106b97ccf; +[SCGenericSettingsViewController addLabelToHeaderInSection:labelText:] */

void FUN_106b97cc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4030000000000000,param_1,PTR_s_addLabelToHeader_labelText_verti_11259bf28);
  return;
}



/* Entry: 106b97cd0; end: 106b97d53; +[SCGenericSettingsViewController addLabelToHeader:labelText:] */

void FUN_106b97cd0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c14cf60(puVar1);
  func_0x00010bef9600(param_1 + 16.0,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106b97d54; end: 106b97e4f; +[SCGenericSettingsViewController addLabelToHeader:labelText:verticalPadding:labelColor:] */

void FUN_106b97d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010bf56740(param_2,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_4,param_3,param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106b97e50;
  puStack_60 = &UNK_110909c90;
  _objc_retain(param_2);
  uStack_58 = param_2;
  uStack_50 = param_4;
  uStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c0bbfc0(param_2,param_3,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = uStack_50;
  _objc_retain(param_2);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106b97e50; end: 106b98177;  */

void FUN_106b97e50(float param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf4c0e0(uVar9);
  lVar1 = param_3;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_2 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(param_1 + 1.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b98178; end: 106b9821f; +[SCGenericSettingsViewController addLabelToHeader:labelText:verticalPadding:] */

void FUN_106b98178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c23ba80(puVar1,param_3,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9620(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106b98220; end: 106b98313; +[SCGenericSettingsViewController createHeaderLabel:labelColor:] */

void FUN_106b98220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c213040();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213180(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c212f20(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1cfce0(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1bdb00(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b98314; end: 106b98393; +[SCGenericSettingsViewController createHeaderLabel:] */

void FUN_106b98314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c23ba80(puVar1,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56740(param_1,param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b98394; end: 106b9839f; +[SCGenericSettingsViewController buttonWithText:] */

void FUN_106b98394(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIButton_1126aec48,PTR_s_SIGButtonWithText__11254e338);
  return;
}



/* Entry: 106b983a0; end: 106b983ab; +[SCGenericSettingsViewController buttonWithImage:] */

void FUN_106b983a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc2650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIButton_1126aec48,PTR_s_SIGButtonWithImage__11254e330);
  return;
}



/* Entry: 106b983ac; end: 106b9845f; -[SCGenericSettingsViewController leftButtonPressed] */

void FUN_106b983ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf6b080();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c08e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_leftButtonPressedWithSkipHandlin_112601358,1);
    return;
  }
  func_0x00010c14ad40(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf84b00(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b98460; end: 106b984fb; -[SCGenericSettingsViewController leftButtonPressedWithSkipHandlingDismissal:] */

void FUN_106b98460(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  func_0x00010c14ad40();
  if ((param_3 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010bf84b00(param_1,param_2,1,0);
    }
    else {
      lVar1 = param_1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103a00();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
  }
  func_0x00010c2280a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b984fc; end: 106b9859f; -[SCGenericSettingsViewController inValidView:] */

uint FUN_106b984fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_3,param_2,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010bfdef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb68e0();
  uVar1 = (uint)uVar2;
  _CGRectContainsPoint();
  _objc_release(param_1);
  return uVar1 ^ 1;
}


