/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064a908c; end: 1064a9093;  */

void FUN_1064a908c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hideUntilDidAppearIfNeccessary_1125d6500);
  return;
}



/* Entry: 1064a9094; end: 1064a9187; -[SCContextOperaLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9094(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f1628;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010bdd03c0(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112748a40);
  puVar1 = PTR_PTR_1126b2ce8;
  func_0x00010c29c980(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar2);
  _objc_release(lVar3);
  _objc_release(puVar1);
  func_0x00010be51f80(param_1);
  func_0x00010be7f940(param_1);
  func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_112748b00));
  lVar3 = (long)_DAT_112748b5c;
  if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
    func_0x00010c15b5e0(param_1);
    *(undefined1 *)(param_1 + lVar3) = 1;
  }
  return;
}



/* Entry: 1064a9188; end: 1064a91db; -[SCContextOperaLayerViewController viewWillFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9188(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1628;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillFullyDisappear_112685470);
  func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_112748b00));
  return;
}



/* Entry: 1064a91dc; end: 1064a9283; -[SCContextOperaLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a91dc(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1628;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidFullyDisappear_112684ca8);
  *(undefined1 *)(param_1 + _DAT_112748b60) = 0;
  func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_112748b00));
  lVar1 = param_1;
  func_0x00010bf99b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(lVar1);
  func_0x00010bf6f2e0(*(undefined8 *)(param_1 + _DAT_112748afc));
  func_0x00010be51f60(param_1);
  return;
}



/* Entry: 1064a9284; end: 1064a9377; -[SCContextOperaLayerViewController _resendViewPropertiesUsingViewPropertiesSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9284(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf529e0();
  lVar1 = param_3;
  if (lVar4 != 0) {
    if (lRam00000001136c38b0 != -1) {
      func_0x00010002a2fc(0x1136c38b0,&PTR___NSConcreteGlobalBlock_110924ef0);
    }
    lVar4 = param_3;
    func_0x00010c0d3c80();
    func_0x00010c12d4a0();
    lVar1 = lVar4;
    func_0x00010c0d3c80();
    _objc_release(param_3);
    _objc_release(lVar4);
  }
  lVar4 = lVar1;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    lVar4 = (long)_DAT_112748b64;
    if (*(long *)(param_1 + lVar4) == 0) {
      lVar2 = lVar1;
      func_0x00010c0d3c80();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = lVar2;
      _objc_release(uVar3);
    }
    else {
      func_0x00010bef7f60();
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112748a88));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064a9378; end: 1064a94c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9378(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c9410;
  func_0x00010bfe4340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9410;
  puStack_78 = puVar2;
  func_0x00010c0c5840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9410;
  puStack_70 = puVar3;
  func_0x00010bf32180();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9410;
  puStack_68 = puVar4;
  func_0x00010c08ea20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9410;
  puStack_60 = puVar5;
  func_0x00010c2708c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9410;
  puStack_58 = puVar6;
  func_0x00010c270780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_78;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c38a8;
  puRam00000001136c38a8 = puVar8;
  _objc_release(uVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  func_0x00010bf795e0(*(undefined8 *)(puVar2 + _DAT_112748a3c),param_2,ppuVar12);
  func_0x00010be92120(puVar2,param_2,ppuVar12);
  lVar13 = (long)_DAT_112748b68;
  if ((puVar2[lVar13] & 1) == 0) {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010bfe4340(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar12;
    func_0x00010c0e00e0(ppuVar12,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar3);
    if (ppuVar9 != (undefined **)0x0) {
      puVar2[lVar13] = 1;
      func_0x00010be6da80(puVar2);
    }
  }
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010bf4ea80(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar12;
  func_0x00010c0e00e0(ppuVar12,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar10 = ppuVar9;
    func_0x00010bf1f3c0();
    if ((int)ppuVar10 == 0) {
      func_0x00010bf6f880(puVar2);
    }
    else {
      func_0x00010bf0c860(puVar2);
    }
  }
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010bf0a240(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar12;
  func_0x00010c0e00e0(ppuVar12,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (ppuVar10 != (undefined **)0x0) {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010bf0a240(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar12;
    func_0x00010c0e00e0(ppuVar12,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010bf1f3c0();
    puVar2[_DAT_112748b6c] = (char)ppuVar11;
    _objc_release(ppuVar10);
    _objc_release(puVar3);
    func_0x00010beda740(puVar2);
  }
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010bf0a260(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar12;
  func_0x00010c0e00e0(ppuVar12,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (ppuVar10 != (undefined **)0x0) {
    puVar3 = PTR_PTR_1126c9410;
    func_0x00010bf0a260(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar12;
    func_0x00010c0e00e0(ppuVar12,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010bf1f3c0();
    puVar2[_DAT_112748b70] = (char)ppuVar11;
    _objc_release(ppuVar10);
    _objc_release(puVar3);
    func_0x00010beda740(puVar2);
  }
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 1064a94c8; end: 1064a9703; -[SCContextOperaLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a94c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010bf795e0(*(undefined8 *)(param_1 + _DAT_112748a3c),param_2,param_3);
  func_0x00010be92120(param_1,param_2,param_3);
  lVar4 = (long)_DAT_112748b68;
  if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bfe4340(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + lVar4) = 1;
      func_0x00010be6da80(param_1);
    }
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf4ea80(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar4 != 0) {
    lVar2 = lVar4;
    func_0x00010bf1f3c0();
    if ((int)lVar2 == 0) {
      func_0x00010bf6f880(param_1);
    }
    else {
      func_0x00010bf0c860(param_1);
    }
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf0a240(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf0a240(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_112748b6c) = (char)lVar3;
    _objc_release(lVar2);
    _objc_release(puVar1);
    func_0x00010beda740(param_1);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf0a260(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf0a260(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_112748b70) = (char)lVar3;
    _objc_release(lVar2);
    _objc_release(puVar1);
    func_0x00010beda740(param_1);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064a9704; end: 1064a97a3; -[SCContextOperaLayerViewController attachSwipeGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9704(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_112748a34;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c25dfa0();
  if (lVar2 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c0ea460();
    if (iVar1 != 0) {
      func_0x00010bdd0520(param_1);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112748b34);
    param_1 = *(long *)(param_1 + _DAT_112748a74);
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112748b34);
    func_0x00010c265200(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf0c880(uVar4,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064a97a4; end: 1064a9843; -[SCContextOperaLayerViewController detatchSwipeGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a97a4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_112748a34;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c25dfa0();
  if (lVar2 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c0ea460();
    if (iVar1 != 0) {
      func_0x00010bdfb600(param_1);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112748b34);
    param_1 = *(long *)(param_1 + _DAT_112748a74);
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112748b34);
    func_0x00010c265200(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf6f8a0(uVar4,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064a9844; end: 1064a9863; -[SCContextOperaLayerViewController setPresenterWantsActionBarHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9844(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112748b74) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112748b74) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010beda750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLayerVisibility_112594378);
  return;
}



/* Entry: 1064a9864; end: 1064a9b0f; -[SCContextOperaLayerViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1064a9864(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_8);
  lVar7 = (long)_DAT_112748b24;
  if (*(long *)(param_3 + lVar7) != 1) {
    uVar1 = *(ulong *)(param_3 + _DAT_112748afc);
    func_0x00010c0770e0();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_3 + _DAT_112748a34);
      func_0x00010c0b82c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08c4c0();
      _objc_release(lVar2);
      if (lVar3 != 1) {
        puStack_78 = &uStack_80;
        uStack_80 = 0;
        uStack_68 = *(undefined8 *)(param_3 + lVar7);
        uStack_70 = 0x2020000000;
        uVar6 = 0xc2000000;
        _objc_retain(param_8);
        func_0x00010bf97f60(param_3);
        if (((param_6 == 0) && (param_7 == -1)) && (param_8 != 0)) {
          uVar4 = *(undefined8 *)(param_3 + _DAT_112748a2c);
          func_0x00010bf398e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x000108f42388();
          _objc_release(uVar4);
          if ((int)uVar5 == 0) goto LAB_1064a9acc;
          lVar7 = param_8;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 == 0) {
            lVar3 = param_3;
            func_0x00010c29bf00(param_3);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(lVar7);
            lVar3 = lVar7;
          }
          _objc_release(lVar7);
          func_0x00010c09ef00(param_8);
          lVar7 = param_3;
          func_0x00010c29bf00(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf51200(uVar6,param_2);
          _objc_release(lVar7);
          uVar1 = *(ulong *)(param_3 + _DAT_112748abc);
          func_0x00010c0f0be0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c115480(uVar6,param_2);
          _objc_release(param_3);
          _objc_release(lVar3);
          if ((uVar1 & 1) == 0) goto LAB_1064a9acc;
          uVar6 = 1;
        }
        else {
LAB_1064a9acc:
          uVar6 = puStack_78[3];
        }
        _objc_release(param_8);
        __Block_object_dispose(&uStack_80,8);
        goto LAB_1064a9910;
      }
    }
  }
  uVar6 = 1;
LAB_1064a9910:
  _objc_release(param_8);
  return uVar6;
}



/* Entry: 1064a9b10; end: 1064a9b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9b10(long param_1,long param_2,undefined1 *param_3)

{
  if ((*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748b78) == '\x01') &&
     (func_0x00010c0f24a0(param_2,param_2,*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                          *(undefined8 *)(param_1 + 0x28)), param_2 == 1)) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
    *param_3 = 1;
  }
  return;
}



/* Entry: 1064a9b78; end: 1064a9d1b; -[SCContextOperaLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9b78(ulong param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f1628;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_currentViewParameters_1125b5cb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar1 != (ulong *)0x0) {
    puVar2 = (undefined *)puVar1;
  }
  func_0x00010c0d3c80(puVar2);
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010bde83a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    uVar3 = param_1;
    func_0x00010bde83a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112748a94);
    func_0x00010c10fb00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dfa0(*(undefined8 *)(param_1 + (long)_DAT_112748a34));
    uVar4 = uVar3;
    func_0x00010bf4ea60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = uVar4;
    func_0x00010c243c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar3 = uVar4;
      func_0x00010c243c80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf51e00();
      puVar7 = PTR_PTR_1126b2e48;
      func_0x00010bf4f180(PTR_PTR_1126b2e48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064a9d1c; end: 1064a9dd7; -[SCContextOperaLayerViewController viewWillFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9d1c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1628;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillFullyAppear_112685468);
  lVar1 = param_1;
  func_0x00010bde83a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4e9a0();
  _objc_release(lVar1);
  lVar2 = (long)_DAT_112748b00;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c252440();
  if (lVar1 != 2) {
    func_0x00010c209fc0(*(undefined8 *)(param_1 + lVar2));
  }
  if ((*(byte *)(param_1 + _DAT_112748b5c) & 1) == 0) {
    func_0x00010c15b5e0(param_1);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + _DAT_112748b3c));
  }
  return;
}



/* Entry: 1064a9dd8; end: 1064a9deb; -[SCContextOperaLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9dd8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112748b54) = 1;
  return;
}



/* Entry: 1064a9dec; end: 1064a9e4f; -[SCContextOperaLayerViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9dec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1628;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidPartiallyAppearWithCurren_112684d08);
  func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_112748b00));
  func_0x00010bdd03c0(param_1);
  func_0x00010be7f940(param_1);
  return;
}



/* Entry: 1064a9e50; end: 1064a9ebf; -[SCContextOperaLayerViewController pageSafeAreaInsetsDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9e50(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1628;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_pageSafeAreaInsetsDidChange_11261a118);
  if (*(long *)(param_1 + _DAT_112748ad4) != 0) {
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1064a9ec0; end: 1064aab7f; -[SCContextOperaLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064a9ec0(undefined8 param_1,undefined8 ****param_2,undefined8 param_3,
                  undefined8 ****param_4,undefined8 ****param_5,undefined8 ****param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 ****ppppuVar12;
  undefined **unaff_x25;
  long lVar13;
  undefined8 ****unaff_x26;
  undefined8 ****unaff_x27;
  long lVar14;
  undefined **unaff_x28;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined **ppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfe1560(*(undefined8 *)((long)param_2 + (long)_DAT_112748ab8));
  puVar2 = PTR_PTR_1126ca2c0;
  func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
  _objc_retainAutoreleasedReturnValue();
  ppppuVar3 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppppuVar3 == 0) {
    ppppuVar5 = (undefined8 ****)PTR_PTR_1126b2638;
    func_0x00010bf75b40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = param_4;
    ppuVar11 = (undefined **)ppppuVar5;
    func_0x00010c0720c0();
    _objc_release(ppppuVar5);
    if ((int)ppppuVar3 != 0) {
      func_0x00010be6da40(param_2);
      *(undefined1 *)((long)param_2 + (long)_DAT_112748b68) = 0;
      goto LAB_1064aa188;
    }
    unaff_x28 = &PTR_PTR_1126b2000;
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c236be0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    ppppuVar7 = param_5;
    if ((int)ppppuVar3 == 0) {
      unaff_x25 = &PTR_PTR_1126b2000;
      ppppuVar5 = (undefined8 ****)PTR_PTR_1126b2ce8;
      func_0x00010c0e9720();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar3 = param_4;
      func_0x00010c0720c0();
      _objc_release(ppppuVar5);
      if ((int)ppppuVar3 == 0) {
        ppppuVar5 = (undefined8 ****)PTR_PTR_1126b2ce8;
        func_0x00010c23f4e0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar3 = param_4;
        func_0x00010c0720c0();
        _objc_release(ppppuVar5);
        if ((int)ppppuVar3 != 0) {
          ppuVar11 = (undefined **)param_5;
          ppppuVar12 = param_6;
          func_0x00010be72900(param_2);
          goto LAB_1064aa188;
        }
        puVar2 = PTR_PTR_1126b2ea8;
        func_0x00010bf883c0(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        ppppuVar3 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)ppppuVar3 == 0) {
          puVar2 = PTR_PTR_1126b2ea8;
          func_0x00010c2bf2c0(PTR_PTR_1126b2ea8);
          _objc_retainAutoreleasedReturnValue();
          ppppuVar3 = param_4;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)ppppuVar3 != 0) {
            puVar2 = PTR_PTR_1126b2e48;
            func_0x00010c2bf2e0(PTR_PTR_1126b2e48);
            _objc_retainAutoreleasedReturnValue();
            ppppuVar7 = param_6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            func_0x00010bf885a0(ppppuVar7);
            unaff_x25 = (undefined **)(long)_DAT_112748a90;
            *(undefined8 *)((long)param_2 + (long)unaff_x25) = param_1;
            ppppuVar5 = *(undefined8 *****)((long)param_2 + (long)_DAT_112748a34);
            func_0x00010c0b82c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = (undefined **)param_2;
            func_0x00010c08c4a0(*(undefined8 *)((long)param_2 + (long)unaff_x25));
            _objc_release(ppppuVar5);
            ppppuVar3 = ppppuVar7;
            goto LAB_1064a9f9c;
          }
          ppppuVar5 = (undefined8 ****)PTR_PTR_1126b2ce8;
          func_0x00010bfe15c0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar3 = param_4;
          func_0x00010c0720c0();
          _objc_release(ppppuVar5);
          if ((int)ppppuVar3 == 0) {
            ppppuVar5 = (undefined8 ****)PTR_PTR_1126b2ce8;
            func_0x00010c27fbe0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar3 = param_4;
            func_0x00010c0720c0();
            _objc_release(ppppuVar5);
            if ((int)ppppuVar3 == 0) {
              ppppuVar5 = (undefined8 ****)PTR_PTR_1126b2ce8;
              func_0x00010bfe2d60();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar3 = param_4;
              func_0x00010c0720c0();
              _objc_release(ppppuVar5);
              if ((int)ppppuVar3 == 0) {
                ppppuVar5 = (undefined8 ****)PTR_PTR_1126b2ce8;
                func_0x00010c27fc40();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar3 = param_4;
                func_0x00010c0720c0();
                _objc_release(ppppuVar5);
                if ((int)ppppuVar3 == 0) {
                  puVar2 = PTR_PTR_1126b2ce8;
                  func_0x00010c23a1e0(PTR_PTR_1126b2ce8);
                  _objc_retainAutoreleasedReturnValue();
                  ppppuVar5 = param_4;
                  func_0x00010c0720c0();
                  _objc_release(puVar2);
                  ppppuVar3 = (undefined8 ****)PTR_PTR_1126caf38;
                  if ((int)ppppuVar5 == 0) {
                    puVar2 = PTR_PTR_1126b2ce8;
                    func_0x00010bfe2880(PTR_PTR_1126b2ce8);
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar5 = param_4;
                    func_0x00010c0720c0();
                    _objc_release(puVar2);
                    ppppuVar3 = (undefined8 ****)PTR_PTR_1126caf38;
                    if ((int)ppppuVar5 == 0) {
                      puVar2 = PTR_PTR_1126b2ea8;
                      func_0x00010c268600(PTR_PTR_1126b2ea8);
                      _objc_retainAutoreleasedReturnValue();
                      ppppuVar3 = param_4;
                      func_0x00010c0720c0();
                      _objc_release(puVar2);
                      if ((int)ppppuVar3 == 0) {
                        unaff_x25 = &PTR_PTR_1126b2000;
                        puVar2 = PTR_PTR_1126b2330;
                        func_0x00010bf17f80(PTR_PTR_1126b2330);
                        _objc_retainAutoreleasedReturnValue();
                        ppppuVar3 = param_4;
                        func_0x00010c0720c0();
                        _objc_release(puVar2);
                        if ((int)ppppuVar3 == 0) {
                          puVar2 = PTR_PTR_1126b2330;
                          func_0x00010bf17ae0(PTR_PTR_1126b2330);
                          _objc_retainAutoreleasedReturnValue();
                          ppppuVar3 = param_4;
                          func_0x00010c0720c0();
                          _objc_release(puVar2);
                          if ((int)ppppuVar3 == 0) {
                            puVar2 = PTR_PTR_1126b2330;
                            func_0x00010bf2e260(PTR_PTR_1126b2330);
                            _objc_retainAutoreleasedReturnValue();
                            ppppuVar3 = param_4;
                            func_0x00010c0720c0();
                            _objc_release(puVar2);
                            if ((int)ppppuVar3 == 0) {
                              puVar2 = PTR_PTR_1126b2330;
                              func_0x00010bfaf7a0(PTR_PTR_1126b2330);
                              _objc_retainAutoreleasedReturnValue();
                              ppppuVar3 = param_4;
                              func_0x00010c0720c0();
                              _objc_release(puVar2);
                              if ((int)ppppuVar3 == 0) {
                                ppppuVar5 = (undefined8 ****)PTR_PTR_1126c9400;
                                func_0x00010c272ac0();
                                _objc_retainAutoreleasedReturnValue();
                                ppppuVar3 = param_4;
                                ppuVar11 = (undefined **)ppppuVar5;
                                func_0x00010c0720c0();
                                _objc_release(ppppuVar5);
                                if ((int)ppppuVar3 != 0) {
                                  ppppuVar3 = (undefined8 ****)PTR_PTR_1126c9408;
                                  func_0x00010c0fe400();
                                  _objc_retainAutoreleasedReturnValue();
                                  ppppuVar7 = param_6;
                                  ppuVar11 = (undefined **)ppppuVar3;
                                  func_0x00010c0e00e0();
                                  _objc_retainAutoreleasedReturnValue();
                                  _objc_release(ppppuVar3);
                                  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                                  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                                  ppppuVar3 = ppppuVar7;
                                  _objc_opt_isKindOfClass(ppppuVar7,puVar2);
                                  ppppuVar5 = ppppuVar7;
                                  if (((ulong)ppppuVar3 & 1) == 0) {
                                    ppppuVar5 = (undefined8 ****)0x0;
                                  }
                                  _objc_retain(ppppuVar5);
                                  _objc_release(ppppuVar7);
                                  ppppuVar3 = ppppuVar5;
                                  func_0x00010bf1f3c0();
                                  _objc_release(ppppuVar5);
                                  *(char *)((long)param_2 + (long)_DAT_112748a9c) = (char)ppppuVar3;
                                }
                                goto LAB_1064aa188;
                              }
                              func_0x00010be36bc0();
                              _objc_retainAutoreleasedReturnValue();
                              ppppuVar3 = param_2;
                              func_0x00010c0eaa40();
                              _objc_retainAutoreleasedReturnValue();
                              unaff_x25 = (undefined **)ppppuVar3;
                              ppuVar11 = (undefined **)ppppuVar7;
                              func_0x00010c0720c0();
                              _objc_release(ppppuVar3);
                              ppppuVar5 = ppppuVar7;
                              if ((int)unaff_x25 != 0) {
                                ppppuVar6 = *(undefined8 *****)
                                             ((long)param_2 + (long)_DAT_112748a34);
                                func_0x00010c0b82c0();
                                _objc_retainAutoreleasedReturnValue();
                                ppppuVar12 = (undefined8 ****)0x1;
                                goto LAB_1064aaab4;
                              }
                            }
                            else {
                              func_0x00010be36bc0();
                              _objc_retainAutoreleasedReturnValue();
                              ppppuVar3 = param_2;
                              func_0x00010c0eaa40();
                              _objc_retainAutoreleasedReturnValue();
                              unaff_x25 = (undefined **)ppppuVar3;
                              ppuVar11 = (undefined **)ppppuVar7;
                              func_0x00010c0720c0();
                              _objc_release(ppppuVar3);
                              ppppuVar5 = ppppuVar7;
                              if ((int)unaff_x25 != 0) {
                                ppppuVar6 = *(undefined8 *****)
                                             ((long)param_2 + (long)_DAT_112748a34);
                                func_0x00010c0b82c0();
                                _objc_retainAutoreleasedReturnValue();
                                ppppuVar12 = (undefined8 ****)0x0;
LAB_1064aaab4:
                                ppuVar11 = (undefined **)param_2;
                                func_0x00010c08c580();
                                ppppuVar3 = ppppuVar6;
                                goto LAB_1064aa980;
                              }
                            }
                          }
                          else {
                            func_0x00010be36bc0();
                            _objc_retainAutoreleasedReturnValue();
                            ppppuVar3 = param_2;
                            func_0x00010c0eaa40();
                            _objc_retainAutoreleasedReturnValue();
                            unaff_x25 = (undefined **)ppppuVar3;
                            ppuVar11 = (undefined **)ppppuVar7;
                            func_0x00010c0720c0();
                            _objc_release(ppppuVar3);
                            ppppuVar5 = ppppuVar7;
                            if ((int)unaff_x25 != 0) {
                              ppppuVar6 = *(undefined8 *****)((long)param_2 + (long)_DAT_112748a34);
                              func_0x00010c0b82c0();
                              _objc_retainAutoreleasedReturnValue();
                              ppppuVar12 = (undefined8 ****)0x0;
                              goto LAB_1064aa978;
                            }
                          }
                        }
                        else {
                          func_0x00010be36bc0();
                          _objc_retainAutoreleasedReturnValue();
                          ppppuVar3 = param_2;
                          func_0x00010c0eaa40();
                          _objc_retainAutoreleasedReturnValue();
                          unaff_x25 = (undefined **)ppppuVar3;
                          ppuVar11 = (undefined **)ppppuVar7;
                          func_0x00010c0720c0();
                          _objc_release(ppppuVar3);
                          ppppuVar5 = ppppuVar7;
                          if ((int)unaff_x25 != 0) {
                            ppppuVar6 = *(undefined8 *****)((long)param_2 + (long)_DAT_112748a34);
                            func_0x00010c0b82c0();
                            _objc_retainAutoreleasedReturnValue();
                            ppppuVar12 = (undefined8 ****)0x1;
LAB_1064aa978:
                            ppuVar11 = (undefined **)param_2;
                            func_0x00010c08c5c0();
                            ppppuVar3 = ppppuVar6;
                            goto LAB_1064aa980;
                          }
                        }
                      }
                      else {
                        ppppuVar3 = param_2;
                        func_0x00010c0f0be0();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x25 = (undefined **)ppppuVar3;
                        func_0x00010c118b40();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar11 = &PTR____CFConstantStringClassReference_110dcab38;
                        ppppuVar5 = (undefined8 ****)unaff_x25;
                        func_0x00010c0e00e0();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(unaff_x25);
                        _objc_release(ppppuVar3);
                        puVar2 = PTR_PTR_1126b2390;
                        _objc_opt_class(PTR_PTR_1126b2390);
                        ppppuVar3 = ppppuVar5;
                        _objc_opt_isKindOfClass(ppppuVar5,puVar2);
                        ppppuVar7 = ppppuVar5;
                        if (((ulong)ppppuVar3 & 1) == 0) {
                          ppppuVar7 = (undefined8 ****)0x0;
                        }
                        _objc_retain(ppppuVar7);
                        _objc_release(ppppuVar5);
                        ppppuVar3 = ppppuVar7;
                        if (ppppuVar7 != (undefined8 ****)0x0) {
                          unaff_x25 = (undefined **)param_2;
                          func_0x00010c0f0be0();
                          _objc_retainAutoreleasedReturnValue();
                          unaff_x26 = (undefined8 ****)unaff_x25;
                          func_0x00010c118b40();
                          _objc_retainAutoreleasedReturnValue();
                          ppppuVar6 = ppppuVar5;
                          func_0x00010c08bda0(ppppuVar5);
                          ppuVar11 = *(undefined ***)((long)param_2 + (long)_DAT_112748a2c);
                          unaff_x27 = unaff_x26;
                          FUN_1064a717c(unaff_x26,ppppuVar6);
                          _objc_release(unaff_x26);
                          _objc_release(unaff_x25);
                          if ((int)unaff_x27 != 0) {
                            func_0x00010c118dc0();
                            _objc_retainAutoreleasedReturnValue();
                            ppppuVar3 = (undefined8 ****)PTR_PTR_1126b2d20;
                            func_0x00010bf7a440();
                            _objc_retainAutoreleasedReturnValue();
                            puStack_70 = PTR____kCFBooleanTrue_11034ab68;
                            ppppuVar12 = &pppuStack_78;
                            unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
                            pppuStack_78 = ppppuVar3;
                            func_0x00010bf72080();
                            _objc_retainAutoreleasedReturnValue();
                            ppuVar11 = unaff_x25;
                            func_0x00010bf7e940(param_2);
                            _objc_release(unaff_x25);
                            _objc_release(ppppuVar3);
                            ppppuVar6 = param_2;
                            ppppuVar7 = ppppuVar5;
LAB_1064aa980:
                            _objc_release(ppppuVar6);
                            ppppuVar5 = ppppuVar7;
                          }
                        }
                      }
                      goto LAB_1064a9f9c;
                    }
                    ppppuVar5 = *(undefined8 *****)((long)param_2 + (long)_DAT_112748a8c);
                    func_0x00010c0f0be0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfe23a0();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar7 = param_2;
                  }
                  else {
                    ppppuVar5 = *(undefined8 *****)((long)param_2 + (long)_DAT_112748a8c);
                    func_0x00010c0f0be0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c238800();
                    _objc_retainAutoreleasedReturnValue();
                    ppppuVar7 = param_2;
                  }
                  ppuVar11 = (undefined **)ppppuVar3;
                  func_0x00010c0d9840(ppppuVar5);
                  _objc_release(ppppuVar3);
                  param_2 = ppppuVar7;
                  goto LAB_1064a9f9c;
                }
                ppuVar11 = (undefined **)0x1;
              }
              else {
                ppuVar11 = (undefined **)0x0;
              }
              func_0x00010bea9fa0(param_2);
              goto LAB_1064aa188;
            }
            ppuVar11 = (undefined **)0x1;
          }
          else {
            ppuVar11 = (undefined **)0x0;
          }
          func_0x00010bea18a0(param_2);
          goto LAB_1064aa188;
        }
        ppppuVar3 = param_2;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar7 = ppppuVar3;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = &PTR____CFConstantStringClassReference_110dcab38;
        unaff_x25 = (undefined **)ppppuVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar7);
        _objc_release(ppppuVar3);
        puVar2 = PTR_PTR_1126b2390;
        _objc_opt_class(PTR_PTR_1126b2390);
        ppppuVar3 = (undefined8 ****)unaff_x25;
        _objc_opt_isKindOfClass(unaff_x25,puVar2);
        ppppuVar7 = (undefined8 ****)unaff_x25;
        if (((ulong)ppppuVar3 & 1) == 0) {
          ppppuVar7 = (undefined8 ****)0x0;
        }
        _objc_retain(ppppuVar7);
        _objc_release(unaff_x25);
        ppppuVar3 = ppppuVar7;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar7);
        ppppuVar5 = ppppuVar3;
        func_0x00010c07c500();
        _objc_release(ppppuVar3);
        if ((int)ppppuVar5 == 0) goto LAB_1064aa188;
        ppppuVar12 = (undefined8 ****)0x8;
      }
      else {
        ppppuVar12 = (undefined8 ****)0x1;
      }
      ppuVar11 = (undefined **)param_5;
      func_0x00010be7e1c0(param_2);
      goto LAB_1064aa188;
    }
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = param_2;
    func_0x00010c0eaa40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = (undefined **)ppppuVar3;
    ppuVar11 = (undefined **)ppppuVar7;
    func_0x00010c0720c0();
    _objc_release(ppppuVar3);
    ppppuVar5 = ppppuVar7;
    if ((int)unaff_x25 == 0) goto LAB_1064a9f9c;
    puVar2 = PTR_PTR_1126b2cf0;
    func_0x00010bfb6480(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar12 = param_6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    ppppuVar5 = ppppuVar12;
    _objc_opt_isKindOfClass(ppppuVar12,puVar2);
    ppppuVar3 = ppppuVar12;
    if (((ulong)ppppuVar5 & 1) == 0) {
      ppppuVar3 = (undefined8 ****)0x0;
    }
    _objc_retain(ppppuVar3);
    _objc_release(ppppuVar12);
    puVar2 = PTR_PTR_1126b2ea8;
    func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar12 = ppppuVar3;
    func_0x00010c0720c0();
    pppuStack_80 = ppppuVar7;
    if ((int)ppppuVar12 == 0) {
      puVar4 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4e00(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar12 = ppppuVar3;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      _objc_release(puVar2);
      if (((ulong)ppppuVar12 & 1) != 0) goto LAB_1064aa210;
      puVar2 = PTR_PTR_1126b2ea8;
      func_0x00010c235940(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar12 = ppppuVar3;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      bVar1 = (int)ppppuVar12 == 0;
      uStack_88 = 0x10;
      if (bVar1) {
        uStack_88 = 0xffffffffffffffff;
      }
      unaff_x26 = (undefined8 ****)0x5;
      if (bVar1) {
        unaff_x26 = (undefined8 ****)0xffffffffffffffff;
      }
    }
    else {
      _objc_release(puVar2);
LAB_1064aa210:
      unaff_x26 = (undefined8 ****)0x4;
      uStack_88 = 3;
    }
    unaff_x27 = (undefined8 ****)PTR_PTR_1126b6038;
    _objc_alloc();
    lVar8 = (long)_DAT_112748a3c;
    unaff_x28 = *(undefined ***)((long)param_2 + lVar8);
    func_0x00010beeed40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4eae0();
    ppppuVar5 = *(undefined8 *****)((long)param_2 + lVar8);
    func_0x00010beeed40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4eb00();
    unaff_x25 = (undefined **)unaff_x27;
    func_0x00010bff0a60();
    _objc_release(ppppuVar5);
    _objc_release(unaff_x28);
    ppppuVar12 = (undefined8 ****)0x0;
    ppuVar11 = unaff_x25;
    func_0x00010c10b7e0(*(undefined8 *)((long)param_2 + (long)_DAT_112748b34));
    _objc_release(unaff_x25);
    _objc_release(ppppuVar3);
    ppppuVar7 = (undefined8 ****)pppuStack_80;
  }
  else {
    *(undefined1 *)((long)param_2 + (long)_DAT_112748b50) = 0;
    param_2 = *(undefined8 *****)((long)param_2 + (long)_DAT_112748a40);
    ppppuVar7 = (undefined8 ****)PTR_PTR_1126b2330;
    func_0x00010c283340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)ppppuVar7;
    func_0x00010c0eb780(param_2);
    ppppuVar5 = ppppuVar7;
  }
LAB_1064a9f9c:
  _objc_release(ppppuVar7);
LAB_1064aa188:
  _objc_release(param_6);
  _objc_release(param_5);
  ppppuVar7 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_98 = FUN_1064aab80;
    ppuStack_f0 = unaff_x28;
    pppuStack_e8 = unaff_x27;
    pppuStack_e0 = unaff_x26;
    pppuStack_d8 = (undefined8 ***)unaff_x25;
    pppuStack_d0 = ppppuVar3;
    pppuStack_c8 = ppppuVar5;
    pppuStack_c0 = param_2;
    pppuStack_b8 = param_6;
    pppuStack_b0 = param_5;
    pppuStack_a8 = param_4;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar11);
    _objc_retain(ppppuVar12);
    if ((undefined8 ****)ppuVar11 != (undefined8 ****)0x0) {
      ppppuVar3 = ppppuVar7;
      func_0x00010c0eaa40();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = (undefined8 ****)ppuVar11;
      func_0x00010be36bc0(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar6 = ppppuVar3;
      func_0x00010c0720c0();
      _objc_release(ppppuVar5);
      _objc_release(ppppuVar3);
      if ((int)ppppuVar6 != 0) {
        lVar13 = (long)_DAT_112748a3c;
        lVar8 = *(long *)((long)ppppuVar7 + lVar13);
        func_0x00010beeed40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 == 0) {
          func_0x00010bea02e0(ppppuVar7);
        }
        else {
          func_0x00010c1b2220(lVar8);
          puVar2 = PTR_PTR_1126b2cf0;
          func_0x00010c23f540(PTR_PTR_1126b2cf0);
          _objc_retainAutoreleasedReturnValue();
          ppppuVar5 = ppppuVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          ppppuVar6 = ppppuVar5;
          _objc_opt_isKindOfClass(ppppuVar5,puVar2);
          ppppuVar3 = ppppuVar5;
          if (((ulong)ppppuVar6 & 1) == 0) {
            ppppuVar3 = (undefined8 ****)0x0;
          }
          _objc_retain(ppppuVar3);
          _objc_release(ppppuVar5);
          func_0x00010c203a60(lVar8);
          _objc_release(ppppuVar3);
          puVar2 = PTR_PTR_1126b6038;
          _objc_alloc(PTR_PTR_1126b6038);
          func_0x00010bf4eae0(lVar8);
          func_0x00010bf4eb00(lVar8);
          func_0x00010bff0a60(puVar2);
          lVar9 = *(long *)((long)ppppuVar7 + lVar13);
          func_0x00010beee700();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          lVar9 = lVar13;
          func_0x00010bf54560();
          _objc_retainAutoreleasedReturnValue();
          if (lVar9 == 0) {
            func_0x00010bea02e0(ppppuVar7);
          }
          else {
            func_0x00010c18b5e0(lVar9);
            lVar14 = (long)_DAT_112748b7c;
            _objc_retain(lVar9);
            uVar10 = *(undefined8 *)((long)ppppuVar7 + lVar14);
            *(long *)((long)ppppuVar7 + lVar14) = lVar9;
            _objc_release(uVar10);
            _objc_initWeak(auStack_f8,ppppuVar7);
            uVar10 = *(undefined8 *)((long)ppppuVar7 + (long)_DAT_112748a40);
            puVar4 = PTR_PTR_1126b2ce8;
            func_0x00010c23f4a0(PTR_PTR_1126b2ce8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f0be0(ppppuVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0eb7a0(uVar10);
            _objc_release(ppppuVar7);
            _objc_release(puVar4);
            puVar4 = PTR_PTR_1126b5b00;
            func_0x00010c242c60(PTR_PTR_1126b5b00);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_100,auStack_f8);
            func_0x00010bfd0040(lVar9);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar4);
            _objc_destroyWeak(auStack_100);
            _objc_destroyWeak(auStack_f8);
          }
          _objc_release(lVar9);
          _objc_release(lVar13);
          _objc_release(puVar2);
        }
        _objc_release(lVar8);
      }
    }
    _objc_release(ppppuVar12);
    _objc_release(ppuVar11);
    return;
  }
  return;
}



/* Entry: 1064aab80; end: 1064aaee7; -[SCContextOperaLayerViewController _performSnapBackActionFromPage:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064aab80(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010c0eaa40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar9);
    _objc_release(lVar2);
    if ((int)lVar6 != 0) {
      lVar9 = (long)_DAT_112748a3c;
      lVar2 = *(long *)(param_1 + lVar9);
      func_0x00010beeed40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        func_0x00010bea02e0(param_1);
      }
      else {
        func_0x00010c1b2220(lVar2);
        puVar3 = PTR_PTR_1126b2cf0;
        func_0x00010c23f540(PTR_PTR_1126b2cf0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar5 = uVar4;
        _objc_opt_isKindOfClass(uVar4,puVar3);
        uVar1 = uVar4;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar4);
        func_0x00010c203a60(lVar2);
        _objc_release(uVar1);
        puVar3 = PTR_PTR_1126b6038;
        _objc_alloc(PTR_PTR_1126b6038);
        func_0x00010bf4eae0(lVar2);
        func_0x00010bf4eb00(lVar2);
        func_0x00010bff0a60(puVar3);
        lVar6 = *(long *)(param_1 + lVar9);
        func_0x00010beee700();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        lVar6 = lVar9;
        func_0x00010bf54560();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          func_0x00010bea02e0(param_1);
        }
        else {
          func_0x00010c18b5e0(lVar6);
          lVar10 = (long)_DAT_112748b7c;
          _objc_retain(lVar6);
          uVar7 = *(undefined8 *)(param_1 + lVar10);
          *(long *)(param_1 + lVar10) = lVar6;
          _objc_release(uVar7);
          _objc_initWeak(auStack_68,param_1);
          uVar7 = *(undefined8 *)(param_1 + _DAT_112748a40);
          puVar8 = PTR_PTR_1126b2ce8;
          func_0x00010c23f4a0(PTR_PTR_1126b2ce8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f0be0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0eb7a0(uVar7);
          _objc_release(param_1);
          _objc_release(puVar8);
          puVar8 = PTR_PTR_1126b5b00;
          func_0x00010c242c60(PTR_PTR_1126b5b00);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_70,auStack_68);
          func_0x00010bfd0040(lVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_destroyWeak(auStack_70);
          _objc_destroyWeak(auStack_68);
        }
        _objc_release(lVar6);
        _objc_release(lVar9);
        _objc_release(puVar3);
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1064aaee8; end: 1064aaf2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064aaee8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112748b7c);
    *(undefined8 *)(param_1 + _DAT_112748b7c) = 0;
    _objc_release(uVar1);
    func_0x00010bea02e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064aaf30; end: 1064aafa7; -[SCContextOperaLayerViewController _sendSnapBackActionEnded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064aaf30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112748a40);
  puVar1 = PTR_PTR_1126b2ce8;
  func_0x00010c23f4c0(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar2,param_2,puVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064aafa8; end: 1064ab0cf; -[SCContextOperaLayerViewController _presentReplyBarFromPage:withActionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064aafa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c0eaa40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c0720c0();
  _objc_release(lVar7);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126b6038;
    _objc_alloc(PTR_PTR_1126b6038);
    lVar7 = (long)_DAT_112748a3c;
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010beeed40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4eae0();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010beeed40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4eb00();
    func_0x00010bff0a60(puVar2,param_2,param_4,4,uVar4,uVar6,8);
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010c10b9a0(*(undefined8 *)(param_1 + _DAT_112748b34),param_2,puVar2,0,0,0,0,0);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064ab0d0; end: 1064ab137; -[SCContextOperaLayerViewController _operaDidStartScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab0d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112748b00;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c252440();
  if (lVar1 == 2) {
    func_0x00010c209fc0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112748a34);
  func_0x00010c0b82c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064ab138; end: 1064ab1bb; -[SCContextOperaLayerViewController _operaDidEndScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab138(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112748b00;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c252440();
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar1 == 1) {
    uVar3 = 2;
  }
  else {
    func_0x00010c252440();
    if (lVar2 == 2) goto LAB_1064ab188;
    lVar2 = *(long *)(param_1 + lVar4);
    uVar3 = 0;
  }
  func_0x00010c209fc0(lVar2,param_2,uVar3);
LAB_1064ab188:
  uVar3 = *(undefined8 *)(param_1 + _DAT_112748a34);
  func_0x00010c0b82c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1064ab1bc; end: 1064ab34b; -[SCContextOperaLayerViewController _shouldEnableVerticalActionsForSessionParams:isAd:launchSource:spotlightPresenterEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1064ab1bc(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
             ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar9 = 0;
  if (((param_4 & 1) == 0) && ((param_6 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25b720();
    uVar3 = param_3;
    func_0x00010c25a6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25b7c0();
    func_0x000107b2894c(uVar2,uVar4,*(undefined8 *)(param_1 + _DAT_112748b0c));
    if ((int)uVar2 == 0) {
      uVar9 = 0;
    }
    else {
      uVar2 = param_3;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c25b720();
      uVar5 = param_3;
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c25b7c0();
      if ((uVar4 - 9 < 3) ||
         ((uVar9 = 0, uVar6 < 0x2a && ((1L << (uVar6 & 0x3f) & 0x201dc700000U) != 0)))) {
        uVar7 = *(undefined8 *)(param_1 + _DAT_112748a2c);
        func_0x00010bf4e080(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c298e40();
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
      _objc_release(uVar5);
      _objc_release(uVar2);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 1064ab34c; end: 1064ab3c3; -[SCContextOperaLayerViewController _attachPanGestureToActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab34c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bdfb600();
  lVar1 = param_1;
  func_0x00010c265200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112748b34);
    func_0x00010c265200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c560(uVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1064ab3c4; end: 1064ab433; -[SCContextOperaLayerViewController _detachPanGestureFromActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab3c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c265200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112748b34);
    func_0x00010c265200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f200(uVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1064ab434; end: 1064ab47b; -[SCContextOperaLayerViewController _isContextMenuPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1064ab434(long param_1)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112748b34);
  func_0x00010c265180();
  if ((uVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + _DAT_112748b78);
  }
  else {
    bVar2 = 1;
  }
  return bVar2 & 1;
}



/* Entry: 1064ab47c; end: 1064ab497; -[SCContextOperaLayerViewController _trayIsHidingActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1064ab47c(long param_1)

{
  return *(double *)(param_1 + _DAT_112748aa0) != 1.0;
}



/* Entry: 1064ab498; end: 1064ab507; -[SCContextOperaLayerViewController updateLayerInteractiveVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab498(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + _DAT_112748aa0) = param_1;
  if (*(char *)(param_2 + _DAT_112748a98) == '\x01') {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112748a74);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2835a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1064ab508; end: 1064ab547; -[SCContextOperaLayerViewController _updateLayerVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab508(long param_1)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + _DAT_112748b70) & 1) == 0) &&
     ((*(byte *)(param_1 + _DAT_112748b6c) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + _DAT_112748b74) ^ 1;
  }
  else {
    bVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea5350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setLayerVisible__112586e78,bVar1 & 1);
  return;
}



/* Entry: 1064ab548; end: 1064ab58b; -[SCContextOperaLayerViewController _setActionBarVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab548(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748a74);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064ab58c; end: 1064ab5cf; -[SCContextOperaLayerViewController _setVerticalActionsVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab58c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112748b4c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064ab5d0; end: 1064ab61f; -[SCContextOperaLayerViewController pageDidChangeResizingState:] */

