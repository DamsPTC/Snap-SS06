/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063b6c68; end: 1063b6ec3; -[SCAdWebViewingSession _onAdLifecycleEvent:] */

void FUN_1063b6c68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar9 = param_1 + 0x80;
  _objc_loadWeakRetained();
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar1 + 0x28);
  }
  _objc_retain(uVar7);
  lVar2 = lVar9;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar1);
  _objc_release(lVar9);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  lVar9 = lVar2;
  func_0x00010be36bc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_1 + 0x80;
    _objc_loadWeakRetained();
    uVar3 = uVar6;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126ca218;
    _objc_opt_class(PTR_PTR_1126ca218);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar6 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar3);
  }
  lVar9 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar9 + 0x48);
  }
  _objc_retain(uVar8);
  _objc_release(lVar9);
  func_0x00010bf902a0(uVar6);
  lVar9 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    _objc_release();
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x18);
    _objc_release();
    if (lVar9 == 1) {
      func_0x00010be32320(param_1);
      goto LAB_1063b6e80;
    }
  }
  lVar9 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x18);
    _objc_release();
    if (lVar9 != 4) goto LAB_1063b6e80;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be25ec0(param_1);
  }
  _objc_release();
LAB_1063b6e80:
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b6ec4; end: 1063b714b; -[SCAdWebViewingSession _handleWebViewEventV2:] */

void FUN_1063b6ec4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
  }
  _objc_retain(uVar8);
  func_0x00010bef37e0(uVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar7;
  func_0x00010c076b80();
  if ((int)uVar8 == 0) goto LAB_1063b70fc;
  lVar3 = param_1 + 0x80;
  _objc_loadWeakRetained(lVar3);
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar1 + 0x28);
  }
  _objc_retain(uVar8);
  lVar4 = lVar3;
  func_0x00010c101440(lVar3,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar3);
  uVar8 = uVar7;
  func_0x00010c09c880(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf902a0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar2 != 0) {
    uVar8 = uVar7;
    if (*(long *)(lVar2 + 0x10) == 9) {
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      _objc_retain(uVar9);
      func_0x00010bdc3460(puVar6,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09c880(uVar7);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar1 + 0x48);
      }
      _objc_retain(uVar10);
      func_0x00010be33580(param_1,param_2,puVar6,uVar8,lVar4,uVar10,uVar5);
    }
    else {
      if (*(long *)(lVar2 + 0x10) != 8) goto LAB_1063b70f4;
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      _objc_retain(uVar9);
      func_0x00010bdc3460(puVar6,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09c880(uVar7);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar1 + 0x48);
      }
      _objc_retain(uVar10);
      func_0x00010be33600(param_1,param_2,puVar6,uVar8,lVar4,uVar10,uVar5);
    }
    _objc_release(uVar10);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(uVar9);
  }
LAB_1063b70f4:
  _objc_release(lVar4);
LAB_1063b70fc:
  _objc_release(uVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063b714c; end: 1063b71ef; -[SCAdWebViewingSession _handleWebViewWillLoadUrl:adSnapMetadata:currentItem:lastInteractedItemIndex:isExternalBrowser:] */

void FUN_1063b714c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  if (param_7 != 0) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010bef4a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becde20(param_1,param_2,param_3,param_6,param_5,param_4);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 1063b71f0; end: 1063b72db; -[SCAdWebViewingSession _handleWebViewDidLoadUrl:adSnapMetadata:currentItem:lastInteractedItemIndex:isExternalBrowser:] */

void FUN_1063b71f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010bef52a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282940();
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bef4a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be285c0(param_1,param_2,param_3,param_6,uVar1,param_7,param_8,param_4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063b72dc; end: 1063b758b; -[SCAdWebViewingSession _handleWebviewUserEvent:] */

void FUN_1063b72dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x10);
    _objc_release();
    if (lVar3 != 3) goto LAB_1063b74f0;
    lVar3 = param_3;
    func_0x00010bf428e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar5 = (undefined *)0x0;
LAB_1063b73d8:
      _objc_release(puVar5);
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x18);
      _objc_release();
      if (lVar4 == 0x24) {
        puVar5 = PTR_PTR_1126ca410;
        func_0x00010bf78700(PTR_PTR_1126ca410);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          _objc_retain(0);
          _objc_retain(0);
          uVar8 = 0;
          uVar7 = 0;
          uVar2 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar3 + 0x48);
          _objc_retain(uVar7);
          uVar8 = *(undefined8 *)(lVar3 + 0x10);
          _objc_retain(uVar8);
          uVar2 = *(undefined8 *)(lVar3 + 0x50);
        }
        func_0x00010bf79600(uVar1,param_2,puVar5,uVar7,uVar8,uVar2);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar1);
        goto LAB_1063b73d8;
      }
    }
    lVar4 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uVar1 = 0;
LAB_1063b7440:
      _objc_release(uVar1);
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x18);
      _objc_release();
      if (lVar4 == 8) {
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        if (lVar3 == 0) {
          _objc_retain(0);
          _objc_retain(0);
          uVar8 = 0;
          uVar1 = 0;
          uVar7 = 0;
        }
        else {
          uVar1 = *(undefined8 *)(lVar3 + 0x48);
          _objc_retain(uVar1);
          uVar8 = *(undefined8 *)(lVar3 + 0x10);
          _objc_retain(uVar8);
          uVar7 = *(undefined8 *)(lVar3 + 0x50);
        }
        func_0x00010c0e7b60(uVar2,param_2,uVar1,uVar8,uVar7);
        _objc_release(uVar8);
        goto LAB_1063b7440;
      }
    }
    lVar4 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) != 10)) {
      lVar6 = param_3;
      func_0x00010bf99b20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 0x18);
        _objc_release();
        _objc_release(lVar4);
        if (lVar6 != 0x1c) goto LAB_1063b74e8;
        goto LAB_1063b74a4;
      }
      uVar1 = 0;
    }
    else {
      _objc_release(lVar4);
LAB_1063b74a4:
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      if (lVar3 == 0) {
        _objc_retain(0);
        _objc_retain(0);
        uVar1 = 0;
        lVar4 = 0;
        uVar7 = 0;
      }
      else {
        lVar4 = *(long *)(lVar3 + 0x48);
        _objc_retain(lVar4);
        uVar1 = *(undefined8 *)(lVar3 + 0x10);
        _objc_retain(uVar1);
        uVar7 = *(undefined8 *)(lVar3 + 0x50);
      }
      func_0x00010c0e7b40(uVar2,param_2,lVar4,uVar1,uVar7);
    }
    _objc_release(uVar1);
    _objc_release(lVar4);
  }
