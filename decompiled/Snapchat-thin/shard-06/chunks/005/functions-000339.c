/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10499141c; end: 104991533; -[FBSDKWebDialogView webView:didFailNavigation:withError:] */

void FUN_10499141c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong in_x4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c09d4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar1);
  uVar1 = in_x4;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if (((int)uVar2 == 0) || (uVar2 = in_x4, func_0x00010bf3ec40(), uVar2 != 0xfffffffffffffc19)) {
    uVar2 = in_x4;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    else {
      uVar3 = in_x4;
      func_0x00010bf3ec40();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar3 == 0x66) goto LAB_10499151c;
    }
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a37c0();
    uVar1 = param_1;
  }
  _objc_release(uVar1);
LAB_10499151c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 104991534; end: 1049918c3; -[FBSDKWebDialogView webView:decidePolicyForNavigationAction:decisionHandler:] */

void FUN_104991534(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain();
  lVar1 = param_4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126add58;
  if ((int)lVar3 == 0) {
    lVar1 = param_4;
    func_0x00010c0d6ca0();
    if (lVar1 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,1);
      goto LAB_10499188c;
    }
    func_0x00010bf39c40(param_1);
    func_0x00010c28f780();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_5;
    _objc_retain();
    func_0x00010c0e9b80(param_1);
    _objc_release(param_1);
  }
  else {
    lVar1 = lVar2;
    func_0x00010c11d080(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf720c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126add58;
    lVar1 = lVar2;
    func_0x00010bfb6820(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf720c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar7);
    _objc_release(puVar4);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c13b440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfda7c0();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126add78;
    if ((int)lVar3 == 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a37a0();
    }
    else {
      puVar5 = puVar7;
      func_0x00010c0e00e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fe0();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126add78;
      if (puVar4 == (undefined *)0x0) {
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a37e0();
      }
      else {
        puVar4 = puVar7;
        func_0x00010c0e00e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3f0e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = param_1;
        func_0x00010bf39c40(param_1);
        func_0x00010bf98ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bf99200();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a37c0();
        _objc_release(param_1);
        _objc_release(puVar6);
        param_1 = puVar5;
      }
    }
    _objc_release(param_1);
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  _objc_release(puVar7);
LAB_10499188c:
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1049918c4; end: 1049918d3;  */

void FUN_1049918c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001049918d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1049918d4; end: 10499192b; -[FBSDKWebDialogView webView:didFinishNavigation:] */

void FUN_1049918d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c09d4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a3800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10499192c; end: 10499194b; -[FBSDKWebDialogView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499192c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11270f150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10499194c; end: 10499195f; -[FBSDKWebDialogView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10499194c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11270f150,param_3);
  return;
}



/* Entry: 104991960; end: 10499196f; -[FBSDKWebDialogView closeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104991960(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f148);
}



/* Entry: 104991970; end: 104991983; -[FBSDKWebDialogView setCloseButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104991970(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f148,param_3);
  return;
}



/* Entry: 104991984; end: 104991993; -[FBSDKWebDialogView loadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104991984(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f14c);
}



/* Entry: 104991994; end: 1049919a7; -[FBSDKWebDialogView setLoadingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104991994(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f14c,param_3);
  return;
}



/* Entry: 1049919a8; end: 1049919b7; -[FBSDKWebDialogView webView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049919a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f144);
}



/* Entry: 1049919b8; end: 1049919cb; -[FBSDKWebDialogView setWebView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049919b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f144,param_3);
  return;
}



/* Entry: 1049919cc; end: 104991a2f; -[FBSDKWebDialogView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049919cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f144,0);
  _objc_storeStrong(param_1 + _DAT_11270f14c,0);
  _objc_storeStrong(param_1 + _DAT_11270f148,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f150);
  return;
}



/* Entry: 104991a30; end: 104991aa3; -[FBSDKWebViewAppLinkResolver init] */

undefined8 FUN_104991a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ade10;
  func_0x00010c0d8420(PTR_PTR_1126ade10);
  puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  func_0x00010c22bfa0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045560(param_1,param_2,puVar2,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 104991aa4; end: 104991b47; -[FBSDKWebViewAppLinkResolver initWithSessionProvider:errorFactory:] */

undefined1 *
FUN_104991aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3498;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar3 + 8),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x10),param_4);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 104991b48; end: 104991be3; +[FBSDKWebViewAppLinkResolver sharedInstance] */

void FUN_104991b48(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x104991bbc;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam000000011369d590 != -1) {
    func_0x00010002a2fc(0x11369d590,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369d588);
  return;
}



/* Entry: 104991be4; end: 104991d53; -[FBSDKWebViewAppLinkResolver followRedirects:handler:] */

