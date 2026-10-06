/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f008c0; end: 108f00937; -[SCSearchNavigationItem setSearchBackgroundView:] */

void FUN_108f008c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = param_3;
    _objc_release(uVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f00938; end: 108f009af; -[SCSearchNavigationItem setSearchBackgroundEdgeInsets:] */

void FUN_108f00938(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  ushort uVar1;
  
  uVar1 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_5 + 0xa0) == param_4),
                              CONCAT24(-(ushort)(*(double *)(param_5 + 0x98) == param_3),
                                       CONCAT22(-(ushort)(*(double *)(param_5 + 0x90) == param_2),
                                                -(ushort)(*(double *)(param_5 + 0x88) == param_1))))
                     ,2);
  if ((uVar1 & 1) == 0) {
    *(double *)(param_5 + 0x88) = param_1;
    *(double *)(param_5 + 0x90) = param_2;
    *(double *)(param_5 + 0x98) = param_3;
    *(double *)(param_5 + 0xa0) = param_4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 108f009b0; end: 108f00a27; -[SCSearchNavigationItem setSearchViewEdgeInsets:] */

void FUN_108f009b0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  ushort uVar1;
  
  uVar1 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_5 + 0xc0) == param_4),
                              CONCAT24(-(ushort)(*(double *)(param_5 + 0xb8) == param_3),
                                       CONCAT22(-(ushort)(*(double *)(param_5 + 0xb0) == param_2),
                                                -(ushort)(*(double *)(param_5 + 0xa8) == param_1))))
                     ,2);
  if ((uVar1 & 1) == 0) {
    *(double *)(param_5 + 0xa8) = param_1;
    *(double *)(param_5 + 0xb0) = param_2;
    *(double *)(param_5 + 0xb8) = param_3;
    *(double *)(param_5 + 0xc0) = param_4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 108f00a28; end: 108f00a97; -[SCSearchNavigationItem setNavigationBarHeight:] */

void FUN_108f00a28(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = ABS(*(double *)(param_2 + 8) - param_1);
  dVar2 = ABS(param_1 + *(double *)(param_2 + 8)) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_2 + 8) = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c153ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f00a98; end: 108f00ae7; -[SCSearchNavigationItem setNavigationBarContentOffset:] */

void FUN_108f00a98(double param_1,double param_2,long param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(double *)(param_3 + 0x78) == param_1) &&
     (bVar1 = false, !NAN(*(double *)(param_3 + 0x80)) && !NAN(param_2))) {
    bVar1 = *(double *)(param_3 + 0x80) == param_2;
  }
  if (!bVar1) {
    *(double *)(param_3 + 0x78) = param_1;
    *(double *)(param_3 + 0x80) = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 108f00ae8; end: 108f00baf; -[SCSearchNavigationItem setSearchIconImage:] */

void FUN_108f00ae8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
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
      if ((uVar1 & 1) != 0) goto LAB_108f00b9c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = param_3;
    _objc_release(uVar2);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
    uVar3 = param_1;
  }
  _objc_release(uVar3);
LAB_108f00b9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f00bb0; end: 108f00c7b; -[SCSearchNavigationItem setSearchPlaceholderText:] */

void FUN_108f00bb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    param_1 = param_3;
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f00c68;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar3;
    _objc_release(uVar2);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
  }
  _objc_release(param_1);
LAB_108f00c68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f00c7c; end: 108f00cc7; -[SCSearchNavigationItem setBackButtonBehavior:] */

void FUN_108f00c7c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x58) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x58) = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c153ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f00cc8; end: 108f00d13; -[SCSearchNavigationItem setSearchNavigationBarStyle:] */

void FUN_108f00cc8(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x50) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x50) = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c153ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f00d14; end: 108f00ddf; -[SCSearchNavigationItem setRightBarButtonItems:] */

void FUN_108f00d14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x68);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    param_1 = param_3;
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f00dcc;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = uVar3;
    _objc_release(uVar2);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
  }
  _objc_release(param_1);
LAB_108f00dcc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f00de0; end: 108f00e2b; -[SCSearchNavigationItem setSearchClearButtonViewMode:] */

void FUN_108f00de0(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x18) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x18) = param_3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c153ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f00e2c; end: 108f00ef3; -[SCSearchNavigationItem setSearchIconAccessoryImage:] */

void FUN_108f00e2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x48);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
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
      if ((uVar1 & 1) != 0) goto LAB_108f00ee0;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(ulong *)(param_1 + 0x48) = param_3;
    _objc_release(uVar2);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
    uVar3 = param_1;
  }
  _objc_release(uVar3);
