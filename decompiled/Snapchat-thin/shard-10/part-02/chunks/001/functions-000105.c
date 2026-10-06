/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bb2eb8; end: 107bb2f8b; -[SCWebBrowserV11ViewController handleAutofillFormSubmit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb2eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6e48;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfb5700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11276b898;
  func_0x00010c0cab80(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + lVar3));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf267e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c175100(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276b808),param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bb2f8c; end: 107bb33d3; -[SCWebBrowserV11ViewController handleUrlParameterModificationEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb2f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b814);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90b80();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = param_1;
    func_0x00010bf8ba60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    uVar2 = param_3;
    func_0x00010c0ebb60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c151ce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    lVar7 = lVar3;
    func_0x00010bdc2ba0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0f3860();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    func_0x00010bf97e80(lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    if ((*(byte *)(puStack_90 + 3) & 1) == 0) {
      puVar9 = PTR_PTR_1126d6e50;
      _objc_alloc(PTR_PTR_1126d6e50);
      lVar7 = lVar3;
      func_0x00010bdc2ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = (long)_DAT_11276b760;
      uVar10 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar10;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + lVar17);
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar11;
      func_0x00010bef4d20();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010c105e00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_3;
      func_0x00010c104c20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = param_3;
      func_0x00010befe620();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar3;
      func_0x00010bdc2ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar17;
      func_0x00010c0f3860();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07db00();
      func_0x00010c00e2c0(puVar9);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar17);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar1);
      _objc_release(uVar11);
      _objc_release(uVar2);
      _objc_release(uVar10);
      _objc_release(lVar8);
      _objc_release(lVar7);
      param_1 = param_1 + _DAT_11276b75c;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2a3020();
      _objc_release(param_1);
      _objc_release(puVar9);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107bb33d4; end: 107bb349b;  */

void FUN_107bb33d4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (-1 < (int)param_2) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,(int)param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  *param_4 = 1;
  return;
}



/* Entry: 107bb349c; end: 107bb353f;  */