void FUN_104991be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104991d54;
  puStack_68 = &UNK_1107b9ef8;
  uStack_60 = param_1;
  uStack_58 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  ppuVar2 = &puStack_80;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  func_0x00010c137160(PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2201e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da6778,
                      &PTR____CFConstantStringClassReference_110da6758);
  func_0x00010c1602c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104991f70;
  puStack_90 = &UNK_1107b9f28;
  ppuStack_88 = ppuVar2;
  _objc_retain(ppuVar2);
  uVar4 = param_1;
  func_0x00010bfa1600(param_1,param_2,puVar3,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010bfa1740(uVar4);
  _objc_release(uVar4);
  _objc_release(ppuStack_88);
  _objc_release(ppuVar2);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 104991d54; end: 104991f6f;  */

void FUN_104991d54(long param_1,undefined *param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain();
  _objc_retain();
  if (param_4 != (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_4);
    goto LAB_104991f2c;
  }
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
  puVar1 = param_2;
  func_0x00010c075f00();
  if ((int)puVar1 == 0) {
LAB_104991e78:
    if (param_3 == 0) {
      puVar4 = *(undefined **)(param_1 + 0x20);
      func_0x00010bf98ac0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c280900();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = (undefined *)0x0;
      param_4 = puVar1;
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,puVar1);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x28);
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      param_4 = (undefined *)0x0;
      puVar4 = puVar1;
      (**(code **)(lVar6 + 0x10))(lVar6,puVar1,0);
    }
  }
  else {
    puVar1 = param_2;
    _objc_retain();
    puVar2 = puVar1;
    func_0x00010c252ee0();
    if (((long)puVar2 < 300) || (puVar2 = puVar1, func_0x00010c252ee0(), 399 < (long)puVar2)) {
      _objc_release(puVar1);
      goto LAB_104991e78;
    }
    puVar2 = puVar1;
    func_0x00010bf001c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar2;
    func_0x00010bfb3940(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_104991f2c:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104991f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),param_4,puVar4);
    return;
  }
  return;
}



/* Entry: 104991f70; end: 104991f87;  */

void FUN_104991f70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000104991f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3,param_2);
  return;
}



/* Entry: 104991f88; end: 104992137; -[FBSDKWebViewAppLinkResolver appLinkFromURL:handler:] */

void FUN_104991f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10499204c;
  puStack_50 = &UNK_110993980;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfb3940(param_1,param_2,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 104992138; end: 1049923cf;  */

void FUN_104992138(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104992184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ec2ef8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x00010c0d8420(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  puVar3 = PTR_PTR_1126adfe0;
  func_0x00010c0d8420();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1049923d0;
  uStack_60 = 0x1049923e0;
  _objc_retain();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  puStack_58 = puVar3;
  _objc_retain();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  func_0x00010c18d6e0(puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain();
  func_0x00010c18d680(puVar3);
  func_0x00010c1cb840(puVar2);
  func_0x00010c1a7f60(puVar2);
  puVar8 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  uVar7 = uVar1;
  func_0x00010bdc2b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137160(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar7);
  puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010befbb60(puVar10);
  _objc_release(puVar10);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1049923d0; end: 1049923e7;  */

void FUN_1049923d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1049923e8; end: 1049925f7;  */

void FUN_1049923e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    _objc_retain();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    func_0x00010bfc1da0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1049925f8; end: 104992987; -[FBSDKWebViewAppLinkResolver parseALData:] */

void FUN_1049925f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
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
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  puStack_148 = puVar1;
  _objc_retain();
  puVar10 = &uStack_130;
  puVar9 = auStack_f0;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    param_3 = *plStack_120;
    lStack_150 = lVar2;
    lStack_140 = param_3;
    do {
      lVar11 = 0;
      lStack_138 = lVar3;
      do {
        if (*plStack_120 != param_3) {
          _objc_enumerationMutation(lVar2);
        }
        uVar14 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar4 = uVar14;
        func_0x00010c0e00e0(uVar14,param_2,&PTR____CFConstantStringClassReference_110e81bd8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar5 = uVar4;
        func_0x00010c075f00(uVar4,param_2,puVar1);
        if ((int)uVar5 != 0) {
          uVar5 = uVar4;
          func_0x00010bf44740(uVar4,param_2,&PTR____CFConstantStringClassReference_110db3eb8);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar5;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar13;
          func_0x00010c0720c0();
          _objc_release(uVar13);
          if ((int)uVar6 != 0) {
            puVar1 = puStack_148;
            _objc_retain();
            uVar13 = uVar5;
            func_0x00010bf529e0();
            if (1 < uVar13) {
              uVar13 = 1;
              puVar12 = puVar1;
              do {
                puVar1 = PTR_PTR_1126add78;
                func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar5,uVar13);
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar12;
                func_0x00010c0e00e0(puVar12,param_2,puVar1);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar1);
                if (puVar7 == (undefined *)0x0) {
                  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  func_0x00010bf09f00();
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_PTR_1126add78;
                  puVar8 = PTR_PTR_1126add78;
                  func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar5,uVar13);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf71e80(puVar1,param_2,puVar12,puVar7,puVar8);
                  _objc_release(puVar8);
                }
                puVar8 = puVar7;
                func_0x00010c089820();
                _objc_retainAutoreleasedReturnValue();
                if ((puVar8 == (undefined *)0x0) ||
                   (uVar6 = uVar5, func_0x00010bf529e0(), puVar1 = puVar8, uVar13 == uVar6 - 1)) {
                  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                  func_0x00010bf71e20();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar8);
                  func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar7,puVar1);
                }
                _objc_release(puVar12);
                _objc_release(puVar7);
                uVar13 = uVar13 + 1;
                uVar6 = uVar5;
                func_0x00010bf529e0();
                puVar12 = puVar1;
              } while (uVar13 < uVar6);
            }
            uVar13 = uVar14;
            func_0x00010c0e00e0(uVar14,param_2,&PTR____CFConstantStringClassReference_110dbdd78);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar12 = PTR_PTR_1126add78;
            if (uVar13 != 0) {
              func_0x00010c0e00e0(uVar14,param_2,&PTR____CFConstantStringClassReference_110dbdd78);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf71e80(puVar12,param_2,puVar1,uVar14,
                                  &PTR____CFConstantStringClassReference_110da6738);
              _objc_release(uVar14);
            }
            _objc_release(puVar1);
            lVar2 = lStack_150;
          }
          _objc_release(uVar5);
          param_3 = lStack_140;
          lVar3 = lStack_138;
        }
        _objc_release(uVar4);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar3);
      puVar10 = &uStack_130;
      puVar9 = auStack_f0;
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,puVar10,puVar9,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_104992988;
    lStack_170 = lVar2;
    lStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_104992a14;
    puStack_188 = &UNK_1108fe3e0;
    lStack_180 = lVar3;
    puStack_178 = puVar9;
    _objc_retain();
    func_0x00010bf999c0(puVar10,param_2,&PTR____CFConstantStringClassReference_110da66f8,
                        &puStack_1a0);
    _objc_release(puStack_178);
    _objc_release(puVar9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_148);
  return;
}



