/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ef51cc; end: 105ef529b; -[SCMapViewController didCloseDropsTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef51cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273a068;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + _DAT_11273a018);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf5df80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar1 == 0) {
      func_0x00010be90f60(param_1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_11273a134);
      func_0x00010bf218e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18aea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 105ef529c; end: 105ef533b; -[SCMapViewController didSuccessfullySendDrop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef529c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar2 = (long)_DAT_11273a068;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105ef533c;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 105ef533c; end: 105ef5343;  */

void FUN_105ef533c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be90f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__requestDismissal_112581d78);
  return;
}



/* Entry: 105ef5344; end: 105ef53af; -[SCMapViewController didCloseSelectionTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef5344(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a074;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010be90f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestDismissal_112581d78);
    return;
  }
  return;
}



/* Entry: 105ef53b0; end: 105ef54c7; -[SCMapViewController _handleLocationsProviderDidUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef53b0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + _DAT_11273a0dc) & 1) != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30b78);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112739fc8;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf00660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar3);
  lVar4 = param_1;
  func_0x00010bf6eb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    lVar4 = param_1 + _DAT_11273a164;
    _objc_loadWeakRetained();
    if (lVar4 == 0) {
      if (*(long *)(param_1 + _DAT_11273a0f4) == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
        func_0x00010bfd7a20();
        if ((iVar1 != 0) &&
           ((*(char *)(param_1 + _DAT_11273a160) != '\x01' ||
            (*(char *)(param_1 + _DAT_11273a188) == '\x01')))) {
          func_0x00010bddc680(param_1,param_2,1);
        }
      }
    }
    else {
      _objc_release();
    }
  }
  else {
    func_0x00010be5e000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ef54c8; end: 105ef54d3; -[SCMapViewController mapProfilePresenter:wantsChat:deeplinkURL:] */

void FUN_105ef54c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__displayChat_deepLinkURL__11255ea40,param_4,param_5);
  return;
}



/* Entry: 105ef54d4; end: 105ef55af; -[SCMapViewController mapProfilePresenter:wantsMapForUserId:] */

void FUN_105ef54d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105ef555c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_4;
  uStack_28 = param_1;
  _objc_retain(param_4);
  func_0x00010bf84b00(param_1,param_2,1,&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_4);
  return;
}



/* Entry: 105ef55b0; end: 105ef5a6b; -[SCMapViewController _showFocusViewForUserId:focusViewSource:openSingleFocusView:launchSource:isInitialDestination:sourceSessionId:restorationCamera:reaction:reactionImages:browsingContextClusterID:tappedUserIDs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef55b0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,ulong param_12)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_d8;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar1 = *(ulong *)(param_1 + _DAT_11273a00c);
  func_0x000109021ae4();
  if (((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010c08fa60(), uVar1 == 0))
  goto LAB_105ef5a20;
  lVar2 = *(long *)(param_1 + _DAT_112739fe0);
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_112739fc8);
    func_0x00010c0fa580();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0fa5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    if (param_9 == 0) {
      lVar2 = *(long *)(param_1 + _DAT_11273a140);
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_9);
      lVar2 = param_9;
    }
    lVar5 = param_1;
    func_0x00010bdebb80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf529e0();
    if (((param_5 & 1) == 0) && (1 < uVar6)) {
      func_0x00010c2905c0();
      uVar6 = param_12;
      func_0x00010c08fa60();
      if (uVar6 == 0) {
        uVar6 = uVar3;
        func_0x00010bf3e6e0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010c08fa60();
        _objc_release(uVar6);
        if (uVar9 == 0) {
          uStack_d8 = 0;
        }
        else {
          uStack_d8 = uVar3;
          func_0x00010bf3e6e0();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        _objc_retain(param_12);
        uStack_d8 = param_12;
      }
      FUN_105efbe08(*(undefined8 *)(param_1 + _DAT_11273a114),1);
      puVar8 = PTR_PTR_1126c5b88;
      _objc_alloc();
      lVar7 = param_1;
      func_0x00010be6ddc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bf200(*(undefined8 *)(param_1 + _DAT_11273a140));
      func_0x00010c00a3e0();
      uVar11 = *(undefined8 *)(param_1 + _DAT_11273a18c);
      *(undefined **)(param_1 + _DAT_11273a18c) = puVar8;
      _objc_release(uVar11);
      _objc_release(lVar7);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273a04c));
      _objc_release(uStack_d8);
    }
    else {
      uVar6 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar6 == 0) {
        lVar10 = (long)_DAT_11273a190;
        lVar7 = *(long *)(param_1 + lVar10);
        if (lVar7 != 0) {
          func_0x00010c0b9700();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c0720c0();
          _objc_release(lVar7);
          if ((uVar6 & 1) != 0) goto LAB_105ef59f0;
        }
        FUN_105efbd90(*(undefined8 *)(param_1 + _DAT_11273a114),1);
        func_0x00010c2905c0();
        puVar8 = PTR_PTR_1126c5c28;
        _objc_alloc();
        lVar7 = param_1;
        func_0x00010be6ddc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bf200(*(undefined8 *)(param_1 + _DAT_11273a140));
        func_0x00010c00aa00();
        uVar11 = *(undefined8 *)(param_1 + lVar10);
        *(undefined **)(param_1 + lVar10) = puVar8;
        _objc_release(uVar11);
        _objc_release(lVar7);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273a048));
      }
      else {
        func_0x00010be7a460(param_1);
      }
    }
LAB_105ef59f0:
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  _objc_release();
LAB_105ef5a20:
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef5a6c; end: 105ef5b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef5a6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    _objc_release(lVar5);
LAB_105ef5b40:
    lVar5 = 0;
  }
  else {
    lVar6 = (long)_DAT_11273a020;
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
    func_0x00010c2a0160();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      _objc_release(lVar2);
      _objc_release(lVar5);
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
      func_0x00010c2a0160();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4b900();
      _objc_release(lVar1);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar5);
      if ((int)uVar4 == 0) goto LAB_105ef5b40;
    }
    lVar5 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105ef5b8c; end: 105ef5c4f; -[SCMapViewController _createCameraRestorationBlockForCamera:isInitialDestination:] */