LAB_108f00ee0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f00ef4; end: 108f00fbb; -[SCSearchNavigationItem setSearchTextFieldFont:] */

void FUN_108f00ef4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x40);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
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
      if ((uVar1 & 1) != 0) goto LAB_108f00fa8;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = param_3;
    _objc_release(uVar2);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
    uVar3 = param_1;
  }
  _objc_release(uVar3);
LAB_108f00fa8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f00fbc; end: 108f01033; -[SCSearchNavigationItem setRightView:] */

void FUN_108f00fbc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = param_3;
    _objc_release(uVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c153ca0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f01034; end: 108f0103b; -[SCSearchNavigationItem navigationBarHeight] */

undefined8 FUN_108f01034(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f0103c; end: 108f01043; -[SCSearchNavigationItem navigationBarContentOffset] */

undefined1  [16] FUN_108f0103c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x78);
}



/* Entry: 108f01044; end: 108f0104b; -[SCSearchNavigationItem searchPlaceholderText] */

undefined8 FUN_108f01044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f0104c; end: 108f01053; -[SCSearchNavigationItem searchClearButtonViewMode] */

undefined8 FUN_108f0104c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f01054; end: 108f0105b; -[SCSearchNavigationItem searchBackgroundView] */

undefined8 FUN_108f01054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f0105c; end: 108f01067; -[SCSearchNavigationItem searchBackgroundEdgeInsets] */

undefined8 FUN_108f0105c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108f01068; end: 108f01073; -[SCSearchNavigationItem searchViewEdgeInsets] */

undefined8 FUN_108f01068(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108f01074; end: 108f0107b; -[SCSearchNavigationItem searchInputAccessoryView] */

undefined8 FUN_108f01074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f0107c; end: 108f010ab; -[SCSearchNavigationItem setSearchInputAccessoryView:] */

void FUN_108f0107c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f010ac; end: 108f010b3; -[SCSearchNavigationItem searchIconImage] */

undefined8 FUN_108f010ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f010b4; end: 108f010bb; -[SCSearchNavigationItem rightView] */

undefined8 FUN_108f010b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f010bc; end: 108f010c3; -[SCSearchNavigationItem searchTextFieldFont] */

undefined8 FUN_108f010bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f010c4; end: 108f010cb; -[SCSearchNavigationItem searchIconAccessoryImage] */

undefined8 FUN_108f010c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f010cc; end: 108f010d3; -[SCSearchNavigationItem searchNavigationBarStyle] */

undefined8 FUN_108f010cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f010d4; end: 108f010db; -[SCSearchNavigationItem backButtonBehavior] */

undefined8 FUN_108f010d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f010dc; end: 108f010e3; -[SCSearchNavigationItem backButtonActionBlock] */

undefined8 FUN_108f010dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f010e4; end: 108f010eb; -[SCSearchNavigationItem setBackButtonActionBlock:] */

void FUN_108f010e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108f010ec; end: 108f010f3; -[SCSearchNavigationItem rightBarButtonItems] */

undefined8 FUN_108f010ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108f010f4; end: 108f0110b; -[SCSearchNavigationItem delegate] */

void FUN_108f010f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f0110c; end: 108f01117; -[SCSearchNavigationItem setDelegate:] */

void FUN_108f0110c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 108f01118; end: 108f011a3; -[SCSearchNavigationItem .cxx_destruct] */

void FUN_108f01118(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f011a4; end: 108f01323; -[SCSearchNavigationTransitionContext initWithFromNavigationInfo:toNavigationInfo:containerViewController:animationController:interactionController:shouldForwardAppearanceMethods:isPresenting:isInteractive:animated:completionBlock:] */

undefined1 *
FUN_108f011a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ff360;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 4;
    *(undefined1 *)((long)puVar1 + 0x19) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0x1a) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0x1b) = param_8;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f01324; end: 108f013af; -[SCSearchNavigationTransitionContext viewControllerForKey:] */

