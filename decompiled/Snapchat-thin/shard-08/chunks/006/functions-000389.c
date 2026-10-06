/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062db620; end: 1062db623; -[SCOperaPayToPromoteButtonLayerView _getTooltipMessage] */

void FUN_1062db620(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e494b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e494b8,
                      &PTR____CFConstantStringClassReference_110e49478,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1062db624; end: 1062db69b; -[SCOperaPayToPromoteButtonLayerView _displayTooltipIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062db624(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112745350;
  if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_11274534c);
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      lVar2 = param_1;
      func_0x00010be23660(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23a900(param_1,param_2,lVar2);
      _objc_release(lVar2);
      *(undefined1 *)(param_1 + lVar3) = 1;
    }
  }
  return;
}



/* Entry: 1062db69c; end: 1062db72f; -[SCOperaPayToPromoteButtonLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062db69c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_11274534c;
    func_0x00010bf512a0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_3 + lVar3));
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bfe3a40(uVar2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1062db730; end: 1062db777; -[SCOperaPayToPromoteButtonLayerView didMoveToWindow] */

void FUN_1062db730(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0d28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 1062db778; end: 1062db9b7; -[SCOperaPayToPromoteButtonLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062db778(ulong param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  double in_d3;
  double dVar7;
  double dVar8;
  double dVar9;
  ulong uStack_60;
  undefined *puStack_58;
  
  uVar6 = 0;
  puStack_58 = PTR_PTR_1126f0d28;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  dVar7 = *(double *)(param_1 + (long)_DAT_11274536c);
  dVar8 = dVar7;
  if ((dVar7 == 0.0) && (dVar8 = 8.0, *(char *)(param_1 + (long)_DAT_112745380) == '\0')) {
    dVar8 = dVar7;
  }
  dVar7 = *(double *)(param_1 + (long)_DAT_112745390);
  lVar1 = (long)_DAT_112745364;
  lVar2 = (long)_DAT_112745368;
  bVar3 = *(byte *)(param_1 + lVar2);
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    if (((bVar3 & 1) != 0) || (*(char *)(param_1 + (long)_DAT_112745380) == '\x01'))
    goto LAB_1062db834;
    dVar8 = 0.0;
  }
  else if (((bVar3 & 1) != 0) || ((*(byte *)(param_1 + (long)_DAT_112745380) & 1) != 0)) {
LAB_1062db834:
    dVar7 = dVar7 + dVar8;
  }
  if ((*(char *)(param_1 + (long)_DAT_112745374) == '\x01') &&
     ((*(byte *)(param_1 + (long)_DAT_112745380) & 1) == 0)) {
    dVar7 = -dVar7;
  }
  else {
    uVar6 = param_1;
    func_0x00010c14d760();
  }
  dVar9 = dVar8;
  if (*(char *)(param_1 + (long)_DAT_11274535c) == '\0') {
    dVar9 = dVar7;
  }
  func_0x0001008522a8();
  dVar7 = 0.0;
  if (((uVar6 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_112745360) & 1) == 0)) {
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    _objc_release(puVar5);
    dVar7 = in_d3;
  }
  if (*(char *)(param_1 + lVar1) == '\x01') {
    bVar4 = false;
    if ((0.0 <= dVar9) && (bVar4 = false, !NAN(dVar9) && !NAN(dVar8))) {
      bVar4 = dVar9 < dVar8;
    }
    if (!bVar4) goto LAB_1062db8dc;
  }
  else {
LAB_1062db8dc:
    if ((((*(byte *)(param_1 + lVar2) & 1) == 0) &&
        (*(char *)(param_1 + (long)_DAT_112745380) != '\x01')) || (dVar9 != 0.0))
    goto LAB_1062db904;
  }
  dVar9 = dVar8;
LAB_1062db904:
  if (!NAN(dVar7 + dVar9 + *(double *)(param_1 + (long)_DAT_112745358))) {
    func_0x00010beab360(param_1);
  }
  uVar6 = *(ulong *)(param_1 + (long)_DAT_11274534c);
  if ((uVar6 != 0) && (func_0x00010c074c20(), (uVar6 & 1) == 0)) {
    uVar6 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_1);
    func_0x00010beebdc0(param_1);
    func_0x00010c15d8a0(uVar6);
    _objc_release(uVar6);
  }
  *(undefined1 *)(param_1 + (long)_DAT_112745354) = 1;
  func_0x00010bed4640(param_1);
  func_0x00010be04fc0(param_1);
  return;
}



/* Entry: 1062db9b8; end: 1062dbb53; -[SCOperaPayToPromoteButtonLayerView _setupButtonWithYOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062db9b8(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = (long)_DAT_11274534c;
  uVar1 = *(undefined8 *)(param_2 + lVar5);
  dVar6 = param_1;
  func_0x00010c274200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd74a0(param_2);
  uVar4 = uVar1;
  func_0x00010bf493c0(param_1 + dVar6 + 10.0,uVar1,param_3,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  lVar2 = param_2;
  func_0x00010bee6800();
  uVar4 = *(undefined8 *)(param_2 + lVar5);
  lVar3 = param_2;
  if ((int)lVar2 == 0) {
    func_0x00010c1408a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd74c0(param_2);
  }
  else {
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd74c0(param_2);
  }
  uVar1 = uVar4;
  func_0x00010bf493c0(uVar4,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(uVar1);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1062dbb54; end: 1062dbb6b; -[SCOperaPayToPromoteButtonLayerView tooltipDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dbb54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112745388);
  *(undefined8 *)(param_1 + _DAT_112745388) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062dbb6c; end: 1062dbb9b; -[SCOperaPayToPromoteButtonLayerView _promoteButtonTapped] */

