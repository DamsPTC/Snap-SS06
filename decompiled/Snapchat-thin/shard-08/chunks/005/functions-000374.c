/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106283cec; end: 106283d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106283cec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11274477c),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106283d30; end: 106283e53; -[SCContextSpotlightMetricsViewController _observeEngagementMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106283d30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112744764);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744798);
  *(undefined8 *)(param_1 + _DAT_112744798) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106283e54; end: 106283e9b;  */

void FUN_106283e54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf479a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106283e9c; end: 106283f87; -[SCContextSpotlightMetricsViewController _getBadgeTextFromTrendingBadgeType:topicId:] */

void FUN_106283e9c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_4;
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 1) {
    func_0x000108f58cfc();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dc4658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar3;
  }
  else if (param_3 == 3) {
    func_0x000108f58d2c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 2) {
    func_0x000108f58d14();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106283f88; end: 106284337; -[SCContextSpotlightMetricsViewController configureWithMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106283f88(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_3 == 0) || ((*(byte *)(param_1 + _DAT_112744774) & 1) == 0)) {
    uVar10 = 0;
    uVar9 = 0;
    uVar1 = 0;
    if (param_3 == 0) goto LAB_10628401c;
  }
  else {
    lVar12 = param_3;
    func_0x00010c27b920();
    uVar1 = (uint)(lVar12 != 0);
  }
  uVar10 = uVar1;
  lVar12 = param_3;
  func_0x00010c29c5c0();
  if (lVar12 < 0) {
    uVar9 = 0;
  }
  else {
    lVar12 = param_1;
    func_0x00010bebbc60();
    uVar9 = (uint)lVar12;
  }
LAB_10628401c:
  lVar12 = param_1;
  func_0x00010c29d0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar12);
  if ((~(uVar10 | uVar9) & 1) == 0) {
    func_0x00010c09c7a0(param_1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744788),param_2,uVar10 ^ uVar9);
    lVar12 = (long)_DAT_11274479c;
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + lVar12));
    puVar6 = PTR__NSShadowAttributeName_110345828;
    if (uVar10 == 0) {
      uVar7 = *(undefined8 *)(param_1 + lVar12);
      *(undefined8 *)(param_1 + lVar12) = 0;
      _objc_release(uVar7);
      *(undefined8 *)(param_1 + _DAT_1127447a0) = 0;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744778),param_2,1);
      puVar6 = PTR_PTR_1126b10c8;
    }
    else {
      lVar2 = param_3;
      func_0x00010c27b920(param_3);
      lVar3 = param_3;
      func_0x00010c275280(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010be1d280(param_1,param_2,lVar2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      uStack_78 = *(undefined8 *)puVar6;
      uStack_70 = *(undefined8 *)(param_1 + _DAT_112744780);
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_70,&uStack_78,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar5,param_2,lVar4,puVar6);
      func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_112744784),param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar6);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744778),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274477c),param_2,0);
      lVar2 = param_3;
      func_0x00010c27b920();
      *(long *)(param_1 + _DAT_1127447a0) = lVar2;
      uVar11 = *(undefined8 *)(param_1 + _DAT_112744794);
      _objc_retain(uVar11);
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,uVar11);
      uVar7 = *(undefined8 *)(param_1 + lVar12);
      *(undefined8 *)(param_1 + lVar12) = uVar11;
      _objc_release(uVar7);
      _objc_release(lVar4);
      puVar6 = PTR_PTR_1126b10c8;
    }
    PTR_PTR_1126b10c8 = puVar6;
    if (uVar9 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744790),param_2,1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274478c),param_2,1);
    }
    else {
      lVar12 = param_3;
      func_0x00010c29c5c0(param_3);
      func_0x00010c22d8c0((double)lVar12,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      uStack_88 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
      uStack_80 = *(undefined8 *)(param_1 + _DAT_112744780);
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_80,&uStack_88,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar5,param_2,puVar6,puVar8);
      lVar12 = (long)_DAT_112744790;
      func_0x00010c16b720(*(undefined8 *)(param_1 + lVar12),param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar8);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar12),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274478c),param_2,0);
      _objc_release(puVar6);
    }
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 106284338; end: 10628433b; -[SCContextSpotlightMetricsViewController didTapBadge] */

void FUN_106284338(void)

{
  return;
}



/* Entry: 10628433c; end: 106284373; -[SCContextSpotlightMetricsViewController _showViewCountForViewLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10628433c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  lVar2 = *(long *)(param_1 + _DAT_112744770);
  if ((lVar2 != 0x49) && (lVar2 != 0x62)) {
    bVar1 = lVar2 != 0x54 && lVar2 != 0x59;
  }
  return bVar1;
}



/* Entry: 106284374; end: 106284473; -[SCContextSpotlightMetricsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106284374(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744764,0);
  _objc_storeStrong(param_1 + _DAT_112744768,0);
  _objc_storeStrong(param_1 + _DAT_11274476c,0);
  _objc_storeStrong(param_1 + _DAT_112744798,0);
  _objc_storeStrong(param_1 + _DAT_112744760,0);
  _objc_storeStrong(param_1 + _DAT_11274479c,0);
  _objc_storeStrong(param_1 + _DAT_112744794,0);
  _objc_storeStrong(param_1 + _DAT_112744788,0);
  _objc_storeStrong(param_1 + _DAT_112744784,0);
  _objc_storeStrong(param_1 + _DAT_112744780,0);
  _objc_storeStrong(param_1 + _DAT_112744790,0);
  _objc_storeStrong(param_1 + _DAT_112744778,0);
  _objc_storeStrong(param_1 + _DAT_11274477c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274478c,0);
  return;
}



/* Entry: 106284474; end: 106284743; -[SCContextSpotlightOneTapToShareViewController initWithSnapchattersDataFetcher:snapchattersUserInfoRepository:groupDisplayNameFormatter:profileImageProvider:performer:conversationDestinationParser:spotlightLogger:visibilityModelObservable:selectionRecipientObservableRepo:storyId:includeGroupsEnabled:groupAvatarScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106284474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f0aa8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127447a4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127447a8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127447ac;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127447b0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127447b4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127447b8;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127447bc;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127447c0;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127447c4;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_1127447c8;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127447cc) = param_13;
    lVar4 = (long)_DAT_1127447d0;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127447d4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127447d4) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106284744; end: 10628489f; -[SCContextSpotlightOneTapToShareViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106284744(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f0aa8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  func_0x00010beb1160(param_1);
  func_0x00010be22c00(param_1);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127447c0);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1062848a0; end: 1062848e7;  */

void FUN_1062848a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffc40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062848e8; end: 1062849a7; -[SCContextSpotlightOneTapToShareViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062848e8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0aa8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  lVar5 = (long)_DAT_1127447d8;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar4 = (long)_DAT_1127447dc;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
    }
  }
  return;
}