void FUN_1064ab5d0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1064ab620;
  puStack_20 = &UNK_110924f40;
  uStack_18 = param_3;
  func_0x00010bf97f60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1064ab620; end: 1064ab66b;  */

void FUN_1064ab620(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_pageDidChangeResizingState__112619df0);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0f0f60(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064ab66c; end: 1064ab817; -[SCContextOperaLayerViewController _setLayerVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab66c(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  *(char *)(param_1 + _DAT_112748a98) = (char)param_3;
  dVar6 = 0.0;
  dVar7 = 1.0;
  if (param_3 == 0) {
    dVar7 = 0.0;
  }
  uVar1 = *(ulong *)(param_1 + _DAT_112748b30);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca7c8;
  func_0x00010c0e8cc0(PTR_PTR_1126ca7c8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
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
  if (uVar1 != 0) {
    func_0x00010bfb2c80(uVar3);
    dVar7 = (double)SUB84(dVar6,0);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112748a74);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40();
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (dVar6 != dVar7) {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee900();
    func_0x00010bf03440(puVar2);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1064ab818; end: 1064ab8ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112748a74);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2835a0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1064ab8ac;
  puStack_30 = &UNK_110924f40;
  uStack_28 = *(undefined1 *)(param_1 + 0x30);
  func_0x00010bf97f60(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_48);
  return;
}



/* Entry: 1064ab8ac; end: 1064ab8c7;  */

void FUN_1064ab8ac(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c235890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_show__11266b048,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 1064ab8c8; end: 1064abca7; -[SCContextOperaLayerViewController _attachEventListeners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ab8c8(float param_1,long param_2)

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
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  long lVar28;
  long lVar29;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = param_2;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c236be0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4e00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2638;
  func_0x00010bf75b40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2ce8;
  func_0x00010c0e9720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2ce8;
  func_0x00010c23f4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2ce8;
  func_0x00010c23a1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2ce8;
  func_0x00010bfe2880();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2ce8;
  func_0x00010bfe15c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2ce8;
  func_0x00010c27fbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2ce8;
  func_0x00010bfe2d60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2ce8;
  func_0x00010c27fc40();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2ea8;
  func_0x00010c2bf2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2ea8;
  func_0x00010bf883c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126ca2c0;
  func_0x00010c0ebf60();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2ce8;
  func_0x00010c29c980();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b2ea8;
  func_0x00010c268600();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b2330;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b2330;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2330;
  func_0x00010bf2e260();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126b2330;
  func_0x00010bfaf7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126c9400;
  func_0x00010c272ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
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
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bef99a0(lVar29);
  _objc_release(puVar23);
  _objc_release(lVar29);
  lVar29 = *(long *)(param_2 + _DAT_112748afc);
  uVar24 = *(undefined8 *)(param_2 + _DAT_112748b30);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c720();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar24);
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar29 + _DAT_112748b60) = 1;
  ppuVar25 = *(undefined ***)(lVar29 + _DAT_112748b30);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ca7c8;
  func_0x00010c0e8cc0(PTR_PTR_1126ca7c8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar25;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(ppuVar25);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar27 = ppuVar26;
  _objc_opt_isKindOfClass(ppuVar26,puVar1);
  ppuVar25 = ppuVar26;
  if (((ulong)ppuVar27 & 1) == 0) {
    ppuVar25 = (undefined **)0x0;
  }
  _objc_retain(ppuVar25);
  _objc_release(ppuVar26);
  ppuVar26 = &PTR__OBJC_CLASS___NSConstantFloatNumber_1111863c0;
  if (ppuVar25 != (undefined **)0x0) {
    ppuVar26 = ppuVar25;
  }
  _objc_retain(ppuVar26);
  _objc_release(ppuVar25);
  func_0x00010bfb2c80(ppuVar26);
  _objc_release(ppuVar26);
  func_0x00010c287000((double)param_1,lVar29);
  *(undefined1 *)(lVar29 + _DAT_112748b58) = 1;
  return;
}



/* Entry: 1064abca8; end: 1064abdbf; -[SCContextOperaLayerViewController _presentersShouldAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064abca8(float param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  *(undefined1 *)(param_2 + _DAT_112748b60) = 1;
  ppuVar1 = *(undefined ***)(param_2 + _DAT_112748b30);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca7c8;
  func_0x00010c0e8cc0(PTR_PTR_1126ca7c8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar4 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar2);
  ppuVar1 = ppuVar3;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantFloatNumber_1111863c0;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar3 = ppuVar1;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar1);
  func_0x00010bfb2c80(ppuVar3);
  _objc_release(ppuVar3);
  func_0x00010c287000((double)param_1,param_2);
  *(undefined1 *)(param_2 + _DAT_112748b58) = 1;
  return;
}



/* Entry: 1064abdc0; end: 1064abeaf; -[SCContextOperaLayerViewController _logContextViewMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064abdc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_112748b80) != 0) {
    lVar3 = (long)_DAT_112748b34;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010bf4f0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bf4f0c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08bda0();
      func_0x0001064bcdf4();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bf4f0c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_1064bce14();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112748a6c);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a3ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 1064abeb0; end: 1064abf87; -[SCContextOperaLayerViewController _logContextViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064abeb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112748b34;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf4f0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_112748b80;
    if (*(long *)(param_1 + lVar1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bf4f0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c15ffa0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = uVar3;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_112748a6c);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4e660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1064abf88; end: 1064abf8f; -[SCContextOperaLayerViewController gestureRecognizer:shouldReceiveTouch:] */

undefined8 FUN_1064abf88(void)

{
  return 1;
}



/* Entry: 1064abf90; end: 1064abf97; -[SCContextOperaLayerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1064abf90(void)

{
  return 1;
}



/* Entry: 1064abf98; end: 1064abf9f; -[SCContextOperaLayerViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_1064abf98(void)

{
  return 0;
}



/* Entry: 1064abfa0; end: 1064ac09f; -[SCContextOperaLayerViewController actionBarContentViewForConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064abfa0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_112748b1c) == '\x01') {
    lVar3 = (long)_DAT_112748b44;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = (long)_DAT_112748a74;
    }
    else {
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                          *(undefined8 *)(param_1 + lVar3));
      lVar1 = (long)_DAT_112748a74;
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b8e0();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8c60();
    _objc_release(uVar2);
    func_0x00010c269d40(*(undefined8 *)(param_1 + lVar1));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064ac0a0; end: 1064ac42f; -[SCContextOperaLayerViewController sendAttachmentButtonStyleViewProperty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac0a0(double param_1,long param_2,undefined8 param_3,byte param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar10 = (long)_DAT_112748b30;
  uVar1 = *(ulong *)(param_2 + lVar10);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca7b8;
  func_0x00010c25e0e0(PTR_PTR_1126ca7b8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    uVar4 = *(ulong *)(param_2 + lVar10);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca7b8;
    func_0x00010c25e240(PTR_PTR_1126ca7b8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar4 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar3);
    func_0x00010bf885a0(uVar4);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    if (((param_4 ^ 0.0 < param_1) & 1) == 0) {
      puVar6 = PTR_PTR_1126ca7b8;
      func_0x00010c25e0e0(PTR_PTR_1126ca7b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      uVar7 = *(undefined8 *)(param_2 + lVar10);
      func_0x00010c118b40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ca7c8;
      func_0x00010c117d60(PTR_PTR_1126ca7c8);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0e00e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ca7c8;
      func_0x00010c117d60(PTR_PTR_1126ca7c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(puVar6);
      _objc_release(uVar7);
      uVar4 = *(ulong *)(param_2 + lVar10);
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ca7c8;
      func_0x00010bf80540(PTR_PTR_1126ca7c8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar6);
      uVar4 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010bf1f3c0();
      _objc_release(uVar4);
      if ((param_1 <= 0.0) || ((int)uVar3 != 0)) {
        func_0x00010c118dc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e940();
        _objc_release(param_2);
      }
      else {
        _objc_initWeak(auStack_78,param_2);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_1064ac430;
        puStack_90 = &UNK_110841fb0;
        _objc_copyWeak(auStack_80,auStack_78);
        puStack_88 = puVar2;
        func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_a8);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
      }
      _objc_release(puVar2);
    }
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1064ac430; end: 1064ac483;  */

void FUN_1064ac430(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064ac484; end: 1064ac49f; -[SCContextOperaLayerViewController presenterWillStartPresentation:shouldPerformMuteUpdate:shouldMute:shouldPause:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac484(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112748b78) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bea6190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setOperaUIPreparedForContentPre_112587208,1)
  ;
  return;
}



/* Entry: 1064ac4a0; end: 1064ac4e7; -[SCContextOperaLayerViewController presenterDidEndPresentation:shouldPerformMuteUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac4a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112748b78) = 0;
  lVar1 = param_1;
  func_0x00010be3f2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bea6190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setOperaUIPreparedForContentPre_112587208,lVar1,param_4,0,0,1);
  return;
}



/* Entry: 1064ac4e8; end: 1064ac4f7; -[SCContextOperaLayerViewController showContextLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac4e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2368f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748af8),PTR_s_showChrome_11266b460);
  return;
}



/* Entry: 1064ac4f8; end: 1064ac507; -[SCContextOperaLayerViewController hideContextLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112748af8),PTR_s_hideChrome_1125d60c8);
  return;
}



/* Entry: 1064ac508; end: 1064ac55b; -[SCContextOperaLayerViewController _actionNeedsUIUpdateForPresentation:] */

bool FUN_1064ac508(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  
  func_0x00010beeed20();
  if ((0x3c < param_3 - 0x10U) ||
     (bVar1 = false, (1L << ((ulong)(param_3 - 0x10U) & 0x3f) & 0x1000800000000005U) == 0)) {
    bVar1 = param_3 != 0x55;
  }
  return bVar1;
}



/* Entry: 1064ac55c; end: 1064ac62b; -[SCContextOperaLayerViewController actionHandler:willStartAction:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac55c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bdc4640(param_1,param_2,param_4);
  if ((int)lVar1 != 0) {
    func_0x00010bfe1560(*(undefined8 *)(param_1 + _DAT_112748ab8));
    func_0x00010be78460(param_1,param_2,param_3,param_4,param_5);
    lVar1 = param_4;
    func_0x00010beeed20();
    if ((int)lVar1 == 2) {
      lVar1 = param_4;
      func_0x00010bdc2be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010be59fe0(param_1,param_2,param_4);
      }
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064ac62c; end: 1064ac73b; -[SCContextOperaLayerViewController _prepareForPresentationWithActionHandler:willStartAction:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac62c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f3c0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((int)lVar5 == 0) {
    bVar1 = false;
  }
  else {
    uVar6 = param_4;
    func_0x00010beeed20(param_4);
    bVar1 = (int)uVar6 == 0x29;
  }
  uVar6 = param_4;
  func_0x00010beeed20(param_4);
  *(undefined1 *)(param_1 + _DAT_112748b78) = 1;
  uVar7 = param_4;
  func_0x00010beeed20();
  *(bool *)(param_1 + _DAT_112748b84) = (int)uVar7 == 0x29;
  func_0x00010bea6180(param_1,param_2,1,1,(int)uVar6 != 0x29,bVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064ac73c; end: 1064ac787; -[SCContextOperaLayerViewController actionHandler:didEndAction:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac73c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdc4640(param_1,param_2,param_4);
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112748b84) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c10fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_presenterDidEndPresentation_shou_1126218d0,0,1);
    return;
  }
  return;
}



/* Entry: 1064ac788; end: 1064ac983; -[SCContextOperaLayerViewController _logURLTapWitAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac788(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112748a2c);
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x000108f42374();
  _objc_release(uVar1);
  if ((int)uVar7 != 0) {
    uVar2 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar2 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar7 = param_3;
    func_0x00010bdc2be0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c28fbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112748a6c);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25a6e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25b1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c25a6e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar8;
    func_0x00010c241220(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3f00(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064ac984; end: 1064ac98b; -[SCContextOperaLayerViewController isRecyclable] */

undefined8 FUN_1064ac984(void)

{
  return 0;
}



/* Entry: 1064ac98c; end: 1064aca0f; -[SCContextOperaLayerViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064ac98c(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + _DAT_112748b80) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112748a6c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4e640();
    _objc_release(uVar1);
  }
  puStack_38 = PTR_PTR_1126f1628;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1064aca10; end: 1064aca17; -[SCContextOperaLayerViewController isLegacyContextOperaRootCaptureWorkflowPresentingViewController] */

undefined8 FUN_1064aca10(void)

{
  return 1;
}



/* Entry: 1064aca18; end: 1064aca67; -[SCContextOperaLayerViewController appearanceStateMachine:didMoveToState:fromState:] */

void FUN_1064aca18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1064aca68;
  puStack_20 = &UNK_110924f60;
  uStack_18 = param_4;
  func_0x00010bf97f60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 1064aca68; end: 1064acae7;  */

void FUN_1064aca68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      func_0x00010bf74a00(param_2);
    }
    else if (lVar1 == 1) {
      func_0x00010c10a0e0(param_2);
    }
  }
  else if (lVar1 == 2) {
    func_0x00010bf72460(param_2);
  }
  else if (lVar1 == 3) {
    func_0x00010c10a0a0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064acae8; end: 1064acbff; -[SCContextOperaLayerViewController _logActionWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064acae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112748a3c;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(param_3);
  func_0x00010beeed40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6038;
  _objc_alloc(PTR_PTR_1126b6038);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010beeed40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4eae0();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010beeed40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4eb00();
  func_0x00010bff0a60(puVar1,param_2,2,6,uVar3,uVar5,0xffffffffffffffff);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar3 = uVar6;
  func_0x00010c0b3760(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0480();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1064acc00; end: 1064acc0f; -[SCContextOperaLayerViewController pageable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1064acc00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112748a28);
}



/* Entry: 1064acc10; end: 1064acc1f; -[SCContextOperaLayerViewController accessoryViewPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1064acc10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112748b28);
}



/* Entry: 1064acc20; end: 1064acc2f; -[SCContextOperaLayerViewController setAccessoryViewPresented:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064acc20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112748b28) = param_3;
  return;
}



/* Entry: 1064acc30; end: 1064acc4f; -[SCContextOperaLayerViewController swipeUpGestureView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064acc30(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112748b88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064acc50; end: 1064acc63; -[SCContextOperaLayerViewController setSwipeUpGestureView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064acc50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112748b88,param_3);
  return;
}



/* Entry: 1064acc64; end: 1064acc73; -[SCContextOperaLayerViewController presenterWantsActionBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1064acc64(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112748b74);
}



/* Entry: 1064acc74; end: 1064acc83; -[SCContextOperaLayerViewController shouldHideActionTrayWhenNotCurrentPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1064acc74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112748b04);
}



/* Entry: 1064acc84; end: 1064acc93; -[SCContextOperaLayerViewController setShouldHideActionTrayWhenNotCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064acc84(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112748b04) = param_3;
  return;
}



/* Entry: 1064acc94; end: 1064acca3; -[SCContextOperaLayerViewController ctaHostView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064acc94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748a74);
}



/* Entry: 1064acca4; end: 1064accb3; -[SCContextOperaLayerViewController headerContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064acca4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748b48);
}



/* Entry: 1064accb4; end: 1064accc3; -[SCContextOperaLayerViewController verticalActionsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064accb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748b4c);
}



/* Entry: 1064accc4; end: 1064accd3; -[SCContextOperaLayerViewController fullPageLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064accc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748acc);
}



/* Entry: 1064accd4; end: 1064acce3; -[SCContextOperaLayerViewController ctaHostViewPageLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064accd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748ad0);
}



/* Entry: 1064acce4; end: 1064accf3; -[SCContextOperaLayerViewController safeAreaPageLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064acce4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748adc);
}



/* Entry: 1064accf4; end: 1064acd03; -[SCContextOperaLayerViewController topLevelCardsLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064accf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748ae4);
}



/* Entry: 1064acd04; end: 1064acd13; -[SCContextOperaLayerViewController repostedStoryViewLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064acd04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748ae8);
}



/* Entry: 1064acd14; end: 1064acd23; -[SCContextOperaLayerViewController watchSpotlightActionLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064acd14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748aec);
}



/* Entry: 1064acd24; end: 1064acd33; -[SCContextOperaLayerViewController aboveActionBarAccessoryLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064acd24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748af0);
}



/* Entry: 1064acd34; end: 1064acd43; -[SCContextOperaLayerViewController aboveActionBarFullPageLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1064acd34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112748af4);
}



/* Entry: 1064acd44; end: 1064acd53; -[SCContextOperaLayerViewController isShowingInterstitialView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1064acd44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112748b50);
}



/* Entry: 1064acd54; end: 1064ad18f; -[SCContextOperaLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064acd54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112748af4,0);
  _objc_storeStrong(param_1 + _DAT_112748af0,0);
  _objc_storeStrong(param_1 + _DAT_112748aec,0);
  _objc_storeStrong(param_1 + _DAT_112748ae8,0);
  _objc_storeStrong(param_1 + _DAT_112748ae4,0);
  _objc_storeStrong(param_1 + _DAT_112748adc,0);
  _objc_storeStrong(param_1 + _DAT_112748ad0,0);
  _objc_storeStrong(param_1 + _DAT_112748acc,0);
  _objc_storeStrong(param_1 + _DAT_112748b4c,0);
  _objc_storeStrong(param_1 + _DAT_112748b48,0);
  _objc_storeStrong(param_1 + _DAT_112748a74,0);
  _objc_destroyWeak(param_1 + _DAT_112748b88);
  _objc_storeStrong(param_1 + _DAT_112748aac,0);
  _objc_storeStrong(param_1 + _DAT_112748abc,0);
  _objc_storeStrong(param_1 + _DAT_112748ab8,0);
  _objc_storeStrong(param_1 + _DAT_112748aa8,0);
  _objc_storeStrong(param_1 + _DAT_112748ab0,0);
  _objc_storeStrong(param_1 + _DAT_112748a80,0);
  _objc_storeStrong(param_1 + _DAT_112748a7c,0);
  _objc_storeStrong(param_1 + _DAT_112748a94,0);
  _objc_storeStrong(param_1 + _DAT_112748b8c,0);
  _objc_storeStrong(param_1 + _DAT_112748b90,0);
  _objc_storeStrong(param_1 + _DAT_112748a70,0);
  _objc_storeStrong(param_1 + _DAT_112748a78,0);
  _objc_storeStrong(param_1 + _DAT_112748b80,0);
  _objc_storeStrong(param_1 + _DAT_112748a6c,0);
  _objc_storeStrong(param_1 + _DAT_112748a8c,0);
  _objc_storeStrong(param_1 + _DAT_112748b64,0);
  _objc_storeStrong(param_1 + _DAT_112748a88,0);
  _objc_storeStrong(param_1 + _DAT_112748a84,0);
  _objc_storeStrong(param_1 + _DAT_112748b30,0);
  _objc_storeStrong(param_1 + _DAT_112748a30,0);
  _objc_storeStrong(param_1 + _DAT_112748a2c,0);
  _objc_storeStrong(param_1 + _DAT_112748af8,0);
  _objc_storeStrong(param_1 + _DAT_112748afc,0);
  _objc_storeStrong(param_1 + _DAT_112748ad4,0);
  _objc_storeStrong(param_1 + _DAT_112748ad8,0);
  _objc_storeStrong(param_1 + _DAT_112748ac8,0);
  _objc_storeStrong(param_1 + _DAT_112748ac4,0);
  _objc_storeStrong(param_1 + _DAT_112748ac0,0);
  _objc_storeStrong(param_1 + _DAT_112748a68,0);
  _objc_storeStrong(param_1 + _DAT_112748a64,0);
  _objc_storeStrong(param_1 + _DAT_112748a60,0);
  _objc_storeStrong(param_1 + _DAT_112748a5c,0);
  _objc_storeStrong(param_1 + _DAT_112748a58,0);
  _objc_storeStrong(param_1 + _DAT_112748a54,0);
  _objc_storeStrong(param_1 + _DAT_112748a50,0);
  _objc_storeStrong(param_1 + _DAT_112748a4c,0);
  _objc_storeStrong(param_1 + _DAT_112748a48,0);
  _objc_storeStrong(param_1 + _DAT_112748a44,0);
  _objc_storeStrong(param_1 + _DAT_112748a40,0);
  _objc_storeStrong(param_1 + _DAT_112748a34,0);
  _objc_storeStrong(param_1 + _DAT_112748b00,0);
  _objc_storeStrong(param_1 + _DAT_112748b44,0);
  _objc_storeStrong(param_1 + _DAT_112748b18,0);
  _objc_storeStrong(param_1 + _DAT_112748b3c,0);
  _objc_storeStrong(param_1 + _DAT_112748b40,0);
  _objc_storeStrong(param_1 + _DAT_112748b38,0);
  _objc_storeStrong(param_1 + _DAT_112748aa4,0);
  _objc_storeStrong(param_1 + _DAT_112748b08,0);
  _objc_storeStrong(param_1 + _DAT_112748b7c,0);
  _objc_storeStrong(param_1 + _DAT_112748ab4,0);
  _objc_storeStrong(param_1 + _DAT_112748a38,0);
  _objc_storeStrong(param_1 + _DAT_112748a3c,0);
  _objc_storeStrong(param_1 + _DAT_112748b34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112748b2c,0);
  return;
}



/* Entry: 1064ad190; end: 1064ad23f; -[SCContextOperaNavigation initWithConfiguration:experimentsProvider:] */

undefined1 *
FUN_1064ad190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1630;
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
    uVar2 = param_3;
    func_0x00010c298f40();
    *(char *)((long)puVar1 + 0x28) = (char)uVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064ad240; end: 1064ad36f; -[SCContextOperaNavigation configureWithPage:layerViewController:] */

void FUN_1064ad240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(param_4);
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
    lVar5 = *(long *)(param_1 + 8);
    _objc_retain(param_4);
    func_0x00010c0d6c60();
    if (lVar5 == 1) {
      uVar4 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126caf48;
      if ((int)uVar1 != 0) {
        puVar2 = PTR_PTR_1126caf40;
      }
      _objc_opt_new();
    }
    else {
      puVar2 = PTR_PTR_1126caf50;
      _objc_alloc_init();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = 1;
  }
  func_0x00010c28cb20(uVar4,param_2,param_3,param_4,uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064ad370; end: 1064ad377; -[SCContextOperaNavigation operaDrivenVerticalNavigationCanSwipeLeft] */

undefined1 FUN_1064ad370(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 1064ad378; end: 1064ad39f; -[SCContextOperaNavigation manager] */

void FUN_1064ad378(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064ad3a0; end: 1064ad3a7; -[SCContextOperaNavigation style] */

void FUN_1064ad3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d6c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_navigationStyle_112613530);
  return;
}



/* Entry: 1064ad3a8; end: 1064ad3e3; -[SCContextOperaNavigation .cxx_destruct] */

void FUN_1064ad3a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064ad3e4; end: 1064ad507; -[SCContextOperaPlaylistPlugin initWithCircumstanceEngine:uccExperiments:contextExperimentService:storiesConfigProvider:memoriesConfiguration:] */

undefined1 *
FUN_1064ad3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1638;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064ad508; end: 1064ad513; -[SCContextOperaPlaylistPlugin setPlaylistItemController:] */

void FUN_1064ad508(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 1064ad514; end: 1064ad66b; -[SCContextOperaPlaylistPlugin registeredEventsForOperaSession] */

void FUN_1064ad514(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined *in_x4;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined *unaff_x26;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  ppuVar11 = &puStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2ce8;
  func_0x00010bf7c620();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b2ce8;
  puStack_90 = puVar2;
  func_0x00010bf7d220();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2ce8;
  puStack_88 = puVar16;
  func_0x00010bf7d520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2ce8;
  puStack_80 = puVar3;
  func_0x00010c2a68c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = (undefined **)PTR_PTR_1126b2ce8;
  puStack_78 = puVar4;
  func_0x00010bf750a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  ppuStack_70 = ppuVar14;
  func_0x00010c29f080();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e50dd8;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(ppuVar14);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_98 = FUN_1064ad66c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar11);
  _objc_retain(in_x4);
  puVar16 = PTR_PTR_1126b2330;
  func_0x00010c29f080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)ppuVar11;
  func_0x00010c0720c0();
  _objc_release(puVar16);
  if ((int)puVar3 != 0) {
    if ((puVar2[0x58] & 1) != 0) goto LAB_1064adadc;
    puVar2[0x58] = 1;
LAB_1064ad6fc:
    func_0x00010be8a7e0(puVar2);
    goto LAB_1064adadc;
  }
  ppuVar14 = &PTR_PTR_1126b2000;
  puVar16 = PTR_PTR_1126b2ce8;
  func_0x00010bf7c620(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)ppuVar11;
  func_0x00010c0720c0();
  _objc_release(puVar16);
  if ((int)puVar3 == 0) {
    puVar16 = PTR_PTR_1126b2ce8;
    func_0x00010bf7d220(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)ppuVar11;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)puVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar16 = PTR_PTR_1126b6168;
      func_0x00010c269180(PTR_PTR_1126b6168);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
      puVar6 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar16);
      puVar3 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar16 = PTR_PTR_1126b6168;
        func_0x00010c269180(PTR_PTR_1126b6168);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar16);
      }
      puVar16 = puVar2 + 0x18;
      _objc_loadWeakRetained(puVar16);
      puVar6 = PTR_PTR_1126b6160;
      func_0x00010c1169e0(PTR_PTR_1126b6160);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2 + 0x10;
      _objc_loadWeakRetained(puVar5);
      puVar7 = puVar5;
      func_0x00010c0f1b80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf5f780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(puVar16);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar16);
      puVar2 = puVar2 + 0x18;
      _objc_loadWeakRetained();
      ppuVar14 = (undefined **)PTR_PTR_1126b2638;
      func_0x00010c288220();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b6008;
      func_0x00010c0ea660();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_110 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6058;
      puStack_118 = puVar5;
      goto LAB_1064ada88;
    }
    puVar16 = (undefined *)ppuVar11;
    func_0x00010c0720c0();
    if ((int)puVar16 != 0) {
      puVar16 = PTR_PTR_1126b5bf0;
      func_0x00010c0ebe20(PTR_PTR_1126b5bf0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar16);
      puVar16 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar16 = (undefined *)0x0;
      }
      _objc_retain(puVar16);
      _objc_release(puVar3);
      uVar13 = *(undefined8 *)(puVar2 + 0x50);
      *(undefined **)(puVar2 + 0x50) = puVar16;
      _objc_release(uVar13);
      goto LAB_1064ad6fc;
    }
    puVar16 = PTR_PTR_1126b2ce8;
    func_0x00010bf7d520(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)ppuVar11;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)puVar3 != 0) {
      puVar16 = puVar2 + 0x18;
      _objc_loadWeakRetained(puVar16);
      puVar4 = PTR_PTR_1126b6160;
      func_0x00010c261120(PTR_PTR_1126b6160);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2 + 0x10;
      _objc_loadWeakRetained();
      puVar5 = puVar3;
      func_0x00010c0f1b80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = puVar5;
      func_0x00010bf5f780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(puVar16);
      _objc_release(unaff_x26);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar16);
      puVar4 = puVar2 + 0x18;
      _objc_loadWeakRetained();
      puVar16 = PTR_PTR_1126b2638;
      func_0x00010c288220();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b6008;
      func_0x00010c0ea660();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_120 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6058;
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_128 = puVar3;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7e0(puVar4);
      _objc_release(ppuVar14);
      _objc_release(puVar3);
      _objc_release(puVar16);
      puVar2 = puVar4;
      goto LAB_1064adad8;
    }
    puVar16 = PTR_PTR_1126b2ce8;
    func_0x00010c2a68c0(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined *)ppuVar11;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)puVar3 == 0) {
      puVar16 = PTR_PTR_1126b2ce8;
      func_0x00010bf750a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = (undefined *)ppuVar11;
      func_0x00010c0720c0();
      _objc_release(puVar16);
      if ((int)puVar3 != 0) {
        puVar16 = puVar2 + 0x60;
        _objc_loadWeakRetained();
        puVar3 = puVar16;
        _objc_opt_respondsToSelector();
        _objc_release(puVar16);
        if (((ulong)puVar3 & 1) != 0) {
          puVar4 = puVar2 + 0x60;
          _objc_loadWeakRetained();
          func_0x00010bf4ec40();
          puVar16 = puVar4;
          goto LAB_1064adad8;
        }
      }
    }
    else {
      puVar16 = puVar2 + 0x60;
      _objc_loadWeakRetained();
      puVar3 = puVar16;
      _objc_opt_respondsToSelector();
      _objc_release(puVar16);
      if (((ulong)puVar3 & 1) != 0) {
        puVar4 = puVar2 + 0x60;
        _objc_loadWeakRetained();
        func_0x00010bf4ec60();
        puVar16 = puVar4;
        goto LAB_1064adad8;
      }
    }
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar16 = PTR_PTR_1126b6168;
    func_0x00010c269180(PTR_PTR_1126b6168);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    puVar6 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar16);
    puVar3 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar5);
    if (puVar3 != (undefined *)0x0) {
      puVar16 = PTR_PTR_1126b6168;
      func_0x00010c269180(PTR_PTR_1126b6168);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar16);
    }
    puVar16 = puVar2 + 0x18;
    _objc_loadWeakRetained(puVar16);
    puVar6 = PTR_PTR_1126b6160;
    func_0x00010c277180(PTR_PTR_1126b6160);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2 + 0x10;
    _objc_loadWeakRetained(puVar5);
    puVar7 = puVar5;
    func_0x00010c0f1b80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf5f780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(puVar16);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar16);
    puVar2 = puVar2 + 0x18;
    _objc_loadWeakRetained();
    ppuVar14 = (undefined **)PTR_PTR_1126b2638;
    func_0x00010c288220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b6008;
    func_0x00010c0ea660();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_100 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6058;
    puStack_108 = puVar5;
