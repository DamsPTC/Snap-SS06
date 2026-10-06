/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10680c614; end: 10680c66f; -[SCSearchSuggestionsNavigationServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680c614(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127514c8,0);
  _objc_storeStrong(param_1 + _DAT_1127514c4,0);
  _objc_storeStrong(param_1 + _DAT_1127514c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127514bc);
  return;
}



/* Entry: 10680c670; end: 10680c6af; -[SCSpotlightNavigationDelegateImpl navigateToSpotlightFromSourcePage:] */

void FUN_10680c670(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x0001005929c0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c23a2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_showSpotlightTabFromSourcePage__11266c2d8,
               param_3);
    return;
  }
  return;
}



/* Entry: 10680c6b0; end: 10680c717; -[SCSpotlightNavigationDelegateImpl navigateToSpotlightWithDeepLinkURL:additionalInfo:] */

void FUN_10680c6b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x0001005929c0();
  if (iVar1 != 0) {
    func_0x00010c23a260(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680c718; end: 10680c777; -[SCSpotlightNavigationDelegateImpl .cxx_destruct] */

void FUN_10680c718(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10680c778; end: 10680c7b3; -[SCSpotlightNavigationServiceImpl removeSpotlightScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680c778(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127514d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10680c7b4; end: 10680c88f; -[SCSpotlightNavigationServiceImpl showSpotlightTabForNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680c7b4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11275152c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010beb4d40(param_1,param_2,param_3);
  if ((int)lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    if (lVar3 == 0) {
      lVar2 = param_3;
      func_0x00010bf38cc0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = (long)_DAT_112751530;
    _objc_retain(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar2;
    _objc_release(uVar1);
    if (lVar3 == 0) {
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
  func_0x00010c23a260(param_1,param_2,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680c890; end: 10680c9a7; -[SCSpotlightNavigationServiceImpl _shouldPrependStoryIdToPlaylistWithNotification:] */

bool FUN_10680c890(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_10680c968:
    bVar1 = false;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    bVar1 = false;
    if (uVar2 == 0) goto LAB_10680c974;
    uVar2 = param_3;
    func_0x00010c0752e0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c260c20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7210;
      func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7210);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,ppuVar4);
      _objc_release(ppuVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((int)uVar5 != 0) {
        uVar2 = param_3;
        func_0x00010c11c420();
        if ((uVar2 != 0xb3) && (uVar2 = param_3, func_0x00010c11c420(), uVar2 != 0xb5)) {
          uVar2 = param_3;
          func_0x00010c11c420(param_3);
          bVar1 = uVar2 != 0xb4;
          goto LAB_10680c974;
        }
        goto LAB_10680c968;
      }
    }
    bVar1 = true;
  }
LAB_10680c974:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10680c9a8; end: 10680c9e7; -[SCSpotlightNavigationServiceImpl showSpotlightTabFromSourcePage:] */

void FUN_10680c9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
                    /* WARNING: Could not recover jumptable at 0x00010bebb210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showSpotlightTabFromSourcePage__11258c628,param_3,0,puVar1,0);
  return;
}



/* Entry: 10680c9e8; end: 10680ca6b; -[SCSpotlightNavigationServiceImpl showSpotlightTabForCompositeStoryId:fromSourcePage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680c9e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = (long)_DAT_112751530;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bebb200(param_1,param_2,param_4,0,puVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680ca6c; end: 10680cacb; -[SCSpotlightNavigationServiceImpl showSpotlightTabFromSourcePage:feedType:] */

void FUN_10680ca6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_4);
  func_0x00010bf098c0(puVar1);
  func_0x00010bebb200(param_1,param_2,param_3,param_4,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10680cacc; end: 10680cba7; -[SCSpotlightNavigationServiceImpl showSpotlightWidgetOnSpotlightTabFromSourcePage:clientIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680cacc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    *(undefined1 *)(param_1 + _DAT_112751534) = 1;
    lVar4 = (long)_DAT_112751538;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_4;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bf098c0();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bebb200(param_1,param_2,param_3,0,0,0);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11275151c);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf1f3c0();
      func_0x00010bebb200(param_1,param_2,param_3,0,(uint)uVar1 ^ 1,0);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10680cba8; end: 10680cc1b; -[SCSpotlightNavigationServiceImpl showSpotlightWidgetOnSpotlightTabFromSourcePage:clientIds:thumbnail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680cba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751504);
  *(undefined8 *)(param_1 + _DAT_112751504) = param_5;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010c23a320(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10680cc1c; end: 10680ccdf; -[SCSpotlightNavigationServiceImpl showSpotlightWidgetOnSpotlightTabFromSourcePage:clientIds:thumbnail:mediaTypes:spotlightDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680cc1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275153c);
  *(undefined8 *)(param_1 + _DAT_11275153c) = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751540);
  *(undefined8 *)(param_1 + _DAT_112751540) = param_7;
  _objc_release(uVar1);
  _objc_release(param_6);
  func_0x00010c23a340(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10680cce0; end: 10680cd17; -[SCSpotlightNavigationServiceImpl stashDeferredSpotlightNavRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680cce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751544);
  *(undefined8 *)(param_1 + _DAT_112751544) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10680cd18; end: 10680cd5f; -[SCSpotlightNavigationServiceImpl consumeDeferredSpotlightNavRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680cd18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112751544;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10680cd60; end: 10680ce27; -[SCSpotlightNavigationServiceImpl _showSpotlightTabFromSourcePage:feedType:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680cd60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  *(undefined8 *)(param_1 + _DAT_1127514ec) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751548);
  *(undefined8 *)(param_1 + _DAT_112751548) = param_4;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c29c100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde5ea0(param_1,param_2,lVar2,1);
    _objc_release(lVar2);
  }
  func_0x00010bebb1e0(param_1,param_2,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10680ce28; end: 10680d203; -[SCSpotlightNavigationServiceImpl showSpotlightTabDeepLinkURL:additionalInfo:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680ce28(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar12 = (long)_DAT_11275154c;
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = param_3;
  _objc_release(uVar3);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112751550);
  *(ulong *)(param_1 + _DAT_112751550) = uVar1;
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126ce5a0;
  func_0x00010c2479c0(PTR_PTR_1126ce5a0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar5);
  uVar4 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126ce5a0;
  func_0x00010c0e90c0(PTR_PTR_1126ce5a0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar5);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  lVar12 = param_1;
  func_0x00010be60ea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + _DAT_112751510);
    func_0x000108f4ae80();
    if ((iVar2 != 0) && (uVar4 != 0)) {
      func_0x00010be479a0(param_1);
      goto LAB_10680d1b0;
    }
  }
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10680d204;
  puStack_88 = &UNK_110858070;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_4);
  ppuVar9 = &puStack_a0;
  uStack_80 = param_4;
  _objc_retainBlock(ppuVar9);
  ppuVar10 = ppuVar9;
  if ((int)uVar7 != 0) {
    *(undefined1 *)(param_1 + _DAT_112751554) = 1;
    puStack_d0 = puVar5;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10680d224;
    puStack_b8 = &UNK_110858070;
    _objc_retain(param_5);
    uStack_a8 = param_5;
    _objc_retain(param_4);
    ppuVar10 = &puStack_d0;
    uStack_b0 = param_4;
    _objc_retainBlock(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(uStack_b0);
    _objc_release(uStack_a8);
  }
  if (*(long *)(param_1 + _DAT_11275152c) == 0) {
    lVar11 = (long)_DAT_112751530;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    *(ulong *)(param_1 + lVar11) = uVar4;
    _objc_release(uVar3);
  }
  func_0x00010bed7fe0(param_1);
  func_0x00010bc9109c(uVar1);
  func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bebb200(param_1);
  _objc_release(ppuVar10);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
LAB_10680d1b0:
  _objc_release(lVar12);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10680d204; end: 10680d223;  */

void FUN_10680d204(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10680d224; end: 10680d2b7;  */

void FUN_10680d224(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3c80(uVar1);
    func_0x00010c1d0640();
    lVar3 = *(long *)(param_1 + 0x28);
    uVar2 = uVar1;
    func_0x00010bf51e00(uVar1);
    (**(code **)(lVar3 + 0x10))(lVar3,1,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10680d2b8; end: 10680d2bf; -[SCSpotlightNavigationServiceImpl shouldEnableFeedSwitcherForSubscriptionNotification:] */

undefined8 FUN_10680d2b8(void)

{
  return 0;
}



/* Entry: 10680d2c0; end: 10680d3f7; -[SCSpotlightNavigationServiceImpl _modalUIContainerFromAdditionalInfo:] */

void FUN_10680d2c0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  puVar2 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar1);
  puVar1 = puVar4;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar4);
  puVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3530;
    _objc_opt_class(PTR_PTR_1126b3530);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar4);
    puVar4 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) goto LAB_10680d3d0;
  }
  if (puVar1 != (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    func_0x00010c038f40();
  }
LAB_10680d3d0:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10680d3f8; end: 10680d4bb; -[SCSpotlightNavigationServiceImpl _launchInChatFeedWithModalUIContainer:firstCompositeStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680d3f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c68b8;
  _objc_retain(param_3);
  func_0x00010c0d0ac0(puVar1,param_2,0,0,0,0,0,0,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127514d4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08bae0();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10680d4bc; end: 10680d52f; -[SCSpotlightNavigationServiceImpl refreshLocalizedTabBarLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680d4bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be36200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112751520;
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bebf0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10680d530; end: 10680d627; -[SCSpotlightNavigationServiceImpl _navigationBarAnimationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10680d530(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  double dVar6;
  
  iVar2 = (int)*(undefined8 *)(param_2 + _DAT_1127514fc);
  func_0x000108f4b24c();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_2 + _DAT_1127514f8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _CFAbsoluteTimeGetCurrent();
    if (lVar4 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(lVar3,param_3,puVar5,&PTR____CFConstantStringClassReference_110e60c18);
      _objc_release(puVar5);
      bVar1 = true;
    }
    else {
      dVar6 = param_1;
      func_0x00010bf885a0(lVar4);
      bVar1 = param_1 - dVar6 < 86400.0;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  return bVar1;
}



/* Entry: 10680d628; end: 10680d7d7; -[SCSpotlightNavigationServiceImpl updateImageForSpotlightTab:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680d628(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 == 0) {
    func_0x00010bee1a00(param_1,param_2,0,0xffffffffffffffff,1);
    lVar5 = (long)_DAT_112751558;
    if (*(long *)(param_1 + lVar5) != 0) {
      _dispatch_block_cancel();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  else {
    puVar1 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,param_2,0x236,0xd5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010be62440();
    func_0x00010be62440(param_1);
    func_0x00010bee1a00(param_1);
    lVar5 = param_1;
    func_0x00010be62440();
    if ((int)lVar5 != 0) {
      _objc_initWeak(auStack_38,param_1);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10680d7d8;
      puStack_50 = &UNK_110841fb0;
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(puVar2);
      uVar3 = 0;
      puStack_48 = puVar2;
      func_0x0001008553e8(0,&puStack_68);
      uVar4 = *(undefined8 *)(param_1 + _DAT_112751558);
      *(undefined8 *)(param_1 + _DAT_112751558) = uVar3;
      _objc_release(uVar4);
      _dispatch_time(0,1000000000);
      func_0x00010058c530();
      _objc_release(puStack_48);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 10680d7d8; end: 10680d813;  */

void FUN_10680d7d8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680d814; end: 10680d8a3; -[SCSpotlightNavigationServiceImpl shouldNavigateToSpotlightTabAfterPostingDidPostSpotlight:didPostSpotlightOnly:crossPostEligibleStoriesOnly:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680d814(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  
  if (param_4 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_112751510);
    func_0x000108f483a4();
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  iVar1 = _DAT_112751510;
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_112751510);
    func_0x000108f483b8();
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  if (param_5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + iVar1),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a778,1,0);
  return;
}



/* Entry: 10680d8a4; end: 10680d91b; -[SCSpotlightNavigationServiceImpl presentAnimated:fromUserInteraction:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680d8a4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f35b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_presentAnimated_fromUserInteract_112620690);
  param_1 = param_1 + _DAT_1127514e8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c680();
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 10680d91c; end: 10680d9ef; -[SCSpotlightNavigationServiceImpl _tabBarItemTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680d91c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  func_0x00010c291fc0(*(undefined8 *)(param_1 + _DAT_112751508),param_2,
                      &PTR____CFConstantStringClassReference_110f5a898);
  lVar2 = param_1 + _DAT_1127514dc;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c198340();
  _objc_release(lVar2);
  func_0x00010bf3bca0(PTR_PTR_1126c55c0);
  func_0x00010c10b1c0(param_1,param_2,0,1,0);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10680d9f0; end: 10680daaf; -[SCSpotlightNavigationServiceImpl _updateFeedPageEntryTypeFromDeeplinkWithAdditionalInfo:sourcePageStr:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680d9f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + _DAT_11275152c);
  uVar1 = *(ulong *)(param_1 + _DAT_11275154c);
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
  }
  uVar2 = 0x21;
  if ((lVar4 == 0) && ((uVar3 & 1) == 0)) {
    if (param_4 != 0) goto LAB_10680da90;
    uVar2 = 10;
  }
  *(undefined8 *)(param_1 + _DAT_11275150c) = uVar2;
LAB_10680da90:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680dab0; end: 10680db17; -[SCSpotlightNavigationServiceImpl attachViewController:] */

void FUN_10680dab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010bde5ea0(param_1);
  puStack_28 = PTR_PTR_1126f35b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_attachViewController__1125a0c38,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10680db18; end: 10680dd4f; -[SCSpotlightNavigationServiceImpl exposeFeatureScopeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680db18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar7 = (long)_DAT_1127514e8;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_1;
    func_0x00010c29c100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar3 = PTR_PTR_1126c68b8;
      func_0x00010c0b6c60(PTR_PTR_1126c68b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_1);
      puVar4 = PTR_PTR_1126aeaf8;
      _objc_alloc(PTR_PTR_1126aeaf8);
      _objc_copyWeak(auStack_70,auStack_68);
      func_0x00010c0311a0(puVar4);
      uVar6 = *(undefined8 *)(param_1 + _DAT_1127514d8);
      lVar1 = param_1 + _DAT_112751514;
      _objc_loadWeakRetained(lVar1);
      lVar2 = param_1 + _DAT_1127514e0;
      _objc_loadWeakRetained(lVar2);
      lVar5 = param_1 + _DAT_1127514e4;
      _objc_loadWeakRetained(lVar5);
      func_0x00010bf241c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c0652e0(*(undefined8 *)(param_1 + _DAT_112751508));
      param_1 = param_1 + lVar7;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf9d620();
      _objc_release(param_1);
      _objc_release(uVar6);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 10680dd50; end: 10680dd97;  */

void FUN_10680dd50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0ca40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680dd98; end: 10680dd9b;  */

void FUN_10680dd98(void)

{
  return;
}



/* Entry: 10680dd9c; end: 10680dda7; -[SCSpotlightNavigationServiceImpl _showSpotlightTabAnimated:completion:] */

void FUN_10680dd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentAnimated_fromUserInteract_112620690,param_3,0,param_4);
  return;
}



/* Entry: 10680dda8; end: 10680e113; -[SCSpotlightNavigationServiceImpl _configureViewController:alreadyPresented:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680dda8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c5808;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    lVar6 = (long)_DAT_1127514ec;
    if (*(long *)(param_1 + lVar6) != -1) {
      func_0x00010c206f20(param_3);
      *(undefined8 *)(param_1 + lVar6) = 0xffffffffffffffff;
    }
    lVar6 = (long)_DAT_112751554;
    if (*(char *)(param_1 + lVar6) == '\x01') {
      func_0x00010c08b680(param_3);
      *(undefined1 *)(param_1 + lVar6) = 0;
    }
    lVar6 = (long)_DAT_11275150c;
    if (*(long *)(param_1 + lVar6) != -1) {
      func_0x00010c285c00(param_3);
      *(undefined8 *)(param_1 + lVar6) = 0xffffffffffffffff;
    }
    lVar6 = (long)_DAT_11275152c;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010bf47a00(param_3);
    }
    lVar7 = (long)_DAT_112751550;
    lVar4 = *(long *)(param_1 + lVar7);
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      func_0x00010bf47820(param_3);
    }
    lVar4 = (long)_DAT_112751548;
    if ((*(long *)(param_1 + lVar4) != 0) || (*(long *)(param_1 + _DAT_11275154c) != 0)) {
      func_0x00010bf46de0(param_3);
    }
    lVar8 = (long)_DAT_112751530;
    lVar9 = param_1;
    func_0x00010beb4ec0();
    if ((int)lVar9 == 0) {
      if (*(long *)(param_1 + _DAT_11275154c) != 0) {
        func_0x00010c10d540(param_3);
      }
    }
    else {
      func_0x00010c10d560(param_3);
    }
    lVar9 = (long)_DAT_112751538;
    if (*(long *)(param_1 + lVar9) != 0) {
      if (*(char *)(param_1 + _DAT_112751534) == '\x01') {
        func_0x00010c10d500(param_3);
      }
      else {
        _objc_initWeak(auStack_68,param_1);
        uVar5 = *(undefined8 *)(param_1 + _DAT_112751500);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(param_3);
        func_0x00010c116a60(uVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar1);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
    }
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = 0;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = 0;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11275154c);
    *(undefined8 *)(param_1 + _DAT_11275154c) = 0;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = 0;
    _objc_release(uVar5);
    *(undefined1 *)(param_1 + _DAT_112751534) = 0;
    uVar5 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112751504);
    *(undefined8 *)(param_1 + _DAT_112751504) = 0;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11275153c);
    *(undefined8 *)(param_1 + _DAT_11275153c) = 0;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112751540);
    *(undefined8 *)(param_1 + _DAT_112751540) = 0;
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10680e114; end: 10680e167;  */

void FUN_10680e114(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7d020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680e168; end: 10680e197; -[SCSpotlightNavigationServiceImpl _presentOperaWithBusinessProfileId:spotlightViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680e168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_4,PTR_s_presentOperaAgainIfAlreadyPresen_112620f68,
             *(undefined8 *)(param_1 + _DAT_112751538),0,*(undefined8 *)(param_1 + _DAT_1127514f0),
             *(undefined8 *)(param_1 + _DAT_1127514f4),param_3,0);
  return;
}



/* Entry: 10680e198; end: 10680e20b; -[SCSpotlightNavigationServiceImpl _shouldPresentOperaAgainWithStoryIdToPrepend:notification:] */

undefined8 FUN_10680e198(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) &&
     ((param_4 == 0 || (func_0x00010be42540(param_1,param_2,param_4), (param_1 & 1) == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10680e20c; end: 10680e26b; -[SCSpotlightNavigationServiceImpl _isNotificationUsingPrefetch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10680e20c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112751528);
    func_0x00010c11c460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar1,param_2,param_3);
    _objc_release(param_3);
    return uVar1;
  }
  return 0;
}



/* Entry: 10680e26c; end: 10680e447; -[SCSpotlightNavigationServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10680e26c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112751544,0);
  _objc_storeStrong(param_1 + _DAT_11275151c,0);
  _objc_storeStrong(param_1 + _DAT_112751540,0);
  _objc_storeStrong(param_1 + _DAT_11275153c,0);
  _objc_storeStrong(param_1 + _DAT_112751504,0);
  _objc_storeStrong(param_1 + _DAT_112751500,0);
  _objc_storeStrong(param_1 + _DAT_112751558,0);
  _objc_storeStrong(param_1 + _DAT_1127514fc,0);
  _objc_storeStrong(param_1 + _DAT_1127514f8,0);
  _objc_storeStrong(param_1 + _DAT_112751528,0);
  _objc_storeStrong(param_1 + _DAT_1127514d8,0);
  _objc_storeStrong(param_1 + _DAT_112751524,0);
  _objc_storeStrong(param_1 + _DAT_1127514d4,0);
  _objc_storeStrong(param_1 + _DAT_112751548,0);
  _objc_storeStrong(param_1 + _DAT_112751550,0);
  _objc_storeStrong(param_1 + _DAT_11275154c,0);
  _objc_storeStrong(param_1 + _DAT_11275152c,0);
  _objc_storeStrong(param_1 + _DAT_1127514f4,0);
  _objc_storeStrong(param_1 + _DAT_1127514f0,0);
  _objc_storeStrong(param_1 + _DAT_112751538,0);
  _objc_storeStrong(param_1 + _DAT_112751530,0);
  _objc_storeStrong(param_1 + _DAT_112751508,0);
  _objc_storeStrong(param_1 + _DAT_112751520,0);
  _objc_destroyWeak(param_1 + _DAT_112751514);
  _objc_destroyWeak(param_1 + _DAT_1127514e8);
  _objc_storeStrong(param_1 + _DAT_112751510,0);
  _objc_destroyWeak(param_1 + _DAT_1127514e4);
  _objc_destroyWeak(param_1 + _DAT_1127514e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127514dc);
  return;
}



/* Entry: 10680e448; end: 10680e4bb; -[SCDeferredModalUIContainer initWithAnimated:] */

undefined1 * FUN_10680e448(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f35c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x10) = param_3;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10680e4bc; end: 10680e4e7; -[SCDeferredModalUIContainer setPresentingViewController:] */

void FUN_10680e4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + 8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bec1290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startProcessingPendingActionsIf_11258de48);
  return;
}



/* Entry: 10680e4e8; end: 10680e4f7; -[SCDeferredModalUIContainer _startProcessingPendingActionsIfNeeded] */

void FUN_10680e4e8(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be81bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processPendingActions_11257e098);
  return;
}



/* Entry: 10680e4f8; end: 10680e5b3; -[SCDeferredModalUIContainer _processPendingActions] */

void FUN_10680e4f8(long param_1)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x20));
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10680e5b4;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    (**(code **)(lVar1 + 0x10))(lVar1,&puStack_48);
    _objc_release(lVar1);
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,0);
  return;
}



/* Entry: 10680e5b4; end: 10680e5bb;  */

void FUN_10680e5b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be81bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processPendingActions_11257e098);
  return;
}



/* Entry: 10680e5bc; end: 10680e6bb; -[SCDeferredModalUIContainer attachUI:] */

void FUN_10680e5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10680e6bc;
  puStack_60 = &UNK_110845c40;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  uStack_58 = param_3;
  _objc_retainBlock(ppuVar1);
  func_0x00010befa120(uVar2);
  _objc_release(ppuVar1);
  func_0x00010bec1280(param_1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10680e6bc; end: 10680e82f;  */

void FUN_10680e6bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      func_0x0001008cd514();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar4 = lVar3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar2 = lVar3;
      while (lVar4 != 0) {
        lVar3 = lVar2;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar4 = lVar3;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar2 = lVar3;
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    func_0x00010c10eda0(lVar2);
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10680e830; end: 10680e86f;  */

void FUN_10680e830(long param_1)

{
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x18,*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680e860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10680e870; end: 10680e96f; -[SCDeferredModalUIContainer attachUIUsingKeyWindow:] */

void FUN_10680e870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10680e970;
  puStack_60 = &UNK_110845c40;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  uStack_58 = param_3;
  _objc_retainBlock(ppuVar1);
  func_0x00010befa120(uVar2);
  _objc_release(ppuVar1);
  func_0x00010bec1280(param_1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10680e970; end: 10680ebef;  */

void FUN_10680e970(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_retain(puVar4);
      puVar3 = puVar4;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar4);
          }
          lVar9 = *(long *)((long)puVar10 * 8);
          lVar5 = lVar9;
          func_0x00010c075e80();
          if ((int)lVar5 != 0) {
            _objc_retain(lVar9);
            goto LAB_10680eaa0;
          }
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar3 = puVar4;
        func_0x00010bf52a60();
      }
      lVar9 = 0;
LAB_10680eaa0:
      _objc_release(puVar4);
      lVar2 = lVar9;
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      while (lVar5 != 0) {
        lVar6 = lVar2;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lVar5 = lVar6;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar2 = lVar6;
      }
      _objc_release(puVar4);
      _objc_release(lVar9);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    _objc_retain(param_2);
    func_0x00010c10eda0(lVar2);
    _objc_release(param_2);
    _objc_release(uVar8);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeWeak(*(long *)(param_2 + 0x20) + 0x18,*(undefined8 *)(param_2 + 0x28));
  if (*(long *)(param_2 + 0x30) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010680ec20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x30) + 0x10))();
  return;
}



/* Entry: 10680ebf0; end: 10680ec2f;  */

void FUN_10680ebf0(long param_1)

{
  _objc_storeWeak(*(long *)(param_1 + 0x20) + 0x18,*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680ec20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10680ec30; end: 10680ed2f; -[SCDeferredModalUIContainer detachUI:] */

void FUN_10680ec30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10680ed30;
  puStack_60 = &UNK_110941ab0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  uStack_58 = param_3;
  _objc_retainBlock(ppuVar1);
  func_0x00010befa120(uVar2);
  _objc_release(ppuVar1);
  func_0x00010bec1280(param_1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10680ed30; end: 10680ee7f;  */

void FUN_10680ed30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar4 = &puStack_70;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1 + 0x18;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10680ee80;
    puStack_58 = &UNK_11088fcb8;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uStack_50 = uVar5;
    _objc_retain(param_2);
    lStack_48 = param_2;
    _objc_retainBlock(&puStack_70);
    lVar2 = lVar1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(ppuVar4);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10680ee80; end: 10680eec3;  */

void FUN_10680ee80(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680eeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10680eec4; end: 10680eef7; -[SCDeferredModalUIContainer .cxx_destruct] */

void FUN_10680eec4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10680eef8; end: 10680eeff; -[SCActiveUserNavigationWorkflow canPerformNavigation] */

void FUN_10680eef8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_canPerformNavigationWithError__1125a8db8,0);
  return;
}



/* Entry: 10680ef00; end: 10680f0ff; -[SCActiveUserNavigationWorkflow canPerformNavigationWithError:] */

long FUN_10680ef00(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c0d6c40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0d6b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar6 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar6 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010bf13f60();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126aecb0;
        func_0x00010c0d83c0(PTR_PTR_1126aecb0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c071ae0(uVar2,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(uVar2);
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((int)uVar4 != 0) {
          lVar6 = 0;
          if (param_3 != (undefined8 *)0x0) {
            _objc_opt_class();
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc4658);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99260(puVar5,param_2,&PTR____CFConstantStringClassReference_110e60d58,
                                puVar3,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *param_3 = puVar5;
            _objc_release(puVar3);
            _objc_release(uVar7);
            lVar6 = 0;
          }
          goto LAB_10680f0b8;
        }
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  lVar6 = 1;
LAB_10680f0b8:
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar6;
  }
  ___stack_chk_fail();
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c07b420();
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 10680f100; end: 10680f13b; -[SCActiveUserNavigationWorkflow isProfilePresented] */

undefined8 FUN_10680f100(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07b420();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10680f13c; end: 10680f243; -[SCActiveUserNavigationWorkflow presentFarLeftVCAnimated:deepLinkURL:additionalInfo:] */

void FUN_10680f13c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c08ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c08ee40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    if (param_4 == 0) {
      lVar3 = param_1;
      func_0x00010c08ee00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = param_1;
    func_0x00010c08ee60(param_1);
    func_0x00010c08ee20(param_1);
    func_0x00010c236cc0(lVar1,param_2,lVar2,lVar3,lVar4,param_1,0,0,0);
    if (param_4 == 0) {
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10680f244; end: 10680f3ab; -[SCActiveUserNavigationWorkflow presentLeftVCAnimated:deepLinkURL:additionalInfo:completion:] */

void FUN_10680f244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfba180();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c237940(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10680f3ac; end: 10680f41b;  */

void FUN_10680f3ac(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x0001071b9ddc(uVar2,*(undefined8 *)(param_1 + 0x28));
      if (((int)uVar2 == 0) || (lVar3 = lVar1, func_0x00010beb4820(), (int)lVar3 != 0)) {
        func_0x00010be27fe0(lVar1);
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10680f41c; end: 10680f52f; -[SCActiveUserNavigationWorkflow presentMiddleVCAnimated:deepLinkURL:additionalInfo:completion:] */

void FUN_10680f41c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2a020();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10680f530;
  puStack_68 = &UNK_1108843d8;
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2366c0(uVar2,param_2,&puStack_80);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10680f530; end: 10680f573;  */

void FUN_10680f530(long param_1,undefined8 param_2)

{
  if ((int)param_2 != 0) {
    func_0x00010be27fe0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010680f564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10680f574; end: 10680f6c3; -[SCActiveUserNavigationWorkflow presentRightVCAnimated:deepLinkURL:additionalInfo:] */

void FUN_10680f574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10680f6c4;
  puStack_68 = &UNK_11085dbf8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  _objc_retainBlock(&puStack_80);
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf81b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2370e0();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10680f6c4; end: 10680f6ff;  */

void FUN_10680f6c4(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be27fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10680f700; end: 10680f83b; -[SCActiveUserNavigationWorkflow presentFarRightVCAnimated:deepLinkURL:additionalInfo:] */

void FUN_10680f700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10680f83c;
  puStack_60 = &UNK_110941ae0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  uStack_58 = param_4;
  _objc_retainBlock(ppuVar1);
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c24b780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a260();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10680f83c; end: 10680f8b3;  */

void FUN_10680f83c(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be27fe0();
    _objc_release(param_3);
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be79f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10680f8b4; end: 10680f92f; -[SCActiveUserNavigationWorkflow presentOnCurrentVCAnimated:deepLinkURL:additionalInfo:completion:] */

void FUN_10680f8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  _objc_retain(param_6);
  func_0x00010be27fe0(param_1,param_2,param_4,param_5);
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf967a0();
  _objc_release(param_1);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10680f930; end: 10680f973; -[SCActiveUserNavigationWorkflow visibleViewController] */

void FUN_10680f930(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08f9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10680f974; end: 10680fa4f; -[SCActiveUserNavigationWorkflow prepareToNavigateToDeepLink:completion:] */

void FUN_10680f974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c293e60(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10680fa50; end: 10680fab7;  */

void FUN_10680fa50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c1420a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf967a0();
    _objc_release(lVar2);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10680fab8; end: 10680faff; -[SCActiveUserNavigationWorkflow modalContainer:] */

void FUN_10680fab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce5a8;
  _objc_alloc(PTR_PTR_1126ce5a8);
  func_0x00010bff2e00();
  func_0x00010bea61a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10680fb00; end: 10680fb43; -[SCActiveUserNavigationWorkflow topmostViewController] */

void FUN_10680fb00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf5e4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10680fb44; end: 10680fb8f; -[SCActiveUserNavigationWorkflow _shouldNavigateToTopicPageForDeeplinkURL:] */

undefined8 FUN_10680fb44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10680fb90; end: 10680fc33; -[SCActiveUserNavigationWorkflow _shouldNavigateToFriendsFeedForDiscoverDeeplinkURL:] */

ulong FUN_10680fb90(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010c2584c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12c800();
  _objc_release(uVar1);
  _objc_release(param_1);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    FUN_1071b9c30();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_3;
      func_0x0001071b9cec(param_3);
    }
    else {
      uVar3 = 1;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10680fc34; end: 10680fcd3; -[SCActiveUserNavigationWorkflow _setOrEnqueueSetOfPresentingViewControllerForModalContainer:] */

void FUN_10680fc34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08f9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be711e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_1);
  }
  else {
    func_0x00010c1e1580(param_3,param_2,lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10680fcd4; end: 10680fd5b; -[SCActiveUserNavigationWorkflow endAddFriendSheetScope] */

void FUN_10680fcd4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bef8920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bef8920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10680fd5c; end: 106810f87; -[SCActiveUserNavigationWorkflow _handleDeepLinkURL:additionalInfo:] */

void FUN_10680fd5c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x0001071b9ddc(param_3,param_4);
  if ((((int)puVar2 != 0) && (puVar2 = param_1, func_0x00010beb4820(), ((ulong)puVar2 & 1) == 0)) &&
     (puVar2 = param_1, func_0x00010beb4880(), (int)puVar2 == 0)) goto LAB_10680ff40;
  puVar2 = PTR_PTR_1126af680;
  func_0x00010c22ba80(PTR_PTR_1126af680);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bfa2bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    puVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ce5b0;
    _objc_opt_class(PTR_PTR_1126ce5b0);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar2);
    puVar2 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_release(puVar2);
    bVar1 = (int)puVar3 == 4;
  }
  puVar2 = param_3;
  FUN_106868104();
  if ((int)puVar2 != 0) {
    func_0x00010be2bf00(param_1);
    goto LAB_10680ff40;
  }
  puVar2 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfdcf80();
  if ((int)puVar3 != 0) goto LAB_10680fefc;
  puVar3 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (((ulong)puVar4 & 1) != 0) goto LAB_10680ff40;
  puVar2 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2365e0();
    puVar2 = param_1;
    goto LAB_10680fefc;
  }
  puVar2 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar3 != 0) {
    puVar3 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x00010c08fa60();
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_106810118;
      }
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23a980();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
      _objc_opt_new(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
      puVar5 = puVar3;
      func_0x00010c0de9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800(puVar5);
      func_0x00010c238960(param_1);
      _objc_release(param_1);
      _objc_release(puVar5);
      param_1 = puVar3;
    }
    goto LAB_1068100fc;
  }
LAB_106810118:
  puVar2 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  puVar4 = param_3;
  if ((int)puVar3 == 0) {
    puVar2 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      puVar2 = PTR_PTR_1126b1370;
      _objc_alloc(PTR_PTR_1126b1370);
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x000108f04948();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1068101e4;
    }
    puVar2 = param_3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) {
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2394c0();
        puVar2 = param_1;
        goto LAB_10680fefc;
      }
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        puVar2 = param_3;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        FUN_106a5b8ac();
        _objc_release(puVar2);
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c239500();
        puVar2 = param_1;
        goto LAB_10680fefc;
      }
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        puVar2 = param_3;
        func_0x00010c0f5820();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)puVar3 == 0) goto LAB_10680ff40;
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c236c60();
        puVar2 = param_1;
        goto LAB_10680fefc;
      }
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        puVar2 = param_3;
        func_0x000107d72d24();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c08fa60();
        if (puVar3 == (undefined *)0x0) goto LAB_10680fefc;
        func_0x000107d72da0(param_3);
        func_0x000107d72e6c(param_3);
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c239760();
        goto LAB_10681022c;
      }
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c239dc0();
        puVar2 = param_1;
        goto LAB_10680fefc;
      }
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        puVar3 = param_3;
        func_0x00010c11d6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = param_3;
        func_0x00010c11d6e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(puVar4);
        _objc_release(puVar3);
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237640();
        _objc_release(param_1);
        goto LAB_10680fefc;
      }
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2392e0();
        puVar2 = param_1;
        goto LAB_10680fefc;
      }
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        func_0x00010be280e0(param_1);
        goto LAB_10680ff40;
      }
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        puVar2 = param_3;
        func_0x00010c0f5820();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0720c0();
        if ((((ulong)puVar3 & 1) == 0) && (puVar3 = puVar2, func_0x00010c0720c0(), (int)puVar3 == 0)
           ) {
          puVar3 = puVar2;
          func_0x00010c0720c0();
          if ((int)puVar3 != 0) {
            func_0x0001071ba084(param_3,param_4);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1068106b8;
          }
        }
        else {
          func_0x0001071b9f1c();
          _objc_retainAutoreleasedReturnValue();
LAB_1068106b8:
          if (puVar4 != (undefined *)0x0) {
            func_0x00010c1420a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2378c0();
            goto LAB_1068100fc;
          }
        }
        _objc_release(puVar2);
      }
      puVar2 = param_3;
      func_0x00010c0f5820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010c0f5820();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)puVar5 == 0) {
        puVar2 = param_3;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if (((ulong)puVar3 & 1) != 0 || bVar1) {
          puVar2 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar2 != (undefined *)0x0) {
            func_0x000107fd3b4c();
          }
          puVar3 = param_3;
          func_0x00010c11d6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = param_3;
          func_0x00010c11d6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf1f3c0();
          _objc_release(puVar5);
          _objc_release(puVar3);
          puVar3 = param_3;
          func_0x00010c11d6e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010bf1f3c0();
          _objc_release(puVar5);
          _objc_release(puVar3);
          puVar3 = puVar4;
          func_0x00010c08fa60();
          if ((((uint)(puVar3 != (undefined *)0x0) & (uint)puVar6) == 1) && ((int)puVar7 != 0)) {
            func_0x00010c1420a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beeca80();
          }
          else {
            puVar3 = puVar4;
            func_0x00010c08fa60();
            func_0x00010c1420a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            if (puVar3 == (undefined *)0x0) {
              func_0x00010c235ae0();
            }
            else {
              func_0x00010c235b00();
            }
          }
          _objc_release(param_1);
          param_1 = PTR_PTR_1126ce5b8;
          _objc_alloc_init(PTR_PTR_1126ce5b8);
          FUN_106813e48();
LAB_1068100fc:
          _objc_release(param_1);
          param_1 = puVar4;
          goto LAB_10681022c;
        }
        puVar2 = param_3;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)puVar3 == 0) {
          puVar2 = param_3;
          func_0x00010bfa1820();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)puVar3 != 0) {
            puVar3 = param_3;
            func_0x00010c0f5800();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            func_0x00010c260c00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            puVar3 = puVar2;
            func_0x00010c0720c0();
            if ((int)puVar3 != 0) {
              func_0x00010c1420a0(param_1);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = param_1;
              func_0x00010bf2a020();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = param_3;
              func_0x00010c11d6e0(param_3);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c236520(puVar3);
              _objc_release(puVar5);
              _objc_release(puVar4);
              _objc_release(puVar3);
              goto LAB_10681022c;
            }
            _objc_release(puVar2);
          }
          _objc_initWeak(auStack_80,param_1);
          puVar2 = param_1;
          func_0x00010c1420a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_initWeak(auStack_88,puVar2);
          _objc_release(puVar2);
          puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c0 = 0xc2000000;
          pcStack_b8 = FUN_106810f88;
          puStack_b0 = &UNK_1108cf0b0;
          _objc_retain(param_3);
          puStack_a8 = param_3;
          _objc_retain(param_4);
          puStack_a0 = param_4;
          _objc_copyWeak(auStack_98,auStack_80);
          _objc_copyWeak(auStack_90,auStack_88);
          ppuVar8 = &puStack_c8;
          _objc_retainBlock();
          puVar2 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf1f3c0();
          _objc_release(puVar2);
          if ((int)puVar3 == 0) {
            (*(code *)ppuVar8[2])(ppuVar8);
          }
          else {
            func_0x00010c1420a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = param_1;
            func_0x00010bf2a020();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(ppuVar8);
            _objc_copyWeak(auStack_d0,auStack_80);
            _objc_retain(param_3);
            _objc_retain(param_4);
            func_0x00010c2366c0(puVar2);
            _objc_release(puVar2);
            _objc_release(param_1);
            _objc_release(param_4);
            _objc_release(param_3);
            _objc_destroyWeak(auStack_d0);
            _objc_release(ppuVar8);
          }
          _objc_release(ppuVar8);
          _objc_destroyWeak(auStack_90);
          _objc_destroyWeak(auStack_98);
          _objc_release(puStack_a0);
          _objc_release(puStack_a8);
          _objc_destroyWeak(auStack_88);
          _objc_destroyWeak(auStack_80);
          goto LAB_10680ff40;
        }
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c235c80();
        puVar2 = param_1;
        goto LAB_10680fefc;
      }
      if ((int)puVar3 != 0) {
        puVar2 = param_3;
        func_0x00010c0f5820();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        if ((int)puVar3 == 0) {
          puVar2 = param_3;
          func_0x00010c0f5820();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c0720c0();
          _objc_release(puVar2);
          if ((int)puVar3 == 0) {
            puVar3 = param_3;
            func_0x00010c11d6e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            puVar3 = param_3;
            func_0x00010c11d6e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            func_0x00010c08fa60();
            func_0x00010c1420a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c236a00();
            goto LAB_1068100fc;
          }
          func_0x00010c1420a0(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c1420a0(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c236a00();
        puVar2 = param_1;
        goto LAB_10680fefc;
      }
      if ((int)puVar4 == 0) {
        puVar2 = param_3;
        func_0x00010c0f5820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 == (undefined *)0x0) goto LAB_10680ff40;
        puVar2 = param_3;
        func_0x00010c0f5820(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_3;
        func_0x00010c0f5820();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c071ae0();
        _objc_release(puVar3);
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        if ((int)puVar4 == 0) {
          func_0x00010c236a60();
        }
        else {
          func_0x00010c236a40();
        }
      }
      else {
        puVar3 = param_3;
        func_0x00010c11d6e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar2;
        func_0x00010c08fa60();
        if (puVar3 == (undefined *)0x0) goto LAB_10680fefc;
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c236a20();
      }
      goto LAB_10681022c;
    }
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2394e0();
    puVar2 = param_1;
  }
  else {
    puVar2 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x000108f04588();
    _objc_retainAutoreleasedReturnValue();
LAB_1068101e4:
    func_0x00010c030320(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142080();
LAB_10681022c:
    _objc_release(param_1);
  }
LAB_10680fefc:
  _objc_release(puVar2);
LAB_10680ff40:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106810f88; end: 10681103b;  */

void FUN_106810f88(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001071b9ddc(uVar1,*(undefined8 *)(param_1 + 0x28));
  if ((int)uVar1 == 0) {
    puVar2 = PTR_PTR_1126ce5c0;
    _objc_opt_new(PTR_PTR_1126ce5c0);
    func_0x00010c21d340();
    func_0x00010c165a20(puVar2);
    uVar3 = param_1 + 0x30;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010be28000();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      func_0x00010c08f920();
      _objc_release(param_1);
    }
  }
  else {
    puVar2 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar2);
    func_0x00010be28740();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10681103c; end: 106811087;  */

void FUN_10681103c(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106811060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106811088; end: 1068110d3; -[SCActiveUserNavigationWorkflow _shouldUsePageLauncherForLenses] */

undefined8 FUN_106811088(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f440();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1068110d4; end: 1068111db; -[SCActiveUserNavigationWorkflow _handleDeepLinkVCInfo:] */

undefined8 FUN_1068110d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110f83778);
  if (((((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010beb7340(), (uVar1 & 1) != 0)) &&
      (uVar1 = param_3,
      func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110f83898),
      (uVar1 & 1) == 0)) &&
     ((uVar1 = param_3,
      func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110f838b8),
      (uVar1 & 1) == 0 &&
      (uVar1 = param_3,
      func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110f838d8),
      (int)uVar1 == 0)))) {
    uVar1 = param_3;
    func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110eb2a18);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c072b40(param_3,param_2,&PTR____CFConstantStringClassReference_110dba938);
      if ((int)uVar1 == 0) {
        uVar2 = 0;
        goto LAB_10681116c;
      }
      func_0x00010be27f40(param_1,param_2,param_3);
    }
    else {
      func_0x00010be280a0(param_1,param_2,param_3);
    }
  }
  else {
    func_0x00010be27f20(param_1,param_2,param_3);
  }
  uVar2 = 1;
