/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bb8474; end: 106bb854f; -[SCUnlockableLensTracker _createProductInteractionFromImpression:] */

void FUN_106bb8474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d0f30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c104260(param_3);
  uVar3 = param_3;
  func_0x00010c115e60(param_3);
  uVar4 = param_3;
  func_0x00010c1160a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfb1be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c037c60(0,puVar1,param_2,uVar2,uVar3,uVar4,0,0,0,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bb8550; end: 106bb8653; -[SCUnlockableLensTracker _newProductInteractionByMergingProductInteraction:withImpression:] */

undefined8
FUN_106bb8550(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c2654c0(param_4);
  uVar2 = param_5;
  func_0x00010c2654c0(param_5);
  uVar3 = param_4;
  func_0x00010c29fc00();
  if ((uVar3 & 1) == 0) {
    uVar5 = param_5;
    func_0x00010c29fc00(param_5);
  }
  else {
    uVar5 = 1;
  }
  uVar4 = param_5;
  func_0x00010c29fc00(param_5);
  uVar3 = param_4;
  func_0x00010c1162c0();
  if ((uVar3 & 1) == 0) {
    uVar6 = param_5;
    func_0x00010c1162c0(param_5);
  }
  else {
    uVar6 = 1;
  }
  func_0x00010c276b00(param_4);
  dVar7 = param_1;
  func_0x00010c276b00(param_5);
  func_0x00010be63360(param_1 + dVar7,param_2,param_3,param_4,uVar5,uVar4,uVar6,
                      (int)uVar2 + (int)uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 106bb8654; end: 106bb872f; -[SCUnlockableLensTracker _newProductInteractionByMergingProductInteraction:withVisibleAtLensExit:visibleAtLastUpdate:productTapped:totalSelectionTime:swipedOverCount:] */

undefined *
FUN_106bb8654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0f20;
  func_0x00010c281120(PTR_PTR_1126d0f20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2babc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcae0(puVar1,param_3,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcac0(puVar1,param_3,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b61e0(puVar1,param_3,param_7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb940(param_1,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106bb8730; end: 106bb88a7; -[SCUnlockableLensTracker _updateAttachmentImpressionForLensId:attachmentInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb8730(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
LAB_106bb881c:
    puVar1 = PTR_PTR_1126c8c40;
    _objc_opt_new(PTR_PTR_1126c8c40);
    func_0x00010c21bbe0();
    func_0x00010c225ca0(puVar1);
    func_0x00010c16b1c0(puVar1);
    puVar2 = param_1;
    func_0x00010c068a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar2);
  }
  else {
    puVar1 = param_1;
    func_0x00010c068a40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) goto LAB_106bb881c;
    puVar2 = param_1;
    func_0x00010c068a40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c8c40;
    _objc_opt_class(PTR_PTR_1126c8c40);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar2);
    puVar2 = puVar1;
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) goto LAB_106bb887c;
    func_0x00010c225ca0(puVar1);
    func_0x00010c16b1c0(puVar1);
  }
  _objc_release(puVar1);
LAB_106bb887c:
  uVar4 = *(undefined8 *)(param_1 + _DAT_112759c24);
  *(long *)(param_1 + _DAT_112759c24) = param_3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bb88a8; end: 106bb89af; -[SCUnlockableLensTracker _updateCameraInteractionForLensInteraction:] */

void FUN_106bb88a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c8c40;
  _objc_opt_class(PTR_PTR_1126c8c40);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126c8c40;
  _objc_opt_class(PTR_PTR_1126c8c40);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  if (uVar3 != 0) {
    func_0x00010c06dd80(uVar4);
    func_0x00010c1afc60(uVar1);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bb89b0; end: 106bb8be7; -[SCUnlockableLensTracker trackAttachmentViewForLensId:attachmentInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb89b0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bed3460(param_1,param_2,param_3,param_4);
  func_0x00010c2967e0(param_1,param_2,param_3);
  uVar1 = param_1;
  func_0x00010be343a0();
  lVar10 = (long)_DAT_112759c48;
  uVar2 = *(ulong *)(param_1 + lVar10);
  if (uVar2 != 0) {
    func_0x00010c068380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      bVar9 = false;
      goto LAB_106bb8ad8;
    }
  }
  puVar5 = PTR_PTR_1126d0f10;
  _objc_alloc();
  puVar6 = PTR_PTR_1126c8c40;
  _objc_opt_new(PTR_PTR_1126c8c40);
  bVar9 = true;
  func_0x00010c01e620(puVar5,param_2,puVar6,1);
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar5;
  _objc_release(uVar7);
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c068380(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21bbe0();
  _objc_release(uVar7);
LAB_106bb8ad8:
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c068380(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225ca0();
  _objc_release(uVar7);
  uVar7 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c068380(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b1c0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  if ((uVar1 & 1) == 0 && !bVar9) {
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c068380(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf0cf40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb0080(param_1,param_2,uVar7,param_3,0);
  }
  else {
    puVar5 = PTR_PTR_1126d0f10;
    _objc_alloc();
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c068380(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e620(puVar5,param_2,uVar8,1);
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar5;
  }
  _objc_release(uVar7);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bb8be8; end: 106bb8d83; -[SCUnlockableLensTracker fireAttachmentInteraction:lensID:attachmentOpen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb8be8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = param_1;
  func_0x00010be343a0();
  if ((int)lVar8 != 0) {
    func_0x00010be179c0(param_1);
  }
  lVar8 = (long)_DAT_112759c48;
  uVar1 = *(ulong *)(param_1 + lVar8);
  if (uVar1 != 0) {
    func_0x00010c068380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_106bb8ccc;
  }
  puVar4 = PTR_PTR_1126c8c40;
  _objc_opt_new(PTR_PTR_1126c8c40);
  func_0x00010c21bbe0();
  puVar5 = PTR_PTR_1126d0f10;
  _objc_alloc();
  func_0x00010c01e620();
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar5;
  _objc_release(uVar7);
  _objc_release(puVar4);
LAB_106bb8ccc:
  uVar7 = param_3;
  func_0x00010bf51e00(param_3);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c068380(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b1c0();
  _objc_release(uVar6);
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126d0f28;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c068380(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1045e0(puVar4,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c225ca0(puVar4,param_2,param_5);
  func_0x00010be17920(param_1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bb8d84; end: 106bb9073; -[SCUnlockableLensTracker trackProductAttachmentViewFromProductLinkForId:lensId:openTimestamp:isRedirectToStore:isRedirectToWebview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb8d84(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c8c40;
  _objc_opt_class(PTR_PTR_1126c8c40);
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
    func_0x00010c115fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar4);
    if (uVar5 != 0) {
      puVar3 = PTR_PTR_1126c7d90;
      func_0x00010c280ec0(PTR_PTR_1126c7d90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b4e20();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b12e0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b1300(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225ca0(uVar2);
      func_0x00010c16b1c0(uVar2);
      puVar7 = PTR_PTR_1126d0f20;
      func_0x00010c281120(PTR_PTR_1126d0f20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b61e0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf21f60(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c115fa0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar2);
      _objc_release(puVar9);
      _objc_release(uVar2);
      _objc_release(puVar8);
      lVar11 = (long)_DAT_112759c48;
      uVar10 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c068380(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b1c0();
      _objc_release(uVar10);
      func_0x00010bfb0080(param_1);
      puVar8 = puVar6;
      func_0x00010bf51e00(puVar6);
      uVar10 = *(undefined8 *)(param_1 + lVar11);
      func_0x00010c068380(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b1c0();
      _objc_release(uVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bb9074; end: 106bb92e7; -[SCUnlockableLensTracker trackProductAttachmentViewTimeForLensId:viewTimeSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb9074(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  
  dVar11 = param_1;
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c8c40;
  _objc_opt_class(PTR_PTR_1126c8c40);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf0cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = uVar1;
    func_0x00010bf0cf40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c7d90;
    func_0x00010c280ee0(PTR_PTR_1126c7d90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e500(uVar2);
    dVar11 = param_1 + dVar11;
    func_0x00010c2bc980(dVar11,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b1c0(uVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar10 = (long)_DAT_112759c48;
  lVar6 = *(long *)(param_2 + lVar10);
  func_0x00010c068380();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf0cf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010c068380(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf0cf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126c7d90;
    func_0x00010c280ee0(PTR_PTR_1126c7d90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e500(uVar9);
    func_0x00010c2bc980(param_1 + dVar11,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + lVar10);
    func_0x00010c068380(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b1c0();
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar9);
  }
  uVar2 = uVar1;
  func_0x00010bf0cf40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb0080(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bb92e8; end: 106bb93eb; -[SCUnlockableLensTracker fireTrackWithSnapInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb92e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar1 = param_1;
    func_0x00010c068a40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c068a40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar4);
      if (lVar3 == 0) goto LAB_106bb93d4;
      lVar4 = *(long *)(param_1 + _DAT_112759c20);
      if (lVar4 == 10) {
        func_0x00010bedffc0(param_1);
      }
      lVar1 = param_1;
      func_0x00010c230640(param_1);
      func_0x00010be178e0(param_1,param_2,param_3,lVar4 != 10,lVar1);
      func_0x00010c068a40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12adc0();
      lVar4 = param_1;
    }
    _objc_release(lVar4);
  }
LAB_106bb93d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bb93ec; end: 106bb9867; -[SCUnlockableLensTracker _updateInteraction:existingInteraction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106bb93ec(double param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,uint param_6)

{
  ulong uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x20;
  bool bVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x22;
  undefined **unaff_x23;
  undefined8 unaff_x24;
  undefined *unaff_x25;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *unaff_x26;
  undefined *unaff_x27;
  ulong uVar16;
  long unaff_x28;
  undefined8 *puVar17;
  double dVar18;
  double dVar19;
  undefined8 *puStack_380;
  ulong uStack_378;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_1f0;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_168 = param_2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != (undefined8 *)0x0) && (param_5 != (undefined8 *)0x0)) {
    func_0x00010c2bd1a0(param_5);
    func_0x00010c2bd1a0(param_4);
    func_0x00010c2271a0(param_4);
    func_0x00010c2b8140(param_5);
    func_0x00010c2b8140(param_4);
    func_0x00010c226c80(param_4);
    func_0x00010c06dd80(param_5);
    func_0x00010c06dd80(param_4);
    func_0x00010c1afc60(param_4);
    func_0x00010c07c360(param_5);
    func_0x00010c07c360(param_4);
    func_0x00010c1b3da0(param_4);
    func_0x00010bfb1180(param_5);
    if (0.0 <= param_1) {
      func_0x00010bfb1180(param_5);
      func_0x00010c19cf40(param_4);
    }
    func_0x00010bfb1ee0(param_5);
    if (0.0 <= param_1) {
      func_0x00010bfb1ee0(param_5);
      func_0x00010c19d7a0(param_4);
    }
    puVar3 = param_5;
    func_0x00010bf0cf40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined8 *)0x0) {
      unaff_x22 = param_4;
      func_0x00010bf0cf40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      unaff_x22 = puVar3;
    }
    _objc_release(puVar3);
    puStack_178 = unaff_x22;
    func_0x00010c16b1c0(param_4);
    func_0x00010c2a8920(param_5);
    func_0x00010c2a8920(param_4);
    func_0x00010c225ca0(param_4);
    dVar19 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    puStack_170 = param_5;
    func_0x00010c115fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    param_6 = 0;
    puStack_158 = puVar3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      unaff_x28 = *plStack_130;
      unaff_x23 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      do {
        puVar13 = (undefined8 *)0x0;
        puStack_160 = puVar3;
        do {
          if (*plStack_130 != unaff_x28) {
            _objc_enumerationMutation(puStack_158);
          }
          puVar14 = *(undefined8 **)(lStack_138 + (long)puVar13 * 8);
          puVar11 = param_4;
          func_0x00010c115fa0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c115e60(puVar14);
          func_0x00010c0df7c0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar11;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar11);
          unaff_x26 = puVar5;
          if (puVar5 != (undefined8 *)0x0 && puVar14 != (undefined8 *)0x0) {
            func_0x00010c2654c0(puVar5);
            func_0x00010c2654c0(puVar14);
            puVar3 = puVar5;
            func_0x00010c29fc00();
            if (((ulong)puVar3 & 1) == 0) {
              func_0x00010c29fc00(puVar14);
            }
            puVar3 = puVar5;
            func_0x00010c1162c0();
            if (((ulong)puVar3 & 1) == 0) {
              func_0x00010c1162c0(puVar14);
            }
            func_0x00010c276b00(puVar5);
            dVar18 = dVar19;
            func_0x00010c276b00(puVar14);
            puVar3 = puVar5;
            func_0x00010c29fbe0();
            if (((ulong)puVar3 & 1) == 0) {
              func_0x00010c29fbe0(puVar14);
            }
            dVar19 = dVar19 + dVar18;
            unaff_x26 = puStack_168;
            func_0x00010be63360(dVar19);
            _objc_release(puVar5);
            puVar3 = puStack_160;
          }
          param_5 = puVar14;
          if (unaff_x26 != (undefined8 *)0x0) {
            param_5 = unaff_x26;
          }
          unaff_x22 = param_4;
          func_0x00010c115fa0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c115e60(puVar14);
          unaff_x25 = unaff_x27;
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(unaff_x22);
          _objc_release(unaff_x25);
          _objc_release(unaff_x22);
          _objc_release(unaff_x26);
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar3 != puVar13);
        param_6 = 0;
        puVar3 = puStack_158;
        func_0x00010bf52a60();
        unaff_x24 = 0;
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(puStack_158);
    _objc_release(puStack_178);
    unaff_x20 = param_5;
    param_5 = puStack_170;
  }
  puStack_150 = puStack_168;
  puStack_148 = PTR_PTR_1126f5798;
  puVar13 = param_4;
  puVar3 = param_5;
  _objc_msgSendSuper2(&puStack_150,PTR_s__updateInteraction_existingInter_1125940c0);
  iVar10 = (int)puVar3;
  _objc_release(param_5);
  puVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_106bb9868;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1e0 = unaff_x28;
  puStack_1d8 = unaff_x27;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = unaff_x25;
  uStack_1c0 = unaff_x24;
  ppuStack_1b8 = unaff_x23;
  puStack_1b0 = unaff_x22;
  puStack_1a8 = param_5;
  puStack_1a0 = unaff_x20;
  puStack_198 = param_4;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(puVar13);
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar11 = puVar3;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  puStack_380 = puVar11;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar11 = &uStack_330;
  puVar5 = puStack_380;
  func_0x00010bf52a60();
  if (puVar5 == (undefined8 *)0x0) {
    uStack_378 = 0;
  }
  else {
    bVar12 = false;
    uStack_378 = 0;
    lVar15 = *plStack_320;
    bVar2 = true;
    do {
      puVar11 = (undefined8 *)0x0;
      do {
        if (*plStack_320 != lVar15) {
          _objc_enumerationMutation(puStack_380);
        }
        puVar4 = PTR_PTR_1126c8c40;
        uVar16 = *(ulong *)(lStack_328 + (long)puVar11 * 8);
        _objc_retain(uVar16);
        _objc_opt_class(puVar4);
        uVar6 = uVar16;
        _objc_opt_isKindOfClass(uVar16,puVar4);
        uVar1 = uVar16;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar16);
        func_0x00010bed9d40(puVar3);
        puVar14 = puVar3;
        func_0x00010bdda0e0();
        if ((int)puVar14 != 0) {
          if ((uStack_378 == 0) || (uVar6 = uStack_378, func_0x00010c08fa60(), uVar6 == 0)) {
            uVar6 = uVar1;
            func_0x00010c2813a0();
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar6;
            func_0x00010bef4d80();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar16;
            func_0x00010c071ae0();
            _objc_release(puVar4);
            _objc_release(uVar16);
            _objc_release(uVar6);
            if ((uVar7 & 1) == 0) {
              uVar6 = uVar1;
              func_0x00010c2813a0();
              _objc_retainAutoreleasedReturnValue();
              uVar16 = uVar6;
              func_0x00010bef4d80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uStack_378);
              _objc_release(uVar6);
              uStack_378 = uVar16;
            }
          }
          uVar6 = uVar1;
          func_0x00010c242fe0();
          uVar16 = uVar1;
          func_0x00010c25a8c0();
          uVar7 = uVar1;
          func_0x00010c0c9600();
          bVar2 = (bool)(((uVar7 == 0 && uVar16 == 0) && uVar6 == 0) & bVar2);
          bVar12 = true;
        }
        _objc_release(uVar1);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar5 != puVar11);
      puVar11 = &uStack_330;
      puVar5 = puStack_380;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
    _objc_release(puStack_380);
    if (!bVar12) goto LAB_106bb9cf0;
    if (iVar10 != 0) {
      puVar5 = puVar3;
      func_0x00010be63540();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar11 = puVar3;
      func_0x00010c068a40();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar11;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar11 = puVar14;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      while (puVar11 != (undefined8 *)0x0) {
        puVar17 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar15) {
            _objc_enumerationMutation(puVar14);
          }
          puVar8 = PTR_PTR_1126c8c40;
          uVar16 = *(ulong *)((long)puVar17 * 8);
          _objc_retain(uVar16);
          _objc_opt_class(puVar8);
          uVar6 = uVar16;
          _objc_opt_isKindOfClass(uVar16,puVar8);
          uVar1 = uVar16;
          if ((uVar6 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar16);
          puVar9 = puVar3;
          func_0x00010bdda0e0();
          if ((int)puVar9 != 0) {
            func_0x00010befa120(puVar4);
          }
          _objc_release(uVar1);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (puVar11 != puVar17);
        puVar11 = puVar14;
        func_0x00010bf52a60();
      }
      _objc_release(puVar14);
      func_0x00010c2bab80(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126d0f38;
      func_0x00010bf22860(PTR_PTR_1126d0f38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b9260(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar11 = puVar5;
      func_0x00010be17ae0(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    if (bVar2 || ((param_6 ^ 0xffffffff) & 1) != 0) goto LAB_106bb9cf0;
    puStack_380 = puVar3;
    func_0x00010bdf2080();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined8 *)0x0;
    func_0x00010bfb07c0(puVar3);
  }
  _objc_release(puStack_380);
LAB_106bb9cf0:
  _objc_release(uStack_378);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar3 = puVar13;
  func_0x00010be42440();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010be43f80(puVar13);
  }
  else {
    puVar13 = (undefined8 *)0x1;
  }
  _objc_release(puVar11);
  return puVar13;
}



/* Entry: 106bb9868; end: 106bb9d3b; -[SCUnlockableLensTracker _fireLensCarouselInteractionWithSnapInfo:shouldFireTrackViaSnapAdsClient:shouldFireTrackViaGtqClient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106bb9868(undefined8 *param_1,undefined8 param_2,ulong param_3,int param_4,uint param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar10 = param_1;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = puVar10;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = &uStack_1b0;
  puVar2 = puStack_200;
  func_0x00010bf52a60();
  if (puVar2 == (undefined8 *)0x0) {
    uStack_1f8 = 0;
  }
  else {
    bVar11 = false;
    uStack_1f8 = 0;
    lVar12 = *plStack_1a0;
    bVar1 = true;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        if (*plStack_1a0 != lVar12) {
          _objc_enumerationMutation(puStack_200);
        }
        puVar3 = PTR_PTR_1126c8c40;
        uVar13 = *(ulong *)(lStack_1a8 + (long)puVar10 * 8);
        _objc_retain(uVar13);
        _objc_opt_class(puVar3);
        uVar4 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar3);
        uVar9 = uVar13;
        if ((uVar4 & 1) == 0) {
          uVar9 = 0;
        }
        _objc_retain(uVar9);
        _objc_release(uVar13);
        func_0x00010bed9d40(param_1);
        puVar5 = param_1;
        func_0x00010bdda0e0();
        if ((int)puVar5 != 0) {
          if ((uStack_1f8 == 0) || (uVar4 = uStack_1f8, func_0x00010c08fa60(), uVar4 == 0)) {
            uVar4 = uVar9;
            func_0x00010c2813a0();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar4;
            func_0x00010bef4d80();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar13;
            func_0x00010c071ae0();
            _objc_release(puVar3);
            _objc_release(uVar13);
            _objc_release(uVar4);
            if ((uVar6 & 1) == 0) {
              uVar4 = uVar9;
              func_0x00010c2813a0();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar4;
              func_0x00010bef4d80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uStack_1f8);
              _objc_release(uVar4);
              uStack_1f8 = uVar13;
            }
          }
          uVar4 = uVar9;
          func_0x00010c242fe0();
          uVar13 = uVar9;
          func_0x00010c25a8c0();
          uVar6 = uVar9;
          func_0x00010c0c9600();
          bVar1 = (bool)(((uVar6 == 0 && uVar13 == 0) && uVar4 == 0) & bVar1);
          bVar11 = true;
        }
        _objc_release(uVar9);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar2 != puVar10);
      puVar10 = &uStack_1b0;
      puVar2 = puStack_200;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
    _objc_release(puStack_200);
    if (!bVar11) goto LAB_106bb9cf0;
    if (param_4 != 0) {
      puVar2 = param_1;
      func_0x00010be63540();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar10 = param_1;
      func_0x00010c068a40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar10;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar5;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (puVar10 != (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar5);
          }
          puVar7 = PTR_PTR_1126c8c40;
          uVar13 = *(ulong *)((long)puVar14 * 8);
          _objc_retain(uVar13);
          _objc_opt_class(puVar7);
          uVar4 = uVar13;
          _objc_opt_isKindOfClass(uVar13,puVar7);
          uVar9 = uVar13;
          if ((uVar4 & 1) == 0) {
            uVar9 = 0;
          }
          _objc_retain(uVar9);
          _objc_release(uVar13);
          puVar8 = param_1;
          func_0x00010bdda0e0();
          if ((int)puVar8 != 0) {
            func_0x00010befa120(puVar3);
          }
          _objc_release(uVar9);
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar10 != puVar14);
        puVar10 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
      func_0x00010c2bab80(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d0f38;
      func_0x00010bf22860(PTR_PTR_1126d0f38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b9260(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar10 = puVar2;
      func_0x00010be17ae0(param_1);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    if (bVar1 || ((param_5 ^ 0xffffffff) & 1) != 0) goto LAB_106bb9cf0;
    puStack_200 = param_1;
    func_0x00010bdf2080();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)0x0;
    func_0x00010bfb07c0(param_1);
  }
  _objc_release(puStack_200);
LAB_106bb9cf0:
  _objc_release(uStack_1f8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  uVar9 = param_3;
  func_0x00010be42440();
  if ((uVar9 & 1) == 0) {
    func_0x00010be43f80(param_3);
  }
  else {
    param_3 = 1;
  }
  _objc_release(puVar10);
  return param_3;
}



/* Entry: 106bb9d3c; end: 106bb9d97; -[SCUnlockableLensTracker isInteractionEligibleForIndependentLensImpression:] */

ulong FUN_106bb9d3c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be42440(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010be43f80(param_1,param_2,param_3);
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106bb9d98; end: 106bb9f07; -[SCUnlockableLensTracker _fireIndependentImpressionTrack:requestId:sequenceNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106bb9d98(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  uVar3 = param_3;
  func_0x00010c075b40(param_1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010bed9d40(param_1,param_2,param_3);
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112759c24);
    uVar1 = param_3;
    func_0x00010c2810a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar4,param_2,uVar1);
    _objc_release(uVar1);
    if ((int)uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112759c28);
    }
    uVar1 = param_1;
    func_0x00010be63540(param_1,param_2,param_4,2,uVar4);
    func_0x00010c2b8360();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bab80(uVar1,param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar3 = uVar1;
    func_0x00010be17ae0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126d0f40;
  func_0x00010c096da0(uVar3);
  func_0x00010bef5f00(puVar2,param_2,uVar3);
  return (ulong)((int)puVar2 != -0x4524111 && (int)puVar2 != 0);
}



/* Entry: 106bb9f08; end: 106bb9f4f; -[SCUnlockableLensTracker _isSponsoredLensSwipeInteraction:] */

bool FUN_106bb9f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d0f40;
  func_0x00010c096da0(param_3);
  func_0x00010bef5f00(puVar1,param_2,param_3);
  return (int)puVar1 != -0x4524111 && (int)puVar1 != 0;
}



/* Entry: 106bb9f50; end: 106bb9f93; -[SCUnlockableLensTracker _isNoFillSwipeInteraction:] */

bool FUN_106bb9f50(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c0da7e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 106bb9f94; end: 106bba15f; -[SCUnlockableLensTracker _updateInteractionWithLensEngagement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb9f94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112759c3c;
  lVar2 = *(long *)(param_1 + lVar7);
  lVar1 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ea40(lVar2,param_2,lVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  lVar1 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ea20(uVar3,param_2,lVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  lVar1 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ea60(uVar5,param_2,lVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf0cf40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar7 = param_3;
    func_0x00010c2a8920(param_3);
    uVar6 = (uint)lVar7 ^ 1;
  }
  else {
    uVar6 = 0;
  }
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112759c40);
  lVar1 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13eda0(uVar4,param_2,lVar1,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd3a0(param_3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar1);
  func_0x00010c1a5da0(param_3,param_2,lVar2 != 0);
  func_0x00010c185cc0(param_3,param_2,uVar3);
  func_0x00010c1ff960(param_3,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bba160; end: 106bba3ef; -[SCUnlockableLensTracker _newUnlockableAdTrackInfoBuilderWithRequestId:trackType:carouselExitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_106bba160(double param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c15ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0f48;
  func_0x00010c280ea0(PTR_PTR_1126d0f48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b8360();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf32ae0(param_2);
  func_0x00010c2aa380(puVar2,param_3,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8500(puVar2,param_3,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b70c0(puVar2,param_3,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2180(puVar2,param_3,*(undefined8 *)(param_2 + _DAT_112759c24));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(param_1 * 1000.0,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab3e0(puVar2,param_3,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd00();
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac380(puVar2,param_3,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd20();
  func_0x00010c0df720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac3c0(puVar2,param_3,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c2a7e20(puVar2,param_3,0xb);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa2c0(puVar2,param_3,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c096ca0(param_2);
  func_0x00010c2b2ca0(puVar2,param_3,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbac0(puVar2,param_3,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0040(puVar2,param_3,*(undefined8 *)(param_2 + _DAT_112759c34));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 106bba3f0; end: 106bbb303; -[SCUnlockableLensTracker _createProtoTrackWithSnapInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bba3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uStack_270;
  ulong uStack_268;
  long lStack_208;
  
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126c0358;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126c0360;
  _objc_opt_new();
  func_0x00010c21bd60();
  func_0x00010c204860(puVar3);
  puVar5 = PTR_PTR_1126c0348;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126c0340;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126c0338;
  _objc_opt_new();
  puVar8 = PTR_PTR_1126b92e0;
  _objc_opt_new();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar10 = param_1;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  lVar10 = lVar11;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar10 == 0) {
      _objc_release(lVar11);
      puVar12 = PTR_PTR_1126d0f70;
      _objc_opt_new(PTR_PTR_1126d0f70);
      func_0x00010c1bbe40();
      func_0x00010c1bad20(puVar8);
      func_0x00010c1ab240(puVar7);
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6460(puVar6);
      _objc_release(puVar15);
      func_0x00010c1ae980(puVar5);
      func_0x00010c218ec0(puVar3);
      _objc_release(puVar12);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar29) {
        ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_opt_new_11034d2b0)(PTR_PTR_1126c8c40);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    lVar31 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar11);
      }
      puVar12 = PTR_PTR_1126c8c40;
      uVar30 = *(ulong *)(lVar31 * 8);
      _objc_retain(uVar30);
      _objc_opt_class(puVar12);
      uVar13 = uVar30;
      _objc_opt_isKindOfClass(uVar30,puVar12);
      uVar1 = uVar30;
      if ((uVar13 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar30);
      lVar14 = param_1;
      func_0x00010bdda0e0();
      if ((int)lVar14 != 0) {
        func_0x00010c242fe0();
        func_0x00010c25a8c0();
        func_0x00010c0c9600();
        puVar12 = PTR_PTR_1126d0f50;
        _objc_opt_new();
        puVar15 = PTR_PTR_1126b1df0;
        _objc_alloc(PTR_PTR_1126b1df0);
        uVar13 = uVar1;
        func_0x00010c2810a0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar13;
        func_0x00010c08fa60();
        if (uVar16 != 0) {
          uStack_270 = uVar1;
          func_0x00010c2810a0();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c04e820(puVar15);
        func_0x00010c1bbd60(puVar12);
        _objc_release(puVar15);
        if (uVar16 != 0) {
          _objc_release(uStack_270);
        }
        _objc_release(uVar13);
        uVar13 = uVar1;
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar13;
        func_0x00010c11ff80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        puVar17 = *(undefined **)(param_1 + _DAT_112759c38);
        func_0x00010bfc4f80();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar17;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar1;
        func_0x00010c2810a0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar15;
        func_0x00010c0720c0();
        if ((int)puVar18 == 0) {
LAB_106bba870:
          _objc_release(uVar13);
          _objc_release(puVar15);
LAB_106bba880:
          puVar18 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar16;
          func_0x00010c071ae0();
          if ((uVar13 & 1) != 0) goto LAB_106bba8e4;
          uVar13 = uVar16;
          func_0x00010c08fa60();
          _objc_release(puVar18);
          if (uVar13 != 0) {
            puVar18 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf649e0(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c195940(puVar12);
            goto LAB_106bba8e4;
          }
        }
        else {
          puVar18 = puVar17;
          func_0x00010c11ff80();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar18;
          func_0x00010c08fa60();
          if (puVar19 == (undefined *)0x0) {
LAB_106bba864:
            _objc_release(puVar18);
            goto LAB_106bba870;
          }
          puVar19 = puVar3;
          func_0x00010c241660();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar19;
          func_0x00010c281680();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar20;
          func_0x00010c08bdc0();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar21;
          func_0x00010c08fa60();
          if (puVar22 == (undefined *)0x0) {
            _objc_release(puVar21);
            _objc_release(puVar20);
            _objc_release(puVar19);
            goto LAB_106bba864;
          }
          puVar22 = puVar3;
          func_0x00010c241660();
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar22;
          func_0x00010c281680();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar23;
          func_0x00010c08bdc0();
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar17;
          func_0x00010c247540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(puVar22);
          _objc_release(puVar21);
          _objc_release(puVar20);
          _objc_release(puVar19);
          _objc_release(puVar18);
          _objc_release(uVar13);
          _objc_release(puVar15);
          puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
          if (puVar24 != puVar25) goto LAB_106bba880;
          puVar18 = puVar17;
          func_0x00010c11ff80(puVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf649e0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c195940(puVar12);
          _objc_release(puVar15);
LAB_106bba8e4:
          _objc_release(puVar18);
        }
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar30;
        func_0x00010bf93c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar30);
        puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        uVar30 = uVar13;
        func_0x00010c071ae0();
        if ((uVar30 & 1) == 0) {
          uVar30 = uVar13;
          func_0x00010c08fa60();
          _objc_release(puVar15);
          if (uVar30 != 0) {
            puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf649e0(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c195b80(puVar12);
            goto LAB_106bba97c;
          }
        }
        else {
LAB_106bba97c:
          _objc_release(puVar15);
        }
        puVar15 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010bff91e0();
        func_0x00010c226de0(puVar12);
        _objc_release(puVar15);
        puVar15 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010bff91e0();
        func_0x00010c226f40(puVar12);
        _objc_release(puVar15);
        puVar15 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010bff91e0();
        func_0x00010c226740(puVar12);
        _objc_release(puVar15);
        func_0x00010c1bcca0(puVar12);
        puVar15 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010c076460(uVar1);
        func_0x00010bff91e0(puVar15);
        func_0x00010c1afb80(puVar12);
        _objc_release(puVar15);
        puVar15 = PTR_PTR_1126c0308;
        _objc_alloc(PTR_PTR_1126c0308);
        func_0x00010c07c360(uVar1);
        func_0x00010bff91e0(puVar15);
        func_0x00010c1b3da0(puVar12);
        _objc_release(puVar15);
        puVar15 = PTR_PTR_1126b1df0;
        _objc_alloc(PTR_PTR_1126b1df0);
        uVar30 = uVar1;
        func_0x00010c095800();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = uVar30;
        func_0x00010c08fa60();
        if (uVar26 != 0) {
          uStack_268 = uVar1;
          func_0x00010c095800();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c04e820(puVar15);
        func_0x00010c1bc3e0(puVar12);
        _objc_release(puVar15);
        if (uVar26 != 0) {
          _objc_release(uStack_268);
        }
        _objc_release(uVar30);
        uVar30 = uVar1;
        func_0x00010c0cf060(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar26 = uVar30;
        func_0x00010b704680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c87c0(puVar12);
        _objc_release(uVar26);
        _objc_release(uVar30);
        puVar15 = PTR_PTR_1126d0f40;
        func_0x00010c096da0(uVar1);
        func_0x00010bef5f00(puVar15);
        func_0x00010c208420(puVar12);
        uVar30 = uVar1;
        func_0x00010c115fa0();
        _objc_retainAutoreleasedReturnValue();
        uVar26 = uVar30;
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar30);
        uVar30 = uVar26;
        func_0x00010bf529e0();
        if (uVar30 != 0) {
          puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          _objc_retain(uVar26);
          uVar30 = uVar26;
          func_0x00010bf52a60();
          lVar14 = lRam0000000000000000;
          while (uVar30 != 0) {
            uVar32 = 0;
            do {
              if (lRam0000000000000000 != lVar14) {
                _objc_enumerationMutation(uVar26);
              }
              lVar33 = *(long *)(uVar32 * 8);
              func_0x00010c29fc20(lVar33);
              puVar18 = PTR_PTR_1126d0f58;
              _objc_opt_new(PTR_PTR_1126d0f58);
              puVar19 = PTR_PTR_1126c0320;
              _objc_alloc(PTR_PTR_1126c0320);
              func_0x00010c104260(lVar33);
              func_0x00010c01e4a0(puVar19);
              func_0x00010c1deee0(puVar18);
              _objc_release(puVar19);
              func_0x00010c115e60(lVar33);
              func_0x00010c1e3bc0(puVar18);
              puVar19 = PTR_PTR_1126b1df0;
              _objc_alloc(PTR_PTR_1126b1df0);
              lVar27 = lVar33;
              func_0x00010c1160a0();
              _objc_retainAutoreleasedReturnValue();
              lVar28 = lVar27;
              func_0x00010c08fa60();
              if (lVar28 != 0) {
                lStack_208 = lVar33;
                func_0x00010c1160a0();
                _objc_retainAutoreleasedReturnValue();
              }
              func_0x00010c04e820(puVar19);
              func_0x00010c1d5de0(puVar18);
              _objc_release(puVar19);
              if (lVar28 != 0) {
                _objc_release(lStack_208);
              }
              _objc_release(lVar27);
              puVar19 = PTR_PTR_1126c0320;
              _objc_alloc(PTR_PTR_1126c0320);
              func_0x00010c2654c0(lVar33);
              func_0x00010c01e4a0(puVar19);
              func_0x00010c2109e0(puVar18);
              _objc_release(puVar19);
              puVar19 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              func_0x00010c1162c0(lVar33);
              func_0x00010bff91e0(puVar19);
              func_0x00010c1e3d80(puVar18);
              _objc_release(puVar19);
              puVar19 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              lVar27 = lVar33;
              func_0x00010bfb1be0(lVar33);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f320();
              func_0x00010c01e4e0(puVar19);
              func_0x00010c19d780(puVar18);
              _objc_release(puVar19);
              _objc_release(lVar27);
              puVar19 = PTR_PTR_1126c0350;
              _objc_alloc(PTR_PTR_1126c0350);
              func_0x00010c276b00(lVar33);
              func_0x00010c01e4e0(puVar19);
              func_0x00010c218ac0(puVar18);
              _objc_release(puVar19);
              puVar19 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              func_0x00010bff91e0();
              func_0x00010c226de0(puVar18);
              _objc_release(puVar19);
              puVar19 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              func_0x00010bff91e0();
              func_0x00010c226f40(puVar18);
              _objc_release(puVar19);
              puVar19 = PTR_PTR_1126c0308;
              _objc_alloc(PTR_PTR_1126c0308);
              func_0x00010bff91e0();
              func_0x00010c226dc0(puVar18);
              _objc_release(puVar19);
              func_0x00010befa120(puVar15);
              _objc_release(puVar18);
              uVar32 = uVar32 + 1;
            } while (uVar30 != uVar32);
            uVar30 = uVar26;
            func_0x00010bf52a60();
          }
          _objc_release(uVar26);
          puVar18 = PTR_PTR_1126d0f60;
          _objc_opt_new(PTR_PTR_1126d0f60);
          func_0x00010c1e3c40();
          func_0x00010c1bc8a0(puVar12);
          _objc_release(puVar18);
          _objc_release(puVar15);
        }
        uVar30 = uVar1;
        func_0x00010bf0cf40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR_PTR_1126d0f68;
        _objc_opt_new(PTR_PTR_1126d0f68);
        puVar18 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        uVar32 = uVar30;
        func_0x00010c0e9a40(uVar30);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c01e4e0(puVar18);
        func_0x00010c16b340(puVar15);
        _objc_release(puVar18);
        _objc_release(uVar32);
        puVar18 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        uVar32 = uVar30;
        func_0x00010bfbbf00(uVar30);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c01e4e0(puVar18);
        func_0x00010c16b120(puVar15);
        _objc_release(puVar18);
        _objc_release(uVar32);
        puVar18 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        uVar32 = uVar30;
        func_0x00010bf84720(uVar30);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c01e4e0(puVar18);
        func_0x00010c16b0c0(puVar15);
        _objc_release(puVar18);
        _objc_release(uVar32);
        puVar18 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        uVar32 = uVar1;
        func_0x00010c068860(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c01e4e0(puVar18);
        func_0x00010c217ba0(puVar15);
        _objc_release(puVar18);
        _objc_release(uVar32);
        puVar18 = PTR_PTR_1126c0350;
        _objc_alloc(PTR_PTR_1126c0350);
        uVar32 = uVar1;
        func_0x00010c068580(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c01e4e0(puVar18);
        func_0x00010c217b80(puVar15);
        _objc_release(puVar18);
        _objc_release(uVar32);
        func_0x00010c17f580(puVar12);
        func_0x00010befa120(puVar9);
        _objc_release(puVar15);
        _objc_release(uVar30);
        _objc_release(uVar26);
        _objc_release(uVar13);
        _objc_release(puVar17);
        _objc_release(uVar16);
        _objc_release(puVar12);
      }
      _objc_release(uVar1);
      lVar31 = lVar31 + 1;
    } while (lVar31 != lVar10);
    lVar10 = lVar11;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106bbb304; end: 106bbb30f; -[SCUnlockableLensTracker newSwipeInteraction] */

void FUN_106bbb304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_new_11034d2b0)(PTR_PTR_1126c8c40);
  return;
}



/* Entry: 106bbb310; end: 106bbb3eb; -[SCUnlockableLensTracker _newProductInteractionsWith:updateBlock:] */

undefined *
FUN_106bbb310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106bbb3ec;
  puStack_48 = &UNK_110965668;
  _objc_retain();
  puStack_40 = puVar2;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf97ce0(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  uVar1 = uStack_38;
  _objc_retain(puVar2);
  _objc_release(uVar1);
  _objc_release(puStack_40);
  _objc_release(puVar2);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 106bbb3ec; end: 106bbb467;  */

void FUN_106bbb3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  pcVar2 = *(code **)(lVar1 + 0x10);
  _objc_retain(param_2);
  (*pcVar2)(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bbb468; end: 106bbb7d7; -[SCUnlockableLensTracker _updateSnapAdsWithLensCarouselInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106bbb468(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar12 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = param_1;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar4);
        }
        puVar5 = PTR_PTR_1126c8c40;
        uVar14 = *(ulong *)(lStack_128 + lVar16 * 8);
        _objc_retain(uVar14);
        _objc_opt_class(puVar5);
        uVar6 = uVar14;
        _objc_opt_isKindOfClass(uVar14,puVar5);
        uVar1 = uVar14;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar14);
        lVar7 = param_1;
        func_0x00010bdda0e0();
        if ((int)lVar7 != 0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(uVar1);
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = lVar4;
      puVar12 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  puVar5 = puVar3;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126d0f38;
    func_0x00010bf21fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126d0f78;
    _objc_opt_new();
    func_0x00010bf32ae0(param_1);
    func_0x00010c179c80(puVar9);
    lVar2 = param_1;
    func_0x00010c15ffa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcc00(puVar9);
    _objc_release(lVar2);
    func_0x00010c1b7ea0(puVar9);
    func_0x00010c1bcee0(puVar9);
    func_0x00010c164820(puVar9);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cd00();
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cda0(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar10);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar10 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cd20();
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cdc0(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar10);
    func_0x00010c1799c0(puVar9);
    uVar11 = *(undefined8 *)(param_1 + _DAT_112759c2c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    FUN_106bc0af8();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined8 *)puVar5;
    func_0x00010c0e4d40(uVar11);
    _objc_release(puVar5);
    _objc_release(uVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  if (puVar12 != (undefined8 *)0x0) {
    puVar3 = (undefined *)puVar12;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)puVar12;
      func_0x00010c2810a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if (((ulong)puVar5 & 1) == 0) {
        puVar3 = (undefined *)puVar12;
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          uVar13 = 1;
        }
        else {
          puVar5 = (undefined *)puVar12;
          func_0x00010c2813a0(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar5;
          func_0x00010c23e500();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf1f3c0();
          _objc_release(puVar8);
          _objc_release(puVar5);
          _objc_release(puVar3);
          uVar13 = (uint)puVar9 ^ 1;
        }
        goto LAB_106bbb868;
      }
    }
  }
  uVar13 = 0;
LAB_106bbb868:
  _objc_release(puVar12);
  return (undefined *)(ulong)(uVar13 & 1);
}



/* Entry: 106bbb7d8; end: 106bbb8f3; -[SCUnlockableLensTracker _canTrack:] */

uint FUN_106bbb7d8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c2810a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c2813a0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar1 == 0) {
          uVar5 = 1;
        }
        else {
          uVar2 = param_3;
          func_0x00010c2813a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c23e500();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf1f3c0();
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          uVar5 = (uint)uVar4 ^ 1;
        }
        goto LAB_106bbb868;
      }
    }
  }
  uVar5 = 0;
LAB_106bbb868:
  _objc_release(param_3);
  return uVar5 & 1;
}



/* Entry: 106bbb8f4; end: 106bbb9e7; -[SCUnlockableLensTracker _shouldFireModularSessionEndImpressionForAppliedUnlockableIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106bbb8f4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be418a0();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010be42ca0();
    if ((int)lVar1 != 0) {
      lVar5 = (long)_DAT_112759c48;
      lVar2 = *(long *)(param_1 + lVar5);
      func_0x00010c068380();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c2810a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar1 != 0) {
        uVar3 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c068380(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2810a0();
        _objc_retainAutoreleasedReturnValue();
        param_1 = param_3;
        func_0x00010bf4b900(param_3,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        goto LAB_106bbb9c8;
      }
    }
    param_1 = 0;
  }
  else {
    func_0x00010be402c0(param_1);
  }
LAB_106bbb9c8:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106bbb9e8; end: 106bbba0f; -[SCUnlockableLensTracker _isPostCaptureTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106bbb9e8(long param_1)

{
  return (uint)(4 < *(ulong *)(param_1 + _DAT_112759c34)) |
         0xcU >> (ulong)((uint)*(ulong *)(param_1 + _DAT_112759c34) & 0x1f) & 1;
}



/* Entry: 106bbba10; end: 106bbba3b; -[SCUnlockableLensTracker _isLiveCameraTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106bbba10(long param_1)

{
  return (uint)(3 < *(ulong *)(param_1 + _DAT_112759c34)) |
         2U >> (*(ulong *)(param_1 + _DAT_112759c34) & 0xf) & 1;
}



/* Entry: 106bbba3c; end: 106bbba53; -[SCUnlockableLensTracker _isExitEventCaptureEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106bbba3c(long param_1)

{
  return *(long *)(param_1 + _DAT_112759c28) == 6;
}



/* Entry: 106bbba54; end: 106bbbc17; -[SCUnlockableLensTracker trackFlagUnlockableId:reasonId:flagNote:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bbba54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar5 = PTR_s_trackFlagUnlockableId_reasonId_f_11267b9a0;
  puStack_58 = PTR_PTR_1126f5798;
  lStack_60 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_60,puVar5,param_3,param_4,param_5);
  func_0x00010c2967e0(param_1);
  lVar8 = (long)_DAT_112759c48;
  uVar2 = *(ulong *)(param_1 + lVar8);
  func_0x00010c068380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126c8c40;
    _objc_opt_new(PTR_PTR_1126c8c40);
    func_0x00010c21bbe0();
    puVar6 = PTR_PTR_1126d0f10;
    _objc_alloc();
    func_0x00010c01e620();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126d0f80;
  _objc_alloc(PTR_PTR_1126d0f80);
  func_0x00010c01efc0();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c068380(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19da40();
  _objc_release(uVar7);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010bf90780();
  if (iVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c068380(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be17920(param_1);
    _objc_release(uVar7);
  }
  _objc_release(puVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 106bbbc18; end: 106bbbc27; -[SCUnlockableLensTracker lensSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bbbc18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759c20);
}



/* Entry: 106bbbc28; end: 106bbbcc3; -[SCUnlockableLensTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bbbc28(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759c40,0);
  _objc_storeStrong(param_1 + _DAT_112759c3c,0);
  _objc_storeStrong(param_1 + _DAT_112759c48,0);
  _objc_storeStrong(param_1 + _DAT_112759c30,0);
  _objc_storeStrong(param_1 + _DAT_112759c24,0);
  _objc_storeStrong(param_1 + _DAT_112759c38,0);
  _objc_destroyWeak(param_1 + _DAT_112759c44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759c2c,0);
  return;
}



/* Entry: 106bbbcc4; end: 106bbc003; +[SCUnlockableLensTrackerHelpers _commonLensInteractionWithInteraction:] */

void FUN_106bbbcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c8c40;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c21bbe0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfed240(param_3);
  func_0x00010c1ac060(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c095a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1bc480(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2813a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c21bcc0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0da7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1cd7e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c280e20(param_3);
  func_0x00010c21bb40(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c076460(param_3);
  func_0x00010c1b22a0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0da7e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1cd800(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfb2440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c19da40(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c07c360(param_3);
  func_0x00010c1b3da0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0cf060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1c87c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c095800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1bc3e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c096da0(param_3);
  func_0x00010c1bcce0(puVar1,param_2,uVar2);
  func_0x00010bf13560(param_3);
  func_0x00010c16dea0(puVar1);
  uVar2 = param_3;
  func_0x00010bfb6f00(param_3);
  func_0x00010c19f440(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c08fe80(param_3);
  func_0x00010c1ba9e0(puVar1,param_2,uVar2);
  func_0x00010c0c2f60(param_3);
  func_0x00010c1c3800(puVar1);
  func_0x00010c0c1f40(param_3);
  func_0x00010c1c3100(puVar1);
  uVar2 = param_3;
  func_0x00010c0c2d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3640(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c068860(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ae200(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c068580(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1ae0c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bbc004; end: 106bbc0c7; +[SCUnlockableLensTrackerHelpers postAttachmentInteractionWithInteraction:] */

void FUN_106bbc004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bde2500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf0d600(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b360(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf0cf40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf51e00(uVar1);
  func_0x00010c16b1c0(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1ab4c0(param_1,param_2,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bbc0c8; end: 106bbc293; +[SCUnlockableLensTrackerHelpers lensExitInteractionWithInteraction:] */

void FUN_106bbc0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bde2500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1ee0(param_3);
  func_0x00010c19d7a0(param_1);
  uVar1 = param_3;
  func_0x00010bf28e60(param_3);
  func_0x00010c176040(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c2b8140(param_3);
  func_0x00010c226c80(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c2bd1a0(param_3);
  func_0x00010c2271a0(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c06dd80(param_3);
  func_0x00010c1afc60(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c06c960(param_3);
  func_0x00010c1af440(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf93ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  func_0x00010c195a40(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2a8920(param_3);
  func_0x00010c225ca0(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf0d600(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b360(param_1,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010bfb1180(param_3);
  func_0x00010c19cf40(param_1);
  uVar1 = param_3;
  func_0x00010c115fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  func_0x00010c1e3c60(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c264ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf51e00(uVar1);
  func_0x00010c210880(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1ab4c0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106bbc294; end: 106bbc487; +[SCUnlockableLensTrackerHelpers postCatpureInteractionWithInteraction:carouselSessionEndParams:] */

void FUN_106bbc294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bde2500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1ee0(param_3);
  func_0x00010c19d7a0(uVar1);
  uVar2 = param_3;
  func_0x00010bf28e60(param_3);
  func_0x00010c176040(uVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c2b8140(param_3);
  func_0x00010c226c80(uVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c2bd1a0(param_3);
  func_0x00010c2271a0(uVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c06dd80(param_3);
  func_0x00010c1afc60(uVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf7f0a0(param_3);
  func_0x00010c18e160(uVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c25a8c0(param_3);
  func_0x00010c20d640(uVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0c9600(param_3);
  func_0x00010c1c63a0(uVar1,param_2,uVar2);
  func_0x00010c123f40(param_3);
  func_0x00010c1e9020(uVar1);
  func_0x00010c104760(param_3);
  func_0x00010c1df180(uVar1);
  uVar2 = param_3;
  func_0x00010c243600(param_3);
  func_0x00010c2057c0(uVar1,param_2,uVar2);
  func_0x00010c1ab4c0(uVar1,param_2,2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c115fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106bbc488;
  puStack_58 = &UNK_110965698;
  puStack_50 = puVar3;
  uStack_48 = param_1;
  _objc_retain(puVar3);
  func_0x00010bf97ce0(uVar2,param_2,&puStack_70);
  _objc_release(uVar2);
  func_0x00010c1e3c60(uVar1,param_2,puVar3);
  func_0x00010c103ca0(PTR_PTR_1126d0f18,param_2,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(puStack_50);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bbc488; end: 106bbc4f3;  */

void FUN_106bbc488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bdf3780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bbc4f4; end: 106bbc5e3; +[SCUnlockableLensTrackerHelpers _createSnapExitProductInteractionFromProductInteraction:] */

void FUN_106bbc4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126d0f30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c104260(param_3);
  uVar3 = param_3;
  func_0x00010c115e60(param_3);
  uVar4 = param_3;
  func_0x00010c1160a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c29fc00(param_3);
  uVar6 = param_3;
  func_0x00010c29fbe0(param_3);
  uVar7 = param_3;
  func_0x00010c29fbe0();
  _objc_release(param_3);
  func_0x00010c037c60(0,puVar1,param_2,uVar2,uVar3,uVar4,0,uVar5,uVar6,(char)uVar7);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bbc5e4; end: 106bbc5ef; +[SCUnlockableTrackResolver resolveProtoTrackUrl] */

undefined ** FUN_106bbc5e4(void)

{
  return &PTR____CFConstantStringClassReference_110e77c78;
}



/* Entry: 106bbc5f0; end: 106bbc63b; -[SCSnapchatAdsDeviceAdapter getDeviceVolume] */

double FUN_106bbc5f0(float param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  _objc_release(puVar1);
  return (double)param_1;
}



/* Entry: 106bbc63c; end: 106bbc67f; -[SCSnapchatAdsDeviceAdapter isDeviceAudible] */

undefined * FUN_106bbc63c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07a4e0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106bbc680; end: 106bbc783; -[SCSnapchatAdsDeviceAdapter getBatteryData] */

void FUN_106bbc680(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8240();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126c54b8;
  _objc_alloc(PTR_PTR_1126c54b8);
  func_0x00010c01ed20(puStack_68[3]);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bbc784; end: 106bbc863;  */

void FUN_106bbc784(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06d140();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16faa0();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17500();
  *(double *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = (double)(param_1 * 100.0);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf176e0();
  *(bool *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = puVar2 == (undefined *)0x2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bbc864; end: 106bbc8a3; -[SCSnapchatAdsDeviceAdapter getConnectivityType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bbc864(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112759c4c);
  func_0x00010bfc4580();
  if (lVar1 + 1U < 4) {
    uVar2 = *(undefined8 *)(&UNK_10dde7950 + (lVar1 + 1U) * 8);
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 106bbc8a4; end: 106bbc8ff; -[SCSnapchatAdsDeviceAdapter getCarrierName] */

void FUN_106bbc8a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126c1078;
  func_0x00010bf32da0(PTR_PTR_1126c1078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bbc900; end: 106bbc9db; -[SCSnapchatAdsDeviceAdapter getCarrierMCCAndMNC] */

void FUN_106bbc900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126c1078;
  func_0x00010bf32d40(PTR_PTR_1126c1078);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c0da520(puVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR_PTR_1126c1078;
  func_0x00010bf32d60(PTR_PTR_1126c1078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106bbc9dc; end: 106bbc9e3; -[SCSnapchatAdsDeviceAdapter getCellularNetworkType] */

undefined8 FUN_106bbc9dc(void)

{
  return 0;
}



/* Entry: 106bbc9e4; end: 106bbca43; -[SCSnapchatAdsDeviceAdapter getDownloadBandwidthBytesPerSecond] */

void FUN_106bbc9e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf88860();
  func_0x00010c0df780(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bbca44; end: 106bbcaeb; -[SCSnapchatAdsDeviceAdapter getDiskData] */

void FUN_106bbca44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126b24e8;
  func_0x00010c2763c0(PTR_PTR_1126b24e8,param_2,0);
  func_0x00010c0df880(puVar2,param_2,(ulong)puVar1 >> 10);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440(PTR_PTR_1126b24e8,param_2,0);
  func_0x00010c0df880(puVar1,param_2,(ulong)puVar3 >> 10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c54c0;
  _objc_alloc(PTR_PTR_1126c54c0);
  func_0x00010c00c460();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bbcaec; end: 106bbdfa3; -[SCUnlockableTrackerBase fireTrackViaGtqProxyWithProtoViewTrackPayload:protoCreationTrackPayload:unlockablesSnapInfo:trackType:debugAdType:] */

ulong FUN_106bbcaec(undefined **param_1,undefined8 param_2,ulong param_3,undefined **param_4,
                   undefined **param_5,long param_6,long param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  int iVar27;
  ulong uVar28;
  undefined **ppuVar29;
  undefined **unaff_x23;
  undefined **ppuVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_690;
  undefined **ppuStack_688;
  undefined **ppuStack_628;
  undefined **ppuStack_600;
  undefined **ppuStack_5f8;
  undefined *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined *puStack_5d0;
  undefined1 auStack_5c8 [8];
  undefined8 uStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined *puStack_5a0;
  undefined **ppuStack_598;
  undefined1 auStack_590 [8];
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_578;
  long *plStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_538;
  long *plStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined *puStack_4e0;
  undefined1 auStack_4d8 [8];
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  code *pcStack_4b8;
  undefined *puStack_4b0;
  undefined **ppuStack_4a8;
  undefined1 auStack_4a0 [8];
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *apuStack_108 [16];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126d0fc8;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126c0328;
  _objc_alloc_init(PTR_PTR_1126c0328);
  ppuVar26 = (undefined **)PTR_PTR_1126c0328;
  _objc_retain(param_5);
  _objc_opt_class(ppuVar26);
  ppuVar29 = param_5;
  _objc_opt_isKindOfClass(param_5,ppuVar26);
  _objc_release(param_5);
  if ((param_5 == (undefined **)0x0) || (((ulong)ppuVar29 & 1) == 0)) {
    ppuStack_688 = (undefined **)PTR_PTR_1126c0328;
    func_0x00010c2416c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_5);
    ppuStack_688 = param_5;
  }
  _objc_release(puVar3);
  puVar3 = param_1[5];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c02c8;
  ppuVar29 = param_5;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c02b8;
    func_0x00010bdc2180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec560(puVar3);
    _objc_release(puVar4);
    goto LAB_106bbdec8;
  }
  puVar4 = param_1[5];
  func_0x00010c269d40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205c80(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar4);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  if (param_7 != 0) {
    func_0x00010c1d0560(ppuVar5);
  }
  if ((param_3 == 0) || (param_6 != 0)) {
    if ((param_4 != (undefined **)0x0) && (param_6 == 1)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2191e0(puVar2);
      goto LAB_106bbce10;
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2191e0(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c02a8;
    _objc_opt_new(PTR_PTR_1126c02a8);
    puVar4 = param_1[6];
    func_0x00010bf075a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169820(puVar3);
    _objc_release(puVar4);
    puVar4 = param_1[6];
    func_0x00010befdf00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c700(puVar3);
    _objc_release(puVar4);
    puVar4 = param_1[6];
    func_0x00010c0d7700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbfe0(puVar3);
    _objc_release(puVar4);
    puVar4 = param_1[6];
    func_0x00010bef3f80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfdc0(puVar3);
    _objc_release(puVar4);
    func_0x00010c17f560(puVar2);
    ppuVar29 = param_1;
LAB_106bbce10:
    _objc_release(puVar3);
  }
  _objc_retain(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar31 = 0;
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  puVar4 = puVar2;
  func_0x00010c278b00();
  _objc_retainAutoreleasedReturnValue();
  puStack_690 = puVar4;
  func_0x00010bf52a60();
  if (puStack_690 != (undefined *)0x0) {
    lVar24 = *plStack_3c0;
    do {
      puVar25 = (undefined *)0x0;
      do {
        if (*plStack_3c0 != lVar24) {
          _objc_enumerationMutation(puVar4);
        }
        ppuVar6 = *(undefined ***)(lStack_3c8 + (long)puVar25 * 8);
        ppuVar26 = ppuVar6;
        func_0x00010c241660();
        _objc_retainAutoreleasedReturnValue();
        ppuVar30 = ppuVar26;
        func_0x00010bf63f80();
        _objc_release(ppuVar26);
        puStack_6a0 = PTR_PTR_1126d0f88;
        ppuVar26 = ppuVar6;
        if ((int)ppuVar30 == 2) {
          func_0x00010c241660(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
          ppuVar30 = ppuVar26;
          func_0x00010c281680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1194e0();
          _objc_retainAutoreleasedReturnValue();
LAB_106bbcf70:
          _objc_release(ppuVar30);
          _objc_release(ppuVar26);
        }
        else {
          if ((int)ppuVar30 == 1) {
            func_0x00010c241660(ppuVar6);
            _objc_retainAutoreleasedReturnValue();
            ppuVar30 = ppuVar26;
            func_0x00010c2816a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c241680();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106bbcf70;
          }
          puStack_6a0 = (undefined *)0x0;
        }
        ppuVar26 = ppuVar6;
        func_0x00010c277900();
        _objc_retainAutoreleasedReturnValue();
        ppuVar30 = ppuVar26;
        func_0x00010bf5ab80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
        if (ppuVar30 == (undefined **)0x0) {
          puStack_6a8 = (undefined *)0x0;
        }
        else {
          ppuVar29 = ppuVar6;
          func_0x00010c277900(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar29;
          func_0x00010bf5ab80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80();
          puStack_6a8 = puVar7;
          func_0x00010bf651a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          _objc_release(ppuVar29);
          ppuVar29 = (undefined **)puVar7;
        }
        _objc_release(ppuVar30);
        _objc_release(ppuVar26);
        puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        uVar31 = 0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_3d8 = 0;
        uStack_3e0 = 0;
        lStack_408 = 0;
        uStack_410 = 0;
        uStack_3f8 = 0;
        plStack_400 = (long *)0x0;
        ppuVar26 = ppuVar6;
        func_0x00010c277900();
        _objc_retainAutoreleasedReturnValue();
        ppuVar30 = ppuVar26;
        func_0x00010c06a460();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar30;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar30);
        _objc_release(ppuVar26);
        ppuStack_628 = ppuVar8;
        func_0x00010bf52a60();
        if (ppuStack_628 != (undefined **)0x0) {
          lVar22 = *plStack_400;
          do {
            ppuVar26 = (undefined **)0x0;
            do {
              if (*plStack_400 != lVar22) {
                _objc_enumerationMutation(ppuVar8);
              }
              ppuVar9 = *(undefined ***)(lStack_408 + (long)ppuVar26 * 8);
              ppuVar30 = ppuVar9;
              func_0x00010bfea8e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = ppuVar30;
              func_0x00010c27e0e0();
              _objc_release(ppuVar30);
              iVar27 = (int)ppuVar18;
              ppuStack_5f8 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              if (iVar27 == 8) {
                _objc_alloc_init();
                uVar31 = 0;
                uStack_468 = 0;
                uStack_470 = 0;
                uStack_458 = 0;
                uStack_460 = 0;
                lStack_488 = 0;
                uStack_490 = 0;
                uStack_478 = 0;
                plStack_480 = (long *)0x0;
                ppuVar30 = ppuVar9;
                func_0x00010bfea8e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar18 = ppuVar30;
                func_0x00010c090600();
                _objc_retainAutoreleasedReturnValue();
                ppuVar10 = ppuVar18;
                func_0x00010c094740();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar18);
                _objc_release(ppuVar30);
                ppuStack_600 = ppuVar10;
                func_0x00010bf52a60();
                if (ppuStack_600 != (undefined **)0x0) {
                  lVar23 = *plStack_480;
                  do {
                    ppuVar30 = (undefined **)0x0;
                    do {
                      if (*plStack_480 != lVar23) {
                        _objc_enumerationMutation(ppuVar10);
                      }
                      ppuVar29 = *(undefined ***)(lStack_488 + (long)ppuVar30 * 8);
                      puVar11 = PTR_PTR_1126d0fa0;
                      _objc_alloc(PTR_PTR_1126d0fa0);
                      ppuVar18 = ppuVar29;
                      func_0x00010c094540();
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar12 = ppuVar18;
                      func_0x00010c296d80(ppuVar18);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar13 = ppuVar29;
                      func_0x00010bf939a0(ppuVar29);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar14 = ppuVar29;
                      func_0x00010bf93c40(ppuVar29);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar15 = ppuVar29;
                      func_0x00010c2b95c0(ppuVar29);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c296d80();
                      ppuVar16 = ppuVar29;
                      func_0x00010c2ba540(ppuVar29);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c296d80();
                      func_0x00010c2b3c80(ppuVar29);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c296d80();
                      func_0x00010c024400(puVar11);
                      _objc_release(ppuVar29);
                      _objc_release(ppuVar16);
                      _objc_release(ppuVar15);
                      _objc_release(ppuVar14);
                      _objc_release(ppuVar13);
                      _objc_release(ppuVar12);
                      _objc_release(ppuVar18);
                      func_0x00010befa120(ppuStack_5f8);
                      _objc_release(puVar11);
                      ppuVar30 = (undefined **)((long)ppuVar30 + 1);
                    } while (ppuStack_600 != ppuVar30);
                    ppuStack_600 = ppuVar10;
                    func_0x00010bf52a60();
                  } while (ppuStack_600 != (undefined **)0x0);
                }
                _objc_release(ppuVar10);
                unaff_x23 = (undefined **)PTR_PTR_1126d0f98;
                func_0x00010c0980e0(PTR_PTR_1126d0f98);
                _objc_retainAutoreleasedReturnValue();
LAB_106bbd764:
                _objc_release(ppuStack_5f8);
              }
              else {
                if (iVar27 == 0x18) {
                  ppuVar29 = ppuVar9;
                  func_0x00010bfea8e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuStack_5f8 = ppuVar29;
                  func_0x00010c281480();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar29);
                  ppuVar29 = ppuStack_5f8;
                  func_0x00010bf707c0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar30 = ppuVar29;
                  func_0x00010c151040();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar18 = ppuVar30;
                  func_0x00010c2a5040();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar10 = ppuVar18;
                  func_0x00010c296d80();
                  ppuVar12 = ppuStack_5f8;
                  func_0x00010bf707c0(ppuStack_5f8);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar13 = ppuVar12;
                  func_0x00010c151040();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar14 = ppuVar13;
                  func_0x00010bfe0640();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = ppuVar14;
                  func_0x00010c296d80();
                  _objc_release(ppuVar14);
                  _objc_release(ppuVar13);
                  _objc_release(ppuVar12);
                  _objc_release(ppuVar18);
                  _objc_release(ppuVar30);
                  _objc_release(ppuVar29);
                  unaff_x23 = (undefined **)PTR_PTR_1126d0f98;
                  ppuVar30 = ppuStack_5f8;
                  func_0x00010c26fc20(ppuStack_5f8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c296d80();
                  ppuVar18 = ppuStack_5f8;
                  uVar32 = uVar31;
                  func_0x00010c0c4c00(ppuStack_5f8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c296d80();
                  ppuVar12 = ppuStack_5f8;
                  func_0x00010c06c960(ppuStack_5f8);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar29 = ppuVar12;
                  func_0x00010c296d80();
                  ppuVar13 = ppuStack_5f8;
                  func_0x00010bf92c00(ppuStack_5f8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c243d40();
                  func_0x00010c245500();
                  ppuVar14 = ppuStack_5f8;
                  func_0x00010c24a280(ppuStack_5f8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2814c0(uVar31,uVar32,(double)(int)ppuVar10,(double)(int)ppuVar15,
                                      unaff_x23);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar14);
                  _objc_release(ppuVar13);
                  _objc_release(ppuVar12);
                  _objc_release(ppuVar18);
                  _objc_release(ppuVar30);
                  goto LAB_106bbd764;
                }
                if (iVar27 == 9) {
                  _objc_alloc_init();
                  uVar31 = 0;
                  uStack_428 = 0;
                  uStack_430 = 0;
                  uStack_418 = 0;
                  uStack_420 = 0;
                  lStack_448 = 0;
                  uStack_450 = 0;
                  uStack_438 = 0;
                  plStack_440 = (long *)0x0;
                  ppuVar30 = ppuVar9;
                  func_0x00010bfea8e0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar18 = ppuVar30;
                  func_0x00010bfada20();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar10 = ppuVar18;
                  func_0x00010bfadf20();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar18);
                  _objc_release(ppuVar30);
                  ppuStack_600 = ppuVar10;
                  func_0x00010bf52a60();
                  if (ppuStack_600 != (undefined **)0x0) {
                    lVar23 = *plStack_440;
                    do {
                      ppuVar30 = (undefined **)0x0;
                      do {
                        if (*plStack_440 != lVar23) {
                          _objc_enumerationMutation(ppuVar10);
                        }
                        ppuVar29 = *(undefined ***)(lStack_448 + (long)ppuVar30 * 8);
                        puVar11 = PTR_PTR_1126d0f90;
                        _objc_alloc(PTR_PTR_1126d0f90);
                        ppuVar18 = ppuVar29;
                        func_0x00010bfc1680();
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar12 = ppuVar18;
                        func_0x00010c296d80(ppuVar18);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar13 = ppuVar29;
                        func_0x00010bf939a0(ppuVar29);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar14 = ppuVar29;
                        func_0x00010bf93c40(ppuVar29);
                        _objc_retainAutoreleasedReturnValue();
                        ppuVar15 = ppuVar29;
                        func_0x00010c2b95c0(ppuVar29);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c296d80();
                        ppuVar16 = ppuVar29;
                        func_0x00010c2ba540(ppuVar29);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c296d80();
                        func_0x00010c2b3c80(ppuVar29);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c296d80();
                        func_0x00010c0178e0(puVar11);
                        _objc_release(ppuVar29);
                        _objc_release(ppuVar16);
                        _objc_release(ppuVar15);
                        _objc_release(ppuVar14);
                        _objc_release(ppuVar13);
                        _objc_release(ppuVar12);
                        _objc_release(ppuVar18);
                        func_0x00010befa120(ppuStack_5f8);
                        _objc_release(puVar11);
                        ppuVar30 = (undefined **)((long)ppuVar30 + 1);
                      } while (ppuStack_600 != ppuVar30);
                      ppuStack_600 = ppuVar10;
                      func_0x00010bf52a60();
                    } while (ppuStack_600 != (undefined **)0x0);
                  }
                  _objc_release(ppuVar10);
                  unaff_x23 = (undefined **)PTR_PTR_1126d0f98;
                  func_0x00010bfae940(PTR_PTR_1126d0f98);
                  _objc_retainAutoreleasedReturnValue();
                  goto LAB_106bbd764;
                }
                unaff_x23 = (undefined **)0x0;
              }
              puVar11 = PTR_PTR_1126d0fa8;
              _objc_alloc(PTR_PTR_1126d0fa8);
              func_0x00010c15ffa0(ppuVar9);
              _objc_retainAutoreleasedReturnValue();
              ppuVar30 = ppuVar9;
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0450a0(puVar11);
              _objc_release(ppuVar30);
              _objc_release(ppuVar9);
              func_0x00010befa120(puVar7);
              _objc_release(puVar11);
              _objc_release(unaff_x23);
              ppuVar26 = (undefined **)((long)ppuVar26 + 1);
            } while (ppuVar26 != ppuStack_628);
            ppuStack_628 = ppuVar8;
            func_0x00010bf52a60();
          } while (ppuStack_628 != (undefined **)0x0);
        }
        _objc_release(ppuVar8);
        puVar11 = PTR_PTR_1126d0fb0;
        _objc_alloc(PTR_PTR_1126d0fb0);
        func_0x00010c277900(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuVar26 = ppuVar6;
        func_0x00010c0deaa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        func_0x00010c0067c0(puVar11);
        _objc_release(ppuVar26);
        _objc_release(ppuVar6);
        puVar17 = PTR_PTR_1126d0fb8;
        _objc_alloc(PTR_PTR_1126d0fb8);
        func_0x00010c0480c0();
        func_0x00010befa120(puVar3);
        _objc_release(puVar17);
        _objc_release(puVar11);
        _objc_release(puVar7);
        _objc_release(puStack_6a8);
        _objc_release(puStack_6a0);
        puVar25 = puVar25 + 1;
      } while (puVar25 != puStack_690);
      puStack_690 = puVar4;
      func_0x00010bf52a60();
    } while (puStack_690 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d0fc0;
  _objc_alloc();
  puVar25 = puVar2;
  func_0x00010c244040();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf42ac0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055060();
  _objc_release(puVar7);
  _objc_release(puVar25);
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar26 = param_1;
  _objc_initWeak(apuStack_108,param_1);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  if (param_6 == 0) {
    ppuVar30 = ppuStack_688;
    func_0x00010c098320();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_600 = ppuVar30;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar30);
    ppuVar30 = ppuStack_688;
    func_0x00010c08bdc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar30;
    func_0x00010c08fa60();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar6 = ppuStack_600;
      func_0x00010bf529e0();
      _objc_release(ppuVar30);
      if (ppuVar6 == (undefined **)0x0) goto LAB_106bbdea8;
    }
    else {
      _objc_release(ppuVar30);
    }
    iVar27 = (int)param_1[9];
    func_0x00010c082040();
    if (iVar27 != 0) {
      puVar3 = param_1[4];
      func_0x00010c13e1a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = (undefined **)param_1[10];
      func_0x00010c269d40(ppuVar29);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f880();
      _objc_release(ppuVar29);
      _objc_release(puVar3);
    }
    puVar25 = param_1[9];
    func_0x00010c2324e0();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    if (((ulong)puVar25 & 1) == 0) {
      ppuVar29 = (undefined **)param_1[4];
      puStack_4c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_4c0 = 0xc2000000;
      pcStack_4b8 = FUN_106bbdfe8;
      puStack_4b0 = &UNK_110965708;
      _objc_retain(ppuVar5);
      ppuStack_4a8 = ppuVar5;
      uStack_498 = uVar31;
      _objc_copyWeak(auStack_4a0,apuStack_108);
      puStack_4f8 = puVar3;
      uStack_4f0 = 0xc2000000;
      uStack_4e8 = 0x106bbe06c;
      puStack_4e0 = &UNK_110965738;
      unaff_x23 = &puStack_4f8;
      ppuVar26 = apuStack_108;
      uStack_4d0 = uVar31;
      _objc_copyWeak(auStack_4d8,ppuVar26);
      func_0x00010bfb0500(ppuVar29);
      _objc_destroyWeak(auStack_4d8);
      _objc_destroyWeak(auStack_4a0);
      _objc_release(ppuStack_4a8);
    }
LAB_106bbdea8:
    _objc_release(ppuStack_600);
  }
  else if (param_6 == 1) {
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    uStack_510 = 0;
    lStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    plStack_530 = (long *)0x0;
    ppuVar29 = param_4;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar30 = ppuVar29;
    func_0x00010c06a460();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_600 = ppuVar30;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar30);
    _objc_release(ppuVar29);
    ppuVar30 = ppuStack_600;
    func_0x00010bf52a60();
    ppuVar29 = (undefined **)0x0;
    if (ppuVar30 != (undefined **)0x0) {
      bVar1 = false;
      lVar24 = *plStack_530;
      do {
        ppuVar29 = (undefined **)0x0;
        do {
          if (*plStack_530 != lVar24) {
            _objc_enumerationMutation(ppuStack_600);
          }
          ppuVar18 = *(undefined ***)(lStack_538 + (long)ppuVar29 * 8);
          lStack_578 = 0;
          uStack_580 = 0;
          uStack_568 = 0;
          plStack_570 = (long *)0x0;
          uStack_558 = 0;
          uStack_560 = 0;
          uStack_548 = 0;
          uStack_550 = 0;
          func_0x00010bfea8e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar18;
          func_0x00010c090600();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar6;
          func_0x00010c094740();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar6);
          _objc_release(ppuVar18);
          unaff_x23 = ppuVar8;
          func_0x00010bf52a60();
          if (unaff_x23 != (undefined **)0x0) {
            lVar22 = *plStack_570;
            do {
              ppuVar6 = (undefined **)0x0;
              do {
                if (*plStack_570 != lVar22) {
                  _objc_enumerationMutation(ppuVar8);
                }
                uVar28 = *(ulong *)(lStack_578 + (long)ppuVar6 * 8);
                uVar19 = uVar28;
                func_0x00010bf939a0();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = uVar19;
                func_0x00010c08fa60();
                if (uVar20 != 0) {
                  _objc_release(uVar19);
LAB_106bbdb50:
                  uVar19 = uVar28;
                  func_0x00010c2b95c0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar20 = uVar19;
                  func_0x00010c296d80();
                  if ((uVar20 & 1) == 0) {
                    uVar20 = uVar28;
                    func_0x00010c2ba540();
                    _objc_retainAutoreleasedReturnValue();
                    uVar21 = uVar20;
                    func_0x00010c296d80();
                    if ((int)uVar21 != 0) {
                      _objc_release(uVar20);
                      goto LAB_106bbdbf4;
                    }
                    func_0x00010c2b3c80();
                    _objc_retainAutoreleasedReturnValue();
                    uVar21 = uVar28;
                    func_0x00010c296d80();
                    _objc_release(uVar28);
                    _objc_release(uVar20);
                    _objc_release(uVar19);
                    if ((uVar21 & 1) == 0) goto LAB_106bbdbc0;
                  }
                  else {
LAB_106bbdbf4:
                    _objc_release(uVar19);
                  }
                  bVar1 = true;
                  goto LAB_106bbdc04;
                }
                uVar20 = uVar28;
                func_0x00010bf93c40();
                _objc_retainAutoreleasedReturnValue();
                uVar21 = uVar20;
                func_0x00010c08fa60();
                _objc_release(uVar20);
                _objc_release(uVar19);
                if (uVar21 != 0) goto LAB_106bbdb50;
LAB_106bbdbc0:
                ppuVar6 = (undefined **)((long)ppuVar6 + 1);
              } while (unaff_x23 != ppuVar6);
              unaff_x23 = ppuVar8;
              func_0x00010bf52a60();
            } while (unaff_x23 != (undefined **)0x0);
          }
LAB_106bbdc04:
          _objc_release(ppuVar8);
          ppuVar29 = (undefined **)((long)ppuVar29 + 1);
        } while (ppuVar29 != ppuVar30);
        ppuVar30 = ppuStack_600;
        func_0x00010bf52a60();
      } while (ppuVar30 != (undefined **)0x0);
      _objc_release(ppuStack_600);
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      ppuVar29 = (undefined **)0x0;
      if (!bVar1) goto LAB_106bbdeb0;
      puVar25 = param_1[4];
      puStack_5b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_5b0 = 0xc2000000;
      uStack_5a8 = 0x106bbe0f0;
      puStack_5a0 = &UNK_110965708;
      _objc_retain(ppuVar5);
      ppuVar29 = &puStack_5b8;
      ppuStack_598 = ppuVar5;
      uStack_588 = uVar31;
      _objc_copyWeak(auStack_590,apuStack_108);
      puStack_5e8 = puVar3;
      uStack_5e0 = 0xc2000000;
      uStack_5d8 = 0x106bbe174;
      puStack_5d0 = &UNK_110965738;
      unaff_x23 = &puStack_5e8;
      ppuVar26 = apuStack_108;
      uStack_5c0 = uVar31;
      _objc_copyWeak(auStack_5c8,ppuVar26);
      func_0x00010bfb0520(puVar25);
      _objc_destroyWeak(auStack_5c8);
      _objc_destroyWeak(auStack_590);
      ppuStack_600 = ppuStack_598;
    }
    goto LAB_106bbdea8;
  }
LAB_106bbdeb0:
  _objc_destroyWeak(apuStack_108);
  _objc_release(puVar4);
  _objc_release(ppuVar5);
LAB_106bbdec8:
  _objc_release(ppuStack_688);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(ppuVar29 + 5);
  _objc_destroyWeak(apuStack_108);
  __Unwind_Resume(param_3);
  func_0x00010bef2c20(ppuVar26);
  _objc_retainAutoreleasedReturnValue();
  ppuVar29 = ppuVar26;
  func_0x00010c08fa60();
  _objc_release(ppuVar26);
  return (ulong)(ppuVar29 != (undefined **)0x0);
}



/* Entry: 106bbdfa4; end: 106bbdfe7;  */

bool FUN_106bbdfa4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bef2c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 106bbdfe8; end: 106bbe1f7;  */

void FUN_106bbdfe8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  dVar2 = *(double *)(param_2 + 0x30);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be548c0(param_1 - dVar2,param_2,param_3,puVar1,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bbe1f8; end: 106bbe3cb; -[SCUnlockableTrackerBase _logGtqTrackRequestMetric:latencyMs:isCreationTrack:] */

void FUN_106bbe1f8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010bfcfb80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e77cb8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db5dd8;
  }
  _objc_retain(ppuVar1);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110f24c78,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = param_3;
  func_0x00010c25d700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf4d8,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010bfcfb60(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106bbe3cc; end: 106bbe48f; -[SCUnlockableTrackerBase constructLogDictionaryWithProtoMessage:unlockableSnapInfo:] */

void FUN_106bbe3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e77cd8);
  _objc_release(uVar2);
  if (param_4 != 0) {
    func_0x00010c1d0560(puVar1,param_2,param_4,&PTR____CFConstantStringClassReference_110e77cf8);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bbe490; end: 106bbe52b; -[SCUnlockableTrackerBase .cxx_destruct] */

void FUN_106bbe490(long param_1)

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



/* Entry: 106bbe52c; end: 106bbe533; -[SCUnlockableTracker shouldFireCreationTrackViaGtqProxy] */

undefined8 FUN_106bbe52c(void)

{
  return 1;
}



/* Entry: 106bbe534; end: 106bbe617; -[SCUnlockableTracker endSessionWithCommonLoggingParameters:appliedUnlockableId:] */

void FUN_106bbe534(float param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar2 = param_4;
  if (param_5 == 0) {
    _objc_retain(param_4);
    puVar4 = (undefined *)0x0;
    func_0x00010bf95480(param_2,param_3,param_4,0);
  }
  else {
    lStack_40 = param_5;
    _objc_retain(param_4);
    func_0x00010bf0a140(puVar1,param_3,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf95480(param_2,param_3,param_4,puVar1);
    _objc_release(param_4);
    param_4 = puVar1;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106bbe840;
  puStack_90 = &UNK_110965768;
  lStack_88 = param_5;
  func_0x00010c0b8620(puVar4,param_3,&puStack_a8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106bbe850;
  puStack_b8 = &UNK_110965798;
  _objc_retain(puVar2);
  puStack_b0 = puVar2;
  func_0x00010bf97e80(puVar4,param_3,&puStack_d0);
  _objc_release(puVar4);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x00010c0c6c20(puVar2);
    func_0x00010c1af440(param_5,param_3,
                        (uint)((undefined *)0x1b < puVar1 + 1) |
                        0x4b4a244U >> (ulong)((uint)(puVar1 + 1) & 0x1f) & 1);
    func_0x00010c226e00(param_5,param_3,1);
    puVar1 = puVar2;
    func_0x00010bfb1de0(puVar2);
    func_0x00010c1799a0(param_5,param_3,puVar1);
    puVar1 = puVar2;
    func_0x00010c264640(puVar2);
    func_0x00010c210580(param_5,param_3,puVar1);
    puVar1 = puVar2;
    func_0x00010bfada80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfc1280();
    func_0x00010c1a2c00(param_5,param_3,puVar4);
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c243700();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x00010c0c4ba0(puVar2);
      param_1 = param_1 * 1000.0;
      lVar3 = (long)param_1;
    }
    else {
      lVar3 = -1;
    }
    func_0x00010c205860(param_5,param_3,lVar3);
    func_0x00010c29e480(puVar2);
    func_0x00010c2050a0(param_5,param_3,(long)(param_1 * 1000.0));
    puVar1 = puVar2;
    func_0x00010bfbb160(puVar2);
    func_0x00010c176040(param_5,param_3,(ulong)puVar1 & 0xffffffff);
    puVar1 = puVar2;
    func_0x00010c0c6c20(puVar2);
    func_0x00010b67b220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df140(param_5,param_3,puVar1);
    _objc_release(puVar1);
  }
  puVar1 = puVar2;
  func_0x00010c272420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb0800(param_5,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(puStack_b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106bbe618; end: 106bbe83f; -[SCUnlockableTracker endSessionWithCommonLoggingParameters:appliedUnlockableIds:] */

void FUN_106bbe618(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106bbe840;
  puStack_50 = &UNK_110965768;
  uStack_48 = param_2;
  func_0x00010c0b8620(param_5,param_3,&puStack_68,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x106bbe850;
  puStack_78 = &UNK_110965798;
  _objc_retain(param_4);
  uStack_70 = param_4;
  func_0x00010bf97e80(param_5,param_3,&puStack_90);
  _objc_release(param_5);
  if (param_4 != 0) {
    uVar2 = param_4;
    func_0x00010c0c6c20(param_4);
    func_0x00010c1af440(param_2,param_3,
                        (uint)(0x1b < uVar2 + 1) |
                        0x4b4a244U >> (ulong)((uint)(uVar2 + 1) & 0x1f) & 1);
    func_0x00010c226e00(param_2,param_3,1);
    uVar2 = param_4;
    func_0x00010bfb1de0(param_4);
    func_0x00010c1799a0(param_2,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c264640(param_4);
    func_0x00010c210580(param_2,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010bfada80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfc1280();
    func_0x00010c1a2c00(param_2,param_3,uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c243700();
    if ((uVar2 & 1) == 0) {
      func_0x00010c0c4ba0(param_4);
      param_1 = param_1 * 1000.0;
      lVar4 = (long)param_1;
    }
    else {
      lVar4 = -1;
    }
    func_0x00010c205860(param_2,param_3,lVar4);
    func_0x00010c29e480(param_4);
    func_0x00010c2050a0(param_2,param_3,(long)(param_1 * 1000.0));
    uVar2 = param_4;
    func_0x00010bfbb160(param_4);
    func_0x00010c176040(param_2,param_3,uVar2 & 0xffffffff);
    uVar2 = param_4;
    func_0x00010c0c6c20(param_4);
    func_0x00010b67b220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df140(param_2,param_3,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c272420(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb0800(param_2,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bbe840; end: 106bbe867;  */

void FUN_106bbe840(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd8),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 106bbe868; end: 106bbe90b; -[SCUnlockableTracker addInteraction:forKey:] */

void FUN_106bbe868(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
    func_0x00010c1fcfa0(param_3);
    lVar1 = *(long *)(param_1 + 0xd8);
    func_0x00010c0e00e0(lVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bed9c60(param_1,param_2,param_3,lVar1);
    }
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xd8),param_2,param_3,param_4);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bbe90c; end: 106bbe97b; -[SCUnlockableTracker addPostCaptureInteraction:forKey:] */

void FUN_106bbe90c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xd8);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c103cc0(PTR_PTR_1126d0f18,param_2,lVar1,param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bbe97c; end: 106bbea63; -[SCUnlockableTracker trackFlagUnlockableId:reasonId:flagNote:] */

void FUN_106bbe97c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = *(long *)(param_1 + 0xd8);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010c0d9120(param_1);
      func_0x00010c21bbe0();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xd8),param_2,lVar2,param_3);
    }
    puVar1 = PTR_PTR_1126d0f80;
    _objc_alloc(PTR_PTR_1126d0f80);
    func_0x00010c01efc0();
    _objc_release(param_5);
    _objc_release(param_4);
    func_0x00010c19da40(lVar2,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bbea64; end: 106bbeac3; -[SCUnlockableTracker fireTrackWithSnapInfo:] */

void FUN_106bbea64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(uVar6);
  uVar2 = *(undefined8 *)(puVar1 + 0xe0);
  func_0x00010bf93ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6820(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d0fd0;
  func_0x00010c13ac20(PTR_PTR_1126d0fd0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf21f60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bdc56c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar5 = puVar3;
  func_0x00010848cffc(puVar3,0,0,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c2bbae0(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar1 + 8);
  _objc_retain(uVar6);
  func_0x00010c0f7fc0(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(uVar2);
  return;
}



/* Entry: 106bbeac4; end: 106bbec23; -[SCUnlockableTracker _fireProtoAdTrackViaSnapAdsClient:] */

void FUN_106bbeac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010bf93ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6820(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0fd0;
  func_0x00010c13ac20(PTR_PTR_1126d0fd0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf21f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdc56c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar4 = puVar2;
  func_0x00010848cffc(puVar2,0,0,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2bbae0(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar5);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(puVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 106bbec24; end: 106bbec63;  */

void FUN_106bbec24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278ac0(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bbec64; end: 106bbecb3; -[SCUnlockableTracker _adProductTypeFromAdType:] */

void FUN_106bbec64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010bef60a0();
  if (param_3 == 0xc) {
    uVar1 = 0x14;
  }
  else {
    if (param_3 != 0xb) goto LAB_106bbecac;
    uVar1 = 0x13;
  }
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_106bbecac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bbecb4; end: 106bbedf7; -[SCUnlockableTracker _updateInteraction:existingInteraction:] */

void FUN_106bbecb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c264ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = param_3;
  func_0x00010c264ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  puVar1 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c210880(param_3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010c243600(param_4);
  func_0x00010c2057c0(param_3,param_2,puVar1);
  puVar1 = param_4;
  func_0x00010bfb2440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_4;
    func_0x00010bfb2440(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19da40(param_3,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bbedf8; end: 106bbee4b; -[SCUnlockableTracker newSwipeInteraction] */

void FUN_106bbedf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar9 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar9);
  _objc_retain(uVar8);
  uVar1 = uVar8;
  func_0x00010c2b9780();
  if ((int)uVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126d0fd8;
    _objc_alloc(PTR_PTR_1126d0fd8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf28e60(uVar8);
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c960(uVar8);
    uVar1 = uVar8;
    func_0x00010c104720(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c2426a0(uVar8);
    func_0x00010c0df7a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c243720(uVar8);
    func_0x00010c0df7a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c264640(uVar8);
    func_0x00010c0df840(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfc1280(uVar8);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d0f38;
    func_0x00010bf32680(uVar8);
    func_0x00010bf97140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffaf80(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106bbee4c; end: 106bbf027; +[SCUnlockableTracker buildAdSnapCreationInfoFromTracker:] */

void FUN_106bbee4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2b9780();
  if ((int)uVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126d0fd8;
    _objc_alloc(PTR_PTR_1126d0fd8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_3;
    func_0x00010bf28e60(param_3);
    func_0x00010c0df780(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c06c960(param_3);
    uVar3 = param_3;
    func_0x00010c104720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010c2426a0(param_3);
    func_0x00010c0df7a0(puVar5,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010c243720(param_3);
    func_0x00010c0df7a0(puVar6,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010c264640(param_3);
    func_0x00010c0df840(puVar7,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010bfc1280(param_3);
    func_0x00010c0df840(puVar8,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126d0f38;
    uVar4 = param_3;
    func_0x00010bf32680(param_3);
    func_0x00010bf97140(puVar9,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffaf80(puVar10,param_2,puVar2,uVar1,uVar3,puVar5,puVar6,puVar7,puVar8,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106bbf028; end: 106bbf203; +[SCUnlockableTracker buildUnlockableSnapCreationInfoFromTracker:] */

void FUN_106bbf028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2b9780();
  if ((int)uVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126d0fd8;
    _objc_alloc(PTR_PTR_1126d0fd8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = param_3;
    func_0x00010bf28e60(param_3);
    func_0x00010c0df780(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c06c960(param_3);
    uVar3 = param_3;
    func_0x00010c104720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010c2426a0(param_3);
    func_0x00010c0df7a0(puVar5,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010c243720(param_3);
    func_0x00010c0df7a0(puVar6,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010c264640(param_3);
    func_0x00010c0df840(puVar7,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar4 = param_3;
    func_0x00010bfc1280(param_3);
    func_0x00010c0df840(puVar8,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126d0f38;
    uVar4 = param_3;
    func_0x00010bf32680(param_3);
    func_0x00010bf97140(puVar9,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffaf80(puVar10,param_2,puVar2,uVar1,uVar3,puVar5,puVar6,puVar7,puVar8,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106bbf204; end: 106bbf253; +[SCUnlockableTracker entryDirectionFromSCASwipeDirection:] */

void FUN_106bbf204(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR_PTR_110a4af30;
  if (param_3 != 1) {
    ppuVar1 = &PTR_PTR_110a4af20;
  }
  ppuVar2 = &PTR_PTR_110a4af28;
  if (param_3 != 0) {
    ppuVar2 = ppuVar1;
  }
  puVar3 = *ppuVar2;
  _objc_retain(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bbf254; end: 106bbf25b; -[SCUnlockableTracker sessionId] */

undefined8 FUN_106bbf254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106bbf25c; end: 106bbf263; -[SCUnlockableTracker setSessionId:] */

void FUN_106bbf25c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106bbf264; end: 106bbf26b; -[SCUnlockableTracker carouselSize] */

undefined8 FUN_106bbf264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106bbf26c; end: 106bbf273; -[SCUnlockableTracker setCarouselSize:] */

void FUN_106bbf26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 106bbf274; end: 106bbf27b; -[SCUnlockableTracker withSnapTaken] */

undefined1 FUN_106bbf274(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 106bbf27c; end: 106bbf283; -[SCUnlockableTracker setWithSnapTaken:] */

void FUN_106bbf27c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 106bbf284; end: 106bbf28b; -[SCUnlockableTracker camera] */

undefined8 FUN_106bbf284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106bbf28c; end: 106bbf293; -[SCUnlockableTracker setCamera:] */

void FUN_106bbf28c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 106bbf294; end: 106bbf29b; -[SCUnlockableTracker isAudioOn] */

undefined1 FUN_106bbf294(long param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}



/* Entry: 106bbf29c; end: 106bbf2a3; -[SCUnlockableTracker setIsAudioOn:] */

void FUN_106bbf29c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x81) = param_3;
  return;
}



/* Entry: 106bbf2a4; end: 106bbf2ab; -[SCUnlockableTracker postCaptureMediaType] */

undefined8 FUN_106bbf2a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106bbf2ac; end: 106bbf2db; -[SCUnlockableTracker setPostCaptureMediaType:] */

void FUN_106bbf2ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bbf2dc; end: 106bbf2e3; -[SCUnlockableTracker snapPreviewMillis] */

undefined8 FUN_106bbf2dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106bbf2e4; end: 106bbf2eb; -[SCUnlockableTracker setSnapPreviewMillis:] */

void FUN_106bbf2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 106bbf2ec; end: 106bbf2f3; -[SCUnlockableTracker snapTimeMillis] */

undefined8 FUN_106bbf2ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106bbf2f4; end: 106bbf2fb; -[SCUnlockableTracker setSnapTimeMillis:] */

void FUN_106bbf2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 106bbf2fc; end: 106bbf303; -[SCUnlockableTracker sequenceNumber] */

undefined8 FUN_106bbf2fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106bbf304; end: 106bbf30b; -[SCUnlockableTracker setSequenceNumber:] */

void FUN_106bbf304(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 106bbf30c; end: 106bbf313; -[SCUnlockableTracker swipeCount] */

undefined8 FUN_106bbf30c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106bbf314; end: 106bbf31b; -[SCUnlockableTracker setSwipeCount:] */

void FUN_106bbf314(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 106bbf31c; end: 106bbf323; -[SCUnlockableTracker geoFilterLoadedCount] */

undefined8 FUN_106bbf31c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106bbf324; end: 106bbf32b; -[SCUnlockableTracker setGeoFilterLoadedCount:] */

void FUN_106bbf324(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 106bbf32c; end: 106bbf333; -[SCUnlockableTracker carouselEntrySwipeDirection] */

undefined8 FUN_106bbf32c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106bbf334; end: 106bbf33b; -[SCUnlockableTracker setCarouselEntrySwipeDirection:] */

void FUN_106bbf334(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 106bbf33c; end: 106bbf343; -[SCUnlockableTracker interactions] */

undefined8 FUN_106bbf33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106bbf344; end: 106bbf373; -[SCUnlockableTracker setInteractions:] */

void FUN_106bbf344(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bbf374; end: 106bbf37b; -[SCUnlockableTracker preferences] */

undefined8 FUN_106bbf374(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106bbf37c; end: 106bbf3ab; -[SCUnlockableTracker setPreferences:] */

void FUN_106bbf37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bbf3ac; end: 106bbf423; -[SCUnlockableTracker .cxx_destruct] */

void FUN_106bbf3ac(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,0);
  return;
}



/* Entry: 106bbf424; end: 106bbf55b; +[SCUnlockableTrackerHelpers populateInteraction:withCarouselSessionEndParams:] */

void FUN_106bbf424(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_4;
  func_0x00010c23fde0();
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_4;
    func_0x00010c0d22c0();
    if ((long)uVar5 < 2) {
      uVar5 = 1;
    }
  }
  func_0x00010c2054c0(param_3,param_2,uVar5);
  lVar1 = param_3;
  func_0x00010c243600(param_3);
  func_0x00010c2057c0(param_3,param_2,lVar1 + 1);
  uVar5 = param_4;
  func_0x00010c23fde0();
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_4;
    func_0x00010c122b20();
    if ((long)uVar5 < 2) {
      uVar5 = 1;
    }
  }
  func_0x00010c18e160(param_3,param_2,uVar5);
  uVar5 = param_4;
  func_0x00010c2aea60();
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_4;
    func_0x00010c14a280();
    if ((long)uVar5 < 2) {
      uVar5 = 1;
    }
  }
  func_0x00010c1c63a0(param_3,param_2,uVar5);
  uVar5 = param_4;
  func_0x00010c2b4400();
  if (((uVar5 & 1) == 0) && (uVar5 = param_4, func_0x00010c2b51a0(), (uVar5 & 1) == 0)) {
    uVar5 = param_4;
    func_0x00010c2aef40(param_4);
    uVar5 = uVar5 & 0xffffffff;
  }
  else {
    uVar5 = 1;
  }
  uVar2 = param_4;
  func_0x00010bfcf360(param_4);
  uVar3 = param_4;
  func_0x00010c22c060(param_4);
  uVar4 = param_4;
  func_0x00010c0e1ae0(param_4);
  func_0x00010c20d640(param_3,param_2,uVar2 + uVar5 + uVar3 + uVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


