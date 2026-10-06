/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10654bec4; end: 10654bef3; -[SCChatViewControllerV3 htmlContentPlaybackStarted] */

void FUN_10654bec4(undefined8 param_1)

{
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3fa80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654bef4; end: 10654bfab; -[SCChatViewControllerV3 didTapOnQuotedMessageWithMessageId:cell:] */

void FUN_10654bef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10654bfac;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10654bfac; end: 10654bfbb;  */

void FUN_10654bfac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didTapOnQuotedMessageWithMessag_11255ddc0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10654bfbc; end: 10654c103; -[SCChatViewControllerV3 _didTapOnQuotedMessageWithMessageId:cell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654bfbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + _DAT_11274a1ec);
  func_0x00010bfed000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010be99760(param_1);
  }
  else {
    lVar8 = (long)_DAT_11274a2f4;
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfed1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b900();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) {
      func_0x00010bfe30c0(*(undefined8 *)(param_1 + _DAT_11274a2e4));
      func_0x00010be9c1a0(param_1);
    }
    else {
      uVar5 = *(ulong *)(param_1 + lVar8);
      func_0x00010bf33b80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cb6e8;
      _objc_opt_class(PTR_PTR_1126cb6e8);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      func_0x00010bfe30a0(uVar1);
      _objc_release(uVar1);
      func_0x00010be99760(param_1);
      _objc_release(uVar5);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10654c104; end: 10654c203; -[SCChatViewControllerV3 _saveOrUnsaveCell:failToScrollReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654c104(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23cf40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33d60(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
  if (param_4 != 0) {
    puVar2 = PTR_PTR_1126b2950;
    func_0x00010c1526e0(PTR_PTR_1126b2950);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11274a374);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10654c204; end: 10654c29f; -[SCChatViewControllerV3 _scrollToRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654c204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c152720(*(undefined8 *)(param_1 + _DAT_11274a2f4),param_2,param_3,2,1);
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010c152700(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274a374);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10654c2a0; end: 10654c31f; -[SCChatViewControllerV3 _iconXSignFillImage] */

void FUN_10654c2a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4040000000000000,0x4040000000000000,0x4014000000000000,0x4014000000000000,
                      0x4014000000000000,0x4014000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10654c320; end: 10654c663; -[SCChatViewControllerV3 _presentChatActionMenuTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654c320(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bee54e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126cb6e0;
    func_0x00010c0cb660(param_1,param_2);
    puVar5 = puVar1;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bf529e0();
    _objc_release(puVar5);
    if (puVar4 < puVar3) {
      puVar5 = puVar1;
      func_0x00010c0cbb20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      if (puVar6 != (undefined *)0x0) goto LAB_10654c574;
    }
    puVar6 = puVar1;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10654c574;
  }
  puVar3 = param_3;
  func_0x00010be5ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cb6e0;
  func_0x00010c0cb680();
  puVar5 = PTR_PTR_1126cb308;
  _objc_retain(puVar3);
  _objc_opt_class(puVar5);
  puVar6 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar5);
  puVar5 = puVar3;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar3);
  if (puVar5 == (undefined *)0x0) {
LAB_10654c550:
    puVar6 = puVar3;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = puVar3;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    _objc_release(puVar6);
    if (puVar7 <= puVar4) goto LAB_10654c550;
    puVar7 = puVar3;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
LAB_10654c574:
  puVar5 = param_3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf33b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = puVar3;
  func_0x00010010fab4(puVar3,PTR_DAT_1126a5468);
  puVar5 = puVar3;
  if ((int)puVar7 == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar3);
  if ((puVar5 != (undefined *)0x0) && (puVar6 != (undefined *)0x0)) {
    puVar3 = PTR_PTR_1126c6b60;
    if (puVar4 == (undefined *)0x0) {
      func_0x00010bfbba20(PTR_PTR_1126c6b60);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfed400();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be79d60(param_3);
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10654c664; end: 10654c9d7; -[SCChatViewControllerV3 _presentActionMenuForMessage:focusedMessageContent:focusedMessageCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654c664(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    lVar10 = (long)_DAT_11274a280;
    lVar2 = *(long *)(param_1 + lVar10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar9 = param_3;
    func_0x00010bf9fe80();
    if (((uVar9 & 1) == 0) && (uVar9 = param_3, func_0x00010c15dfc0(), (int)uVar9 == 0)) {
      puVar3 = PTR_PTR_1126cb350;
      _objc_alloc(PTR_PTR_1126cb350);
      uVar9 = param_3;
      func_0x00010bf50280(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bf490e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c005160(puVar3);
      _objc_release(uVar4);
      _objc_release(uVar9);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11274a0e8);
      func_0x00010bf50a20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c2894c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetWidth();
      uVar9 = param_3;
      FUN_1064f8cb0(param_3,uVar8,*(undefined8 *)(param_1 + _DAT_11274a3a0));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(uVar8);
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc();
      func_0x00010c038f40();
      puVar7 = PTR_PTR_1126ae820;
      _objc_opt_new();
      uVar8 = *(undefined8 *)(param_1 + _DAT_11274a354);
      *(undefined **)(param_1 + _DAT_11274a354) = puVar7;
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(param_1 + _DAT_11274a284);
      lVar2 = param_1;
      func_0x00010bf368c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf22da0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
      func_0x00010c071800();
      if (iVar1 != 0) {
        func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar10));
        lVar2 = param_1;
        func_0x00010bf368c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf801e0();
        _objc_release(lVar2);
        func_0x00010be60e00(param_1);
      }
      _objc_release(uVar8);
      _objc_release(puVar6);
    }
    else {
      puVar3 = PTR_PTR_1126c2cd8;
      uVar9 = param_3;
      func_0x00010bf490e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bf50280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb7e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar9);
      uVar9 = *(ulong *)(param_1 + _DAT_11274a288);
      func_0x00010bf9fe80(param_3);
      func_0x00010bf23780(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11274a28c));
    }
    _objc_release(uVar9);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10654c9d8; end: 10654cadf; -[SCChatViewControllerV3 didDismissActionMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654c9d8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a354);
  *(undefined8 *)(param_1 + _DAT_11274a354) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11274a280;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c12e1c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c2a4ae0(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10654cae0; end: 10654cb13;  */

void FUN_10654cae0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be60de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654cb14; end: 10654cbbb; -[SCChatViewControllerV3 presentActionMenuForMessage:focusedMessageContent:focusedContextParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654cb14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb750;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0006e0();
  _objc_release(param_5);
  func_0x00010be79d60(param_1,param_2,param_3,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10654cbbc; end: 10654cc13; -[SCChatViewControllerV3 cancelMenuActionSheetDidDimiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654cbbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a28c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10654cc14; end: 10654cc6b; -[SCChatViewControllerV3 plusSubscribeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654cc14(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a1dc;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10654cc6c; end: 10654cd47; -[SCChatViewControllerV3 _subscribeToNativePostSnapInteractionEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654cc6c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274a2a0);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10654cd48; end: 10654cf5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654cd48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + _DAT_11274a34c) == '\x01')) {
    lVar1 = param_1;
    func_0x00010bef0700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf50280(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc();
      func_0x00010c038f40();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      uStack_68 = 0x10654ce90;
      puStack_60 = &UNK_110848ba8;
      lStack_58 = param_1;
      puStack_50 = puVar4;
      _objc_retain(param_2);
      uStack_48 = param_2;
      _objc_retain(puVar4);
      func_0x0001000d76cc("APPSTORE",&puStack_78);
      _objc_release(uStack_48);
      _objc_release(puStack_50);
      _objc_release(puVar4);
    }
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10654cf60; end: 10654d05b; -[SCChatViewControllerV3 _notifyContentPresentationListeners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654cf60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_11274a35c);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        if (*(long *)(lStack_108 + lVar5 * 8) != 0) {
          func_0x00010c2a6880();
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(lVar3 + _DAT_11274a1ec);
  func_0x00010bf50940();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar1;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + _DAT_11274a2c4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c15ed20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec480(uVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10654d05c; end: 10654d12b; -[SCChatViewControllerV3 _incrementSponsoredSnapSeqNumIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d05c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11274a1ec);
  func_0x00010bf50940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11274a2c4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c15ed20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec480(uVar4,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10654d12c; end: 10654d15b; -[SCChatViewControllerV3 chatAttachmentLaunchedMap] */

void FUN_10654d12c(undefined8 param_1)

{
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf801e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654d15c; end: 10654d18b; -[SCChatViewControllerV3 chatAttachmentDismissedMap] */

void FUN_10654d15c(undefined8 param_1)

{
  func_0x00010bf368c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf90980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10654d18c; end: 10654d22b; -[SCChatViewControllerV3 _shouldOpenToFirstUnread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10654d18c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274a1ec;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bfb0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar4 = 0;
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010bf50920(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0b0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e9060();
    uVar4 = ((uint)(8 < lVar1 - 1U) | 0x1e7U >> (ulong)((uint)(lVar1 - 1U) & 0x1f) ^ 1) &
            (uint)uVar3;
    _objc_release(uVar2);
  }
  return uVar4 & 1;
}



/* Entry: 10654d22c; end: 10654d2ab; -[SCChatViewControllerV3 _shouldDisableKeyboardOnChatEntry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d22c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11274a1ec);
  func_0x00010bf50920();
  if (uVar1 < 6 && (1L << (uVar1 & 0x3f) & 0x31U) != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274a0b0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c075ea0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10654d2ac; end: 10654d2cb; -[SCChatViewControllerV3 delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d2ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a0a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10654d2cc; end: 10654d2db; -[SCChatViewControllerV3 lifeCycleAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d2cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a17c);
}



/* Entry: 10654d2dc; end: 10654d31b; -[SCChatViewControllerV3 setLifeCycleAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a17c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d31c; end: 10654d33b; -[SCChatViewControllerV3 customStatusBarStyleContextController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d31c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a13c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10654d33c; end: 10654d34b; -[SCChatViewControllerV3 conversationManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d33c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a0e4);
}



/* Entry: 10654d34c; end: 10654d38b; -[SCChatViewControllerV3 setConversationManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d34c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a0e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d38c; end: 10654d39b; -[SCChatViewControllerV3 snapchatterPublicInfoFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d38c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a0dc);
}



/* Entry: 10654d39c; end: 10654d3db; -[SCChatViewControllerV3 setSnapchatterPublicInfoFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a0dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d3dc; end: 10654d3eb; -[SCChatViewControllerV3 talkUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d3dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a104);
}



/* Entry: 10654d3ec; end: 10654d42b; -[SCChatViewControllerV3 setTalkUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a104;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d42c; end: 10654d43b; -[SCChatViewControllerV3 snapchattersDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d42c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a0cc);
}



/* Entry: 10654d43c; end: 10654d47b; -[SCChatViewControllerV3 setSnapchattersDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d43c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a0cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d47c; end: 10654d48b; -[SCChatViewControllerV3 snapchattersDataMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d47c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a0c4);
}



/* Entry: 10654d48c; end: 10654d4cb; -[SCChatViewControllerV3 setSnapchattersDataMutator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a0c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d4cc; end: 10654d4db; -[SCChatViewControllerV3 groupsDataCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d4cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a0b4);
}



/* Entry: 10654d4dc; end: 10654d51b; -[SCChatViewControllerV3 setGroupsDataCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a0b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d51c; end: 10654d52b; -[SCChatViewControllerV3 groupsDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d51c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a0b8);
}



/* Entry: 10654d52c; end: 10654d56b; -[SCChatViewControllerV3 setGroupsDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a0b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d56c; end: 10654d57b; -[SCChatViewControllerV3 groupSnapchatterRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d56c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a0c0);
}



/* Entry: 10654d57c; end: 10654d5bb; -[SCChatViewControllerV3 setGroupSnapchatterRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a0c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d5bc; end: 10654d5cb; -[SCChatViewControllerV3 featureSettingsService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d5bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a248);
}



/* Entry: 10654d5cc; end: 10654d60b; -[SCChatViewControllerV3 setFeatureSettingsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d5cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a248;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d60c; end: 10654d61b; -[SCChatViewControllerV3 callStateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d60c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a12c);
}



/* Entry: 10654d61c; end: 10654d65b; -[SCChatViewControllerV3 setCallStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a12c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d65c; end: 10654d66b; -[SCChatViewControllerV3 presenceStateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d65c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a130);
}



/* Entry: 10654d66c; end: 10654d6ab; -[SCChatViewControllerV3 setPresenceStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a130;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d6ac; end: 10654d6bb; -[SCChatViewControllerV3 snapchatterUserInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d6ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a0e0);
}



/* Entry: 10654d6bc; end: 10654d6fb; -[SCChatViewControllerV3 setSnapchatterUserInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a0e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d6fc; end: 10654d70b; -[SCChatViewControllerV3 circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d6fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a098);
}



/* Entry: 10654d70c; end: 10654d74b; -[SCChatViewControllerV3 setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a098;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d74c; end: 10654d75b; -[SCChatViewControllerV3 activeChatIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d74c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a328);
}



/* Entry: 10654d75c; end: 10654d77b; -[SCChatViewControllerV3 parentDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d75c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a3c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10654d77c; end: 10654d78f; -[SCChatViewControllerV3 setParentDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d77c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a3c0,param_3);
  return;
}



/* Entry: 10654d790; end: 10654d79f; -[SCChatViewControllerV3 presenceContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d790(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a310);
}



/* Entry: 10654d7a0; end: 10654d7df; -[SCChatViewControllerV3 setPresenceContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a310;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d7e0; end: 10654d7ef; -[SCChatViewControllerV3 presenceInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d7e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3b0);
}



/* Entry: 10654d7f0; end: 10654d82f; -[SCChatViewControllerV3 setTalkChatViewLifeCycleListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a398;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d830; end: 10654d84f; -[SCChatViewControllerV3 baseDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d830(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a3c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10654d850; end: 10654d863; -[SCChatViewControllerV3 setBaseDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d850(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a3c4,param_3);
  return;
}



/* Entry: 10654d864; end: 10654d873; -[SCChatViewControllerV3 sourceNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d864(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3bc);
}



/* Entry: 10654d874; end: 10654d893; -[SCChatViewControllerV3 stackChatsDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d874(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274a3c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10654d894; end: 10654d8a7; -[SCChatViewControllerV3 setStackChatsDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d894(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274a3c8,param_3);
  return;
}



/* Entry: 10654d8a8; end: 10654d8b7; -[SCChatViewControllerV3 ignoreScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10654d8a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a08c);
}



/* Entry: 10654d8b8; end: 10654d8c7; -[SCChatViewControllerV3 setIgnoreScreenshot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d8b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a08c) = param_3;
  return;
}



/* Entry: 10654d8c8; end: 10654d8d7; -[SCChatViewControllerV3 ignoreScreenRecord] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10654d8c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a090);
}



/* Entry: 10654d8d8; end: 10654d8e7; -[SCChatViewControllerV3 setIgnoreScreenRecord:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d8d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a090) = param_3;
  return;
}



/* Entry: 10654d8e8; end: 10654d8f7; -[SCChatViewControllerV3 handleLifecycleWhenCentered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10654d8e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a094);
}



/* Entry: 10654d8f8; end: 10654d907; -[SCChatViewControllerV3 setHandleLifecycleWhenCentered:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d8f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274a094) = param_3;
  return;
}



/* Entry: 10654d908; end: 10654d917; -[SCChatViewControllerV3 configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d908(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3cc);
}



/* Entry: 10654d918; end: 10654d957; -[SCChatViewControllerV3 setConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d958; end: 10654d967; -[SCChatViewControllerV3 contentDelivery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d958(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3d0);
}



/* Entry: 10654d968; end: 10654d9a7; -[SCChatViewControllerV3 setContentDelivery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d9a8; end: 10654d9b7; -[SCChatViewControllerV3 userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d9a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3d4);
}



/* Entry: 10654d9b8; end: 10654d9f7; -[SCChatViewControllerV3 setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654d9b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654d9f8; end: 10654da07; -[SCChatViewControllerV3 snapTokenProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654d9f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3d8);
}



/* Entry: 10654da08; end: 10654da47; -[SCChatViewControllerV3 setSnapTokenProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654da08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654da48; end: 10654da57; -[SCChatViewControllerV3 tableContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654da48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3dc);
}



/* Entry: 10654da58; end: 10654da97; -[SCChatViewControllerV3 setTableContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654da58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654da98; end: 10654daa7; -[SCChatViewControllerV3 header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654da98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a37c);
}



/* Entry: 10654daa8; end: 10654dae7; -[SCChatViewControllerV3 setHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654daa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a37c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654dae8; end: 10654daf7; -[SCChatViewControllerV3 callButtonsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654dae8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3e0);
}



/* Entry: 10654daf8; end: 10654db37; -[SCChatViewControllerV3 setCallButtonsContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654daf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654db38; end: 10654db47; -[SCChatViewControllerV3 spotlightHeaderButtonContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654db38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3e4);
}



/* Entry: 10654db48; end: 10654db87; -[SCChatViewControllerV3 setSpotlightHeaderButtonContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654db48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654db88; end: 10654db97; -[SCChatViewControllerV3 presenceBarContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654db88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3e8);
}



/* Entry: 10654db98; end: 10654dbd7; -[SCChatViewControllerV3 setPresenceBarContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654db98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3e8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654dbd8; end: 10654dc17; -[SCChatViewControllerV3 setChatInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654dbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a308;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654dc18; end: 10654dc27; -[SCChatViewControllerV3 remoteUsersPresenceInformationSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654dc18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3b4);
}



/* Entry: 10654dc28; end: 10654dc67; -[SCChatViewControllerV3 setRemoteUsersPresenceInformationSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654dc28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654dc68; end: 10654dc77; -[SCChatViewControllerV3 grapheneRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654dc68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a374);
}



/* Entry: 10654dc78; end: 10654dcb7; -[SCChatViewControllerV3 setGrapheneRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654dc78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a374;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654dcb8; end: 10654dcc7; -[SCChatViewControllerV3 blizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654dcb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a384);
}



/* Entry: 10654dcc8; end: 10654dd07; -[SCChatViewControllerV3 setBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654dcc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a384;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654dd08; end: 10654dd17; -[SCChatViewControllerV3 isOperaShowing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10654dd08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274a368);
}



/* Entry: 10654dd18; end: 10654dd27; -[SCChatViewControllerV3 customStatusBarStyleForViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654dd18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a080);
}



/* Entry: 10654dd28; end: 10654dd67; -[SCChatViewControllerV3 setLongPressGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654dd28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a2fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10654dd68; end: 10654dd77; -[SCChatViewControllerV3 panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10654dd68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274a3ec);
}



/* Entry: 10654dd78; end: 10654ddb7; -[SCChatViewControllerV3 setPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10654dd78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274a3ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