LAB_1064ada88:
    unaff_x26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7e0(puVar2);
    _objc_release(unaff_x26);
    _objc_release(puVar5);
    _objc_release(ppuVar14);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar16 = puVar4;
LAB_1064adad8:
    _objc_release(puVar4);
  }
LAB_1064adadc:
  _objc_release(in_x4);
  puVar4 = (undefined *)ppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_250;
  pcStack_138 = FUN_1064adde8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar4 + 0x48;
  puStack_180 = unaff_x26;
  puStack_178 = puVar5;
  ppuStack_170 = ppuVar14;
  puStack_168 = puVar3;
  puStack_160 = puVar16;
  puStack_158 = puVar2;
  puStack_150 = in_x4;
  puStack_148 = (undefined *)ppuVar11;
  ppuStack_140 = &puStack_a0;
  _objc_loadWeakRetained();
  puVar2 = puVar6;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar16;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar2);
  _objc_release(puVar6);
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar15 = *plStack_240;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_240 != lVar15) {
          _objc_enumerationMutation(puVar3);
        }
        uVar13 = *(undefined8 *)(lStack_248 + (long)puVar16 * 8);
        puVar5 = puVar4 + 0x48;
        _objc_loadWeakRetained();
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c101400(puVar5);
        _objc_release(uVar13);
        _objc_release(puVar5);
        puVar16 = puVar16 + 1;
      } while (puVar2 != puVar16);
      puVar2 = puVar3;
      puVar12 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  puVar2 = PTR_PTR_1126caf58;
  _objc_alloc();
  func_0x00010c004540();
  _objc_retain();
  uVar13 = *(undefined8 *)(puVar3 + 0x20);
  *(undefined **)(puVar3 + 0x20) = puVar2;
  _objc_release(uVar13);
  puVar16 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3300(0x3fe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(puVar3 + 8) != 0) {
    func_0x00010c2b3300(0x3fd999999999999a,puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = puVar3;
  func_0x00010be6d9e0();
  puVar3[0x59] = (char)puVar4;
  puVar9 = (undefined1 *)puVar12;
  func_0x00010c0d6c60();
  puVar3[0x5a] = puVar9 == (undefined1 *)0x1;
  puVar9 = (undefined1 *)puVar12;
  func_0x00010c29d360();
  puVar3[0x5b] = puVar9 == (undefined1 *)0x62 || puVar9 == (undefined1 *)0x65;
  puVar9 = (undefined1 *)puVar12;
  func_0x00010c0da1c0();
  bVar1 = puVar3[0x59];
  if (puVar9 == (undefined1 *)0x0) {
LAB_1064ae080:
    if ((bVar1 & 1) == 0) {
      puVar4 = PTR_PTR_1126caf60;
      _objc_opt_new(PTR_PTR_1126caf60);
      puVar5 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
      func_0x00010bf5e640();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c292ac0();
      _objc_release(puVar5);
      if (puVar6 == (undefined *)0x1) {
        func_0x00010c2b25c0(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b3720(0,puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b3660(0,puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2b25c0(puVar4);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar5 = puVar4;
      func_0x00010bf21f60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7380(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010c298f80(puVar12);
      uVar10 = *(undefined8 *)(puVar3 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar10;
      func_0x00010bf4e6a0();
      _objc_release(uVar10);
      if ((int)uVar13 != 0) {
        func_0x00010c0d6c60(puVar12);
      }
      func_0x00010c2aafc0(puVar16);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
  }
  else if ((bVar1 & 1) == 0) {
    func_0x00010c2b48a0(puVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    bVar1 = puVar3[0x59];
    goto LAB_1064ae080;
  }
  puVar6 = puVar16;
  func_0x00010bf21f60(puVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar2);
  _objc_release(puVar12);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064ad66c; end: 1064adde7; -[SCContextOperaPlaylistPlugin operaViewDidSendEvent:page:params:] */

void FUN_1064ad66c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined **unaff_x24;
  long lVar12;
  undefined *unaff_x25;
  undefined *puVar13;
  undefined *unaff_x26;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c29f080();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar13 != 0) {
    if ((param_1[0x58] & 1) != 0) goto LAB_1064adadc;
    param_1[0x58] = 1;
LAB_1064ad6fc:
    func_0x00010be8a7e0(param_1);
    goto LAB_1064adadc;
  }
  unaff_x24 = &PTR_PTR_1126b2000;
  puVar2 = PTR_PTR_1126b2ce8;
  func_0x00010bf7c620(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar13 == 0) {
    puVar2 = PTR_PTR_1126b2ce8;
    func_0x00010bf7d220(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)puVar13 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar2 = PTR_PTR_1126b6168;
      func_0x00010c269180(PTR_PTR_1126b6168);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar2);
      puVar13 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar13 = (undefined *)0x0;
      }
      _objc_retain(puVar13);
      _objc_release(puVar3);
      if (puVar13 != (undefined *)0x0) {
        puVar2 = PTR_PTR_1126b6168;
        func_0x00010c269180(PTR_PTR_1126b6168);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(puVar2);
      }
      puVar2 = param_1 + 0x18;
      _objc_loadWeakRetained(puVar2);
      puVar4 = PTR_PTR_1126b6160;
      func_0x00010c1169e0(PTR_PTR_1126b6160);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1 + 0x10;
      _objc_loadWeakRetained(puVar3);
      puVar5 = puVar3;
      func_0x00010c0f1b80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf5f780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar2);
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained();
      unaff_x24 = (undefined **)PTR_PTR_1126b2638;
      func_0x00010c288220();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = PTR_PTR_1126b6008;
      func_0x00010c0ea660();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6058;
      puStack_88 = unaff_x25;
      goto LAB_1064ada88;
    }
    puVar2 = param_3;
    func_0x00010c0720c0();
    if ((int)puVar2 != 0) {
      puVar2 = PTR_PTR_1126b5bf0;
      func_0x00010c0ebe20(PTR_PTR_1126b5bf0);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar7 = puVar13;
      _objc_opt_isKindOfClass(puVar13,puVar2);
      puVar2 = puVar13;
      if (((ulong)puVar7 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar13);
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar2;
      _objc_release(uVar11);
      goto LAB_1064ad6fc;
    }
    puVar2 = PTR_PTR_1126b2ce8;
    func_0x00010bf7d520(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)puVar13 != 0) {
      puVar2 = param_1 + 0x18;
      _objc_loadWeakRetained(puVar2);
      puVar7 = PTR_PTR_1126b6160;
      func_0x00010c261120(PTR_PTR_1126b6160);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_1 + 0x10;
      _objc_loadWeakRetained();
      unaff_x25 = puVar13;
      func_0x00010c0f1b80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010bf5f780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7a0(puVar2);
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(puVar13);
      _objc_release(puVar7);
      _objc_release(puVar2);
      puVar7 = param_1 + 0x18;
      _objc_loadWeakRetained();
      puVar2 = PTR_PTR_1126b2638;
      func_0x00010c288220();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126b6008;
      func_0x00010c0ea660();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6058;
      unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_98 = puVar13;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7e0(puVar7);
      _objc_release(unaff_x24);
      _objc_release(puVar13);
      _objc_release(puVar2);
      param_1 = puVar7;
      goto LAB_1064adad8;
    }
    puVar2 = PTR_PTR_1126b2ce8;
    func_0x00010c2a68c0(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)puVar13 == 0) {
      puVar2 = PTR_PTR_1126b2ce8;
      func_0x00010bf750a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar13 != 0) {
        puVar2 = param_1 + 0x60;
        _objc_loadWeakRetained();
        puVar13 = puVar2;
        _objc_opt_respondsToSelector();
        _objc_release(puVar2);
        if (((ulong)puVar13 & 1) != 0) {
          puVar7 = param_1 + 0x60;
          _objc_loadWeakRetained();
          func_0x00010bf4ec40();
          puVar2 = puVar7;
          goto LAB_1064adad8;
        }
      }
    }
    else {
      puVar2 = param_1 + 0x60;
      _objc_loadWeakRetained();
      puVar13 = puVar2;
      _objc_opt_respondsToSelector();
      _objc_release(puVar2);
      if (((ulong)puVar13 & 1) != 0) {
        puVar7 = param_1 + 0x60;
        _objc_loadWeakRetained();
        func_0x00010bf4ec60();
        puVar2 = puVar7;
        goto LAB_1064adad8;
      }
    }
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar2 = PTR_PTR_1126b6168;
    func_0x00010c269180(PTR_PTR_1126b6168);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar13 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar13 = (undefined *)0x0;
    }
    _objc_retain(puVar13);
    _objc_release(puVar3);
    if (puVar13 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b6168;
      func_0x00010c269180(PTR_PTR_1126b6168);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(puVar2);
    }
    puVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(puVar2);
    puVar4 = PTR_PTR_1126b6160;
    func_0x00010c277180(PTR_PTR_1126b6160);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1 + 0x10;
    _objc_loadWeakRetained(puVar3);
    puVar5 = puVar3;
    func_0x00010c0f1b80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf5f780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    unaff_x24 = (undefined **)PTR_PTR_1126b2638;
    func_0x00010c288220();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = PTR_PTR_1126b6008;
    func_0x00010c0ea660();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6058;
    puStack_78 = unaff_x25;
LAB_1064ada88:
    unaff_x26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7e0(param_1);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(param_1);
    _objc_release(puVar13);
    puVar2 = puVar7;
LAB_1064adad8:
    _objc_release(puVar7);
  }
LAB_1064adadc:
  _objc_release(param_5);
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_1c0;
  pcStack_a8 = FUN_1064adde8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7 + 0x48;
  puStack_f0 = unaff_x26;
  puStack_e8 = unaff_x25;
  ppuStack_e0 = unaff_x24;
  puStack_d8 = puVar13;
  puStack_d0 = puVar2;
  puStack_c8 = param_1;
  puStack_c0 = param_5;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained();
  puVar2 = puVar3;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puVar3);
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar12 = *plStack_1b0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_1b0 != lVar12) {
          _objc_enumerationMutation(puVar4);
        }
        uVar11 = *(undefined8 *)(lStack_1b8 + (long)puVar13 * 8);
        puVar3 = puVar7 + 0x48;
        _objc_loadWeakRetained();
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c101400(puVar3);
        _objc_release(uVar11);
        _objc_release(puVar3);
        puVar13 = puVar13 + 1;
      } while (puVar2 != puVar13);
      puVar2 = puVar4;
      puVar10 = &uStack_1c0;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar2 = PTR_PTR_1126caf58;
  _objc_alloc();
  func_0x00010c004540();
  _objc_retain();
  uVar11 = *(undefined8 *)(puVar4 + 0x20);
  *(undefined **)(puVar4 + 0x20) = puVar2;
  _objc_release(uVar11);
  puVar13 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3300(0x3fe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(puVar4 + 8) != 0) {
    func_0x00010c2b3300(0x3fd999999999999a,puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar7 = puVar4;
  func_0x00010be6d9e0();
  puVar4[0x59] = (char)puVar7;
  puVar8 = (undefined1 *)puVar10;
  func_0x00010c0d6c60();
  puVar4[0x5a] = puVar8 == (undefined1 *)0x1;
  puVar8 = (undefined1 *)puVar10;
  func_0x00010c29d360();
  puVar4[0x5b] = puVar8 == (undefined1 *)0x62 || puVar8 == (undefined1 *)0x65;
  puVar8 = (undefined1 *)puVar10;
  func_0x00010c0da1c0();
  bVar1 = puVar4[0x59];
  if (puVar8 != (undefined1 *)0x0) {
    if ((bVar1 & 1) != 0) goto LAB_1064ae1a8;
    func_0x00010c2b48a0(puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    bVar1 = puVar4[0x59];
  }
  if ((bVar1 & 1) == 0) {
    puVar7 = PTR_PTR_1126caf60;
    _objc_opt_new(PTR_PTR_1126caf60);
    puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c292ac0();
    _objc_release(puVar3);
    if (puVar5 == (undefined *)0x1) {
      func_0x00010c2b25c0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3720(0,puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3660(0,puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2b25c0(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7380(puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c298f80(puVar10);
    uVar9 = *(undefined8 *)(puVar4 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf4e6a0();
    _objc_release(uVar9);
    if ((int)uVar11 != 0) {
      func_0x00010c0d6c60(puVar10);
    }
    func_0x00010c2aafc0(puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
LAB_1064ae1a8:
  puVar7 = puVar13;
  func_0x00010bf21f60(puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1064adde8; end: 1064adf73; -[SCContextOperaPlaylistPlugin _reloadCurrentPlaylistGroup] */

void FUN_1064adde8(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar11 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar13 = lVar2;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar13;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(lVar2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar15 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(lVar3);
        }
        uVar12 = *(undefined8 *)(lStack_118 + lVar15 * 8);
        lVar4 = param_1 + 0x48;
        _objc_loadWeakRetained();
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c101400(lVar4,param_2,uVar12);
        _objc_release(uVar12);
        _objc_release(lVar4);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lVar3;
      puVar11 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar5 = PTR_PTR_1126caf58;
  _objc_alloc();
  func_0x00010c004540();
  _objc_retain();
  uVar12 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined **)(lVar3 + 0x20) = puVar5;
  _objc_release(uVar12);
  puVar6 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3300(0x3fe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(lVar3 + 8) != 0) {
    func_0x00010c2b3300(0x3fd999999999999a,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar2 = lVar3;
  func_0x00010be6d9e0(lVar3,param_2,puVar11);
  *(char *)(lVar3 + 0x59) = (char)lVar2;
  puVar14 = (undefined1 *)puVar11;
  func_0x00010c0d6c60();
  *(bool *)(lVar3 + 0x5a) = puVar14 == (undefined1 *)0x1;
  puVar14 = (undefined1 *)puVar11;
  func_0x00010c29d360();
  *(bool *)(lVar3 + 0x5b) = puVar14 == (undefined1 *)0x62 || puVar14 == (undefined1 *)0x65;
  puVar14 = (undefined1 *)puVar11;
  func_0x00010c0da1c0();
  bVar1 = *(byte *)(lVar3 + 0x59);
  if (puVar14 != (undefined1 *)0x0) {
    if ((bVar1 & 1) != 0) goto LAB_1064ae1a8;
    func_0x00010c2b48a0(puVar6,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    bVar1 = *(byte *)(lVar3 + 0x59);
  }
  if ((bVar1 & 1) == 0) {
    puVar7 = PTR_PTR_1126caf60;
    _objc_opt_new(PTR_PTR_1126caf60);
    puVar8 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c292ac0();
    _objc_release(puVar8);
    if (puVar9 == (undefined *)0x1) {
      func_0x00010c2b25c0(puVar7,param_2,2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3720(0,puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3660(0,puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2b25c0(puVar7,param_2,6);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar8 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7380(puVar6,param_2,puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar14 = (undefined1 *)puVar11;
    func_0x00010c298f80(puVar11);
    uVar10 = *(undefined8 *)(lVar3 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf4e6a0();
    _objc_release(uVar10);
    if ((int)uVar12 != 0) {
      puVar14 = (undefined1 *)puVar11;
      func_0x00010c0d6c60(puVar11);
      puVar14 = (undefined1 *)(ulong)(puVar14 == (undefined1 *)0x1);
    }
    func_0x00010c2aafc0(puVar6,param_2,puVar14);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
LAB_1064ae1a8:
  puVar7 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1064adf74; end: 1064ae1ef; -[SCContextOperaPlaylistPlugin updateOperaConfiguration:] */

void FUN_1064adf74(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126caf58;
  _objc_alloc();
  func_0x00010c004540();
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar2;
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3300(0x3fe0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010c2b3300(0x3fd999999999999a,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar5 = param_1;
  func_0x00010be6d9e0(param_1,param_2,param_3);
  *(char *)(param_1 + 0x59) = (char)lVar5;
  uVar10 = param_3;
  func_0x00010c0d6c60();
  *(bool *)(param_1 + 0x5a) = uVar10 == 1;
  uVar10 = param_3;
  func_0x00010c29d360();
  *(bool *)(param_1 + 0x5b) = uVar10 == 0x62 || uVar10 == 0x65;
  uVar10 = param_3;
  func_0x00010c0da1c0();
  bVar1 = *(byte *)(param_1 + 0x59);
  if (uVar10 != 0) {
    if ((bVar1 & 1) != 0) goto LAB_1064ae1a8;
    func_0x00010c2b48a0(puVar4,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    bVar1 = *(byte *)(param_1 + 0x59);
  }
  if ((bVar1 & 1) == 0) {
    puVar6 = PTR_PTR_1126caf60;
    _objc_opt_new(PTR_PTR_1126caf60);
    puVar7 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c292ac0();
    _objc_release(puVar7);
    if (puVar8 == (undefined *)0x1) {
      func_0x00010c2b25c0(puVar6,param_2,2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3720(0,puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3660(0,puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2b25c0(puVar6,param_2,6);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar7 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7380(puVar4,param_2,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    uVar10 = param_3;
    func_0x00010c298f80(param_3);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf4e6a0();
    _objc_release(uVar9);
    if ((int)uVar3 != 0) {
      uVar10 = param_3;
      func_0x00010c0d6c60(param_3);
      uVar10 = (ulong)(uVar10 == 1);
    }
    func_0x00010c2aafc0(puVar4,param_2,uVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
LAB_1064ae1a8:
  puVar6 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064ae1f0; end: 1064ae277; -[SCContextOperaPlaylistPlugin _operaConfigurationIsSpotlightUI:] */

uint FUN_1064ae1f0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c29d360();
  if ((lVar3 == 0x1d) && (lVar3 = param_3, func_0x00010c0d6c60(), lVar3 == 1)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1f440(uVar4,param_2,&PTR____CFConstantStringClassReference_110e4d638,1,0);
    uVar1 = (uint)uVar4;
  }
  else {
    uVar1 = 0;
  }
  lVar3 = param_3;
  func_0x00010c29d360(param_3);
  uVar2 = (uint)lVar3;
  func_0x000108f4b978();
  _objc_release(param_3);
  return (uVar2 | uVar1) & 1;
}



/* Entry: 1064ae278; end: 1064ae27b; -[SCContextOperaPlaylistPlugin extraPropertiesProvider] */

void FUN_1064ae278(void)

{
  return;
}



/* Entry: 1064ae27c; end: 1064ae8f7; -[SCContextOperaPlaylistPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_1064ae27c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  ulong uVar19;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar19 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar19;
  func_0x00010c0720c0();
  _objc_release(puVar6);
  _objc_release(uVar19);
  func_0x00010c1d0640(puVar5);
  uVar19 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c5b38;
  func_0x00010c258f40(PTR_PTR_1126c5b38);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar19;
  func_0x00010c0720c0();
  if ((uVar8 & 1) == 0) {
    uVar8 = param_4;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c5b38;
    func_0x00010c08f700(PTR_PTR_1126c5b38);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar8;
    func_0x00010c0720c0();
    if ((uVar14 & 1) == 0) {
      uVar14 = param_4;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar14;
      func_0x00010c0720c0();
      if ((uVar10 & 1) == 0) {
        uVar10 = param_4;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c0720c0();
        if ((uVar11 & 1) == 0) {
          uVar11 = param_4;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010c0720c0();
          if ((uVar12 & 1) == 0) {
            uVar12 = param_4;
            func_0x00010c27dd80();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010c0720c0();
            uVar18 = (uint)uVar13 | (uint)uVar7;
            _objc_release(uVar12);
          }
          else {
            uVar18 = 1;
          }
          _objc_release(uVar11);
        }
        else {
          uVar18 = 1;
        }
        _objc_release(uVar10);
      }
      else {
        uVar18 = 1;
      }
      _objc_release(uVar14);
    }
    else {
      uVar18 = 1;
    }
    _objc_release(puVar9);
    _objc_release(uVar8);
  }
  else {
    uVar18 = 1;
  }
  _objc_release(puVar6);
  _objc_release(uVar19);
  uVar19 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar19;
  func_0x00010c0720c0();
  _objc_release(uVar19);
  if ((uint)uVar8 == 0) {
    uVar19 = 0;
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar14;
    func_0x00010c0ea620();
    _objc_release(uVar14);
  }
  uVar15 = uVar4;
  func_0x00010c0ea600();
  uVar2 = *(byte *)(param_1 + 0x59) ^ 1;
  uVar1 = uVar2;
  if ((uVar19 & 1) == 0) {
    uVar1 = ((uint)uVar8 ^ 1) & (uVar18 | (uint)uVar15);
  }
  if ((*(byte *)(param_1 + 0x59) & 1) == 0) {
    uVar2 = uVar1;
  }
  uVar15 = uVar4;
  func_0x00010c298e40();
  if ((int)uVar15 != 0) {
    func_0x00010c298e60(uVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar6);
  if (uVar2 != 0) {
    func_0x00010c1d0640(puVar5);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar6);
  func_0x00010c1d0640(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar6);
  func_0x00010c1d0640(puVar5);
  if ((uint)uVar7 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(0x4048000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b2d20;
    func_0x00010c27fe40(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
  }
  else {
    puVar9 = param_5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126bfe00;
    func_0x00010bef2100(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar17 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar9);
    puVar16 = puVar6;
    if (((ulong)puVar17 & 1) == 0) {
      puVar16 = (undefined *)0x0;
    }
    puVar17 = puVar16;
    _objc_retain();
    if ((puVar16 == (undefined *)0x0) ||
       (puVar17 = puVar6, func_0x00010c067fc0(), puVar9 = puVar6, puVar17 != (undefined *)0x2)) {
      iVar3 = (int)puVar17;
      func_0x000100478f84();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (iVar3 == 0) {
        func_0x00010bf08c80(PTR_PTR_1126caec0);
      }
      else {
        func_0x00010c27fde0(uVar4);
      }
      func_0x00010c0df720(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126bfe00;
      func_0x00010bf4dd00(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar17);
      _objc_release(puVar9);
      puVar9 = puVar16;
    }
  }
  _objc_release(puVar9);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2d20;
  func_0x00010bfb1ca0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar6);
  if (*(long *)(param_1 + 0x50) != 0) {
    puVar6 = PTR_PTR_1126b2d20;
    func_0x00010c0dc4e0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar6);
  }
  (**(code **)(param_6 + 0x10))(param_6,puVar5,PTR____NSDictionary0__struct_11034ab58);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064ae8f8; end: 1064ae96b; -[SCContextOperaPlaylistPlugin setOperaControlling:] */

void FUN_1064ae8f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x10,param_3);
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bf99b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_storeWeak(param_1 + 0x18,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


