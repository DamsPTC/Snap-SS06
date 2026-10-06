/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106526674; end: 1065266a7; -[SCTextChatTableViewCellV2 mapScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526674(long param_1)

{
  param_1 = param_1 + _DAT_112749d80;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf35ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065266a8; end: 1065266ff; -[SCTextChatTableViewCellV2 _removeChatAttachmentHandlerScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065266a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749d98;
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



/* Entry: 106526700; end: 10652670f; -[SCTextChatTableViewCellV2 actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106526700(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749dac);
}



/* Entry: 106526710; end: 10652671f; -[SCTextChatTableViewCellV2 chatLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106526710(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749db4);
}



/* Entry: 106526720; end: 10652675f; -[SCTextChatTableViewCellV2 setChatLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749db4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106526760; end: 10652685b; -[SCTextChatTableViewCellV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526760(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749db4,0);
  _objc_storeStrong(param_1 + _DAT_112749dac,0);
  _objc_storeStrong(param_1 + _DAT_112749db0,0);
  _objc_storeStrong(param_1 + _DAT_112749da4,0);
  _objc_storeStrong(param_1 + _DAT_112749d94,0);
  _objc_storeStrong(param_1 + _DAT_112749d90,0);
  _objc_storeStrong(param_1 + _DAT_112749da0,0);
  _objc_storeStrong(param_1 + _DAT_112749d9c,0);
  _objc_storeStrong(param_1 + _DAT_112749d8c,0);
  _objc_storeStrong(param_1 + _DAT_112749d88,0);
  _objc_storeStrong(param_1 + _DAT_112749d98,0);
  _objc_storeStrong(param_1 + _DAT_112749da8,0);
  _objc_storeStrong(param_1 + _DAT_112749d84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112749d80);
  return;
}



/* Entry: 10652685c; end: 10652688f; -[SCTodayChatTableViewCell setViewModel:] */

void FUN_10652685c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f1a68;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 106526890; end: 106526987; -[SCTodayChatTableViewCell displayCell] */

void FUN_106526890(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107080ce4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf652c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010708cc80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf652c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000107064924();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf652c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf652c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b20(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106526988; end: 106526b37; -[SCStackedMediaFlowLayout layoutAttributesForElementsInRect:] */

void FUN_106526988(double param_1,double param_2,double param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulong uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f1a70;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutAttributesForElementsInRec_112600c60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c07bac0();
  if (((uVar2 & 1) == 0) &&
     (puVar5 = (undefined1 *)puVar1, func_0x00010bf529e0(), puVar5 != (undefined1 *)0x0)) {
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c0dfd40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee50e0(param_4);
    _objc_release(puVar5);
  }
  puVar5 = (undefined1 *)puVar1;
  func_0x00010bf529e0();
  if ((undefined1 *)0x1 < puVar5) {
    puVar5 = (undefined1 *)0x1;
    do {
      puVar3 = (undefined1 *)puVar1;
      func_0x00010c0dfd40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar1;
      func_0x00010c0dfd40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMaxX();
      dVar6 = param_1;
      func_0x00010c0c3500(param_4);
      dVar7 = (double)(long)(param_1 + dVar6);
      dVar8 = (double)(long)dVar7;
      func_0x00010bfb68e0(puVar3);
      dVar8 = param_3 + dVar8;
      func_0x00010bf407a0(param_4);
      param_1 = dVar7;
      dVar6 = param_2;
      if (dVar8 <= dVar7) {
        func_0x00010bfb68e0(puVar3);
        param_1 = dVar7;
        func_0x00010bfb68e0(puVar4);
        dVar6 = param_2;
        if (param_1 < dVar7) {
          func_0x00010bee50e0(param_4);
          dVar6 = param_2;
        }
      }
      func_0x00010bfb68e0(puVar3);
      param_2 = dVar6;
      func_0x00010bfb68e0(puVar4);
      if (param_2 < dVar6) {
        func_0x00010bee50e0(param_4);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = (undefined1 *)puVar1;
      func_0x00010bf529e0();
      puVar5 = puVar5 + 1;
    } while (puVar5 < puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106526b38; end: 106526b77; -[SCStackedMediaFlowLayout _updateXForAttribute:updatedX:] */

void FUN_106526b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  func_0x00010bfb68e0(param_3);
  func_0x00010c19f0e0((double)param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106526b78; end: 106526b87; -[SCStackedMediaFlowLayout maximumInteritemSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106526b78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749db8);
}



/* Entry: 106526b88; end: 106526b97; -[SCStackedMediaFlowLayout setMaximumInteritemSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526b88(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112749db8) = param_1;
  return;
}



/* Entry: 106526b98; end: 106526ba7; -[SCStackedMediaFlowLayout isRTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106526b98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112749dbc);
}



/* Entry: 106526ba8; end: 106526bb7; -[SCStackedMediaFlowLayout setIsRTL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526ba8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112749dbc) = param_3;
  return;
}



/* Entry: 106526bb8; end: 106526bc7; -[SCStackedMediaFlowLayout renderAsBubble] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106526bb8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112749dc0);
}



/* Entry: 106526bc8; end: 106526bd7; -[SCStackedMediaFlowLayout setRenderAsBubble:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526bc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112749dc0) = param_3;
  return;
}



/* Entry: 106526bd8; end: 106526c47; -[SCStackedChatTableViewCollectionView rerenderWithBoundingSize:] */

void FUN_106526bd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126cb468;
  func_0x00010bf4d5e0();
  func_0x00010c27a580(&uStack_60,puVar1);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(param_1,param_2,&uStack_90);
  return;
}



/* Entry: 106526c48; end: 106526c7f; -[SCStackedChatTableViewCollectionView resetWithOriginalSettings] */

void FUN_106526c48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1,param_2,&uStack_40);
  return;
}



/* Entry: 106526c80; end: 106526c83; -[SCStackedChatTableViewCell stackedViewModel] */

void FUN_106526c80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewModel_112684f80);
  return;
}



/* Entry: 106526c84; end: 106526d57; -[SCStackedChatTableViewCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106526c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1a78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithParameters__1125ea7e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0f3c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112749dc4),uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0f3c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112749dc8),uVar2);
    _objc_release(uVar2);
    func_0x00010be39840(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106526d58; end: 106526ef7; -[SCStackedChatTableViewCell _initCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526d58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cb5d0;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112749dcc;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126cb5d8;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112749dd0;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1fbe00(*(undefined8 *)(param_1 + lVar4),param_2,3);
  func_0x00010c1738c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  puVar1 = PTR_PTR_1126c2e38;
  lVar3 = param_1;
  func_0x00010c0f6720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2b00(puVar1,param_2,lVar3);
  func_0x00010c1b3b40(*(undefined8 *)(param_1 + lVar5),param_2,puVar1 == (undefined *)0x1);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_112749dd4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c0f6720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106526ef8; end: 106526f27; -[SCStackedChatTableViewCell stackedCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526ef8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749dd0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106526f28; end: 106526f6f; -[SCStackedChatTableViewCell renderPayload] */

void FUN_106526f28(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_renderPayload_1126299b0);
  func_0x00010bea2b80(param_1);
  return;
}



/* Entry: 106526f70; end: 106526fbb; -[SCStackedChatTableViewCell prepareForReuse] */

void FUN_106526f70(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1dcbe0(param_1);
  return;
}



/* Entry: 106526fbc; end: 106527087; -[SCStackedChatTableViewCell _setCollectionViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106526fbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar4 = (long)_DAT_112749dd0;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0f6720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0(uVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106527088;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106527088; end: 1065276f7;  */

void FUN_106527088(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c12f740();
  _objc_release(uVar1);
  lVar6 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c24d400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cb560();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      lVar4 = param_3;
      func_0x00010c274140();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bf1fec0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf985e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0f6720(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar4);
      func_0x00010c08e360();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf985e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_2 + 0x20);
      func_0x00010c0f6720(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      (**(code **)(lVar4 + 0x10))(lVar4,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c2a7440();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c0e1c40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(param_2 + 0x20);
      func_0x00010c24d400(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067540();
      (**(code **)(lVar8 + 0x10))(9.0 - param_1,lVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      lVar4 = param_3;
      func_0x00010c08e360();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c274140();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf985e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c0f6720(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      (**(code **)(lVar5 + 0x10))(lVar5,uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c2a7440();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010c0e1c40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c24d400(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067540();
      param_1 = 5.0 - param_1;
      (**(code **)(lVar9 + 0x10))(param_1,lVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(lVar8);
      _objc_release(uVar2);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar4);
      func_0x00010c140820();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf1fec0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010bf985e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_2 + 0x20);
      func_0x00010c0f6720(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      (**(code **)(lVar7 + 0x10))(lVar7,lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c2a7440();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0e1c40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c24d400(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067540();
      (**(code **)(lVar9 + 0x10))(-(5.0 - param_1),lVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar5);
  }
  else {
    lVar4 = param_3;
    func_0x00010c08e360();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0f6720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c24d400(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067540();
    param_1 = 8.0 - param_1;
    (**(code **)(lVar7 + 0x10))(param_1,lVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c140820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0f6720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c2a7440();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c24d400(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067540();
    (**(code **)(lVar7 + 0x10))(-(8.0 - param_1),lVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(uVar2);
    _objc_release(lVar3);
    _objc_release(lVar4);
    func_0x00010c274140();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf1fec0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_2 + 0x20);
    func_0x00010c0f6720(lVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar6);
  uVar10 = *(ulong *)(param_2 + 0x20);
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c12f740();
  _objc_release(uVar10);
  if ((uVar11 & 1) == 0) {
    lVar6 = param_3;
    func_0x00010c2a5040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c0f6720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065276f8; end: 10652773f; -[SCStackedChatTableViewCell renderMetadata] */

void FUN_1065276f8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_renderMetadata_112629990);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 106527740; end: 1065279f3; -[SCStackedChatTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106527740(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5448);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puStack_58 = PTR_PTR_1126f1a78;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_setViewModel__1126663d8,param_3);
  puVar3 = PTR_PTR_1126cb308;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar2 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c24d420();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112749dd8;
  lVar7 = *(long *)(param_1 + lVar8);
  _objc_retain();
  _objc_retain(lVar7);
  if (uVar4 == 0 && lVar7 == 0) {
LAB_10652781c:
    func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112749dd0));
  }
  else {
    if (uVar4 == 0 || lVar7 == 0) {
      _objc_release(lVar7);
      _objc_release(uVar4);
      _objc_release(uVar4);
    }
    else {
      uVar5 = uVar4;
      func_0x00010c071b60();
      _objc_release(lVar7);
      _objc_release(uVar4);
      _objc_release(uVar4);
      if ((int)uVar5 != 0) goto LAB_10652781c;
    }
    uVar4 = uVar2;
    func_0x00010c24d420();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = uVar4;
    _objc_release(uVar6);
    lVar7 = param_1;
    func_0x00010c24d400(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf40700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97ce0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar7 = param_1;
    func_0x00010c24d400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069140();
    lVar8 = (long)_DAT_112749dcc;
    func_0x00010c1c82c0(*(undefined8 *)(param_1 + lVar8));
    _objc_release(lVar7);
    lVar7 = param_1;
    func_0x00010c24d400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069140();
    func_0x00010c1c3b80(*(undefined8 *)(param_1 + lVar8));
    _objc_release(lVar7);
    lVar7 = param_1;
    func_0x00010c24d400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce4c0();
    func_0x00010c1c8300(*(undefined8 *)(param_1 + lVar8));
    _objc_release(lVar7);
    lVar7 = (long)_DAT_112749dd0;
    func_0x00010c189840(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c128b60(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1065279f4; end: 106527a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065279f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112749dd0),
             PTR_s_registerClass_forCellWithReuseId_112627220,param_3,param_2);
  return;
}



/* Entry: 106527a0c; end: 106527b5f; -[SCStackedChatTableViewCell indexPathOfCollectionViewCellForPoint:includeWhitespace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106527a0c(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar6 = (long)_DAT_112749dd0;
  dVar7 = param_1;
  func_0x00010bf512a0(param_2,param_3,*(undefined8 *)(param_2 + lVar6));
  puVar1 = *(undefined **)(param_2 + lVar6);
  dVar8 = dVar7;
  func_0x00010bfed040();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 == 0) || (puVar1 != (undefined *)0x0)) {
    _objc_retain(puVar1);
    puVar5 = puVar1;
    goto LAB_106527b3c;
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetMinX();
  if (param_1 < dVar8) {
    puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106527b3c;
  }
  lVar2 = *(long *)(param_2 + lVar6);
  func_0x00010c0deec0(lVar2,param_3,0);
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,lVar2 + -1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010c08c980(uVar4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar6));
  _CGRectGetMaxX();
  if (dVar8 < param_1) {
LAB_106527b18:
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  else {
    func_0x00010bfb68e0(uVar4);
    _CGRectGetMaxX();
    if (dVar8 < dVar7) goto LAB_106527b18;
    puVar5 = (undefined *)0x0;
  }
  _objc_release(uVar4);
  _objc_release(puVar3);
LAB_106527b3c:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106527b60; end: 106527bef; -[SCStackedChatTableViewCell gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106527b60(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  if (param_3 == *(long *)(param_1 + _DAT_112749dd4)) {
    lVar2 = (long)_DAT_112749dd0;
    func_0x00010c09ef00(param_4,param_2,*(undefined8 *)(param_1 + lVar2));
    lVar2 = *(long *)(param_1 + lVar2);
    func_0x00010bfed040(lVar2);
    _objc_retainAutoreleasedReturnValue();
    plVar1 = (long *)(ulong)(lVar2 != 0);
    _objc_release();
  }
  else {
    puStack_28 = PTR_PTR_1126f1a78;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_gestureRecognizer_shouldReceiveT_1125ce058);
  }
  return (undefined1 *)plVar1;
}



/* Entry: 106527bf0; end: 106527ca3; -[SCStackedChatTableViewCell onStackedCellsTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106527bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749dd0;
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfed040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112749dc8;
  _objc_loadWeakRetained(lVar4);
  uVar2 = uVar1;
  func_0x00010c0840e0(uVar1);
  lVar3 = param_1;
  func_0x00010c24d400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24d3e0(lVar4,param_2,param_1,uVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106527ca4; end: 106527ca7; -[SCStackedChatTableViewCell collectionView:didSelectItemAtIndexPath:] */

void FUN_106527ca4(void)

{
  return;
}



/* Entry: 106527ca8; end: 106527cf3; -[SCStackedChatTableViewCell collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_106527ca8(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126cb5e0;
  _objc_opt_class(PTR_PTR_1126cb5e0);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c2a5f80(in_x3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 106527cf4; end: 106527d3f; -[SCStackedChatTableViewCell collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_106527cf4(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126cb5e0;
  _objc_opt_class(PTR_PTR_1126cb5e0);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf94780(in_x3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 106527d40; end: 106527d9b; -[SCStackedChatTableViewCell collectionView:numberOfItemsInSection:] */

undefined8 FUN_106527d40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c24d400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106527d9c; end: 106527ec3; -[SCStackedChatTableViewCell collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106527d9c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c24d400(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112749dc4;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar1;
  func_0x00010bf40160(lVar1,param_2,param_3,param_4,param_1,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar5 = (long)_DAT_112749ddc;
  if (*(long *)(param_1 + lVar5) == 0) {
    uVar6 = 0x3ff0000000000000;
  }
  else {
    uVar3 = param_4;
    func_0x00010c0840e0();
    uVar4 = *(ulong *)(param_1 + lVar5);
    func_0x00010c282760();
    uVar6 = 0x3ff0000000000000;
    if (uVar3 != (uVar4 & 0xffffffff)) {
      uVar6 = 0x3fc99999a0000000;
    }
  }
  lVar5 = lVar2;
  func_0x00010bf4dce0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar6);
  _objc_release(lVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106527ec4; end: 10652800b; -[SCStackedChatTableViewCell reloadTableViewCellAtIndexPath:] */

undefined1  [16]
FUN_106527ec4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c24d2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c1554e0();
  lVar3 = lVar1;
  func_0x00010c0df2e0();
  if (lVar2 < lVar3) {
    lVar3 = param_5;
    func_0x00010c142240();
    lVar4 = lVar1;
    func_0x00010c0deec0(lVar1,param_4,lVar2);
    if (lVar3 < lVar4) {
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20,param_4,0);
      func_0x00010c24d2a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = param_5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&lStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128de0(param_3,param_4,puVar6);
      _objc_release(puVar6);
      _objc_release(param_3);
      func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20,param_4,puVar5);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  ___stack_chk_fail();
  _objc_retain(param_7);
  func_0x00010c24d400(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d280();
  _objc_release(param_7);
  _objc_release(param_5);
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 10652800c; end: 106528077; -[SCStackedChatTableViewCell collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16] FUN_10652800c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x4;
  undefined1 auVar1 [16];
  
  _objc_retain(in_x4);
  func_0x00010c24d400(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d280();
  _objc_release(in_x4);
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 106528078; end: 1065280db; -[SCStackedChatTableViewCell collectionView:layout:insetForSectionAtIndex:] */

undefined8 FUN_106528078(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c24d400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067660();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1065280dc; end: 10652812f; -[SCStackedChatTableViewCell clearContents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065280dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar4);
  lVar6 = (long)_DAT_112749dc4;
  _objc_retain(uVar2);
  puVar1 = puVar4 + lVar6;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c24d400(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b820(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106528130; end: 106528183; -[SCStackedChatTableViewCell startAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528130(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar3);
  lVar6 = (long)_DAT_112749dc4;
  _objc_retain(uVar5);
  puVar1 = puVar3 + lVar6;
  _objc_loadWeakRetained(puVar1);
  func_0x00010c24d400(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b820(puVar1);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106528184; end: 1065281d7; -[SCStackedChatTableViewCell stopAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  lVar5 = (long)_DAT_112749dc4;
  _objc_retain(uVar4);
  puVar2 = puVar1 + lVar5;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c24d400(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b820(puVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065281d8; end: 10652826b; -[SCStackedChatTableViewCell didShowCompleteDisplayForCollectionViewCellForMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065281d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749dc4;
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c24d400(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b820(lVar2,param_2,param_3,lVar1);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10652826c; end: 1065282ff; -[SCStackedChatTableViewCell didShowPendingDisplayForCollectionViewCellForMessageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652826c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749dc4;
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c24d400(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b8e0(lVar2,param_2,param_3,lVar1);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106528300; end: 106528357; -[SCStackedChatTableViewCell configureWithCollectionViewDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749dd0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c189840(uVar1,param_2,param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106528358; end: 10652835b; -[SCStackedChatTableViewCell contentViewForFocusedContent:] */

void FUN_106528358(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stackedCollectionView_112670ed0);
  return;
}



/* Entry: 10652835c; end: 106528487; -[SCStackedChatTableViewCell setContentIsFocused:focusedMessageContent:] */

void FUN_10652835c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1a78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setContentIsFocused_focusedMessa_11263e230,param_3,param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  func_0x00010c0be080(param_4);
  if ((int)param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bea4000(param_1);
  if ((int)param_3 != 0) {
    _objc_release(puVar1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_4);
  return;
}



/* Entry: 106528488; end: 106528497;  */

void FUN_106528488(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 106528498; end: 10652850b; -[SCStackedChatTableViewCell resetWithOriginalContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528498(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bea4000(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010c0f6720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112749dd0;
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010bea2b80(param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c189850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setDataSource__112640030,param_1);
  return;
}



/* Entry: 10652850c; end: 10652858b; -[SCStackedChatTableViewCell setPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652850c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112749de0;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010c0f6720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10652858c; end: 106528657; -[SCStackedChatTableViewCell _setFocusedIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652858c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112749ddc;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_106528640;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112749dd0));
  }
LAB_106528640:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106528658; end: 106528677; -[SCStackedChatTableViewCell parentVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528658(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749dc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106528678; end: 10652870f; -[SCStackedChatTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528678(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749de0,0);
  _objc_storeStrong(param_1 + _DAT_112749ddc,0);
  _objc_storeStrong(param_1 + _DAT_112749dd4,0);
  _objc_storeStrong(param_1 + _DAT_112749dd8,0);
  _objc_destroyWeak(param_1 + _DAT_112749dc8);
  _objc_destroyWeak(param_1 + _DAT_112749dc4);
  _objc_storeStrong(param_1 + _DAT_112749dcc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749dd0,0);
  return;
}



/* Entry: 106528710; end: 1065287db; -[SCStackedCollectionViewCell setBackgroundForSavableViewModel:] */

void FUN_106528710(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x23;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c07d080();
  iVar1 = (int)lVar2;
  if (iVar1 == 0) {
LAB_10652876c:
    func_0x000107068184();
    func_0x00010c16e440(param_1,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = unaff_x23;
    if (iVar1 == 0) goto LAB_1065287c4;
  }
  else {
    unaff_x20 = param_3;
    func_0x00010c11edc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x20;
    func_0x00010c11ec80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = lVar2;
    if (lVar2 != 0) goto LAB_10652876c;
    lVar3 = param_3;
    func_0x00010c12f740(param_3);
    func_0x00010706814c();
    func_0x00010c16e440(param_1,param_2,lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(unaff_x20);
LAB_1065287c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065287dc; end: 1065287df; -[SCStackedCollectionViewCell willDisplay] */

void FUN_1065287dc(void)

{
  return;
}



/* Entry: 1065287e0; end: 1065287e3; -[SCStackedCollectionViewCell endDisplay] */

void FUN_1065287e0(void)

{
  return;
}



/* Entry: 1065287e4; end: 10652893b; -[SCStackedStickerChatTableViewCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1065287e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f1a80;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithParameters__1125ea7e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c0f3c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar1 + (long)_DAT_112749de4,uVar3);
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749de8);
    *(undefined **)((long)puVar1 + (long)_DAT_112749de8) = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10652893c; end: 106528983;  */

void FUN_10652893c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd5d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106528984; end: 106528d1f; -[SCStackedStickerChatTableViewCell _buildBitmojiCTAViewWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528984(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cb5e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000108d397ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006da0();
  puStack_98 = puVar1;
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126cb5f0;
  _objc_alloc();
  func_0x00010bffa420();
  func_0x00010c18b5e0();
  uVar9 = param_1;
  func_0x00010c0f6460(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  _objc_release(uVar9);
  func_0x00010c219b60(puVar1);
  puStack_e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  puStack_a8 = puVar2;
  func_0x00010c0f6460();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_c0 = puVar2;
  puStack_90 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  puStack_d0 = puVar4;
  func_0x00010c0f6460();
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_e0 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puStack_f0 = puVar4;
  puStack_88 = puVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  puStack_100 = puVar2;
  func_0x00010c0f6460();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_80 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6460();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_e8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uStack_f8);
  _objc_release(puStack_100);
  _objc_release(puStack_f0);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_c8);
  _objc_release(puStack_d0);
  _objc_release(puStack_c0);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a0);
  _objc_release(puStack_a8);
  puVar2 = puStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_106528d20;
  puStack_138 = PTR_PTR_1126f1a80;
  puStack_140 = puVar2;
  uStack_130 = uVar6;
  uStack_128 = uVar5;
  puStack_120 = puVar1;
  puStack_118 = puVar4;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_140,PTR_s_layoutSubviews_112600e60);
  puVar4 = puVar2;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cb328;
  _objc_opt_class(PTR_PTR_1126cb328);
  puVar7 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar1);
  puVar1 = puVar4;
  if (((ulong)puVar7 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c236220();
  _objc_release(puVar1);
  uVar9 = *(undefined8 *)(puVar2 + _DAT_112749de8);
  if ((int)puVar4 == 0) {
    func_0x00010bfe6360(uVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a7f60();
  _objc_release(uVar9);
  return;
}



/* Entry: 106528d20; end: 106528e07; -[SCStackedStickerChatTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528d20(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1a80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  uVar2 = param_1;
  func_0x00010c0cb300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb328;
  _objc_opt_class(PTR_PTR_1126cb328);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c236220();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112749de8);
  if ((int)uVar2 == 0) {
    func_0x00010bfe6360(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a7f60();
  _objc_release(uVar5);
  return;
}



/* Entry: 106528e08; end: 106528e0b; -[SCStackedStickerChatTableViewCell clearContents] */

void FUN_106528e08(void)

{
  return;
}



/* Entry: 106528e0c; end: 106528e0f; -[SCStackedStickerChatTableViewCell startAnimations] */

void FUN_106528e0c(void)

{
  return;
}



/* Entry: 106528e10; end: 106528e13; -[SCStackedStickerChatTableViewCell stopAnimations] */

void FUN_106528e10(void)

{
  return;
}



/* Entry: 106528e14; end: 106528f47; -[SCStackedStickerChatTableViewCell willDisplayCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528e14(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c24d2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar1);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      puVar3 = PTR_PTR_1126cb5f8;
      _objc_opt_class(PTR_PTR_1126cb5f8);
      uVar4 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar3);
      if ((uVar4 & 1) != 0) {
        func_0x00010c2a5f80(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c24d2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar5 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      puVar3 = PTR_PTR_1126cb5f8;
      _objc_opt_class(PTR_PTR_1126cb5f8);
      uVar4 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar3);
      if ((uVar4 & 1) != 0) {
        func_0x00010bf94780(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar2 + _DAT_112749de4;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf788a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106528f48; end: 10652907b; -[SCStackedStickerChatTableViewCell endDisplayingCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106528f48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c24d2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      puVar4 = PTR_PTR_1126cb5f8;
      _objc_opt_class(PTR_PTR_1126cb5f8);
      uVar5 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      if ((uVar5 & 1) != 0) {
        func_0x00010bf94780(uVar7);
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar2 + _DAT_112749de4;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf788a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10652907c; end: 1065290af; -[SCStackedStickerChatTableViewCell didTapCreateAvatar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652907c(long param_1)

{
  param_1 = param_1 + _DAT_112749de4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf788a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065290b0; end: 1065290eb; -[SCStackedStickerChatTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065290b0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112749de4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749de8,0);
  return;
}



/* Entry: 1065290ec; end: 1065291fb; -[SCStackedStickerCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1065290ec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1a88;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cb600;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_112749dec;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 1065291fc; end: 1065293b3;  */

void FUN_1065291fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4010000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc010000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065293b4; end: 1065294f3; -[SCStackedStickerCollectionViewCell setBackgroundForSavableViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065293b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c12f740();
  if ((uVar1 & 1) == 0) {
    puStack_38 = PTR_PTR_1126f1a88;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_setBackgroundForSavableViewModel_1126393b0,param_3);
  }
  else {
    uVar1 = param_3;
    func_0x00010c07d080();
    if (((int)uVar1 != 0) && (uVar1 = param_3, func_0x00010c0cb560(), (uVar1 & 1) == 0)) {
      uVar1 = param_3;
      func_0x00010c11edc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c11ec80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar2 == 0) {
        lVar4 = (long)_DAT_112749dec;
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(0x4010000000000000);
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010c08c0e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2d20();
        _objc_release(uVar3);
        uVar1 = param_3;
        func_0x00010c14b8a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea2c40(param_1);
        _objc_release(uVar1);
        goto LAB_10652945c;
      }
    }
    func_0x00010bde0de0(param_1);
  }
LAB_10652945c:
  _objc_release(param_3);
  return;
}



/* Entry: 1065294f4; end: 10652953b; -[SCStackedStickerCollectionViewCell prepareForReuse] */

void FUN_1065294f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bde0de0(param_1);
  return;
}



/* Entry: 10652953c; end: 1065295c7; -[SCStackedStickerCollectionViewCell _clearSavableBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652953c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749dec;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  func_0x000107068184();
  func_0x00010bea2c40(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065295c8; end: 10652961f; -[SCStackedStickerCollectionViewCell _setColorForBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065295c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749dec);
  _objc_retain(param_3);
  func_0x00010c16e440(uVar1,param_2,param_3);
  func_0x00010c16e440(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106529620; end: 10652962b; +[SCStackedStickerCollectionViewCell cellReuseIdentifier] */

undefined ** FUN_106529620(void)

{
  return &PTR____CFConstantStringClassReference_110e53598;
}



/* Entry: 10652962c; end: 106529753; -[SCStackedStickerCollectionViewCell configureWithViewModel:ctpItemViewService:allowLowResolution:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652962c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112749dec;
  func_0x00010c174f00(*(undefined8 *)(param_1 + lVar5),param_2,param_4);
  func_0x00010c16e640(param_1,param_2,param_3);
  lVar6 = (long)_DAT_112749df0;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  uVar3 = param_3;
  if (param_3 == uVar4) {
    _objc_release(uVar4);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_106529738;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    func_0x00010c177f40(*(undefined8 *)(param_1 + lVar5),param_2,param_5);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c07bbc0(param_3);
    func_0x00010c1b6020(uVar2,param_2,uVar3,uVar4);
  }
  _objc_release(uVar3);
LAB_106529738:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106529754; end: 1065297a3; -[SCStackedStickerCollectionViewCell willDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106529754(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_willDisplay_112687208);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_112749dec));
  return;
}



/* Entry: 1065297a4; end: 1065297f3; -[SCStackedStickerCollectionViewCell endDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065297a4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_endDisplay_1125c2b88);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_112749dec));
  return;
}



/* Entry: 1065297f4; end: 10652985b; +[SCStackedStickerCollectionViewCell defaultStickerCellSideLength] */

double FUN_1065297f4(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  dVar2 = (double)NEON_fminnm(param_1 * 0.2667,0x4059000000000000);
  return dVar2 + 8.0;
}



/* Entry: 10652985c; end: 10652997f; -[SCStackedStickerCollectionViewCell stickerViewDidStartLoadingForItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10652985c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112749df0;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_3);
  if (lVar1 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(lVar1);
LAB_1065298fc:
    lVar2 = param_1 + _DAT_112749df4;
    _objc_loadWeakRetained(lVar2);
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c0cb5a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf50280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b8e0(lVar2,param_2,lVar1,uVar3);
    _objc_release(uVar3);
  }
  else {
    lVar2 = lVar1;
    if (param_3 != 0) {
      func_0x00010c071ae0(lVar1,param_2,param_3);
      _objc_release(param_3);
      _objc_release(lVar1);
      _objc_release(lVar1);
      if ((int)lVar2 == 0) goto LAB_106529968;
      goto LAB_1065298fc;
    }
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
LAB_106529968:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106529980; end: 106529aa3; -[SCStackedStickerCollectionViewCell stickerViewDidFinishLoadingForItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106529980(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112749df0;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_3);
  if (lVar1 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(lVar1);
LAB_106529a20:
    lVar2 = param_1 + _DAT_112749df4;
    _objc_loadWeakRetained(lVar2);
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c0cb5a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf50280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b820(lVar2,param_2,lVar1,uVar3);
    _objc_release(uVar3);
  }
  else {
    lVar2 = lVar1;
    if (param_3 != 0) {
      func_0x00010c071ae0(lVar1,param_2,param_3);
      _objc_release(param_3);
      _objc_release(lVar1);
      _objc_release(lVar1);
      if ((int)lVar2 == 0) goto LAB_106529a8c;
      goto LAB_106529a20;
    }
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
LAB_106529a8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106529aa4; end: 106529ac3; -[SCStackedStickerCollectionViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106529aa4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749df4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106529ac4; end: 106529ad7; -[SCStackedStickerCollectionViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106529ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112749df4,param_3);
  return;
}



/* Entry: 106529ad8; end: 106529b23; -[SCStackedStickerCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106529ad8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112749df4);
  _objc_storeStrong(param_1 + _DAT_112749df0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749dec,0);
  return;
}



/* Entry: 106529b24; end: 106529b33; -[SCEmptyChatCellViewModelProps isMischief] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106529b24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112749df8);
}



/* Entry: 106529b34; end: 106529b43; -[SCEmptyChatCellViewModelProps setIsMischief:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106529b34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112749df8) = param_3;
  return;
}



/* Entry: 106529b44; end: 106529deb; -[SCEmptyChatCellViewModel initWithProps:messageRetentionInMinutes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_106529b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,ulong param_7)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puStack_b0 = PTR_PTR_1126f1a90;
  ppuVar1 = &puStack_b8;
  puStack_b8 = param_5;
  _objc_msgSendSuper2(ppuVar1,PTR_s_initWithProps__1125ec800,param_7);
  if (ppuVar1 != (undefined **)0x0) {
    uVar2 = param_7;
    func_0x00010c077de0();
    if ((uVar2 & 1) == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e535d8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e535d8,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar3 = ppuVar1;
      func_0x00010beb3520(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_opt_new();
    func_0x00010c1bdb00();
    func_0x00010c166c00(puVar5);
    uStack_a8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar14 = 0x4028000000000000;
    puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_90 = puVar6;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    puVar8 = puVar5;
    puStack_88 = puVar7;
    func_0x00010bf51e00();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c04e840();
    lVar13 = (long)_DAT_112749dfc;
    uVar11 = *(undefined8 *)((long)ppuVar1 + lVar13);
    *(undefined **)((long)ppuVar1 + lVar13) = puVar4;
    _objc_release(uVar11);
    _objc_release(puVar9);
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(puVar4);
    lVar12 = (long)_DAT_112749e00;
    func_0x00010bf20bc0(uVar14,0x7fefffffffffffff,*(undefined8 *)((long)ppuVar1 + lVar13));
    *(undefined8 *)((long)ppuVar1 + lVar12) = param_3;
    ((undefined8 *)((long)ppuVar1 + lVar12))[1] = param_4;
    ppuVar10 = ppuVar1;
    func_0x00010be36860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_112749e04);
    *(undefined ***)((long)ppuVar1 + (long)_DAT_112749e04) = ppuVar10;
    _objc_release(uVar11);
    _objc_release(ppuVar3);
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110e535b8;
}



/* Entry: 106529dec; end: 106529df7; -[SCEmptyChatCellViewModel identifier] */

undefined ** FUN_106529dec(void)

{
  return &PTR____CFConstantStringClassReference_110e535b8;
}



/* Entry: 106529df8; end: 106529e57; -[SCEmptyChatCellViewModel calculateHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106529df8(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_4 + _DAT_112749e00 + 8) + 30.0 + 4.0;
  dVar2 = dVar1 + 4.5;
  func_0x00010c0f6500();
  func_0x00010c0f6500(param_4);
  return param_3 + dVar1 + dVar2;
}



/* Entry: 106529e58; end: 106529e63; -[SCEmptyChatCellViewModel reusableCellIdentifier] */

undefined ** FUN_106529e58(void)

{
  return &PTR____CFConstantStringClassReference_110e535b8;
}



/* Entry: 106529e64; end: 106529e6b; -[SCEmptyChatCellViewModel viewModelType] */

undefined8 FUN_106529e64(void)

{
  return 0;
}



/* Entry: 106529e6c; end: 106529ea7; -[SCEmptyChatCellViewModel payloadContainerInsets] */

undefined8 FUN_106529e6c(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12f740();
  uVar1 = 0x4020000000000000;
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  return uVar1;
}



/* Entry: 106529ea8; end: 106529eaf; -[SCEmptyChatCellViewModel shouldDisplayBelowFoldInChat] */

undefined8 FUN_106529ea8(void)

{
  return 1;
}



/* Entry: 106529eb0; end: 106529eb7; -[SCEmptyChatCellViewModel shouldShowDateHeader] */

undefined8 FUN_106529eb0(void)

{
  return 0;
}



/* Entry: 106529eb8; end: 106529ebf; -[SCEmptyChatCellViewModel shouldShowSenderHeader] */

undefined8 FUN_106529eb8(void)

{
  return 0;
}



/* Entry: 106529ec0; end: 106529ec7; -[SCEmptyChatCellViewModel shouldShowTimestamp] */

undefined8 FUN_106529ec0(void)

{
  return 0;
}



/* Entry: 106529ec8; end: 106529f07; -[SCEmptyChatCellViewModel _shouldDisplayUpdatedRetentionStatusMessage:] */

void FUN_106529ec8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x5a1) {
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e535f8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001070490c8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106529f08; end: 106529f83; -[SCEmptyChatCellViewModel _iconChatBubbleOutlineImage] */

void FUN_106529f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x403e000000000000,0x403e000000000000,0x4008000000000000,0x4008000000000000,
                      0x4008000000000000,0x4008000000000000,puVar2,param_2,0x7e,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106529f84; end: 106529f97; -[SCEmptyChatCellViewModel bannerSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106529f84(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112749e00);
}



/* Entry: 106529f98; end: 106529fa7; -[SCEmptyChatCellViewModel symbolImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106529f98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749e04);
}