void FUN_107bb349c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c151cc0(param_2);
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = param_2;
  func_0x00010c07db00();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c151cc0(param_2);
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bb3540; end: 107bb35e3; -[SCWebBrowserV11ViewController _logSpectrumAutofillEventWithEventType:saveSource:formTypes:fields:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb3540(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6e58;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c010f00();
  _objc_release(param_5);
  func_0x00010c19b980(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c0b0320(*(undefined8 *)(param_1 + _DAT_11276b7e0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bb35e4; end: 107bb3643; -[SCWebBrowserV11ViewController thirdPartyLoginHandler:loadURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb35e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if (param_3 != *(long *)(param_1 + _DAT_11276b844)) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ece0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bb3644; end: 107bb3663; -[SCWebBrowserV11ViewController dismissBrowserForThirdPartyLoginHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb3644(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_11276b844)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be097d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endBrowserSessionAndDismiss__11255ff90,1);
  return;
}



/* Entry: 107bb3664; end: 107bb36ab; -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnUserInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107bb3664(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11276b758;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)lVar1 & 1;
}



/* Entry: 107bb36ac; end: 107bb36ef; -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnWebviewUserEvent] */

uint FUN_107bb36ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 107bb36f0; end: 107bb3733; -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnWebviewConfigEvent] */

uint FUN_107bb36f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 107bb3734; end: 107bb3777; -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnWebviewAsmEvent] */

uint FUN_107bb3734(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 107bb3778; end: 107bb37bb; -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnWebviewOperationEvent] */

uint FUN_107bb3778(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 107bb37bc; end: 107bb3877; -[SCWebBrowserV11ViewController _notifyDelegateOnFeatureInteractionIfNeeded:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb37bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_2;
  func_0x00010beb4900();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126d6e60;
    func_0x00010bfa24a0(param_1,PTR_PTR_1126d6e60,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2 + _DAT_11276b758;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2a2fc0();
    _objc_release(lVar1);
    *(bool *)(param_2 + _DAT_11276b870) = param_4 != 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107bb3878; end: 107bb3887; -[SCWebBrowserV11ViewController _onBrowserFeature:timestamp:] */

void FUN_107bb3878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__onBrowserFeature_linkSource_tim_1125779f8,param_3,0,0,0);
  return;
}



/* Entry: 107bb3888; end: 107bb38f7; -[SCWebBrowserV11ViewController _onPrivacyBrowserFeature:timestamp:privacyConsent:] */

void FUN_107bb3888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be68160(param_1,param_2,param_3,param_4,0,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bb38f8; end: 107bb3907; -[SCWebBrowserV11ViewController _onBrowserFeature:timestamp:link:] */

void FUN_107bb38f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__onBrowserFeature_linkSource_tim_1125779f8,param_3,0,param_4,0);
  return;
}



/* Entry: 107bb3908; end: 107bb390f; -[SCWebBrowserV11ViewController _onBrowserFeature:linkSource:timestamp:link:] */

void FUN_107bb3908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onBrowserFeature_linkSource_tim_1125779f8);
  return;
}



/* Entry: 107bb3910; end: 107bb3aaf; -[SCWebBrowserV11ViewController _onBrowserFeature:linkSource:timestamp:link:privacyConsent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb3910(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_2;
  func_0x00010beb4980();
  if ((param_4 != 0) && ((int)lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010becdd80(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      if (param_6 == 0) {
        lVar2 = param_2;
        func_0x00010bdfb2e0(param_2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_6);
        lVar2 = param_6;
      }
      puVar3 = PTR_PTR_1126b9040;
      _objc_alloc(PTR_PTR_1126b9040);
      uVar6 = *(undefined8 *)(lVar1 + 8);
      _objc_retain(uVar6);
      func_0x00010b891d30(0,0,0,0,param_1,puVar3,uVar6,3,param_4,param_5,lVar2,param_7);
      _objc_release(uVar6);
      puVar4 = PTR_PTR_1126b9048;
      _objc_alloc(PTR_PTR_1126b9048);
      func_0x00010c000060();
      lVar5 = param_2;
      func_0x00010bf99d00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3040();
      _objc_release(lVar5);
      *(bool *)(param_2 + _DAT_11276b870) = param_4 != 6;
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107bb3ab0; end: 107bb3cb7; -[SCWebBrowserV11ViewController _onViewDidAppearWithTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb3ab0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_2;
  func_0x00010becdd80(param_2,param_3,4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010beb4980();
    if ((int)lVar2 != 0) {
      puVar3 = PTR_PTR_1126b9040;
      _objc_alloc(PTR_PTR_1126b9040);
      uVar5 = *(undefined8 *)(lVar1 + 8);
      _objc_retain(uVar5);
      lVar2 = param_2;
      func_0x00010bdfb2e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b891d30(0,0,0,0,param_1,puVar3,uVar5,4,0,0,lVar2,0);
      _objc_release(lVar2);
      _objc_release(uVar5);
      puVar4 = PTR_PTR_1126b9048;
      _objc_alloc(PTR_PTR_1126b9048);
      func_0x00010c000060();
      lVar2 = param_2;
      func_0x00010bf99d00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3040();
      _objc_release(lVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    lVar2 = param_2;
    func_0x00010beb4920();
    if ((int)lVar2 != 0) {
      puVar3 = PTR_PTR_1126d6d98;
      _objc_alloc(PTR_PTR_1126d6d98);
      puVar4 = PTR_PTR_1126d6da0;
      _objc_alloc(PTR_PTR_1126d6da0);
      uVar6 = *(undefined8 *)(lVar1 + 8);
      _objc_retain(uVar6);
      uVar5 = *(undefined8 *)(param_2 + _DAT_11276b82c);
      func_0x00010c296f60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b892220(puVar4,uVar6,1,0,&PTR____CFConstantStringClassReference_110eb19d8,0,uVar5)
      ;
      func_0x00010c000060(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar5);
      _objc_release(uVar6);
      func_0x00010bf99d00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e7b20();
      _objc_release(param_2);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bb3cb8; end: 107bb3ee7; -[SCWebBrowserV11ViewController _onViewDidDismissWithTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb3cb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((*(byte *)(param_2 + _DAT_11276b828) & 1) != 0) {
    return;
  }
  lVar1 = param_2;
  func_0x00010becdd80(param_2,param_3,4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010beb4980();
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126b9040;
    _objc_alloc(PTR_PTR_1126b9040);
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    lVar2 = param_2;
    func_0x00010bdfb2e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b891d30(0,0,0,0,param_1,puVar3,uVar6,5,0,0,lVar2,0);
    _objc_release(lVar2);
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126b9048;
    _objc_alloc(PTR_PTR_1126b9048);
    func_0x00010c000060();
    lVar2 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3040();
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar2 = param_2;
  func_0x00010beb4920();
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126d6d98;
    _objc_alloc(PTR_PTR_1126d6d98);
    puVar4 = PTR_PTR_1126d6da0;
    _objc_alloc(PTR_PTR_1126d6da0);
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 8);
    }
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_2 + _DAT_11276b82c);
    func_0x00010c296f60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b892220(puVar4,uVar6,2,0,&PTR____CFConstantStringClassReference_110eb19d8,0,uVar5);
    func_0x00010c000060(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar6);
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7b20();
    _objc_release(param_2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bb3ee8; end: 107bb41cf; -[SCWebBrowserV11ViewController dictionaryFromAutofillContactInfo:] */

void FUN_107bb3ee8(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010bf49d80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010bfb18a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110e3e338);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
  func_0x00010c089720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110e3e358);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110dadab8);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110dafa58);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
  func_0x00010befd580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110e700b8);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
  func_0x00010bf39960();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110eb1d58);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db9618);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar2;
  func_0x00010c1055e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110eb1d78);
  _objc_release(ppuVar4);
  ppuVar4 = param_3;
  func_0x00010bf5c380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar5 = ppuVar4;
  func_0x00010bf31e80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110eb1d98);
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar4;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110eb1db8);
  _objc_release(ppuVar5);
  ppuVar5 = ppuVar4;
  func_0x00010c0d50c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  func_0x00010c1d0640(puVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110eb1dd8);
  _objc_release(ppuVar5);
  puVar6 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107bb41d0; end: 107bb43bf; -[SCWebBrowserV11ViewController _onAutofill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb41d0(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110eb1df8;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bfb5740();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_60 = ppuVar1;
  }
  ppuStack_70 = &PTR____CFConstantStringClassReference_110df8198;
  ppuVar2 = param_3;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_58 = ppuVar2;
  }
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dbf1f8;
  lVar3 = param_1;
  func_0x00010bf71f20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_50 = lVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar8 = puVar4;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (puVar5 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11276b82c);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eb1e18);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf999c0(uVar9,param_2,puVar7,0);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (puVar8 == (undefined *)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb1e58;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eb1e38);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf999c0(*(undefined8 *)(puVar4 + _DAT_11276b82c),param_2,ppuVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 107bb43c0; end: 107bb4433; -[SCWebBrowserV11ViewController _clearForm:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb43c0(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb1e58;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eb1e38);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf999c0(*(undefined8 *)(param_1 + _DAT_11276b82c),param_2,ppuVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 107bb4434; end: 107bb448b; -[SCWebBrowserV11ViewController _onBlur] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4434(long param_1,undefined8 param_2)

{
  func_0x00010bf999c0(*(undefined8 *)(param_1 + _DAT_11276b82c),param_2,
                      &PTR____CFConstantStringClassReference_110eb1e78,0);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bb448c; end: 107bb44a7; -[SCWebBrowserV11ViewController _onResume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb448c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf999d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b82c),
             PTR_s_evaluateJavaScript_completionHan_1125c4018,
             &PTR____CFConstantStringClassReference_110eb1e98,0);
  return;
}



/* Entry: 107bb44a8; end: 107bb4543; -[SCWebBrowserV11ViewController _onConfigEventType:timestamp:] */

void FUN_107bb44a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x00010beb4940();
  if ((int)uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010beeaca0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2fe0(uVar1,param_3,param_2,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107bb4544; end: 107bb474b; -[SCWebBrowserV11ViewController _handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4544(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = (long)_DAT_11276b878;
  lVar1 = *(long *)(param_3 + lVar4);
  if ((param_5 == lVar1) && (func_0x00010c252440(), lVar1 == 3)) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar6 = param_1;
    func_0x00010c09ef00(*(undefined8 *)(param_3 + lVar4));
    lVar1 = param_3;
    func_0x00010beb4900();
    if ((int)lVar1 != 0) {
      puVar2 = PTR_PTR_1126d6e60;
      func_0x00010bf4bd60(param_1,uVar6,param_2,PTR_PTR_1126d6e60);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3 + _DAT_11276b758;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c2a2fc0();
      _objc_release(lVar1);
      *(undefined1 *)(param_3 + _DAT_11276b86c) = 1;
      _objc_release(puVar2);
    }
    lVar1 = param_3;
    func_0x00010beb4980();
    if ((int)lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010becdd80(param_1);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        puVar2 = PTR_PTR_1126b9040;
        _objc_alloc(PTR_PTR_1126b9040);
        uVar5 = *(undefined8 *)(lVar1 + 8);
        _objc_retain(uVar5);
        lVar4 = param_3;
        func_0x00010bdfb2e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b891d30(uVar6,param_2,uVar6,param_2,param_1,puVar2,uVar5,1,0,0,lVar4,0);
        _objc_release(lVar4);
        _objc_release(uVar5);
        puVar3 = PTR_PTR_1126b9048;
        _objc_alloc(PTR_PTR_1126b9048);
        func_0x00010c000060();
        func_0x00010bf99d00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a3040();
        _objc_release(param_3);
        _objc_release(puVar3);
        _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar1);
        return;
      }
    }
  }
  return;
}



/* Entry: 107bb474c; end: 107bb4a43; -[SCWebBrowserV11ViewController _handlePan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb474c(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = (long)_DAT_11276b87c;
  lVar1 = *(long *)(param_3 + lVar7);
  if (param_5 == lVar1) {
    func_0x00010c252440();
    if (lVar1 == 1) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      *(undefined8 *)(param_3 + _DAT_11276b8a0) = param_1;
      lVar1 = (long)_DAT_11276b8a4;
      func_0x00010c09ef00(*(undefined8 *)(param_3 + lVar7));
      *(undefined8 *)(param_3 + lVar1) = param_1;
      ((undefined8 *)(param_3 + lVar1))[1] = param_2;
    }
    else {
      lVar1 = *(long *)(param_3 + lVar7);
      func_0x00010c252440();
      lVar2 = *(long *)(param_3 + lVar7);
      if (lVar1 == 2) {
        func_0x00010c27adc0();
        if (5.0 <= param_2) {
          uVar3 = *(undefined8 *)(param_3 + _DAT_11276b80c);
          ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb9f8;
        }
        else {
          if (-5.0 < param_2) {
            return;
          }
          uVar3 = *(undefined8 *)(param_3 + _DAT_11276b80c);
          ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb9e0;
        }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_next__112614028,ppuVar6);
        return;
      }
      func_0x00010c252440();
      if (lVar2 == 3) {
        func_0x00010bf604c0(PTR_PTR_1126afec0);
        uVar3 = param_1;
        func_0x00010c09ef00(*(undefined8 *)(param_3 + lVar7));
        lVar1 = param_3;
        func_0x00010beb4900();
        if ((int)lVar1 != 0) {
          puVar4 = PTR_PTR_1126d6e60;
          func_0x00010bf4bd20(*(undefined8 *)(param_3 + _DAT_11276b8a0),
                              *(undefined8 *)(param_3 + _DAT_11276b8a4),
                              ((undefined8 *)(param_3 + _DAT_11276b8a4))[1],param_1,uVar3,param_2,
                              PTR_PTR_1126d6e60);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = param_3 + _DAT_11276b758;
          _objc_loadWeakRetained(lVar1);
          func_0x00010c2a2fc0();
          _objc_release(lVar1);
          _objc_release(puVar4);
        }
        lVar1 = param_3;
        func_0x00010beb4980();
        if ((int)lVar1 != 0) {
          lVar1 = param_3;
          func_0x00010becdd80(*(undefined8 *)(param_3 + _DAT_11276b8a0));
          _objc_retainAutoreleasedReturnValue();
          if (lVar1 != 0) {
            puVar4 = PTR_PTR_1126b9040;
            _objc_alloc(PTR_PTR_1126b9040);
            uVar8 = *(undefined8 *)(lVar1 + 8);
            _objc_retain(uVar8);
            uVar9 = *(undefined8 *)(param_3 + _DAT_11276b8a4);
            uVar10 = ((undefined8 *)(param_3 + _DAT_11276b8a4))[1];
            lVar7 = param_3;
            func_0x00010bdfb2e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010b891d30(uVar9,uVar10,uVar3,param_2,param_1,puVar4,uVar8,2,0,0,lVar7,0);
            _objc_release(lVar7);
            _objc_release(uVar8);
            puVar5 = PTR_PTR_1126b9048;
            _objc_alloc(PTR_PTR_1126b9048);
            func_0x00010c000060();
            func_0x00010bf99d00(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a3040();
            _objc_release(param_3);
            _objc_release(puVar5);
            _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_release_11034d2d0)(lVar1);
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 107bb4a44; end: 107bb4a77; -[SCWebBrowserV11ViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107bb4a44(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_11276b878)) {
    return param_3 == *(long *)(param_1 + _DAT_11276b87c);
  }
  return true;
}



/* Entry: 107bb4a78; end: 107bb4a7f; -[SCWebBrowserV11ViewController pageViewName] */

undefined8 FUN_107bb4a78(void)

{
  return 0x152;
}



/* Entry: 107bb4a80; end: 107bb4a93; -[SCWebBrowserV11ViewController evaluateJavaScript:scriptController:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4a80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf999d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b82c),
             PTR_s_evaluateJavaScript_completionHan_1125c4018,param_3,param_5);
  return;
}



/* Entry: 107bb4a94; end: 107bb4a9b; -[SCWebBrowserV11ViewController shouldBeSilentlyPresentedAndPauseOpera] */

undefined8 FUN_107bb4a94(void)

{
  return 1;
}



/* Entry: 107bb4a9c; end: 107bb4aa3; -[SCWebBrowserV11ViewController shouldAlwaysBeSilentlyPresented] */

undefined8 FUN_107bb4a9c(void)

{
  return 1;
}



/* Entry: 107bb4aa4; end: 107bb4aaf; -[SCWebBrowserV11ViewController defaultProjectNameV3] */

void FUN_107bb4aa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010befddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_ads_11259d118);
  return;
}