/* Entry: 1062849a8; end: 1062849ff; -[SCContextSpotlightOneTapToShareViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062849a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0aa8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c12c9c0(*(undefined8 *)(param_1 + _DAT_1127447d8));
  return;
}



/* Entry: 106284a00; end: 106284aab; -[SCContextSpotlightOneTapToShareViewController setContanierView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106284a00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = (long)_DAT_1127447d8;
    lVar2 = (long)_DAT_1127447dc;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c9c0(*(undefined8 *)(param_1 + lVar1));
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    *(long *)(param_1 + lVar1) = param_3;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined **)(param_1 + lVar2) = puVar4;
    _objc_release(uVar3);
    func_0x00010bef9040(param_3,param_2,*(undefined8 *)(param_1 + lVar2));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106284aac; end: 106285073; -[SCContextSpotlightOneTapToShareViewController _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106284aac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined *puVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [16];
  
  lVar31 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar29);
  lVar29 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar29);
  puVar1 = PTR_PTR_1126c93a0;
  _objc_alloc_init();
  lVar33 = (long)_DAT_1127447e0;
  uVar32 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar1;
  _objc_release(uVar32);
  uVar32 = *(undefined8 *)(param_1 + lVar33);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar32);
  _objc_release(puVar1);
  lVar29 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar34 = (long)_DAT_1127447e4;
  uVar32 = *(undefined8 *)(param_1 + lVar34);
  *(undefined **)(param_1 + lVar34) = puVar1;
  _objc_release(uVar32);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar34));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar34));
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bfe0660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar3;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar32);
  _objc_release(uVar3);
  lVar29 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar29);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar34);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar29;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493c0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar34;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar33);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(lVar34);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar3);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar32);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar29);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar31) {
    return;
  }
  ___stack_chk_fail();
  lVar29 = *(long *)(lVar4 + _DAT_1127447c4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar29 == 0) {
    func_0x00010be22be0(lVar4);
  }
  else {
    puVar2 = PTR_PTR_1126c2730;
    _objc_alloc(PTR_PTR_1126c2730);
    func_0x00010c03cd60();
    lVar5 = lVar29;
    func_0x00010c11f840(lVar29);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_1e0,lVar4);
    puVar30 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e0e80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_200 = 0xc2000000;
    pcStack_1f8 = FUN_106285340;
    puStack_1f0 = &UNK_1109196d8;
    _objc_copyWeak(auStack_1e8,auStack_1e0);
    lVar8 = lVar6;
    func_0x00010c0b8600(lVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = puVar1;
    uStack_228 = 0xc2000000;
    uStack_220 = 0x106285400;
    puStack_218 = &UNK_110919708;
    _objc_copyWeak(auStack_210,auStack_1e0);
    lVar9 = lVar8;
    func_0x00010bfad7a0(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(puVar30);
    _objc_copyWeak(auStack_238,auStack_1e0);
    lVar6 = lVar11;
    func_0x00010c25ff60(lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar6);
    _objc_destroyWeak(auStack_238);
    _objc_release(lVar11);
    _objc_destroyWeak(auStack_210);
    _objc_destroyWeak(auStack_1e8);
    _objc_destroyWeak(auStack_1e0);
    _objc_release(lVar5);
    _objc_release(puVar2);
  }
  _objc_release(lVar29);
  return;
}



/* Entry: 106285074; end: 10628533f; -[SCContextSpotlightOneTapToShareViewController _getSnapchatterInfoViaSendToRanking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106285074(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  
  lVar2 = *(long *)(param_1 + _DAT_1127447c4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010be22be0(param_1);
  }
  else {
    puVar3 = PTR_PTR_1126c2730;
    _objc_alloc(PTR_PTR_1126c2730);
    func_0x00010c03cd60();
    lVar4 = lVar2;
    func_0x00010c11f840(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_80,param_1);
    puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0e0e80(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106285340;
    puStack_90 = &UNK_1109196d8;
    _objc_copyWeak(auStack_88,auStack_80);
    lVar7 = lVar6;
    func_0x00010c0b8600(lVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x106285400;
    puStack_b8 = &UNK_110919708;
    _objc_copyWeak(auStack_b0,auStack_80);
    lVar8 = lVar7;
    func_0x00010bfad7a0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_copyWeak(auStack_d8,auStack_80);
    lVar6 = lVar9;
    func_0x00010c25ff60(lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar6);
    _objc_destroyWeak(auStack_d8);
    _objc_release(lVar9);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106285340; end: 106285483;  */