void FUN_108f01324(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,
                        *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
    if ((int)uVar1 == 0) {
      uVar2 = 0;
      goto LAB_108f01398;
    }
    lVar3 = 0x30;
  }
  else {
    lVar3 = 0x28;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29c380(uVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_108f01398:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f013b0; end: 108f0145b; -[SCSearchNavigationTransitionContext viewForKey:] */

void FUN_108f013b0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
    if ((int)uVar1 == 0) {
      uVar4 = 0;
      goto LAB_108f01440;
    }
    lVar3 = 0x30;
  }
  else {
    lVar3 = 0x28;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c29c380(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
LAB_108f01440:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f0145c; end: 108f01463; -[SCSearchNavigationTransitionContext containerView] */

void FUN_108f0145c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_view_1126849e8);
  return;
}



/* Entry: 108f01464; end: 108f01477; -[SCSearchNavigationTransitionContext initialFrameForViewController:] */

undefined8 FUN_108f01464(void)

{
  return *(undefined8 *)PTR__CGRectZero_110347608;
}



/* Entry: 108f01478; end: 108f0148b; -[SCSearchNavigationTransitionContext finalFrameForViewController:] */

undefined8 FUN_108f01478(void)

{
  return *(undefined8 *)PTR__CGRectZero_110347608;
}



/* Entry: 108f0148c; end: 108f01497; -[SCSearchNavigationTransitionContext cancelInteractiveTransition] */

void FUN_108f0148c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 108f01498; end: 108f01507; -[SCSearchNavigationTransitionContext updateInteractiveTransition:] */

void FUN_108f01498(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = param_1;
  func_0x00010c27a940(*(undefined8 *)(param_2 + 0x40),param_3,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214e40(param_1 * dVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f01508; end: 108f0150b; -[SCSearchNavigationTransitionContext pauseInteractiveTransition] */

void FUN_108f01508(void)

{
  return;
}



/* Entry: 108f0150c; end: 108f01513; -[SCSearchNavigationTransitionContext finishInteractiveTransition] */

void FUN_108f0150c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 108f01514; end: 108f0158f; -[SCSearchNavigationTransitionContext completeTransition:] */

void FUN_108f01514(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    _objc_opt_respondsToSelector(uVar1,PTR_s_animationEnded__11259e8a8);
    if ((uVar1 & 1) != 0) {
      func_0x00010bf03c00(*(undefined8 *)(param_1 + 0x40));
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f01580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,param_3 ^ 1);
    return;
  }
  return;
}



/* Entry: 108f01590; end: 108f01597; -[SCSearchNavigationTransitionContext transitionWasCancelled] */

undefined1 FUN_108f01590(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 108f01598; end: 108f0159f; -[SCSearchNavigationTransitionContext presentationStyle] */

undefined8 FUN_108f01598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f015a0; end: 108f015a7; -[SCSearchNavigationTransitionContext isAnimated] */

undefined1 FUN_108f015a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 108f015a8; end: 108f015af; -[SCSearchNavigationTransitionContext isInteractive] */

undefined1 FUN_108f015a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 108f015b0; end: 108f015c7; -[SCSearchNavigationTransitionContext targetTransform] */

void FUN_108f015b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[5] = *(undefined8 *)(param_2 + 0x70);
  param_1[4] = uVar1;
  return;
}



/* Entry: 108f015c8; end: 108f015cf; -[SCSearchNavigationTransitionContext fromNavigationInfo] */

undefined8 FUN_108f015c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f015d0; end: 108f015d7; -[SCSearchNavigationTransitionContext toNavigationInfo] */

undefined8 FUN_108f015d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f015d8; end: 108f015df; -[SCSearchNavigationTransitionContext containerViewController] */

undefined8 FUN_108f015d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f015e0; end: 108f015e7; -[SCSearchNavigationTransitionContext shouldForwardAppearanceMethods] */

undefined1 FUN_108f015e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b);
}



/* Entry: 108f015e8; end: 108f015ef; -[SCSearchNavigationTransitionContext animationController] */

undefined8 FUN_108f015e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f015f0; end: 108f015f7; -[SCSearchNavigationTransitionContext isPresenting] */

undefined1 FUN_108f015f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 108f015f8; end: 108f01657; -[SCSearchNavigationTransitionContext .cxx_destruct] */

void FUN_108f015f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f01658; end: 108f016b7; -[SCSearchScaleAndFadeTransitionController initWithPresenting:] */

void FUN_108f01658(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff368;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = 2;
    *(undefined8 *)((long)puVar1 + 0x28) = 0x3feccccccccccccd;
    *(undefined8 *)((long)puVar1 + 0x20) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
  }
  return;
}



/* Entry: 108f016b8; end: 108f016bf; -[SCSearchScaleAndFadeTransitionController transitionDuration:] */

undefined8 FUN_108f016b8(void)