void FUN_1062dbb6c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062dbb9c; end: 1062dbbff; -[SCOperaPayToPromoteButtonLayerView _updateButtonVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dbb9c(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_112745384) == '\x01') {
    bVar1 = *(byte *)(param_1 + _DAT_112745354) ^ 1;
  }
  else {
    bVar1 = 1;
  }
  lVar2 = (long)_DAT_11274534c;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,bVar1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010c20eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_setStyle__1126614d0,2);
  return;
}



/* Entry: 1062dbc00; end: 1062dbc53; -[SCOperaPayToPromoteButtonLayerView _xPositionOfButtonV2InBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1062dbc00(double param_1,long param_2)

{
  double dVar1;
  
  _CGRectGetMaxX();
  dVar1 = param_1;
  func_0x00010c2a5040(*(undefined8 *)(param_2 + _DAT_11274534c));
  param_1 = param_1 - dVar1;
  dVar1 = param_1 + -5.0;
  func_0x00010bdd74c0(param_2);
  return dVar1 - param_1;
}



/* Entry: 1062dbc54; end: 1062dbc77; -[SCOperaPayToPromoteButtonLayerView _buttonTrailingMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062dbc54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4041000000000000;
  if (*(char *)(param_1 + _DAT_112745378) == '\0') {
    uVar1 = 0x4020000000000000;
  }
  return uVar1;
}



/* Entry: 1062dbc78; end: 1062dbcb3; -[SCOperaPayToPromoteButtonLayerView _buttonTopMargin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062dbc78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4010000000000000;
  if ((*(char *)(param_1 + _DAT_112745374) == '\x01') &&
     (uVar1 = 0x4010000000000000, *(char *)(param_1 + _DAT_112745380) == '\0')) {
    uVar1 = 0x404a000000000000;
  }
  return uVar1;
}



/* Entry: 1062dbcb4; end: 1062dbccf; -[SCOperaPayToPromoteButtonLayerView _useRtl] */

bool FUN_1062dbcb4(long param_1)

{
  func_0x00010bf8d060();
  return param_1 == 1;
}



/* Entry: 1062dbcd0; end: 1062dbcef; -[SCOperaPayToPromoteButtonLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dbcd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112745394);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062dbcf0; end: 1062dbd03; -[SCOperaPayToPromoteButtonLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dbcf0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112745394,param_3);
  return;
}



/* Entry: 1062dbd04; end: 1062dbd13; -[SCOperaPayToPromoteButtonLayerView button] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062dbd04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274534c);
}



/* Entry: 1062dbd14; end: 1062dbd23; -[SCOperaPayToPromoteButtonLayerView tooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062dbd14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745388);
}



/* Entry: 1062dbd24; end: 1062dbd33; -[SCOperaPayToPromoteButtonLayerView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062dbd24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274537c);
}



/* Entry: 1062dbd34; end: 1062dbd4b; -[SCOperaPayToPromoteButtonLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062dbd34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112745390);
}



/* Entry: 1062dbd4c; end: 1062dbd63; -[SCOperaPayToPromoteButtonLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dbd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112745390);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1062dbd64; end: 1062dbd73; -[SCOperaPayToPromoteButtonLayerView isProgressBarAlignedToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062dbd64(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745364);
}



/* Entry: 1062dbd74; end: 1062dbd83; -[SCOperaPayToPromoteButtonLayerView setIsProgressBarAlignedToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dbd74(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745364) = param_3;
  return;
}



/* Entry: 1062dbd84; end: 1062dbd93; -[SCOperaPayToPromoteButtonLayerView alwaysUseTopOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062dbd84(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745368);
}



/* Entry: 1062dbd94; end: 1062dbda3; -[SCOperaPayToPromoteButtonLayerView setAlwaysUseTopOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dbd94(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745368) = param_3;
  return;
}



/* Entry: 1062dbda4; end: 1062dbdb3; -[SCOperaPayToPromoteButtonLayerView isFriendsOnlyProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062dbda4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112745348);
}



/* Entry: 1062dbdb4; end: 1062dbdc3; -[SCOperaPayToPromoteButtonLayerView setIsFriendsOnlyProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dbdb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112745348) = param_3;
  return;
}



/* Entry: 1062dbdc4; end: 1062dbe2f; -[SCOperaPayToPromoteButtonLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dbdc4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274537c,0);
  _objc_storeStrong(param_1 + _DAT_112745388,0);
  _objc_storeStrong(param_1 + _DAT_11274534c,0);
  _objc_destroyWeak(param_1 + _DAT_112745394);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274538c,0);
  return;
}



/* Entry: 1062dbe30; end: 1062dc12b; -[SCOperaPayToPromoteButtonLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:featureSettingsService:grapheneRegistry:circumstanceEngine:valdiRuntimeProvider:composerNetworkingBridgeServices:snapProServices:pageLauncherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1062dbe30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126f0d30;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112745398;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11274539c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127453a0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127453a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127453a4) = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c97c0;
    _objc_alloc();
    func_0x00010bffe480();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127453a8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127453a8) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010c0d8300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127453ac);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127453ac) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127453b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127453b0) = 0;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127453b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127453b4) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127453b8;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127453bc;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    ppuStack_70 = &PTR____CFConstantStringClassReference_110eaa9f8;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(param_6);
    _objc_release(puVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c97c8;
  _objc_alloc_init();
  lVar6 = (long)_DAT_1127453c0;
  uVar2 = *(undefined8 *)((long)param_6 + lVar6);
  *(undefined **)((long)param_6 + lVar6) = puVar3;
  _objc_release(uVar2);
  puVar1 = param_6;
  func_0x00010c08c520(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)((long)param_6 + lVar6));
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)((long)param_6 + lVar6));
  func_0x00010c222380(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010beab270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_6,PTR_s__setupBusinessLogger_112588640);
  return param_6;
}



/* Entry: 1062dc12c; end: 1062dc1b7; -[SCOperaPayToPromoteButtonLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dc12c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c97c8;
  _objc_alloc_init();
  lVar4 = (long)_DAT_1127453c0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c08c520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  func_0x00010c1d5660(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c222380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beab270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBusinessLogger_112588640);
  return;
}



/* Entry: 1062dc1b8; end: 1062dc3ab; -[SCOperaPayToPromoteButtonLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dc1b8(long param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_4;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1133e0b78;
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 == puVar3) {
    puVar3 = param_4;
    func_0x00010c29d560(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2c980(param_1,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127453bc);
  func_0x00010c2932e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c073920();
  lVar10 = (long)_DAT_1127453c0;
  func_0x00010c1b1340(*(undefined8 *)(param_1 + lVar10),param_2,uVar5);
  _objc_release(uVar9);
  _objc_release(uVar4);
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  lVar10 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229940(uVar9,param_2,param_4,lVar10);
  _objc_release(lVar10);
  uVar6 = param_3;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar7 = uVar6;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_4;
  func_0x00010c29d560(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0720c0(uVar7,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  if ((uVar8 & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_1127453c4) = 0;
    func_0x00010be21c00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062dc3ac; end: 1062dc437; -[SCOperaPayToPromoteButtonLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dc3ac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127453c0);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be57410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPromoteButtonView_1125736a0);
  return;
}



/* Entry: 1062dc438; end: 1062dc447; -[SCOperaPayToPromoteButtonLayerViewController viewWillFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dc438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127453c0),PTR_s_dismissTooltip_1125beb88);
  return;
}



/* Entry: 1062dc448; end: 1062dc44b; -[SCOperaPayToPromoteButtonLayerViewController setPausedForAttachment:] */

