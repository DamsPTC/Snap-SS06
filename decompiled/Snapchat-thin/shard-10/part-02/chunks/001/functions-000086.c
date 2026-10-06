/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b559b0; end: 107b559cf; -[SCOperaNotificationOptInView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b559b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276ad1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b559d0; end: 107b559e3; -[SCOperaNotificationOptInView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b559d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276ad1c,param_3);
  return;
}



/* Entry: 107b559e4; end: 107b55a2f; -[SCOperaNotificationOptInView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b559e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276ad1c);
  _objc_storeStrong(param_1 + _DAT_11276ad18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ad14,0);
  return;
}



/* Entry: 107b55a30; end: 107b55a63;  */

undefined ** FUN_107b55a30(ulong param_1)

{
  undefined **ppuVar1;
  
  func_0x00010c27dd80();
  if (param_1 < 0x3d) {
    ppuVar1 = (undefined **)(&PTR_PTR_1109fdf70)[param_1];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eaf678;
  }
  return ppuVar1;
}



/* Entry: 107b55a64; end: 107b55ac3; -[SCOperaActionMenuV2LayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b55a64(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9f98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ad20) = 0xbff0000000000000;
    func_0x00010beaacc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b55ac4; end: 107b55b43; -[SCOperaActionMenuV2LayerView setupViewForLayer:menuItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b55ac4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ad24);
  *(undefined8 *)(param_1 + _DAT_11276ad24) = param_4;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010beaa640(param_1);
  func_0x00010beacf60(param_1);
  _objc_release(param_3);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107b55b44; end: 107b55b5f; -[SCOperaActionMenuV2LayerView isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b55b44(long param_1)

{
  return *(double *)(param_1 + _DAT_11276ad20) == 1.0;
}



/* Entry: 107b55b60; end: 107b55c4b; -[SCOperaActionMenuV2LayerView setVisible:animated:animationDuration:springDampening:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b55b60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar2 = 0x3ff0000000000000;
  if ((int)param_5 == 0) {
    uVar2 = 0;
  }
  *(undefined8 *)(param_3 + _DAT_11276ad20) = uVar2;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b55c4c;
  puStack_50 = &UNK_110842e18;
  ppuVar1 = &puStack_68;
  lStack_48 = param_3;
  _objc_retainBlock();
  if (param_6 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x00010bf03460(param_1,0,param_2,0,PTR__OBJC_CLASS___UIView_1126aec20,param_4,0x10000,
                        ppuVar1,0);
  }
  func_0x00010c21e900(param_3,param_4,param_5);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107b55c4c; end: 107b55c73;  */

void FUN_107b55c4c(long param_1)