LAB_10681116c:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1068111dc; end: 106811427; -[SCActiveUserNavigationWorkflow _handleDeepLinkLenses:] */

void FUN_1068111dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_106a5b8ac();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000106a5ba90();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar8 = 9;
    if ((int)uVar3 == 0) {
      uVar8 = 1;
    }
  }
  else {
    uVar8 = 10;
  }
  puVar4 = PTR_PTR_1126c20e8;
  func_0x00010c0f3980();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1ab0;
  func_0x00010c280b80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    _objc_initWeak(auStack_58,param_1);
    func_0x00010c097b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0f8040();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(puVar4);
    uVar1 = param_3;
    uStack_60 = uVar8;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 106811428; end: 10681156b;  */

void FUN_106811428(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    lVar2 = lVar1;
    func_0x00010c1420a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08f980();
    _objc_release(lVar2);
    if (lVar3 == 2) {
      lVar2 = lVar1;
      func_0x00010c1420a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf2a020();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c094fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010bf56c80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2365c0(lVar3);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c28f340(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be79f40(lVar1);
      _objc_release(uVar6);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10681156c; end: 106811a6f; -[SCActiveUserNavigationWorkflow _handleDeeplinkProfile:additionalInfo:] */

void FUN_10681156c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c0f5820(param_3,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    puVar1 = param_3;
    func_0x00010c0f5820(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    puVar3 = param_3;
    if (((ulong)puVar2 & 1) == 0) {
      _objc_release(puVar1);
LAB_10681174c:
      func_0x00010c0f5820(param_3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010c0720c0();
      if ((int)puVar1 == 0) goto LAB_106811a44;
      puVar1 = param_3;
      func_0x00010c0f5820(param_3,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (puVar1 == (undefined *)0x0) goto LAB_106811a4c;
      puVar1 = param_3;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((int)puVar3 == 0) goto LAB_106811a4c;
      puVar3 = param_3;
      func_0x00010c0f5820(param_3,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b0ea8;
      _objc_opt_new(PTR_PTR_1126b0ea8);
      puVar2 = PTR_PTR_1126ce5d0;
      _objc_opt_new(PTR_PTR_1126ce5d0);
      func_0x00010c183b80();
      puVar4 = param_3;
      func_0x00010c11d6e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19dc20(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1a4a00(puVar1,param_2,puVar2);
      func_0x00010c0f14e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c020();
      _objc_release(puVar4);
LAB_106811a30:
      _objc_release(param_1);
      _objc_release(puVar2);
    }
    else {
      puVar2 = param_3;
      func_0x00010c0f5820(param_3,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      if (puVar2 == (undefined *)0x0) goto LAB_10681174c;
      func_0x00010c0f5820(param_3,param_2,2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010be82c80(param_1,param_2,param_3);
      if (puVar1 == (undefined *)0x1) {
        puVar1 = PTR_PTR_1126b0ea8;
        _objc_opt_new(PTR_PTR_1126b0ea8);
        puVar2 = PTR_PTR_1126ce5c8;
        _objc_opt_new(PTR_PTR_1126ce5c8);
        func_0x00010c21e620();
        puVar4 = param_3;
        func_0x00010c11d6e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19dc20(puVar2,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar4);
        func_0x00010c19fee0(puVar1,param_2,puVar2);
        puVar4 = PTR_PTR_1126b1c10;
        _objc_alloc(PTR_PTR_1126b1c10);
        func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
        func_0x00010c0f14e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08c020();
        _objc_release(puVar5);
        _objc_release(param_1);
        param_1 = puVar4;
        goto LAB_106811a30;
      }
      if (puVar1 != (undefined *)0x0) goto LAB_106811a44;
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2378e0();
      puVar1 = param_1;
    }
    _objc_release(puVar1);
  }
  else {
    puVar1 = param_3;
    func_0x00010c0f5820(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      puVar1 = param_3;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((int)puVar3 == 0) {
        func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f839b8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f839d8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2389c0();
        puVar3 = param_1;
      }
      else {
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c236240();
        puVar3 = param_1;
      }
    }
    else {
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c239e80();
      puVar3 = param_1;
    }
  }
LAB_106811a44:
  _objc_release(puVar3);
LAB_106811a4c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106811a70; end: 106811ae7; -[SCActiveUserNavigationWorkflow _profileDeepLinkLaunchBehaviorFromDeeplink:] */

ulong FUN_106811a70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c11d6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2 & 0xffffffff;
}



/* Entry: 106811ae8; end: 106811d6b; -[SCActiveUserNavigationWorkflow _handleDeeplinkCommerce:] */

void FUN_106811ae8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010befd100();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c9a78;
    func_0x00010bef5320(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0e00e0(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c9a78;
      func_0x00010bef5320(PTR_PTR_1126c9a78);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0e00e0(puVar1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126c9a78;
      func_0x00010bef54c0(PTR_PTR_1126c9a78);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c0e00e0(puVar1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar7;
      func_0x00010c067fc0();
      func_0x0001084b952c();
      _objc_release(puVar7);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126cacf0;
      puVar7 = PTR_PTR_1126c9a78;
      func_0x00010bef5420(PTR_PTR_1126c9a78);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c0e00e0(puVar1,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c067fc0();
      func_0x00010c0ed2c0(puVar2,param_2,puVar6);
      _objc_release(puVar5);
      _objc_release(puVar7);
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b0500;
      func_0x00010bef2780(PTR_PTR_1126b0500,param_2,puVar3,puVar4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2369e0(param_1,param_2,puVar7,puVar5);
      _objc_release(puVar5);
      puVar2 = param_1;
      goto LAB_106811d2c;
    }
  }
  puVar2 = puVar1;
  func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f838f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bc92e28();
  _objc_release(puVar2);
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b0500;
  func_0x00010bf68aa0(PTR_PTR_1126b0500,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2369e0(param_1,param_2,puVar2,puVar7);
  puVar3 = param_1;
LAB_106811d2c:
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106811d6c; end: 10681243b; -[SCActiveUserNavigationWorkflow _handleDeepLinkMemories:] */

void FUN_106811d6c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf1f3c0();
  if ((int)puVar1 != 0) {
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2385c0();
    puVar1 = param_1;
    goto LAB_106812400;
  }
  puVar1 = puVar4;
  func_0x00010bf1f3c0();
  if ((int)puVar1 != 0) {
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2385a0();
    puVar1 = param_1;
    goto LAB_106812400;
  }
  puVar1 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar5 == 0) {
    puVar2 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c0f5820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar6 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar2);
    puVar2 = puVar7;
    if (((ulong)puVar6 & 1) == 0) {
      puVar2 = (undefined *)0x0;
    }
    _objc_retain();
    _objc_release(puVar7);
    puVar6 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar7 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar6);
    puVar6 = puVar8;
    if (((ulong)puVar7 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar8);
    func_0x00010c0720c0();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b24e0;
    if (puVar5 == (undefined *)0x0) {
      if (puVar1 != (undefined *)0x0) goto LAB_106812280;
      func_0x00010c1420a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2384e0();
    }
    else {
      puVar7 = param_1;
      func_0x00010bfcdfa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb0140(puVar6);
      _objc_release(puVar7);
      if (puVar1 == (undefined *)0x0) {
        puVar6 = param_3;
        func_0x00010befd100(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = param_3;
        func_0x00010befd100(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        func_0x00010c1420a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126ce548;
        func_0x00010c271d60(PTR_PTR_1126ce548);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c238560(param_1);
        _objc_release(puVar6);
        _objc_release(param_1);
        _objc_release(puVar8);
        param_1 = puVar7;
      }
      else {
LAB_106812280:
        puVar6 = param_3;
        func_0x00010befd100(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = param_3;
        func_0x00010befd100(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = puVar2;
        func_0x00010c0720c0();
        if ((int)puVar6 == 0) {
          puVar6 = puVar2;
          func_0x00010c0720c0();
          func_0x00010c1420a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          if ((int)puVar6 != 0) goto LAB_106812374;
          func_0x00010c2384e0(param_1);
        }
        else {
          func_0x00010c1420a0(param_1);
          _objc_retainAutoreleasedReturnValue();
LAB_106812374:
          puVar6 = PTR_PTR_1126ce548;
          func_0x00010c2722a0(PTR_PTR_1126ce548);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c238560(param_1);
          _objc_release(puVar6);
        }
        _objc_release(param_1);
        _objc_release(puVar8);
        param_1 = puVar7;
      }
    }
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1420a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ce548;
    func_0x00010c271d20(PTR_PTR_1126ce548);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010befd100(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010befd100(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238560(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
  }
  _objc_release(puVar5);
LAB_106812400:
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10681243c; end: 106812647; -[SCActiveUserNavigationWorkflow _handleMapDeepLink:] */

void FUN_10681243c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  puVar1 = PTR_PTR_1126af680;
  _objc_retain(param_3);
  func_0x00010c22ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfa2bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf060e0(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_3;
  FUN_10686814c(param_3,&lStack_58,auStack_60);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c1420a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b9600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf5f860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2384a0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010be79f40(param_1);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106812648; end: 1068126bb; -[SCActiveUserNavigationWorkflow _handleDiscoverDeeplinkURL:additionalInfo:] */

void FUN_106812648(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110ebb298);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010be79f40(param_1,param_2,param_3,0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068126bc; end: 1068126c3; -[SCActiveUserNavigationWorkflow _handleSpotlightDiscoverDeeplinkURL:additionalInfo:] */

void FUN_1068126bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be79f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentAddFriendPromptWithDeepL_11257c170,param_3,0);
  return;
}



/* Entry: 1068126c4; end: 1068128ef; -[SCActiveUserNavigationWorkflow _presentAddFriendPromptWithDeepLink:isLens:] */

void FUN_1068126c4(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar7 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar1 == (undefined *)0x0) {
    puVar7 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = param_3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  puVar3 = puVar7;
  func_0x00010c11db20(puVar7,param_2,&PTR____CFConstantStringClassReference_110dc3418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if ((param_4 & 1) == 0) {
    puVar7 = puVar2;
    func_0x00010bdc1b20(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  lVar4 = param_1;
  func_0x00010c0cf9a0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0 && lVar4 != 0) {
    lVar5 = param_1;
    func_0x00010bef8920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar6 == 0) {
      lVar5 = param_1;
      func_0x00010bef8960(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf23ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      func_0x00010bef8920(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620();
      _objc_release(param_1);
      _objc_release(lVar6);
    }
  }
  _objc_release(lVar4);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068128f0; end: 10681292b; -[SCActiveUserNavigationWorkflow visiblePageType] */

undefined8 FUN_1068128f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1420a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08f980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10681292c; end: 10681292f; -[SCActiveUserNavigationWorkflow handleApplicationDidEnterBackground] */

void FUN_10681292c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2914b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_userBackgroundedApp_112681f50);
  return;
}



/* Entry: 106812930; end: 106812a9b; -[SCActiveUserNavigationWorkflow handleApplicationWillEnterForegroundFromNotification:completion:] */

void FUN_106812930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1068129e4;
  puStack_50 = &UNK_110866910;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c292140(param_1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106812a9c; end: 106812aaf;  */

void FUN_106812a9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_userPressedNotification_isInAppN_1126826c8,
             *(undefined8 *)(param_1 + 0x28),0,0);
  return;
}



/* Entry: 106812ab0; end: 106812b47; -[SCActiveUserNavigationWorkflow handleActionedAppNotification:didHandleNavigation:] */

void FUN_106812ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106812b48;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f9680(puVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106812b48; end: 106812b5b;  */

void FUN_106812b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_userPressedNotification_isInAppN_1126826c8,
             *(undefined8 *)(param_1 + 0x28),0,*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 106812b5c; end: 106812c2f; -[SCActiveUserNavigationWorkflow handleActionedShortcutItem:] */

void FUN_106812b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  func_0x00010c1e09a0(param_1,param_2,1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106812c30;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  func_0x00010c1390a0(param_1,param_2,4,ppuVar1);
  puVar2 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd02c0();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}