/* Entry: 104992988; end: 104992a13; -[FBSDKWebViewAppLinkResolver getALDataFromLoadedPage:handler:] */

void FUN_104992988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104992a14;
  puStack_38 = &UNK_1108fe3e0;
  uStack_30 = param_1;
  uStack_28 = param_4;
  _objc_retain();
  func_0x00010bf999c0(param_3,param_2,&PTR____CFConstantStringClassReference_110da66f8,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 104992a14; end: 104992b1f;  */

void FUN_104992a14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar1 = param_2;
  func_0x00010c075f00();
  lVar2 = param_2;
  if ((int)lVar1 == 0) {
    lVar2 = 0;
  }
  _objc_retain();
  lVar1 = lVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126add78;
    func_0x00010bdc1900(PTR_PTR_1126add78);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    _objc_retain(0);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c0f3de0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104992b20; end: 104993287; -[FBSDKWebViewAppLinkResolver appLinkFromALData:destination:] */

undefined * FUN_104992b20(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puStack_278;
  long lStack_258;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined1 auStack_198 [128];
  undefined1 auStack_118 [128];
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010c292ac0();
  _objc_release(puVar2);
  lVar13 = param_3;
  lVar3 = param_3;
  if (puVar15 == (undefined *)0x0) {
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da6798);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSDictionary0___11034ab50;
    lStack_90 = *(long *)PTR____NSDictionary0___11034ab50;
    if (lVar13 != 0) {
      lStack_90 = lVar13;
    }
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e17ad8);
    _objc_retainAutoreleasedReturnValue();
    lStack_88 = *(long *)puVar2;
    if (lVar3 != 0) {
      lStack_88 = lVar3;
    }
    lVar14 = -0x80;
LAB_104992c98:
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,
                        &stack0xfffffffffffffff0 + lVar14,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    if (puVar15 == (undefined *)0x1) {
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110da67b8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR____NSDictionary0___11034ab50;
      lStack_80 = *(long *)PTR____NSDictionary0___11034ab50;
      if (lVar13 != 0) {
        lStack_80 = lVar13;
      }
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e17ad8);
      _objc_retainAutoreleasedReturnValue();
      lStack_78 = *(long *)puVar2;
      if (lVar3 != 0) {
        lStack_78 = lVar3;
      }
      lVar14 = -0x70;
      goto LAB_104992c98;
    }
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e17ad8);
    _objc_retainAutoreleasedReturnValue();
    lStack_98 = *(long *)PTR____NSDictionary0___11034ab50;
    if (lVar13 != 0) {
      lStack_98 = lVar13;
    }
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar13);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain();
  puStack_278 = puVar2;
  func_0x00010bf52a60();
  if (puStack_278 != (undefined *)0x0) {
    lVar13 = *plStack_1e0;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar13) {
          _objc_enumerationMutation(puVar2);
        }
        lVar3 = *(long *)(lStack_1e8 + (long)puVar15 * 8);
        lStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        plStack_220 = (long *)0x0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        _objc_retain();
        lStack_258 = lVar3;
        func_0x00010bf52a60();
        if (lStack_258 != 0) {
          lVar14 = *plStack_220;
          do {
            lVar16 = 0;
            do {
              if (*plStack_220 != lVar14) {
                _objc_enumerationMutation(lVar3);
              }
              uVar17 = *(ulong *)(lStack_228 + lVar16 * 8);
              uVar4 = uVar17;
              func_0x00010c0e00e0(uVar17,param_2,&PTR____CFConstantStringClassReference_110ddd938);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar17;
              func_0x00010c0e00e0(uVar17,param_2,&PTR____CFConstantStringClassReference_110da6718);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e00e0(uVar17,param_2,&PTR____CFConstantStringClassReference_110fda038);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar4;
              func_0x00010bf529e0();
              uVar18 = uVar5;
              func_0x00010bf529e0();
              uVar7 = uVar17;
              func_0x00010bf529e0();
              if (uVar18 <= uVar7) {
                uVar18 = uVar7;
              }
              if (uVar6 <= uVar18) {
                uVar6 = uVar18;
              }
              if (uVar6 != 0) {
                uVar18 = 0;
                do {
                  puVar19 = PTR_PTR_1126add78;
                  func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar4,uVar18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar19;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar19);
                  if (puVar8 == (undefined *)0x0) {
                    puVar19 = (undefined *)0x0;
                  }
                  else {
                    puVar19 = PTR__OBJC_CLASS___NSURL_1126ae598;
                    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar8);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  puVar9 = PTR_PTR_1126add78;
                  func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar5,uVar18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar9;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar9);
                  puVar9 = PTR_PTR_1126add78;
                  func_0x00010bf09f40(PTR_PTR_1126add78,param_2,uVar17,uVar18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar9;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar9);
                  puVar9 = PTR_PTR_1126adfe8;
                  _objc_alloc(PTR_PTR_1126adfe8);
                  func_0x00010c0578a0();
                  func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar1,puVar9);
                  _objc_release(puVar9);
                  _objc_release(puVar11);
                  _objc_release(puVar10);
                  _objc_release(puVar19);
                  _objc_release(puVar8);
                  uVar18 = uVar18 + 1;
                } while (uVar6 != uVar18);
              }
              _objc_release(uVar17);
              _objc_release(uVar5);
              _objc_release(uVar4);
              lVar16 = lVar16 + 1;
            } while (lVar16 != lStack_258);
            lStack_258 = lVar3;
            func_0x00010bf52a60(lVar3,param_2,&uStack_230,auStack_198,0x10);
          } while (lStack_258 != 0);
        }
        _objc_release(lVar3);
        puVar15 = puVar15 + 1;
      } while (puVar15 != puStack_278);
      puStack_278 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_1f0,auStack_118,0x10);
    } while (puStack_278 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  lVar13 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ef18d8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = lVar3;
  func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110ddd938);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar13);
  lVar13 = lVar3;
  func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110da67d8);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_retain();
  if (lVar12 == 0) {
LAB_1049931b0:
    puVar15 = param_4;
    if ((param_4 == (undefined *)0x0) || (lVar16 == 0)) goto LAB_1049931e4;
    puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar16);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuStack_1b0 = &PTR____CFConstantStringClassReference_110db6af8;
    ppuStack_1a8 = &PTR____CFConstantStringClassReference_110dad398;
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110db1158;
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1b0,3);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c0b5ac0(lVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar15;
    func_0x00010bf4b900(puVar15,param_2,lVar13);
    _objc_release(lVar13);
    _objc_release(puVar15);
    if (((ulong)puVar19 & 1) == 0) goto LAB_1049931b0;
    puVar15 = (undefined *)0x0;
  }
  _objc_release(param_4);