{
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107b55c74; end: 107b55cff; -[SCOperaActionMenuV2LayerView _setupHeaderWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b55c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276ad28;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126d6b10;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c229be0(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b55d00; end: 107b55d6f; -[SCOperaActionMenuV2LayerView _setupBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b55d00(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276ad2c;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b55d70; end: 107b55def; -[SCOperaActionMenuV2LayerView _setupActionMenuWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b55d70(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276ad30;
  lVar2 = *(long *)(param_1 + lVar5);
  iVar1 = _DAT_11276ad24;
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126d6b20;
    _objc_alloc();
    iVar1 = _DAT_11276ad24;
    func_0x00010c020480();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010befbb60(param_1);
    lVar2 = *(long *)(param_1 + lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c128930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar2,PTR_s_reloadActionItems__112627c68,*(undefined8 *)(param_1 + iVar1));
  return;
}



/* Entry: 107b55df0; end: 107b55e37; -[SCOperaActionMenuV2LayerView didMoveToWindow] */

void FUN_107b55df0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9f98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 107b55e38; end: 107b55fd7; -[SCOperaActionMenuV2LayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b55e38(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f9f98;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  dVar4 = ((double *)(param_2 + _DAT_11276ad34))[2];
  lVar2 = (long)_DAT_11276ad28;
  if (*(long *)(param_2 + lVar2) != 0) {
    dVar3 = *(double *)(param_2 + _DAT_11276ad34);
    func_0x00010c2a5040(param_2);
    func_0x00010c2256c0(*(undefined8 *)(param_2 + lVar2));
    func_0x00010c1a7d00(0x404c000000000000,*(undefined8 *)(param_2 + lVar2));
    param_1 = 0.0;
    func_0x00010c1ba100(0,*(undefined8 *)(param_2 + lVar2));
    if (dVar3 == 0.0) {
      func_0x00010bf20c00(param_2);
      _CGRectGetMinY();
      param_1 = param_1 + *(double *)(param_2 + _DAT_11276ad20) * 56.0;
    }
    else {
      func_0x00010c14d760(dVar3);
      param_1 = (dVar3 + 56.0) * *(double *)(param_2 + _DAT_11276ad20);
    }
    func_0x00010c173440(param_1,*(undefined8 *)(param_2 + lVar2));
  }
  lVar2 = (long)_DAT_11276ad2c;
  if (*(long *)(param_2 + lVar2) != 0) {
    func_0x00010bf20c00(param_2);
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar2));
  }
  lVar2 = (long)_DAT_11276ad30;
  if (*(long *)(param_2 + lVar2) != 0) {
    func_0x00010bfe0640();
    func_0x00010c1a7d00(*(undefined8 *)(param_2 + lVar2));
    dVar3 = 24.0;
    func_0x00010c1ba100(0x4038000000000000,*(undefined8 *)(param_2 + lVar2));
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetMaxY();
    func_0x00010c173440((param_1 + dVar3) -
                        *(double *)(param_2 + _DAT_11276ad20) * (dVar4 + param_1 + 24.0),
                        *(undefined8 *)(param_2 + lVar2));
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 107b55fd8; end: 107b55fe7; -[SCOperaActionMenuV2LayerView header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b55fd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ad28);
}



/* Entry: 107b55fe8; end: 107b55ff7; -[SCOperaActionMenuV2LayerView backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b55fe8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ad2c);
}



/* Entry: 107b55ff8; end: 107b5600f; -[SCOperaActionMenuV2LayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b55ff8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ad34);
}



/* Entry: 107b56010; end: 107b56027; -[SCOperaActionMenuV2LayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b56010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276ad34);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107b56028; end: 107b56087; -[SCOperaActionMenuV2LayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b56028(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ad2c,0);
  _objc_storeStrong(param_1 + _DAT_11276ad28,0);
  _objc_storeStrong(param_1 + _DAT_11276ad24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ad30,0);
  return;
}



/* Entry: 107b56088; end: 107b560e7; -[SCOperaActionMenuV2LayerViewController dealloc] */

void FUN_107b56088(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bdc44e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f9fa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b560e8; end: 107b561eb; -[SCOperaActionMenuV2LayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b560e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00010c189400(param_1,param_2,1);
  puVar1 = PTR_PTR_1126d6b28;
  _objc_alloc();
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(uVar6,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_11276ad38;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar2);
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  func_0x00010beacd00(param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee8c0();
  uVar3 = uVar6;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24c9a0();
  func_0x00010c2237e0(uVar6,uVar3,uVar4,param_2,0,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b561ec; end: 107b5629b; -[SCOperaActionMenuV2LayerViewController _updateNotificationOptInViewWithIsOptedInForNotifications:canOptInForNotifications:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b561ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276ad38;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dc4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286ac0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dc4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2841c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b5629c; end: 107b562df; -[SCOperaActionMenuV2LayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5629c(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276ad38);
  func_0x00010c083820();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bead650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLayerViewWithCompletion__112588f38,0)
    ;
    return;
  }
  return;
}



/* Entry: 107b562e0; end: 107b56423; -[SCOperaActionMenuV2LayerViewController _setupLayerViewWithCompletion:] */

void FUN_107b562e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf92ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010beae1a0(param_1);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b56424; end: 107b56463;  */

void FUN_107b56424(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beacee0();
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b56464; end: 107b568a7; -[SCOperaActionMenuV2LayerViewController _setupHeaderAndNotificationHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b56464(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  _objc_release(lVar1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar7 != 0) {
    lVar1 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar1);
    lVar6 = lVar7;
    func_0x00010010fab4(lVar7,PTR_DAT_1126a59d8);
    lVar1 = lVar7;
    if ((int)lVar6 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar7);
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = puVar3;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107b568a8;
    puStack_68 = &UNK_110871898;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c175bc0(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar1);
  }
  lVar8 = (long)_DAT_11276ad3c;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = 0;
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  _objc_release(lVar1);
  if (lVar7 == 0) {
    lVar7 = (long)_DAT_11276ad38;
    lVar6 = *(long *)(param_1 + lVar7);
    func_0x00010bfdef60(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c25fdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar3;
    _objc_release(uVar2);
    lVar1 = lVar6;
    func_0x00010bfa7b60(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c0e0ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    lVar4 = lVar8;
    func_0x00010c25ff60(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    lVar7 = (long)_DAT_11276ad38;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfdef60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c25fdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar6);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfdef60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c25fdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfdef60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0dc4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  return;
}



/* Entry: 107b568a8; end: 107b5694b;  */

void FUN_107b568a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b5694c; end: 107b569af; -[SCOperaActionMenuV2LayerViewController _subscriptionUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5694c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ad38);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25fdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286b00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b569b0; end: 107b56aff; -[SCOperaActionMenuV2LayerViewController didReceiveUpdateProperties:] */

void FUN_107b569b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010beeec40(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010beeec40(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = (undefined1)lVar3;
    func_0x00010bead640(param_1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b56b00; end: 107b56bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b56b00(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + _DAT_11276ad38);
    uVar1 = *(undefined1 *)(param_2 + 0x28);
    lVar3 = lVar2;
    func_0x00010bf46560(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee8c0();
    lVar4 = lVar2;
    uVar6 = param_1;
    func_0x00010bf46560(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24c9a0();
    func_0x00010c2237e0(param_1,uVar6,uVar5,param_3,uVar1,1);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b56bb4; end: 107b56bdf; -[SCOperaActionMenuV2LayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b56bb4(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11276ad38);
  func_0x00010c082800();
  uVar1 = 0xffffffffffffffff;
  if (iVar2 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107b56be0; end: 107b56cf7; -[SCOperaActionMenuV2LayerViewController _setupGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b56be0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276ad40;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276ad38);
    func_0x00010bf14800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  }
  lVar3 = (long)_DAT_11276ad44;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
  _objc_alloc();
  func_0x00010c050900();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18e180(*(undefined8 *)(param_1 + lVar3),param_2,8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276ad38);
  func_0x00010bf14800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b56cf8; end: 107b56dbb; -[SCOperaActionMenuV2LayerViewController _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b56cf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(param_5);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_3 + _DAT_11276ad38);
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c102b20(param_1,param_2);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be34e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__headerTapped_11256ad28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be096d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__endActionMenuSession_11255ff50);
  return;
}



/* Entry: 107b56dbc; end: 107b56dbf; -[SCOperaActionMenuV2LayerViewController _didSwipeDown:] */

void FUN_107b56dbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be096d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endActionMenuSession_11255ff50);
  return;
}



/* Entry: 107b56dc0; end: 107b56e03; -[SCOperaActionMenuV2LayerViewController _endActionMenuSession] */

void FUN_107b56dc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf940a0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b56e04; end: 107b56e47; -[SCOperaActionMenuV2LayerViewController _headerTapped] */

void FUN_107b56e04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bfdffe0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b56e48; end: 107b56e4b; -[SCOperaActionMenuV2LayerViewController _actionMenuPressWithEventName:] */

void FUN_107b56e48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_announceEvent__11259eab0);
  return;
}



/* Entry: 107b56e4c; end: 107b56ff7; -[SCOperaActionMenuV2LayerViewController _setupMenuItemsOnLayer:completion:] */

void FUN_107b56e4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf92ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf92ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar3 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(lVar1);
    _objc_retain(param_4);
    func_0x00010be4d7a0(param_1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b56ff8; end: 107b57113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b56ff8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_107b570f4;
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(lVar4);
  if (lVar2 == lVar4) {
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar2);
LAB_107b570a4:
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010be5f680(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c229900(*(undefined8 *)(*(long *)(param_1 + 0x28) + (long)_DAT_11276ad38));
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
    }
  }
  else {
    if (lVar4 != 0) {
      lVar3 = lVar2;
      func_0x00010c071ae0();
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar2);
      if ((int)lVar3 == 0) goto LAB_107b570f4;
      goto LAB_107b570a4;
    }
    _objc_release();
  }
  _objc_release(lVar2);
LAB_107b570f4:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b57114; end: 107b572eb; -[SCOperaActionMenuV2LayerViewController _menuItemsFromIconsMap:actionMenuOptions:] */

void FUN_107b57114(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_4);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_138 = puVar1;
  _objc_retain(param_4);
  puVar4 = &uStack_130;
  puVar5 = auStack_f0;
  uVar6 = 0x10;
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar7 = param_4;
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c27dd80(*(undefined8 *)(lStack_128 + lVar7 * 8));
        func_0x00010c0df780(puVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        lVar3 = param_1;
        func_0x00010bde91e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puStack_138);
        }
        _objc_release(lVar3);
        _objc_release(uVar6);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      puVar4 = &uStack_130;
      puVar5 = auStack_f0;
      uVar6 = 0x10;
      lVar2 = param_4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_138);
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_107b572ec;
  lStack_170 = param_4;
  lStack_168 = param_1;
  lStack_160 = lVar7;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(uVar6);
  _objc_retain(param_6);
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_107b573c4;
  puStack_190 = &UNK_11084a9e8;
  puStack_188 = puVar4;
  uStack_180 = uVar6;
  uStack_178 = param_6;
  _objc_retain(param_6);
  _objc_retain(uVar6);
  _objc_retain(puVar4);
  func_0x00010007380c(puVar5,&puStack_1a8);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(puStack_188);
  _objc_release(param_6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  return;
}



/* Entry: 107b572ec; end: 107b573c3; -[SCOperaActionMenuV2LayerViewController _loadIconsForActionMenuOptions:onQueue:callbackQueue:onIconsReady:] */

void FUN_107b572ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b573c4;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010007380c(param_4,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107b573c4; end: 107b576fb;  */

void FUN_107b573c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
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
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
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
  lVar13 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar13);
  lStack_168 = lVar13;
  func_0x00010bf52a60();
  if (lStack_168 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar13);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar15 = *(undefined **)(lStack_128 + lVar14 * 8);
        func_0x00010c27dd80(puVar15);
        func_0x00010c0df780(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar15;
        _objc_retain(puVar15);
        _objc_autoreleasePoolPush();
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c27dd80();
        func_0x00010c14de00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c25cde0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126d6a00;
        func_0x00010bdc44e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 == (undefined *)0x0) {
          puVar10 = puVar15;
          func_0x00010bfe5480();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar11 = (undefined *)0x0;
          if (puVar10 != (undefined *)0x0) {
            puVar10 = puVar15;
            func_0x00010bfe5480();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            (**(code **)(puVar10 + 0x10))();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            if (puVar11 != (undefined *)0x0) {
              func_0x00010c1d0560(puVar8);
            }
          }
        }
        else {
          _objc_retain(puVar9);
          puVar11 = puVar9;
        }
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_autoreleasePoolPop(puVar5);
        if (puVar9 == (undefined *)0x0) {
          _objc_retain(puVar11);
          puVar9 = puVar11;
        }
        _objc_release(puVar11);
        _objc_release(puVar15);
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar9);
        _objc_release(puVar4);
        lVar14 = lVar14 + 1;
      } while (lStack_168 != lVar14);
      lStack_168 = lVar13;
      func_0x00010bf52a60();
    } while (lStack_168 != 0);
  }
  _objc_release(lVar13);
  puVar6 = puVar3;
  func_0x00010bf51e00();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_107b576fc;
  puStack_148 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  puStack_140 = puVar6;
  uStack_138 = uVar2;
  _objc_retain(puVar6);
  func_0x00010007380c(uVar1,&puStack_160);
  _objc_release(puStack_140);
  _objc_release(uStack_138);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107b57708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar3 + 0x28) + 0x10))
              (*(long *)(puVar3 + 0x28),*(undefined8 *)(puVar3 + 0x20));
    return;
  }
  return;
}



/* Entry: 107b576fc; end: 107b5770b;  */

void FUN_107b576fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b57708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107b5770c; end: 107b5775f; +[SCOperaActionMenuV2LayerViewController _actionMenuIconsCache] */

void FUN_107b5770c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137275e8 != -1) {
    func_0x00010002a2fc(0x1137275e8,&PTR___NSConcreteGlobalBlock_1109fe158);
  }
  uVar1 = uRam00000001137275f0;
  _objc_retain(uRam00000001137275f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b57760; end: 107b5778b;  */

void FUN_107b57760(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam00000001137275f0;
  puRam00000001137275f0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b5778c; end: 107b58e67; -[SCOperaActionMenuV2LayerViewController _convertItemConfigFromActionMenuV2Option:icon:] */

void FUN_107b5778c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined *puStack_5f0;
  undefined1 auStack_5e8 [8];
  undefined *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined *puStack_5c8;
  undefined1 auStack_5c0 [8];
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined *puStack_5a0;
  undefined1 auStack_598 [8];
  undefined *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined *puStack_578;
  undefined1 auStack_570 [8];
  undefined *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined *puStack_550;
  undefined1 auStack_548 [8];
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined *puStack_528;
  undefined1 auStack_520 [8];
  undefined *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined *puStack_500;
  undefined1 auStack_4f8 [8];
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined *puStack_4d8;
  undefined1 auStack_4d0 [8];
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined *puStack_4b0;
  undefined1 auStack_4a8 [8];
  undefined *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined *puStack_488;
  undefined1 auStack_480 [8];
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined1 auStack_458 [8];
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined1 auStack_430 [8];
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined *puStack_410;
  undefined1 auStack_408 [8];
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  undefined1 auStack_3e0 [8];
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined1 auStack_3b8 [8];
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined1 auStack_390 [8];
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined1 auStack_368 [8];
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined1 auStack_340 [8];
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined1 auStack_318 [8];
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
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
  undefined8 uStack_160;
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
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  FUN_107b55a30(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27dd80();
  puVar6 = (undefined *)0x0;
  uVar3 = param_3;
  switch(uVar2) {
  case 0:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_240 = 0xc2000000;
    pcStack_238 = FUN_107b5936c;
    puStack_230 = &UNK_1109fe178;
    ppuVar4 = &puStack_248;
    _objc_copyWeak(auStack_228,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 1:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107b58e68;
    puStack_68 = &UNK_1109fe178;
    ppuVar4 = &puStack_80;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 2:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x107b58fc0;
    puStack_108 = &UNK_1109fe178;
    ppuVar4 = &puStack_120;
    _objc_copyWeak(auStack_100,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 3:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x107b59070;
    puStack_158 = &UNK_1109fe178;
    ppuVar4 = &puStack_170;
    _objc_copyWeak(auStack_150,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 4:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    uStack_98 = 0x107b58ec0;
    puStack_90 = &UNK_1109fe178;
    ppuVar4 = &puStack_a8;
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 5:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x107b58f18;
    puStack_b8 = &UNK_1109fe178;
    ppuVar4 = &puStack_d0;
    _objc_copyWeak(auStack_b0,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 6:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x107b58f70;
    puStack_e0 = &UNK_1109fe178;
    ppuVar4 = &puStack_f8;
    _objc_copyWeak(auStack_d8,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 7:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    uStack_188 = 0x107b590c8;
    puStack_180 = &UNK_1109fe178;
    ppuVar4 = &puStack_198;
    _objc_copyWeak(auStack_178,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 8:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    uStack_1b0 = 0x107b59120;
    puStack_1a8 = &UNK_1109fe178;
    ppuVar4 = &puStack_1c0;
    _objc_copyWeak(auStack_1a0,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 9:
    _objc_initWeak(&puStack_1c8,param_1);
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    uVar2 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_107b59178;
    puStack_1e0 = &UNK_1109fe1a8;
    _objc_copyWeak(auStack_1d0,&puStack_1c8);
    _objc_retain(param_3);
    uStack_1d8 = param_3;
    func_0x00010c053020(puVar6);
    _objc_release(uStack_1d8);
    _objc_destroyWeak(auStack_1d0);
    _objc_release(uVar2);
    ppuVar5 = &puStack_1c8;
    goto code_r0x000107b58b08;
  case 10:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_107b59314;
    puStack_208 = &UNK_1109fe178;
    ppuVar4 = &puStack_220;
    _objc_copyWeak(auStack_200,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0xb:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053020(puVar6);
    goto code_r0x000107b58d58;
  default:
    goto LAB_107b58d60;
  case 0xe:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    uStack_138 = 0x107b59018;
    puStack_130 = &UNK_1109fe178;
    ppuVar4 = &puStack_148;
    _objc_copyWeak(auStack_128,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0xf:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_268 = 0xc2000000;
    uStack_260 = 0x107b593f4;
    puStack_258 = &UNK_1109fe178;
    ppuVar4 = &puStack_270;
    _objc_copyWeak(auStack_250,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x10:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc2000000;
    pcStack_288 = FUN_107b594ec;
    puStack_280 = &UNK_1109fe178;
    ppuVar4 = &puStack_298;
    _objc_copyWeak(auStack_278,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x11:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2b8 = 0xc2000000;
    uStack_2b0 = 0x107b59544;
    puStack_2a8 = &UNK_1109fe178;
    ppuVar4 = &puStack_2c0;
    _objc_copyWeak(auStack_2a0,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x12:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e0 = 0xc2000000;
    uStack_2d8 = 0x107b595a4;
    puStack_2d0 = &UNK_1109fe178;
    ppuVar4 = &puStack_2e8;
    _objc_copyWeak(auStack_2c8,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x13:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_308 = 0xc2000000;
    uStack_300 = 0x107b59604;
    puStack_2f8 = &UNK_1109fe178;
    ppuVar4 = &puStack_310;
    _objc_copyWeak(auStack_2f0,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x15:
    puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_330 = 0xc2000000;
    uStack_328 = 0x107b5965c;
    puStack_320 = &UNK_1109fe178;
    ppuVar5 = &puStack_338;
    _objc_copyWeak(auStack_318,auStack_58);
    ppuVar4 = &puStack_338;
    _objc_retainBlock(ppuVar4);
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    func_0x00010c053020(puVar6);
    goto code_r0x000107b58af0;
  case 0x16:
    puStack_360 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_358 = 0xc2000000;
    uStack_350 = 0x107b596b4;
    puStack_348 = &UNK_1109fe178;
    ppuVar5 = &puStack_360;
    _objc_copyWeak(auStack_340,auStack_58);
    ppuVar4 = &puStack_360;
    _objc_retainBlock(ppuVar4);
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    func_0x00010c053020(puVar6);
    goto code_r0x000107b58af0;
  case 0x17:
    puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_380 = 0xc2000000;
    uStack_378 = 0x107b5970c;
    puStack_370 = &UNK_1109fe178;
    ppuVar5 = &puStack_388;
    _objc_copyWeak(auStack_368,auStack_58);
    ppuVar4 = &puStack_388;
    _objc_retainBlock(ppuVar4);
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    func_0x00010c053020(puVar6);
code_r0x000107b58af0:
    _objc_release(uVar3);
    _objc_release(ppuVar4);
    ppuVar5 = ppuVar5 + 4;
code_r0x000107b58b08:
    _objc_destroyWeak(ppuVar5);
    goto LAB_107b58d60;
  case 0x18:
  case 0x19:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3a8 = 0xc2000000;
    uStack_3a0 = 0x107b59764;
    puStack_398 = &UNK_1109fe178;
    ppuVar4 = &puStack_3b0;
    _objc_copyWeak(auStack_390,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x1a:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_518 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_510 = 0xc2000000;
    uStack_508 = 0x107b59a84;
    puStack_500 = &UNK_1109fe178;
    ppuVar4 = &puStack_518;
    _objc_copyWeak(auStack_4f8,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x1b:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_568 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_560 = 0xc2000000;
    uStack_558 = 0x107b59b34;
    puStack_550 = &UNK_1109fe178;
    ppuVar4 = &puStack_568;
    _objc_copyWeak(auStack_548,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x1d:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_3d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3d0 = 0xc2000000;
    uStack_3c8 = 0x107b597c4;
    puStack_3c0 = &UNK_1109fe178;
    ppuVar4 = &puStack_3d8;
    _objc_copyWeak(auStack_3b8,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x1f:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_4f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_4e8 = 0xc2000000;
    uStack_4e0 = 0x107b59a2c;
    puStack_4d8 = &UNK_1109fe178;
    ppuVar4 = &puStack_4f0;
    _objc_copyWeak(auStack_4d0,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x21:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_590 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_588 = 0xc2000000;
    uStack_580 = 0x107b59b8c;
    puStack_578 = &UNK_1109fe178;
    ppuVar4 = &puStack_590;
    _objc_copyWeak(auStack_570,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x22:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_5b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_5b0 = 0xc2000000;
    uStack_5a8 = 0x107b59be4;
    puStack_5a0 = &UNK_1109fe178;
    ppuVar4 = &puStack_5b8;
    _objc_copyWeak(auStack_598,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x24:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3f8 = 0xc2000000;
    uStack_3f0 = 0x107b5981c;
    puStack_3e8 = &UNK_1109fe178;
    ppuVar4 = &puStack_400;
    _objc_copyWeak(auStack_3e0,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x2a:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_5e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_5d8 = 0xc2000000;
    uStack_5d0 = 0x107b59c3c;
    puStack_5c8 = &UNK_1109fe178;
    ppuVar4 = &puStack_5e0;
    _objc_copyWeak(auStack_5c0,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x2c:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_608 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_600 = 0xc2000000;
    uStack_5f8 = 0x107b59c94;
    puStack_5f0 = &UNK_1109fe178;
    ppuVar4 = &puStack_608;
    _objc_copyWeak(auStack_5e8,auStack_58);
    func_0x00010c053000(puVar6);
    break;
  case 0x37:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_540 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_538 = 0xc2000000;
    uStack_530 = 0x107b59adc;
    puStack_528 = &UNK_1109fe178;
    ppuVar4 = &puStack_540;
    _objc_copyWeak(auStack_520,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x38:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_428 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_420 = 0xc2000000;
    uStack_418 = 0x107b59874;
    puStack_410 = &UNK_1109fe178;
    ppuVar4 = &puStack_428;
    _objc_copyWeak(auStack_408,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x39:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_4c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_4c0 = 0xc2000000;
    uStack_4b8 = 0x107b599d4;
    puStack_4b0 = &UNK_1109fe178;
    ppuVar4 = &puStack_4c8;
    _objc_copyWeak(auStack_4a8,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x3a:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_450 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_448 = 0xc2000000;
    uStack_440 = 0x107b598cc;
    puStack_438 = &UNK_1109fe178;
    ppuVar4 = &puStack_450;
    _objc_copyWeak(auStack_430,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x3b:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_478 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_470 = 0xc2000000;
    uStack_468 = 0x107b59924;
    puStack_460 = &UNK_1109fe178;
    ppuVar4 = &puStack_478;
    _objc_copyWeak(auStack_458,auStack_58);
    func_0x00010c053020(puVar6);
    break;
  case 0x3c:
    puVar6 = PTR_PTR_1126d6b30;
    _objc_alloc(PTR_PTR_1126d6b30);
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf926c0(param_3);
    puStack_4a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_498 = 0xc2000000;
    uStack_490 = 0x107b5997c;
    puStack_488 = &UNK_1109fe178;
    ppuVar4 = &puStack_4a0;
    _objc_copyWeak(auStack_480,auStack_58);
    func_0x00010c053020(puVar6);
  }
  _objc_destroyWeak(ppuVar4 + 4);
code_r0x000107b58d58:
  _objc_release(uVar3);
LAB_107b58d60:
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107b58e68; end: 107b59177;  */

void FUN_107b58e68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b2d30;
    func_0x00010bf8c140(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc4540(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b59178; end: 107b59313;  */

void FUN_107b59178(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bf14c20(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc4540(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfe96c0(0x4018000000000000,0x4018000000000000,0x4018000000000000,0x4018000000000000,
                      puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2dd8;
  _objc_alloc(PTR_PTR_1126b2dd8);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056260(puVar2);
  _objc_release(uVar6);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde91e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6b60(param_2);
  _objc_release(param_2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107b59314; end: 107b5936b;  */

void FUN_107b59314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b2d30;
    func_0x00010c13f3e0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc4540(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b5936c; end: 107b594eb;  */

void FUN_107b5936c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c160fc0(param_2);
    puVar1 = PTR_PTR_1126b2d30;
    func_0x00010c133ba0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc4540(param_1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b594ec; end: 107b59ceb;  */

void FUN_107b594ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b2d30;
    func_0x00010c239da0(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc4540(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b59cec; end: 107b59ee3; -[SCOperaActionMenuV2LayerViewController operaSubscribeButtonViewDidPressButton:isSubscribed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b59cec(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ad38);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25fdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4ca0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_4 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110eb0258;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110eb0278;
    ppuVar3 = (undefined **)PTR_PTR_1126b2d30;
    func_0x00010c25fd00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5bf0;
    ppuStack_68 = ppuVar3;
    func_0x00010c25fd00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_70 = puVar4;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_68,&ppuStack_78,2
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126b2d30;
    func_0x00010c25fd00(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5bf0;
    func_0x00010c25fd00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_58 = puVar4;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&puStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar7;
  }
  func_0x00010bf04440(param_1,param_2,ppuVar7,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107b59ee4; end: 107b59ee7; -[SCOperaActionMenuV2LayerViewController operaSubscribeButtonViewWillAnimateToWidth:] */

void FUN_107b59ee4(void)

{
  return;
}



/* Entry: 107b59ee8; end: 107b5a037; -[SCOperaActionMenuV2LayerViewController operaOptInNotificationViewDidTap:isOptedIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b59ee8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276ad38);
  func_0x00010bfdef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dc4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c286ac0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2d30;
  func_0x00010c0dc460(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b5bf0;
  func_0x00010c0ebe20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + _DAT_11276ad3c,0);
  _objc_storeStrong(puVar3 + _DAT_11276ad44,0);
  _objc_storeStrong(puVar3 + _DAT_11276ad40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + _DAT_11276ad38,0);
  return;
}



/* Entry: 107b5a038; end: 107b5a097; -[SCOperaActionMenuV2LayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5a038(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ad3c,0);
  _objc_storeStrong(param_1 + _DAT_11276ad44,0);
  _objc_storeStrong(param_1 + _DAT_11276ad40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ad38,0);
  return;
}



/* Entry: 107b5a098; end: 107b5a1cb; -[SCOperaChromeLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b5a098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f9fa8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c4188;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ad48);
    *(undefined **)((long)puVar1 + (long)_DAT_11276ad48) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b1198;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar5 = (long)_DAT_11276ad4c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b5a1cc; end: 107b5a1d3; +[SCOperaChromeLayerView requiresConstraintBasedLayout] */

undefined8 FUN_107b5a1cc(void)

{
  return 1;
}



/* Entry: 107b5a1d4; end: 107b5a24f; -[SCOperaChromeLayerView teardown] */

void FUN_107b5a1d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010bfe01e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ac40();
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3ff0000000000000,param_1);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1,param_2,&uStack_50);
  func_0x00010c2237c0(param_1,param_2,1);
  return;
}



/* Entry: 107b5a250; end: 107b5a377; -[SCOperaChromeLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5a250(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c082800();
  if ((int)lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfe01e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    uVar4 = param_2;
    func_0x00010bf51200(param_1,param_2);
    _objc_release(lVar1);
    lVar2 = *(long *)(param_3 + _DAT_11276ad50);
    func_0x00010bf512a0(param_1,param_2,param_3,param_4,lVar2);
    func_0x00010bfe3a40(lVar2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010bfe01e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bfe3a40(uVar3,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    else {
      _objc_retain(lVar2);
      lVar1 = lVar2;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107b5a378; end: 107b5a533; -[SCOperaChromeLayerView setupViewForLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5a378(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bfe01e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c118b40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229c40(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010beacea0(param_2);
  func_0x00010bfd7840(param_4);
  lVar1 = param_2;
  func_0x00010bfcda40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  uVar2 = param_4;
  func_0x00010bfcd840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11276ad54);
  *(undefined8 *)(param_2 + _DAT_11276ad54) = uVar2;
  _objc_release(uVar3);
  func_0x00010bfcd980(param_4);
  *(undefined8 *)(param_2 + _DAT_11276ad58) = param_1;
  uVar2 = param_4;
  func_0x00010bf9f680();
  dVar4 = (double)((uint)uVar2 ^ 1);
  lVar1 = param_2;
  func_0x00010bfe01e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0();
  _objc_release(lVar1);
  func_0x00010c2bec60(param_4);
  *(double *)(param_2 + _DAT_11276ad5c) = dVar4;
  uVar2 = param_4;
  func_0x00010c08ce40();
  *(char *)(param_2 + _DAT_11276ad60) = (char)uVar2;
  func_0x0001008522a8();
  uVar3 = param_5;
  func_0x000107d36174(param_5,uVar2);
  _objc_release(param_5);
  *(char *)(param_2 + _DAT_11276ad64) = (char)uVar3;
  uVar2 = param_4;
  func_0x00010c07b480();
  *(char *)(param_2 + _DAT_11276ad68) = (char)uVar2;
  uVar2 = param_4;
  func_0x00010bf021e0();
  *(char *)(param_2 + _DAT_11276ad6c) = (char)uVar2;
  func_0x00010c2747c0(param_4);
  _objc_release(param_4);
  *(double *)(param_2 + _DAT_11276ad70) = dVar4;
  return;
}



/* Entry: 107b5a534; end: 107b5a5a3; -[SCOperaChromeLayerView fadeOutWithCompletion:] */

void FUN_107b5a534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107b5a5a4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fd3333340000000,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_38,
                      param_3);
  return;
}



/* Entry: 107b5a5a4; end: 107b5a5af;  */

void FUN_107b5a5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b5a5b0; end: 107b5a5df; -[SCOperaChromeLayerView setVisible:] */

void FUN_107b5a5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c1a7f60(param_1,param_2,(uint)param_3 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUserInteractionEnabled__112665468,param_3)
  ;
  return;
}



/* Entry: 107b5a5e0; end: 107b5a61f; -[SCOperaChromeLayerView setHeaderAlpha:] */

void FUN_107b5a5e0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfe01e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b5a620; end: 107b5a65f; -[SCOperaChromeLayerView setGradientAlpha:] */

void FUN_107b5a620(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfcda40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b5a660; end: 107b5a727; -[SCOperaChromeLayerView setTitleViewFadeAnimation:shortAnimationDuration:longAnimationDuration:delay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5a660(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  
  *(char *)(param_4 + _DAT_11276ad74) = (char)param_6;
  func_0x00010c1cbe20();
  lVar1 = param_4;
  func_0x00010bfe01e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216640(param_1,param_2,param_3);
  _objc_release(lVar1);
  lVar2 = (long)_DAT_11276ad50;
  lVar1 = *(long *)(param_4 + lVar2);
  if ((lVar1 != 0) && (func_0x00010bfdef00(), lVar1 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010c223890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_3,*(undefined8 *)(param_4 + lVar2),
               PTR_s_setVisible_duration_delay__112666848,param_6 ^ 1);
    return;
  }
  return;
}



/* Entry: 107b5a728; end: 107b5a81f; -[SCOperaChromeLayerView _setupHdIconViewWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5a728(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfdef00();
  lVar5 = (long)_DAT_11276ad50;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    func_0x00010c12c960(lVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar3);
  }
  else {
    if (lVar4 == 0) {
      puVar2 = PTR_PTR_1126d6af8;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar3);
      lVar1 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar1);
      lVar4 = *(long *)(param_1 + lVar5);
    }
    lVar1 = param_3;
    func_0x00010bfdef00(param_3);
    func_0x00010c1a4ea0(lVar4,param_2,lVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    lVar1 = param_3;
    func_0x00010bfdef00(param_3);
    func_0x00010c223880(0,0,uVar3,param_2,lVar1 != 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b5a820; end: 107b5a867; -[SCOperaChromeLayerView didMoveToWindow] */

void FUN_107b5a820(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9fa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 107b5a868; end: 107b5addb; -[SCOperaChromeLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5a868(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = PTR_PTR_1126f9fa8;
  uStack_e0 = param_5;
  _objc_msgSendSuper2(&uStack_e0,PTR_s_layoutSubviews_112600e60);
  dVar26 = *(double *)(param_5 + (long)_DAT_11276ad78);
  uVar3 = param_5;
  func_0x00010bf20c00();
  dVar22 = param_1;
  dVar24 = param_2;
  dVar23 = param_3;
  dVar27 = param_4;
  func_0x0001008522a8();
  dVar25 = dVar27;
  dVar29 = 0.0;
  if (((uVar3 & 1) == 0) && ((*(byte *)(param_5 + (long)_DAT_11276ad64) & 1) == 0)) {
    puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    dVar25 = dVar27;
    _objc_release(puVar4);
    dVar29 = dVar27;
  }
  lVar19 = (long)_DAT_11276ad68;
  if (((*(byte *)(param_5 + lVar19) & 1) != 0) ||
     (dVar27 = 0.0, *(char *)(param_5 + (long)_DAT_11276ad6c) == '\x01')) {
    dVar27 = *(double *)(param_5 + (long)_DAT_11276ad70);
  }
  dVar5 = param_2;
  dStack_e8 = param_1;
  if ((*(byte *)(param_5 + (long)_DAT_11276ad74) & 1) != 0) {
    func_0x00010bf20c00(param_5);
    dVar26 = dVar25;
    param_2 = param_3;
    dVar30 = dVar24;
    dVar31 = dVar23;
    goto LAB_107b5aa48;
  }
  lVar20 = (long)_DAT_11276ad6c;
  bVar1 = *(byte *)(param_5 + lVar20);
  if (bVar1 == 1) {
    dVar26 = dVar26 + *(double *)(param_5 + (long)_DAT_11276ad70);
  }
  dVar22 = dVar27;
  if ((*(byte *)(param_5 + (long)_DAT_11276ad60) & 1) == 0) {
    func_0x00010c14d760(param_5);
    if (*(char *)(param_5 + lVar19) != '\x01') {
LAB_107b5a9d8:
      bVar1 = *(byte *)(param_5 + lVar20);
      dVar22 = dVar26;
      goto LAB_107b5a9dc;
    }
    bVar2 = false;
    if ((0.0 <= dVar26) && (bVar2 = false, !NAN(dVar26) && !NAN(dVar27))) {
      bVar2 = dVar26 < dVar27;
    }
    if (!bVar2) goto LAB_107b5a9d8;
  }
  else {
LAB_107b5a9dc:
    if ((bVar1 & dVar22 == 0.0) == 0) {
      dVar27 = dVar22;
    }
  }
  dVar27 = dVar27 + *(double *)(param_5 + (long)_DAT_11276ad5c);
  dVar28 = dVar29 + dVar27;
  func_0x00010bf20c00(param_5);
  dVar26 = dVar25;
  dVar22 = dVar27;
  dVar30 = dVar24;
  dVar31 = dVar23;
  if (NAN(dVar28)) goto LAB_107b5adac;
  func_0x00010bc8525c(dVar27,dVar24,dVar23,dVar25,dVar28);
  dVar26 = dVar25;
  param_2 = param_3;
  dVar22 = dVar27;
  dVar30 = dVar24;
  dVar31 = dVar23;
LAB_107b5aa48:
  while( true ) {
    dVar24 = dVar5;
    uVar3 = param_5;
    func_0x00010bfe01e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar23 = dVar22;
    func_0x00010c19f0e0(dVar22,dVar30,dVar31,dVar26);
    _objc_release(uVar3);
    func_0x00010be244a0(param_5);
    param_3 = param_4;
    func_0x00010bc850d8(dStack_e8,dVar24,param_2,param_4,dVar23);
    uVar3 = param_5;
    func_0x00010bfcda40(param_5);
    _objc_retainAutoreleasedReturnValue();
    dVar27 = dStack_e8;
    dVar23 = param_2;
    dVar25 = param_3;
    func_0x00010c19f0e0();
    fVar21 = SUB84(dVar27,0);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_11276ad54;
    dVar5 = *(double *)(param_5 + lVar19);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    fVar21 = SUB84((double)fVar21,0);
    puVar6 = puVar4;
    func_0x00010bf414e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_d0 = puVar7;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + lVar19);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    fVar21 = SUB84((double)fVar21,0);
    puVar7 = puVar8;
    func_0x00010bf414e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_c8 = puVar10;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_5 + lVar19);
    func_0x00010c0dfd40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    fVar21 = SUB84((double)fVar21,0);
    puVar10 = puVar11;
    func_0x00010bf414e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_c0 = puVar13;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_5 + lVar19);
    func_0x00010c0dfd40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar27 = (double)fVar21;
    puVar13 = puVar14;
    func_0x00010bf414e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_5 + (long)_DAT_11276ad4c);
    func_0x00010bfcd9c0(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(uVar18);
    _objc_release(puVar17);
    _objc_release(puVar13);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(puVar10);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(dVar5);
    _objc_release(puVar4);
    lVar19 = (long)_DAT_11276ad50;
    if (*(long *)(param_5 + lVar19) != 0) {
      func_0x00010c2256c0(0x4049000000000000);
      dVar24 = 38.0;
      func_0x00010c1a7d00(*(undefined8 *)(param_5 + lVar19));
      func_0x00010bf20c00(param_5);
      _CGRectGetMaxX();
      dVar24 = dVar24 + -30.0;
      func_0x00010c1ee020(*(undefined8 *)(param_5 + lVar19));
      func_0x00010bf20c00(param_5);
      _CGRectGetMinY();
      dVar27 = dVar29 + dVar24 + 6.0;
      dVar24 = dVar29;
      func_0x00010c2172c0(*(undefined8 *)(param_5 + lVar19));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) break;
    ___stack_chk_fail();
    dVar26 = dStack_e8;
    dStack_e8 = dVar5;
LAB_107b5adac:
    dVar5 = param_2;
    param_2 = param_3;
    if (*(char *)(param_5 + lVar19) == '\x01') {
      func_0x00010bf20c00(param_5);
      func_0x00010bc8525c();
      dVar5 = dVar24;
      param_2 = dVar23;
      param_4 = dVar25;
      dStack_e8 = dVar27;
    }
  }
  return;
}



/* Entry: 107b5addc; end: 107b5aec7; -[SCOperaChromeLayerView updateViewYOffset:] */

void FUN_107b5addc(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar2 = param_3;
  func_0x00010bfe01e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar2);
  if (0.0 <= param_2) {
    _objc_initWeak(auStack_38,param_3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_1;
    func_0x00010bf03400(0x3fd3333333333333,puVar1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 107b5aec8; end: 107b5af17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5aec8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + _DAT_11276ad5c) = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1cbe20(lVar1);
    func_0x00010c08cdc0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b5af18; end: 107b5aff3; -[SCOperaChromeLayerView updateViewOpacityWithYOffset:] */

void FUN_107b5af18(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar2 = param_4;
  _objc_release(uVar1);
  if ((param_1 != 0.0) && (param_4 != 0.0)) {
    uVar1 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_1 = param_1 / dVar2;
    _objc_release(uVar1);
    func_0x00010c1677c0(param_5);
    func_0x00010bf01b40(param_5);
    if (param_1 < 0.1) {
      func_0x00010c1677c0(0,param_5);
    }
    func_0x00010c1a7f60(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_5,PTR_s_setUserInteractionEnabled__112665468,0.1 <= param_1);
    return;
  }
  return;
}



/* Entry: 107b5aff4; end: 107b5b05b; -[SCOperaChromeLayerView _gradientHeaderViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107b5aff4(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + _DAT_11276ad58);
  if (*(char *)(param_2 + _DAT_11276ad68) == '\x01') {
    func_0x00010bfe01e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    dVar1 = dVar1 + param_1;
    _objc_release(param_2);
  }
  return dVar1;
}



/* Entry: 107b5b05c; end: 107b5b06b; -[SCOperaChromeLayerView hdButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5b05c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ad50);
}



/* Entry: 107b5b06c; end: 107b5b07b; -[SCOperaChromeLayerView headerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5b06c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ad48);
}



/* Entry: 107b5b07c; end: 107b5b08b; -[SCOperaChromeLayerView gradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5b07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ad4c);
}



/* Entry: 107b5b08c; end: 107b5b0a3; -[SCOperaChromeLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b5b08c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276ad78);
}



/* Entry: 107b5b0a4; end: 107b5b0bb; -[SCOperaChromeLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5b0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276ad78);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107b5b0bc; end: 107b5b0cb; -[SCOperaChromeLayerView isProgressBarAlignedToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b5b0bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ad68);
}



/* Entry: 107b5b0cc; end: 107b5b0db; -[SCOperaChromeLayerView setIsProgressBarAlignedToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5b0cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276ad68) = param_3;
  return;
}



/* Entry: 107b5b0dc; end: 107b5b0eb; -[SCOperaChromeLayerView alwaysUseTopOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b5b0dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ad6c);
}



/* Entry: 107b5b0ec; end: 107b5b0fb; -[SCOperaChromeLayerView setAlwaysUseTopOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5b0ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276ad6c) = param_3;
  return;
}



/* Entry: 107b5b0fc; end: 107b5b15b; -[SCOperaChromeLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5b0fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ad4c,0);
  _objc_storeStrong(param_1 + _DAT_11276ad48,0);
  _objc_storeStrong(param_1 + _DAT_11276ad50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ad54,0);
  return;
}



/* Entry: 107b5b15c; end: 107b5b18f; -[SCOperaChromeLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_107b5b15c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9fb0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithConfiguration_layerViewC_1125de030);
  return;
}



/* Entry: 107b5b190; end: 107b5b88b; -[SCOperaChromeLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5b190(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf393e0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (uVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf393e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010c2237c0(*(undefined8 *)(param_2 + _DAT_11276ad7c),param_3,uVar3);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf392a0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (uVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf392a0(PTR_PTR_1126c9410);
    fVar9 = SUB84(param_1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    param_1 = (double)fVar9;
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010c1a76c0(param_1,*(undefined8 *)(param_2 + _DAT_11276ad7c));
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39280(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (uVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf39280(PTR_PTR_1126c9410);
    fVar9 = SUB84(param_1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    param_1 = (double)fVar9;
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010c1a4020(param_1,*(undefined8 *)(param_2 + _DAT_11276ad7c));
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39400(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (uVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf39400(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf39420(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (uVar2 == 0) {
      dVar11 = 0.0;
      dVar10 = param_1;
      if ((uVar3 & 1) == 0) goto LAB_107b5b480;
    }
    else {
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010bf39420(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      _objc_release(puVar1);
      dVar11 = 0.0;
      dVar10 = param_1;
      if ((((uint)uVar3 | (uint)uVar4 ^ 0xffffffff) & 1) == 0) {
LAB_107b5b480:
        lVar5 = param_2;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee8c0();
        lVar6 = param_2;
        param_1 = dVar10;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee900();
        dVar11 = dVar10 - param_1;
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
    }
    uVar8 = *(undefined8 *)(param_2 + _DAT_11276ad7c);
    lVar5 = param_2;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee900();
    lVar6 = param_2;
    dVar10 = param_1;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee8e0();
    func_0x00010c216640(param_1,dVar10,dVar11,uVar8,param_3,uVar3);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39100(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    _objc_release(puVar1);
  }
  else {
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010bf39120(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    _objc_release(uVar2);
    _objc_release(puVar1);
    if (uVar3 != 0) {
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010bf39100(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010bf39120(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar2);
      _objc_release(puVar1);
      func_0x00010c216640(param_1,param_1,0,*(undefined8 *)(param_2 + _DAT_11276ad7c),param_3,uVar3)
      ;
    }
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c236900(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010c236920(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar7);
    _objc_release(uVar2);
    _objc_release(puVar1);
    if (uVar3 == 0) goto LAB_107b5b728;
    uVar8 = *(undefined8 *)(param_2 + _DAT_11276ad7c);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c236900(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c9410;
    func_0x00010c236920(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c220(uVar8,param_3,param_4,puVar1,puVar7);
    _objc_release(puVar7);
  }
  _objc_release(puVar1);
LAB_107b5b728:
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39140(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (uVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf39140(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010c28c100(param_1,*(undefined8 *)(param_2 + _DAT_11276ad7c));
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39360(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (uVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010bf39360(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar8 = *(undefined8 *)(param_2 + _DAT_11276ad7c);
    func_0x00010bfe01e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c39e0(param_1);
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b5b88c; end: 107b5b91b; -[SCOperaChromeLayerViewController shareableMedia] */

void FUN_107b5b88c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfebb20();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c90a8;
    _objc_alloc(PTR_PTR_1126c90a8);
    func_0x00010bfe6ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045ae0(puVar3,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b5b91c; end: 107b5b9af; -[SCOperaChromeLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5b91c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d6b38;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11276ad7c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010c222380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beb0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupTapGesture_112589b28);
  return;
}



/* Entry: 107b5b9b0; end: 107b5b9ff; -[SCOperaChromeLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5b9b0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c26ac40(*(undefined8 *)(param_1 + _DAT_11276ad7c));
  puStack_28 = PTR_PTR_1126f9fb0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  return;
}



/* Entry: 107b5ba00; end: 107b5bcff; -[SCOperaChromeLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5ba00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe5700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_initWeak(auStack_58,param_1);
    lVar2 = param_1;
    func_0x00010bfe8840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar1;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107b5bd00;
    puStack_70 = &UNK_110865e48;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar3);
    lStack_68 = lVar3;
    func_0x00010bfe78a0(lVar2);
    _objc_release(lVar2);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar3);
  }
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe5c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_initWeak(auStack_58,param_1);
    uVar5 = param_4;
    func_0x00010bfe5c40(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_58);
    _objc_retain(lVar3);
    _objc_retain(param_4);
    func_0x00010c29cf00(uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276ad7c);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229940(uVar5);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b5bd00; end: 107b5bef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5bd00(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((param_2 != 0) && ((int)lVar3 != 0)) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_11276ad7c);
      func_0x00010bfe01e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235fc0();
      lVar2 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237ca0();
      func_0x00010c1aa3c0(uVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar4);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b5bef4; end: 107b5bf03; -[SCOperaChromeLayerViewController _resetLayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5bef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ad7c),PTR_s_teardown_112678538);
  return;
}



/* Entry: 107b5bf04; end: 107b5bfd7; -[SCOperaChromeLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5bf04(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  _objc_release(lVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11276ad7c));
  return;
}



/* Entry: 107b5bfd8; end: 107b5c263; -[SCOperaChromeLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5bfd8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126f9fb0;
  lStack_88 = param_2;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidFullyAppear_112684c88);
  lVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9f680();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  if ((int)lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9f640();
    lVar2 = param_2;
    uVar9 = param_1;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9f620();
    func_0x00010bf03440(param_1,uVar9,puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf9fa20();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010c1503c0(0x4008000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126d6b40;
  func_0x00010bf39300();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d6b48;
  func_0x00010bf39340();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = *(undefined **)(param_2 + _DAT_11276ad7c);
  puStack_78 = puVar4;
  func_0x00010bfe01e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb17e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_2);
  _objc_release(puVar8);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(*(long *)(puVar3 + 0x20) + (long)_DAT_11276ad7c);
  func_0x00010bfe01e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 107b5c264; end: 107b5c2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5c264(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276ad7c);
  func_0x00010bfe01e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b5c2a8; end: 107b5c2bb; -[SCOperaChromeLayerViewController _fadeOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5c2a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ad7c),PTR_s_fadeOutWithCompletion__1125c57f0,0);
  return;
}



/* Entry: 107b5c2bc; end: 107b5c32f; -[SCOperaChromeLayerViewController _setupTapGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5c2bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11276ad80;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276ad7c),PTR_s_addGestureRecognizer__11259bdb8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b5c330; end: 107b5c54f; -[SCOperaChromeLayerViewController _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5c330(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010bf01b40(*(undefined8 *)(param_2 + _DAT_11276ad7c));
  if (param_1 == 0.0) goto LAB_107b5c47c;
  lVar1 = param_2;
  func_0x00010be010c0(param_2,param_3,param_4);
  if ((int)lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010be01040(param_2,param_3,param_4);
    if ((int)lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010be00f80(param_2,param_3,param_4);
      if ((int)lVar1 != 0) {
        func_0x00010bdcc380(param_2);
        goto LAB_107b5c47c;
      }
      puVar3 = PTR_PTR_1126b6160;
      func_0x00010c277180(PTR_PTR_1126b6160);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04420(param_2,param_3,puVar3);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b2638;
      func_0x00010c288220();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b6008;
      func_0x00010c0ea660();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb860;
      pppuVar9 = &ppuStack_60;
      ppuVar10 = &puStack_68;
      puStack_68 = puVar4;
      goto LAB_107b5c408;
    }
    puVar3 = PTR_PTR_1126b6160;
    func_0x00010bf3d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_2,param_3,puVar3);
  }
  else {
    puVar3 = PTR_PTR_1126b6160;
    func_0x00010c261120(PTR_PTR_1126b6160);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_2,param_3,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c288220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b6008;
    func_0x00010c0ea660();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb860;
    pppuVar9 = &ppuStack_50;
    ppuVar10 = &puStack_58;
    puStack_58 = puVar4;
LAB_107b5c408:
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,pppuVar9,ppuVar10,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_2,param_3,puVar3,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_107b5c47c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar1 = param_4;
  func_0x00010c08c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bfe5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = lVar6;
  func_0x00010c2923e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6168;
  func_0x00010bf39320(PTR_PTR_1126b6168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_3,lVar1,puVar4);
  _objc_release(puVar4);
  uVar7 = *(undefined8 *)(param_4 + _DAT_11276ad7c);
  func_0x00010bfe01e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfe5c00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6168;
  func_0x00010bf392e0(PTR_PTR_1126b6168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_3,uVar8,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126b6160;
  func_0x00010c0fe8e0(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_4,param_3,puVar4,puVar3);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107b5c550; end: 107b5c6d3; -[SCOperaChromeLayerViewController _announcePlaybackEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b5c550(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010c2923e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b6168;
  func_0x00010bf39320(PTR_PTR_1126b6168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,lVar2,puVar5);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11276ad7c);
  func_0x00010bfe01e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfe5c00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b6168;
  func_0x00010bf392e0(PTR_PTR_1126b6168);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar7,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126b6160;
  func_0x00010c0fe8e0(PTR_PTR_1126b6160);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar5,puVar1);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b5c6d4; end: 107b5c893; -[SCOperaChromeLayerViewController _didTapOnAvatarViewForStoryPlayback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107b5c6d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ebeaf8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf1f3c0();
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ebeab8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf1f3c0();
    if ((int)lVar3 == 0) {
      lVar3 = lVar2;
      func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ebead8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1f3c0();
      _objc_release(lVar3);
      _objc_release(lVar1);
      if ((int)lVar4 == 0) goto LAB_107b5c804;
    }
    else {
      _objc_release(lVar1);
    }
    uVar5 = *(ulong *)(param_1 + _DAT_11276ad7c);
    func_0x00010bfe01e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe5c00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c074c20();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((uVar7 & 1) == 0) {
      lVar1 = lVar2;
      func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110ebeb58);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        param_1 = 0;
      }
      else {
        func_0x00010be01020(param_1,param_2,param_3);
      }
      _objc_release(lVar1);
      goto LAB_107b5c808;
    }
  }
LAB_107b5c804:
  param_1 = 0;
LAB_107b5c808:
  _objc_release(lVar2);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107b5c894; end: 107b5c973; -[SCOperaChromeLayerViewController _didTapOnHeaderClose:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107b5c894(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  lVar5 = (long)_DAT_11276ad7c;
  uVar1 = *(ulong *)(param_3 + lVar5);
  func_0x00010bfe01e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bfe01e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5,param_4,uVar4);
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010bfe01e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf7c7e0(param_1,param_2);
    _objc_release(uVar3);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_5);
  return uVar4;
}