void FUN_1062dc448(void)

{
  return;
}



/* Entry: 1062dc44c; end: 1062dc453; -[SCOperaPayToPromoteButtonLayerViewController isPausedForAttachment] */

undefined8 FUN_1062dc44c(void)

{
  return 0;
}



/* Entry: 1062dc454; end: 1062dc833; -[SCOperaPayToPromoteButtonLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dc454(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_5);
  lVar7 = (long)_DAT_1127453c0;
  lVar1 = *(long *)(param_3 + lVar7);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c9410;
    func_0x00010c235980(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c9410;
      func_0x00010c235980(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010c0e00e0(param_5,param_4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(lVar1);
      _objc_release(puVar2);
      lVar1 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cbe20();
      _objc_release(lVar1);
    }
    puVar2 = PTR_PTR_1126c9410;
    func_0x00010bf39140(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    uVar6 = param_1;
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c9410;
      func_0x00010bf39140(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_5;
      func_0x00010c0e00e0(param_5,param_4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar6 = param_1;
      _objc_release(lVar1);
      _objc_release(puVar2);
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010bf25360(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _objc_release(uVar3);
      if (0.0 <= param_2) {
        func_0x00010c28c120(param_1,*(undefined8 *)(param_3 + lVar7),param_4,1);
        uVar6 = param_1;
      }
    }
    puVar2 = PTR_PTR_1126c9410;
    func_0x00010bf39100(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_release(puVar2);
    }
    else {
      puVar4 = PTR_PTR_1126c9410;
      func_0x00010bf39120(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_5;
      func_0x00010c0e00e0(param_5,param_4,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      _objc_release(lVar1);
      _objc_release(puVar2);
      if (lVar5 != 0) {
        puVar2 = PTR_PTR_1126c9410;
        func_0x00010bf39100(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_5;
        func_0x00010c0e00e0(param_5,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010bf1f3c0();
        _objc_release(lVar1);
        _objc_release(puVar2);
        puVar2 = PTR_PTR_1126c9410;
        func_0x00010bf39120(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_5;
        func_0x00010c0e00e0(param_5,param_4,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(lVar1);
        _objc_release(puVar2);
        func_0x00010bf033a0(uVar6,*(undefined8 *)(param_3 + lVar7),param_4,lVar5);
      }
    }
    puVar2 = PTR_PTR_1126c9410;
    func_0x00010c235920(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar4 = PTR_PTR_1126c9410;
      func_0x00010c2359a0(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_5;
      func_0x00010c0e00e0(param_5,param_4,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      _objc_release(lVar1);
      _objc_release(puVar2);
      if (lVar5 == 0) goto LAB_1062dc814;
      uVar6 = *(undefined8 *)(param_3 + lVar7);
      puVar2 = PTR_PTR_1126c9410;
      func_0x00010c235920(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c9410;
      func_0x00010c2359a0(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28c220(uVar6,param_4,param_5,puVar2,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
  }
LAB_1062dc814:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1062dc834; end: 1062dc903; -[SCOperaPayToPromoteButtonLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dc834(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  lVar2 = (long)_DAT_1127453c0;
  lVar1 = *(long *)(param_2 + lVar2);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    dVar5 = -2.0;
    dVar3 = ABS(param_1) * -2.0 + 1.0;
    dVar4 = 0.0;
    if (0.0 <= dVar3) {
      dVar4 = dVar3;
    }
    func_0x00010c1677c0(dVar4,*(undefined8 *)(param_2 + lVar2));
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    _CGAffineTransformTranslate(&uStack_70,-(dVar5 * param_1),0,&uStack_a0);
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c219960(*(undefined8 *)(param_2 + lVar2),param_3,&uStack_a0);
  }
  return;
}



/* Entry: 1062dc904; end: 1062dcaa3; -[SCOperaPayToPromoteButtonLayerViewController promoteButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dc904(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c97d0;
  func_0x00010c0f6340(PTR_PTR_1126c97d0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127453c0;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c242460();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e49358,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e49378,
                      &PTR____CFConstantStringClassReference_110dad378);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274539c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f6320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(char *)(param_1 + _DAT_1127453c4) == '\x01') {
    func_0x00010be7dd40();
  }
  else {
    func_0x00010be6cdc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1062dcaa4; end: 1062dcb9f; -[SCOperaPayToPromoteButtonLayerViewController sendUpdateChromeMaxX:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dcaa4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf39360();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar1;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = 1;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_50,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf7e940(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  _objc_retain(puVar8);
  lVar4 = lVar9;
  func_0x00010c0e00e0(lVar9,param_3,&PTR____CFConstantStringClassReference_110eaaa18);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010c0e00e0(lVar9,param_3,&PTR____CFConstantStringClassReference_110eaaa38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar1 = puVar8;
  func_0x00010c0720c0(puVar8,param_3,&PTR____CFConstantStringClassReference_110eaa9f8);
  _objc_release(puVar8);
  if ((int)puVar1 != 0 && lVar4 != 0) {
    uVar6 = *(undefined8 *)(param_2 + _DAT_1127453c0);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010c0720c0(lVar5,param_3,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if ((int)lVar9 != 0) {
      func_0x00010be6cdc0(param_2);
    }
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1062dcba0; end: 1062dccbf; -[SCOperaPayToPromoteButtonLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dcba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110eaaa18);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110eaaa38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eaa9f8);
  _objc_release(param_3);
  if ((int)uVar3 != 0 && lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127453c0);
    func_0x00010c29d560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0720c0(lVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar4);
    if ((int)lVar5 != 0) {
      func_0x00010be6cdc0(param_1);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062dccc0; end: 1062dcd3b; -[SCOperaPayToPromoteButtonLayerViewController _onDismissedAdCreationWithParams:] */