LAB_1049931e4:
  puVar19 = PTR_PTR_1126adff0;
  _objc_alloc(PTR_PTR_1126adff0);
  func_0x00010c04acc0();
  _objc_release(puVar15);
  _objc_release(lVar12);
  _objc_release(lVar16);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return puVar19;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 8);
}



/* Entry: 104993288; end: 10499328f; -[FBSDKWebViewAppLinkResolver sessionProvider] */

undefined8 FUN_104993288(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104993290; end: 10499329b; -[FBSDKWebViewAppLinkResolver setSessionProvider:] */

void FUN_104993290(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10499329c; end: 1049932a3; -[FBSDKWebViewAppLinkResolver errorFactory] */

undefined8 FUN_10499329c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1049932a4; end: 1049932af; -[FBSDKWebViewAppLinkResolver setErrorFactory:] */

void FUN_1049932a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1049932b0; end: 1049932df; -[FBSDKWebViewAppLinkResolver .cxx_destruct] */

void FUN_1049932b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1049932e0; end: 104993357; -[FBSDKWebViewAppLinkResolverWebViewDelegate webView:didFinishNavigation:] */

void FUN_1049932e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf769a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf769a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104993358; end: 1049933eb; -[FBSDKWebViewAppLinkResolverWebViewDelegate webView:didFailNavigation:withError:] */

void FUN_104993358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf76220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf76220();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049933ec; end: 104993493; -[FBSDKWebViewAppLinkResolverWebViewDelegate webView:decidePolicyForNavigationAction:decisionHandler:] */

void FUN_1049933ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfd8880();
  bVar1 = (int)lVar2 == 0;
  if (bVar1) {
    func_0x00010c1a6320(param_1);
  }
  else {
    func_0x00010bf769a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
  (**(code **)(param_5 + 0x10))(param_5,bVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104993494; end: 10499349b; -[FBSDKWebViewAppLinkResolverWebViewDelegate didFinishLoad] */

undefined8 FUN_104993494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10499349c; end: 1049934a3; -[FBSDKWebViewAppLinkResolverWebViewDelegate setDidFinishLoad:] */

void FUN_10499349c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1049934a4; end: 1049934ab; -[FBSDKWebViewAppLinkResolverWebViewDelegate didFailLoadWithError] */

undefined8 FUN_1049934a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1049934ac; end: 1049934b3; -[FBSDKWebViewAppLinkResolverWebViewDelegate setDidFailLoadWithError:] */

void FUN_1049934ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1049934b4; end: 1049934bb; -[FBSDKWebViewAppLinkResolverWebViewDelegate hasLoaded] */

undefined1 FUN_1049934b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1049934bc; end: 1049934c3; -[FBSDKWebViewAppLinkResolverWebViewDelegate setHasLoaded:] */

void FUN_1049934bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1049934c4; end: 1049934f3; -[FBSDKWebViewAppLinkResolverWebViewDelegate .cxx_destruct] */

void FUN_1049934c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1049934f4; end: 1049934f7;  */

void FUN_1049934f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1049b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_postNotificationName_object_user_11261ec88);
  return;
}



/* Entry: 1049934f8; end: 10499353b;  */

void FUN_1049934f8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xd,0,0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c077310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMacCatalystApp_1125fb6d0);
    return;
  }
  return;
}