/* Entry: 107bb4ab0; end: 107bb4abb; -[SCWebBrowserV11ViewController defaultProjectNameV2] */

void FUN_107bb4ab0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010befddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_ads_11259d118);
  return;
}



/* Entry: 107bb4abc; end: 107bb4ac7; -[SCWebBrowserV11ViewController defaultSubProjectName] */

undefined ** FUN_107bb4abc(void)

{
  return &PTR____CFConstantStringClassReference_110e4ed78;
}



/* Entry: 107bb4ac8; end: 107bb4b07; -[SCWebBrowserV11ViewController setWebview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b82c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb4b08; end: 107bb4b17; -[SCWebBrowserV11ViewController config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4b08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b760);
}



/* Entry: 107bb4b18; end: 107bb4b27; -[SCWebBrowserV11ViewController initialLandingPageEstimatedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4b18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b72c);
}



/* Entry: 107bb4b28; end: 107bb4b47; -[SCWebBrowserV11ViewController topViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4b28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bb4b48; end: 107bb4b5b; -[SCWebBrowserV11ViewController setTopViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4b48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b790,param_3);
  return;
}



/* Entry: 107bb4b5c; end: 107bb4b7b; -[SCWebBrowserV11ViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4b5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bb4b7c; end: 107bb4b8f; -[SCWebBrowserV11ViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b758,param_3);
  return;
}



/* Entry: 107bb4b90; end: 107bb4baf; -[SCWebBrowserV11ViewController eventDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4b90(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b75c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bb4bb0; end: 107bb4bc3; -[SCWebBrowserV11ViewController setEventDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b75c,param_3);
  return;
}



/* Entry: 107bb4bc4; end: 107bb4bd3; -[SCWebBrowserV11ViewController didFullyAppearTimestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4bc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b894);
}



/* Entry: 107bb4bd4; end: 107bb4c13; -[SCWebBrowserV11ViewController setDidFullyAppearTimestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b894;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb4c14; end: 107bb4c53; -[SCWebBrowserV11ViewController setLandingPageServerRedirectCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b8a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb4c54; end: 107bb4c63; -[SCWebBrowserV11ViewController safeBrowsingWarningView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4c54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b8ac);
}



/* Entry: 107bb4c64; end: 107bb4ca3; -[SCWebBrowserV11ViewController setSafeBrowsingWarningView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b8ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb4ca4; end: 107bb4cb3; -[SCWebBrowserV11ViewController jsBridge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4ca4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b8b0);
}



/* Entry: 107bb4cb4; end: 107bb4cf3; -[SCWebBrowserV11ViewController setJsBridge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4cb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b8b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb4cf4; end: 107bb4d13; -[SCWebBrowserV11ViewController performanceMetricsScript] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4cf4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b834);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bb4d14; end: 107bb4d27; -[SCWebBrowserV11ViewController setPerformanceMetricsScript:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4d14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b834,param_3);
  return;
}



/* Entry: 107bb4d28; end: 107bb4d47; -[SCWebBrowserV11ViewController getPerformanceEntriesScript] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4d28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b8b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bb4d48; end: 107bb4d5b; -[SCWebBrowserV11ViewController setGetPerformanceEntriesScript:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4d48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b8b4,param_3);
  return;
}



/* Entry: 107bb4d5c; end: 107bb4d7b; -[SCWebBrowserV11ViewController scrollingScript] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4d5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b8b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bb4d7c; end: 107bb4d8f; -[SCWebBrowserV11ViewController setScrollingScript:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b8b8,param_3);
  return;
}



/* Entry: 107bb4d90; end: 107bb4daf; -[SCWebBrowserV11ViewController gaMetricsScript] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4d90(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b8bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bb4db0; end: 107bb4dc3; -[SCWebBrowserV11ViewController setGaMetricsScript:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4db0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b8bc,param_3);
  return;
}



/* Entry: 107bb4dc4; end: 107bb4dd3; -[SCWebBrowserV11ViewController urlInterceptor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4dc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b768);
}



/* Entry: 107bb4dd4; end: 107bb4e13; -[SCWebBrowserV11ViewController setUrlInterceptor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b768;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb4e14; end: 107bb4e23; -[SCWebBrowserV11ViewController safeBrowsingChecker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4e14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b764);
}



/* Entry: 107bb4e24; end: 107bb4e63; -[SCWebBrowserV11ViewController setSafeBrowsingChecker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b764;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb4e64; end: 107bb4e73; -[SCWebBrowserV11ViewController additionalScriptControllers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4e64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b76c);
}



/* Entry: 107bb4e74; end: 107bb4eb3; -[SCWebBrowserV11ViewController setAdditionalScriptControllers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b76c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb4eb4; end: 107bb4ec3; -[SCWebBrowserV11ViewController popupBridge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4eb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b888);
}



/* Entry: 107bb4ec4; end: 107bb4f03; -[SCWebBrowserV11ViewController setPopupBridge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b888;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb4f04; end: 107bb4f23; -[SCWebBrowserV11ViewController urlHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4f04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276b7a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bb4f24; end: 107bb4f37; -[SCWebBrowserV11ViewController setUrlHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4f24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276b7a4,param_3);
  return;
}



/* Entry: 107bb4f38; end: 107bb4f47; -[SCWebBrowserV11ViewController isKeyboardShowing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb4f38(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b730);
}



/* Entry: 107bb4f48; end: 107bb4f57; -[SCWebBrowserV11ViewController setIsKeyboardShowing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4f48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b730) = param_3;
  return;
}



/* Entry: 107bb4f58; end: 107bb4f67; -[SCWebBrowserV11ViewController isPrefetchHintsLoadTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb4f58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b83c);
}



/* Entry: 107bb4f68; end: 107bb4f77; -[SCWebBrowserV11ViewController setIsPrefetchHintsLoadTriggered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4f68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b83c) = param_3;
  return;
}



/* Entry: 107bb4f78; end: 107bb4f87; -[SCWebBrowserV11ViewController isLoadingPrefetchHints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb4f78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b840);
}



/* Entry: 107bb4f88; end: 107bb4f97; -[SCWebBrowserV11ViewController setIsLoadingPrefetchHints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4f88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b840) = param_3;
  return;
}



/* Entry: 107bb4f98; end: 107bb4fa7; -[SCWebBrowserV11ViewController hasResetWKWebview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb4f98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b874);
}



/* Entry: 107bb4fa8; end: 107bb4fb7; -[SCWebBrowserV11ViewController setHasResetWKWebview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4fa8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b874) = param_3;
  return;
}



/* Entry: 107bb4fb8; end: 107bb4fc7; -[SCWebBrowserV11ViewController navigationCountBeforeInitialHtmlResolve] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4fb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b734);
}



/* Entry: 107bb4fc8; end: 107bb4fd7; -[SCWebBrowserV11ViewController setNavigationCountBeforeInitialHtmlResolve:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276b734) = param_3;
  return;
}



/* Entry: 107bb4fd8; end: 107bb4fe7; -[SCWebBrowserV11ViewController finalURLForInitialRedirectChain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb4fd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b890);
}



/* Entry: 107bb4fe8; end: 107bb5027; -[SCWebBrowserV11ViewController setFinalURLForInitialRedirectChain:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb4fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b890;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5028; end: 107bb5037; -[SCWebBrowserV11ViewController latestNavigationTimeBeforeInitialHtmlResolve] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5028(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b8c0);
}



/* Entry: 107bb5038; end: 107bb5077; -[SCWebBrowserV11ViewController setLatestNavigationTimeBeforeInitialHtmlResolve:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b8c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5078; end: 107bb5087; -[SCWebBrowserV11ViewController isOpeningExb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb5078(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b738);
}



/* Entry: 107bb5088; end: 107bb5097; -[SCWebBrowserV11ViewController setIsOpeningExb:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5088(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b738) = param_3;
  return;
}



/* Entry: 107bb5098; end: 107bb50a7; -[SCWebBrowserV11ViewController desiredURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5098(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b8c4);
}



/* Entry: 107bb50a8; end: 107bb50b3; -[SCWebBrowserV11ViewController setDesiredURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb50a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107bb50b4; end: 107bb50c3; -[SCWebBrowserV11ViewController landingPageUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb50b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b868);
}



/* Entry: 107bb50c4; end: 107bb5103; -[SCWebBrowserV11ViewController setLandingPageUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb50c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b868;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5104; end: 107bb5113; -[SCWebBrowserV11ViewController initialLoadStatusCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5104(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b848);
}



/* Entry: 107bb5114; end: 107bb5153; -[SCWebBrowserV11ViewController setInitialLoadStatusCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b848;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb5154; end: 107bb5163; -[SCWebBrowserV11ViewController didCompleteInitialLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb5154(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b73c);
}



/* Entry: 107bb5164; end: 107bb5173; -[SCWebBrowserV11ViewController setDidCompleteInitialLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5164(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b73c) = param_3;
  return;
}



/* Entry: 107bb5174; end: 107bb5183; -[SCWebBrowserV11ViewController queueRunningWhileVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107bb5174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b778);
}



/* Entry: 107bb5184; end: 107bb51c3; -[SCWebBrowserV11ViewController setQueueRunningWhileVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb5184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b778;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bb51c4; end: 107bb51d3; -[SCWebBrowserV11ViewController isViewVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb51c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b740);
}



/* Entry: 107bb51d4; end: 107bb51e3; -[SCWebBrowserV11ViewController setIsViewVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107bb51d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276b740) = param_3;
  return;
}



/* Entry: 107bb51e4; end: 107bb51f3; -[SCWebBrowserV11ViewController isOffScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb51e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b828);
}



/* Entry: 107bb51f4; end: 107bb5203; -[SCWebBrowserV11ViewController isFirstTimeOnScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107bb51f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b850);
}