{
  return 0x3fd0000000000000;
}



/* Entry: 108f016c0; end: 108f0192f; -[SCSearchScaleAndFadeTransitionController animateTransition:] */

void FUN_108f016c0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dc778;
  _objc_opt_class(PTR_PTR_1126dc778);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126dc778;
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
  uVar5 = param_3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3e68;
  _objc_opt_class(PTR_PTR_1126c3e68);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c230860();
  uVar6 = uVar1;
  func_0x00010c06c000();
  func_0x00010be79600(param_1);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108f01930;
  puStack_80 = &UNK_110841fb0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar3);
  ppuVar7 = &puStack_98;
  uStack_78 = uVar3;
  _objc_retainBlock();
  puStack_c8 = puVar2;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x108f0196c;
  puStack_b0 = &UNK_110847580;
  _objc_copyWeak(auStack_a8,auStack_68);
  uStack_a0 = (undefined1)uVar5;
  ppuVar8 = &puStack_c8;
  _objc_retainBlock();
  if ((int)uVar6 == 0) {
    if (ppuVar7 != (undefined **)0x0) {
      (*(code *)ppuVar7[2])(ppuVar7);
    }
    (*(code *)ppuVar8[2])(ppuVar8,1);
  }
  else {
    func_0x00010bf03440(0x3fd0000000000000,0,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar7);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108f01930; end: 108f0199f;  */

void FUN_108f01930(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be49a20(0x3ff0000000000000);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108f019a0; end: 108f01a0f; -[SCSearchScaleAndFadeTransitionController startInteractiveTransition:] */

void FUN_108f019a0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dc778;
  _objc_opt_class(PTR_PTR_1126dc778);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar4);
  func_0x00010be79600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f01a10; end: 108f01a47; -[SCSearchScaleAndFadeTransitionController updateInteractiveTransition:] */

void FUN_108f01a10(undefined8 param_1,long param_2)

{
  func_0x00010c286a00(*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010be49a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__layoutWithPercentComplete__112570028);
  return;
}



/* Entry: 108f01a48; end: 108f01cd7; -[SCSearchScaleAndFadeTransitionController cancelInteractiveTransition] */

void FUN_108f01a48(long param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x00010bf2e5a0(*(undefined8 *)(param_1 + 0x10));
  iVar4 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c230860();
  uVar5 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3e68;
  _objc_opt_class(PTR_PTR_1126c3e68);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar8 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfbace0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(ulong *)(param_1 + 0x10);
  func_0x00010c271fa0();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = *(double *)(param_1 + 0x20);
  uVar7 = uVar1;
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c40((float)dVar10);
  _objc_release(uVar7);
  bVar2 = *(byte *)(param_1 + 8);
  uVar7 = uVar8;
  func_0x00010c0d6c60();
  cVar3 = *(char *)(param_1 + 8);
  uVar5 = uVar9;
  func_0x00010c0d6c60();
  if (iVar4 != 0) {
    if ((cVar3 == '\0') || ((uVar5 & 0x3c0) != 0x40)) {
      uVar5 = uVar8;
      func_0x00010c29c380(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b00();
      _objc_release(uVar5);
    }
    if ((bVar2 & 1) != 0 || (uVar7 & 0x3c0) != 0x40) {
      uVar7 = uVar9;
      func_0x00010c29c380(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b00();
      _objc_release(uVar7);
    }
  }
  _objc_initWeak(auStack_68,param_1);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108f01cd8;
  puStack_80 = &UNK_110841fb0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  uStack_78 = uVar1;
  _objc_copyWeak(auStack_a8,auStack_68);
  uStack_a0 = (undefined1)iVar4;
  func_0x00010bf03440(0x3fd0000000000000,0,puVar6);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar1);
  return;
}



/* Entry: 108f01cd8; end: 108f01d47;  */

void FUN_108f01cd8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be49a20(0);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108f01d48; end: 108f01eff; -[SCSearchScaleAndFadeTransitionController finishInteractiveTransition] */

void FUN_108f01d48(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010bfaf8e0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c230860();
  uVar3 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3e68;
  _objc_opt_class(PTR_PTR_1126c3e68);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  dVar6 = *(double *)(param_1 + 0x20);
  uVar5 = uVar1;
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c40((float)dVar6);
  _objc_release(uVar5);
  _objc_initWeak(auStack_58,param_1);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108f01f00;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  _objc_copyWeak(auStack_98,auStack_58);
  uStack_90 = uVar2;
  func_0x00010bf03440(0x3fd0000000000000,0,puVar4);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  return;
}



/* Entry: 108f01f00; end: 108f01f6f;  */

void FUN_108f01f00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be49a20(0x3ff0000000000000);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108f01f70; end: 108f02137; -[SCSearchScaleAndFadeTransitionController _prepareTransition] */

void FUN_108f01f70(long param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c3e68;
  _objc_opt_class(PTR_PTR_1126c3e68);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar8 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfbace0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(ulong *)(param_1 + 0x10);
  func_0x00010c271fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c29c380();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c230860();
  func_0x00010c06c000(*(undefined8 *)(param_1 + 0x10));
  bVar2 = *(byte *)(param_1 + 8);
  uVar7 = uVar8;
  func_0x00010c0d6c60();
  cVar3 = *(char *)(param_1 + 8);
  uVar10 = uVar9;
  func_0x00010c0d6c60();
  if (iVar4 != 0) {
    if ((cVar3 == '\0') || ((uVar10 & 0x3c0) != 0x40)) {
      uVar10 = uVar8;
      func_0x00010c29c380(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b00();
      _objc_release(uVar10);
    }
    if ((bVar2 & 1) != 0 || (uVar7 & 0x3c0) != 0x40) {
      uVar7 = uVar9;
      func_0x00010c29c380(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b00();
      _objc_release(uVar7);
    }
  }
  func_0x00010c0d6c60(uVar9);
  func_0x00010c219a80(uVar1);
  func_0x00010be49a20(0,param_1);
  func_0x00010c08cdc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 108f02138; end: 108f02413; -[SCSearchScaleAndFadeTransitionController _layoutWithPercentComplete:] */

void FUN_108f02138(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  dVar14 = 0.0;
  dVar11 = 0.0;
  if (0.0 <= param_1) {
    dVar11 = param_1;
  }
  dVar12 = 1.0;
  if (dVar11 <= 1.0) {
    dVar12 = dVar11;
  }
  lVar2 = *(long *)(param_5 + 0x10);
  func_0x00010bfbace0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_5 + 0x10);
  func_0x00010c271fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010c29ce60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + 0x10);
  func_0x00010c29ce60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(ulong *)(param_5 + 0x10);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c3e68;
  _objc_opt_class(PTR_PTR_1126c3e68);
  uVar8 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar7);
  uVar1 = uVar6;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if (*(char *)(param_5 + 8) != '\x01') {
    lVar9 = lVar2;
    func_0x00010c10fc20();
    if (lVar9 < 3) {
      if (lVar9 == 1) {
        dVar12 = -dVar12;
      }
      else if (lVar9 != 2) {
LAB_108f022c0:
        dVar14 = *(double *)PTR__CGPointZero_110347540;
        dVar12 = *(double *)(PTR__CGPointZero_110347540 + 8);
      }
    }
    else {
      if (lVar9 == 3) {
        dVar14 = -dVar12;
      }
      else {
        dVar14 = dVar12;
        if (lVar9 != 4) goto LAB_108f022c0;
      }
      dVar12 = 0.0;
    }
    func_0x00010bf20c00(uVar1);
    dVar11 = *(double *)(param_5 + 0x30);
    dVar13 = *(double *)(param_5 + 0x28) + param_1 * (1.0 - *(double *)(param_5 + 0x28));
    func_0x00010c182ba0(dVar14 * param_3,dVar12 * param_4,uVar1);
    func_0x00010c1677c0(dVar11 + param_1 * (1.0 - dVar11),uVar5);
    _CGAffineTransformMakeScale(&uStack_100,dVar13,dVar13);
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uVar10 = uVar5;
    goto LAB_108f023bc;
  }
  lVar9 = lVar3;
  func_0x00010c10fc20();
  dVar12 = 1.0 - dVar12;
  if (lVar9 < 3) {
    if (lVar9 == 1) {
      dVar12 = -dVar12;
    }
    else if (lVar9 != 2) {
LAB_108f022b0:
      dVar14 = *(double *)PTR__CGPointZero_110347540;
      dVar12 = *(double *)(PTR__CGPointZero_110347540 + 8);
    }
  }
  else {
    if (lVar9 == 3) {
      dVar14 = -dVar12;
    }
    else {
      dVar14 = dVar12;
      if (lVar9 != 4) goto LAB_108f022b0;
    }
    dVar12 = 0.0;
  }
  func_0x00010bf20c00(uVar1);
  dVar11 = *(double *)(param_5 + 0x30);
  dVar13 = 1.0 - param_1 * (1.0 - *(double *)(param_5 + 0x28));
  func_0x00010c212680(dVar14 * param_3,dVar12 * param_4,uVar1);
  func_0x00010c1677c0(1.0 - param_1 * (1.0 - dVar11),uVar4);
  _CGAffineTransformMakeScale(&uStack_a0,dVar13,dVar13);
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uVar10 = uVar4;
LAB_108f023bc:
  func_0x00010c219960(uVar10);
  func_0x00010c1cbe20(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 108f02414; end: 108f026e3; -[SCSearchScaleAndFadeTransitionController _handleAnimationCompletion:] */

void FUN_108f02414(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfbace0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(ulong *)(param_1 + 0x10);
  func_0x00010c271fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c29ce60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c29ce60(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c3e68;
  _objc_opt_class(PTR_PTR_1126c3e68);
  uVar12 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar11);
  uVar1 = uVar10;
  if ((uVar12 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar10);
  uVar12 = uVar1;
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207c40(0x3f800000);
  _objc_release(uVar12);
  bVar2 = *(byte *)(param_1 + 8);
  uVar12 = uVar6;
  func_0x00010c0d6c60();
  bVar4 = (uVar12 & 0x3c0) != 0x40;
  bVar3 = *(byte *)(param_1 + 8);
  uVar12 = uVar7;
  func_0x00010c0d6c60();
  bVar5 = (uVar12 & 0x3c0) != 0x40;
  bVar3 = bVar3 ^ 1;
  if (*(char *)(param_1 + 8) == '\x01') {
    if (param_3 != 0) {
      if ((bVar3 & 1) != 0 || bVar5) {
        uVar12 = uVar6;
        func_0x00010c29c380(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941a0();
        _objc_release(uVar12);
      }
      if ((bVar2 & 1) != 0 || bVar4) {
        uVar12 = uVar7;
        func_0x00010c29c380(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941a0();
        _objc_release(uVar12);
      }
    }
    func_0x00010c130d40(uVar1);
    func_0x00010c1677c0(0x3ff0000000000000,uVar8);
    func_0x00010c219960(uVar8);
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x10);
    func_0x00010c27ac00();
    if ((uVar12 & 1) == 0) {
      func_0x00010c130d40(uVar1);
    }
    else {
      func_0x00010bf3a120(uVar1);
    }
    func_0x00010c1677c0(0x3ff0000000000000,uVar9);
    func_0x00010c219960(uVar9);
    if (param_3 != 0) {
      if ((bVar3 & 1) != 0 || bVar5) {
        uVar12 = uVar6;
        func_0x00010c29c380(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941a0();
        _objc_release(uVar12);
      }
      if ((bVar2 & 1) != 0 || bVar4) {
        uVar12 = uVar7;
        func_0x00010c29c380(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf941a0();
        _objc_release(uVar12);
      }
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c27ac00(uVar13);
  func_0x00010bf43bc0(uVar13);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  return;
}



/* Entry: 108f026e4; end: 108f026eb; -[SCSearchScaleAndFadeTransitionController completionCurve] */

undefined8 FUN_108f026e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f026ec; end: 108f026f3; -[SCSearchScaleAndFadeTransitionController completionSpeed] */

undefined8 FUN_108f026ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f026f4; end: 108f026fb; -[SCSearchScaleAndFadeTransitionController scale] */

undefined8 FUN_108f026f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f026fc; end: 108f02703; -[SCSearchScaleAndFadeTransitionController setScale:] */

void FUN_108f026fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108f02704; end: 108f0270b; -[SCSearchScaleAndFadeTransitionController alpha] */

undefined8 FUN_108f02704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f0270c; end: 108f02713; -[SCSearchScaleAndFadeTransitionController setAlpha:] */

void FUN_108f0270c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 108f02714; end: 108f0271f; -[SCSearchScaleAndFadeTransitionController .cxx_destruct] */

void FUN_108f02714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f02720; end: 108f0272b; +[SCSearchViewController announcerIdentifier] */

undefined ** FUN_108f02720(void)

{
  return &PTR____CFConstantStringClassReference_110f03e38;
}



/* Entry: 108f0272c; end: 108f0273b; -[SCSearchViewController addUpdateListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f0272c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277dd24),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108f0273c; end: 108f0274b; -[SCSearchViewController removeUpdateListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f0273c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277dd24),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108f0274c; end: 108f028bf; -[SCSearchViewController initWithRootViewController:navigationStyle:presentingOriginPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f0274c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126ff370;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dc788;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277dd28;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    if (param_3 != 0) {
      puVar2 = PTR_PTR_1126c3e10;
      _objc_alloc();
      func_0x00010c061a60();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dd2c);
      *(undefined **)((long)puVar1 + (long)_DAT_11277dd2c) = puVar3;
      _objc_release(uVar5);
      _objc_release(puVar2);
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277dd30) = 1;
    puVar2 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dd24);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dd24) = puVar2;
    _objc_release(uVar5);
  }
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_90;
  pcStack_68 = FUN_108f028c0;
  puStack_80 = (undefined1 *)puVar1;
  lStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010c1cb880(*(undefined8 *)(lVar6 + _DAT_11277dd28));
  puStack_88 = PTR_PTR_1126ff370;
  lStack_90 = lVar6;
  _objc_msgSendSuper2(&lStack_90,PTR_s_dealloc_112525b20);
  return (undefined1 *)plVar4;
}



/* Entry: 108f028c0; end: 108f02913; -[SCSearchViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f028c0(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c1cb880(*(undefined8 *)(param_1 + _DAT_11277dd28),param_2,0);
  puStack_28 = PTR_PTR_1126ff370;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108f02914; end: 108f029df; -[SCSearchViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f02914(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  *(undefined **)(param_1 + _DAT_11277dd34) = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c3e68;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_11277dd38;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c16e900(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 108f029e0; end: 108f02bf7; -[SCSearchViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f029e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff370;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252d80();
  _CGRectGetHeight();
  func_0x00010bed5f00(param_1,0,0,0,param_2);
  _objc_release(puVar1);
  lVar5 = (long)_DAT_11277dd38;
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c0d6280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c0d6280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c154720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  lVar5 = (long)_DAT_11277dd2c;
  func_0x00010c1cb880(*(undefined8 *)(param_2 + _DAT_11277dd28));
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  *(undefined8 *)(param_2 + lVar5) = 0;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_2);
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 108f02bf8; end: 108f02d83; -[SCSearchViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f02bf8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff370;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewWillAppear__1126853f0);
  puVar2 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar2);
  lVar6 = (long)_DAT_11277dd28;
  func_0x00010c222460(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c06d1e0(param_1);
  puVar2 = PTR_DAT_1126a5b60;
  lVar7 = (long)_DAT_11277dd40;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(uVar5);
  uVar3 = uVar5;
  func_0x000107c318f8(uVar5,puVar2);
  uVar4 = uVar5;
  if ((int)uVar3 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar3 = uVar4;
  func_0x00010c153720(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c1af840(uVar3);
  _objc_release(uVar3);
  func_0x00010bf17b00(*(undefined8 *)(param_1 + lVar7));
  lVar7 = (long)_DAT_11277dd44;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c06d1e0();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0d6700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9140(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar4);
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar2);
  return;
}



/* Entry: 108f02d84; end: 108f02e97; -[SCSearchViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f02d84(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff370;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillDisappear__112685438);
  func_0x00010c222460(*(undefined8 *)(param_1 + _DAT_11277dd28));
  func_0x00010c06d1a0(param_1);
  puVar2 = PTR_DAT_1126a5b60;
  lVar5 = (long)_DAT_11277dd40;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c153720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1af7e0(uVar3);
  _objc_release(uVar3);
  func_0x00010bf17b00(*(undefined8 *)(param_1 + lVar5));
  lVar5 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar5 != 0) {
    func_0x00010c20a320(param_1);
  }
  return;
}



/* Entry: 108f02e98; end: 108f02f63; -[SCSearchViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f02e98(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff370;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c222460(*(undefined8 *)(param_1 + _DAT_11277dd28));
  lVar5 = (long)_DAT_11277dd40;
  func_0x00010bf941a0(*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_DAT_1126a5b60;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c153720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1af840(uVar3);
  _objc_release(uVar3);
  return;
}



/* Entry: 108f02f64; end: 108f0302f; -[SCSearchViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f02f64(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff370;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c222460(*(undefined8 *)(param_1 + _DAT_11277dd28));
  lVar5 = (long)_DAT_11277dd40;
  func_0x00010bf941a0(*(undefined8 *)(param_1 + lVar5));
  puVar2 = PTR_DAT_1126a5b60;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c153720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1af7e0(uVar3);
  _objc_release(uVar3);
  return;
}



/* Entry: 108f03030; end: 108f0328b; -[SCSearchViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03030(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126ff370;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_viewWillLayoutSubviews_112526958);
  lVar8 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(lVar8);
  func_0x00010bed5f00(param_1,param_2,param_3,param_4,param_5);
  uVar2 = *(ulong *)(param_5 + _DAT_11277dd28);
  func_0x00010c0d6820();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf529e0();
  do {
    uVar9 = uVar9 - 1;
    if ((long)uVar9 < 0) break;
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29c380();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000107c318f8();
    uVar1 = uVar4;
    if ((int)uVar5 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 != 0) {
      uVar5 = uVar3;
      func_0x00010c0d6c60();
      lVar10 = (long)_DAT_11277dd44;
      lVar8 = *(long *)(param_5 + lVar10);
      if (lVar8 == 0) {
        lVar8 = *(long *)(param_5 + _DAT_11277dd38);
      }
      func_0x00010c08ce20(lVar8);
      uVar6 = uVar4;
      dVar11 = param_1;
      func_0x00010c153720(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0d68c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d6560();
      _objc_release(uVar7);
      _objc_release(uVar6);
      dVar11 = param_1 + dVar11;
      if ((uVar5 & 0xf) != 1) {
        dVar11 = param_1;
      }
      param_1 = dVar11;
      lVar8 = *(long *)(param_5 + lVar10);
      if (lVar8 == 0) {
        lVar8 = *(long *)(param_5 + _DAT_11277dd38);
      }
      func_0x00010c08ce20(lVar8);
      lVar8 = *(long *)(param_5 + lVar10);
      if (lVar8 == 0) {
        lVar8 = *(long *)(param_5 + _DAT_11277dd38);
      }
      func_0x00010c08ce20(lVar8);
      lVar8 = *(long *)(param_5 + lVar10);
      if (lVar8 == 0) {
        lVar8 = *(long *)(param_5 + _DAT_11277dd38);
      }
      func_0x00010c08ce20(lVar8);
      func_0x00010c153720(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9b60(param_1,param_2,param_3,param_4);
      _objc_release(uVar4);
    }
    uVar4 = uVar3;
    func_0x00010c0d6c60();
    _objc_release(uVar1);
    _objc_release(uVar3);
  } while ((uVar4 & 0x3c0) != 0);
  _objc_release(uVar2);
  return;
}



/* Entry: 108f0328c; end: 108f03303; -[SCSearchViewController viewDidLayoutSubviews] */

void FUN_108f0328c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff370;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010bf4dd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 108f03304; end: 108f0330b; -[SCSearchViewController shouldAutomaticallyForwardAppearanceMethods] */

undefined8 FUN_108f03304(void)

{
  return 0;
}



/* Entry: 108f0330c; end: 108f0331b; -[SCSearchViewController preferredStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f0330c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dd30);
}



/* Entry: 108f0331c; end: 108f03323; -[SCSearchViewController prefersStatusBarHidden] */

undefined8 FUN_108f0331c(void)

{
  return 0;
}



/* Entry: 108f03324; end: 108f03353; -[SCSearchViewController childViewControllerForStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03324(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277dd40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f03354; end: 108f03383; -[SCSearchViewController childViewControllerForStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03354(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277dd40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f03384; end: 108f033e3; -[SCSearchViewController preferredScreenEdgesDeferringSystemGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f03384(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_1126a5b60;
  lVar4 = *(long *)(param_1 + _DAT_11277dd40);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x000107c318f8(lVar4,puVar2);
  _objc_release(lVar4);
  uVar1 = 0;
  if (((uint)lVar3 & (uint)(lVar4 != 0)) == 0) {
    uVar1 = 0xf;
  }
  return uVar1;
}



/* Entry: 108f033e4; end: 108f033eb; -[SCSearchViewController pageViewName] */

undefined8 FUN_108f033e4(void)

{
  return 0xfb;
}



/* Entry: 108f033ec; end: 108f03407; -[SCSearchViewController shouldDisplayStatusBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108f033ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277dd40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c22fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_shouldDisplayStatusBar_112669938);
    return lVar1;
  }
  return 1;
}



/* Entry: 108f03408; end: 108f03473; -[SCSearchViewController navigationInfos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03408(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0834c0();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11277dd2c);
    func_0x00010bf51e00(uVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11277dd28);
    func_0x00010c0d6820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}