/* Entry: 10499353c; end: 10499356b;  */

void FUN_10499353c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c0793e0(param_1,param_2,&uStack_30);
  return;
}



/* Entry: 10499356c; end: 1049935ab;  */

bool FUN_10499356c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)PTR__UIPasteboardNameGeneral_110345d50;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 == param_1;
}



/* Entry: 1049935ac; end: 1049935b7;  */

void FUN_1049935ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  }
  if (param_7 == 0) {
    param_6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
  }
  puVar1 = PTR_PTR_1126ade80;
  _objc_allocWithZone(PTR_PTR_1126ade80);
  _objc_msgSend();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  puVar2 = &UNK_1107ba180;
  _swift_allocObject(&UNK_1107ba180,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  *(undefined8 *)(puVar2 + 0x18) = param_9;
  pcStack_60 = FUN_104993fb0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1048e305c;
  puStack_68 = &UNK_1107ba198;
  puStack_58 = puVar2;
  __Block_copy(&puStack_80);
  puVar2 = puStack_58;
  _swift_retain(param_9);
  _swift_release(puVar2);
  puVar2 = puVar1;
  _objc_msgSend(puVar1,PTR_s_startWithCompletion__1126720c8,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar3);
  _objc_release(puVar1);
  _swift_unknownObjectRelease(puVar2);
  return;
}



/* Entry: 1049935b8; end: 104993707; -[_TtC12FBSDKCoreKit12AEMNetworker startGraphRequestWithGraphPath:parameters:tokenString:HTTPMethod:completion:] */

