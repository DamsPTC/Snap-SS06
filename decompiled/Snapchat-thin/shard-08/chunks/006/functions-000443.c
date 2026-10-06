/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10644aa4c; end: 10644aba7; -[SCAdWebTrackingHelper didReceiveInitialResponse:url:adResponse:] */

void FUN_10644aa4c(undefined8 param_1,undefined8 param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((uVar1 & 1) == 0) {
    if (param_3 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110df2578;
    }
    else {
      ppuVar2 = param_3;
      func_0x00010c25d700(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126b8d98;
    func_0x00010c2a38e0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010be08700(param_1,param_2,puVar4,param_5);
    puVar3 = PTR_PTR_1126b8d98;
    func_0x00010c2a3920(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bdc8a00(param_1,param_2,puVar5,param_5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10644aba8; end: 10644ac3b; -[SCAdWebTrackingHelper didInitialRedirect:] */

void FUN_10644aba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010c2a38a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be08700(param_1,param_2,puVar1,param_3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c2a38c0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc8a00(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644ac3c; end: 10644ac8b; -[SCAdWebTrackingHelper onLifecycleEvent:] */

void FUN_10644ac3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4e20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10644ac8c; end: 10644adff; -[SCAdWebTrackingHelper didFinishInitialNavigation:success:] */

void FUN_10644ac8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010c2a3860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be08700(param_1,param_2,puVar4,param_3);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c2a3880(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bdc8a00(param_1,param_2,puVar5,param_3);
  _objc_release(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10644ae00; end: 10644aea7; -[SCAdWebTrackingHelper didReceiveCloseEvent:] */

void FUN_10644ae00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8d98;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    _objc_retain(param_3);
    func_0x00010c2a3720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be08700(param_1,param_2,puVar1,param_3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b8d98;
    func_0x00010c2a3780(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8a00(param_1,param_2,puVar1,param_3);
    _objc_release(param_3);
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 10644aea8; end: 10644af0f; -[SCAdWebTrackingHelper emitWebExtEligibleWithAdResponse:] */

void FUN_10644aea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010c2a3820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be08700(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644af10; end: 10644b243; -[SCAdWebTrackingHelper emitThirdPartyAnalyticsMirrorEvent:event:timestampMs:browser3pAnalyticsType:] */

void FUN_10644af10(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b8d98;
    func_0x00010c2a2e40(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0xffffffffffffffff;
    puStack_a8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a0 = 0x3032000000;
    pcStack_98 = FUN_10644b244;
    uStack_90 = 0x10644b254;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x00010c0be0a0(param_5);
    puVar6 = PTR_PTR_1126b9440;
    _objc_opt_new(PTR_PTR_1126b9440);
    func_0x00010c197620();
    func_0x00010c1ec100(puVar6);
    func_0x00010c213ba0(puVar6);
    lVar1 = param_3;
    func_0x00010c15ed20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164480(puVar6);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bef2c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar6);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2b40();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b92c0;
    func_0x00010c0ce940(PTR_PTR_1126b92c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c78a0(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b8d98;
    func_0x00010c2a2e60(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010be08700(param_1);
    _objc_release(puVar4);
    _objc_release(puVar6);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(ppuStack_88);
    __Block_object_dispose(&uStack_80,8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10644b244; end: 10644b2af;  */

void FUN_10644b244(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10644b2b0; end: 10644b45f; -[SCAdWebTrackingHelper onWebBrowserEvent:identifier:snapIndex:] */

void FUN_10644b2b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10644b244;
  uStack_50 = 0x10644b254;
  uStack_48 = 0;
  uVar1 = param_3;
  func_0x00010bf9a440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be660();
  _objc_release(uVar1);
  if (puStack_68[5] != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca300;
    func_0x00010bf21540(PTR_PTR_1126ca300);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4e20(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10644b460; end: 10644b4c7;  */

void FUN_10644b460(void)

{
  return;
}



/* Entry: 10644b4c8; end: 10644b617; -[SCAdWebTrackingHelper didReceivePerformanceEntries:serveItemId:inputUrl:] */

void FUN_10644b4c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10644b618; end: 10644b64f;  */

void FUN_10644b618(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be509e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10644b650; end: 10644b7df; -[SCAdWebTrackingHelper didDetectWebviewErrors:adId:serveItemId:inputUrl:loadprefetchedHTML:jsErrorCount:] */

void FUN_10644b650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uStack_60 = param_8;
  uStack_5c = param_7;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10644b7e0; end: 10644b81f;  */

void FUN_10644b7e0(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be50a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10644b820; end: 10644bbe3; -[SCAdWebTrackingHelper _logBlizzardEventUponDetectingWebviewErrors:serveItemId:inputUrl:adId:loadPrefetchedHTML:jsErrorCount:] */

void FUN_10644b820(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined **param_8)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined *puStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d0;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  uint uStack_15c;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined4 uStack_134;
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
  puVar22 = param_4;
  uVar23 = param_5;
  uStack_134 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  lStack_140 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = (undefined8 *)PTR_PTR_1126ca900;
  _objc_opt_new();
  puVar29 = puVar1;
  puVar5 = puVar25;
  func_0x00010c2a66e0();
  _objc_release(puVar25);
  _objc_release(puVar1);
  if ((int)puVar29 != 0) {
    uStack_15c = (uint)param_8;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_150 = param_6;
    uStack_148 = param_5;
    _objc_retain(param_3);
    puVar5 = &uStack_130;
    puVar22 = auStack_f0;
    uVar23 = 0x10;
    lVar2 = param_3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar28 = *plStack_120;
      lStack_158 = param_3;
      do {
        lVar30 = 0;
        do {
          if (*plStack_120 != lVar28) {
            _objc_enumerationMutation(lStack_158);
          }
          uVar3 = *(ulong *)(lStack_128 + lVar30 * 8);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar4 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar26);
          unaff_x28 = uVar3;
          if ((uVar4 & 1) == 0) {
            unaff_x28 = 0;
          }
          _objc_retain(unaff_x28);
          _objc_release(uVar3);
          puVar29 = (undefined8 *)PTR_PTR_1126ca900;
          _objc_opt_new();
          if (unaff_x28 == 0) {
            puVar26 = (undefined *)0x0;
            puVar1 = (undefined8 *)0x0;
          }
          else {
            puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSURL_1126ae598;
            func_0x00010bdc3460();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
          }
          uVar4 = unaff_x28;
          func_0x00010c0f58c0(unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c163720(puVar29);
          func_0x00010c1ad6c0(puVar29);
          func_0x00010c1fd160(puVar29);
          func_0x00010c197380(puVar29);
          puVar5 = puVar1;
          func_0x00010bfe4420(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ecca0(puVar29);
          _objc_release(puVar5);
          func_0x00010c1ecda0(puVar29);
          func_0x00010c20f3c0(puVar29);
          func_0x00010c1be7c0(puVar29);
          uVar23 = *(undefined8 *)(lStack_140 + 0x18);
          func_0x00010c269d40(uVar23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b2e60();
          _objc_release(uVar23);
          _objc_release(uVar4);
          _objc_release(puVar26);
          _objc_release(puVar1);
          _objc_release(puVar29);
          _objc_release(unaff_x28);
          param_3 = lStack_158;
          lVar30 = lVar30 + 1;
          param_8 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        } while (lVar2 != lVar30);
        puVar5 = &uStack_130;
        puVar22 = auStack_f0;
        uVar23 = 0x10;
        lVar2 = lStack_158;
        func_0x00010bf52a60();
        unaff_x27 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(param_3);
    param_5 = uStack_148;
    param_6 = uStack_150;
    puVar25 = (undefined8 *)(ulong)uStack_15c;
    if (0 < (int)uStack_15c) {
      puVar1 = (undefined8 *)PTR_PTR_1126ca900;
      _objc_opt_new();
      func_0x00010c163720();
      func_0x00010c1ad6c0(puVar1);
      func_0x00010c1fd160(puVar1);
      func_0x00010c197380(puVar1);
      func_0x00010c1b6920(puVar1);
      func_0x00010c1be7c0(puVar1);
      puVar25 = *(undefined8 **)(lStack_140 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c0b2e60();
      _objc_release(puVar25);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10644bbe4;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1c0 = unaff_x28;
  uStack_1b8 = unaff_x27;
  ppuStack_1b0 = param_8;
  puStack_1a8 = puVar29;
  uStack_1a0 = param_6;
  puStack_198 = param_4;
  uStack_190 = param_5;
  lStack_188 = param_3;
  puStack_180 = puVar25;
  puStack_178 = puVar1;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar22);
  _objc_retain(uVar23);
  uVar6 = *(undefined8 *)(lVar2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = (undefined **)PTR_PTR_1126ca908;
  _objc_opt_new();
  uVar20 = uVar6;
  ppuVar21 = ppuVar7;
  func_0x00010c2a66e0();
  _objc_release(ppuVar7);
  _objc_release(uVar6);
  if ((int)uVar20 != 0) {
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    lStack_288 = 0;
    puStack_290 = (undefined *)0x0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    _objc_retain(puVar5);
    ppuVar21 = &puStack_290;
    puVar25 = puVar5;
    func_0x00010bf52a60();
    if (puVar25 != (undefined8 *)0x0) {
      lVar28 = *plStack_280;
      do {
        puVar29 = (undefined8 *)0x0;
        do {
          if (*plStack_280 != lVar28) {
            _objc_enumerationMutation(puVar5);
          }
          uVar24 = *(ulong *)(lStack_288 + (long)puVar29 * 8);
          uVar4 = uVar24;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if ((uVar3 & 1) == 0) {
            uVar3 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar8 = uVar3;
            _objc_opt_isKindOfClass(uVar3,puVar26);
            uVar4 = uVar3;
            if ((uVar8 & 1) == 0) {
              uVar4 = 0;
            }
            _objc_retain();
            _objc_release(uVar3);
            uVar9 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar10 = uVar9;
            _objc_opt_isKindOfClass(uVar9,puVar26);
            uVar8 = uVar9;
            if ((uVar10 & 1) == 0) {
              uVar8 = 0;
            }
            _objc_retain();
            _objc_release(uVar9);
            uVar10 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar11 = uVar10;
            _objc_opt_isKindOfClass(uVar10,puVar26);
            uVar9 = uVar10;
            if ((uVar11 & 1) == 0) {
              uVar9 = 0;
            }
            _objc_retain();
            _objc_release(uVar10);
            uVar11 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar12 = uVar11;
            _objc_opt_isKindOfClass(uVar11,puVar26);
            uVar10 = uVar11;
            if ((uVar12 & 1) == 0) {
              uVar10 = 0;
            }
            _objc_retain();
            _objc_release(uVar11);
            uVar12 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar13 = uVar12;
            _objc_opt_isKindOfClass(uVar12,puVar26);
            uVar11 = uVar12;
            if ((uVar13 & 1) == 0) {
              uVar11 = 0;
            }
            _objc_retain();
            _objc_release(uVar12);
            uVar13 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar14 = uVar13;
            _objc_opt_isKindOfClass(uVar13,puVar26);
            uVar12 = uVar13;
            if ((uVar14 & 1) == 0) {
              uVar12 = 0;
            }
            _objc_retain();
            _objc_release(uVar13);
            uVar14 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar15 = uVar14;
            _objc_opt_isKindOfClass(uVar14,puVar26);
            uVar13 = uVar14;
            if ((uVar15 & 1) == 0) {
              uVar13 = 0;
            }
            _objc_retain(uVar13);
            _objc_release(uVar14);
            uVar15 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar16 = uVar15;
            _objc_opt_isKindOfClass(uVar15,puVar26);
            uVar14 = uVar15;
            if ((uVar16 & 1) == 0) {
              uVar14 = 0;
            }
            _objc_retain(uVar14);
            _objc_release(uVar15);
            ppuVar21 = &PTR____CFConstantStringClassReference_110dd00b8;
            uVar16 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar17 = uVar16;
            _objc_opt_isKindOfClass(uVar16,puVar26);
            uVar15 = uVar16;
            if ((uVar17 & 1) == 0) {
              uVar15 = 0;
            }
            _objc_retain(uVar15);
            _objc_release(uVar16);
            if (uVar4 == 0) {
              _objc_release(uVar15);
              _objc_release(uVar14);
              _objc_release(uVar13);
              _objc_release(uVar12);
              _objc_release(uVar11);
              _objc_release(uVar10);
              _objc_release(uVar9);
              _objc_release(uVar8);
              goto LAB_10644c3b0;
            }
            puVar18 = PTR_PTR_1126ca908;
            _objc_opt_new(PTR_PTR_1126ca908);
            uVar4 = uVar24;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar26 = PTR__OBJC_CLASS___NSURL_1126ae598;
            if (uVar4 == 0) {
              puVar26 = (undefined *)0x0;
              puVar27 = (undefined *)0x0;
            }
            else {
              uVar4 = uVar24;
              func_0x00010c0e00e0(uVar24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc3460();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
              puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              uVar4 = uVar24;
              func_0x00010c0e00e0(uVar24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc2600();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
            }
            func_0x00010c1ad6c0(puVar18);
            func_0x00010c1fd160(puVar18);
            puVar19 = puVar26;
            func_0x00010bfe4420(puVar26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecca0(puVar18);
            _objc_release(puVar19);
            func_0x00010c1ecda0(puVar18);
            func_0x00010c0e00e0(uVar24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ad040(puVar18);
            _objc_release(uVar24);
            func_0x00010c0b4ca0(uVar3);
            func_0x00010c209640(puVar18);
            func_0x00010c0b4ca0(uVar15);
            func_0x00010c192e40(puVar18);
            uVar4 = uVar8;
            func_0x00010c0b4ca0();
            uVar24 = uVar3;
            func_0x00010c0b4ca0();
            if ((long)uVar24 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar8);
              func_0x00010c190f40(puVar18);
            }
            uVar4 = uVar9;
            func_0x00010c0b4ca0();
            uVar24 = uVar3;
            func_0x00010c0b4ca0();
            if ((long)uVar24 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar9);
              func_0x00010c190f00(puVar18);
            }
            uVar4 = uVar10;
            func_0x00010c0b4ca0();
            uVar24 = uVar3;
            func_0x00010c0b4ca0();
            if ((long)uVar24 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar10);
              func_0x00010c180ca0(puVar18);
            }
            uVar4 = uVar11;
            func_0x00010c0b4ca0();
            uVar24 = uVar3;
            func_0x00010c0b4ca0();
            if ((long)uVar24 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar11);
              func_0x00010c180c60(puVar18);
            }
            uVar4 = uVar12;
            func_0x00010c0b4ca0();
            uVar24 = uVar3;
            func_0x00010c0b4ca0();
            if ((long)uVar24 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar12);
              func_0x00010c1ec080(puVar18);
            }
            uVar4 = uVar13;
            func_0x00010c0b4ca0();
            uVar24 = uVar3;
            func_0x00010c0b4ca0();
            if ((long)uVar24 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar13);
              func_0x00010c1ed100(puVar18);
            }
            uVar4 = uVar14;
            func_0x00010c0b4ca0();
            uVar24 = uVar3;
            func_0x00010c0b4ca0();
            if ((long)uVar24 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar14);
              func_0x00010c1ecfa0(puVar18);
            }
            uVar20 = *(undefined8 *)(lVar2 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b2e60();
            _objc_release(uVar20);
            _objc_release(puVar27);
            _objc_release(puVar26);
            _objc_release(puVar18);
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar13);
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar3);
          }
          puVar29 = (undefined8 *)((long)puVar29 + 1);
        } while (puVar25 != puVar29);
        ppuVar21 = &puStack_290;
        puVar25 = puVar5;
        func_0x00010bf52a60();
      } while (puVar25 != (undefined8 *)0x0);
    }
LAB_10644c3b0:
    _objc_release(puVar5);
  }
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
    ___stack_chk_fail();
    _objc_retain(ppuVar21);
    func_0x00010be60400(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar20 = puVar5[1];
    func_0x00010c269d40(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar20;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(ppuVar21);
    _objc_release(uVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar20);
    return;
  }
  return;
}



/* Entry: 10644bbe4; end: 10644c40b; -[SCAdWebTrackingHelper _logBlizzardEventForPerformanceEntries:serveItemId:inputUrl:] */

void FUN_10644bbe4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR_PTR_1126ca908;
  _objc_opt_new();
  uVar18 = uVar1;
  ppuVar19 = ppuVar2;
  func_0x00010c2a66e0();
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  if ((int)uVar18 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    ppuVar19 = &puStack_130;
    lVar3 = param_3;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar24 = *plStack_120;
      do {
        lVar23 = 0;
        do {
          if (*plStack_120 != lVar24) {
            _objc_enumerationMutation(param_3);
          }
          uVar20 = *(ulong *)(lStack_128 + lVar23 * 8);
          uVar4 = uVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if ((uVar5 & 1) == 0) {
            uVar5 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar6 = uVar5;
            _objc_opt_isKindOfClass(uVar5,puVar21);
            uVar4 = uVar5;
            if ((uVar6 & 1) == 0) {
              uVar4 = 0;
            }
            _objc_retain();
            _objc_release(uVar5);
            uVar7 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar8 = uVar7;
            _objc_opt_isKindOfClass(uVar7,puVar21);
            uVar6 = uVar7;
            if ((uVar8 & 1) == 0) {
              uVar6 = 0;
            }
            _objc_retain();
            _objc_release(uVar7);
            uVar8 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar9 = uVar8;
            _objc_opt_isKindOfClass(uVar8,puVar21);
            uVar7 = uVar8;
            if ((uVar9 & 1) == 0) {
              uVar7 = 0;
            }
            _objc_retain();
            _objc_release(uVar8);
            uVar9 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar10 = uVar9;
            _objc_opt_isKindOfClass(uVar9,puVar21);
            uVar8 = uVar9;
            if ((uVar10 & 1) == 0) {
              uVar8 = 0;
            }
            _objc_retain();
            _objc_release(uVar9);
            uVar10 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar11 = uVar10;
            _objc_opt_isKindOfClass(uVar10,puVar21);
            uVar9 = uVar10;
            if ((uVar11 & 1) == 0) {
              uVar9 = 0;
            }
            _objc_retain();
            _objc_release(uVar10);
            uVar11 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar12 = uVar11;
            _objc_opt_isKindOfClass(uVar11,puVar21);
            uVar10 = uVar11;
            if ((uVar12 & 1) == 0) {
              uVar10 = 0;
            }
            _objc_retain();
            _objc_release(uVar11);
            uVar12 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar13 = uVar12;
            _objc_opt_isKindOfClass(uVar12,puVar21);
            uVar11 = uVar12;
            if ((uVar13 & 1) == 0) {
              uVar11 = 0;
            }
            _objc_retain(uVar11);
            _objc_release(uVar12);
            uVar13 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar14 = uVar13;
            _objc_opt_isKindOfClass(uVar13,puVar21);
            uVar12 = uVar13;
            if ((uVar14 & 1) == 0) {
              uVar12 = 0;
            }
            _objc_retain(uVar12);
            _objc_release(uVar13);
            ppuVar19 = &PTR____CFConstantStringClassReference_110dd00b8;
            uVar14 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar15 = uVar14;
            _objc_opt_isKindOfClass(uVar14,puVar21);
            uVar13 = uVar14;
            if ((uVar15 & 1) == 0) {
              uVar13 = 0;
            }
            _objc_retain(uVar13);
            _objc_release(uVar14);
            if (uVar4 == 0) {
              _objc_release(uVar13);
              _objc_release(uVar12);
              _objc_release(uVar11);
              _objc_release(uVar10);
              _objc_release(uVar9);
              _objc_release(uVar8);
              _objc_release(uVar7);
              _objc_release(uVar6);
              goto LAB_10644c3b0;
            }
            puVar16 = PTR_PTR_1126ca908;
            _objc_opt_new(PTR_PTR_1126ca908);
            uVar4 = uVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar21 = PTR__OBJC_CLASS___NSURL_1126ae598;
            if (uVar4 == 0) {
              puVar21 = (undefined *)0x0;
              puVar22 = (undefined *)0x0;
            }
            else {
              uVar4 = uVar20;
              func_0x00010c0e00e0(uVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc3460();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
              puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              uVar4 = uVar20;
              func_0x00010c0e00e0(uVar20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc2600();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
            }
            func_0x00010c1ad6c0(puVar16);
            func_0x00010c1fd160(puVar16);
            puVar17 = puVar21;
            func_0x00010bfe4420(puVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ecca0(puVar16);
            _objc_release(puVar17);
            func_0x00010c1ecda0(puVar16);
            func_0x00010c0e00e0(uVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ad040(puVar16);
            _objc_release(uVar20);
            func_0x00010c0b4ca0(uVar5);
            func_0x00010c209640(puVar16);
            func_0x00010c0b4ca0(uVar13);
            func_0x00010c192e40(puVar16);
            uVar4 = uVar6;
            func_0x00010c0b4ca0();
            uVar20 = uVar5;
            func_0x00010c0b4ca0();
            if ((long)uVar20 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar6);
              func_0x00010c190f40(puVar16);
            }
            uVar4 = uVar7;
            func_0x00010c0b4ca0();
            uVar20 = uVar5;
            func_0x00010c0b4ca0();
            if ((long)uVar20 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar7);
              func_0x00010c190f00(puVar16);
            }
            uVar4 = uVar8;
            func_0x00010c0b4ca0();
            uVar20 = uVar5;
            func_0x00010c0b4ca0();
            if ((long)uVar20 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar8);
              func_0x00010c180ca0(puVar16);
            }
            uVar4 = uVar9;
            func_0x00010c0b4ca0();
            uVar20 = uVar5;
            func_0x00010c0b4ca0();
            if ((long)uVar20 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar9);
              func_0x00010c180c60(puVar16);
            }
            uVar4 = uVar10;
            func_0x00010c0b4ca0();
            uVar20 = uVar5;
            func_0x00010c0b4ca0();
            if ((long)uVar20 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar10);
              func_0x00010c1ec080(puVar16);
            }
            uVar4 = uVar11;
            func_0x00010c0b4ca0();
            uVar20 = uVar5;
            func_0x00010c0b4ca0();
            if ((long)uVar20 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar11);
              func_0x00010c1ed100(puVar16);
            }
            uVar4 = uVar12;
            func_0x00010c0b4ca0();
            uVar20 = uVar5;
            func_0x00010c0b4ca0();
            if ((long)uVar20 <= (long)uVar4) {
              func_0x00010c0b4ca0(uVar12);
              func_0x00010c1ecfa0(puVar16);
            }
            uVar18 = *(undefined8 *)(param_1 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b2e60();
            _objc_release(uVar18);
            _objc_release(puVar22);
            _objc_release(puVar21);
            _objc_release(puVar16);
            _objc_release(uVar13);
            _objc_release(uVar12);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar6);
            _objc_release(uVar5);
          }
          lVar23 = lVar23 + 1;
        } while (lVar3 != lVar23);
        ppuVar19 = &puStack_130;
        lVar3 = param_3;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
LAB_10644c3b0:
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppuVar19);
    func_0x00010be60400(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar1;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(ppuVar19);
    _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10644c40c; end: 10644c497; -[SCAdWebTrackingHelper _emitWebMetric:adResponse:] */

void FUN_10644c40c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010be60400(param_1,param_2,param_3,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10644c498; end: 10644c59f; -[SCAdWebTrackingHelper _metricWithSharedDimensions:adResponse:] */

void FUN_10644c498(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b8ca0;
  if (param_4 != 0) {
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010bef60a0(param_4);
    func_0x00010c25d240(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar1 = param_4;
    func_0x00010c26a3a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    lVar4 = lVar1;
    func_0x00010c06a4a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = uVar3;
    func_0x00010c2ac460(uVar3,param_2,&PTR____CFConstantStringClassReference_110dd20b8,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10644c5a0; end: 10644c687; -[SCAdWebTrackingHelper _addTimer:adResponse:] */

void FUN_10644c5a0(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010028941c();
  lVar1 = param_4;
  if ((*(char *)(param_2 + 0x48) == '\x01') && (*(double *)(param_2 + 0x50) <= param_1)) {
    lVar1 = param_2;
    func_0x00010be60400(param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10644c688; end: 10644c6ff; -[SCAdWebTrackingHelper .cxx_destruct] */

void FUN_10644c688(long param_1)

{
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



/* Entry: 10644c700; end: 10644c783; -[SCAdItemLoadStatus initWithItemId:itemOpenTimestampInSec:] */

undefined1 *
FUN_10644c700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1310;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10644c784; end: 10644c793; -[SCAdItemLoadStatus updateItemLoadedTimestampInSec:] */

void FUN_10644c784(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x21) = 1;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10644c794; end: 10644c79b; -[SCAdItemLoadStatus updateItemCloseTimestampInSec:] */

void FUN_10644c794(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10644c79c; end: 10644c7bf; -[SCAdItemLoadStatus mediaWaitTimeInSec] */

double FUN_10644c79c(long param_1)

{
  long lVar1;
  
  lVar1 = 0x10;
  if (*(char *)(param_1 + 0x21) == '\0') {
    lVar1 = 0x18;
  }
  return *(double *)(param_1 + lVar1) - *(double *)(param_1 + 8);
}



/* Entry: 10644c7c0; end: 10644c7c7; -[SCAdItemLoadStatus itemId] */

undefined8 FUN_10644c7c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10644c7c8; end: 10644c7cf; -[SCAdItemLoadStatus loadedOnEntry] */

undefined1 FUN_10644c7c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10644c7d0; end: 10644c7d7; -[SCAdItemLoadStatus setLoadedOnEntry:] */

void FUN_10644c7d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10644c7d8; end: 10644c7df; -[SCAdItemLoadStatus loadedOnExit] */

undefined1 FUN_10644c7d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10644c7e0; end: 10644c7e7; -[SCAdItemLoadStatus setLoadedOnExit:] */

void FUN_10644c7e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 10644c7e8; end: 10644c7f3; -[SCAdItemLoadStatus .cxx_destruct] */

void FUN_10644c7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10644c7f4; end: 10644c7ff; -[SCAdLogger initWithAudioSession:userBlizzard:grapheneRegistry:flipper:] */

void FUN_10644c7f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithAudioSession_userBlizzar_1125daf28);
  return;
}



/* Entry: 10644c800; end: 10644c94f; -[SCAdLogger initWithAudioSession:userBlizzard:grapheneRegistry:crashLogger:flipper:] */

undefined1 *
FUN_10644c800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1318;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10644c950; end: 10644c96b;  */

void FUN_10644c950(void)

{
  _objc_opt_new(PTR_PTR_1126aeea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10644c96c; end: 10644c977; -[SCAdLogger _deviceAdvertiserIdString] */

undefined ** FUN_10644c96c(void)

{
  return &PTR____CFConstantStringClassReference_110e4f8d8;
}



/* Entry: 10644c978; end: 10644d203; -[SCAdLogger logAdInserted:] */

void FUN_10644c978(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef2f40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010c072e80();
  ppuVar4 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)ppuVar2 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db8138;
  }
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24a98,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar4 = param_3;
  func_0x00010bef4240(param_3);
  func_0x00010c0df840(puVar1,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar4 = param_3;
  func_0x00010bef60a0(param_3);
  func_0x00010c0df780(puVar1,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar4 = param_3;
  func_0x00010c276c00(param_3);
  func_0x00010c0df840(puVar1,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110f24d58,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar6);
  ppuVar4 = param_3;
  func_0x00010c107d60();
  if ((int)ppuVar4 != 0) {
    puVar3 = PTR_PTR_1126b8d98;
    func_0x00010c107120(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar4 = param_3;
    func_0x00010bef4240(param_3);
    func_0x00010c0df840(puVar1,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(puVar7);
  }
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010bef2f20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar4 = param_3;
  func_0x00010bef4240(param_3);
  func_0x00010c0df840(puVar1,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar4 = param_3;
  func_0x00010c066e40(param_3);
  func_0x00010c0df780(puVar1,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110e4f8b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126ca910;
  _objc_opt_new();
  ppuVar4 = param_3;
  func_0x00010c072e80(param_3);
  func_0x00010c1b0f00(puVar3,param_2,ppuVar4);
  ppuVar4 = param_3;
  func_0x00010bef4240(param_3);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar3,param_2,ppuVar4);
  ppuVar4 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar3,param_2,ppuVar4);
  _objc_release(ppuVar4);
  ppuVar4 = param_3;
  func_0x00010bef47c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164260(puVar3,param_2,ppuVar4);
  _objc_release(ppuVar4);
  ppuVar4 = param_3;
  func_0x00010c099300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdc40(puVar3,param_2,ppuVar4);
  _objc_release(ppuVar4);
  ppuVar4 = param_3;
  func_0x00010c25b040(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d9e0(puVar3,param_2,ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(ppuVar4);
  ppuVar4 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar3,param_2,ppuVar4);
  _objc_release(ppuVar4);
  puVar1 = PTR_PTR_1126b8ca0;
  ppuVar4 = param_3;
  func_0x00010bef60a0(param_3);
  func_0x00010c25d240(puVar1,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164dc0(puVar3,param_2,puVar1);
  _objc_release(puVar1);
  ppuVar4 = param_3;
  func_0x00010c0ec0e0(param_3);
  func_0x0001084b951c();
  func_0x00010c1d5d80(puVar3,param_2,ppuVar4);
  ppuVar4 = param_3;
  func_0x00010bef5600(param_3);
  func_0x00010c1648c0(puVar3,param_2,ppuVar4);
  ppuVar4 = param_3;
  func_0x00010c106900(param_3);
  func_0x0001084b94a8();
  func_0x00010c1dfe40(puVar3,param_2,ppuVar4);
  ppuVar4 = param_3;
  func_0x00010bf21060();
  if (2 < (long)ppuVar4 - 1U) {
    ppuVar4 = (undefined **)0x0;
  }
  func_0x00010c173b80(puVar3,param_2,ppuVar4);
  ppuVar4 = param_3;
  func_0x00010bef22c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar4 = param_3;
    func_0x00010bef22c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163300(puVar3,param_2,ppuVar4);
    _objc_release(ppuVar4);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e4fbf8;
  ppuVar4 = param_3;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar4;
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e4fc38;
  ppuVar15 = param_3;
  ppuStack_80 = ppuVar2;
  func_0x00010bef4240();
  func_0x0001084b952c();
  func_0x00010bae7a70();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar15;
  if (ppuVar15 == (undefined **)0x0) {
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e4fc78;
  ppuVar10 = param_3;
  ppuStack_78 = ppuVar9;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar10;
  if (ppuVar10 == (undefined **)0x0) {
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_70 = ppuVar11;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_80,&ppuStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    _objc_release(ppuVar11);
  }
  _objc_release(ppuVar10);
  if (ppuVar15 == (undefined **)0x0) {
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar15);
  if (ppuVar4 == (undefined **)0x0) {
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  puVar7 = puVar3;
  func_0x00010bfc52e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = &PTR____CFConstantStringClassReference_110e4fcd8;
  ppuVar4 = param_3;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010bf0a640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar7;
  ppuVar2 = ppuVar4;
  func_0x00010c0eeb40(uVar8,param_2,puVar7,&PTR____CFConstantStringClassReference_110e4fcd8,ppuVar4,
                      puVar1,puVar12);
  _objc_release(puVar12);
  _objc_release(ppuVar4);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(ppuVar2);
  func_0x00010bef2e80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,ppuVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = PTR_PTR_1126b8ca0;
  func_0x00010c25d240(PTR_PTR_1126b8ca0,param_2,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar3);
  _objc_release(puVar1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dd34d8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar4 = ppuVar2;
  }
  puVar1 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110f24978,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar5);
  puVar13 = param_3[4];
  func_0x00010c269d40(puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar3);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644d204; end: 10644d39f; -[SCAdLogger logAdInsertionFailure:adProductType:errorReason:] */

void FUN_10644d204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_PTR_1126b8d98;
  _objc_retain(param_5);
  func_0x00010bef2e80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126b8ca0;
  func_0x00010c25d240(PTR_PTR_1126b8ca0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
  if (param_5 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110f24978,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10644d3a0; end: 10644e663; -[SCAdLogger logStoryAdTopSnapViewWithParams:] */

void FUN_10644d3a0(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined **param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ca918;
  _objc_opt_new(PTR_PTR_1126ca918);
  puVar2 = param_7;
  func_0x00010bef22c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_7;
    func_0x00010bef22c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163300(puVar1);
    _objc_release(puVar2);
  }
  puVar3 = param_7;
  func_0x00010c089700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar3 != (undefined *)0x0) {
    puVar3 = param_7;
    func_0x00010c089700(param_7);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar2;
    param_1 = 1.60807493534087e-314;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10644e664;
    puStack_f0 = &UNK_110922e58;
    param_6 = &puStack_108;
    puVar4 = puVar3;
    lStack_e8 = param_5;
    func_0x000100504554();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c0d3c80(puVar4);
    func_0x00010c1b8340(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  puVar3 = param_7;
  func_0x00010c2457a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = param_7;
    func_0x00010c2457a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar2;
    param_1 = 1.60807493534087e-314;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x10644e670;
    puStack_118 = &UNK_110922e58;
    param_6 = &puStack_130;
    puVar2 = puVar3;
    lStack_110 = param_5;
    func_0x000100504554();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c0d3c80(puVar2);
    func_0x00010c206400(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = param_7;
  func_0x00010c0a29e0();
  if ((int)puVar2 != 0) {
    func_0x00010c2a4160(param_7);
    func_0x00010c225340(puVar1);
    func_0x00010c2a4180(param_7);
    func_0x00010c225360(puVar1);
    func_0x00010bf67e60(param_7);
    func_0x00010c18a840(puVar1);
    func_0x00010bf67ce0(param_7);
    func_0x00010c18a7c0(puVar1);
    func_0x00010bf67d40(param_7);
    func_0x00010c18a800(puVar1);
    func_0x00010bf67d20(param_7);
    func_0x00010c18a7e0(puVar1);
    func_0x00010c06dd20(param_7);
    func_0x00010c1afc40(puVar1);
  }
  puVar2 = param_7;
  func_0x00010c0b1860();
  if ((int)puVar2 != 0) {
    func_0x00010c269280(param_7);
    func_0x00010c211ce0(puVar1);
    func_0x00010c2692c0(param_7);
    func_0x00010c211d20(puVar1);
    func_0x00010c2692a0(param_7);
    func_0x00010c211d00(puVar1);
    func_0x00010c2692e0(param_7);
    func_0x00010c211d40(puVar1);
  }
  puVar2 = param_7;
  func_0x00010c0a36a0();
  if ((int)puVar2 != 0) {
    func_0x00010bf40060(param_7);
    func_0x00010c1ae140(puVar1);
    func_0x00010bf40080(param_7);
    func_0x00010c1ae2a0(puVar1);
    func_0x00010bf400e0(param_7);
    func_0x00010c1ae080(puVar1);
    func_0x00010bf3ff80(param_7);
    func_0x00010c1ae1a0(puVar1);
    func_0x00010c1ae260(puVar1);
    puVar2 = param_7;
    func_0x00010c089240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_7;
      func_0x00010c089240(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1ae160(puVar1);
      _objc_release(puVar2);
    }
  }
  puVar2 = param_7;
  func_0x00010bef27e0();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010bef27e0(param_7);
    func_0x00010c1634a0(puVar1);
  }
  func_0x00010bef2800(param_7);
  if (param_1 != 0.0) {
    func_0x00010bef2800(param_7);
    func_0x00010c1634c0(puVar1);
  }
  func_0x00010c29e220(param_7);
  func_0x00010c222c00(puVar1);
  func_0x00010c0740e0(param_7);
  func_0x00010c1b16c0(puVar1);
  func_0x00010c29b100(param_7);
  func_0x00010c1ee600(puVar1);
  func_0x00010c29b0e0(param_7);
  func_0x00010c1ee5e0(puVar1);
  func_0x00010c21fb20(puVar1);
  func_0x00010c163de0(puVar1);
  func_0x00010c274a20(param_7);
  dVar17 = (double)(long)(param_1 * 1000.0) / 1000.0;
  func_0x00010c205820(puVar1);
  puVar2 = param_7;
  func_0x00010c15ed20(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b8ca0;
  func_0x00010bef60a0(param_7);
  func_0x00010c25d240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164dc0(puVar1);
  _objc_release(puVar2);
  func_0x00010c0ec0e0(param_7);
  func_0x0001084b951c();
  func_0x00010c1d5d80(puVar1);
  func_0x00010bf21060();
  func_0x00010c173b80(puVar1);
  func_0x00010c0ec0e0(param_7);
  func_0x0001084b951c();
  func_0x00010c1d5d80(puVar1);
  func_0x00010bef56c0(param_7);
  func_0x00010c164940(puVar1);
  func_0x00010bef1f80();
  func_0x00010c163140(puVar1);
  puVar2 = param_7;
  func_0x00010c0c6c20();
  if (puVar2 != (undefined *)0x2) {
    func_0x00010c081460(param_7);
    func_0x00010c1a16e0(puVar1);
    func_0x00010c29bd00(param_7);
    if (dVar17 != 0.0) {
      func_0x00010c29bd00(param_7);
      dVar17 = (double)(long)(dVar17 * 1000.0) / 1000.0;
      func_0x00010c222320(puVar1);
    }
  }
  puVar2 = param_7;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010bef51c0();
    func_0x00010c164760(puVar1);
    func_0x00010bf97160();
    func_0x00010c196820(puVar1);
    puVar2 = param_7;
    func_0x00010c09c2c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c241d20();
    func_0x00010c1c4ae0(puVar1);
    _objc_release(puVar2);
    puVar2 = param_7;
    func_0x00010c09c2c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c241d40();
    func_0x00010c1c4b00(puVar1);
    _objc_release(puVar2);
    puVar2 = param_7;
    func_0x00010c09c2c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5700();
    func_0x00010c1beee0(puVar1);
    _objc_release(puVar2);
    func_0x00010c274a20(param_7);
    dVar17 = (double)(long)(dVar17 * 1000.0) / 1000.0;
    func_0x00010c205820(puVar1);
    lVar5 = param_5;
    func_0x00010bdfbd20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21de40(puVar1);
    _objc_release(lVar5);
  }
  puVar2 = param_7;
  func_0x00010bef4300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ca920;
    _objc_opt_new(PTR_PTR_1126ca920);
    puVar3 = param_7;
    func_0x00010bef4300(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb66c0();
    func_0x00010c19ef20(puVar2);
    _objc_release(puVar3);
    puVar3 = param_7;
    func_0x00010bef4300(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb66a0();
    func_0x00010c19ef00(puVar2);
    _objc_release(puVar3);
    puVar3 = param_7;
    func_0x00010bef4300(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6600();
    func_0x00010c19ee80(puVar2);
    _objc_release(puVar3);
    puVar3 = param_7;
    func_0x00010bef4300(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb65c0();
    func_0x00010c19ee60(puVar2);
    _objc_release(puVar3);
    puVar3 = param_7;
    func_0x00010bef4300(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6680();
    func_0x00010c19eee0(puVar2);
    _objc_release(puVar3);
    puVar3 = param_7;
    func_0x00010bef4300(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6640();
    func_0x00010c19eec0(puVar2);
    _objc_release(puVar3);
    puVar3 = param_7;
    func_0x00010c15ed20(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fd160(puVar2);
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar6);
    _objc_release(puVar2);
  }
  puVar2 = param_7;
  func_0x00010bf6f7e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = param_7;
    func_0x00010bf9b860();
    if (puVar3 == (undefined *)0x6) {
      uVar6 = *(undefined8 *)(param_5 + 0x30);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_7;
      func_0x00010bef2c20(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b3e90;
      func_0x00010befde40(PTR_PTR_1126b3e90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ada0(uVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar6);
    }
    goto LAB_10644e274;
  }
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar3);
  func_0x00010c264e60(puVar2);
  dVar19 = dVar17;
  if (dVar17 <= 0.0) {
LAB_10644dc5c:
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  else {
    func_0x00010c264e60(puVar2);
    puVar3 = PTR_PTR_1126afec0;
    uVar6 = *(undefined8 *)(param_5 + 0x28);
    dVar18 = dVar17;
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec800();
    func_0x00010c155420(puVar3);
    dVar19 = dVar18;
    _objc_release(uVar6);
    if (dVar18 < dVar17) goto LAB_10644dc5c;
  }
  func_0x00010c264e60(puVar2);
  func_0x00010c210860(puVar1);
  func_0x00010c264e40(puVar2);
  if (dVar19 < 0.0) {
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  func_0x00010c264e40(puVar2);
  func_0x00010c210840(puVar1);
  func_0x00010c250ce0(puVar2);
  if ((dVar19 < 0.0) || (func_0x00010c250ce0(puVar2), param_3 < dVar19)) {
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  func_0x00010c250ce0(puVar2);
  func_0x00010c209940(puVar1);
  func_0x00010c250ce0(puVar2);
  if ((param_2 < 0.0) || (func_0x00010c250ce0(puVar2), param_4 < param_2)) {
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  func_0x00010c250ce0(puVar2);
  func_0x00010c209980(puVar1);
  func_0x00010c250d00(puVar2);
  if (dVar19 < 0.0) {
LAB_10644de90:
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  else {
    func_0x00010c250d00(puVar2);
    param_2 = 1.0;
    if (1.0 < dVar19) goto LAB_10644de90;
  }
  func_0x00010c250d00(puVar2);
  func_0x00010c209960(puVar1);
  func_0x00010c250d00(puVar2);
  if ((param_2 < 0.0) || (func_0x00010c250d00(puVar2), 1.0 < param_2)) {
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  func_0x00010c250d00(puVar2);
  dVar17 = param_2;
  func_0x00010c2099a0(puVar1);
  func_0x00010bf95600(puVar2);
  if ((param_2 < 0.0) || (func_0x00010bf95600(puVar2), param_3 < param_2)) {
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  func_0x00010bf95600(puVar2);
  func_0x00010c196160(puVar1);
  func_0x00010bf95600(puVar2);
  if ((dVar17 < 0.0) || (func_0x00010bf95600(puVar2), param_4 < dVar17)) {
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  func_0x00010bf95600(puVar2);
  func_0x00010c1961a0(puVar1);
  func_0x00010bf95620(puVar2);
  if (param_2 < 0.0) {
LAB_10644e0d4:
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  else {
    func_0x00010bf95620(puVar2);
    dVar17 = 1.0;
    if (1.0 < param_2) goto LAB_10644e0d4;
  }
  func_0x00010bf95620(puVar2);
  func_0x00010c196180(puVar1);
  func_0x00010bf95620(puVar2);
  if ((dVar17 < 0.0) || (func_0x00010bf95620(puVar2), 1.0 < dVar17)) {
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befde40(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  func_0x00010bf95620(puVar2);
  func_0x00010c1961c0(dVar17,puVar1);
  func_0x00010be592a0(param_5);
LAB_10644e274:
  puVar3 = param_7;
  func_0x00010bef1f80();
  if ((((puVar3 == (undefined *)0x2) ||
       (puVar3 = param_7, func_0x00010bef1f80(), puVar3 == (undefined *)0x1)) &&
      (puVar3 = param_7, func_0x00010bf9b860(), puVar3 != (undefined *)0x6)) &&
     ((puVar3 = param_7, func_0x00010bf9b860(), puVar3 != (undefined *)0xc &&
      (puVar3 = param_7, func_0x00010bf9b860(), puVar3 != (undefined *)0x0)))) {
    uVar6 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_7;
    func_0x00010bef2c20(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ada0(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar6);
  }
  func_0x00010be59240(param_5);
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110e4fbf8;
  puVar3 = param_7;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e4fc38;
  puVar7 = param_7;
  puStack_b8 = puVar4;
  func_0x00010bef4200();
  func_0x00010bae7a70();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e4fc78;
  puVar9 = param_7;
  puStack_b0 = puVar8;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  if (puVar9 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e4fc58;
  puStack_a8 = puVar10;
  func_0x00010c26fba0(param_7);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  if (puVar12 == (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e4fc98;
  puVar14 = param_7;
  puStack_a0 = puVar13;
  func_0x00010bf9b740();
  func_0x0001008e41d4();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  if (puVar14 == (undefined *)0x0) {
    puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_98 = puVar15;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar15);
  }
  _objc_release(puVar14);
  if (puVar12 == (undefined *)0x0) {
    _objc_release(puVar13);
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar9);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_5 + 0x38);
  puVar3 = puVar1;
  func_0x00010bfc52e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_7;
  func_0x00010bef47c0(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf0a640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eeb40(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be4ffa0(param_5);
  _objc_release(puVar16);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be22ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_7 + 0x20),PTR_s__getSnapLevelInfo__112566450,param_6);
  return;
}



/* Entry: 10644e664; end: 10644e67b;  */

void FUN_10644e664(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be22ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__getSnapLevelInfo__112566450,param_2);
  return;
}



/* Entry: 10644e67c; end: 10644e903; -[SCAdLogger _logStoryAdViewDetailedGesturesPopulated:] */

void FUN_10644e67c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010c148f80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bef60a0(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bef4200(param_3);
  func_0x00010c0df780(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf9b740(param_3);
  func_0x00010c0df780(puVar9,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110ea1f58,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf9b860(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar12,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110eb5938,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar15;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 10644e904; end: 10644ea73; -[SCAdLogger _logAdViewedByDemandSourceWithParams:] */

void FUN_10644e904(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010bef6340(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8e00;
  ppuVar2 = param_3;
  func_0x00010bef27a0(param_3);
  func_0x00010c25d7c0(puVar3,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24ff8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  ppuVar5 = param_3;
  func_0x00010bef4200();
  _objc_release(param_3);
  func_0x00010bae7a70();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar2 = ppuVar5;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar5);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dfb298,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644ea74; end: 10644ef47; -[SCAdLogger logStoryAdWebViewWithParams:] */

void FUN_10644ea74(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ca928;
  _objc_opt_new();
  func_0x00010c1c0e40();
  puVar2 = param_3;
  func_0x00010c2a4160(param_3);
  func_0x00010c1d8320(puVar1,param_2,puVar2);
  puVar2 = param_3;
  func_0x00010c2a4180(param_3);
  func_0x00010c1d8340(puVar1,param_2,puVar2);
  func_0x00010c2a44e0(param_3);
  func_0x00010c1beee0(puVar1);
  puVar2 = param_3;
  func_0x00010c2a42c0(param_3);
  func_0x00010c1d8880(puVar1,param_2,puVar2);
  puVar2 = param_3;
  func_0x00010c2a42e0(param_3);
  func_0x00010c1d8440(puVar1,param_2,puVar2);
  puVar2 = param_3;
  func_0x00010c2a44c0(param_3);
  func_0x00010c21ee20(puVar1,param_2,puVar2);
  puVar2 = param_3;
  func_0x00010c2a44a0(param_3);
  func_0x00010c21ee00(puVar1,param_2,puVar2);
  puVar2 = param_3;
  func_0x00010c2a3da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2251c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c2a3e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2251e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c2a42a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d21e0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c0a36a0();
  if ((int)puVar2 != 0) {
    puVar2 = param_3;
    func_0x00010bf40060(param_3);
    func_0x00010c1ae140(puVar1,param_2,puVar2);
    func_0x00010c1ae260(puVar1,param_2,0);
    puVar2 = param_3;
    func_0x00010c089240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_3;
      func_0x00010c089240(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c067fc0();
      func_0x00010c1ae160(puVar1,param_2,puVar3);
      _objc_release(puVar2);
    }
  }
  func_0x00010be59240(param_1,param_2,param_3,puVar1);
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e4fbf8;
  puVar2 = param_3;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e4fc38;
  puVar4 = param_3;
  puStack_90 = puVar3;
  func_0x00010bef4200();
  func_0x00010bae7a70();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e4fc78;
  puVar6 = param_3;
  puStack_88 = puVar5;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e4fc58;
  puStack_80 = puVar7;
  func_0x00010c26fba0(param_3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  if (puVar9 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e4fc98;
  puVar11 = param_3;
  puStack_78 = puVar10;
  func_0x00010bf9b740();
  func_0x0001008e41d4();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  if (puVar11 == (undefined *)0x0) {
    puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar12;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_90,&ppuStack_b8,5);
  _objc_retainAutoreleasedReturnValue();
  if (puVar11 == (undefined *)0x0) {
    _objc_release(puVar12);
  }
  _objc_release(puVar11);
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = puVar1;
  func_0x00010bfc52e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bef47c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf0a640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0eeb40(uVar14,param_2,puVar2,&PTR____CFConstantStringClassReference_110e4fcd8,puVar3,
                      puVar13,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ca928;
  _objc_retain(puVar5);
  _objc_opt_new(puVar1);
  func_0x00010c1c0e40();
  puVar2 = puVar5;
  func_0x00010bf055e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c241d20();
  func_0x00010c1d8320(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf055e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c241d40();
  func_0x00010c1d8340(puVar1,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bf055e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5700();
  func_0x00010c1beee0(puVar1);
  _objc_release(puVar2);
  func_0x00010be59240(param_3,param_2,puVar5,puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644ef48; end: 10644f02f; -[SCAdLogger logStoryAdAppInstallAttachmentWithParams:] */

void FUN_10644ef48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ca928;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c0e40();
  uVar2 = param_3;
  func_0x00010bf055e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241d20();
  func_0x00010c1d8320(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf055e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241d40();
  func_0x00010c1d8340(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf055e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5700();
  func_0x00010c1beee0(puVar1);
  _objc_release(uVar2);
  func_0x00010be59240(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644f030; end: 10644f103; -[SCAdLogger logStoryAdCameraViewWithParams:] */

void FUN_10644f030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca928;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c0e40();
  func_0x00010c1afc40(puVar1,param_2,1);
  uVar2 = param_3;
  func_0x00010c096b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c094ba0(param_3);
  func_0x00010c1bbfc0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c094bc0(param_3);
  func_0x00010c1bbfe0(puVar1,param_2,uVar2);
  func_0x00010c094da0(param_3);
  func_0x00010c1beee0(puVar1);
  func_0x00010be59240(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644f104; end: 10644f16b; -[SCAdLogger logStoryAdPlaceViewWithParams:] */

void FUN_10644f104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca928;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c0e40();
  func_0x00010be59240(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644f16c; end: 10644f60f; -[SCAdLogger _logStoryAdCommonViewWithParams:event:] */

void FUN_10644f16c(float param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c29d360(param_4);
  func_0x00010c222620(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c29e220(param_4);
  func_0x00010c222c00(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010bef62e0(param_4);
  func_0x00010c164ea0(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c247520(param_4);
  func_0x00010c206c40(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010bef31c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166260(param_5,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bef3b80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1662a0(param_5,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bef3480(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166280(param_5,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bef2c20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(param_5,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf9b740(param_4);
  func_0x00010c198340(param_5,param_3,lVar1);
  func_0x00010c26fba0(param_4);
  func_0x00010c215700(param_5);
  lVar1 = param_4;
  func_0x00010bef4920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1642e0(param_5,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bef47c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164260(param_5,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bef6180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164e00(param_5,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c0c6c20(param_4);
  func_0x00010c1c5440(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010bf112a0(param_4);
  func_0x00010c16cb20(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c25b720(param_4);
  func_0x00010c20ddc0(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c25b7c0(param_4);
  func_0x00010c20de00(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c1057c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df700(param_5,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bef4200(param_4);
  func_0x00010c163f80(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c0c6c20(param_4);
  func_0x00010c1c5440(param_5,param_3,lVar1);
  func_0x00010c26fba0(param_4);
  func_0x00010c215700(param_5);
  lVar1 = param_4;
  func_0x00010c25b040(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b4ca0();
  func_0x00010c20d9e0(param_5,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bef2ce0(param_4);
  func_0x00010c163800(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010bef2cc0(param_4);
  func_0x00010c1637e0(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010bef2ea0(param_4);
  func_0x00010c1638a0(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c241600(param_4);
  func_0x00010c204840(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c2415c0(param_4);
  func_0x00010c204800(param_5,param_3,lVar1);
  func_0x00010c205840(param_5,param_3,0);
  lVar1 = param_4;
  func_0x00010bf972a0(param_4);
  func_0x00010c196920(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010bf9b860(param_4);
  func_0x00010c198400(param_5,param_3,lVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  func_0x00010c1dda00((double)param_1,param_5);
  _objc_release(uVar3);
  lVar1 = param_4;
  func_0x00010c0710a0(param_4);
  func_0x00010c193120(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c083d60(param_4);
  func_0x00010c1b3340(param_5,param_3,lVar1);
  lVar1 = param_4;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c11b1e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185c40(param_5,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010bf8c980(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(param_5,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c06c5e0(param_4);
    func_0x00010c1af340(param_5,param_3,lVar1);
    lVar1 = param_4;
    func_0x00010bf8c940(param_4);
    func_0x00010c20d000(param_5,param_3,lVar1);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10644f610;
  puStack_48 = &UNK_1108529c0;
  uStack_40 = param_5;
  lStack_38 = param_2;
  _objc_retain(param_5);
  func_0x00010bf5e0c0(uVar3,param_3,&puStack_60);
  _objc_release(uVar3);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10644f610; end: 10644f65b;  */

void FUN_10644f610(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1dd480(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10644f65c; end: 10644f86f; -[SCAdLogger logStoryAdShareViewWithParams:] */

void FUN_10644f65c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ca930;
  _objc_opt_new(PTR_PTR_1126ca930);
  lVar2 = param_4;
  func_0x00010c0c6c20(param_4);
  func_0x00010c1c5440(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bef3480(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166280(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bef2c20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c25b720(param_4);
  func_0x00010c20ddc0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c25b7c0(param_4);
  func_0x00010c20de00(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bef4fa0(param_4);
  func_0x00010c196820(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c26fba0(param_4);
    func_0x00010c215700(puVar1);
    lVar2 = param_4;
    func_0x00010bef4200(param_4);
    func_0x00010c163f80(puVar1,param_3,lVar2);
    lVar2 = param_4;
    func_0x00010bf35820(param_4);
    func_0x00010c206c40(puVar1,param_3,lVar2);
    lVar2 = param_4;
    func_0x00010bf8c980(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar1,param_3,lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c11b1e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185c40(puVar1,param_3,lVar2);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c2415c0(param_4);
    func_0x00010c204800(puVar1,param_3,lVar2);
    lVar2 = param_4;
    func_0x00010c241600(param_4);
    func_0x00010c204840(puVar1,param_3,lVar2);
    lVar2 = param_4;
    func_0x00010bef5000(param_4);
    func_0x00010c1e88a0(puVar1,param_3,lVar2);
    func_0x00010c274a20(param_4);
    func_0x00010c205880((double)(long)(param_1 * 1000.0) / 1000.0,puVar1);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10644f870; end: 10644fa53; -[SCAdLogger logStoryAdScreenShotViewWithParams:] */

void FUN_10644f870(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0790a0();
  ppuVar1 = &PTR_PTR_1126ca938;
  if ((int)lVar2 == 0) {
    ppuVar1 = &PTR_PTR_1126ca940;
  }
  puVar3 = *ppuVar1;
  _objc_opt_new(puVar3);
  lVar2 = param_3;
  func_0x00010c29d360(param_3);
  func_0x00010c222620(puVar3,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c29e220(param_3);
  func_0x00010c222c00(puVar3,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c25b720(param_3);
  func_0x00010c20ddc0(puVar3,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010bef31c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166260(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c26fba0(param_3);
  func_0x00010c215700(puVar3);
  lVar2 = param_3;
  func_0x00010c1057c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df700(puVar3,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bef4200(param_3);
    func_0x00010c163f80(puVar3,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010bf8c980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c11b1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185c40(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf35820(param_3);
    func_0x00010c206c40(puVar3,param_2,lVar2);
    lVar2 = param_3;
    func_0x00010bef47c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164260(puVar3,param_2,lVar2);
    _objc_release(lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10644fa54; end: 10644fc93; -[SCAdLogger logStoryAdShareCreateTopSnapViewWithParams:] */

void FUN_10644fa54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca948;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010c1c5440(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bef4fa0(param_3);
  func_0x00010c196820(puVar1,param_2,uVar2);
  func_0x00010c26fba0(param_3);
  func_0x00010c215700(puVar1);
  uVar2 = param_3;
  func_0x00010bef4200(param_3);
  func_0x00010c163f80(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf8c980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c11b1e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185c40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf35820(param_3);
  func_0x00010c206c40(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c2415c0(param_3);
  func_0x00010c204800(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c241600(param_3);
  func_0x00010c204840(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef31c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166260(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef3b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1662a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef3480(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166280(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef47c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164260(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef2ce0(param_3);
  func_0x00010c163800(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bef2cc0(param_3);
  _objc_release(param_3);
  func_0x00010c1637e0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644fc94; end: 10644fffb; -[SCAdLogger logAdSkip:] */

void FUN_10644fc94(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ca950;
  _objc_opt_new(PTR_PTR_1126ca950);
  uVar2 = param_3;
  func_0x00010bef4920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1642e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164480(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef4200(param_3);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c25b720(param_3);
  func_0x00010c20ddc0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf112a0(param_3);
  func_0x00010c16cb20(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0710a0(param_3);
  func_0x00010c193120(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c29e220(param_3);
  func_0x00010c222c00(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bef62e0(param_3);
  func_0x00010c164ea0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if (uVar3 != 0) {
    uVar2 = param_3;
    func_0x00010bef2cc0(param_3);
    func_0x00010c1637e0(puVar1,param_2,uVar2);
    uVar2 = param_3;
    func_0x00010bef2ce0(param_3);
    func_0x00010c163800(puVar1,param_2,uVar2);
    uVar2 = param_3;
    func_0x00010bef2c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bef47c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164260(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bef31c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166260(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bef3b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1662a0(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bef3480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166280(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c11b1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185c40(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf8c980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf355e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18a920(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf35820(param_3);
    func_0x00010c206c40(puVar1,param_2,uVar2);
    uVar2 = param_3;
    func_0x00010c2415c0(param_3);
    func_0x00010c204800(puVar1,param_2,uVar2);
    uVar2 = param_3;
    func_0x00010c241600(param_3);
    func_0x00010c204840(puVar1,param_2,uVar2);
    uVar2 = param_3;
    func_0x00010bf97160();
    if (uVar2 < 6) {
      uVar4 = *(undefined8 *)(&UNK_10dddc2c8 + uVar2 * 8);
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    func_0x00010c196820(puVar1,param_2,uVar4);
    uVar2 = param_3;
    func_0x00010c25b040(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c20d9e0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10644fffc; end: 10645012f; -[SCAdLogger logPromotedStoryShare:] */

void FUN_10644fffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca930;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c099300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166280(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c1057c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df700(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1c5440(puVar1,param_2,1);
  func_0x00010c20ddc0(puVar1,param_2,7);
  func_0x00010c20de00(puVar1,param_2,7);
  uVar2 = param_3;
  func_0x00010c122b20(param_3);
  _objc_release(param_3);
  func_0x00010c1e88a0(puVar1,param_2,uVar2);
  func_0x00010c196820(puVar1,param_2,6);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106450130; end: 106450233; -[SCAdLogger logDisabledCollectionAdTapWithAdId:serveItemId:tapPosition:tapPositionRelative:itemIndex:] */

void FUN_106450130(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca958;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc_init(puVar1);
  func_0x00010c163720();
  _objc_release(param_7);
  func_0x00010c1fd160(puVar1,param_6,param_8);
  _objc_release(param_8);
  func_0x00010c211ce0(puVar1,param_6,(long)param_1);
  func_0x00010c211d20(puVar1,param_6,(long)param_2);
  func_0x00010c211ca0(param_3,puVar1);
  func_0x00010c211cc0(param_4,puVar1);
  func_0x00010c1b5fc0(puVar1,param_6,param_9);
  uVar2 = *(undefined8 *)(param_5 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106450234; end: 1064503c3; -[SCAdLogger _getSnapLevelInfo:] */

void FUN_106450234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ca960;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c06b7e0(param_3);
  func_0x00010c1af0a0(puVar1,param_2,uVar2);
  func_0x00010c274ee0(param_3);
  func_0x00010c217d20(puVar1);
  func_0x00010bf20560(param_3);
  func_0x00010c173800(puVar1);
  uVar2 = param_3;
  func_0x00010c0806c0(param_3);
  func_0x00010c2109c0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c06a4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ae9c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c06a440(param_3);
  func_0x0001084b94dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ae960(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b8ca0;
  uVar2 = param_3;
  func_0x00010bef60a0(param_3);
  func_0x00010c25d240(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164dc0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar2 = param_3;
  func_0x00010bf9b8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010baf7358();
  func_0x00010c198340(puVar1,param_2,uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c074aa0(param_3);
  _objc_release(param_3);
  func_0x00010c1a5100(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064503c4; end: 10645042f; -[SCAdLogger .cxx_destruct] */

void FUN_1064503c4(long param_1)

{
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



/* Entry: 106450430; end: 106450623; -[SCAdInsertionLogParam initWithAdProductType:isFill:adId:adRequestClientId:lineItemId:isRetryInsertionEnabled:prefetchResponse:insertSourceType:adType:totalSnapCount:storySessionId:serveItemId:optimizationGoal:adClientRenderTypes:adSourceType:preferredAttachmentType:brandSafetyInventoryType:] */

undefined8 *
FUN_106450430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f1320;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    *(undefined1 *)(puVar1 + 1) = param_4;
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
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = param_9;
    puVar1[6] = param_11;
    puVar1[7] = param_12;
    puVar1[8] = param_13;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    puVar1[0xb] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_18;
    puVar1[0xe] = param_19;
    puVar1[0xf] = param_20;
  }
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106450624; end: 106450647; -[SCAdInsertionLogParam copyWithZone:] */

undefined8 FUN_106450624(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106450648; end: 106450737; -[SCAdInsertionLogParam hash] */

undefined8 * FUN_106450648(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = (ulong)*(byte *)(param_1 + 8);
  uStack_b0 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 9);
  uStack_80 = (ulong)*(byte *)(param_1 + 10);
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x58);
  uStack_48 = *(undefined8 *)(param_1 + 0x60);
  lStack_50 = -lVar6;
  if (-1 < lVar6) {
    lStack_50 = lVar6;
  }
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x68);
  uStack_38 = *(undefined8 *)(param_1 + 0x70);
  lStack_40 = -lVar6;
  if (-1 < lVar6) {
    lStack_40 = lVar6;
  }
  lVar6 = *(long *)(param_1 + 0x78);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  func_0x000100505190(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1064508c8:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1064508d4;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(char *)((long)puVar4 + 8) == param_3[8])) &&
           (*(char *)((long)puVar4 + 9) == param_3[9])) &&
          ((*(char *)((long)puVar4 + 10) == param_3[10] &&
           (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30))))))) &&
        (*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38))) &&
       (((*(long *)((long)puVar4 + 0x40) == *(long *)(param_3 + 0x40) &&
         (*(long *)((long)puVar4 + 0x58) == *(long *)(param_3 + 0x58))) &&
        ((*(long *)((long)puVar4 + 0x68) == *(long *)(param_3 + 0x68) &&
         ((*(long *)((long)puVar4 + 0x70) == *(long *)(param_3 + 0x70) &&
          (*(long *)((long)puVar4 + 0x78) == *(long *)(param_3 + 0x78))))))))) {
      lVar6 = *(long *)((long)puVar4 + 0x18);
      if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x20);
        if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x28);
          if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x48);
            if ((lVar6 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar4 + 0x50);
              if ((lVar6 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                puVar7 = *(undefined1 **)((long)puVar4 + 0x60);
                if (puVar7 != *(undefined1 **)(param_3 + 0x60)) {
                  func_0x00010c071ae0();
                  goto LAB_1064508d4;
                }
                goto LAB_1064508c8;
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_1064508d4:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 106450738; end: 1064508ef; -[SCAdInsertionLogParam isEqual:] */

long FUN_106450738(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1064508c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1064508d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
       (((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
         (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
        ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
         ((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
          (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x48);
            if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x50);
              if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x60);
                if (lVar3 != *(long *)(param_3 + 0x60)) {
                  func_0x00010c071ae0();
                  goto LAB_1064508d4;
                }
                goto LAB_1064508c8;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1064508d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1064508f0; end: 1064508f7; -[SCAdInsertionLogParam adProductType] */

undefined8 FUN_1064508f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064508f8; end: 1064508ff; -[SCAdInsertionLogParam isFill] */

undefined1 FUN_1064508f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106450900; end: 106450907; -[SCAdInsertionLogParam adId] */

undefined8 FUN_106450900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106450908; end: 10645090f; -[SCAdInsertionLogParam adRequestClientId] */

undefined8 FUN_106450908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106450910; end: 106450917; -[SCAdInsertionLogParam lineItemId] */

undefined8 FUN_106450910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106450918; end: 10645091f; -[SCAdInsertionLogParam isRetryInsertionEnabled] */

undefined1 FUN_106450918(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106450920; end: 106450927; -[SCAdInsertionLogParam prefetchResponse] */

undefined1 FUN_106450920(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106450928; end: 10645092f; -[SCAdInsertionLogParam insertSourceType] */

undefined8 FUN_106450928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106450930; end: 106450937; -[SCAdInsertionLogParam adType] */

undefined8 FUN_106450930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106450938; end: 10645093f; -[SCAdInsertionLogParam totalSnapCount] */

undefined8 FUN_106450938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106450940; end: 106450947; -[SCAdInsertionLogParam storySessionId] */

undefined8 FUN_106450940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106450948; end: 10645094f; -[SCAdInsertionLogParam serveItemId] */

undefined8 FUN_106450948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106450950; end: 106450957; -[SCAdInsertionLogParam optimizationGoal] */

undefined8 FUN_106450950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106450958; end: 10645095f; -[SCAdInsertionLogParam adClientRenderTypes] */

undefined8 FUN_106450958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106450960; end: 106450967; -[SCAdInsertionLogParam adSourceType] */

undefined8 FUN_106450960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106450968; end: 10645096f; -[SCAdInsertionLogParam preferredAttachmentType] */

undefined8 FUN_106450968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106450970; end: 106450977; -[SCAdInsertionLogParam brandSafetyInventoryType] */

undefined8 FUN_106450970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106450978; end: 1064509d7; -[SCAdInsertionLogParam .cxx_destruct] */

void FUN_106450978(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1064509d8; end: 106450a37; -[SCAdSnapLoadStatusLogParameters initWithSnapLoadedOnEntry:snapLoadedOnExit:mediaLoadWaitTimeInSec:] */

void FUN_1064509d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f1328;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 106450a38; end: 106450a5b; -[SCAdSnapLoadStatusLogParameters copyWithZone:] */

undefined8 FUN_106450a38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106450a5c; end: 106450adf; -[SCAdSnapLoadStatusLogParameters hash] */

ulong * FUN_106450a5c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  double dVar5;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_20 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        dVar5 = ABS(*(double *)((long)puVar1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar5 <= 2.2250738585072014e-308) {
          dVar5 = 2.2250738585072014e-308;
        }
        puVar4 = (undefined1 *)
                 (ulong)(ABS(*(double *)((long)puVar1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar5
                        );
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 106450ae0; end: 106450bab; -[SCAdSnapLoadStatusLogParameters isEqual:] */

bool FUN_106450ae0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if (((uVar2 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar3 = false;
      }
      else {
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        if (dVar4 <= 2.2250738585072014e-308) {
          dVar4 = 2.2250738585072014e-308;
        }
        bVar3 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 106450bac; end: 106450bb3; -[SCAdSnapLoadStatusLogParameters snapLoadedOnEntry] */

undefined1 FUN_106450bac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106450bb4; end: 106450bbb; -[SCAdSnapLoadStatusLogParameters snapLoadedOnExit] */

undefined1 FUN_106450bb4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106450bbc; end: 106450bc3; -[SCAdSnapLoadStatusLogParameters mediaLoadWaitTimeInSec] */

undefined8 FUN_106450bbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106450bc4; end: 1064514e3; -[SCAdSnapViewLogParameters initWithMediaType:isFullViewAd:videoViewedTimeInSec:topSnapDurationInSec:totalTopSnapsDurationInSec:isTopSnapFullyViewed:timeViewed:isOnTopSnap:snapCount:adSkippableType:loadStatus:storyType:storyTypeSpecific:posterId:viewLocation:viewSource:adViewSourceSpecific:source:autoAdvanceIndex:adIndexPos:adIndexCount:adInsertPos:snapIndexPos:snapIndexCount:entryEvent:exitEvent:entryIntent:exitIntent:storySessionId:previousStoryItemType:nextStoryItemType:publisherId:editionId:isArchivedChannel:channelDeepLinkId:channelViewSource:editionEntrySnapIndex:isWithinPayToPromoteContent:adId:adKey:adPlacementId:adLineItemId:adRequestClientId:adRequestId:adUnitId:adProductSourceType:adType:optimizationGoal:brandSafetyInventoryType:adReportFlaggedReason:adReportExitType:adReportExitLevel:adSkipReason:reachedAdSlot:adInsertRetryCount:adShareEntryEvent:adShareRecipientCount:videoRollMinDegree:videoRollMaxDegree:logTapPosition:tapPositionX:tapPositionY:tapPositionXRelative:tapPositionYRelative:logCardMetrics:deepLinkFromCard:deepLinkFallBackToAppStore:deepLinkFallBackToWebview:deepLinkFallBackToDefaultBrowser:isCameraAd:appInstallLoadStatus:logCollectionMetrics:collectionTotalItemCount:lastInteractiveItemIndex:collectionTotalViewCount:collectionUniqueViewCount:collectionMaxInteractedItemIndex:webViewPageLoadCount:webViewPageLoadErrorCount:webViewLoadedOnEntry:webViewLoadedOnExit:webViewVisiblePageLoadTimeInSec:webViewUserPermissionPromptCount:webViewUserPermissionPromptAllowedCount:webViewAutofillDetectedFields:webViewDetectedFields:webViewOnEditAutofilledFields:lensIsLoadedOnEntry:lensIsLoadedOnExit:lensSessionId:lensLoadTimeInSec:serveItemId:isDynamicInsertionEligible:adRankingContext:adDisclaimerNumOfEntry:adDisclaimerTotalTimeSec:detailedGestureParameters:adStartTimeMs:adClientRenderTypes:adAttachmentTriggerType:lastNSnaps:snapsInLastNSeconds:adDemandSource:] */

undefined8 *
FUN_106450bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined1 param_13,undefined1 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined1 param_40,
             undefined4 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined1 param_45,undefined4 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined1 param_62,undefined4 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined1 param_67,undefined4 param_68,
             undefined8 param_69,undefined8 param_70,undefined4 param_71,undefined4 param_72,
             undefined8 param_73,undefined1 param_74,undefined4 param_75,undefined8 param_76,
             undefined8 param_77,undefined8 param_78,undefined8 param_79,undefined8 param_80,
             undefined8 param_81,undefined8 param_82,undefined4 param_83,undefined4 param_84,
             undefined8 param_85)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined1 in_stack_00000218;
  undefined1 in_stack_00000219;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined1 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  _objc_retain();
  _objc_retain(param_20);
  _objc_retain(param_35);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_42);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_73);
  _objc_retain(param_77);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  puStack_b0 = PTR_PTR_1126f1330;
  puVar1 = &uStack_b8;
  uStack_b8 = param_9;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = param_11;
    *(undefined1 *)(puVar1 + 1) = param_12;
    *(undefined1 *)((long)puVar1 + 9) = param_13;
    *(undefined1 *)((long)puVar1 + 10) = param_14;
    puVar1[9] = param_15;
    puVar1[5] = param_1;
    puVar1[6] = param_2;
    puVar1[7] = param_3;
    puVar1[8] = param_4;
    puVar1[10] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    puVar1[0xc] = param_18;
    puVar1[0xd] = param_19;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    puVar1[0xf] = param_21;
    puVar1[0x10] = param_22;
    puVar1[0x11] = param_23;
    puVar1[0x12] = param_24;
    puVar1[0x13] = param_25;
    puVar1[0x14] = param_26;
    puVar1[0x15] = param_27;
    puVar1[0x16] = param_28;
    puVar1[0x17] = param_29;
    puVar1[0x18] = param_30;
    puVar1[0x19] = param_31;
    puVar1[0x1a] = param_32;
    puVar1[0x1b] = param_33;
    puVar1[0x1c] = param_34;
    uVar2 = param_35;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    _objc_release(uVar3);
    puVar1[0x1e] = param_36;
    puVar1[0x1f] = param_37;
    uVar2 = param_38;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x20];
    puVar1[0x20] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_39;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x21];
    puVar1[0x21] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_40;
    uVar2 = param_42;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    _objc_release(uVar3);
    puVar1[0x23] = param_43;
    puVar1[0x24] = param_44;
    *(undefined1 *)((long)puVar1 + 0xc) = param_45;
    uVar2 = param_47;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_48;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_49;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_50;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x28];
    puVar1[0x28] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_51;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x29];
    puVar1[0x29] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_52;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2a];
    puVar1[0x2a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_53;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x2b];
    puVar1[0x2b] = uVar2;
    _objc_release(uVar3);
    puVar1[0x2c] = param_54;
    puVar1[0x2d] = param_55;
    puVar1[0x2e] = param_56;
    puVar1[0x2f] = param_57;
    puVar1[0x30] = param_58;
    puVar1[0x31] = param_59;
    puVar1[0x32] = param_60;
    puVar1[0x33] = param_61;
    *(undefined1 *)((long)puVar1 + 0xd) = param_62;
    puVar1[0x34] = param_64;
    puVar1[0x35] = param_65;
    puVar1[0x36] = param_66;
    puVar1[0x37] = param_5;
    puVar1[0x38] = param_6;
    *(undefined1 *)((long)puVar1 + 0xe) = param_67;
    puVar1[0x39] = param_7;
    puVar1[0x3a] = param_8;
    puVar1[0x3b] = param_69;
    puVar1[0x3c] = param_70;
    *(undefined1 *)((long)puVar1 + 0xf) = (undefined1)param_71;
    *(undefined1 *)(puVar1 + 2) = param_71._1_1_;
    *(undefined1 *)((long)puVar1 + 0x11) = param_71._2_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_71._3_1_;
    *(undefined1 *)((long)puVar1 + 0x13) = (undefined1)param_72;
    *(undefined1 *)((long)puVar1 + 0x14) = param_72._1_1_;
    uVar2 = param_73;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x3d];
    puVar1[0x3d] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x15) = param_74;
    puVar1[0x3e] = param_76;
    uVar2 = param_77;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x3f];
    puVar1[0x3f] = uVar2;
    _objc_release(uVar3);
    puVar1[0x40] = param_78;
    puVar1[0x41] = param_79;
    puVar1[0x42] = param_80;
    puVar1[0x43] = param_81;
    puVar1[0x44] = param_82;
    *(undefined1 *)((long)puVar1 + 0x16) = (undefined1)param_83;
    *(undefined1 *)((long)puVar1 + 0x17) = param_83._1_1_;
    puVar1[0x45] = param_85;
    puVar1[0x46] = in_stack_000001f0;
    puVar1[0x47] = in_stack_000001f8;
    uVar2 = in_stack_00000200;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x48];
    puVar1[0x48] = uVar2;
    _objc_release(uVar3);
    uVar2 = in_stack_00000208;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x49];
    puVar1[0x49] = uVar2;
    _objc_release(uVar3);
    uVar2 = in_stack_00000210;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x4a];
    puVar1[0x4a] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 3) = in_stack_00000218;
    *(undefined1 *)((long)puVar1 + 0x19) = in_stack_00000219;
    uVar2 = in_stack_00000220;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x4b];
    puVar1[0x4b] = uVar2;
    _objc_release(uVar3);
    puVar1[0x4c] = in_stack_00000228;
    uVar2 = in_stack_00000230;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x4d];
    puVar1[0x4d] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x1a) = in_stack_00000238;
    uVar2 = in_stack_00000240;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x4e];
    puVar1[0x4e] = uVar2;
    _objc_release(uVar3);
    puVar1[0x4f] = in_stack_00000248;
    puVar1[0x50] = in_stack_00000250;
    uVar2 = in_stack_00000258;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x51];
    puVar1[0x51] = uVar2;
    _objc_release(uVar3);
    puVar1[0x52] = in_stack_00000260;
    uVar2 = in_stack_00000268;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x53];
    puVar1[0x53] = uVar2;
    _objc_release(uVar3);
    puVar1[0x54] = in_stack_00000270;
    uVar2 = in_stack_00000278;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x55];
    puVar1[0x55] = uVar2;
    _objc_release(uVar3);
    uVar2 = in_stack_00000280;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x56];
    puVar1[0x56] = uVar2;
    _objc_release(uVar3);
    puVar1[0x57] = in_stack_00000288;
  }
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000278);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(param_77);
  _objc_release(param_73);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_42);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_35);
  _objc_release(param_20);
  _objc_release(param_17);
  return puVar1;
}



/* Entry: 1064514e4; end: 106451507; -[SCAdSnapViewLogParameters copyWithZone:] */

undefined8 FUN_1064514e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106451508; end: 106451a2f; -[SCAdSnapViewLogParameters hash] */

long * FUN_106451508(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  double dVar12;
  long lStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_370;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_1 + 0x20);
  lStack_370 = -lVar7;
  if (-1 < lVar7) {
    lStack_370 = lVar7;
  }
  uStack_368 = (ulong)*(byte *)(param_1 + 8);
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar11 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_360 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_360 = uStack_360 ^ uStack_360 >> 0x16;
  uVar6 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_358 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_358 = uStack_358 ^ uStack_358 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_350 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_350 = uStack_350 ^ uStack_350 >> 0x16;
  uStack_348 = (ulong)*(byte *)(param_1 + 9);
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_340 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_340 = uStack_340 ^ uStack_340 >> 0x16;
  uStack_338 = (ulong)*(byte *)(param_1 + 10);
  uStack_330 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_328 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  uStack_318 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_310 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_320 = uVar2;
  func_0x00010bfde980();
  uStack_300 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uStack_2f8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_2f0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_2e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uStack_2e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x98));
  uStack_2d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xa0));
  uStack_2d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xa8));
  uStack_2c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xb0));
  uStack_2c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xb8));
  uStack_2b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xc0));
  uStack_2b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 200));
  uStack_2a8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xd0));
  uStack_2a0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xd8));
  uStack_298 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xe0));
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_308 = uVar3;
  func_0x00010bfde980();
  uStack_288 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xf0));
  uStack_280 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xf8));
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  uStack_290 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  uStack_278 = uVar3;
  func_0x00010bfde980();
  uStack_268 = (ulong)*(byte *)(param_1 + 0xb);
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  uStack_270 = uVar2;
  func_0x00010bfde980();
  uStack_258 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x118));
  uStack_250 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x120));
  uStack_248 = (ulong)*(byte *)(param_1 + 0xc);
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  uStack_260 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  uStack_240 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  uStack_238 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  uStack_230 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  uStack_228 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x150);
  uStack_220 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  uStack_218 = uVar3;
  func_0x00010bfde980();
  uStack_208 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x160));
  uStack_200 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x168));
  uStack_1f8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x170));
  uStack_1f0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x178));
  uStack_1e8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x180));
  uStack_1e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x188));
  uStack_1d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 400));
  uStack_1d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x198));
  uStack_1c8 = (ulong)*(byte *)(param_1 + 0xd);
  lVar7 = *(long *)(param_1 + 0x1b0);
  lStack_1b0 = -lVar7;
  if (-1 < lVar7) {
    lStack_1b0 = lVar7;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x1b8) + *(ulong *)(param_1 + 0x1b8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_1a8 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_1a8 = uStack_1a8 ^ uStack_1a8 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x1c0) + *(ulong *)(param_1 + 0x1c0) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_1a0 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_1a0 = uStack_1a0 ^ uStack_1a0 >> 0x16;
  uStack_198 = (ulong)*(byte *)(param_1 + 0xe);
  uVar6 = ~*(ulong *)(param_1 + 0x1c8) + *(ulong *)(param_1 + 0x1c8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_190 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_190 = uStack_190 ^ uStack_190 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x1d0) + *(ulong *)(param_1 + 0x1d0) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_188 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_188 = uStack_188 ^ uStack_188 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x1d8) + *(ulong *)(param_1 + 0x1d8) * 0x40000;
  uVar3 = *(undefined8 *)(param_1 + 0x1e8);
  uVar11 = ~*(ulong *)(param_1 + 0x1e0) + *(ulong *)(param_1 + 0x1e0) * 0x40000;
  uStack_1c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x1a0));
  uStack_1b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x1a8));
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_180 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_180 = uStack_180 ^ uStack_180 >> 0x16;
  uVar6 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
  uStack_178 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_178 = uStack_178 ^ uStack_178 >> 0x16;
  uVar10 = *(undefined4 *)(param_1 + 0xf);
  uVar6 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                          (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar6);
  uVar11 = CONCAT44((int)(uVar6 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar6 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar6 >> 0x20),(int)uVar11)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar6 >> 0x30);
  uStack_170 = (ulong)uVar1 & 0xff;
  uStack_168 = uVar6 >> 0x10 & 0xff;
  uStack_160 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar6 >> 0x20)) & 0xffffffff;
  uStack_158 = (ulong)uVar9;
  uStack_150 = (ulong)*(byte *)(param_1 + 0x13);
  uStack_148 = (ulong)*(byte *)(param_1 + 0x14);
  uStack_210 = uVar2;
  func_0x00010bfde980();
  uStack_138 = (ulong)*(byte *)(param_1 + 0x15);
  lVar7 = *(long *)(param_1 + 0x1f0);
  uStack_128 = *(undefined8 *)(param_1 + 0x1f8);
  lStack_130 = -lVar7;
  if (-1 < lVar7) {
    lStack_130 = lVar7;
  }
  uStack_140 = uVar3;
  func_0x00010bfde980();
  uStack_120 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x200));
  uStack_118 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x208));
  uStack_110 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x210));
  uStack_108 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x218));
  lVar7 = *(long *)(param_1 + 0x220);
  lStack_100 = -lVar7;
  if (-1 < lVar7) {
    lStack_100 = lVar7;
  }
  uStack_f8 = (ulong)*(byte *)(param_1 + 0x16);
  uStack_f0 = (ulong)*(byte *)(param_1 + 0x17);
  uVar6 = ~*(ulong *)(param_1 + 0x228) + *(ulong *)(param_1 + 0x228) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_e8 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_e8 = uStack_e8 ^ uStack_e8 >> 0x16;
  uStack_e0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x230));
  uStack_d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x238));
  uVar2 = *(undefined8 *)(param_1 + 0x240);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x248);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x250);
  uStack_c8 = uVar3;
  func_0x00010bfde980();
  uStack_b8 = (ulong)*(byte *)(param_1 + 0x18);
  uStack_b0 = (ulong)*(byte *)(param_1 + 0x19);
  uVar3 = *(undefined8 *)(param_1 + 600);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x260) + *(ulong *)(param_1 + 0x260) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_a0 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x268);
  uStack_a8 = uVar3;
  func_0x00010bfde980();
  uStack_90 = (ulong)*(byte *)(param_1 + 0x1a);
  uVar3 = *(undefined8 *)(param_1 + 0x270);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x278);
  lStack_80 = -lVar7;
  if (-1 < lVar7) {
    lStack_80 = lVar7;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x280) + *(ulong *)(param_1 + 0x280) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x288);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x290) + *(ulong *)(param_1 + 0x290) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_68 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x298);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x2a0);
  lStack_58 = -lVar7;
  if (-1 < lVar7) {
    lStack_58 = lVar7;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x2b8);
  lStack_40 = -lVar7;
  if (-1 < lVar7) {
    lStack_40 = lVar7;
  }
  uStack_48 = uVar3;
  func_0x000100505190(&lStack_370,0x67);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == (long *)param_3) {
LAB_1064523e8:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1064523f4;
    puVar8 = (undefined1 *)plVar4;
    _objc_opt_class(plVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(long *)((long)plVar4 + 0x20) == *(long *)(param_3 + 0x20) &&
            (*(char *)((long)plVar4 + 8) == param_3[8])) &&
           (*(char *)((long)plVar4 + 9) == param_3[9])) &&
          ((*(char *)((long)plVar4 + 10) == param_3[10] &&
           (*(long *)((long)plVar4 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
        (((((*(long *)((long)plVar4 + 0x50) == *(long *)(param_3 + 0x50) &&
            (((*(long *)((long)plVar4 + 0x60) == *(long *)(param_3 + 0x60) &&
              (*(long *)((long)plVar4 + 0x68) == *(long *)(param_3 + 0x68))) &&
             ((*(long *)((long)plVar4 + 0x78) == *(long *)(param_3 + 0x78) &&
              (((*(long *)((long)plVar4 + 0x80) == *(long *)(param_3 + 0x80) &&
                (*(long *)((long)plVar4 + 0x88) == *(long *)(param_3 + 0x88))) &&
               (*(long *)((long)plVar4 + 0x90) == *(long *)(param_3 + 0x90))))))))) &&
           (((*(long *)((long)plVar4 + 0x98) == *(long *)(param_3 + 0x98) &&
             (*(long *)((long)plVar4 + 0xa0) == *(long *)(param_3 + 0xa0))) &&
            (*(long *)((long)plVar4 + 0xa8) == *(long *)(param_3 + 0xa8))))) &&
          ((((*(long *)((long)plVar4 + 0xb0) == *(long *)(param_3 + 0xb0) &&
             (*(long *)((long)plVar4 + 0xb8) == *(long *)(param_3 + 0xb8))) &&
            ((*(long *)((long)plVar4 + 0xc0) == *(long *)(param_3 + 0xc0) &&
             (((*(long *)((long)plVar4 + 200) == *(long *)(param_3 + 200) &&
               (*(long *)((long)plVar4 + 0xd0) == *(long *)(param_3 + 0xd0))) &&
              (*(long *)((long)plVar4 + 0xd8) == *(long *)(param_3 + 0xd8))))))) &&
           ((*(long *)((long)plVar4 + 0xe0) == *(long *)(param_3 + 0xe0) &&
            (*(long *)((long)plVar4 + 0xf0) == *(long *)(param_3 + 0xf0))))))) &&
         ((*(long *)((long)plVar4 + 0xf8) == *(long *)(param_3 + 0xf8) &&
          ((((((*(char *)((long)plVar4 + 0xb) == param_3[0xb] &&
               (*(long *)((long)plVar4 + 0x118) == *(long *)(param_3 + 0x118))) &&
              ((*(long *)((long)plVar4 + 0x120) == *(long *)(param_3 + 0x120) &&
               ((((*(char *)((long)plVar4 + 0xc) == param_3[0xc] &&
                  (*(long *)((long)plVar4 + 0x160) == *(long *)(param_3 + 0x160))) &&
                 (*(long *)((long)plVar4 + 0x168) == *(long *)(param_3 + 0x168))) &&
                ((*(long *)((long)plVar4 + 0x170) == *(long *)(param_3 + 0x170) &&
                 (*(long *)((long)plVar4 + 0x178) == *(long *)(param_3 + 0x178))))))))) &&
             (*(long *)((long)plVar4 + 0x180) == *(long *)(param_3 + 0x180))) &&
            ((*(long *)((long)plVar4 + 0x188) == *(long *)(param_3 + 0x188) &&
             (*(long *)((long)plVar4 + 400) == *(long *)(param_3 + 400))))) &&
           (((*(long *)((long)plVar4 + 0x198) == *(long *)(param_3 + 0x198) &&
             (((*(char *)((long)plVar4 + 0xd) == param_3[0xd] &&
               (*(long *)((long)plVar4 + 0x1a0) == *(long *)(param_3 + 0x1a0))) &&
              (*(long *)((long)plVar4 + 0x1a8) == *(long *)(param_3 + 0x1a8))))) &&
            (((*(long *)((long)plVar4 + 0x1b0) == *(long *)(param_3 + 0x1b0) &&
              (*(char *)((long)plVar4 + 0xe) == param_3[0xe])) &&
             (*(char *)((long)plVar4 + 0xf) == param_3[0xf])))))))))))) &&
       ((((*(char *)((long)plVar4 + 0x10) == param_3[0x10] &&
          (*(char *)((long)plVar4 + 0x11) == param_3[0x11])) &&
         ((((*(char *)((long)plVar4 + 0x12) == param_3[0x12] &&
            (((*(char *)((long)plVar4 + 0x13) == param_3[0x13] &&
              (*(char *)((long)plVar4 + 0x14) == param_3[0x14])) &&
             (*(char *)((long)plVar4 + 0x15) == param_3[0x15])))) &&
           (((*(long *)((long)plVar4 + 0x1f0) == *(long *)(param_3 + 0x1f0) &&
             (*(long *)((long)plVar4 + 0x200) == *(long *)(param_3 + 0x200))) &&
            (*(long *)((long)plVar4 + 0x208) == *(long *)(param_3 + 0x208))))) &&
          (((*(long *)((long)plVar4 + 0x210) == *(long *)(param_3 + 0x210) &&
            (*(long *)((long)plVar4 + 0x218) == *(long *)(param_3 + 0x218))) &&
           ((*(long *)((long)plVar4 + 0x220) == *(long *)(param_3 + 0x220) &&
            (((((*(char *)((long)plVar4 + 0x16) == param_3[0x16] &&
                (*(char *)((long)plVar4 + 0x17) == param_3[0x17])) &&
               (*(long *)((long)plVar4 + 0x230) == *(long *)(param_3 + 0x230))) &&
              ((*(long *)((long)plVar4 + 0x238) == *(long *)(param_3 + 0x238) &&
               (*(char *)((long)plVar4 + 0x18) == param_3[0x18])))) &&
             (*(char *)((long)plVar4 + 0x19) == param_3[0x19])))))))))) &&
        (((*(char *)((long)plVar4 + 0x1a) == param_3[0x1a] &&
          (*(long *)((long)plVar4 + 0x278) == *(long *)(param_3 + 0x278))) &&
         ((*(long *)((long)plVar4 + 0x2a0) == *(long *)(param_3 + 0x2a0) &&
          (*(long *)((long)plVar4 + 0x2b8) == *(long *)(param_3 + 0x2b8))))))))) {
      dVar12 = ABS(*(double *)((long)plVar4 + 0x28) - *(double *)(param_3 + 0x28));
      if ((dVar12 < 2.2250738585072014e-308) ||
         (dVar12 < ABS(*(double *)((long)plVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
                   2.220446049250313e-16)) {
        dVar12 = ABS(*(double *)((long)plVar4 + 0x30) - *(double *)(param_3 + 0x30));
        if ((dVar12 < 2.2250738585072014e-308) ||
           (dVar12 < ABS(*(double *)((long)plVar4 + 0x30) + *(double *)(param_3 + 0x30)) *
                     2.220446049250313e-16)) {
          dVar12 = ABS(*(double *)((long)plVar4 + 0x38) - *(double *)(param_3 + 0x38));
          if ((dVar12 < 2.2250738585072014e-308) ||
             (dVar12 < ABS(*(double *)((long)plVar4 + 0x38) + *(double *)(param_3 + 0x38)) *
                       2.220446049250313e-16)) {
            dVar12 = ABS(*(double *)((long)plVar4 + 0x40) - *(double *)(param_3 + 0x40));
            if ((dVar12 < 2.2250738585072014e-308) ||
               (dVar12 < ABS(*(double *)((long)plVar4 + 0x40) + *(double *)(param_3 + 0x40)) *
                         2.220446049250313e-16)) {
              dVar12 = ABS(*(double *)((long)plVar4 + 0x1b8) - *(double *)(param_3 + 0x1b8));
              if ((dVar12 < 2.2250738585072014e-308) ||
                 (dVar12 < ABS(*(double *)((long)plVar4 + 0x1b8) + *(double *)(param_3 + 0x1b8)) *
                           2.220446049250313e-16)) {
                dVar12 = ABS(*(double *)((long)plVar4 + 0x1c0) - *(double *)(param_3 + 0x1c0));
                if ((dVar12 < 2.2250738585072014e-308) ||
                   (dVar12 < ABS(*(double *)((long)plVar4 + 0x1c0) + *(double *)(param_3 + 0x1c0)) *
                             2.220446049250313e-16)) {
                  dVar12 = ABS(*(double *)((long)plVar4 + 0x1c8) - *(double *)(param_3 + 0x1c8));
                  if ((dVar12 < 2.2250738585072014e-308) ||
                     (dVar12 < ABS(*(double *)((long)plVar4 + 0x1c8) + *(double *)(param_3 + 0x1c8))
                               * 2.220446049250313e-16)) {
                    dVar12 = ABS(*(double *)((long)plVar4 + 0x1d0) - *(double *)(param_3 + 0x1d0));
                    if ((dVar12 < 2.2250738585072014e-308) ||
                       (dVar12 < ABS(*(double *)((long)plVar4 + 0x1d0) +
                                     *(double *)(param_3 + 0x1d0)) * 2.220446049250313e-16)) {
                      dVar12 = ABS(*(double *)((long)plVar4 + 0x1d8) - *(double *)(param_3 + 0x1d8))
                      ;
                      if ((dVar12 < 2.2250738585072014e-308) ||
                         (dVar12 < ABS(*(double *)((long)plVar4 + 0x1d8) +
                                       *(double *)(param_3 + 0x1d8)) * 2.220446049250313e-16)) {
                        dVar12 = ABS(*(double *)((long)plVar4 + 0x1e0) -
                                     *(double *)(param_3 + 0x1e0));
                        if ((dVar12 < 2.2250738585072014e-308) ||
                           (dVar12 < ABS(*(double *)((long)plVar4 + 0x1e0) +
                                         *(double *)(param_3 + 0x1e0)) * 2.220446049250313e-16)) {
                          dVar12 = ABS(*(double *)((long)plVar4 + 0x228) -
                                       *(double *)(param_3 + 0x228));
                          if ((dVar12 < 2.2250738585072014e-308) ||
                             (dVar12 < ABS(*(double *)((long)plVar4 + 0x228) +
                                           *(double *)(param_3 + 0x228)) * 2.220446049250313e-16)) {
                            dVar12 = ABS(*(double *)((long)plVar4 + 0x260) -
                                         *(double *)(param_3 + 0x260));
                            if ((dVar12 < 2.2250738585072014e-308) ||
                               (dVar12 < ABS(*(double *)((long)plVar4 + 0x260) +
                                             *(double *)(param_3 + 0x260)) * 2.220446049250313e-16))
                            {
                              dVar12 = ABS(*(double *)((long)plVar4 + 0x280) -
                                           *(double *)(param_3 + 0x280));
                              if ((dVar12 < 2.2250738585072014e-308) ||
                                 (dVar12 < ABS(*(double *)((long)plVar4 + 0x280) +
                                               *(double *)(param_3 + 0x280)) * 2.220446049250313e-16
                                 )) {
                                dVar12 = ABS(*(double *)((long)plVar4 + 0x290) -
                                             *(double *)(param_3 + 0x290));
                                if ((((((((dVar12 < 2.2250738585072014e-308) ||
                                         (dVar12 < ABS(*(double *)((long)plVar4 + 0x290) +
                                                       *(double *)(param_3 + 0x290)) *
                                                   2.220446049250313e-16)) &&
                                        ((lVar7 = *(long *)((long)plVar4 + 0x58),
                                         lVar7 == *(long *)(param_3 + 0x58) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                       ((lVar7 = *(long *)((long)plVar4 + 0x70),
                                        lVar7 == *(long *)(param_3 + 0x70) ||
                                        (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                      ((((lVar7 = *(long *)((long)plVar4 + 0xe8),
                                         lVar7 == *(long *)(param_3 + 0xe8) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                        ((lVar7 = *(long *)((long)plVar4 + 0x100),
                                         lVar7 == *(long *)(param_3 + 0x100) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                       (((lVar7 = *(long *)((long)plVar4 + 0x108),
                                         lVar7 == *(long *)(param_3 + 0x108) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                        ((lVar7 = *(long *)((long)plVar4 + 0x110),
                                         lVar7 == *(long *)(param_3 + 0x110) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)))))))) &&
                                     (((((lVar7 = *(long *)((long)plVar4 + 0x128),
                                         lVar7 == *(long *)(param_3 + 0x128) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                        ((lVar7 = *(long *)((long)plVar4 + 0x130),
                                         lVar7 == *(long *)(param_3 + 0x130) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                       ((lVar7 = *(long *)((long)plVar4 + 0x138),
                                        lVar7 == *(long *)(param_3 + 0x138) ||
                                        (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                      (((lVar7 = *(long *)((long)plVar4 + 0x140),
                                        lVar7 == *(long *)(param_3 + 0x140) ||
                                        (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                       ((((lVar7 = *(long *)((long)plVar4 + 0x148),
                                          lVar7 == *(long *)(param_3 + 0x148) ||
                                          (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                         ((lVar7 = *(long *)((long)plVar4 + 0x150),
                                          lVar7 == *(long *)(param_3 + 0x150) ||
                                          (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                        ((lVar7 = *(long *)((long)plVar4 + 0x158),
                                         lVar7 == *(long *)(param_3 + 0x158) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)))))))))) &&
                                    ((lVar7 = *(long *)((long)plVar4 + 0x1e8),
                                     lVar7 == *(long *)(param_3 + 0x1e8) ||
                                     (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                   ((((lVar7 = *(long *)((long)plVar4 + 0x1f8),
                                      lVar7 == *(long *)(param_3 + 0x1f8) ||
                                      (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                     ((lVar7 = *(long *)((long)plVar4 + 0x240),
                                      lVar7 == *(long *)(param_3 + 0x240) ||
                                      (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                    (((((lVar7 = *(long *)((long)plVar4 + 0x248),
                                        lVar7 == *(long *)(param_3 + 0x248) ||
                                        (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                       ((lVar7 = *(long *)((long)plVar4 + 0x250),
                                        lVar7 == *(long *)(param_3 + 0x250) ||
                                        (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                      ((((lVar7 = *(long *)((long)plVar4 + 600),
                                         lVar7 == *(long *)(param_3 + 600) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                        ((lVar7 = *(long *)((long)plVar4 + 0x268),
                                         lVar7 == *(long *)(param_3 + 0x268) ||
                                         (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                                       ((lVar7 = *(long *)((long)plVar4 + 0x270),
                                        lVar7 == *(long *)(param_3 + 0x270) ||
                                        (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                                     (((lVar7 = *(long *)((long)plVar4 + 0x288),
                                       lVar7 == *(long *)(param_3 + 0x288) ||
                                       (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                      (((lVar7 = *(long *)((long)plVar4 + 0x298),
                                        lVar7 == *(long *)(param_3 + 0x298) ||
                                        (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                                       ((lVar7 = *(long *)((long)plVar4 + 0x2a8),
                                        lVar7 == *(long *)(param_3 + 0x2a8) ||
                                        (func_0x00010c071ae0(), (int)lVar7 != 0)))))))))))) {
                                  puVar8 = *(undefined1 **)((long)plVar4 + 0x2b0);
                                  if (puVar8 != *(undefined1 **)(param_3 + 0x2b0)) {
                                    func_0x00010c071ae0();
                                    goto LAB_1064523f4;
                                  }
                                  goto LAB_1064523e8;
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
    puVar8 = (undefined1 *)0x0;
  }
LAB_1064523f4:
  _objc_release(param_3);
  return (long *)puVar8;
}



/* Entry: 106451a30; end: 10645240f; -[SCAdSnapViewLogParameters isEqual:] */

long FUN_106451a30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1064523e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1064523f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
        (((((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
            (((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
              (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
             ((*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78) &&
              (((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
                (*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88))) &&
               (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))))))))) &&
           (((*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98) &&
             (*(long *)(param_1 + 0xa0) == *(long *)(param_3 + 0xa0))) &&
            (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))))) &&
          ((((*(long *)(param_1 + 0xb0) == *(long *)(param_3 + 0xb0) &&
             (*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8))) &&
            ((*(long *)(param_1 + 0xc0) == *(long *)(param_3 + 0xc0) &&
             (((*(long *)(param_1 + 200) == *(long *)(param_3 + 200) &&
               (*(long *)(param_1 + 0xd0) == *(long *)(param_3 + 0xd0))) &&
              (*(long *)(param_1 + 0xd8) == *(long *)(param_3 + 0xd8))))))) &&
           ((*(long *)(param_1 + 0xe0) == *(long *)(param_3 + 0xe0) &&
            (*(long *)(param_1 + 0xf0) == *(long *)(param_3 + 0xf0))))))) &&
         ((*(long *)(param_1 + 0xf8) == *(long *)(param_3 + 0xf8) &&
          ((((((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
               (*(long *)(param_1 + 0x118) == *(long *)(param_3 + 0x118))) &&
              ((*(long *)(param_1 + 0x120) == *(long *)(param_3 + 0x120) &&
               ((((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
                  (*(long *)(param_1 + 0x160) == *(long *)(param_3 + 0x160))) &&
                 (*(long *)(param_1 + 0x168) == *(long *)(param_3 + 0x168))) &&
                ((*(long *)(param_1 + 0x170) == *(long *)(param_3 + 0x170) &&
                 (*(long *)(param_1 + 0x178) == *(long *)(param_3 + 0x178))))))))) &&
             (*(long *)(param_1 + 0x180) == *(long *)(param_3 + 0x180))) &&
            ((*(long *)(param_1 + 0x188) == *(long *)(param_3 + 0x188) &&
             (*(long *)(param_1 + 400) == *(long *)(param_3 + 400))))) &&
           (((*(long *)(param_1 + 0x198) == *(long *)(param_3 + 0x198) &&
             (((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
               (*(long *)(param_1 + 0x1a0) == *(long *)(param_3 + 0x1a0))) &&
              (*(long *)(param_1 + 0x1a8) == *(long *)(param_3 + 0x1a8))))) &&
            (((*(long *)(param_1 + 0x1b0) == *(long *)(param_3 + 0x1b0) &&
              (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) &&
             (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))))))))))))) &&
       ((((*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10) &&
          (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
         ((((*(char *)(param_1 + 0x12) == *(char *)(param_3 + 0x12) &&
            (((*(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13) &&
              (*(char *)(param_1 + 0x14) == *(char *)(param_3 + 0x14))) &&
             (*(char *)(param_1 + 0x15) == *(char *)(param_3 + 0x15))))) &&
           (((*(long *)(param_1 + 0x1f0) == *(long *)(param_3 + 0x1f0) &&
             (*(long *)(param_1 + 0x200) == *(long *)(param_3 + 0x200))) &&
            (*(long *)(param_1 + 0x208) == *(long *)(param_3 + 0x208))))) &&
          (((*(long *)(param_1 + 0x210) == *(long *)(param_3 + 0x210) &&
            (*(long *)(param_1 + 0x218) == *(long *)(param_3 + 0x218))) &&
           ((*(long *)(param_1 + 0x220) == *(long *)(param_3 + 0x220) &&
            (((((*(char *)(param_1 + 0x16) == *(char *)(param_3 + 0x16) &&
                (*(char *)(param_1 + 0x17) == *(char *)(param_3 + 0x17))) &&
               (*(long *)(param_1 + 0x230) == *(long *)(param_3 + 0x230))) &&
              ((*(long *)(param_1 + 0x238) == *(long *)(param_3 + 0x238) &&
               (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))))) &&
             (*(char *)(param_1 + 0x19) == *(char *)(param_3 + 0x19))))))))))) &&
        (((*(char *)(param_1 + 0x1a) == *(char *)(param_3 + 0x1a) &&
          (*(long *)(param_1 + 0x278) == *(long *)(param_3 + 0x278))) &&
         ((*(long *)(param_1 + 0x2a0) == *(long *)(param_3 + 0x2a0) &&
          (*(long *)(param_1 + 0x2b8) == *(long *)(param_3 + 0x2b8))))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0x1b8) - *(double *)(param_3 + 0x1b8));
              if ((dVar4 < 2.2250738585072014e-308) ||
                 (dVar4 < ABS(*(double *)(param_1 + 0x1b8) + *(double *)(param_3 + 0x1b8)) *
                          2.220446049250313e-16)) {
                dVar4 = ABS(*(double *)(param_1 + 0x1c0) - *(double *)(param_3 + 0x1c0));
                if ((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0x1c0) + *(double *)(param_3 + 0x1c0)) *
                            2.220446049250313e-16)) {
                  dVar4 = ABS(*(double *)(param_1 + 0x1c8) - *(double *)(param_3 + 0x1c8));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0x1c8) + *(double *)(param_3 + 0x1c8)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0x1d0) - *(double *)(param_3 + 0x1d0));
                    if ((dVar4 < 2.2250738585072014e-308) ||
                       (dVar4 < ABS(*(double *)(param_1 + 0x1d0) + *(double *)(param_3 + 0x1d0)) *
                                2.220446049250313e-16)) {
                      dVar4 = ABS(*(double *)(param_1 + 0x1d8) - *(double *)(param_3 + 0x1d8));
                      if ((dVar4 < 2.2250738585072014e-308) ||
                         (dVar4 < ABS(*(double *)(param_1 + 0x1d8) + *(double *)(param_3 + 0x1d8)) *
                                  2.220446049250313e-16)) {
                        dVar4 = ABS(*(double *)(param_1 + 0x1e0) - *(double *)(param_3 + 0x1e0));
                        if ((dVar4 < 2.2250738585072014e-308) ||
                           (dVar4 < ABS(*(double *)(param_1 + 0x1e0) + *(double *)(param_3 + 0x1e0))
                                    * 2.220446049250313e-16)) {
                          dVar4 = ABS(*(double *)(param_1 + 0x228) - *(double *)(param_3 + 0x228));
                          if ((dVar4 < 2.2250738585072014e-308) ||
                             (dVar4 < ABS(*(double *)(param_1 + 0x228) +
                                          *(double *)(param_3 + 0x228)) * 2.220446049250313e-16)) {
                            dVar4 = ABS(*(double *)(param_1 + 0x260) - *(double *)(param_3 + 0x260))
                            ;
                            if ((dVar4 < 2.2250738585072014e-308) ||
                               (dVar4 < ABS(*(double *)(param_1 + 0x260) +
                                            *(double *)(param_3 + 0x260)) * 2.220446049250313e-16))
                            {
                              dVar4 = ABS(*(double *)(param_1 + 0x280) -
                                          *(double *)(param_3 + 0x280));
                              if ((dVar4 < 2.2250738585072014e-308) ||
                                 (dVar4 < ABS(*(double *)(param_1 + 0x280) +
                                              *(double *)(param_3 + 0x280)) * 2.220446049250313e-16)
                                 ) {
                                dVar4 = ABS(*(double *)(param_1 + 0x290) -
                                            *(double *)(param_3 + 0x290));
                                if ((((((((dVar4 < 2.2250738585072014e-308) ||
                                         (dVar4 < ABS(*(double *)(param_1 + 0x290) +
                                                      *(double *)(param_3 + 0x290)) *
                                                  2.220446049250313e-16)) &&
                                        ((lVar3 = *(long *)(param_1 + 0x58),
                                         lVar3 == *(long *)(param_3 + 0x58) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                       ((lVar3 = *(long *)(param_1 + 0x70),
                                        lVar3 == *(long *)(param_3 + 0x70) ||
                                        (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                      ((((lVar3 = *(long *)(param_1 + 0xe8),
                                         lVar3 == *(long *)(param_3 + 0xe8) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                        ((lVar3 = *(long *)(param_1 + 0x100),
                                         lVar3 == *(long *)(param_3 + 0x100) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                       (((lVar3 = *(long *)(param_1 + 0x108),
                                         lVar3 == *(long *)(param_3 + 0x108) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                        ((lVar3 = *(long *)(param_1 + 0x110),
                                         lVar3 == *(long *)(param_3 + 0x110) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
                                     (((((lVar3 = *(long *)(param_1 + 0x128),
                                         lVar3 == *(long *)(param_3 + 0x128) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                        ((lVar3 = *(long *)(param_1 + 0x130),
                                         lVar3 == *(long *)(param_3 + 0x130) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                       ((lVar3 = *(long *)(param_1 + 0x138),
                                        lVar3 == *(long *)(param_3 + 0x138) ||
                                        (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                      (((lVar3 = *(long *)(param_1 + 0x140),
                                        lVar3 == *(long *)(param_3 + 0x140) ||
                                        (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                       ((((lVar3 = *(long *)(param_1 + 0x148),
                                          lVar3 == *(long *)(param_3 + 0x148) ||
                                          (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                         ((lVar3 = *(long *)(param_1 + 0x150),
                                          lVar3 == *(long *)(param_3 + 0x150) ||
                                          (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                        ((lVar3 = *(long *)(param_1 + 0x158),
                                         lVar3 == *(long *)(param_3 + 0x158) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))) &&
                                    ((lVar3 = *(long *)(param_1 + 0x1e8),
                                     lVar3 == *(long *)(param_3 + 0x1e8) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                   ((((lVar3 = *(long *)(param_1 + 0x1f8),
                                      lVar3 == *(long *)(param_3 + 0x1f8) ||
                                      (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                     ((lVar3 = *(long *)(param_1 + 0x240),
                                      lVar3 == *(long *)(param_3 + 0x240) ||
                                      (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                    (((((lVar3 = *(long *)(param_1 + 0x248),
                                        lVar3 == *(long *)(param_3 + 0x248) ||
                                        (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                       ((lVar3 = *(long *)(param_1 + 0x250),
                                        lVar3 == *(long *)(param_3 + 0x250) ||
                                        (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                      ((((lVar3 = *(long *)(param_1 + 600),
                                         lVar3 == *(long *)(param_3 + 600) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                        ((lVar3 = *(long *)(param_1 + 0x268),
                                         lVar3 == *(long *)(param_3 + 0x268) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                                       ((lVar3 = *(long *)(param_1 + 0x270),
                                        lVar3 == *(long *)(param_3 + 0x270) ||
                                        (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                                     (((lVar3 = *(long *)(param_1 + 0x288),
                                       lVar3 == *(long *)(param_3 + 0x288) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                      (((lVar3 = *(long *)(param_1 + 0x298),
                                        lVar3 == *(long *)(param_3 + 0x298) ||
                                        (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                                       ((lVar3 = *(long *)(param_1 + 0x2a8),
                                        lVar3 == *(long *)(param_3 + 0x2a8) ||
                                        (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))) {
                                  lVar3 = *(long *)(param_1 + 0x2b0);
                                  if (lVar3 != *(long *)(param_3 + 0x2b0)) {
                                    func_0x00010c071ae0();
                                    goto LAB_1064523f4;
                                  }
                                  goto LAB_1064523e8;
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
LAB_1064523f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106452410; end: 106452417; -[SCAdSnapViewLogParameters mediaType] */

undefined8 FUN_106452410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106452418; end: 10645241f; -[SCAdSnapViewLogParameters isFullViewAd] */

undefined1 FUN_106452418(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106452420; end: 106452427; -[SCAdSnapViewLogParameters videoViewedTimeInSec] */

undefined8 FUN_106452420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106452428; end: 10645242f; -[SCAdSnapViewLogParameters topSnapDurationInSec] */

undefined8 FUN_106452428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106452430; end: 106452437; -[SCAdSnapViewLogParameters totalTopSnapsDurationInSec] */

undefined8 FUN_106452430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106452438; end: 10645243f; -[SCAdSnapViewLogParameters isTopSnapFullyViewed] */

undefined1 FUN_106452438(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106452440; end: 106452447; -[SCAdSnapViewLogParameters timeViewed] */

undefined8 FUN_106452440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106452448; end: 10645244f; -[SCAdSnapViewLogParameters isOnTopSnap] */

undefined1 FUN_106452448(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106452450; end: 106452457; -[SCAdSnapViewLogParameters snapCount] */

undefined8 FUN_106452450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106452458; end: 10645245f; -[SCAdSnapViewLogParameters adSkippableType] */

undefined8 FUN_106452458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106452460; end: 106452467; -[SCAdSnapViewLogParameters loadStatus] */

undefined8 FUN_106452460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106452468; end: 10645246f; -[SCAdSnapViewLogParameters storyType] */

undefined8 FUN_106452468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106452470; end: 106452477; -[SCAdSnapViewLogParameters storyTypeSpecific] */

undefined8 FUN_106452470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