void FUN_1062dccc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c261740();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be87f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__redirectToAdsTab_11257f968);
    return;
  }
  func_0x00010c0f2520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d99a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062dcd3c; end: 1062dce37; -[SCOperaPayToPromoteButtonLayerViewController _handleMyProfileEntrypointWithProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dcd3c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (*(long *)(param_1 + _DAT_1127453b0) != 0)) {
    if (*(long *)(param_1 + _DAT_1127453b0) != 0) {
      func_0x00010c28bfa0(*(undefined8 *)(param_1 + _DAT_1127453c0));
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127453a8);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfa91e0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062dce38; end: 1062dce8b;  */

void FUN_1062dce38(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be2d8e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1062dce8c; end: 1062dcf23; -[SCOperaPayToPromoteButtonLayerViewController _handleP2pOptions:logView:] */

void FUN_1062dce8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1062dcf24;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1062dcf24; end: 1062dcfa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dcf24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = (long)_DAT_1127453b0;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + lVar4);
  *(undefined8 *)(lVar1 + lVar4) = uVar2;
  _objc_release(uVar3);
  func_0x00010c28bfa0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127453c0));
  if (*(char *)(param_1 + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be57410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__logPromoteButtonView_1125736a0);
    return;
  }
  return;
}



/* Entry: 1062dcfa8; end: 1062dd13b; -[SCOperaPayToPromoteButtonLayerViewController _logPromoteButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dcfa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c97d0;
  func_0x00010c0f6360(PTR_PTR_1126c97d0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127453c0;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c242460();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e49358,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e49378,
                      &PTR____CFConstantStringClassReference_110dad378);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274539c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f6320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0abd80(*(undefined8 *)(param_1 + _DAT_1127453c8),param_2,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1062dd13c; end: 1062dd357; -[SCOperaPayToPromoteButtonLayerViewController _redirectToAdsTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dd13c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127453c0;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c124a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126b0ea8;
    _objc_opt_new(PTR_PTR_1126b0ea8);
    func_0x00010c19a840();
    puVar4 = PTR_PTR_1126b0eb0;
    _objc_opt_new(PTR_PTR_1126b0eb0);
    func_0x00010c1e4340(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c29d560(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c116d60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140();
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar4 = puVar3;
    func_0x00010c116d60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199d60();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c116d60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1acca0();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c116d60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b220();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c116d60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ab40();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127453b8);
    func_0x00010c0f14e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c020();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2);
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c152620(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_1,param_2,puVar3);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1062dd358; end: 1062dd393; -[SCOperaPayToPromoteButtonLayerViewController _openAdCreationFlow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dd358(long param_1,undefined8 param_2)

{
  func_0x00010c0b18a0(*(undefined8 *)(param_1 + _DAT_1127453c8),param_2,
                      &PTR____CFConstantStringClassReference_110e49398,0);
                    /* WARNING: Could not recover jumptable at 0x00010be474b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchAdCreationPage_11256f6c8);
  return;
}



/* Entry: 1062dd394; end: 1062dd573; -[SCOperaPayToPromoteButtonLayerViewController _launchAdCreationPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dd394(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar8 = (long)_DAT_1127453c0;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((lVar2 != 0) && (lVar1 = lVar2, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010c0f2520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d99a0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be21bc0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c97d8;
    _objc_alloc(PTR_PTR_1126c97d8);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c29d560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1062dd574;
    puStack_60 = &UNK_11084db68;
    lStack_58 = param_1;
    func_0x00010c03b0c0(puVar3,param_2,uVar5,uVar7,lVar1,&puStack_78);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127453b8);
    func_0x00010c0f14e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1062dd574; end: 1062dd57f;  */

void FUN_1062dd574(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be68f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onDismissedAdCreationWithParams_112577d78,
             param_2);
  return;
}