void FUN_1049935b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  __Block_copy();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  puVar3 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  if (param_5 == 0) {
    param_5 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    puVar1 = puVar3;
  }
  if (param_6 == 0) {
    param_6 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  puVar2 = &UNK_1107ba158;
  _swift_allocObject(&UNK_1107ba158,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  _objc_retain(param_1);
  FUN_104993c0c(param_3,param_2,param_4,param_5,puVar1,param_6,puVar3,FUN_104993fa8,puVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1);
  return;
}



/* Entry: 104993708; end: 10499375b;  */

void FUN_104993708(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10499375c; end: 104993797; -[_TtC12FBSDKCoreKit12AEMNetworker init] */

void FUN_10499375c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104993798; end: 1049937cb;  */

void FUN_104993798(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049937cc; end: 104993823;  */

undefined * FUN_1049937cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 104993824; end: 104993953;  */

void FUN_104993824(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_release(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  __sSS10FoundationE26_forceBridgeFromObjectiveC_6resultySo8NSStringC_SSSgztFZ(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_40,lStack_38);
    _swift_bridgeObjectRelease(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 104993954; end: 1049939cb;  */

undefined8 FUN_104993954(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __sSS9hashValueSivg();
  _swift_bridgeObjectRelease(param_2);
  return uVar1;
}



/* Entry: 1049939cc; end: 104993abf;  */

undefined1 * FUN_1049939cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,param_1);
  puVar2 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  return puVar2;
}



/* Entry: 104993ac0; end: 104993bc7;  */

void FUN_104993ac0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x1130a26f0;
  func_0x000104993e60(0x1130a26f0,0x104993dfc,&UNK_10dd492d4);
  uVar2 = 0x1130a26f8;
  func_0x000104993e60(0x1130a26f8,0x104993dfc,&UNK_10dd49274);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 104993bc8; end: 104993c0b;  */

void FUN_104993bc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 104993c0c; end: 104993dc7;  */

void FUN_104993c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
  }
  if (param_7 == 0) {
    param_6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
  }
  puVar1 = PTR_PTR_1126ade80;
  _objc_allocWithZone(PTR_PTR_1126ade80);
  _objc_msgSend();
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_6);
  puVar2 = &UNK_1107ba180;
  _swift_allocObject(&UNK_1107ba180,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  *(undefined8 *)(puVar2 + 0x18) = param_9;
  pcStack_60 = FUN_104993fb0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1048e305c;
  puStack_68 = &UNK_1107ba198;
  puStack_58 = puVar2;
  __Block_copy(&puStack_80);
  puVar2 = puStack_58;
  _swift_retain(param_9);
  _swift_release(puVar2);
  puVar2 = puVar1;
  _objc_msgSend(puVar1,PTR_s_startWithCompletion__1126720c8,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar3);
  _objc_release(puVar1);
  _swift_unknownObjectRelease(puVar2);
  return;
}



/* Entry: 104993dc8; end: 104993fa7;  */

void FUN_104993dc8(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e78d8);
  return;
}



/* Entry: 104993fa8; end: 104993faf;  */

void FUN_104993fa8(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000103be02d8(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  if (param_2 != 0) {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2,param_2);
  func_0x000107c615e8(puVar2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 104993fb0; end: 104993fd7;  */

void FUN_104993fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_2,param_3);
  return;
}



/* Entry: 104993fd8; end: 104994033;  */

void FUN_104993fd8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 104994034; end: 10499409f;  */

void FUN_104994034(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1049940a0; end: 10499430f;  */

undefined * FUN_1049940a0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    _swift_retain();
    FUN_1048ee088(0,lVar9,0);
    uVar1 = param_1 + 0x38;
    uVar14 = uVar1;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar10 = 0;
    do {
      if (((long)uVar14 < 0) || (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) <= (long)uVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104994300);
        (*pcVar5)();
      }
      uVar11 = uVar14 >> 6;
      uVar12 = 1L << (uVar14 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar11 * 8) & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104994304);
        (*pcVar5)();
      }
      iVar3 = *(int *)(param_1 + 0x24);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar14 * 0x10);
      uVar17 = *puVar2;
      uVar15 = puVar2[1];
      _swift_bridgeObjectRetain_n(uVar15,2);
      uVar6 = uVar17;
      func_0x0001049ce198(uVar17,uVar15);
      if (((uint)uVar6 & 0xff) != 0x25) {
        FUN_1049cd7fc(&uStack_70);
        _swift_bridgeObjectRelease(uVar15);
        uVar15 = uStack_68;
        uVar17 = uStack_70;
      }
      uVar16 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar16) {
        FUN_1048ee088(1 < *(ulong *)(puVar4 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puVar4 + uVar16 * 0x10 + 0x20) = uVar17;
      *(undefined8 *)(puVar4 + uVar16 * 0x10 + 0x28) = uVar15;
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if ((long)uVar16 <= (long)uVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104994308);
        (*pcVar5)();
      }
      uVar7 = *(ulong *)(uVar1 + uVar11 * 8);
      if ((uVar7 & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10499430c);
        (*pcVar5)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104994310);
        (*pcVar5)();
      }
      uVar7 = uVar7 & -2L << (uVar14 & 0x3f);
      if (uVar7 == 0) {
        lVar13 = uVar11 << 6;
        puVar8 = (ulong *)(param_1 + 0x40 + uVar11 * 8);
        do {
          uVar11 = uVar11 + 1;
          if (uVar16 + 0x3f >> 6 <= uVar11) {
            func_0x00010210d994(uVar14,iVar3,0);
            uVar14 = uVar16;
            goto LAB_104994140;
          }
          uVar12 = *puVar8;
          lVar13 = lVar13 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar12 == 0);
        func_0x00010210d994(uVar14,iVar3,0);
        uVar14 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + lVar13;
      }
      else {
        uVar11 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar14 & 0x7fffffffffffffc0;
      }
LAB_104994140:
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar9);
  }
  return puVar4;
}



/* Entry: 104994310; end: 10499431b;  */