LAB_1063b74e8:
  _objc_release(lVar3);
LAB_1063b74f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b758c; end: 1063b76d7; -[SCAdWebViewingSession _copyPromoCodeIfPresent:isExb:] */

void FUN_1063b758c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c2a4740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010c117dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
      func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c117dc0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e7c0(puVar4,param_2,lVar1);
      _objc_release(lVar1);
      if ((param_4 != 0) && ((*(byte *)(param_1 + 0x70) & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x70) = 1;
        uVar5 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beead80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14ff00(uVar5,param_2,param_1,&PTR___NSConcreteGlobalBlock_110920428);
        _objc_release(param_1);
        _objc_release(uVar5);
      }
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1063b76d8; end: 1063b76db;  */

void FUN_1063b76d8(void)

{
  return;
}



/* Entry: 1063b76dc; end: 1063b786b; -[SCAdWebViewingSession _webviewPromoCodeNotificationRequest] */

void FUN_1063b76dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388;
  _objc_opt_new(PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388);
  puVar2 = puVar1;
  func_0x00010af47424();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010af4743c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172cc0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e4d1f8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e7c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UNNotificationRequest_1126bc390;
  puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_opt_new(PTR__OBJC_CLASS___NSUUID_1126b0270);
  puVar4 = puVar3;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UNTimeIntervalNotificationTrigger_1126ca420;
  func_0x00010c27c3c0(0x3ff0000000000000,
                      PTR__OBJC_CLASS___UNTimeIntervalNotificationTrigger_1126ca420,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1370a0(puVar2,param_2,puVar4,puVar1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(puVar1 + 0x78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b786c; end: 1063b7883; -[SCAdWebViewingSession eventAnnouncing] */

void FUN_1063b786c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b7884; end: 1063b788f; -[SCAdWebViewingSession setEventAnnouncing:] */

void FUN_1063b7884(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 1063b7890; end: 1063b78a7; -[SCAdWebViewingSession playlistItemController] */

void FUN_1063b7890(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b78a8; end: 1063b78b3; -[SCAdWebViewingSession setPlaylistItemController:] */

void FUN_1063b78a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 1063b78b4; end: 1063b78cb; -[SCAdWebViewingSession operaController] */

void FUN_1063b78b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b78cc; end: 1063b78d7; -[SCAdWebViewingSession setOperaController:] */

void FUN_1063b78cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 1063b78d8; end: 1063b78df; -[SCAdWebViewingSession unifiedEventBus] */

undefined8 FUN_1063b78d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1063b78e0; end: 1063b790f; -[SCAdWebViewingSession setUnifiedEventBus:] */

void FUN_1063b78e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063b7910; end: 1063b79e3; -[SCAdWebViewingSession .cxx_destruct] */

void FUN_1063b7910(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 1063b79e4; end: 1063b7a27; -[SCAdSKOverlaySession dealloc] */

void FUN_1063b79e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be03360();
  puStack_28 = PTR_PTR_1126f1148;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1063b7a28; end: 1063b7bd7; -[SCAdSKOverlaySession initWithAdDataSource:adConfigProvider:skOverlayPreloader:skOverlayLifecycleTracker:contextExperimentService:viewLocation:dpaConfigProvider:adConfigProviderV2:] */

undefined8
FUN_1063b7a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1063b7bd8;
  puStack_80 = &UNK_110920448;
  uStack_70 = param_10;
  uStack_68 = param_9;
  uStack_78 = param_4;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1500(param_1,param_2,param_3,param_4,param_10,param_5,puVar1,param_6,param_7,puVar2
                      ,param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1063b7bd8; end: 1063b7c7b;  */

void FUN_1063b7bd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c5540;
  _objc_alloc(PTR_PTR_1126c5540);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff11e0(puVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063b7c7c; end: 1063b7e67; -[SCAdSKOverlaySession initWithAdDataSource:adConfigProvider:adConfigProviderV2:skOverlayPreloader:skOverlayParamsBuilder:skOverlayLifecycleTracker:contextExperimentService:application:viewLocation:] */

undefined1 *
FUN_1063b7c7c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_6 == 0) {
    ppuVar3 = (undefined1 **)0x0;
  }
  else {
    puStack_68 = PTR_PTR_1126f1148;
    puStack_70 = param_1;
    _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)((long)ppuVar3 + 8);
      *(undefined8 *)((long)ppuVar3 + 8) = param_3;
      _objc_release(uVar1);
      _objc_retain(param_4);
      uVar1 = *(undefined8 *)((long)ppuVar3 + 0x18);
      *(undefined8 *)((long)ppuVar3 + 0x18) = param_4;
      _objc_release(uVar1);
      _objc_retain(param_5);
      uVar1 = *(undefined8 *)((long)ppuVar3 + 0x20);
      *(undefined8 *)((long)ppuVar3 + 0x20) = param_5;
      _objc_release(uVar1);
      _objc_retain(param_6);
      uVar1 = *(undefined8 *)((long)ppuVar3 + 0x28);
      *(long *)((long)ppuVar3 + 0x28) = param_6;
      _objc_release(uVar1);
      _objc_retain(param_7);
      uVar1 = *(undefined8 *)((long)ppuVar3 + 0x30);
      *(undefined8 *)((long)ppuVar3 + 0x30) = param_7;
      _objc_release(uVar1);
      _objc_retain(param_8);
      uVar1 = *(undefined8 *)((long)ppuVar3 + 0x38);
      *(undefined8 *)((long)ppuVar3 + 0x38) = param_8;
      _objc_release(uVar1);
      _objc_retain(param_9);
      uVar1 = *(undefined8 *)((long)ppuVar3 + 0x40);
      *(undefined8 *)((long)ppuVar3 + 0x40) = param_9;
      _objc_release(uVar1);
      _objc_retain(param_10);
      uVar1 = *(undefined8 *)((long)ppuVar3 + 0x48);
      *(undefined8 *)((long)ppuVar3 + 0x48) = param_10;
      _objc_release(uVar1);
      *(undefined8 *)((long)ppuVar3 + 0x50) = param_11;
      puVar2 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar1 = *(undefined8 *)((long)ppuVar3 + 0x88);
      *(undefined **)((long)ppuVar3 + 0x88) = puVar2;
      _objc_release(uVar1);
    }
    _objc_retain(ppuVar3);
    param_1 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar3;
}



/* Entry: 1063b7e68; end: 1063b80ff; -[SCAdSKOverlaySession registeredEventsForOperaSession] */

void FUN_1063b7e68(void)

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
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9a88;
  func_0x00010bf4cf80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9a88;
  puStack_100 = puVar1;
  puStack_f8 = puVar1;
  func_0x00010bf4c380();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_108 = puVar2;
  puStack_f0 = puVar2;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_110 = puVar1;
  puStack_e8 = puVar1;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9460;
  puStack_118 = puVar2;
  puStack_e0 = puVar2;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_120 = puVar1;
  puStack_d8 = puVar1;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9460;
  puStack_128 = puVar2;
  puStack_d0 = puVar2;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_c8 = puVar1;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9460;
  puStack_c0 = puVar2;
  func_0x00010c2a5c80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ca428;
  puStack_b8 = puVar3;
  func_0x00010c2a64e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2338;
  puStack_b0 = puVar4;
  func_0x00010c23c600();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_a8 = puVar5;
  func_0x00010c29f080();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ebec78;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ebec98;
  puVar7 = PTR_PTR_1126b2638;
  puStack_a0 = puVar6;
  func_0x00010c13a260();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ca370;
  puStack_88 = puVar7;
  func_0x00010c10f820();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ca370;
  puStack_80 = puVar8;
  func_0x00010bf84fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = &puStack_f8;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_128);
  _objc_release(puStack_120);
  _objc_release(puStack_118);
  _objc_release(puStack_110);
  _objc_release(puStack_108);
  puVar1 = puStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1063b8100;
  puStack_170 = puVar9;
  puStack_168 = puVar8;
  puStack_160 = puVar7;
  puStack_158 = puVar6;
  puStack_150 = puVar10;
  puStack_148 = puVar5;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar13);
  _objc_initWeak(auStack_178,puVar1);
  ppuVar11 = ppuVar13;
  func_0x00010bef3820(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_180,auStack_178);
  ppuVar12 = ppuVar11;
  func_0x00010c25ff60(ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(ppuVar13);
  return;
}



/* Entry: 1063b8100; end: 1063b8207; -[SCAdSKOverlaySession beginObservationWithAdUnifiedEventStreams:] */

void FUN_1063b8100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bef3820(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1063b8208; end: 1063b824f;  */

void FUN_1063b8208(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a1c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063b8250; end: 1063b8303; -[SCAdSKOverlaySession _onModularLensEvent:] */

void FUN_1063b8250(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lVar3 = *(long *)(param_3 + 0x18);
  _objc_release();
  if (lVar3 != 3) {
    if (lVar3 == 2) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf09260();
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be03350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__dismissSKOverlayAfterDelayMs__11255e670,uVar2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentOverlayIfNeeded__11257ce08,*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 1063b8304; end: 1063b8907; -[SCAdSKOverlaySession operaViewDidSendEvent:page:params:] */

void FUN_1063b8304(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != (undefined *)0x0) && ((*(byte *)(param_1 + 0x90) & 1) == 0)) {
    puVar1 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1f3c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 != 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
  }
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar10 != 0) {
    func_0x00010be6a7c0(param_1);
    goto LAB_1063b859c;
  }
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf3df00(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar10 != 0) {
    func_0x00010be68500(param_1);
    goto LAB_1063b859c;
  }
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c2a5c80(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  lVar7 = param_1;
  if ((int)uVar10 != 0) {
    puVar1 = PTR_PTR_1126c9a28;
    func_0x00010bf6ed60(PTR_PTR_1126c9a28);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c9b98;
    _objc_opt_class(PTR_PTR_1126c9b98);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    uVar10 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(uVar4);
    func_0x00010be6a7c0(param_1);
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010be36bc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    lVar8 = lVar7;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = lVar8;
    _objc_release(uVar9);
    _objc_release(uVar4);
LAB_1063b852c:
    _objc_release(lVar7);
    goto LAB_1063b859c;
  }
  puVar1 = PTR_PTR_1126c9a88;
  func_0x00010bf4cf80(PTR_PTR_1126c9a88);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c0720c0();
  if ((uVar10 & 1) == 0) {
    puVar2 = PTR_PTR_1126ca370;
    func_0x00010c10f820(PTR_PTR_1126ca370);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar10 != 0) {
      _objc_release(puVar2);
      goto LAB_1063b858c;
    }
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c23c600(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((uVar10 & 1) == 0) {
      puVar1 = PTR_PTR_1126c9a88;
      func_0x00010bf4c380(PTR_PTR_1126c9a88);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)uVar10 != 0) {
        func_0x00010be9b4a0(param_1);
        goto LAB_1063b859c;
      }
      puVar1 = PTR_PTR_1126ca370;
      func_0x00010bf84fa0(PTR_PTR_1126ca370);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar10 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010c29f080(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        _objc_release(puVar1);
        if ((int)uVar10 == 0) {
          puVar1 = PTR_PTR_1126c9460;
          func_0x00010c0f2620(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_3;
          func_0x00010c0720c0();
          if ((uVar10 & 1) == 0) {
            puVar2 = PTR_PTR_1126c9460;
            func_0x00010c0f2580(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_3;
            func_0x00010c0720c0();
            if ((uVar10 & 1) != 0) {
LAB_1063b8744:
              _objc_release(puVar2);
              goto LAB_1063b874c;
            }
            puVar3 = PTR_PTR_1126c9460;
            func_0x00010c0f25e0(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_3;
            func_0x00010c0720c0();
            if ((int)uVar10 != 0) {
              _objc_release(puVar3);
              goto LAB_1063b8744;
            }
            puVar6 = PTR_PTR_1126c9460;
            func_0x00010c0f2560(PTR_PTR_1126c9460);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar6);
            _objc_release(puVar3);
            _objc_release(puVar2);
            _objc_release(puVar1);
            if ((uVar10 & 1) != 0) goto LAB_1063b8754;
            puVar1 = PTR_PTR_1126ca428;
            func_0x00010c2a64e0(PTR_PTR_1126ca428);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar1);
            if ((int)uVar10 == 0) {
              uVar10 = param_3;
              func_0x00010c0720c0();
              if ((int)uVar10 != 0) goto LAB_1063b8594;
              uVar10 = param_3;
              func_0x00010c0720c0();
              if ((int)uVar10 == 0) {
                puVar1 = PTR_PTR_1126b2638;
                func_0x00010c13a260(PTR_PTR_1126b2638);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = param_3;
                func_0x00010c0720c0();
                _objc_release(puVar1);
                if ((int)uVar10 != 0) {
                  func_0x00010be6b260(param_1);
                }
                goto LAB_1063b859c;
              }
              goto LAB_1063b86b8;
            }
            func_0x00010c1013e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_PTR_1126c9898;
            func_0x00010c0844e0(PTR_PTR_1126c9898);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_5;
            func_0x00010c0e00e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c101420();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = *(undefined8 *)(param_1 + 0x70);
            *(long *)(param_1 + 0x70) = lVar8;
            _objc_release(uVar9);
          }
          else {
LAB_1063b874c:
            _objc_release(puVar1);
LAB_1063b8754:
            func_0x00010c1013e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = param_4;
            func_0x00010be36bc0(param_4);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c101440();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = *(ulong *)(param_1 + 0x70);
            *(long *)(param_1 + 0x70) = lVar8;
          }
          _objc_release(uVar10);
          _objc_release(puVar1);
          goto LAB_1063b852c;
        }
      }
      else {
        _objc_release(puVar1);
      }
LAB_1063b86b8:
      func_0x00010be7d1a0(param_1);
      goto LAB_1063b859c;
    }
  }
  else {
LAB_1063b858c:
    _objc_release(puVar1);
  }
LAB_1063b8594:
  func_0x00010be03360(param_1);
LAB_1063b859c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063b8908; end: 1063b8a1b; -[SCAdSKOverlaySession _onResizeMediaEvent:] */

void FUN_1063b8908(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b6008;
  _objc_retain(param_4);
  func_0x00010c13a2c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  if ((bool)*(char *)(param_2 + 0x91) == 0.0 < param_1) {
    return;
  }
  *(bool *)(param_2 + 0x91) = 0.0 < param_1;
  if (0.0 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010be03370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__dismissSKOverlayIfNeeded_11255e678);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s__presentOverlayIfNeeded__11257ce08,*(undefined8 *)(param_2 + 0x60));
  return;
}



/* Entry: 1063b8a1c; end: 1063b8ad7; -[SCAdSKOverlaySession _onOpenView:] */

long FUN_1063b8a1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be7d1a0(param_1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c101440(lVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar3;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar4);
  return lVar1;
}



/* Entry: 1063b8ad8; end: 1063b8bef; -[SCAdSKOverlaySession _overlayParamsForItem:pageId:] */

void FUN_1063b8ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef37c0(uVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c09c880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bef4a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bef52a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf22620(uVar2,param_2,uVar5,uVar3,*(undefined8 *)(param_1 + 0x50),param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063b8bf0; end: 1063b8fc7; -[SCAdSKOverlaySession _presentOverlayIfNeeded:] */

bool FUN_1063b8bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x78));
    if (*(char *)(param_1 + 0x91) != '\x01') {
      uVar2 = param_3;
      func_0x00010c071ae0();
      if (((int)uVar2 == 0) || (*(long *)(param_1 + 0x58) == 0)) {
        uVar2 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c1013e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c101440();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = param_1;
        func_0x00010be6ec60();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar3 != 0;
        if (lVar3 != 0) {
          uVar14 = *(undefined8 *)(param_1 + 0x60);
          _objc_retain(uVar14);
          _objc_retain(param_3);
          uVar5 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(param_1 + 0x60) = param_3;
          _objc_release(uVar5);
          lVar6 = param_1;
          func_0x00010be43620();
          if ((int)lVar6 == 0) {
            uVar15 = *(undefined8 *)(param_1 + 8);
            lVar6 = lVar4;
            func_0x00010be36bc0(lVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef37c0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar15;
            func_0x00010c09c880();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            func_0x00010bef52a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            _objc_release(uVar15);
            _objc_release(lVar6);
            func_0x00010bef60a0(uVar7);
            func_0x00010bef4240(uVar7);
            func_0x00010c0da220();
            uVar8 = *(ulong *)(param_1 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef60a0(uVar7);
            func_0x00010bef4240(uVar7);
            uVar5 = uVar7;
            func_0x00010c274920(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar5;
            func_0x00010bf5d240();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c23dca0();
            _objc_release(uVar15);
            _objc_release(uVar5);
            _objc_release(uVar8);
            if ((long)uVar9 < 1) {
              func_0x00010be7d180(param_1);
            }
            else {
              _objc_initWeak(auStack_68,param_1);
              puVar10 = PTR_PTR_1126ae6b8;
              func_0x00010c0860a0();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x000100078e94();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar10;
              func_0x00010c2706e0((double)uVar9 / 1000.0);
              _objc_retainAutoreleasedReturnValue();
              _objc_copyWeak(auStack_70,auStack_68);
              puVar13 = puVar12;
              func_0x00010c25ff60();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = *(undefined8 *)(param_1 + 0x80);
              *(undefined **)(param_1 + 0x80) = puVar13;
              _objc_release(uVar5);
              _objc_release(puVar12);
              _objc_release(puVar11);
              _objc_release(puVar10);
              _objc_destroyWeak(auStack_70);
              _objc_destroyWeak(auStack_68);
            }
            _objc_release(uVar7);
          }
          else {
            func_0x00010bea6260(param_1);
          }
          _objc_release(uVar14);
        }
        _objc_release(lVar3);
        _objc_release(lVar4);
        _objc_release(uVar2);
      }
      else {
        bVar1 = true;
      }
      goto LAB_1063b8c54;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
  }
  bVar1 = false;
LAB_1063b8c54:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1063b8fc8; end: 1063b900f;  */

void FUN_1063b8fc8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7d180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063b9010; end: 1063b919f; -[SCAdSKOverlaySession _scheduleOverlayRestoreAfterCoverDismissed] */

void FUN_1063b9010(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x80));
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec0c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c2706e0(0x3fd0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    puVar6 = puVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentOverlayIfNeeded__11257ce08,*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 1063b91a0; end: 1063b91d7;  */

void FUN_1063b91a0(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be7d1a0(param_1,param_2,*(undefined8 *)(param_1 + 0x60));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063b91d8; end: 1063b9263; -[SCAdSKOverlaySession _presentOverlay:] */

void FUN_1063b91d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010bf57500(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c10d720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063b9264; end: 1063b940f; -[SCAdSKOverlaySession _isSameOverlayPresented:] */

long FUN_1063b9264(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (*(long *)(param_1 + 0x58) == 0)) {
    lVar8 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010be36bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar3 = param_1;
    func_0x00010be6ec60(param_1,param_2,lVar2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar8 = 0;
    }
    else {
      lVar4 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010c1013e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c101440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      func_0x00010be6ec60(param_1,param_2,lVar5,uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c116140(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c116140(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010c071d00(lVar6,param_2,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return lVar8;
}



/* Entry: 1063b9410; end: 1063b956f; -[SCAdSKOverlaySession _setOverlayMetricsForSameParams:] */

void FUN_1063b9410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010be36bc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be6ec60(param_1,param_2,lVar2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = param_1;
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010be6ec60(param_1,param_2,lVar5,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77ec0();
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1063b9570; end: 1063b9667; -[SCAdSKOverlaySession _onCloseView] */

void FUN_1063b9570(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bf07b60();
  if (lVar1 != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = param_1;
    func_0x00010be6ec60(param_1,param_2,*(undefined8 *)(param_1 + 0x68),0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010be6ec60(param_1,param_2,*(undefined8 *)(param_1 + 0x70),0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c116140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c116140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c071d00(uVar4,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  func_0x00010be03360(param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1063b9668; end: 1063b97f3; -[SCAdSKOverlaySession _dismissSKOverlayAfterDelayMs:] */

void FUN_1063b9668(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (0 < (long)param_3) {
    if (*(long *)(param_1 + 0x58) != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(uVar6);
      puVar1 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c2706e0((double)param_3 / 1000.0);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      puVar4 = puVar3;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      *(undefined **)(param_1 + 0x78) = puVar4;
      _objc_release(uVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_50);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_48);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be03370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSKOverlayIfNeeded_11255e678);
  return;
}



/* Entry: 1063b97f4; end: 1063b9827;  */

void FUN_1063b97f4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063b9828; end: 1063b989f; -[SCAdSKOverlaySession _dismissSKOverlayIfNeeded:] */

void FUN_1063b9828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010bf86d40(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83fa0();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063b98a0; end: 1063b98db; -[SCAdSKOverlaySession _dismissSKOverlayIfNeeded] */

void FUN_1063b98a0(long param_1)

{
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x80));
  if (*(long *)(param_1 + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be03390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissSKOverlayIfNeeded__11255e680);
    return;
  }
  return;
}



/* Entry: 1063b98dc; end: 1063b98ef; -[SCAdSKOverlaySession updateViewLocation:] */

void FUN_1063b98dc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x50)) {
    *(long *)(param_1 + 0x50) = param_3;
  }
  return;
}



/* Entry: 1063b98f0; end: 1063b9907; -[SCAdSKOverlaySession playlistItemController] */

void FUN_1063b98f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063b9908; end: 1063b9913; -[SCAdSKOverlaySession setPlaylistItemController:] */

void FUN_1063b9908(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 1063b9914; end: 1063b99f3; -[SCAdSKOverlaySession .cxx_destruct] */

void FUN_1063b9914(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1063b99f4; end: 1063b9b7b;  */

undefined8
FUN_1063b99f4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b8da0;
  uVar3 = 0;
  if ((param_2 == 10) && (param_3 == 3)) {
    _objc_retain(param_4);
    func_0x00010c2499a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010bf4b4c0();
    _objc_release(param_4);
    uVar3 = 0;
    if ((param_5 == 1) && ((int)uVar2 != 0)) {
      uVar3 = param_1;
      func_0x00010bf1f480(param_1);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1063b9b7c; end: 1063b9d8f;  */

void FUN_1063b9b7c(ulong param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bStack_51;
  
  _objc_retain();
  _objc_retain(param_2);
  bStack_51 = 0;
  uVar2 = param_1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf5ee40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfecde0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar4 < uVar3) {
    do {
      uVar2 = param_1;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar5 = uVar3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf5f0a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bfecde0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      while( true ) {
        uVar5 = uVar3;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf529e0();
        bVar1 = bStack_51;
        _objc_release(uVar5);
        if ((uVar6 <= uVar2) || ((bVar1 & 1) != 0)) break;
        uVar5 = uVar3;
        func_0x00010c084fc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_2 + 0x10))(param_2,uVar6,&bStack_51);
        _objc_release(uVar6);
        _objc_release(uVar5);
        uVar2 = uVar2 + 1;
      }
      _objc_release(uVar3);
      uVar4 = uVar4 + 1;
      uVar2 = param_1;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      bVar1 = bStack_51;
      _objc_release(uVar2);
    } while ((uVar4 < uVar3) && ((bVar1 & 1) == 0));
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1063b9d90; end: 1063b9e5f; -[SCAdBlizzardTopSnapAdViewState initWithAttachmentTriggerType:logCardMetrics:deepLinkFromCard:deepLinkFellBackToWebview:deepLinkFellBackToAppStore:deepLinkFellBackToDefaultBrowser:lastInteractiveItemIndex:exbTriggered:] */

undefined1 *
FUN_1063b9d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f1150;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    *(undefined1 *)((long)puVar1 + 0xc) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = param_10;
  }
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 1063b9e60; end: 1063b9e83; -[SCAdBlizzardTopSnapAdViewState copyWithZone:] */

undefined8 FUN_1063b9e60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1063b9e84; end: 1063b9f2b; -[SCAdBlizzardTopSnapAdViewState hash] */

long * FUN_1063b9e84(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ushort uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar10;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lStack_68 = -lVar1;
  if (-1 < lVar1) {
    lStack_68 = lVar1;
  }
  uVar8 = *(undefined4 *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 0xc);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar8 >> 0x18),
                                          (uint6)(byte)((uint)uVar8 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar8) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar8 >> 8),(short)uVar9);
  uVar10 = CONCAT44((int)(uVar9 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar10)) &
          0xff01ff01ffffffff;
  uVar7 = (ushort)(uVar9 >> 0x30);
  uStack_60 = (ulong)uVar2 & 0xff;
  uStack_58 = uVar9 >> 0x10 & 0xff;
  uStack_50 = (ulong)CONCAT24(uVar7,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_48 = (ulong)uVar7;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd);
  plVar4 = &lStack_68;
  uStack_38 = uVar3;
  func_0x000100505190(plVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 != param_3) {
    plVar6 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_1063ba010;
    plVar6 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((((ulong)plVar5 & 1) == 0) ||
         (((plVar4[2] != param_3[2] || ((char)plVar4[1] != (char)param_3[1])) ||
          (*(char *)((long)plVar4 + 9) != *(char *)((long)param_3 + 9))))) ||
        (((*(char *)((long)plVar4 + 10) != *(char *)((long)param_3 + 10) ||
          (*(char *)((long)plVar4 + 0xb) != *(char *)((long)param_3 + 0xb))) ||
         (*(char *)((long)plVar4 + 0xc) != *(char *)((long)param_3 + 0xc))))) ||
       (*(char *)((long)plVar4 + 0xd) != *(char *)((long)param_3 + 0xd))) {
      plVar6 = (long *)0x0;
      goto LAB_1063ba010;
    }
    plVar6 = (long *)plVar4[3];
    if (plVar6 != (long *)param_3[3]) {
      func_0x00010c071ae0();
      goto LAB_1063ba010;
    }
  }
  plVar6 = (long *)0x1;
LAB_1063ba010:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 1063b9f2c; end: 1063ba02b; -[SCAdBlizzardTopSnapAdViewState isEqual:] */

long FUN_1063b9f2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1063ba010;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) == 0) ||
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) ||
        (((*(char *)(param_1 + 10) != *(char *)(param_3 + 10) ||
          (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))) ||
         (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))))) ||
       (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))) {
      lVar3 = 0;
      goto LAB_1063ba010;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_1063ba010;
    }
  }
  lVar3 = 1;
LAB_1063ba010:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1063ba02c; end: 1063ba033; -[SCAdBlizzardTopSnapAdViewState attachmentTriggerType] */

undefined8 FUN_1063ba02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1063ba034; end: 1063ba03b; -[SCAdBlizzardTopSnapAdViewState logCardMetrics] */

undefined1 FUN_1063ba034(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1063ba03c; end: 1063ba043; -[SCAdBlizzardTopSnapAdViewState deepLinkFromCard] */

undefined1 FUN_1063ba03c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1063ba044; end: 1063ba04b; -[SCAdBlizzardTopSnapAdViewState deepLinkFellBackToWebview] */

undefined1 FUN_1063ba044(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1063ba04c; end: 1063ba053; -[SCAdBlizzardTopSnapAdViewState deepLinkFellBackToAppStore] */

undefined1 FUN_1063ba04c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1063ba054; end: 1063ba05b; -[SCAdBlizzardTopSnapAdViewState deepLinkFellBackToDefaultBrowser] */

undefined1 FUN_1063ba054(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1063ba05c; end: 1063ba063; -[SCAdBlizzardTopSnapAdViewState lastInteractiveItemIndex] */

undefined8 FUN_1063ba05c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1063ba064; end: 1063ba06b; -[SCAdBlizzardTopSnapAdViewState exbTriggered] */

undefined1 FUN_1063ba064(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1063ba06c; end: 1063ba077; -[SCAdBlizzardTopSnapAdViewState .cxx_destruct] */

void FUN_1063ba06c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1063ba078; end: 1063ba093; +[SCAdBlizzardTopSnapAdViewStateBuilder adBlizzardTopSnapAdViewState] */

void FUN_1063ba078(void)

{
  _objc_alloc_init(PTR_PTR_1126ca2f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063ba094; end: 1063ba263; +[SCAdBlizzardTopSnapAdViewStateBuilder adBlizzardTopSnapAdViewStateFromExistingAdBlizzardTopSnapAdViewState:] */

void FUN_1063ba094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126ca2f0;
  _objc_retain(param_3);
  func_0x00010bef2060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf0d4e0(param_3);
  puVar3 = puVar1;
  func_0x00010c2a89a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0a29e0(param_3);
  puVar4 = puVar3;
  func_0x00010c2b30e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf67e60(param_3);
  puVar5 = puVar4;
  func_0x00010c2abfc0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf67e40(param_3);
  puVar6 = puVar5;
  func_0x00010c2abfa0(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf67e00(param_3);
  puVar7 = puVar6;
  func_0x00010c2abf60(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf67e20(param_3);
  puVar8 = puVar7;
  func_0x00010c2abf80(puVar7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c089240(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b21e0(puVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf9a9c0(param_3);
  _objc_release(param_3);
  puVar11 = puVar9;
  func_0x00010c2ad680(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(uVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1063ba264; end: 1063ba2bf; -[SCAdBlizzardTopSnapAdViewStateBuilder build] */

void FUN_1063ba264(void)

{
  _objc_alloc(PTR_PTR_1126ca430);
  func_0x00010bff4c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063ba2c0; end: 1063ba2c7; -[SCAdBlizzardTopSnapAdViewStateBuilder withAttachmentTriggerType:] */

void FUN_1063ba2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1063ba2c8; end: 1063ba2cf; -[SCAdBlizzardTopSnapAdViewStateBuilder withLogCardMetrics:] */

void FUN_1063ba2c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1063ba2d0; end: 1063ba2d7; -[SCAdBlizzardTopSnapAdViewStateBuilder withDeepLinkFromCard:] */

void FUN_1063ba2d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 1063ba2d8; end: 1063ba2df; -[SCAdBlizzardTopSnapAdViewStateBuilder withDeepLinkFellBackToWebview:] */

void FUN_1063ba2d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 1063ba2e0; end: 1063ba2e7; -[SCAdBlizzardTopSnapAdViewStateBuilder withDeepLinkFellBackToAppStore:] */

void FUN_1063ba2e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x13) = param_3;
  return;
}



/* Entry: 1063ba2e8; end: 1063ba2ef; -[SCAdBlizzardTopSnapAdViewStateBuilder withDeepLinkFellBackToDefaultBrowser:] */

void FUN_1063ba2e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 1063ba2f0; end: 1063ba327; -[SCAdBlizzardTopSnapAdViewStateBuilder withLastInteractiveItemIndex:] */

long FUN_1063ba2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1063ba328; end: 1063ba32f; -[SCAdBlizzardTopSnapAdViewStateBuilder withExbTriggered:] */

void FUN_1063ba328(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1063ba330; end: 1063ba33b; -[SCAdBlizzardTopSnapAdViewStateBuilder .cxx_destruct] */

void FUN_1063ba330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1063ba33c; end: 1063ba407; -[SCAdPerformanceReportingSession initWithAdDataSource:adConfigProvider:adConfigProviderV2:] */

undefined1 *
FUN_1063ba33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f1158;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063ba408; end: 1063ba4ab; -[SCAdPerformanceReportingSession _swiftSessionIfEnabled] */

void FUN_1063ba408(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf1f480();
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      puVar2 = PTR_PTR_1126ca438;
      _objc_alloc();
      func_0x00010bff14e0();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar2;
      _objc_release(uVar3);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1063ba4ac; end: 1063ba4af;  */

void FUN_1063ba4ac(void)

{
  return;
}



/* Entry: 1063ba4b0; end: 1063ba507; -[SCAdPerformanceReportingSession registeredEventsForOperaSession] */

void FUN_1063ba4b0(undefined *param_1)

{
  undefined *puVar1;
  
  func_0x00010bec91e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c127820(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063ba508; end: 1063ba55f; -[SCAdPerformanceReportingSession beginObservationWithAdUnifiedEventStreams:] */

void FUN_1063ba508(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bec91e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010bf18580(param_1,param_2,param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063ba560; end: 1063ba5b7; -[SCAdPerformanceReportingSession setPlaylistItemController:] */

void FUN_1063ba560(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bec91e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1ddde0(param_1,param_2,param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063ba5b8; end: 1063ba647; -[SCAdPerformanceReportingSession operaViewDidSendEvent:page:params:] */

void FUN_1063ba5b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bec91e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c0eb7c0(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063ba648; end: 1063ba68f; -[SCAdPerformanceReportingSession .cxx_destruct] */

void FUN_1063ba648(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063ba690; end: 1063ba91f;  */

void FUN_1063ba690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_b8;
  
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  lVar1 = param_6;
  func_0x00010bef60a0();
  if (lVar1 == 7) {
    puVar2 = (undefined *)0x4;
    func_0x0001084984a4(4,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_9 == 0) {
      uStack_b8 = (undefined *)0x0;
    }
    else {
      uStack_b8 = PTR_PTR_1126ca440;
      _objc_alloc();
      func_0x00010bff4c00();
    }
    puVar3 = PTR_PTR_1126bdce8;
    _objc_alloc(PTR_PTR_1126bdce8);
    lVar1 = param_6;
    func_0x00010c258fc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf45420();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_6;
    func_0x0001084c63d4(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c006800(0,param_5,puVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126b92f0;
    _objc_alloc(PTR_PTR_1126b92f0);
    func_0x00010bff2160(param_3,param_4,param_1,param_2,0);
    _objc_release(puVar3);
    _objc_release(uStack_b8);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063ba920; end: 1063baa2b; -[SCDiscoverFeedOperaInterstitialLayerThumbnailView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ba920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = (long)_DAT_112746d58;
  if (*(long *)(param_5 + lVar1) == 1) {
    func_0x00010b8169fc(0x3fe5c28f5c28f5c3);
    param_1 = 0x3ffaaaaaa0000000;
  }
  else {
    func_0x000107c79b74(3,0,0);
  }
  func_0x00010bfb68e0(param_5);
  func_0x00010bc85160();
  func_0x00010c19f0e0(param_5);
  if (*(long *)(param_5 + lVar1) == 2) {
    func_0x00010bf20c00(param_5);
    lVar1 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(lVar1);
  }
  puStack_48 = PTR_PTR_1126f1160;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 1063baa2c; end: 1063baa33; -[SCDiscoverFeedOperaInterstitialLayerThumbnailView centerVerticallyInFrame] */

undefined8 FUN_1063baa2c(void)

{
  return 0;
}



/* Entry: 1063baa34; end: 1063baa43; -[SCDiscoverFeedOperaInterstitialLayerThumbnailView interstitialType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1063baa34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112746d58);
}



/* Entry: 1063baa44; end: 1063baa53; -[SCDiscoverFeedOperaInterstitialLayerThumbnailView setInterstitialType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063baa44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112746d58) = param_3;
  return;
}



/* Entry: 1063baa54; end: 1063bab9b; -[SCDiscoverFeedOperaInterstitialLayerThumbnailViewProvider initWithCheetahStory:shouldEnableVideoThumbnail:interstitialType:imageSourceProvider:imageFetchingService:circumstanceEngine:storiesConfigProvider:] */

undefined1 *
FUN_1063baa54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f1168;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000108f54a98(param_8);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010be5c7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063bab9c; end: 1063bac0b; -[SCDiscoverFeedOperaInterstitialLayerThumbnailViewProvider getThumbnailView] */

void FUN_1063bab9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca448;
  _objc_alloc(PTR_PTR_1126ca448);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1aa2c0();
  func_0x00010c20c5a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c2226c0(puVar1,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010c1ae6c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063bac0c; end: 1063baccf; -[SCDiscoverFeedOperaInterstitialLayerThumbnailViewProvider _makeViewModelForOperaInterstitialLayerThumbnail:shouldEnableVideoThumbnail:isThreeColumnsLayoutEnabled:circumstanceEngine:] */

void FUN_1063bac0c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x0001079b6848(param_3,0,param_5,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010be830e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1063bacd0; end: 1063bb00f; -[SCDiscoverFeedOperaInterstitialLayerThumbnailViewProvider _promotedStoryDynamicFeedTilesViewModelToInterstitialLayerThumbnailViewModel:isThreeColumnsLayoutEnabled:] */

void FUN_1063bacd0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c21d8;
    func_0x00010bf82280(PTR_PTR_1126c21d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a91c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6020(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b32e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b7b80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abd80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ad020(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c087760();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_2 + 0x28);
    lVar3 = lVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if ((param_5 & 1) == 0) {
      func_0x000107c79228();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107c794c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar5;
    if (lVar11 != 2) {
      lVar3 = 0;
    }
    lVar4 = lVar3;
    _objc_retain();
    lVar12 = 0;
    if (lVar11 == 2) {
      func_0x00010b0af254();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar4;
      func_0x000107c79658();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    puVar10 = PTR_PTR_1126ca450;
    _objc_alloc(PTR_PTR_1126ca450);
    lVar4 = lVar2;
    func_0x00010c1551e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_4;
    func_0x00010c087760();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010c25a9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c087760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8f120();
    lVar8 = lVar2;
    func_0x00010bf5d660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43320();
    func_0x00010bf43300(lVar2);
    lVar9 = lVar2;
    func_0x00010bf28980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c042c80(0x3ff0000000000000,0x3ff0000000000000,param_1,puVar10);
    func_0x00010c2b2000(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar11);
    _objc_release(lVar4);
    puVar10 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1063bb010; end: 1063bb057; -[SCDiscoverFeedOperaInterstitialLayerThumbnailViewProvider .cxx_destruct] */

void FUN_1063bb010(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063bb058; end: 1063bb117; -[SCAdWebviewPerformanceGrapheneLogger initWithGrapheneRegistry:performer:] */

undefined1 *
FUN_1063bb058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1170;
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063bb118; end: 1063bb23b; -[SCAdWebviewPerformanceGrapheneLogger beginWithPerformanceMetricsTracker:] */

void FUN_1063bb118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bef6660(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1063bb23c; end: 1063bb283;  */

void FUN_1063bb23c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6aa40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063bb284; end: 1063bbd13; -[SCAdWebviewPerformanceGrapheneLogger _onPerformanceMetrics:] */

void FUN_1063bb284(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_retain(0);
    lVar6 = 0;
LAB_1063bbca0:
    bVar7 = true;
LAB_1063bb2d8:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010c29bf20(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 8);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010c29bf20(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (!bVar7) goto LAB_1063bb3a0;
    bVar7 = true;
LAB_1063bb3b0:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c780(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 0x10);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c780(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (!bVar7) goto LAB_1063bb478;
    bVar7 = true;
LAB_1063bb488:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010c0d6da0(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 0x18);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010c0d6da0(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (!bVar7) goto LAB_1063bb550;
    bVar7 = true;
LAB_1063bb560:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bfe4b00(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 0x20);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bfe4b00(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (!bVar7) goto LAB_1063bb628;
    bVar7 = true;
LAB_1063bb638:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bfe4b20(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 0x28);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bfe4b20(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (!bVar7) goto LAB_1063bb700;
    bVar7 = true;
LAB_1063bb710:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf87f60(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 0x30);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf87f60(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (!bVar7) goto LAB_1063bb7d8;
    bVar7 = true;
LAB_1063bb7e8:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c720(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 0x38);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c720(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (!bVar7) goto LAB_1063bb8b0;
    bVar7 = true;
LAB_1063bb8c0:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c7a0(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 0x40);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c7a0(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (!bVar7) goto LAB_1063bb988;
    bVar7 = true;
LAB_1063bb998:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c740(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 0x48);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c740(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (!bVar7) goto LAB_1063bba60;
    bVar7 = true;
LAB_1063bba70:
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c760(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    if (bVar7) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*(double *)(lVar6 + 0x50);
    }
    func_0x00010befbfe0(uVar2,param_2,puVar3,lVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef6640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca458;
    func_0x00010bf3c760(PTR_PTR_1126ca458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    lVar6 = *(long *)(param_3 + 8);
    _objc_retain(lVar6);
    if (lVar6 == 0) goto LAB_1063bbca0;
    if (0.0 <= *(double *)(lVar6 + 8)) {
      bVar7 = false;
      goto LAB_1063bb2d8;
    }
LAB_1063bb3a0:
    if (0.0 <= *(double *)(lVar6 + 0x10)) {
      bVar7 = false;
      goto LAB_1063bb3b0;
    }
LAB_1063bb478:
    if (0.0 <= *(double *)(lVar6 + 0x18)) {
      bVar7 = false;
      goto LAB_1063bb488;
    }
LAB_1063bb550:
    if (0.0 <= *(double *)(lVar6 + 0x20)) {
      bVar7 = false;
      goto LAB_1063bb560;
    }
LAB_1063bb628:
    if (0.0 <= *(double *)(lVar6 + 0x28)) {
      bVar7 = false;
      goto LAB_1063bb638;
    }
LAB_1063bb700:
    if (0.0 <= *(double *)(lVar6 + 0x30)) {
      bVar7 = false;
      goto LAB_1063bb710;
    }
LAB_1063bb7d8:
    if (0.0 <= *(double *)(lVar6 + 0x38)) {
      bVar7 = false;
      goto LAB_1063bb7e8;
    }
LAB_1063bb8b0:
    if (0.0 <= *(double *)(lVar6 + 0x40)) {
      bVar7 = false;
      goto LAB_1063bb8c0;
    }
LAB_1063bb988:
    if (0.0 <= *(double *)(lVar6 + 0x48)) {
      bVar7 = false;
      goto LAB_1063bb998;
    }
LAB_1063bba60:
    if (0.0 <= *(double *)(lVar6 + 0x50)) {
      bVar7 = false;
      goto LAB_1063bba70;
    }
  }
  if (param_3 == 0) {
    _objc_retain(0);
    lVar4 = 0;
LAB_1063bbcb4:
    bVar7 = true;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x10);
    _objc_retain(lVar4);
    if (lVar4 == 0) goto LAB_1063bbcb4;
    if (*(double *)(lVar4 + 0x20) < 0.0) goto LAB_1063bbc1c;
    bVar7 = false;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef6640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca458;
  func_0x00010c24d980(PTR_PTR_1126ca458);
  _objc_retainAutoreleasedReturnValue();
  if (bVar7) {
    lVar5 = 0;
  }
  else {
    lVar5 = (long)*(double *)(lVar4 + 0x20);
  }
  func_0x00010befbfe0(uVar2,param_2,puVar3,lVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef6640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca458;
  func_0x00010c24d980(PTR_PTR_1126ca458);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_1063bbc1c:
  _objc_release(lVar4);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063bbd14; end: 1063bbd4f; -[SCAdWebviewPerformanceGrapheneLogger .cxx_destruct] */

void FUN_1063bbd14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063bbd50; end: 1063bbebb; -[SCAdWebviewPerformanceMetricsTracker initWithAdLifecycleTimestampsTracker:adWatermarkEventsTracker:timeProvider:performer:] */

undefined1 *
FUN_1063bbd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f1178;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ca460;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063bbebc; end: 1063bc077; -[SCAdWebviewPerformanceMetricsTracker begin] */

void FUN_1063bbebc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010be87c60();
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef6540();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1063bc078;
  puStack_68 = &UNK_11088b468;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef25e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1063bc078; end: 1063bc107;  */

void FUN_1063bc078(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a4c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063bc108; end: 1063bc12f; -[SCAdWebviewPerformanceMetricsTracker adWebviewPerformanceMetricsObservable] */

void FUN_1063bc108(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063bc130; end: 1063bc257; -[SCAdWebviewPerformanceMetricsTracker _recoverEarlyPipelineTimestamps] */

void FUN_1063bc130(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49b40();
  if ((0.0 < param_1) && ((*(byte *)(param_2 + 0x50) & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x50) = 1;
    lVar2 = *(long *)(param_2 + 0x58);
    if (lVar2 != 0) {
      *(double *)(lVar2 + 0x58) = param_1;
      _objc_retain(lVar2);
    }
    _objc_release(lVar2);
  }
  func_0x00010bf49ae0(uVar1);
  if ((0.0 < param_1) && (*(double *)(param_2 + 0x40) == 0.0)) {
    *(double *)(param_2 + 0x40) = param_1;
    lVar2 = *(long *)(param_2 + 0x58);
    if (lVar2 != 0) {
      *(double *)(lVar2 + 0x48) = param_1;
      _objc_retain(lVar2);
    }
    _objc_release(lVar2);
  }
  func_0x00010bf49a80(uVar1);
  if ((0.0 < param_1) && ((*(byte *)(param_2 + 0x48) & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x48) = 1;
    lVar2 = *(long *)(param_2 + 0x58);
    if (lVar2 != 0) {
      *(double *)(lVar2 + 8) = param_1;
      _objc_retain(lVar2);
    }
    _objc_release(lVar2);
  }
  func_0x00010bf49aa0(uVar1);
  if ((0.0 < param_1) && ((*(byte *)(param_2 + 0x49) & 1) == 0)) {
    *(undefined1 *)(param_2 + 0x49) = 1;
    lVar2 = *(long *)(param_2 + 0x58);
    if (lVar2 != 0) {
      *(double *)(lVar2 + 0x50) = param_1;
      _objc_retain(lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