void FUN_105ef5b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ef5c50;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_50 = param_3;
  uStack_40 = param_4;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105ef5c50; end: 105ef5f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef5c50(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar2 = param_5 + 0x28;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126b1e08;
  if (lVar2 != 0) {
    if (*(char *)(param_5 + 0x30) == '\x01') {
      func_0x00010bddc680(lVar2,param_6,1);
    }
    else {
      lVar11 = (long)_DAT_11273a140;
      uVar3 = *(undefined8 *)(lVar2 + lVar11);
      func_0x00010bf28e60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_5 + 0x20);
      lVar10 = (long)_DAT_11273a134;
      func_0x00010bf20c00(*(undefined8 *)(lVar2 + lVar10));
      func_0x00010bf8b7a0(param_3,param_4,puVar4,param_6,uVar3,uVar9);
      dVar13 = param_3;
      _objc_release(uVar3);
      lVar12 = (long)_DAT_11273a144;
      iVar1 = (int)*(undefined8 *)(lVar2 + lVar12);
      func_0x00010c071800();
      puVar4 = PTR_PTR_1126b1dc8;
      if (iVar1 == 0) {
        func_0x00010bfb33c0(param_3,*(undefined8 *)(lVar2 + lVar11),param_6,
                            *(undefined8 *)(param_5 + 0x20),0);
      }
      else {
        func_0x00010bf34640(*(undefined8 *)(param_5 + 0x20));
        func_0x00010c271ea0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf01f00(*(undefined8 *)(param_5 + 0x20));
        dVar14 = dVar13;
        func_0x00010c0fc7c0(*(undefined8 *)(param_5 + 0x20));
        dVar16 = dVar14;
        func_0x00010bf34640(*(undefined8 *)(param_5 + 0x20));
        func_0x00010bf20c00(*(undefined8 *)(lVar2 + lVar10));
        dVar14 = 1.5707963267948966 - (dVar14 * 3.141592653589793) / 180.0;
        _sin(dVar14);
        dVar15 = 0.2617993877991494;
        _tan(0x3fd0c152382d7365);
        dVar16 = (dVar16 * 3.141592653589793) / 180.0;
        _cos(dVar16);
        _log2(((dVar16 * 6.283185307179586 * 6378137.0) /
              ((dVar15 * (dVar13 / dVar14 + dVar13 / dVar14)) / param_4)) * 0.001953125);
        puVar8 = PTR_PTR_1126b1dc8;
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfe0320(*(undefined8 *)(param_5 + 0x20));
        func_0x00010c0df720(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0fc7c0(*(undefined8 *)(param_5 + 0x20));
        func_0x00010c0df720(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2a160(puVar8,param_6,puVar5,puVar6,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar6 = PTR_PTR_1126b1dc8;
        func_0x00010bf03e40(param_3,PTR_PTR_1126b1dc8,param_6,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d1840(*(undefined8 *)(lVar2 + lVar12),param_6,puVar4,puVar8,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar8);
        _objc_release(puVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105ef5f04; end: 105ef6087; -[SCMapViewController _presentFocusViewWithPet:isInitialDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef5f04(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11273a00c;
  uVar1 = *(ulong *)(param_2 + lVar7);
  func_0x000109021ae4();
  if ((param_4 != 0) && ((uVar1 & 1) == 0)) {
    lVar6 = (long)_DAT_11273a190;
    if (*(long *)(param_2 + lVar6) != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_2 + _DAT_11273a048));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + lVar6);
      *(undefined8 *)(param_2 + lVar6) = 0;
      _objc_release(uVar2);
    }
    lVar8 = (long)_DAT_11273a140;
    uVar2 = *(undefined8 *)(param_2 + lVar8);
    func_0x00010bf28e60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bdebb80(param_2,param_3,uVar2,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126c5c28;
    _objc_alloc();
    lVar5 = param_2;
    func_0x00010be6ddc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf200(*(undefined8 *)(param_2 + lVar8));
    uVar2 = *(undefined8 *)(param_2 + lVar7);
    func_0x000109021ad0(uVar2);
    func_0x00010c00ab20(param_1,puVar4,param_3,param_2,param_4,lVar5,lVar3,2,uVar2,0,0);
    uVar2 = *(undefined8 *)(param_2 + lVar6);
    *(undefined **)(param_2 + lVar6) = puVar4;
    _objc_release(uVar2);
    _objc_release(lVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_2 + _DAT_11273a048),param_3,
                        *(undefined8 *)(param_2 + lVar6));
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ef6088; end: 105ef612f; -[SCMapViewController _handleFocusViewClosedAllowingPreviousCameraRestoration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6088(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11273a090);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010beb6fe0();
    if ((int)lVar1 == 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a134);
    func_0x00010bf218e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18aea0();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a134);
    func_0x00010bf218e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dce60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ef6130; end: 105ef61cb; -[SCMapViewController _maybeMarkTravelStatusAsViewedForUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6130(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_112739fe8;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c2531c0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      lVar3 = lVar1;
      func_0x00010bfe5ec0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bbd60(uVar2,param_2,lVar3,param_3);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef61cc; end: 105ef62cf; -[SCMapViewController focusViewScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef61cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar4 = (long)_DAT_11273a048;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c072560(uVar1,param_2,param_3);
    if ((int)uVar1 != 0) {
      lVar5 = (long)_DAT_11273a190;
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c0b9700();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c0b9700(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(uVar2);
      if ((int)uVar1 != 0) {
        uVar1 = *(undefined8 *)(param_1 + lVar5);
        *(undefined8 *)(param_1 + lVar5) = 0;
        _objc_release(uVar1);
        lVar3 = param_3;
        func_0x00010c0b9700(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be5e0e0(param_1,param_2,lVar3);
        _objc_release(lVar3);
      }
      func_0x00010c12e1e0(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010be02b00(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef62d0; end: 105ef634f; -[SCMapViewController groupFocusViewScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef62d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11273a04c;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c072560(uVar1,param_2,param_3);
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273a18c);
      *(undefined8 *)(param_1 + _DAT_11273a18c) = 0;
      _objc_release(uVar1);
      func_0x00010c12e1e0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010be02b00(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef6350; end: 105ef63a7; -[SCMapViewController wantsToOpenBitmojiBuilder] */

void FUN_105ef6350(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ef63a8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105ef63a8; end: 105ef63af;  */

void FUN_105ef63a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__openBitmojiBuilder_112578d60);
  return;
}



/* Entry: 105ef63b0; end: 105ef6407; -[SCMapViewController wantsToShowBitmojiTray] */

void FUN_105ef63b0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ef6408;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105ef6408; end: 105ef6423;  */

void FUN_105ef6408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentBitmojiTray_launchSource_11257c2b8,0,0x61
             ,0,0,0);
  return;
}



/* Entry: 105ef6424; end: 105ef649b; -[SCMapViewController focusCardDidCloseWithPrevFriendIds:] */

void FUN_105ef6424(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5e0e0(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  func_0x00010be184e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef649c; end: 105ef652b; -[SCMapViewController onFriendFocusViewTrayRestored] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef649c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11273a090);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c0b9900(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a058);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ef652c; end: 105ef652f; -[SCMapViewController _dismissFocusViewScopeWithPreviousCameraRestoration] */

void FUN_105ef652c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be29e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleFocusViewClosedAllowingPr_112568140);
  return;
}



/* Entry: 105ef6530; end: 105ef660f; -[SCMapViewController _launchWidgetOnboardingScopeWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6530(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126c5c30;
  _objc_alloc(PTR_PTR_1126c5c30);
  func_0x00010c0581e0();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273a078);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11273a1c8;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef6610; end: 105ef6653; -[SCMapViewController mapWidgetOnboardingDidDismissWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6610(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    func_0x00010c1a6c80(*(undefined8 *)(param_1 + _DAT_112739ff4),param_2,1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1c8);
  *(undefined8 *)(param_1 + _DAT_11273a1c8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef6654; end: 105ef6657; -[SCMapViewController configureUIForOpenPlacesMultiTray:] */

void FUN_105ef6654(void)

{
  return;
}



/* Entry: 105ef6658; end: 105ef66cf; -[SCMapViewController calculateEdgePaddingForTrayWithHeightRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ef6658(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11273a018);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8980(param_1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105ef66d0; end: 105ef66d3; -[SCMapViewController operaPresentingViewController] */

void FUN_105ef66d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__operaPresentingViewController_112579110);
  return;
}



/* Entry: 105ef66d4; end: 105ef66d7; -[SCMapViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105ef66d4(void)

{
  return;
}



/* Entry: 105ef66d8; end: 105ef66f3; -[SCMapViewController mightDismissWithStyle:] */

void FUN_105ef66d8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c17d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setCloseType__11263cfa8,*(undefined8 *)(&UNK_10ddd15d0 + param_3 * 8));
    return;
  }
  return;
}



/* Entry: 105ef66f4; end: 105ef679b; -[SCMapViewController locationProviderDidUpdateLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef66f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1ac);
  *(undefined8 *)(param_1 + _DAT_11273a1ac) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + _DAT_11273a164;
  _objc_loadWeakRetained();
  _objc_release();
  if ((lVar2 == 0) && (*(char *)(param_1 + _DAT_11273a188) == '\x01')) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105ef679c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 105ef679c; end: 105ef67a3;  */

void FUN_105ef679c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be18490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__flyToUserLocationWithAutomaticD_112563ac0);
  return;
}



/* Entry: 105ef67a4; end: 105ef6817; -[SCMapViewController addFriendsWorkflowSkipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef67a4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf61c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
  _objc_release(lVar1);
  lVar2 = (long)_DAT_11273a004;
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



/* Entry: 105ef6818; end: 105ef688b; -[SCMapViewController addFriendsWorkflowCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6818(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a004;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf61c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef688c; end: 105ef68df; -[SCMapViewController mapFootstepsTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef688c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1c0);
  *(undefined8 *)(param_1 + _DAT_11273a1c0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a134);
  func_0x00010bf218e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18aea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef68e0; end: 105ef6943; -[SCMapViewController mapMemoriesWorkflowDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef68e0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_11273a1b0) != 0) {
    *(undefined8 *)(param_1 + _DAT_11273a1b0) = 0;
    _objc_release();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273a134);
    func_0x00010bf218e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18aea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ef6944; end: 105ef699b; -[SCMapViewController mapScreenshotScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6944(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a09c;
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



/* Entry: 105ef699c; end: 105ef69b3; -[SCMapViewController upsellScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef699c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a194);
  *(undefined8 *)(param_1 + _DAT_11273a194) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef69b4; end: 105ef69cb; -[SCMapViewController requestRealTimeLocationScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef69b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1cc);
  *(undefined8 *)(param_1 + _DAT_11273a1cc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef69cc; end: 105ef6a03; -[SCMapViewController customStatusBarStyleForViewController] */

undefined8 FUN_105ef69cc(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 3;
  if (param_1 != 0) {
    uVar1 = 1;
  }
  _objc_release();
  return uVar1;
}



/* Entry: 105ef6a04; end: 105ef6a1b; -[SCMapViewController mapTouchGestureShouldBegin] */

uint FUN_105ef6a04(uint param_1)

{
  func_0x00010be42e60();
  return param_1 ^ 1;
}



/* Entry: 105ef6a1c; end: 105ef6adb; -[SCMapViewController edgeInsetsForZoomLockTargets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105ef6a1c(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_11273a018);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a0140();
  _objc_release(uVar1);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_11273a134;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  return ((param_4 - param_1) - param_3 * 0.5) * 0.5;
}



/* Entry: 105ef6adc; end: 105ef6b83; -[SCMapViewController coordinateBoundsForZoomLockTargets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010bf8c060();
  lVar1 = (long)_DAT_11273a140;
  uVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010c29fd40(*(undefined8 *)(param_5 + lVar1));
  func_0x00010c2bf200(*(undefined8 *)(param_5 + lVar1));
  func_0x000108d31d88(uVar2,uVar3,uVar4,uVar5,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 105ef6b84; end: 105ef6c37; -[SCMapViewController handleMapGestureMightReceiveTouch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6b84(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11273a00c);
  func_0x0001090222b4();
  if ((uVar1 & 1) == 0) {
    lVar4 = (long)_DAT_11273a188;
    if (*(char *)(param_1 + lVar4) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11273a030);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 1;
      func_0x0001072433f8(1,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aa060(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010be54d60(param_1);
    }
    *(undefined1 *)(param_1 + lVar4) = 0;
  }
  return;
}



/* Entry: 105ef6c38; end: 105ef6d03; -[SCMapViewController handleMapTrailingAltitudeSliderIsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6c38(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    func_0x00010beffb20(PTR_PTR_1126b1f10);
  }
  else {
    func_0x00010c09e300();
    func_0x00010c0fd340(PTR_PTR_1126b1f10);
    func_0x00010bef1940(PTR_PTR_1126b1f10);
    func_0x00010c2a2c20(PTR_PTR_1126b1f10);
    func_0x00010bfb8120(PTR_PTR_1126b1f10);
    func_0x00010c116620(PTR_PTR_1126b1f10);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a098);
  func_0x00010c0b8ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223900();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef6d04; end: 105ef6dbb; -[SCMapViewController _performLaunchStoryActionForUserID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6d04(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a084);
    _objc_retain(param_3);
    func_0x00010bfec5a0(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112739fe0);
    func_0x00010c0b96e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112739fec);
    func_0x00010be6ddc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10c2a0(uVar1,param_2,param_1,0,uVar2,0,0xffffffffffffffff);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105ef6dbc; end: 105ef6def; -[SCMapViewController _performBroadLocationAccuracyAction] */

void FUN_105ef6dbc(undefined8 param_1)

{
  func_0x00010c09ea60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef6df0; end: 105ef6e4f; -[SCMapViewController _performNotificationDisabledAction] */

void FUN_105ef6df0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_105f08a0c(0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becd5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef6e50; end: 105ef6fab; -[SCMapViewController _performNewSnapActionWithUserID:isChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6e50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_112739fe0);
  func_0x00010c0b96e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c2923e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be042a0(param_1,param_2,lVar2,0);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + _DAT_112739fc8);
    func_0x00010c0fa5c0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11273a030);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bf200(*(undefined8 *)(param_1 + _DAT_11273a140));
      func_0x00010c29eea0(uVar3,param_2,lVar2,1,1,5,param_3,param_4);
      _objc_release(uVar3);
      lVar5 = (long)_DAT_112739ff4;
      if (*(long *)(param_1 + lVar5) != 0) {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0bb7c0(*(undefined8 *)(param_1 + lVar5),param_2,param_3,puVar4);
        _objc_release(puVar4);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef6fac; end: 105ef7157; -[SCMapViewController _performShareLocationUpsellActionWithUserID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef6fac(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11273a164;
  lVar8 = param_1 + lVar7;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar8 == 0) {
    lVar8 = (long)_DAT_11273a1d0;
    if (*(long *)(param_1 + lVar8) != 0) goto LAB_105ef7050;
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    puVar2 = PTR_PTR_1126c59a0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0583e0(puVar2,param_2,puVar1,param_1,0,puVar3,0);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273a0a8);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    puVar3 = puVar2;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar8));
  }
  else {
    puVar1 = PTR_PTR_1126c5c38;
    _objc_alloc();
    func_0x00010c05abc0();
    puVar2 = (undefined *)(param_1 + lVar7);
    _objc_loadWeakRetained();
    puVar3 = puVar1;
    func_0x00010c0d5ec0();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_105ef7050:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar8 = (long)_DAT_11273a164;
  puVar2 = param_3 + lVar8;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010be48a00(param_3,param_2,puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126c5c40;
    _objc_alloc(PTR_PTR_1126c5c40);
    func_0x00010c05abc0();
    param_3 = param_3 + lVar8;
    _objc_loadWeakRetained(param_3);
    func_0x00010c0d5ec0();
    _objc_release(param_3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ef7158; end: 105ef71f3; -[SCMapViewController _performWidgetUpsellActionWithUserID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef7158(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11273a164;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be48a00(param_1,param_2,param_3);
  }
  else {
    puVar2 = PTR_PTR_1126c5c40;
    _objc_alloc(PTR_PTR_1126c5c40);
    func_0x00010c05abc0();
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d5ec0();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef71f4; end: 105ef724f; -[SCMapViewController _performWidgetCalloutSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef71f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_11273a1d4;
  if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
    lVar3 = (long)_DAT_112739fc0;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c2a4fe0(lVar1);
    func_0x00010c225680(*(undefined8 *)(param_1 + lVar3),param_2,lVar1 + 1);
    *(undefined1 *)(param_1 + lVar2) = 1;
  }
  return;
}



/* Entry: 105ef7250; end: 105ef730f; -[SCMapViewController _performAlwaysPermissionsAction] */

void FUN_105ef7250(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1108f5dd0;
  FUN_105f09380(&PTR___NSConcreteGlobalBlock_1108f5dd0,&PTR___NSConcreteGlobalBlock_1108f5df0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105ef7310; end: 105ef731f;  */

void FUN_105ef7310(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105ef7320; end: 105ef7e4f; -[SCMapViewController _performOnClustersTappedV2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef7320(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined **param_6,undefined *param_7)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  uint uStack_244;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  if ((*(byte *)(param_5 + _DAT_11273a0dc) & 1) != 0) goto LAB_105ef7db4;
  lVar19 = (long)_DAT_11273a114;
  param_6 = (undefined **)0x1;
  FUN_105efbac0(*(undefined8 *)(param_5 + lVar19),1);
  puVar9 = param_7;
  func_0x00010c0ef480();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_7;
    func_0x00010c2923a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar9);
    if (puVar4 != (undefined *)0x1) goto LAB_105ef7494;
    puVar9 = param_7;
    func_0x00010c2923a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar3;
    func_0x00010c0720c0();
    if ((int)puVar9 == 0) {
LAB_105ef7458:
      FUN_105efbb38(*(undefined8 *)(param_5 + lVar19),1);
      FUN_105efbbb0(*(undefined8 *)(param_5 + lVar19),1);
      puVar9 = puVar3;
      func_0x00010c0720c0();
      param_6 = (undefined **)0x1;
      if ((int)puVar9 == 0) {
        FUN_105efbca0(*(undefined8 *)(param_5 + lVar19),1);
      }
      else {
        FUN_105efbd18();
      }
      iVar2 = (int)*(undefined8 *)(param_5 + _DAT_11273a00c);
      func_0x000109021ae4();
      if (iVar2 == 0) {
        func_0x00010bddc580(param_5);
        goto LAB_105ef7dac;
      }
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
LAB_105ef7d84:
      func_0x00010be7b5e0(param_5);
      goto LAB_105ef7da8;
    }
    lVar18 = *(long *)(param_5 + _DAT_11273a060);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar18 == 0) goto LAB_105ef7458;
  }
  else {
    _objc_release(puVar9);
LAB_105ef7494:
    puVar9 = param_7;
    func_0x00010c15f040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      puVar3 = param_7;
      func_0x00010c2923a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      bVar1 = (undefined *)0x1 < puVar4;
      _objc_release(puVar3);
    }
    else {
      bVar1 = false;
    }
    _objc_release(puVar9);
    puVar9 = param_7;
    func_0x00010c0ef480();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bf529e0();
    _objc_release(puVar9);
    lVar18 = (long)_DAT_11273a140;
    func_0x00010c2bf200(*(undefined8 *)(param_5 + lVar18));
    dVar20 = param_1;
    func_0x00010c0c3720(*(undefined8 *)(param_5 + _DAT_11273a138));
    if ((bool)(puVar3 != (undefined *)0x0 | bVar1)) {
      uVar26 = 0xbcb0000000000000;
      dVar20 = dVar20 + -2.220446049250313e-16;
      if (dVar20 <= param_1) goto LAB_105ef77dc;
      func_0x00010be03940(param_5);
      FUN_105efbc28(*(undefined8 *)(param_5 + lVar19),1);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bf200(*(undefined8 *)(param_5 + lVar18));
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar4 = param_7;
      func_0x00010c2923a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar17 = param_7;
      func_0x00010c0ef480();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar17;
      func_0x00010bf52a60();
      lVar19 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar19) {
            _objc_enumerationMutation(puVar17);
          }
          uVar6 = *(undefined8 *)((long)puVar16 * 8);
          func_0x00010c2923a0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar5);
          _objc_release(uVar6);
          puVar16 = puVar16 + 1;
        } while (puVar4 != puVar16);
        puVar4 = puVar17;
        func_0x00010bf52a60();
      }
      _objc_release(puVar17);
      uVar6 = 0;
      _objc_retain(puVar5);
      puVar4 = puVar5;
      func_0x00010bf52a60();
      lVar19 = lRam0000000000000000;
      if (puVar4 != (undefined *)0x0) {
        uStack_244 = 0;
        do {
          puVar17 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar19) {
              _objc_enumerationMutation(puVar5);
            }
            lVar14 = (long)_DAT_112739fc8;
            lVar7 = *(long *)(param_5 + lVar14);
            func_0x00010c0fa5c0();
            _objc_retainAutoreleasedReturnValue();
            lVar14 = *(long *)(param_5 + lVar14);
            func_0x00010c0fa580();
            _objc_retainAutoreleasedReturnValue();
            if (lVar7 != 0 && lVar14 != 0) {
              if ((uStack_244 & 1) == 0) {
                uVar8 = *(undefined8 *)(param_5 + _DAT_11273a084);
                func_0x00010bfedde0();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar8;
                func_0x00010c0826a0();
                uStack_244 = (uint)uVar10;
                _objc_release(uVar8);
              }
              else {
                uStack_244 = 1;
              }
              func_0x00010befa120(puVar3);
              func_0x00010befa120(puVar9);
            }
            _objc_release(lVar14);
            _objc_release(lVar7);
            puVar17 = puVar17 + 1;
          } while (puVar4 != puVar17);
          puVar4 = puVar5;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      puVar4 = puVar9;
      func_0x00010bf00560(puVar9);
      _objc_retainAutoreleasedReturnValue();
      param_6 = &PTR___NSConcreteGlobalBlock_1108f5e30;
      func_0x000108d31a2c();
      uVar10 = uVar6;
      uVar8 = uVar26;
      dVar22 = param_3;
      dVar23 = param_4;
      _objc_release(puVar4);
      uVar15 = *(undefined8 *)(param_5 + lVar18);
      func_0x00010bf3e820(param_5);
      dVar21 = param_3;
      dVar27 = param_4;
      func_0x00010bf2b200(uVar6,uVar26,param_3,param_4,uVar10,uVar8,dVar22,dVar23,uVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b1e08;
      uVar10 = *(undefined8 *)(param_5 + lVar18);
      func_0x00010bf28e60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = (long)_DAT_11273a134;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar19));
      func_0x00010bf8b7a0(dVar21,dVar27,puVar4);
      dVar22 = dVar21;
      _objc_release(uVar10);
      lVar7 = (long)_DAT_11273a144;
      iVar2 = (int)*(undefined8 *)(param_5 + lVar7);
      func_0x00010c071800();
      puVar4 = PTR_PTR_1126b1dc8;
      if (iVar2 == 0) {
        func_0x00010bfb33c0(dVar21,*(undefined8 *)(param_5 + lVar18));
      }
      else {
        func_0x00010bf34640(uVar15);
        func_0x00010c271ea0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf01f00(uVar15);
        dVar23 = dVar22;
        func_0x00010c0fc7c0(uVar15);
        dVar25 = dVar23;
        func_0x00010bf34640(uVar15);
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar19));
        dVar23 = 1.5707963267948966 - (dVar23 * 3.141592653589793) / 180.0;
        _sin(dVar23);
        dVar24 = 0.2617993877991494;
        _tan(0x3fd0c152382d7365);
        dVar25 = (dVar25 * 3.141592653589793) / 180.0;
        _cos(dVar25);
        _log2(((dVar25 * 6.283185307179586 * 6378137.0) /
              ((dVar24 * (dVar22 / dVar23 + dVar22 / dVar23)) / dVar27)) * 0.001953125);
        puVar12 = PTR_PTR_1126b1dc8;
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfe0320(uVar15);
        func_0x00010c0df720(puVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0fc7c0(uVar15);
        func_0x00010c0df720(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2a160(puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar17);
        _objc_release(puVar11);
        puVar17 = PTR_PTR_1126b1dc8;
        func_0x00010bf03e40(dVar21,PTR_PTR_1126b1dc8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d1840(*(undefined8 *)(param_5 + lVar7));
        _objc_release(puVar17);
        _objc_release(puVar12);
        _objc_release(puVar4);
      }
      func_0x000108d312f8(param_3,param_4,uVar6,uVar26);
      puVar4 = PTR_PTR_1126bf100;
      _objc_alloc(PTR_PTR_1126bf100);
      func_0x00010c035720(param_3,param_4);
      uVar26 = *(undefined8 *)(param_5 + _DAT_11273a030);
      func_0x00010c269d40(uVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29ec80(dVar20);
      _objc_release(uVar26);
      _objc_release(puVar4);
      _objc_release(uVar15);
      _objc_release(puVar5);
    }
    else {
LAB_105ef77dc:
      FUN_105efbbb0(*(undefined8 *)(param_5 + lVar19),1);
      puVar9 = param_7;
      func_0x00010c2923a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = param_7;
      func_0x00010c2923a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar9;
      func_0x00010bf529e0();
      _objc_release(puVar9);
      puVar9 = puVar3;
      func_0x00010c0720c0();
      if (((int)puVar9 == 0) || ((undefined *)0x1 < puVar4)) {
        param_6 = (undefined **)0x1;
        FUN_105efbca0(*(undefined8 *)(param_5 + lVar19),1);
        iVar2 = (int)*(undefined8 *)(param_5 + _DAT_11273a00c);
        func_0x000109021ae4();
        puVar9 = param_7;
        func_0x00010c2923a0();
        _objc_retainAutoreleasedReturnValue();
        if (iVar2 != 0) goto LAB_105ef7d84;
        func_0x00010bddc5a0(param_5);
      }
      else {
        puVar9 = *(undefined **)(param_5 + _DAT_112739fc8);
        func_0x00010c0fa580(puVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar26 = *(undefined8 *)(param_5 + _DAT_11273a084);
        func_0x00010bfedde0(uVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0826a0();
        _objc_release(uVar26);
        func_0x00010c2bf200(*(undefined8 *)(param_5 + lVar18));
        uVar26 = *(undefined8 *)(param_5 + _DAT_11273a030);
        func_0x00010c269d40(uVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29ec80(dVar20);
        _objc_release(uVar26);
        param_6 = (undefined **)0x1;
        FUN_105efbd18(*(undefined8 *)(param_5 + lVar19),1);
        func_0x00010be7a460(param_5);
      }
    }
LAB_105ef7da8:
    _objc_release(puVar9);
  }
LAB_105ef7dac:
  _objc_release(puVar3);
LAB_105ef7db4:
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_6,PTR_s_coordinate_1125b20c8);
  return;
}



/* Entry: 105ef7e50; end: 105ef7e57;  */

void FUN_105ef7e50(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_coordinate_1125b20c8);
  return;
}



/* Entry: 105ef7e58; end: 105ef7fa3; -[SCMapViewController _performShowHomeWorkOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef7e58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11273a164;
  lVar7 = param_1 + lVar6;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar7 == 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    lVar7 = (long)_DAT_11273a1d8;
    if (*(long *)(param_1 + lVar7) != 0) goto LAB_105ef7eec;
    puVar2 = PTR_PTR_1126c5970;
    _objc_alloc(PTR_PTR_1126c5970);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112739fdc);
    func_0x00010c15ffa0(uVar3);
    func_0x00010c058540(puVar2,param_2,puVar1,3,0x36,0x22,0x37,uVar3,2,param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273a0d4);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar7));
  }
  else {
    puVar1 = PTR_PTR_1126c5c48;
    _objc_alloc_init(PTR_PTR_1126c5c48);
    puVar2 = (undefined *)(param_1 + lVar6);
    _objc_loadWeakRetained(puVar2);
    func_0x00010c0d5ec0();
  }
  _objc_release(puVar2);
LAB_105ef7eec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef7fa4; end: 105ef8083; -[SCMapViewController _performOpenHomeProfileWithHomeFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef7fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11273a0e4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a018);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b140();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a0e0);
    lVar1 = (long)_DAT_11273a0e8;
    func_0x00010bf23220(uVar2,param_2,*(undefined8 *)(param_1 + lVar1),param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    lVar1 = (long)_DAT_11273a0e8;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + lVar1),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef8084; end: 105ef81a3; -[SCMapViewController _performOpenFocusViewForFriendId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef8084(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273a00c);
    func_0x000109021ae4();
    if (iVar1 == 0) {
      puVar2 = *(undefined **)(param_1 + _DAT_11273a140);
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
      func_0x00010beb92e0(param_1);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010be7b5e0(param_1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x00010c0fa7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      _objc_initWeak(auStack_a8,param_3);
      _objc_copyWeak(auStack_b0,auStack_a8);
      _objc_retain(puVar4);
      func_0x00010bdf74a0(param_3);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a8);
    }
  }
  _objc_release(puVar4);
  return;
}



/* Entry: 105ef81a4; end: 105ef82a3; -[SCMapViewController _performOpenFocusViewForPet:] */

void FUN_105ef81a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0fa7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010bdf74a0(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ef82a4; end: 105ef833b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef82a4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 == 0) || (lVar2 = param_2, func_0x00010bf1f3c0(), (int)lVar2 != 0)) {
      func_0x00010be7d3a0(param_1);
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273a00c);
      func_0x000109021ae4();
      if (iVar1 == 0) {
        func_0x00010be7b620(param_1);
      }
      else {
        func_0x00010be7b600(param_1);
      }
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ef833c; end: 105ef83fb; -[SCMapViewController _currentUserHasPetWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef833c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11273a0bc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    _objc_retain(param_3);
    func_0x00010bfa60e0(lVar1);
    _objc_release(param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105ef83fc; end: 105ef847f;  */

void FUN_105ef83fc(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef8480; end: 105ef85cb; -[SCMapViewController _presentPetsScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef8480(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11273a164;
  lVar7 = param_1 + lVar6;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar7 == 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    lVar7 = (long)_DAT_11273a1d8;
    if (*(long *)(param_1 + lVar7) != 0) goto LAB_105ef8514;
    puVar2 = PTR_PTR_1126c5970;
    _objc_alloc(PTR_PTR_1126c5970);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112739fdc);
    func_0x00010c15ffa0(uVar3);
    func_0x00010c058540(puVar2,param_2,puVar1,0,0x36,0x22,0xf,uVar3,5,param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273a0d4);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar7));
  }
  else {
    puVar1 = PTR_PTR_1126c5c50;
    _objc_alloc_init(PTR_PTR_1126c5c50);
    puVar2 = (undefined *)(param_1 + lVar6);
    _objc_loadWeakRetained(puVar2);
    func_0x00010c0d5ec0();
  }
  _objc_release(puVar2);
LAB_105ef8514:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef85cc; end: 105ef872b; -[SCMapViewController _performOpenSongToSoundTopicPageWithTrackID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef85cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11273a164;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126c5600;
    _objc_alloc(PTR_PTR_1126c5600);
    func_0x00010c054ca0();
    puVar4 = PTR_PTR_1126c5608;
    _objc_alloc(PTR_PTR_1126c5608);
    func_0x00010c01f360();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273a0b0);
    func_0x00010bf23440(uVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110daafd8,0x36,0
                        ,puVar2,0,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273a0ac),param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  else {
    puVar2 = PTR_PTR_1126c5c58;
    _objc_alloc(PTR_PTR_1126c5c58);
    func_0x00010c054b60();
    puVar3 = (undefined *)(param_1 + lVar6);
    _objc_loadWeakRetained(puVar3);
    func_0x00010c0d5ec0();
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105ef872c; end: 105ef886f; -[SCMapViewController _performAddSongToMusicProviderWithProviderTrackID:trackISRC:musicProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef872c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a0b4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(param_5);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c14b560(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ef8870; end: 105ef88bb;  */

void FUN_105ef8870(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    func_0x00010c067fc0(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be083e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ef88bc; end: 105ef89bf; -[SCMapViewController _emitSongAddedTriggerWithMusicProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef88bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2070;
  _objc_alloc_init(PTR_PTR_1126b2070);
  func_0x00010c20e860();
  puVar2 = PTR_PTR_1126b2078;
  _objc_alloc_init(PTR_PTR_1126b2078);
  func_0x00010c1b6b40();
  func_0x00010c21ad80(puVar2,param_2,puVar1);
  puVar3 = PTR_PTR_1126b2080;
  _objc_alloc_init(PTR_PTR_1126b2080);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182e60(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273a134);
  func_0x00010c1530a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e160();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ef89c0; end: 105ef8b47; -[SCMapViewController _performOpenNowPlayingSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef89c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273a164;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  _objc_release();
  puVar3 = PTR_PTR_1126b3e80;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aeae0;
    func_0x00010c2a4c00(PTR_PTR_1126aeae0,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27c3a0(puVar3,param_2,puVar2,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
    }
    else {
      puVar2 = PTR_PTR_1126aead0;
      _objc_alloc(PTR_PTR_1126aead0);
      lVar1 = param_1;
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02e4c0(puVar2,param_2,lVar1);
      _objc_release(lVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273a0c4);
    func_0x00010bf22f40(uVar4,param_2,param_1,puVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + _DAT_11273a0c0),param_2,uVar4,param_1);
    _objc_release(uVar4);
  }
  else {
    puVar3 = PTR_PTR_1126c5c60;
    _objc_alloc_init(PTR_PTR_1126c5c60);
    puVar2 = (undefined *)(param_1 + lVar5);
    _objc_loadWeakRetained(puVar2);
    func_0x00010c0d5ec0();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ef8b48; end: 105ef8c63; -[SCMapViewController _performRequestRealTimeLocationForFriendID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef8b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11273a164;
  lVar6 = param_1 + lVar5;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar6 == 0) {
    lVar6 = (long)_DAT_11273a1cc;
    if (*(long *)(param_1 + lVar6) != 0) goto LAB_105ef8bd8;
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar2 = PTR_PTR_1126c5c70;
    _objc_alloc(PTR_PTR_1126c5c70);
    func_0x00010c058360();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273a0cc);
    func_0x00010bf21f80(uVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar3;
    _objc_release(uVar4);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar6));
  }
  else {
    puVar1 = PTR_PTR_1126c5c68;
    _objc_alloc(PTR_PTR_1126c5c68);
    func_0x00010c05abc0();
    puVar2 = (undefined *)(param_1 + lVar5);
    _objc_loadWeakRetained(puVar2);
    func_0x00010c0d5ec0();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_105ef8bd8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ef8c64; end: 105ef8c8b; -[SCMapViewController didCompleteTopicViewerMusicScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef8c64(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + _DAT_11273a0ac));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105ef8c8c; end: 105ef8ca3; -[SCMapViewController trayScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef8c8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1d8);
  *(undefined8 *)(param_1 + _DAT_11273a1d8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ef8ca4; end: 105ef8d2b; -[SCMapViewController settingsScopeWantsDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef8ca4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273a0c0;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar3);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c076220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar4),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 105ef8d2c; end: 105ef8d6b; -[SCMapViewController settingsScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef8d2c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a0c0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c076220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 105ef8d6c; end: 105ef9b17; -[SCMapViewController _registerAppTriggersWithTriggerManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef8d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_330 [8];
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  uVar1 = *(ulong *)(param_1 + _DAT_11273a00c);
  func_0x000109021a1c();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126c5c78;
    _objc_opt_self(PTR_PTR_1126c5c78);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105ef9b18;
    puStack_90 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_88,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_88);
  }
  if (*(long *)(param_1 + _DAT_11273a0f4) == 0) {
    puVar5 = PTR_PTR_1126c5c80;
    _objc_opt_self(PTR_PTR_1126c5c80);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x105ef9bbc;
    puStack_b8 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5c88;
    _objc_opt_self(PTR_PTR_1126c5c88);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar2;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_105ef9c60;
    puStack_e0 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5c90;
    _objc_opt_self(PTR_PTR_1126c5c90);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar2;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x105ef9c8c;
    puStack_108 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_100,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5c98;
    _objc_opt_self(PTR_PTR_1126c5c98);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar2;
    uStack_140 = 0xc2000000;
    uStack_138 = 0x105ef9cb8;
    puStack_130 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_128,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5ca0;
    _objc_opt_self(PTR_PTR_1126c5ca0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar2;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_105ef9ce4;
    puStack_158 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_150,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5ca8;
    _objc_opt_self(PTR_PTR_1126c5ca8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar2;
    uStack_190 = 0xc2000000;
    uStack_188 = 0x105ef9d8c;
    puStack_180 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_178,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5cb0;
    _objc_opt_self(PTR_PTR_1126c5cb0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar2;
    uStack_1b8 = 0xc2000000;
    uStack_1b0 = 0x105ef9e30;
    puStack_1a8 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_1a0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5cb8;
    _objc_opt_self();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = puVar2;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_105ef9eb4;
    puStack_1d0 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_1c8,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5cc0;
    _objc_opt_self(PTR_PTR_1126c5cc0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_210 = puVar2;
    uStack_208 = 0xc2000000;
    uStack_200 = 0x105ef9ee0;
    puStack_1f8 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_1f0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5cc8;
    _objc_opt_self(PTR_PTR_1126c5cc8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_238 = puVar2;
    uStack_230 = 0xc2000000;
    pcStack_228 = FUN_105ef9f0c;
    puStack_220 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_218,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5cd8;
    _objc_opt_self(PTR_PTR_1126c5cd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_260 = puVar2;
    uStack_258 = 0xc2000000;
    pcStack_250 = FUN_105efa060;
    puStack_248 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_240,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5ce0;
    _objc_opt_self(PTR_PTR_1126c5ce0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_288 = puVar2;
    uStack_280 = 0xc2000000;
    pcStack_278 = FUN_105efa08c;
    puStack_270 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_268,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5ce8;
    _objc_opt_self();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b0 = puVar2;
    uStack_2a8 = 0xc2000000;
    pcStack_2a0 = FUN_105efa130;
    puStack_298 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_290,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5cf8;
    _objc_opt_self();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c27c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d8 = puVar2;
    uStack_2d0 = 0xc2000000;
    pcStack_2c8 = FUN_105efa208;
    puStack_2c0 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_2b8,auStack_80);
    uVar3 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5d00;
    _objc_opt_self();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_300 = puVar2;
    uStack_2f8 = 0xc2000000;
    pcStack_2f0 = FUN_105efa298;
    puStack_2e8 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_2e0,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c5d08;
    _objc_opt_self(PTR_PTR_1126c5d08);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c27c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_328 = puVar2;
    uStack_320 = 0xc2000000;
    pcStack_318 = FUN_105efa384;
    puStack_310 = &UNK_1108f31a8;
    _objc_copyWeak(auStack_308,auStack_80);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar5);
    puVar2 = PTR_PTR_1126c5d10;
    _objc_opt_self(PTR_PTR_1126c5d10);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c27c040(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_330,auStack_80);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_330);
    _objc_destroyWeak(auStack_308);
    _objc_destroyWeak(auStack_2e0);
    _objc_destroyWeak(auStack_2b8);
    _objc_destroyWeak(auStack_290);
    _objc_destroyWeak(auStack_268);
    _objc_destroyWeak(auStack_240);
    _objc_destroyWeak(auStack_218);
    _objc_destroyWeak(auStack_1f0);
    _objc_destroyWeak(auStack_1c8);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
  }
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 105ef9b18; end: 105ef9c5f;  */

void FUN_105ef9b18(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c5c78;
  _objc_opt_class(PTR_PTR_1126c5c78);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar3 = param_2;
    func_0x00010bfb8140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be71fa0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ef9c60; end: 105ef9ce3;  */

void FUN_105ef9c60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be716a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef9ce4; end: 105ef9eb3;  */

void FUN_105ef9ce4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c5ca0;
  _objc_opt_class(PTR_PTR_1126c5ca0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar3 = param_2;
    func_0x00010bfb8140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be720c0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ef9eb4; end: 105ef9f0b;  */

void FUN_105ef9eb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be728e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ef9f0c; end: 105efa05f;  */

void FUN_105ef9f0c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c5cc8;
  _objc_opt_class(PTR_PTR_1126c5cc8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    puVar4 = PTR_PTR_1126c5cd0;
    _objc_alloc(PTR_PTR_1126c5cd0);
    uVar3 = param_4;
    func_0x00010bfb8140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ea00(param_4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0b9aa0(param_4);
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0bad40(param_4);
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a940(param_1,param_2,puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(uVar3);
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    func_0x00010be72220();
    _objc_release(param_3);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105efa060; end: 105efa08b;  */

void FUN_105efa060(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efa08c; end: 105efa12f;  */

void FUN_105efa08c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c5ce0;
  _objc_opt_class(PTR_PTR_1126c5ce0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar3 = param_2;
    func_0x00010bfb8140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be721e0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105efa130; end: 105efa207;  */

void FUN_105efa130(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c5ce8;
  _objc_opt_class(PTR_PTR_1126c5ce8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126c5cf0;
    _objc_alloc(PTR_PTR_1126c5cf0);
    uVar3 = param_2;
    func_0x00010c0fa7a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(param_2);
    func_0x00010c0357a0(puVar2);
    _objc_release(uVar3);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be72200();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105efa208; end: 105efa297;  */

void FUN_105efa208(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c5cf8;
  _objc_opt_class(PTR_PTR_1126c5cf8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c277e40(param_2);
    func_0x00010be72260(param_1);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105efa298; end: 105efa383;  */

void FUN_105efa298(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c5d00;
  _objc_opt_class(PTR_PTR_1126c5d00);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar3 = param_2;
    func_0x00010c119be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c277e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010c0d3600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be71460(param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105efa384; end: 105efa3e7;  */

void FUN_105efa384(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c5d08;
  _objc_opt_class(PTR_PTR_1126c5d08);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((param_2 != 0) && ((uVar2 & 1) != 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be72240();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105efa3e8; end: 105efa48b;  */

void FUN_105efa3e8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c5d10;
  _objc_opt_class(PTR_PTR_1126c5d10);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar3 = param_2;
    func_0x00010bfb8140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be725a0(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105efa48c; end: 105efa4e3; -[SCMapViewController _shouldUpdateToDefaultBrowsingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105efa48c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11273a018);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5df80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 == 0;
}



/* Entry: 105efa4e4; end: 105efa513; -[SCMapViewController footerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efa4e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1dc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105efa514; end: 105efa5ff; -[SCMapViewController mapsStateComplianceTakeoverDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efa514(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a17c);
  *(undefined8 *)(param_1 + _DAT_11273a17c) = 0;
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273a020);
  func_0x00010c077460();
  if (iVar1 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba6c0();
  }
  else {
    puVar3 = PTR_PTR_1126b0ea8;
    _objc_alloc_init(PTR_PTR_1126b0ea8);
    puVar4 = PTR_PTR_1126b63b8;
    _objc_alloc_init(PTR_PTR_1126b63b8);
    func_0x00010c176040(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    param_1 = param_1 + _DAT_11273a108;
    _objc_loadWeakRetained(param_1);
    puVar4 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c020();
    _objc_release(puVar4);
    _objc_release(param_1);
    param_1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efa600; end: 105efa603;  */

void FUN_105efa600(void)

{
  return;
}



/* Entry: 105efa604; end: 105efa613; -[SCMapViewController _shouldBlockMapAccessForCompliance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efa604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273a00c),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f19a58,0,0);
  return;
}



/* Entry: 105efa614; end: 105efa8b7; -[SCMapViewController _presentFocusCardsWithInitialFriendIds:includeClusterFriends:source:sourceSessionId:reactions:reactionImages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efa614(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010be03940(param_1,param_2,2);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x1) {
    puVar2 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      func_0x00010be7a460(param_1,param_2,0,0x61,0,param_7,param_8);
      goto LAB_105efa87c;
    }
  }
  lVar8 = (long)_DAT_11273a164;
  lVar9 = param_1 + lVar8;
  _objc_loadWeakRetained();
  if (lVar9 == 0) {
LAB_105efa768:
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105efa8b8;
    puStack_70 = &UNK_110856a28;
    puVar2 = param_3;
    lStack_68 = param_1;
    func_0x00010bfaea20(param_3,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c5d20;
    _objc_alloc(PTR_PTR_1126c5d20);
    func_0x00010c0157c0();
    puVar4 = PTR_PTR_1126c5d28;
    _objc_alloc(PTR_PTR_1126c5d28);
    func_0x00010c01dbc0();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273a0a0);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11273a1b4;
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10c220();
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273a00c);
    func_0x000109021a7c();
    _objc_release(lVar9);
    if (iVar1 == 0) goto LAB_105efa768;
    puVar2 = PTR_PTR_1126c5d18;
    _objc_alloc(PTR_PTR_1126c5d18);
    func_0x00010c015600();
    param_1 = param_1 + lVar8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d5ec0();
    _objc_release(param_1);
  }
  _objc_release(puVar2);
LAB_105efa87c:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105efa8b8; end: 105efa8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105efa8b8(long param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a010));
  return (uint)param_2 ^ 1;
}



/* Entry: 105efa8e4; end: 105efa9e3; -[SCMapViewController _presentFocusCardsWithInitialPetId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efa8e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  func_0x00010be03940(param_1,param_2,2);
  puVar1 = PTR_PTR_1126c5d30;
  _objc_alloc(PTR_PTR_1126c5d30);
  func_0x00010c035760();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c5d28;
  _objc_alloc(PTR_PTR_1126c5d28);
  func_0x00010c01dbc0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273a0a0);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11273a1b4;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c220();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105efa9e4; end: 105efaa97; -[SCMapViewController mapFocusCardsPresenterDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efa9e4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273a1b4;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (lVar2 == param_3) {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
    lVar2 = param_1;
    func_0x00010beb6fe0();
    if ((int)lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11273a134);
      func_0x00010bf218e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18aea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 105efaa98; end: 105efaaaf; -[SCMapViewController shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efaa98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1d0);
  *(undefined8 *)(param_1 + _DAT_11273a1d0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105efaab0; end: 105efabbf; -[SCMapViewController _setPresentingUIContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efaab0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = (long)_DAT_11273a1e0;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a058);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1540();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105efabc0; end: 105efac37;  */

void FUN_105efabc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010be6ddc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,lVar2,0);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105efac38; end: 105efad37; -[SCMapViewController mapPlaceProfilePresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efac38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11273a1b8;
  lVar6 = *(long *)(param_1 + lVar7);
  if (lVar6 == 0) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar6 = param_1;
    func_0x00010be6ddc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar1,param_2,lVar6,1);
    _objc_release(lVar6);
    puVar2 = PTR_PTR_1126b1e70;
    _objc_alloc(PTR_PTR_1126b1e70);
    func_0x00010c00ae60();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273a128);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar6 = *(long *)(param_1 + lVar7);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}