undefined8 FUN_104994310(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x20;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ();
  _objc_release(unaff_x20);
  uVar2 = uVar1;
  FUN_1049940a0(uVar1);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar2;
  FUN_1048ee3f4(uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return uVar1;
}



/* Entry: 10499431c; end: 1049943ab;  */

undefined8 FUN_10499431c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x20;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ();
  _objc_release(unaff_x20);
  uVar2 = uVar1;
  FUN_1049940a0(uVar1);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar2;
  FUN_1048ee3f4(uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return uVar1;
}



/* Entry: 1049943ac; end: 1049943b7;  */

undefined8 FUN_1049943ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x20;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ();
  _objc_release(unaff_x20);
  uVar2 = uVar1;
  FUN_1049940a0(uVar1);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar2;
  FUN_1048ee3f4(uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return uVar1;
}



/* Entry: 1049943b8; end: 1049944ef;  */

undefined8 FUN_1049943b8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = param_1[1];
  func_0x0001049cda60();
  if (((uint)param_1 & 0xff) == 0x25) {
    if (uVar2 < 0x25) {
      param_2 = 0xe000000000000000;
      param_1 = (undefined8 *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(uVar2);
      param_2 = uVar2;
      param_1 = puVar1;
    }
  }
  else {
    func_0x0001049cda74();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend();
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1049944f0; end: 10499455b;  */

void FUN_1049944f0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130a26f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000104993dfc(0xff);
  puVar2 = &UNK_10dd492d4;
  _swift_getWitnessTable(&UNK_10dd492d4,uVar1);
  puRam00000001130a26f0 = puVar2;
  return;
}



/* Entry: 10499455c; end: 104994597;  */

void FUN_10499455c(void)

{
  func_0x000100dc2d78();
  return;
}



/* Entry: 104994598; end: 10499462f;  */

undefined *
FUN_104994598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adde0;
  _objc_allocWithZone(PTR_PTR_1126adde0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  _objc_msgSend(puVar1,PTR_s_initWithToken_appID__1125f2990,param_1,param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104994630; end: 10499466f; -[_TtC12FBSDKCoreKit21AppEventsStateFactory createStateWithToken:appID:] */

void FUN_104994630(void)

{
  _objc_allocWithZone(PTR_PTR_1126adde0);
  _objc_msgSend();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104994670; end: 1049946cb;  */

void FUN_104994670(void)

{
  return;
}



/* Entry: 1049946cc; end: 1049946d3;  */

void FUN_1049946cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049946d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x50))();
  return;
}



/* Entry: 1049946d4; end: 1049946df; -[FBSDKAppLink sourceURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049946d4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1 + _DAT_1130a2798,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1049946e0; end: 1049946f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1049946e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1130a2798;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 1049946f4; end: 104994747; -[FBSDKAppLink targets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049946f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_1130a27a0);
  _swift_bridgeObjectRetain(uVar3);
  uVar1 = 0x1130a27b8;
  func_0x0001048db364(0x1130a27b8);
  uVar2 = uVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104994748; end: 104994757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104994748(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + _DAT_1130a27a0));
  return;
}



/* Entry: 104994758; end: 104994763; -[FBSDKAppLink webURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104994758(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1 + _DAT_1130a27a8,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104994764; end: 104994817;  */

void FUN_104994764(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1 + *param_3,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104994818; end: 10499482b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104994818(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1130a27a8;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar1,lVar2);
  return param_1;
}



/* Entry: 10499482c; end: 10499486f; -[FBSDKAppLink isBackToReferrer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10499482c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a27b0;
  _swift_beginAccess(param_1 + _DAT_1130a27b0,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 104994870; end: 1049948af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104994870(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a27b0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a27b0,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1049948b0; end: 1049948ff; -[FBSDKAppLink setBackToReferrer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049948b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a27b0;
  _swift_beginAccess(param_1 + _DAT_1130a27b0,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104994900; end: 10499498f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104994900(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130a27b0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a27b0,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 104994990; end: 1049949d7;  */

void FUN_104994990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_1049949d8(param_1,param_2,param_3);
  return;
}



/* Entry: 1049949d8; end: 104994b6b;  */

undefined8 FUN_1049949d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  uVar5 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar9 = auStack_70 + -uVar5;
  lVar6 = (long)puVar9 - uVar5;
  func_0x000100029394(param_1,lVar6);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar11 + 0x30);
  lVar1 = lVar6;
  (*pcVar8)(lVar6,1,lVar2);
  lVar10 = 0;
  if ((int)lVar1 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar11 + 8))(lVar6,lVar2);
    lVar10 = lVar1;
  }
  uVar3 = 0x1130a27b8;
  func_0x0001048db364(0x1130a27b8);
  uVar4 = param_2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,uVar3);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100029394(param_3,puVar9);
  puVar7 = puVar9;
  (*pcVar8)(puVar9,1,lVar2);
  if ((int)puVar7 == 1) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar11 + 8))(puVar9,lVar2);
  }
  _objc_msgSend(unaff_x20,PTR_s_initWithSourceURL_targets_webURL_112525270,lVar10,uVar4,puVar7,0);
  _objc_release(lVar10);
  _objc_release(uVar4);
  _objc_release(puVar7);
  func_0x0001000293e4(param_3);
  func_0x0001000293e4(param_1);
  return unaff_x20;
}



/* Entry: 104994b6c; end: 104994c8b; -[FBSDKAppLink initWithSourceURL:targets:webURL:] */

void FUN_104994b6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = 0x11309c5e0;
  func_0x0001048db364();
  uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffffc0 + -uVar3;
  lVar5 = (long)puVar4 - uVar3;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar5,param_3 == 0,1);
  uVar2 = 0x1130a27b8;
  func_0x0001048db364(0x1130a27b8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  if (param_5 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_5);
  }
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,param_5 == 0,1,lVar1);
  FUN_1049949d8(lVar5,param_4,puVar4);
  return;
}



/* Entry: 104994c8c; end: 104994c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104994c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)&lStack_50 - uVar5;
  lVar7 = lVar6 - uVar5;
  func_0x000100029394(param_1,lVar7);
  func_0x000100029394(param_3,lVar6);
  lVar3 = 0;
  FUN_1049952e0();
  lVar2 = lVar3;
  _objc_allocWithZone();
  func_0x000100029394(lVar7,lVar2 + _DAT_1130a2798);
  *(undefined8 *)(lVar2 + _DAT_1130a27a0) = param_2;
  func_0x000100029394(lVar6,lVar2 + _DAT_1130a27a8);
  *(undefined1 *)(lVar2 + _DAT_1130a27b0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = lVar3;
  _swift_bridgeObjectRetain(param_2);
  plVar4 = &lStack_50;
  _objc_msgSendSuper2(plVar4,puVar1);
  func_0x0001000293e4(lVar6);
  func_0x0001000293e4(lVar7);
  return plVar4;
}



/* Entry: 104994c90; end: 104994d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104994c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  _objc_allocWithZone();
  func_0x000100029394(param_1,unaff_x20 + _DAT_1130a2798);
  *(undefined8 *)(unaff_x20 + _DAT_1130a27a0) = param_2;
  func_0x000100029394(param_3,unaff_x20 + _DAT_1130a27a8);
  *(undefined1 *)(unaff_x20 + _DAT_1130a27b0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_3);
  func_0x0001000293e4(param_1);
  return puVar1;
}



/* Entry: 104994d48; end: 104994f3b; +[FBSDKAppLink appLinkWithSourceURL:targets:webURL:] */