void FUN_106285340(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010c11fc40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6a80(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar2 = param_2;
  func_0x00010c122f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar1 = param_1;
  func_0x00010be17d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106285484; end: 1062854cb;  */

void FUN_106285484(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdfe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062854cc; end: 106285503; -[SCContextSpotlightOneTapToShareViewController _setRankingResultsId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062854cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127447e8);
  *(undefined8 *)(param_1 + _DAT_1127447e8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106285504; end: 10628570b; -[SCContextSpotlightOneTapToShareViewController _firstShareableRecipientFromRankedRecipients:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106285504(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar3 = *plStack_140;
    do {
      lVar4 = 0;
      do {
        if (*plStack_140 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_148 + lVar4 * 8);
        uStack_170 = 0;
        uStack_160 = 0x2020000000;
        uStack_158 = 0;
        puStack_168 = &uStack_170;
        func_0x00010c0c0060(uVar2);
        if ((*(byte *)(puStack_168 + 3) & 1) != 0) {
          _objc_retain(uVar2);
          __Block_object_dispose(&uStack_170,8);
          goto LAB_106285698;
        }
        __Block_object_dispose(&uStack_170,8);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar2 = 0;
LAB_106285698:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10628570c; end: 10628571f;  */

void FUN_10628570c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106285720; end: 10628578b;  */

void FUN_106285720(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c08fa60();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10628578c; end: 106285897; -[SCContextSpotlightOneTapToShareViewController _didFetchRankedRecipient:] */

void FUN_10628578c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106285898;
  puStack_58 = &UNK_110919798;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0c0060(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106285898; end: 106285927;  */

void FUN_106285898(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe080();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106285928; end: 106285a27; -[SCContextSpotlightOneTapToShareViewController _getSnapchatterInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106285928(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127447a4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127447b4);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c11f720(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106285a28; end: 106285ab7;  */

void FUN_106285a28(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be20920(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfe080(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106285ab8; end: 106285bbf; -[SCContextSpotlightOneTapToShareViewController _getMostRecentlyInteractedFriend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106285ab8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127447a4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127447b4);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0d42c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106285bc0; end: 106285c7f;  */

void FUN_106285bc0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  if (lVar1 == 0) {
    lVar1 = lVar2;
    func_0x00010bf6b020(lVar2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e89e0(lVar1);
    _objc_release(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfe080(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106285c80; end: 106285e07; -[SCContextSpotlightOneTapToShareViewController _didFetchSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106285c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127447b0);
  uVar1 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010bfa5500(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106285e08; end: 106285edb;  */

void FUN_106285e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106285edc;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106285edc; end: 106285f0f;  */

void FUN_106285edc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106285f10; end: 106286073; -[SCContextSpotlightOneTapToShareViewController _configureButtonViewWithImage:snapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106285f10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e89e0();
  }
  else {
    lVar5 = (long)_DAT_1127447ec;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = param_4;
    _objc_release(uVar1);
    lVar5 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e89e0();
    _objc_release(lVar5);
    lVar5 = param_4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c08fa60();
    lVar3 = lVar5;
    if (lVar2 == 0) {
      lVar3 = param_4;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar2 = lVar5;
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x0001062ccf9c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bf46c40(*(undefined8 *)(param_1 + _DAT_1127447e0),param_2,param_3,puVar4);
    _objc_release(puVar4);
    param_1 = lVar3;
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106286074; end: 10628629f; -[SCContextSpotlightOneTapToShareViewController _configureButtonViewWithGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106286074(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c08fa60();
  lVar2 = param_3;
  if (lVar1 == 0) {
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar7);
  lVar7 = lVar2;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e89e0();
  }
  else {
    lVar7 = (long)_DAT_1127447f0;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = param_3;
    _objc_release(uVar3);
    lVar7 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e89e0();
    _objc_release(lVar7);
    func_0x0001062ccf9c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bdd0440(param_1,param_2,param_3);
    lVar4 = *(long *)(param_1 + _DAT_1127447ac);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      lVar8 = param_1;
      func_0x00010be70760(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar8 = 0;
    }
    _objc_release(lVar5);
    if ((lVar4 == 0) || (lVar5 = lVar8, func_0x00010bf529e0(), lVar5 == 0)) {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      if ((int)lVar1 == 0) {
        func_0x00010bf46c40(*(undefined8 *)(param_1 + _DAT_1127447e0),param_2,0,puVar6);
      }
      else {
        func_0x00010bf46c20(*(undefined8 *)(param_1 + _DAT_1127447e0),param_2,puVar6);
      }
      _objc_release(puVar6);
    }
    else {
      func_0x00010bf46c60(*(undefined8 *)(param_1 + _DAT_1127447e0),param_2,lVar8,lVar4,lVar1);
    }
    _objc_release(lVar8);
    _objc_release(lVar4);
    param_1 = lVar7;
  }
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062862a0; end: 1062864a3; -[SCContextSpotlightOneTapToShareViewController _participantNamesExceptSelfForGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1062862a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
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
  puVar12 = param_3;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_1127447a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar15;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar3 = param_3;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = &uStack_130;
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined8 *)0x0) {
      lVar2 = *plStack_120;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar2) {
            _objc_enumerationMutation(puVar3);
          }
          uVar14 = *(ulong *)(lStack_128 + (long)puVar12 * 8);
          uVar5 = uVar14;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          if ((uVar6 & 1) == 0) {
            uVar6 = uVar14;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c08fa60();
            _objc_release(uVar6);
            _objc_release(uVar5);
            if (uVar7 != 0) {
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar13,param_2,uVar14);
              uVar5 = uVar14;
              goto LAB_106286410;
            }
          }
          else {
LAB_106286410:
            _objc_release(uVar5);
          }
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar4 != puVar12);
        puVar12 = &uStack_130;
        puVar4 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,puVar12,auStack_f0,0x10);
      } while (puVar4 != (undefined8 *)0x0);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  lVar15 = (long)_DAT_1127447d0;
  iVar1 = (int)*(undefined8 *)((long)param_3 + lVar15);
  func_0x00010c071800();
  if (iVar1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)((long)param_3 + (long)_DAT_1127447e0);
    func_0x00010bfce5e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar3 = param_3;
      func_0x00010be24780(param_3,param_2,puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf529e0();
      puVar13 = (undefined *)(ulong)(puVar4 != (undefined8 *)0x0);
      if (puVar4 != (undefined8 *)0x0) {
        puVar8 = PTR_PTR_1126c2ec0;
        _objc_alloc(PTR_PTR_1126c2ec0);
        func_0x00010c004820();
        puVar9 = PTR_PTR_1126c93a8;
        _objc_alloc(PTR_PTR_1126c93a8);
        puVar10 = PTR_PTR_1126c93b0;
        func_0x00010c0f4b40(PTR_PTR_1126c93b0,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0509a0(puVar9,param_2,puVar10,0,0,0,0,0);
        _objc_release(puVar10);
        puVar10 = PTR_PTR_1126c93b8;
        _objc_alloc(PTR_PTR_1126c93b8);
        puVar11 = PTR_PTR_1126ae6b8;
        func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c001fc0(puVar10,param_2,puVar11,0,puVar8,0,lVar2,0);
        _objc_release(puVar11);
        func_0x00010bf9d620(*(undefined8 *)((long)param_3 + lVar15),param_2,puVar10);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(puVar12);
  return puVar13;
}



/* Entry: 1062864a4; end: 10628666b; -[SCContextSpotlightOneTapToShareViewController _attachGroupAvatarForGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1062864a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_1127447d0;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar10);
  func_0x00010c071800();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_1127447e0);
    func_0x00010bfce5e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = param_1;
      func_0x00010be24780(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      bVar1 = lVar5 != 0;
      if (lVar5 != 0) {
        puVar6 = PTR_PTR_1126c2ec0;
        _objc_alloc(PTR_PTR_1126c2ec0);
        func_0x00010c004820();
        puVar7 = PTR_PTR_1126c93a8;
        _objc_alloc(PTR_PTR_1126c93a8);
        puVar8 = PTR_PTR_1126c93b0;
        func_0x00010c0f4b40(PTR_PTR_1126c93b0,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0509a0(puVar7,param_2,puVar8,0,0,0,0,0);
        _objc_release(puVar8);
        puVar8 = PTR_PTR_1126c93b8;
        _objc_alloc(PTR_PTR_1126c93b8);
        puVar9 = PTR_PTR_1126ae6b8;
        func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c001fc0(puVar8,param_2,puVar9,0,puVar6,0,lVar3,0);
        _objc_release(puVar9);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar10),param_2,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10628666c; end: 106286a83; -[SCContextSpotlightOneTapToShareViewController _groupAvatarParticipantsForGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628666c(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *unaff_x24;
  undefined *puVar17;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined **ppuStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar15 = param_3;
  func_0x00010c0ecc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  puVar15 = param_3;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar14 = *plStack_220;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_220 != lVar14) {
          _objc_enumerationMutation(puVar15);
        }
        unaff_x24 = *(undefined **)(lStack_228 + (long)puVar17 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(unaff_x24);
        puVar17 = puVar17 + 1;
      } while (puVar2 != puVar17);
      puVar2 = puVar15;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar15);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puVar17 = param_3;
  func_0x00010c089e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar17;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar14 = *plStack_260;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_260 != lVar14) {
          _objc_enumerationMutation(puVar17);
        }
        unaff_x24 = puVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x24 != (undefined *)0x0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(unaff_x24);
        puVar15 = puVar15 + 1;
      } while (puVar3 != puVar15);
      puVar3 = puVar17;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar17);
  puVar17 = puVar2;
  func_0x00010bf529e0();
  if (puVar17 == (undefined *)0x0) {
    puVar17 = param_3;
    func_0x00010c0ecc20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar17;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar17);
  }
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_2c0 = param_3;
  func_0x00010bf529e0(puVar2);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_2a8 = 0;
  puStack_2b0 = (undefined *)0x0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  _objc_retain(puVar2);
  ppuVar13 = &puStack_2b0;
  puStack_2b8 = puVar2;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar14 = *plStack_2a0;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_2a0 != lVar14) {
          _objc_enumerationMutation(puStack_2b8);
        }
        unaff_x24 = *(undefined **)(lStack_2a8 + (long)puVar15 * 8);
        puVar3 = PTR_PTR_1126b5978;
        _objc_alloc(PTR_PTR_1126b5978);
        puVar4 = unaff_x24;
        func_0x00010c2923e0(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = unaff_x24;
        func_0x00010bf1acc0(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf40c40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05ad80(puVar3);
        func_0x00010befa120(puVar17);
        _objc_release(puVar3);
        _objc_release(unaff_x24);
        _objc_release(puVar5);
        _objc_release(puVar4);
        puVar15 = puVar15 + 1;
      } while (puVar2 != puVar15);
      ppuVar13 = &puStack_2b0;
      puVar2 = puStack_2b8;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  puVar2 = puStack_2b8;
  _objc_release(puStack_2b8);
  puVar3 = puVar17;
  func_0x00010bf51e00();
  _objc_release(puVar17);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar4 = puStack_2c0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puStack_2d8 = puVar2;
  pcStack_2c8 = FUN_106286a84;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_1127447ec;
  lVar6 = *(long *)(puVar4 + lVar16);
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar3;
  puStack_2f0 = puVar17;
  puStack_2e8 = puVar15;
  puStack_2e0 = puVar1;
  puStack_2d0 = &stack0xfffffffffffffff0;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  ppuVar9 = (undefined **)PTR_PTR_1126b01c0;
  if (lVar14 == 0) {
    lVar14 = (long)_DAT_1127447f0;
    ppuVar7 = *(undefined ***)(puVar4 + lVar14);
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c08fa60();
    _objc_release();
    ppuVar9 = (undefined **)PTR_PTR_1126b01c0;
    if (ppuVar8 == (undefined **)0x0) goto LAB_106286c8c;
    ppuVar7 = *(undefined ***)(puVar4 + lVar14);
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar7;
    func_0x00010bfcf680();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = *(undefined ***)(puVar4 + lVar16);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar7;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (ppuVar9 != (undefined **)0x0) {
    func_0x00010bf03180(*(undefined8 *)(puVar4 + _DAT_1127447e0));
    puVar15 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar15);
    uVar10 = *(undefined8 *)(puVar4 + _DAT_1127447b8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_310 = ppuVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c246920(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_330 = 0xc2000000;
    pcStack_328 = FUN_106286cc0;
    puStack_320 = &UNK_1109197f8;
    uVar12 = uVar11;
    puStack_318 = puVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = &puStack_338;
    func_0x00010c297260(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar15);
    _objc_release(uVar10);
    _objc_release();
    ppuVar7 = ppuVar9;
  }
LAB_106286c8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  if ((param_2 != 0) && (ppuVar13 == (undefined **)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be72890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (ppuVar7[4],PTR_s__performShareActionWith__11257a3c0,param_2);
    return;
  }
  return;
}



/* Entry: 106286a84; end: 106286cbf; -[SCContextSpotlightOneTapToShareViewController _handleButtonTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106286a84(long param_1,long param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_1127447ec;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  ppuVar4 = (undefined **)PTR_PTR_1126b01c0;
  if (lVar10 == 0) {
    lVar10 = (long)_DAT_1127447f0;
    ppuVar2 = *(undefined ***)(param_1 + lVar10);
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c08fa60();
    _objc_release();
    ppuVar4 = (undefined **)PTR_PTR_1126b01c0;
    if (ppuVar3 == (undefined **)0x0) goto LAB_106286c8c;
    ppuVar2 = *(undefined ***)(param_1 + lVar10);
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    param_3 = ppuVar2;
    func_0x00010bfcf680();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + lVar9);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = ppuVar2;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (ppuVar4 != (undefined **)0x0) {
    func_0x00010bf03180(*(undefined8 *)(param_1 + _DAT_1127447e0));
    puVar5 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127447b8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_50 = ppuVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c246920(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106286cc0;
    puStack_60 = &UNK_1109197f8;
    uVar8 = uVar7;
    lStack_58 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &puStack_78;
    func_0x00010c297260(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release();
    ppuVar2 = ppuVar4;
  }
LAB_106286c8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((param_2 != 0) && (param_3 == (undefined **)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be72890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (ppuVar2[4],PTR_s__performShareActionWith__11257a3c0,param_2);
    return;
  }
  return;
}



/* Entry: 106286cc0; end: 106286cd7;  */

void FUN_106286cc0(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be72890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__performShareActionWith__11257a3c0,param_2);
    return;
  }
  return;
}



/* Entry: 106286cd8; end: 106286e57; -[SCContextSpotlightOneTapToShareViewController _performShareActionWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106286cd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x00010bf50b20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b5b00;
    func_0x00010bf7f060(PTR_PTR_1126b5b00,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5c68;
    func_0x00010c0e8960(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0ccaa0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161fe0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    func_0x00010c1d0640(puVar4,param_2,*(undefined8 *)(param_1 + _DAT_1127447e8),
                        &PTR____CFConstantStringClassReference_110f43578);
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127447bc);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b04c0();
    _objc_release(uVar6);
    param_1 = param_1 + _DAT_1127447f4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e89c0();
    _objc_release(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106286e58; end: 106286f0b; -[SCContextSpotlightOneTapToShareViewController _didReceiveVisibilityModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106286e58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29e660();
  if (lVar1 == 2) {
    lVar1 = param_3;
    func_0x00010c2331a0();
    if ((int)lVar1 != 0) {
      if ((*(long *)(param_1 + _DAT_1127447ec) == 0) && (*(long *)(param_1 + _DAT_1127447f0) == 0))
      goto LAB_106286ef8;
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127447bc);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ab800();
      _objc_release(uVar2);
    }
    lVar3 = param_3;
    func_0x00010bf034a0(param_3);
    func_0x00010bee40c0(param_1,param_2,lVar1,lVar3);
  }
LAB_106286ef8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106286f0c; end: 106287087; -[SCContextSpotlightOneTapToShareViewController _updateVisibilityForShouldShow:animated:] */

void FUN_106286f0c(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  if ((param_4 & 1) != 0) {
    lVar3 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar4 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar2);
      lVar4 = lVar2;
    }
    _objc_release(lVar2);
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106287088;
    puStack_70 = &UNK_11084d5f8;
    uStack_58 = (undefined1)param_3;
    lStack_68 = param_1;
    lStack_60 = lVar4;
    _objc_retain(lVar4);
    func_0x00010bf03440(0x3fd3333333333333,0,puVar1,param_2,0,&puStack_88,0);
    _objc_release(lStack_60);
    _objc_release(lVar4);
    return;
  }
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  uVar5 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar5 = 0;
  }
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106287088; end: 10628711b;  */

void FUN_106287088(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar2 = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10628711c; end: 1062872f3; -[SCContextSpotlightOneTapToShareViewController _handleSuperviewTap:] */

void FUN_10628711c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7);
  uVar6 = param_1;
  uVar7 = param_2;
  _objc_release(param_7);
  uVar3 = param_5;
  func_0x00010c29bf00();
  iVar1 = (int)uVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(uVar6,uVar7,param_3,param_4,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  _CGRectContainsPoint(uVar6,uVar7,param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    uVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe3a40(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c93a0;
    _objc_opt_class(PTR_PTR_1126c93a0);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    _objc_release(uVar4);
    if (((uVar3 & 1) != 0) && (uVar4 != 0)) {
      func_0x00010be269a0(param_5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1062872f4; end: 106287443; -[SCContextSpotlightOneTapToShareViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1062872f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_7 != *(long *)(param_5 + _DAT_1127447dc)) {
    return 1;
  }
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,lVar1);
  uVar4 = param_1;
  uVar5 = param_2;
  _objc_release(param_7);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(uVar4,uVar5,param_3,param_4,lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(lVar2);
  _CGRectContainsPoint(uVar4,uVar5,param_3,param_4,param_1,param_2);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 106287444; end: 106287463; -[SCContextSpotlightOneTapToShareViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106287444(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127447f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106287464; end: 106287477; -[SCContextSpotlightOneTapToShareViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106287464(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127447f4,param_3);
  return;
}



/* Entry: 106287478; end: 1062875d3; -[SCContextSpotlightOneTapToShareViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106287478(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127447f4);
  _objc_storeStrong(param_1 + _DAT_1127447d0,0);
  _objc_storeStrong(param_1 + _DAT_1127447f0,0);
  _objc_storeStrong(param_1 + _DAT_1127447e8,0);
  _objc_storeStrong(param_1 + _DAT_1127447c8,0);
  _objc_storeStrong(param_1 + _DAT_1127447c4,0);
  _objc_storeStrong(param_1 + _DAT_1127447d8,0);
  _objc_storeStrong(param_1 + _DAT_1127447dc,0);
  _objc_storeStrong(param_1 + _DAT_1127447d4,0);
  _objc_storeStrong(param_1 + _DAT_1127447c0,0);
  _objc_storeStrong(param_1 + _DAT_1127447bc,0);
  _objc_storeStrong(param_1 + _DAT_1127447b8,0);
  _objc_storeStrong(param_1 + _DAT_1127447ec,0);
  _objc_storeStrong(param_1 + _DAT_1127447b4,0);
  _objc_storeStrong(param_1 + _DAT_1127447b0,0);
  _objc_storeStrong(param_1 + _DAT_1127447ac,0);
  _objc_storeStrong(param_1 + _DAT_1127447a8,0);
  _objc_storeStrong(param_1 + _DAT_1127447a4,0);
  _objc_storeStrong(param_1 + _DAT_1127447e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127447e0,0);
  return;
}



/* Entry: 1062875d4; end: 106287747; -[SCContextSpotlightPrimaryCTAViewController initWithParamsResponse:lifecycleEvent:useTransparentStyleForChat:storiesConfigProvider:visibilityModelObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062875d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f0ab0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127447f8) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127447fc) = param_5;
    lVar4 = (long)_DAT_112744800;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112744804;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112744808;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274480c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744810);
    *(undefined **)((long)puVar1 + (long)_DAT_112744810) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744814) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744818) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274481c) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744820) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106287748; end: 106287ddb; -[SCContextSpotlightPrimaryCTAViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106287748(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126f0ab0;
  lStack_a8 = param_1;
  _objc_msgSendSuper2(&lStack_a8,PTR_s_viewDidLoad_112684cd8);
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar17);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112744824;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar2;
  _objc_release(uVar15);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar15);
  _objc_release(puVar2);
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar17);
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd7360(param_1);
  uVar15 = uVar3;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112744828;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined8 *)(param_1 + lVar17) = uVar15;
  _objc_release(uVar16);
  _objc_release(uVar3);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar17));
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11274482c;
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  *(undefined8 *)(param_1 + lVar20) = uVar15;
  _objc_release(uVar16);
  _objc_release(lVar4);
  _objc_release(lVar17);
  _objc_release(uVar3);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar20));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  uStack_98 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar20;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  uStack_90 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar10);
  _objc_release(uVar16);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(lVar7);
  _objc_release(lVar20);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(lVar17);
  _objc_release(uVar5);
  func_0x00010bf46be0(param_1);
  _objc_initWeak(auStack_b0,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744800);
  puVar10 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106287ddc;
  puStack_c0 = &UNK_110842c58;
  _objc_copyWeak(auStack_b8,auStack_b0);
  uVar15 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(puVar10);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744804);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar2;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_106287efc;
  puStack_e8 = &UNK_110919828;
  _objc_copyWeak(auStack_e0,auStack_b0);
  uVar15 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(puVar10);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744808);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = auStack_b0;
  _objc_copyWeak(auStack_108);
  uVar15 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  puVar11 = auStack_b0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  _objc_retain(puVar14);
  puVar11 = puVar11 + 0x20;
  _objc_loadWeakRetained();
  if (puVar11 != (undefined1 *)0x0) {
    puVar19 = puVar14;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c93c0;
    _objc_opt_class(PTR_PTR_1126c93c0);
    puVar12 = puVar19;
    _objc_opt_isKindOfClass(puVar19,puVar2);
    puVar1 = puVar19;
    if (((ulong)puVar12 & 1) == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar19);
    if (puVar1 != (undefined1 *)0x0) {
      puVar19 = puVar14;
      func_0x00010bf529e0();
      if (puVar19 < (undefined1 *)0x2) {
        puVar19 = (undefined1 *)0x0;
      }
      else {
        puVar12 = puVar14;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126c93c8;
        _objc_opt_class(PTR_PTR_1126c93c8);
        puVar13 = puVar12;
        _objc_opt_isKindOfClass(puVar12,puVar2);
        puVar19 = puVar12;
        if (((ulong)puVar13 & 1) == 0) {
          puVar19 = (undefined1 *)0x0;
        }
        _objc_retain(puVar19);
        _objc_release(puVar12);
      }
      func_0x00010bf47b40(puVar11);
      _objc_release(puVar19);
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 106287ddc; end: 106287efb;  */

void FUN_106287ddc(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar5 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c93c0;
    _objc_opt_class(PTR_PTR_1126c93c0);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar1 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    if (uVar1 != 0) {
      uVar5 = param_2;
      func_0x00010bf529e0();
      if (uVar5 < 2) {
        uVar5 = 0;
      }
      else {
        uVar3 = param_2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126c93c8;
        _objc_opt_class(PTR_PTR_1126c93c8);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar2);
        uVar5 = uVar3;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar3);
      }
      func_0x00010bf47b40(param_1);
      _objc_release(uVar5);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106287efc; end: 106287f8b;  */

void FUN_106287efc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106287f8c; end: 106287fe7; -[SCContextSpotlightPrimaryCTAViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106287f8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744830);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106287fe8; end: 1062881df; -[SCContextSpotlightPrimaryCTAViewController configureButtonForCurrentStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106287fe8(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010bdd7360();
  lVar3 = (long)_DAT_112744824;
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(uVar1);
  lVar2 = param_2;
  func_0x00010bdd71c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar3));
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(uVar1);
  uVar4 = 0x402e000000000000;
  lVar2 = param_2;
  func_0x00010bdd72e0(0x402e000000000000,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar1);
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  lVar2 = param_2;
  func_0x00010bdd7440(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar1);
  _objc_release(lVar2);
  func_0x00010bdd7220(param_2);
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(uVar4);
  _objc_release(uVar1);
  lVar2 = param_2;
  func_0x00010bdd7200(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar1);
  func_0x00010bdcdc20(param_2);
  func_0x00010bdcdc00(param_2);
  func_0x00010bdcdf80(param_2);
  func_0x00010bdd7360(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_112744828),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 1062881e0; end: 1062881ff; -[SCContextSpotlightPrimaryCTAViewController setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062881e0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_1127447f8)) {
    return;
  }
  *(long *)(param_1 + _DAT_1127447f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bf46bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_configureButtonForCurrentStyle_1125af4a0);
  return;
}



/* Entry: 106288200; end: 106288443; -[SCContextSpotlightPrimaryCTAViewController configureWithSpotlightParams:spotlightResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106288200(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined1 uVar25;
  undefined8 unaff_x25;
  int iVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 auStack_1c0 [8];
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 auStack_1b0 [16];
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar22 = (long)_DAT_112744820;
  *(undefined1 *)(param_1 + lVar22) = 0;
  if (param_4 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_4;
    lStack_140 = lVar22;
    lStack_138 = param_1;
    func_0x00010c24aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar2;
    func_0x00010bf52a60();
    if (lVar22 != 0) {
      unaff_x28 = *plStack_120;
      do {
        lVar23 = 0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(lVar2);
          }
          unaff_x25 = *(undefined8 *)(lStack_128 + lVar23 * 8);
          uVar11 = unaff_x25;
          func_0x00010beedca0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar11;
          func_0x00010beeed20();
          if ((int)uVar3 == 0xe) {
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c08fba0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x26;
            func_0x00010c074340();
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            _objc_release(uVar11);
            if ((int)unaff_x27 != 0) {
              *(undefined1 *)(lStack_138 + lStack_140) = 1;
              goto LAB_106288370;
            }
          }
          else {
            _objc_release(uVar11);
          }
          lVar23 = lVar23 + 1;
        } while (lVar22 != lVar23);
        lVar22 = lVar2;
        func_0x00010bf52a60();
      } while (lVar22 != 0);
    }
LAB_106288370:
    _objc_release(lVar2);
    param_1 = lStack_138;
  }
  uVar4 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar4;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar24;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar4;
  uVar21 = uVar5;
  func_0x00010bf47a40(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar24);
  _objc_release(param_4);
  uVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106288444;
  lStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  uStack_180 = uVar5;
  uStack_178 = uVar24;
  uStack_170 = uVar4;
  lStack_168 = param_1;
  lStack_160 = param_4;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(uVar20);
  _objc_retain(uVar21);
  uVar4 = uVar20;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c93d0;
  func_0x00010c0ea900(PTR_PTR_1126c93d0);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar24;
  func_0x00010bf1f3c0();
  _objc_release(uVar24);
  _objc_release(puVar7);
  uVar24 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar24;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar24);
  if ((uVar5 & 1) == 0) {
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar9 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar7);
    uVar24 = uVar5;
    if ((uVar9 & 1) == 0) {
      uVar24 = 0;
    }
    _objc_retain(uVar24);
    _objc_release(uVar5);
  }
  else {
    uVar24 = 0;
  }
  uVar9 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar7);
  uVar5 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain();
  _objc_release(uVar9);
  uVar9 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar11 = *(undefined8 *)(uVar6 + (long)_DAT_112744838);
  *(undefined8 *)(uVar6 + (long)_DAT_112744838) = 0;
  _objc_release(uVar11);
  uVar9 = uVar8;
  func_0x00010c0720c0();
  iVar26 = (int)uVar9;
  if ((iVar26 == 0) || ((*(byte *)(uVar6 + (long)_DAT_1127447fc) & 1) == 0)) {
    uVar9 = uVar21;
    func_0x00010c08fa60();
    if (uVar9 == 0) {
      uVar25 = 0;
      iVar26 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(uVar6 + (long)_DAT_11274480c);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar12;
      func_0x00010c24afa0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010c098520();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010bf926c0();
      _objc_release(uVar3);
      _objc_release(uVar11);
      _objc_release(uVar12);
      if ((int)uVar13 == 0) {
        uVar25 = 0;
        goto LAB_10628870c;
      }
      uVar9 = uVar10;
      func_0x00010c0720c0();
      uVar25 = 0;
      if ((int)uVar9 == 0) goto LAB_10628870c;
      uVar25 = 1;
      iVar26 = 0;
    }
  }
  else {
    uVar25 = 0;
    iVar26 = 1;
  }
  func_0x00010c20eaa0(uVar6);
LAB_10628870c:
  uVar14 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010010fab4();
  uVar9 = uVar14;
  if ((int)uVar15 == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar14);
  uVar16 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_opt_class(PTR__OBJC_CLASS___NSUUID_1126b0270);
  uVar17 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar7);
  uVar15 = uVar16;
  if ((uVar17 & 1) == 0) {
    uVar15 = 0;
  }
  _objc_retain(uVar15);
  _objc_release(uVar16);
  puVar7 = PTR_PTR_1126b0cd8;
  uVar16 = uVar15;
  func_0x00010bdc3580(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  puVar18 = puVar7;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c08fa60();
  uVar1 = 0;
  if (puVar19 == (undefined *)0x0) {
    uVar1 = (char)iVar26;
  }
  puVar19 = PTR_PTR_1126b2d20;
  func_0x00010c25acc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bf1f3c0();
  _objc_release(uVar16);
  _objc_release(puVar19);
  if ((uVar9 == 0) || ((int)uVar17 == 0)) {
    func_0x00010bf46c00(uVar6);
  }
  else {
    _objc_initWeak(auStack_1b0,uVar6);
    func_0x00010bfa7b60(uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar14;
    func_0x00010c0e0e80(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1c0,auStack_1b0);
    uStack_1b8 = uVar1;
    uStack_1b7 = uVar25;
    _objc_retain(puVar18);
    _objc_retain(uVar21);
    uVar16 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar16);
    _objc_release(uVar6);
    _objc_release(puVar19);
    _objc_release(uVar14);
    _objc_release(uVar21);
    _objc_release(puVar18);
    _objc_destroyWeak(auStack_1c0);
    _objc_destroyWeak(auStack_1b0);
  }
  _objc_release(puVar18);
  _objc_release(puVar7);
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar24);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar21);
  _objc_release(uVar20);
  return;
}



/* Entry: 106288444; end: 106288a4b; -[SCContextSpotlightPrimaryCTAViewController configureWithOperaPage:lensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106288444(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined1 uVar20;
  int iVar21;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c93d0;
  func_0x00010c0ea900(PTR_PTR_1126c93d0);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar19;
  func_0x00010bf1f3c0();
  _objc_release(uVar19);
  _objc_release(puVar3);
  uVar19 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar19;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar19);
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar19 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar19 = 0;
    }
    _objc_retain(uVar19);
    _objc_release(uVar4);
  }
  else {
    uVar19 = 0;
  }
  uVar6 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar4 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain();
  _objc_release(uVar6);
  uVar6 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112744838);
  *(undefined8 *)(param_1 + _DAT_112744838) = 0;
  _objc_release(uVar8);
  uVar6 = uVar5;
  func_0x00010c0720c0();
  iVar21 = (int)uVar6;
  if ((iVar21 == 0) || ((*(byte *)(param_1 + _DAT_1127447fc) & 1) == 0)) {
    lVar9 = param_4;
    func_0x00010c08fa60();
    if (lVar9 == 0) {
      uVar20 = 0;
      iVar21 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + _DAT_11274480c);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar10;
      func_0x00010c24afa0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010c098520();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010bf926c0();
      _objc_release(uVar11);
      _objc_release(uVar8);
      _objc_release(uVar10);
      if ((int)uVar12 == 0) {
        uVar20 = 0;
        goto LAB_10628870c;
      }
      uVar6 = uVar7;
      func_0x00010c0720c0();
      uVar20 = 0;
      if ((int)uVar6 == 0) goto LAB_10628870c;
      uVar20 = 1;
      iVar21 = 0;
    }
  }
  else {
    uVar20 = 0;
    iVar21 = 1;
  }
  func_0x00010c20eaa0(param_1);
LAB_10628870c:
  uVar13 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010010fab4();
  uVar6 = uVar13;
  if ((int)uVar14 == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar13);
  uVar15 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_opt_class(PTR__OBJC_CLASS___NSUUID_1126b0270);
  uVar16 = uVar15;
  _objc_opt_isKindOfClass(uVar15,puVar3);
  uVar14 = uVar15;
  if ((uVar16 & 1) == 0) {
    uVar14 = 0;
  }
  _objc_retain(uVar14);
  _objc_release(uVar15);
  puVar3 = PTR_PTR_1126b0cd8;
  uVar15 = uVar14;
  func_0x00010bdc3580(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  puVar17 = puVar3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c08fa60();
  uVar1 = 0;
  if (puVar18 == (undefined *)0x0) {
    uVar1 = (char)iVar21;
  }
  puVar18 = PTR_PTR_1126b2d20;
  func_0x00010c25acc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf1f3c0();
  _objc_release(uVar15);
  _objc_release(puVar18);
  if ((uVar6 == 0) || ((int)uVar16 == 0)) {
    func_0x00010bf46c00(param_1);
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    func_0x00010bfa7b60(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010c0e0e80(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_70);
    uStack_78 = uVar1;
    uStack_77 = uVar20;
    _objc_retain(puVar17);
    _objc_retain(param_4);
    uVar16 = uVar15;
    func_0x00010c25ff60(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(puVar18);
    _objc_release(uVar13);
    _objc_release(param_4);
    _objc_release(puVar17);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(puVar17);
  _objc_release(puVar3);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar19);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106288a4c; end: 106288ac7;  */

void FUN_106288a4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bf46c00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106288ac8; end: 106288de3; -[SCContextSpotlightPrimaryCTAViewController configureButtonTitleWithIsSubscribed:isChat:isLens:jtcConversationId:arrowText:secondaryArrowText:lensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106288ac8(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                  ulong param_6,long param_7,long param_8,long param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_4;
  lVar2 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar11 = param_7;
  func_0x00010c08fa60();
  if (lVar11 == 0) {
    if (((int)param_5 == 0) || (lVar11 = param_9, func_0x00010c08fa60(), lVar11 == 0)) {
      lVar11 = 0;
    }
    else {
      func_0x0001070bd6ec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde4ba0(param_1);
    }
  }
  else {
    _objc_retain(param_7);
    lVar11 = param_7;
    if ((((param_3 & 1) == 0) && ((int)param_4 != 0)) &&
       (lVar9 = param_8, func_0x00010c08fa60(), lVar9 != 0)) {
      _objc_retain(param_8);
      _objc_release(param_7);
      lVar11 = param_8;
    }
  }
  lVar9 = lVar11;
  func_0x00010c08fa60();
  if (lVar9 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init();
    func_0x00010c1bdb00();
    lVar2 = param_1;
    func_0x00010bdd72e0(0x402e000000000000,param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112744824;
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c271420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar3);
    _objc_release(lVar2);
    func_0x00010bdd7240(param_1);
    func_0x00010c181140(*(undefined8 *)(param_1 + _DAT_11274482c));
    puVar10 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar11;
    func_0x00010bf2fae0(lVar11,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar10,param_2,lVar2,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
    func_0x00010c16b780(*(undefined8 *)(param_1 + lVar9),param_2,puVar10,0);
    uVar8 = param_6;
    lVar2 = param_9;
    func_0x00010bf46b00(param_1,param_2,param_4 & 0xffffffff);
    _objc_release(puVar10);
    _objc_release(puVar1);
  }
  *(bool *)(param_1 + _DAT_11274481c) = *(long *)(param_1 + _DAT_112744838) != 0;
  iVar7 = 0;
  func_0x00010bee4080(param_1);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar8);
  _objc_retain(lVar2);
  if (iVar7 == 0) {
    uVar6 = uVar8;
    func_0x00010c08fa60();
    if (uVar6 == 0) {
      lVar11 = lVar2;
      func_0x00010c08fa60();
      if (lVar11 != 0) {
        puVar1 = PTR_PTR_1126b5b00;
        func_0x00010c0fe480(PTR_PTR_1126b5b00,param_2,lVar2,1);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = *(undefined **)(param_6 + (long)_DAT_112744838);
        *(undefined **)(param_6 + (long)_DAT_112744838) = puVar1;
        goto LAB_106288ed8;
      }
      puVar1 = PTR_PTR_1126b5b00;
      func_0x00010bf82740();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106288e30;
    }
    puVar1 = PTR_PTR_1126b5b00;
    func_0x00010c085b20(PTR_PTR_1126b5b00,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_112744838;
    uVar3 = *(undefined8 *)(param_6 + lVar11);
    *(undefined **)(param_6 + lVar11) = puVar1;
    _objc_release(uVar3);
    puVar10 = PTR_PTR_1126b5c68;
    func_0x00010c085ae0(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b5b00;
    func_0x00010bf35d80();
    _objc_retainAutoreleasedReturnValue();
LAB_106288e30:
    lVar11 = (long)_DAT_112744838;
    uVar3 = *(undefined8 *)(param_6 + lVar11);
    *(undefined **)(param_6 + lVar11) = puVar1;
    _objc_release(uVar3);
    puVar10 = PTR_PTR_1126b5c68;
    func_0x00010bf0cb60(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_6 + lVar11);
  func_0x00010c0ccaa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fe0();
  _objc_release(uVar3);
LAB_106288ed8:
  _objc_release(puVar10);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106288de4; end: 106288f4f; -[SCContextSpotlightPrimaryCTAViewController configureActionWithIsChat:jtcConversationId:lensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106288de4(long param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    lVar4 = param_4;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      lVar4 = param_5;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        puVar1 = PTR_PTR_1126b5b00;
        func_0x00010c0fe480(PTR_PTR_1126b5b00,param_2,param_5,1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = *(undefined **)(param_1 + _DAT_112744838);
        *(undefined **)(param_1 + _DAT_112744838) = puVar1;
        goto LAB_106288ed8;
      }
      puVar1 = PTR_PTR_1126b5b00;
      func_0x00010bf82740();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106288e30;
    }
    puVar1 = PTR_PTR_1126b5b00;
    func_0x00010c085b20(PTR_PTR_1126b5b00,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112744838;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b5c68;
    func_0x00010c085ae0(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b5b00;
    func_0x00010bf35d80();
    _objc_retainAutoreleasedReturnValue();
LAB_106288e30:
    lVar4 = (long)_DAT_112744838;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b5c68;
    func_0x00010bf0cb60(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0ccaa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fe0();
  _objc_release(uVar2);
LAB_106288ed8:
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106288f50; end: 106288fb3; -[SCContextSpotlightPrimaryCTAViewController didSelect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106288f50(long param_1)

{
  if (*(long *)(param_1 + _DAT_112744838) != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106288fb4; end: 106289017; -[SCContextSpotlightPrimaryCTAViewController didSelectSecondary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106288fb4(long param_1)

{
  if (*(long *)(param_1 + _DAT_11274483c) != 0) {
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106289018; end: 106289087; -[SCContextSpotlightPrimaryCTAViewController _handleLifecycleEvent:] */

void FUN_106289018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106289088;
  puStack_20 = &UNK_110919888;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106289190;
  puStack_48 = &UNK_110919888;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bfd40(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 106289088; end: 10628918f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106289088(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744818) = 1;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar5 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010bf4bc60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf47a40(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106289190; end: 1062891ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106289190(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744818) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bee4090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateVisibilityAnimated__1125969c8,0);
  return;
}



/* Entry: 1062891ac; end: 10628920b; -[SCContextSpotlightPrimaryCTAViewController _didReceiveVisibilityModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062891ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c29e660();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c2331a0();
    *(char *)(param_1 + _DAT_112744814) = (char)lVar1;
    lVar1 = param_3;
    func_0x00010bf034a0(param_3);
    func_0x00010bee4080(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10628920c; end: 106289413; -[SCContextSpotlightPrimaryCTAViewController _updateVisibilityAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628920c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  byte bStack_48;
  
  if ((*(char *)(param_1 + _DAT_112744814) == '\x01') &&
     (*(char *)(param_1 + _DAT_112744818) == '\x01')) {
    bVar2 = *(byte *)(param_1 + _DAT_11274481c);
  }
  else {
    bVar2 = 0;
  }
  if ((param_3 & 1) != 0) {
    if ((bVar2 & 1) != 0) {
      lVar1 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar1);
    }
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106289368;
    puStack_58 = &UNK_110845ce0;
    lStack_50 = param_1;
    bStack_48 = bVar2 & 1;
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_70,0)
    ;
    return;
  }
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  uVar3 = 0x3ff0000000000000;
  if ((bVar2 & 1) == 0) {
    uVar3 = 0;
  }
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106289414; end: 10628944b; -[SCContextSpotlightPrimaryCTAViewController _buttonHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106289414(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x4048000000000000;
  if (*(long *)(param_1 + _DAT_1127447f8) != 1) {
    uVar1 = 0x4044000000000000;
  }
  uVar2 = 0x404a000000000000;
  if (*(long *)(param_1 + _DAT_1127447f8) != 2) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10628944c; end: 10628946b; -[SCContextSpotlightPrimaryCTAViewController _buttonBottomOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10628944c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + _DAT_1127447f8) != 1) {
    uVar1 = 0xc010000000000000;
  }
  return uVar1;
}



/* Entry: 10628946c; end: 1062894af; -[SCContextSpotlightPrimaryCTAViewController _buttonBackgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628946c(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + _DAT_1127447f8) < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10ddda560 + *(ulong *)(param_1 + _DAT_1127447f8) * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062894b0; end: 10628952b; -[SCContextSpotlightPrimaryCTAViewController _buttonFontWithSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062894b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127447f8);
  if (lVar1 == 2) {
    func_0x00010bf6d680(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 1) {
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 0) {
    func_0x00010bf1ecc0(PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10628952c; end: 10628956f; -[SCContextSpotlightPrimaryCTAViewController _buttonTitleColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628952c(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + _DAT_1127447f8) < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10ddda578 + *(ulong *)(param_1 + _DAT_1127447f8) * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106289570; end: 10628958f; -[SCContextSpotlightPrimaryCTAViewController _buttonBorderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106289570(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4000000000000000;
  if (*(long *)(param_1 + _DAT_1127447f8) != 1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106289590; end: 1062895d3; -[SCContextSpotlightPrimaryCTAViewController _buttonBorderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106289590(long param_1,undefined8 param_2)

{
  if (*(ulong *)(param_1 + _DAT_1127447f8) < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,
                        *(undefined8 *)(&UNK_10ddda590 + *(ulong *)(param_1 + _DAT_1127447f8) * 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062895d4; end: 1062896ab; -[SCContextSpotlightPrimaryCTAViewController _configureButtonImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062895d4(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = (long)_DAT_112744824;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar2 = param_1;
  func_0x00010be1a560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar4,param_2,lVar2,0);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010b8166c0();
  _objc_release(lVar2);
  bVar1 = (int)lVar3 == 0;
  uVar4 = 0;
  if (bVar1) {
    uVar4 = 0xc020000000000000;
  }
  uVar6 = 0xc020000000000000;
  if (bVar1) {
    uVar6 = 0;
  }
  func_0x00010c2163a0(0,uVar6,0,uVar4,*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1aa240(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar5));
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe90c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1062896ac; end: 106289717; -[SCContextSpotlightPrimaryCTAViewController _gamebuttonImage] */

void FUN_1062896ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar2,param_2,0x11e,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106289718; end: 1062897df; -[SCContextSpotlightPrimaryCTAViewController _applyButtonShadow] */

/* WARNING: Possible PIC construction at 0x000100b74fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b74fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b75000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b75024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7504c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b75068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001062897c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b7506c) */
/* WARNING: Removing unreachable block (ram,0x000100b75050) */
/* WARNING: Removing unreachable block (ram,0x000100b75028) */
/* WARNING: Removing unreachable block (ram,0x000100b75004) */
/* WARNING: Removing unreachable block (ram,0x000100b74fec) */
/* WARNING: Removing unreachable block (ram,0x000100b74fc8) */
/* WARNING: Removing unreachable block (ram,0x0001062897c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106289718(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  puVar1 = PTR_PTR_1126b08d8;
  lVar5 = *(long *)(param_1 + _DAT_1127447f8);
  if (lVar5 != 2) {
    if (lVar5 == 1) {
      puVar2 = &stack0xffffffffffffffd0;
      unaff_x29 = &stack0xfffffffffffffff0;
      uVar3 = *(undefined8 *)(param_1 + _DAT_112744824);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0x4018000000000000;
      uVar7 = 0x3fe8000000000000;
      uVar8 = 0;
      uVar9 = 0x4000000000000000;
      unaff_x30 = 0x1062897c8;
      unaff_x19 = puVar1;
      unaff_x20 = uVar3;
      unaff_x21 = puVar4;
      goto code_r0x000100b74f58;
    }
    if (lVar5 != 0) {
      return;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744824);
  uVar8 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar9 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uVar6 = 0;
  uVar7 = 0;
  puVar4 = (undefined *)0x0;
  puVar2 = (undefined1 *)register0x00000008;
code_r0x000100b74f58:
  *(undefined8 *)(puVar2 + -0x50) = unaff_d11;
  *(undefined8 *)(puVar2 + -0x48) = unaff_d10;
  *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar2 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  func_0x000107c61174(uVar6,uVar7,uVar8,uVar9,puVar4);
  func_0x000107c61174(uVar3);
  func_0x000107c61168(puVar1);
  func_0x000107c4aba4(uVar3);
  func_0x000107c61180();
  func_0x000107c59040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1062897e0; end: 106289887; -[SCContextSpotlightPrimaryCTAViewController _applyButtonAlignment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062897e0(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_2 + _DAT_1127447f8);
  if (lVar2 != 2) {
    if (lVar2 == 1) {
      lVar2 = (long)_DAT_112744824;
      func_0x00010c181ee0(*(undefined8 *)(param_2 + lVar2),param_3,1);
      func_0x00010bdd7360(param_2);
      uVar1 = *(undefined8 *)(param_2 + lVar2);
      param_1 = param_1 / 3.0;
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      goto LAB_106289870;
    }
    if (lVar2 != 0) {
      return;
    }
  }
  lVar2 = (long)_DAT_112744824;
  func_0x00010c181ee0(*(undefined8 *)(param_2 + lVar2),param_3,0);
  uVar3 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  param_1 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
LAB_106289870:
                    /* WARNING: Could not recover jumptable at 0x00010c181e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,param_1,uVar4,uVar5,uVar1,PTR_s_setContentEdgeInsets__11263e1b0);
  return;
}



/* Entry: 106289888; end: 106289ccf; -[SCContextSpotlightPrimaryCTAViewController _applyCursor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106289888(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  double dVar16;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_112744830;
  lVar1 = 0;
  if (*(long *)(param_1 + lVar15) != 0) {
    func_0x00010c12c960();
    lVar1 = *(long *)(param_1 + lVar15);
    *(undefined8 *)(param_1 + lVar15) = 0;
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + _DAT_1127447f8) == 1) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar2;
    _objc_release(uVar14);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar15),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08c0e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x3ff0000000000000);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08c0e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar14);
    lVar1 = (long)_DAT_112744824;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar1),param_2,*(undefined8 *)(param_1 + lVar15));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    func_0x00010bf49420(0x4000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar15);
    uStack_98 = uVar14;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar16 = 22.0;
    uVar5 = uVar4;
    func_0x00010bf49420(0x4036000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar15);
    uStack_90 = uVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bf348e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar15);
    uStack_88 = uVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08de00(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd7360(param_1);
    uVar11 = uVar9;
    func_0x00010bf493c0(dVar16 / 3.0,uVar9,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar11;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar12);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar14);
    _objc_release(uVar3);
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c08c0e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0);
    _objc_release(uVar14);
    puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
    func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                        &PTR____CFConstantStringClassReference_110dbf678);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = (long)_DAT_112744834;
    uVar14 = *(undefined8 *)(param_1 + lVar1);
    *(undefined **)(param_1 + lVar1) = puVar2;
    _objc_release(uVar14);
    func_0x00010c220360(*(undefined8 *)(param_1 + lVar1),param_2,
                        &PTR__OBJC_CLASS___NSConstantArray_111180830);
    func_0x00010c1b6d00(*(undefined8 *)(param_1 + lVar1),param_2,
                        &PTR__OBJC_CLASS___NSConstantArray_111180848);
    func_0x00010c192d40(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar1));
    func_0x00010c1eabe0(0x7f800000,*(undefined8 *)(param_1 + lVar1));
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    _objc_alloc();
    func_0x00010c0048c0(0x3e23d70a,0x3f800000,0x3ea8f5c3,0x3f800000);
    puVar12 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    puStack_a8 = puVar2;
    _objc_alloc();
    func_0x00010c0048c0(0x3e23d70a,0x3f800000,0x3ea8f5c3,0x3f800000);
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2160a0(*(undefined8 *)(param_1 + lVar1),param_2,puVar13);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar2);
    lVar1 = *(long *)(param_1 + lVar15);
    func_0x00010c08c0e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(lVar1 + _DAT_112744840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106289cd0; end: 106289cef; -[SCContextSpotlightPrimaryCTAViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106289cd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106289cf0; end: 106289d03; -[SCContextSpotlightPrimaryCTAViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106289cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744840,param_3);
  return;
}



/* Entry: 106289d04; end: 106289e0f; -[SCContextSpotlightPrimaryCTAViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106289d04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744840);
  _objc_storeStrong(param_1 + _DAT_11274480c,0);
  _objc_storeStrong(param_1 + _DAT_112744834,0);
  _objc_storeStrong(param_1 + _DAT_112744830,0);
  _objc_storeStrong(param_1 + _DAT_112744808,0);
  _objc_storeStrong(param_1 + _DAT_112744804,0);
  _objc_storeStrong(param_1 + _DAT_112744800,0);
  _objc_storeStrong(param_1 + _DAT_11274482c,0);
  _objc_storeStrong(param_1 + _DAT_112744828,0);
  _objc_storeStrong(param_1 + _DAT_112744844,0);
  _objc_storeStrong(param_1 + _DAT_112744848,0);
  _objc_storeStrong(param_1 + _DAT_11274483c,0);
  _objc_storeStrong(param_1 + _DAT_112744838,0);
  _objc_storeStrong(param_1 + _DAT_112744824,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744810,0);
  return;
}



/* Entry: 106289e10; end: 106289ef7; -[SCContextSpotlightReplyViewController initWithSnapchattersDataFetcher:spotlightLogger:contextExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106289e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f0ab8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274484c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744850;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744854;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106289ef8; end: 10628a23b; -[SCContextSpotlightReplyViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106289ef8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f0ab8;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_viewDidLoad_112684cd8);
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar11);
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar11);
  puVar1 = PTR_PTR_1126c93d8;
  _objc_alloc_init();
  lVar12 = (long)_DAT_112744858;
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar9);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12));
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar11);
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  lStack_a8 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  lStack_b8 = lVar2;
  lStack_88 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  uStack_c8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar11;
  func_0x00010bf493c0(0xc01c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 4;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010beef8c0(puStack_d0);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar11);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_d8);
  _objc_release(lStack_c0);
  _objc_release(uStack_c8);
  _objc_release(lStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a0);
  lVar6 = lStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10628a23c;
  lStack_120 = lVar12;
  uStack_118 = uVar5;
  uStack_110 = uVar9;
  lStack_108 = param_1;
  lStack_100 = lVar2;
  lStack_f8 = lVar11;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  uVar9 = uVar8;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(lVar6 + _DAT_11274485c);
  *(undefined8 *)(lVar6 + _DAT_11274485c) = uVar9;
  _objc_release(uVar10);
  lVar11 = (long)_DAT_112744860;
  if ((puVar7 != *(undefined **)(lVar6 + lVar11)) &&
     (puVar1 = puVar7, func_0x00010c0720c0(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = puVar7;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(lVar6 + lVar11);
    *(undefined **)(lVar6 + lVar11) = puVar1;
    _objc_release(uVar9);
    puVar1 = puVar7;
    func_0x00010c08fa60();
    if (puVar1 == (undefined *)0x0) {
      func_0x00010bee4060(lVar6);
    }
    else {
      lVar11 = lVar6;
      func_0x00010bf6b020(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132340();
      _objc_release(lVar11);
      _objc_initWeak(auStack_128,lVar6);
      uVar9 = *(undefined8 *)(lVar6 + _DAT_11274484c);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_130,auStack_128);
      _objc_retain(puVar7);
      func_0x00010c2448c0(uVar9);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar9);
      _objc_release(puVar7);
      _objc_destroyWeak(auStack_130);
      _objc_destroyWeak(auStack_128);
    }
  }
  _objc_release(uVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 10628a23c; end: 10628a417; -[SCContextSpotlightReplyViewController configureWithFriendUserId:storyId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628a23c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274485c);
  *(undefined8 *)(param_1 + _DAT_11274485c) = uVar3;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112744860;
  if ((param_3 != *(ulong *)(param_1 + lVar4)) &&
     (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar1;
    _objc_release(uVar3);
    uVar1 = param_3;
    func_0x00010c08fa60();
    if (uVar1 == 0) {
      func_0x00010bee4060(param_1);
    }
    else {
      lVar4 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c132340();
      _objc_release(lVar4);
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11274484c);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      func_0x00010c2448c0(uVar3);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10628a418; end: 10628a553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628a418(long param_1,undefined *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      if ((param_2 == (undefined *)0x0) || (param_3 != 0)) {
        func_0x00010bee4060(lVar2);
      }
      else {
        puVar3 = param_2;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c08fa60();
        puVar5 = PTR_PTR_1126b2c18;
        if (puVar4 == (undefined *)0x0) {
          puVar5 = param_2;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar4 = param_2;
          func_0x00010bf85d80(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb1120();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
        puVar3 = puVar5;
        func_0x00010c08fa60();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010bf478a0(*(undefined8 *)(lVar2 + _DAT_112744858));
        }
        func_0x00010bee4060(lVar2);
        _objc_release(puVar5);
      }
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10628a554; end: 10628a57b; -[SCContextSpotlightReplyViewController _updateVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628a554(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112744864) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112744864) = (char)param_3;
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleShowIfNeeded_112584768);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be35c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideReplyBar_11256b0a8);
  return;
}



/* Entry: 10628a57c; end: 10628a6bf; -[SCContextSpotlightReplyViewController _scheduleShowIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628a57c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (((*(char *)(param_1 + _DAT_112744864) == '\x01') &&
      (*(char *)(param_1 + _DAT_112744868) == '\x01')) &&
     (lVar4 = (long)_DAT_11274486c, (*(byte *)(param_1 + lVar4) & 1) == 0)) {
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c074c20();
    _objc_release(lVar2);
    if ((int)lVar1 != 0) {
      *(undefined1 *)(param_1 + lVar4) = 1;
      lVar2 = *(long *)(param_1 + _DAT_112744854);
      func_0x00010c269d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c132200();
      _objc_release(lVar2);
      _objc_initWeak(auStack_38,param_1);
      uVar3 = 0;
      _dispatch_time(0,lVar4 * 1000000000);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_10628a6c0;
      puStack_48 = &UNK_1108434b0;
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010058c530(uVar3,PTR___dispatch_main_q_11034be20,&puStack_60);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 10628a6c0; end: 10628a727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628a6c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) &&
      (*(undefined1 *)(param_1 + _DAT_11274486c) = 0, *(char *)(param_1 + _DAT_112744864) == '\x01')
      ) && (*(char *)(param_1 + _DAT_112744868) == '\x01')) {
    func_0x00010be7e1a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10628a728; end: 10628a85b; -[SCContextSpotlightReplyViewController _presentReplyBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628a728(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132320();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744850);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9300;
  func_0x00010c132240(PTR_PTR_1126c9300);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a81a0(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110f415f8,0x5c,
                      *(undefined8 *)(param_1 + _DAT_11274485c));
  _objc_release(puVar3);
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10628a85c;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010bf03440(0x3fd999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_58,
                      0);
  return;
}



/* Entry: 10628a85c; end: 10628a893;  */

void FUN_10628a85c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628a894; end: 10628a94b; -[SCContextSpotlightReplyViewController _hideReplyBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628a894(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_11274486c) = 0;
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132340();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132320();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10628a94c; end: 10628aa23; -[SCContextSpotlightReplyViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628a94c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0ab8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  *(undefined1 *)(param_1 + _DAT_112744868) = 1;
  func_0x00010be9b700(param_1);
  lVar5 = (long)_DAT_112744870;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar4 = (long)_DAT_112744874;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
    }
  }
  return;
}



/* Entry: 10628aa24; end: 10628aa83; -[SCContextSpotlightReplyViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628aa24(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0ab8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  *(undefined1 *)(param_1 + _DAT_112744868) = 0;
  func_0x00010c12c9c0(*(undefined8 *)(param_1 + _DAT_112744870));
  return;
}



/* Entry: 10628aa84; end: 10628ab2f; -[SCContextSpotlightReplyViewController setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628aa84(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = (long)_DAT_112744870;
    lVar2 = (long)_DAT_112744874;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c9c0(*(undefined8 *)(param_1 + lVar1));
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    *(long *)(param_1 + lVar1) = param_3;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined **)(param_1 + lVar2) = puVar4;
    _objc_release(uVar3);
    func_0x00010bef9040(param_3,param_2,*(undefined8 *)(param_1 + lVar2));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10628ab30; end: 10628ab97; -[SCContextSpotlightReplyViewController didTapReplyView:] */

void FUN_10628ab30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5b00;
  func_0x00010c1321e0(PTR_PTR_1126b5b00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132300(uVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10628ab98; end: 10628ad7f; -[SCContextSpotlightReplyViewController _handleSuperviewTap:] */

void FUN_10628ab98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7);
  uVar7 = param_1;
  uVar8 = param_2;
  _objc_release(param_7);
  uVar3 = param_5;
  func_0x00010c29bf00();
  iVar1 = (int)uVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(uVar7,uVar8,param_3,param_4,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release();
  _CGRectContainsPoint(uVar7,uVar8,param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    uVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe3a40(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c93d8;
    _objc_opt_class(PTR_PTR_1126c93d8);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar3 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if (uVar3 != 0) {
      func_0x00010bf7d300(param_5);
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10628ad80; end: 10628aecf; -[SCContextSpotlightReplyViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10628ad80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_7 != *(long *)(param_5 + _DAT_112744874)) {
    return 1;
  }
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,lVar1);
  uVar4 = param_1;
  uVar5 = param_2;
  _objc_release(param_7);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(uVar4,uVar5,param_3,param_4,lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(lVar2);
  _CGRectContainsPoint(uVar4,uVar5,param_3,param_4,param_1,param_2);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10628aed0; end: 10628aeef; -[SCContextSpotlightReplyViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628aed0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10628aef0; end: 10628af03; -[SCContextSpotlightReplyViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628aef0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744878,param_3);
  return;
}



/* Entry: 10628af04; end: 10628afaf; -[SCContextSpotlightReplyViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10628af04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744878);
  _objc_storeStrong(param_1 + _DAT_112744870,0);
  _objc_storeStrong(param_1 + _DAT_112744874,0);
  _objc_storeStrong(param_1 + _DAT_11274485c,0);
  _objc_storeStrong(param_1 + _DAT_112744860,0);
  _objc_storeStrong(param_1 + _DAT_112744858,0);
  _objc_storeStrong(param_1 + _DAT_112744854,0);
  _objc_storeStrong(param_1 + _DAT_112744850,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274484c,0);
  return;
}