/* Entry: 1062dd580; end: 1062dd5d3; -[SCOperaPayToPromoteButtonLayerViewController _getPromotableContentFromSnapId:] */

void FUN_1062dd580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c97e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c055880();
  func_0x00010c204680();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062dd5d4; end: 1062dd683; -[SCOperaPayToPromoteButtonLayerViewController _setupBusinessLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dd5d4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127453b4);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfc69a0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1062dd684; end: 1062dd6cb;  */

void FUN_1062dd684(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be20440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062dd6cc; end: 1062dd8fb; -[SCOperaPayToPromoteButtonLayerViewController _getBusinessMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dd6cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c97e8;
  _objc_alloc_init(PTR_PTR_1126c97e8);
  func_0x00010c1d8a20();
  lVar9 = (long)_DAT_1127453c0;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4140(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar4 = *(long *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c29d560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf68960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar3,param_2,uVar8,&PTR____CFConstantStringClassReference_110e493b8);
    _objc_release(uVar8);
    _objc_release(uVar2);
  }
  lVar4 = *(long *)(param_1 + lVar9);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf68600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c29d560(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf68600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c0b4fe0();
    func_0x00010c0df7a0(puVar7,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar3,param_2,puVar7,&PTR____CFConstantStringClassReference_110e493d8);
    _objc_release(puVar7);
    _objc_release(uVar8);
    _objc_release(uVar6);
  }
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127453d0);
  *(undefined **)(param_1 + _DAT_1127453d0) = puVar7;
  _objc_release(uVar8);
  func_0x00010bdfc180(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8a40(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062dd8fc; end: 1062dd933; -[SCOperaPayToPromoteButtonLayerViewController _getPageMetadata] */

void FUN_1062dd8fc(undefined8 param_1)

{
  func_0x00010be1d620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1062dd934; end: 1062dda73; -[SCOperaPayToPromoteButtonLayerViewController _getLoggerHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dd934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be1d620(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c97f0;
  func_0x00010bfbc0e0(PTR_PTR_1126c97f0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf54d60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_1127453d4;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar3;
  _objc_release(uVar5);
  lVar4 = param_1;
  func_0x00010be214e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfc8700(uVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127453c8);
  *(undefined8 *)(param_1 + _DAT_1127453c8) = uVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062dda74; end: 1062ddaf3; -[SCOperaPayToPromoteButtonLayerViewController _dictionaryToString:] */

void FUN_1062dda74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lStack_28;
  
  lStack_28 = 0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,1,&lStack_28);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_28 == 0) {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1062ddaf4; end: 1062ddcd3; -[SCOperaPayToPromoteButtonLayerViewController _getOrgIdWithProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ddaf4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_1127453bc);
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar3);
  lVar12 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
  uVar4 = 0;
  if (lVar12 != 0) {
    lVar2 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar13 * 8);
        uVar4 = uVar11;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar4;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c0720c0(param_3,param_2,uVar10);
        _objc_release(uVar10);
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) {
          func_0x00010c1164a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar11;
          func_0x00010c0ed0e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          goto LAB_1062ddc7c;
        }
        lVar13 = lVar13 + 1;
      } while (lVar12 != lVar13);
      lVar12 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar12 != 0);
    uVar4 = 0;
  }
LAB_1062ddc7c:
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126c97f8;
  _objc_alloc(PTR_PTR_1126c97f8);
  lVar12 = (long)_DAT_1127453c0;
  uVar7 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c29d560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010be21360(param_3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c29d560(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + lVar12);
  func_0x00010c29d560(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032360(puVar6,param_2,uVar5,uVar10,1,uVar11,1,1);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_1062ddec8;
  puStack_1b0 = &UNK_110842e18;
  uStack_1a8 = param_3;
  func_0x00010c1d3080(puVar6,param_2,&puStack_1c8);
  puStack_1f0 = puVar1;
  uStack_1e8 = 0xc2000000;
  uStack_1e0 = 0x1062dded0;
  puStack_1d8 = &UNK_110842e18;
  uStack_1d0 = param_3;
  func_0x00010c1d4420(puVar6,param_2,&puStack_1f0);
  uVar10 = *(undefined8 *)(param_3 + (long)_DAT_1127453b8);
  func_0x00010c0f14e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c080();
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(puVar6);
  return;
}



/* Entry: 1062ddcd4; end: 1062ddec7; -[SCOperaPayToPromoteButtonLayerViewController _presentPromotionInsightsTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ddcd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar2 = PTR_PTR_1126c97f8;
  _objc_alloc(PTR_PTR_1126c97f8);
  lVar10 = (long)_DAT_1127453c0;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c29d560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be21360(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c29d560(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c29d560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032360(puVar2,param_2,lVar5,uVar9,1,uVar8,1,1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1062ddec8;
  puStack_80 = &UNK_110842e18;
  lStack_78 = param_1;
  func_0x00010c1d3080(puVar2,param_2,&puStack_98);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1062dded0;
  puStack_a8 = &UNK_110842e18;
  lStack_a0 = param_1;
  func_0x00010c1d4420(puVar2,param_2,&puStack_c0);
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127453b8);
  func_0x00010c0f14e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c080();
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(puVar2);
  return;
}



/* Entry: 1062ddec8; end: 1062dded7;  */

void FUN_1062ddec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__openAdCreationFlow_112578d10);
  return;
}



/* Entry: 1062dded8; end: 1062ddf5f; -[SCOperaPayToPromoteButtonLayerViewController _handlePromotionsInsightsTrayResult:error:] */