void FUN_104994d48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = 0x11309c5e0;
  func_0x0001048db364();
  uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffffc0 + -uVar3;
  lVar5 = (long)puVar4 - uVar3;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar5,param_3 == 0,1);
  uVar2 = 0x1130a27b8;
  func_0x0001048db364(0x1130a27b8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  if (param_5 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_5);
  }
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,param_5 == 0,1,lVar1);
  lVar1 = lVar5;
  FUN_1049951c4(lVar5,param_4,puVar4);
  _swift_bridgeObjectRelease(param_4);
  func_0x0001000293e4(puVar4);
  func_0x0001000293e4(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104994f3c; end: 1049950cf; -[FBSDKAppLink initWithSourceURL:targets:webURL:isBackToReferrer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104994f3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                    undefined1 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  uVar6 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = (long)&lStack_60 - uVar6;
  lVar7 = lVar2 - uVar6;
  if (param_3 == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar7,param_3);
    lVar3 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar7,param_3 == 0,1);
  uVar4 = 0x1130a27b8;
  func_0x0001048db364(0x1130a27b8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar4);
  if (param_5 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar2,param_5);
  }
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,param_5 == 0,1,lVar3);
  func_0x000100029394(lVar7,param_1 + _DAT_1130a2798);
  *(undefined8 *)(param_1 + _DAT_1130a27a0) = param_4;
  func_0x000100029394(lVar2,param_1 + _DAT_1130a27a8);
  *(undefined1 *)(param_1 + _DAT_1130a27b0) = param_6;
  plVar5 = &lStack_60;
  lStack_60 = param_1;
  lStack_58 = lVar1;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  func_0x0001000293e4(lVar2);
  func_0x0001000293e4(lVar7);
  return plVar5;
}



/* Entry: 1049950d0; end: 10499511b;  */

void FUN_1049950d0(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10499511c; end: 10499517b; -[FBSDKAppLink init] */

void FUN_10499511c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("FBSDKCoreKit.AppLink",0x14,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104995148);
  (*pcVar1)();
}



/* Entry: 10499517c; end: 1049951c3; -[FBSDKAppLink .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000104995198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010499519c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10499517c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1130a2798;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1049951c4; end: 1049952d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1049951c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0x11309c5e0;
  func_0x0001048db364();
  uVar5 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)&lStack_50 - uVar5;
  lVar7 = lVar6 - uVar5;
  func_0x000100029394(param_1,lVar7);
  func_0x000100029394(param_3,lVar6);
  lVar3 = 0;
  FUN_1049952e0();
  lVar2 = lVar3;
  _objc_allocWithZone();
  func_0x000100029394(lVar7,lVar2 + _DAT_1130a2798);
  *(undefined8 *)(lVar2 + _DAT_1130a27a0) = param_2;
  func_0x000100029394(lVar6,lVar2 + _DAT_1130a27a8);
  *(undefined1 *)(lVar2 + _DAT_1130a27b0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = lVar3;
  _swift_bridgeObjectRetain(param_2);
  plVar4 = &lStack_50;
  _objc_msgSendSuper2(plVar4,puVar1);
  func_0x0001000293e4(lVar6);
  func_0x0001000293e4(lVar7);
  return plVar4;
}



/* Entry: 1049952d8; end: 1049952df;  */

void FUN_1049952d8(void)

{
  if (lRam00000001130a27e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e8262ec);
  return;
}



/* Entry: 1049952e0; end: 1049953a7;  */

void FUN_1049952e0(undefined8 param_1)

{
  if (lRam00000001130a27e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e8262ec);
  return;
}



/* Entry: 1049953a8; end: 1049953b3;  */

void FUN_1049953a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049953ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x70))();
  return;
}



/* Entry: 1049953b4; end: 104995513; -[_TtC12FBSDKCoreKit14AppLinkFactory createAppLinkWithSourceURL:targets:webURL:isBackToReferrer:] */

void FUN_1049953b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = 0x11309c5e0;
  func_0x0001048db364();
  uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = &stack0xffffffffffffffb0 + -uVar3;
  lVar5 = (long)puVar4 - uVar3;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar5,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar5,param_3 == 0,1);
  uVar2 = 0x1130a27b8;
  func_0x0001048db364(0x1130a27b8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar2);
  if (param_5 != 0) {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar4,param_5);
  }
  lVar1 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,param_5 == 0,1,lVar1);
  _swift_retain(param_1);
  lVar1 = lVar5;
  FUN_104995544(lVar5,param_4,puVar4,param_6);
  _swift_release(param_1);
  _swift_bridgeObjectRelease(param_4);
  func_0x0001000293e4(puVar4);
  func_0x0001000293e4(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