void FUN_1062dded8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_4 == 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e49418);
    if ((int)lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e49438);
      if ((int)lVar1 != 0) {
        func_0x00010be87f20(param_1);
      }
    }
    else {
      func_0x00010be6cdc0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062ddf60; end: 1062de00f; -[SCOperaPayToPromoteButtonLayerViewController _getPromotionInsightsButtonStats] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ddf60(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127453b4);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfc69a0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1062de010; end: 1062de057;  */

void FUN_1062de010(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21c20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062de058; end: 1062de2a7; -[SCOperaPayToPromoteButtonLayerViewController _getPromotionInsightsButtonStatsHelperWithRuntime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062de058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  lVar8 = (long)_DAT_1127453c0;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c29d560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be21360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c29d560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be1ed00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (lVar3 != 0 && lVar4 != 0) {
    puVar5 = PTR_PTR_1126c9800;
    _objc_alloc(PTR_PTR_1126c9800);
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c29d560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032320(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126c9808;
    func_0x00010bfbc0e0(PTR_PTR_1126c9808);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfc9280();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0e3040(puVar7);
    _objc_release(puVar7);
    _objc_destroyWeak(auStack_60);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1062de2a8; end: 1062de2ef;  */

void FUN_1062de2a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062de2f0; end: 1062de4cf; -[SCOperaPayToPromoteButtonLayerViewController _getEncodedProfileAndUserDataWithProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062de2f0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_1127453bc);
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  puVar4 = (undefined1 *)0x0;
  if (lVar2 != 0) {
    lVar1 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        puVar9 = *(undefined1 **)(lStack_128 + lVar10 * 8);
        puVar4 = puVar9;
        func_0x00010bf25000();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        puVar7 = (undefined8 *)puVar5;
        func_0x00010c0720c0();
        _objc_release(puVar5);
        _objc_release(puVar4);
        if ((uVar6 & 1) != 0) {
          func_0x00010bf25020();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar9;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          goto LAB_1062de478;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    puVar4 = (undefined1 *)0x0;
  }
LAB_1062de478:
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar4 = (undefined1 *)puVar7;
  func_0x00010bef63c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar7;
  func_0x00010bef56e0();
  _objc_release(puVar7);
  iVar8 = (int)puVar5;
  if (iVar8 < 3) {
    if (iVar8 != 0) {
      if (iVar8 == 1) {
        *(undefined1 *)(param_3 + (long)_DAT_1127453c4) = 1;
        func_0x0001062df360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x0001062df378();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = (undefined1 *)0x0;
        puVar9 = puVar4;
        puVar4 = (undefined1 *)puVar7;
        goto LAB_1062de698;
      }
      if (iVar8 != 2) goto LAB_1062de6a8;
    }
  }
  else {
    if (4 < iVar8) {
      if (iVar8 == 5) {
        *(undefined1 *)(param_3 + (long)_DAT_1127453c4) = 1;
        func_0x0001062df348();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x0001062df3a8();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        puVar9 = puVar4;
        puVar4 = (undefined1 *)puVar7;
      }
      else {
        if (iVar8 != 6) goto LAB_1062de6a8;
        *(undefined1 *)(param_3 + (long)_DAT_1127453c4) = 1;
        func_0x0001062df3d8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        func_0x0001062df3c0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        puVar9 = puVar4;
        puVar4 = (undefined1 *)puVar7;
      }
LAB_1062de698:
      func_0x00010bede0e0(param_3,param_2,puVar4,puVar5);
      _objc_release(puVar9);
      goto LAB_1062de6a8;
    }
    if (iVar8 == 3) {
      *(undefined1 *)(param_3 + (long)_DAT_1127453c4) = 1;
      puVar5 = puVar4;
      func_0x00010c08fa60();
      puVar9 = puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        func_0x0001062df330();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar9 = puVar4;
        puVar4 = puVar5;
      }
      func_0x0001062df390();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bede0e0(param_3,param_2,puVar4,puVar9);
      _objc_release(puVar9);
      goto LAB_1062de6a8;
    }
    if (iVar8 != 4) goto LAB_1062de6a8;
  }
  *(undefined1 *)(param_3 + (long)_DAT_1127453c4) = 0;
LAB_1062de6a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1062de4d0; end: 1062de6bb; -[SCOperaPayToPromoteButtonLayerViewController _handleButtonStatsWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062de4d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bef63c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bef56e0();
  _objc_release(param_3);
  iVar4 = (int)lVar2;
  if (iVar4 < 3) {
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        *(undefined1 *)(param_1 + _DAT_1127453c4) = 1;
        func_0x0001062df360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        func_0x0001062df378();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = 0;
        lVar3 = lVar1;
        lVar1 = param_3;
        goto LAB_1062de698;
      }
      if (iVar4 != 2) goto LAB_1062de6a8;
    }
  }
  else {
    if (4 < iVar4) {
      if (iVar4 == 5) {
        *(undefined1 *)(param_1 + _DAT_1127453c4) = 1;
        func_0x0001062df348();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        func_0x0001062df3a8();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        lVar3 = lVar1;
        lVar1 = param_3;
      }
      else {
        if (iVar4 != 6) goto LAB_1062de6a8;
        *(undefined1 *)(param_1 + _DAT_1127453c4) = 1;
        func_0x0001062df3d8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        func_0x0001062df3c0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        lVar3 = lVar1;
        lVar1 = param_3;
      }
LAB_1062de698:
      func_0x00010bede0e0(param_1,param_2,lVar1,lVar2);
      _objc_release(lVar3);
      goto LAB_1062de6a8;
    }
    if (iVar4 == 3) {
      *(undefined1 *)(param_1 + _DAT_1127453c4) = 1;
      lVar2 = lVar1;
      func_0x00010c08fa60();
      lVar3 = lVar2;
      if (lVar2 == 0) {
        func_0x0001062df330();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        lVar3 = lVar1;
        lVar1 = lVar2;
      }
      func_0x0001062df390();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bede0e0(param_1,param_2,lVar1,lVar3);
      _objc_release(lVar3);
      goto LAB_1062de6a8;
    }
    if (iVar4 != 4) goto LAB_1062de6a8;
  }
  *(undefined1 *)(param_1 + _DAT_1127453c4) = 0;
LAB_1062de6a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062de6bc; end: 1062de837; -[SCOperaPayToPromoteButtonLayerViewController _updatePromoteButtonWithText:tooltipText:] */

void FUN_1062de6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uStack_58 = 0x1062de774;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062de838; end: 1062de847; -[SCOperaPayToPromoteButtonLayerViewController uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062de838(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127453cc);
}



/* Entry: 1062de848; end: 1062de887; -[SCOperaPayToPromoteButtonLayerViewController setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062de848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127453cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062de888; end: 1062de997; -[SCOperaPayToPromoteButtonLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062de888(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127453cc,0);
  _objc_storeStrong(param_1 + _DAT_1127453ac,0);
  _objc_storeStrong(param_1 + _DAT_1127453bc,0);
  _objc_storeStrong(param_1 + _DAT_1127453b8,0);
  _objc_storeStrong(param_1 + _DAT_1127453d0,0);
  _objc_storeStrong(param_1 + _DAT_1127453c8,0);
  _objc_storeStrong(param_1 + _DAT_1127453d4,0);
  _objc_storeStrong(param_1 + _DAT_1127453a4,0);
  _objc_storeStrong(param_1 + _DAT_1127453b4,0);
  _objc_storeStrong(param_1 + _DAT_1127453b0,0);
  _objc_storeStrong(param_1 + _DAT_1127453a8,0);
  _objc_storeStrong(param_1 + _DAT_1127453a0,0);
  _objc_storeStrong(param_1 + _DAT_11274539c,0);
  _objc_storeStrong(param_1 + _DAT_112745398,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127453c0,0);
  return;
}



/* Entry: 1062de998; end: 1062deb13; -[SCOperaPayToPromoteButtonViewControllerFactoryPlugin initWithFeatureSettingsService:grapheneRegistry:circumstanceEngine:valdiRuntimeProvider:composerNetworkingBridgeServices:snapProServices:pageLauncherServices:] */

undefined1 *
FUN_1062de998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f0d38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062deb14; end: 1062deb67; -[SCOperaPayToPromoteButtonViewControllerFactoryPlugin supportedLayers] */

void FUN_1062deb14(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c36a8 != -1) {
    func_0x00010002a2fc(0x1136c36a8,&PTR___NSConcreteGlobalBlock_11091b318);
  }
  uVar1 = uRam00000001136c36a0;
  _objc_retain(uRam00000001136c36a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062deb68; end: 1062debeb;  */

void FUN_1062deb68(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_20;
  long lStack_18;
  
  ppuVar4 = &puStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR_PTR_1126c9810;
  _objc_opt_class();
  uVar5 = 1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_20 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)puRam00000001136c36a0;
  puRam00000001136c36a0 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puVar7 = PTR_PTR_1126c9810;
  _objc_retain(ppuVar4);
  _objc_opt_class(puVar7);
  puVar3 = (undefined1 *)ppuVar4;
  _objc_opt_isKindOfClass(ppuVar4,puVar7);
  _objc_release(ppuVar4);
  if (((ulong)puVar3 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c9818;
    _objc_alloc(PTR_PTR_1126c9818);
    func_0x00010c001a80();
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar6 = *(undefined8 *)(lVar2 + 8);
    *(undefined **)(lVar2 + 8) = puVar1;
    _objc_release(uVar6);
    func_0x00010c21b220(puVar7);
  }
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1062debec; end: 1062ded2f; -[SCOperaPayToPromoteButtonViewControllerFactoryPlugin layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_1062debec(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = PTR_PTR_1126c9810;
  _objc_retain(param_3);
  _objc_opt_class(puVar4);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c9818;
    _objc_alloc(PTR_PTR_1126c9818);
    func_0x00010c001a80();
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21b220(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1062ded30; end: 1062deda7; -[SCOperaPayToPromoteButtonViewControllerFactoryPlugin .cxx_destruct] */

void FUN_1062ded30(long param_1)

{
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



/* Entry: 1062deda8; end: 1062deeeb; -[SCOperaPayToPromoteButtonViewCoordinator initWithCircumstanceEngine:composerNetworkingBridgeServices:valdiRuntimeProvider:snapProServices:pageWorkflowSessionId:] */

undefined1 *
FUN_1062deda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f0d40;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062deeec; end: 1062df003; -[SCOperaPayToPromoteButtonViewCoordinator fetchP2POptionsWithProfileId:callback:] */

void FUN_1062deeec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bfd3260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062df004; end: 1062df077;  */

void FUN_1062df004(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf25020(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdf3880(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062df078; end: 1062df177; -[SCOperaPayToPromoteButtonViewCoordinator _createSnapPromoteDataSourceWithBusinessProfile:callback:] */

void FUN_1062df078(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar2);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bfc69a0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062df178; end: 1062df29f;  */

void FUN_1062df178(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c9820;
  func_0x00010bfbc0e0(PTR_PTR_1126c9820,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9828;
  _objc_alloc_init(PTR_PTR_1126c9828);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63640(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1957e0(puVar2);
  _objc_release(uVar3);
  func_0x00010c1d7ce0(puVar2);
  func_0x00010c1d8a20(puVar2);
  func_0x00010c1d8a60(puVar2);
  puVar4 = puVar1;
  func_0x00010bf58fa0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    puVar5 = puVar4;
    func_0x00010bfcad00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062df2a0; end: 1062df2ff; -[SCOperaPayToPromoteButtonViewCoordinator .cxx_destruct] */

void FUN_1062df2a0(long param_1)

{
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



/* Entry: 1062df300; end: 1062df3ef;  */

void FUN_1062df300(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e49498;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e49498,
                      &PTR____CFConstantStringClassReference_110e49478,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1062df3f0; end: 1062df41b; +[SCGraphenePayToPromoteButtonMetric payToPromoteButtonTap] */

void FUN_1062df3f0(void)

{
  _objc_alloc(PTR_PTR_1126c97d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062df41c; end: 1062df447; +[SCGraphenePayToPromoteButtonMetric payToPromoteWebviewOpened] */

void FUN_1062df41c(void)

{
  _objc_alloc(PTR_PTR_1126c97d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062df448; end: 1062df473; +[SCGraphenePayToPromoteButtonMetric payToPromoteAdCreated] */

void FUN_1062df448(void)

{
  _objc_alloc(PTR_PTR_1126c97d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062df474; end: 1062df49f; +[SCGraphenePayToPromoteButtonMetric payToPromoteButtonViewV2] */

void FUN_1062df474(void)

{
  _objc_alloc(PTR_PTR_1126c97d0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062df4a0; end: 1062df53f; -[SCGraphenePayToPromoteButtonMetric description] */

void FUN_1062df4a0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e495d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e495d8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f0d48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1062df540; end: 1062df69f; -[SCGrapheneRegistry payToPromoteButtonGraphene] */

void FUN_1062df540(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1062df5c8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c36b8 != -1) {
    func_0x00010002a2fc(0x1136c36b8,&puStack_48);
  }
  uVar1 = uRam00000001136c36b0;
  _objc_retain(uRam00000001136c36b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062df6a0; end: 1062df777; -[SCSpotlightRecentInteractionsOperaPlugin initWithRecentStoriesProvider:discoverFeedDataFetcher:] */

undefined1 *
FUN_1062df6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0d50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062df778; end: 1062df7a7; -[SCSpotlightRecentInteractionsOperaPlugin setPlaylistItemController:] */

void FUN_1062df778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062df7a8; end: 1062df9d7; -[SCSpotlightRecentInteractionsOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_1062df7a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c9830;
  func_0x00010beedca0(PTR_PTR_1126c9830);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar3 != 0) {
    puVar2 = PTR_PTR_1126b5cb8;
    func_0x00010beedca0(PTR_PTR_1126b5cb8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = uVar7;
    func_0x00010c101260(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = uVar7;
    func_0x000107d005a8();
    _objc_initWeak(auStack_58,param_1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(uVar1);
    uStack_60 = uVar3;
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(param_5);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar7);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062df9d8; end: 1062dfa0f;  */

void FUN_1062df9d8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be277c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062dfa10; end: 1062dfb4b; -[SCSpotlightRecentInteractionsOperaPlugin _handleContextActionEvent:currentlyPlayingStoryFp:params:] */

void FUN_1062dfa10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b5c68;
    func_0x00010bf1f640(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    if ((int)uVar4 == 0) {
      puVar3 = PTR_PTR_1126b5c68;
      func_0x00010c27f560(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar3);
      _objc_release(puVar3);
      if ((int)uVar4 == 0) goto LAB_1062dfb28;
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12df00();
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1236e0();
    }
    _objc_release(uVar4);
  }
LAB_1062dfb28:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062dfb4c; end: 1062dfbdf; -[SCSpotlightRecentInteractionsOperaPlugin registeredEventsForOperaSession] */

void FUN_1062dfb4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9830;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1062dfbe0; end: 1062dfc27; -[SCSpotlightRecentInteractionsOperaPlugin .cxx_destruct] */

void FUN_1062dfbe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062dfc28; end: 1062dfccb; -[SCSpotlightRecentInteractionsOperaPluginRegistrator initWithSpotlightRecentStoriesServices:discoverFeedDataServices:] */

undefined1 *
FUN_1062dfc28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0d58;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062dfccc; end: 1062dfe6b; -[SCSpotlightRecentInteractionsOperaPluginRegistrator registerPlaylistPluginsWithContext:] */

void FUN_1062dfccc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c29d360();
  if (((param_3 - 0x49U < 0x1a && (1L << (param_3 - 0x49U & 0x3f) & 0x2020001U) != 0) ||
      (uVar1 = param_3 - 0x57U >> 1,
      (uVar1 | param_3 - 0x57U << 0x3f) < 8 && (1L << (uVar1 & 0x3f) & 0xb1U) != 0)) ||
     ((param_3 - 0x42U < 0x2a && ((1L << (param_3 - 0x42U & 0x3f) & 0x3c000100701U) != 0)))) {
    puVar6 = PTR_PTR_1126c9838;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c122600(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c08d400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d340();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 8,0);
  return;
}



/* Entry: 1062dfe6c; end: 1062dfe9b; -[SCSpotlightRecentInteractionsOperaPluginRegistrator .cxx_destruct] */

void FUN_1062dfe6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062dfe9c; end: 1062dff0f; -[SCChatMediaCarouselViewControllerFactoryPlugin initWithValdiRuntimeProvider:] */

undefined1 * FUN_1062dfe9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0d60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062dff10; end: 1062e0017; -[SCChatMediaCarouselViewControllerFactoryPlugin supportedLayers] */

void FUN_1062dff10(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c36c8 != -1) {
    func_0x00010002a2fc(0x1136c36c8,&PTR___NSConcreteGlobalBlock_11091b368);
  }
  uVar1 = uRam00000001136c36c0;
  _objc_retain(uRam00000001136c36c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


