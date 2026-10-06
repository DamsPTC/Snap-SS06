/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b2c0b8; end: 107b2c14b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c0b8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a88c);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b2c14c; end: 107b2c1bb; -[SCOperaImageLayerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c14c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ea0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  *(undefined1 *)(param_1 + _DAT_11276a868) = 1;
  lVar1 = (long)_DAT_11276a86c;
  if (*(double *)(param_1 + lVar1) != 0.0) {
    func_0x00010be9aa40(param_1);
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 107b2c1bc; end: 107b2c237; -[SCOperaImageLayerViewController viewWillFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c1bc(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ea0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillFullyAppear_112685468);
  lVar1 = *(long *)(param_1 + _DAT_11276a880);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if ((*(byte *)(param_1 + _DAT_11276a888) & 1) == 0) {
      func_0x00010be4d880(param_1);
    }
  }
  else {
    _objc_release();
  }
  return;
}



/* Entry: 107b2c238; end: 107b2c29b; -[SCOperaImageLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c238(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ea0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  *(undefined1 *)(param_1 + _DAT_11276a890) = 1;
  func_0x00010be42b40(param_1);
  func_0x00010be9f4e0(param_1);
  return;
}



/* Entry: 107b2c29c; end: 107b2c2ff; -[SCOperaImageLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c29c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ea0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  *(undefined1 *)(param_1 + _DAT_11276a890) = 0;
  *(undefined1 *)(param_1 + _DAT_11276a894) = 0;
  func_0x00010be42b40(param_1);
  return;
}



/* Entry: 107b2c300; end: 107b2c35f; -[SCOperaImageLayerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c300(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ea0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  *(undefined1 *)(param_1 + _DAT_11276a868) = 0;
  *(undefined8 *)(param_1 + _DAT_11276a86c) = 0;
  *(undefined8 *)(param_1 + _DAT_11276a870) = 0;
  return;
}



/* Entry: 107b2c360; end: 107b2c407; -[SCOperaImageLayerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c360(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ea0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_11276a880));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(param_1);
  return;
}



/* Entry: 107b2c408; end: 107b2c4d7; -[SCOperaImageLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c408(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f9ea0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar3 = (long)_DAT_11276a898;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar4 = (long)_DAT_11276a880;
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010bf20c00();
    _CGRectEqualToRect();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
      func_0x00010bf20c00();
      _CGRectEqualToRect();
      if (iVar1 != 0) {
        func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
        func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
      }
    }
  }
  return;
}



/* Entry: 107b2c4d8; end: 107b2c533; -[SCOperaImageLayerViewController mediaIsBeingPreparedForDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107b2c4d8(long param_1)

{
  uint uVar1;
  long lStack_20;
  undefined *puStack_18;
  
  if (*(char *)(param_1 + _DAT_11276a878) == '\x01') {
    uVar1 = (uint)*(byte *)(param_1 + _DAT_11276a888);
  }
  else {
    uVar1 = 0;
    puStack_18 = PTR_PTR_1126f9ea0;
    lStack_20 = param_1;
    _objc_msgSendSuper2(&lStack_20,PTR_s_mediaIsBeingPreparedForDisplay_11260ef10);
  }
  return uVar1 & 1;
}



/* Entry: 107b2c534; end: 107b2c657; -[SCOperaImageLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c534(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9ea0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_teardown_112678538);
  *(undefined1 *)(param_1 + _DAT_11276a890) = 0;
  *(undefined1 *)(param_1 + _DAT_11276a894) = 0;
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  func_0x00010c288560(param_1);
  lVar1 = (long)_DAT_11276a880;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar1));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276a88c));
  *(undefined8 *)(param_1 + _DAT_11276a86c) = 0;
  *(undefined8 *)(param_1 + _DAT_11276a870) = 0;
  *(undefined1 *)(param_1 + _DAT_11276a868) = 0;
  *(undefined1 *)(param_1 + _DAT_11276a888) = 0;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11276a874));
  return;
}



/* Entry: 107b2c658; end: 107b2c83b; -[SCOperaImageLayerViewController setPausedForAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c658(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar3 = &puStack_90;
  lVar5 = (long)_DAT_11276a898;
  if ((param_3 != 0) && (*(long *)(param_1 + lVar5) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11276a880;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar6),param_2,*(undefined8 *)(param_1 + lVar5));
  }
  if (param_3 == 0) {
    lVar5 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c1397e0();
    _objc_release(lVar5);
    if ((int)lVar6 != 0) {
      func_0x00010be42b40(param_1,param_2,1);
    }
    lVar5 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c069200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bfe1a80();
    dVar7 = (double)lVar2 / 1000.0;
    _objc_release(lVar6);
    _objc_release(lVar5);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x107b2c854;
    puStack_78 = &UNK_110842e18;
    lStack_70 = param_1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
    _objc_release(puVar1);
    dVar7 = 0.3;
    func_0x00010c1677c0(0x3fd3333333333333,*(undefined8 *)(param_1 + lVar5));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107b2c83c;
    puStack_50 = &UNK_110842e18;
    ppuVar3 = &puStack_68;
    lStack_48 = param_1;
  }
  func_0x00010bf03440(dVar7,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,ppuVar3,0);
  return;
}



/* Entry: 107b2c83c; end: 107b2c86b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c83c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a898),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b2c86c; end: 107b2c90b; -[SCOperaImageLayerViewController setupPlaybackAnalyticsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c86c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b2340;
  lVar1 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075040();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)puVar3 != 0) {
    _objc_storeWeak(param_1 + _DAT_11276a89c,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2c90c; end: 107b2c91b; -[SCOperaImageLayerViewController mediaViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a88c),PTR_s_frame_1125cb3e0);
  return;
}



/* Entry: 107b2c91c; end: 107b2c94b; -[SCOperaImageLayerViewController mediaViewContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2c91c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a88c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b2c94c; end: 107b2c9fb; -[SCOperaImageLayerViewController mediaHeightToWidthAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107b2c94c(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = (long)_DAT_11276a880;
  uVar1 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar4 = param_1;
  _objc_release(uVar1);
  dVar5 = 0.0;
  if (param_1 != 0.0) {
    uVar1 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bfe6ac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    uVar2 = *(undefined8 *)(param_3 + lVar3);
    func_0x00010bfe6ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar5 = param_2 / dVar4;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return dVar5;
}



/* Entry: 107b2c9fc; end: 107b2ca37; -[SCOperaImageLayerViewController isOverlay] */

undefined8 FUN_107b2c9fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c079780();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107b2ca38; end: 107b2ca6f; -[SCOperaImageLayerViewController setupProgressStateMachine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ca38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a884);
  *(undefined8 *)(param_1 + _DAT_11276a884) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b2ca70; end: 107b2caf7; -[SCOperaImageLayerViewController _scaleLayerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ca70(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
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
  
  piVar1 = (int *)&DAT_11276a86c;
  if (*(char *)(param_2 + _DAT_11276a868) == '\x01') {
    _CGAffineTransformMakeScale(&uStack_60,param_1,param_1);
    piVar1 = (int *)&DAT_11276a870;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_11276a880),param_3,&uStack_90);
  }
  *(undefined8 *)(param_2 + *piVar1) = param_1;
  return;
}



/* Entry: 107b2caf8; end: 107b2cb7f; -[SCOperaImageLayerViewController _isPlayingDidChangeTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2caf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((int)param_3 == 0) {
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_11276a874));
  }
  else {
    func_0x00010c138160();
  }
  lVar1 = param_1 + _DAT_11276a89c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar1,param_2,param_1,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b2cb80; end: 107b2cd3b; -[SCOperaImageLayerViewController _sendImageStartToDisplayEventIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2cb80(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (long)_DAT_11276a880;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_11276a890) == '\x01') {
    lVar8 = (long)_DAT_11276a894;
    if (((*(byte *)(param_1 + lVar8) & 1) == 0) && (uVar1 != 0)) {
      func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276a884),param_2,0);
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010bfe8ca0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010be37780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(param_1,param_2,puVar2,lVar3);
      _objc_release(lVar3);
      _objc_release(puVar2);
      lVar3 = param_1;
      func_0x00010bf9a180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar2 = PTR_PTR_1126d6870;
        _objc_alloc(PTR_PTR_1126d6870);
        uVar4 = uVar1;
        func_0x00010bf93780(uVar1);
        func_0x00010c061040((double)uVar4,puVar2,param_2,uVar1,*(undefined8 *)(param_1 + lVar7));
        puVar5 = PTR_PTR_1126d6878;
        func_0x00010bfe8cc0(PTR_PTR_1126d6878,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_1;
        func_0x00010bf9a180(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar7;
        func_0x00010c0ea760();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010c0f0be0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11ad60(lVar3,param_2,puVar5,lVar6);
        _objc_release(lVar6);
        _objc_release(lVar3);
        _objc_release(lVar7);
        _objc_release(puVar5);
        _objc_release(puVar2);
      }
      *(undefined1 *)(param_1 + lVar8) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b2cd3c; end: 107b2cf6b; -[SCOperaImageLayerViewController _imageStartsToDisplayParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2cd3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
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
  long lVar15;
  double dVar16;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11276a880;
  lVar2 = *(long *)(param_3 + lVar15);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c0c4c60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar4 = lVar2;
    puStack_b8 = puVar3;
    func_0x00010bf93780(lVar2);
    func_0x00010c0df840(puVar5,param_4,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2348;
    puStack_90 = puVar5;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b2348;
    puStack_b0 = puVar6;
    lStack_88 = lVar2;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = *(undefined **)(param_3 + lVar15);
    puVar8 = puVar14;
    puStack_a8 = puVar7;
    if (puVar14 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR_PTR_1126b2348;
    puStack_80 = puVar8;
    func_0x00010c13a500();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_a0 = puVar9;
    func_0x00010c23d0a0(lVar2);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b2348;
    puStack_78 = puVar10;
    func_0x00010c13a460();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_98 = puVar11;
    func_0x00010c23d0a0(lVar2);
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar12;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_90,&puStack_b8,5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    if (puVar14 == (undefined *)0x0) {
      _objc_release(puVar8);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (*(char *)(lVar2 + _DAT_11276a868) == '\x01') {
      dVar16 = *(double *)(lVar2 + _DAT_11276a870);
      bVar1 = true;
      if ((dVar16 != 0.0) && (bVar1 = false, !NAN(dVar16))) {
        bVar1 = dVar16 == 1.0;
      }
      if (!bVar1) {
        puVar13 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
        func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        goto _objc_autoreleaseReturnValue;
      }
    }
    puVar13 = (undefined *)0x0;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107b2cf6c; end: 107b2cfeb; -[SCOperaImageLayerViewController movingViewsForFadeTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2cf6c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  double dVar3;
  
  if (*(char *)(param_1 + _DAT_11276a868) == '\x01') {
    dVar3 = *(double *)(param_1 + _DAT_11276a870);
    bVar1 = true;
    if ((dVar3 != 0.0) && (bVar1 = false, !NAN(dVar3))) {
      bVar1 = dVar3 == 1.0;
    }
    if (!bVar1) {
      puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
      func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      goto LAB_107b2cfdc;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_107b2cfdc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b2cfec; end: 107b2cff3; -[SCOperaImageLayerViewController fadingViewsForFadeTransition] */

undefined8 FUN_107b2cfec(void)

{
  return 0;
}



/* Entry: 107b2cff4; end: 107b2d15f; -[SCOperaImageLayerViewController logShakeToReportState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2cff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR_s_logShakeToReportState__112609788;
  puStack_48 = PTR_PTR_1126f9ea0;
  lStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276a880);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  return;
}



/* Entry: 107b2d160; end: 107b2d16f; -[SCOperaImageLayerViewController layerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b2d160(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a880);
}



/* Entry: 107b2d170; end: 107b2d1fb; -[SCOperaImageLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d170(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a880,0);
  _objc_destroyWeak(param_1 + _DAT_11276a89c);
  _objc_storeStrong(param_1 + _DAT_11276a884,0);
  _objc_storeStrong(param_1 + _DAT_11276a87c,0);
  _objc_storeStrong(param_1 + _DAT_11276a874,0);
  _objc_storeStrong(param_1 + _DAT_11276a898,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a88c,0);
  return;
}



/* Entry: 107b2d1fc; end: 107b2d217; -[SCOperaLeftTapLayerView setupViewWithWidthRatio:useGradientView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d1fc(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined8 *)(param_2 + _DAT_11276a8a0) = param_1;
  *(undefined1 *)(param_2 + _DAT_11276a8a4) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bead810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setupLeftTapView_112588fa8);
  return;
}



/* Entry: 107b2d218; end: 107b2d283; -[SCOperaLeftTapLayerView showTapBackGradientImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d218(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11276a8a4) == '\x01') {
    lVar2 = (long)_DAT_11276a8a8;
    lVar1 = *(long *)(param_1 + lVar2);
    if (lVar1 != 0) goto LAB_107b2d274;
    func_0x00010beb05e0(param_1);
  }
  else {
    lVar2 = (long)_DAT_11276a8ac;
    lVar1 = *(long *)(param_1 + lVar2);
    if (lVar1 != 0) goto LAB_107b2d274;
    func_0x00010beb05c0(param_1);
  }
  lVar1 = *(long *)(param_1 + lVar2);
LAB_107b2d274:
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x3ff0000000000000,lVar1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b2d284; end: 107b2d2c3; -[SCOperaLeftTapLayerView hideTapBackGradientImageView] */

/* WARNING: Possible PIC construction at 0x000107b2d2a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b2d2ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + _DAT_11276a8ac),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b2d2c4; end: 107b2d35b; -[SCOperaLeftTapLayerView _setupLeftTapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d2c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11276a8b0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107b2d35c;
  puStack_30 = &UNK_1108471b0;
  lStack_28 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107b2d35c; end: 107b2d523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d35c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x4049000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a8a0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b2d524; end: 107b2d607; -[SCOperaLeftTapLayerView _setupTapBackGradientImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d524(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eae238);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,puVar2);
  lVar4 = (long)_DAT_11276a8ac;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b2d608;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107b2d608; end: 107b2d76b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d608(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a8a0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b2d76c; end: 107b2d93f; -[SCOperaLeftTapLayerView _setupTapBackGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d76c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1198;
  _objc_opt_new();
  lVar11 = (long)_DAT_11276a8a8;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfcd9c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209760(0,0x3fe0000000000000);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bfcd9c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000);
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fdf9f9f9f9f9fa0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  lVar11 = *(long *)(param_1 + lVar11);
  func_0x00010c0bbfc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar9 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar9);
  lVar9 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = lVar9;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))(*(undefined8 *)(*(long *)(lVar11 + 0x20) + (long)_DAT_11276a8a0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 107b2d940; end: 107b2daa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2d940(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276a8a0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b2daa4; end: 107b2dab3; -[SCOperaLeftTapLayerView tapBackGradientImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b2daa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a8ac);
}



/* Entry: 107b2dab4; end: 107b2dac3; -[SCOperaLeftTapLayerView tapBackGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b2dab4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a8a8);
}



/* Entry: 107b2dac4; end: 107b2dad3; -[SCOperaLeftTapLayerView leftTapView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b2dac4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a8b0);
}



/* Entry: 107b2dad4; end: 107b2db23; -[SCOperaLeftTapLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2dad4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a8b0,0);
  _objc_storeStrong(param_1 + _DAT_11276a8a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a8ac,0);
  return;
}



/* Entry: 107b2db24; end: 107b2dc03; -[SCOperaLeftTapLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b2db24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f9ea8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276a8b4) = 1;
    uVar2 = param_5;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb2120();
    *(char *)((long)puVar1 + (long)_DAT_11276a8b8) = (char)uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107b2dc04; end: 107b2dc73; -[SCOperaLeftTapLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2dc04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ea8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  lVar1 = (long)_DAT_11276a8bc;
  uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
  ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined1 *)(param_1 + _DAT_11276a8b4) = 1;
  func_0x00010bde08a0(param_1);
  return;
}



/* Entry: 107b2dc74; end: 107b2dca3; -[SCOperaLeftTapLayerViewController layerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2dc74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a8c0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b2dca4; end: 107b2dd4b; -[SCOperaLeftTapLayerViewController _setupLongPressGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2dca4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276a8c4;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc();
  func_0x00010c050900();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1c8340(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  param_1 = param_1 + _DAT_11276a8c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b2dd4c; end: 107b2ddbb; -[SCOperaLeftTapLayerViewController _clearLongPressGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2dd4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276a8c4;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_1 + _DAT_11276a8c8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12c9c0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107b2ddbc; end: 107b2ddef; -[SCOperaLeftTapLayerViewController setDelegateViewForGestures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ddbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_11276a8c8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beadef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLongPressGesture_112589160);
  return;
}



/* Entry: 107b2ddf0; end: 107b2deb7; -[SCOperaLeftTapLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ddf0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c08ea20(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c08ea20(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_11276a8b4) = (char)lVar3;
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2deb8; end: 107b2dfa3; -[SCOperaLeftTapLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2deb8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d6880;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_11276a8c0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010c0ea360(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c268da0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2690e0();
  func_0x00010c229a00(uVar4);
  _objc_release(lVar2);
  func_0x00010bfe2b40(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 107b2dfa4; end: 107b2e1ef; -[SCOperaLeftTapLayerViewController didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2dfa4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 < 4) {
    if (lVar1 == 1) {
      lVar6 = (long)_DAT_11276a8bc;
      lVar1 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5,param_4,lVar1);
      *(undefined8 *)(param_3 + lVar6) = param_1;
      ((undefined8 *)(param_3 + lVar6))[1] = param_2;
      _objc_release(lVar1);
      func_0x00010c23a6c0(*(undefined8 *)(param_3 + _DAT_11276a8c0));
      goto LAB_107b2e1d4;
    }
    if (lVar1 == 2) {
      lVar1 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5,param_4,lVar1);
      func_0x00010bddde20(param_3);
      _objc_release(lVar1);
      goto LAB_107b2e1d4;
    }
    if (lVar1 != 3) goto LAB_107b2e1d4;
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c08ea40(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lVar4 = lVar6;
    func_0x00010c0e00e0(lVar6,param_4,&PTR____CFConstantStringClassReference_110f0e6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126c9410;
      func_0x00010c1406c0(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_4,PTR____kCFBooleanTrue_11034ab68,puVar5);
      _objc_release(puVar5);
    }
    lVar4 = lVar6;
    func_0x00010c0e00e0(lVar6,param_4,&PTR____CFConstantStringClassReference_110f0bf18);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c1406e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_4,lVar4,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar4);
    puVar5 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar3);
    func_0x00010bf04440(param_3,param_4,puVar2,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  else if (1 < lVar1 - 4U) goto LAB_107b2e1d4;
  func_0x00010bfe2b40(*(undefined8 *)(param_3 + _DAT_11276a8c0));
LAB_107b2e1d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b2e1f0; end: 107b2e233; -[SCOperaLeftTapLayerViewController _checkLongPressValidation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2e1f0(double param_1,double param_2,long param_3)

{
  param_1 = param_1 - *(double *)(param_3 + _DAT_11276a8bc);
  param_2 = param_2 - ((double *)(param_3 + _DAT_11276a8bc))[1];
  if (1.0 < SQRT(param_2 * param_2 + param_1 * param_1)) {
                    /* WARNING: Could not recover jumptable at 0x00010c14c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + _DAT_11276a8c4),PTR_s_sc_cancel_112630c48);
    return;
  }
  return;
}



/* Entry: 107b2e234; end: 107b2e2cb; -[SCOperaLeftTapLayerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_107b2e234(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong in_x3;
  uint uVar4;
  
  _objc_retain(in_x3);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_opt_class(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    uVar2 = in_x3;
    func_0x00010c29bf00(in_x3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d6888;
    _objc_opt_class(PTR_PTR_1126d6888);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    _objc_release(uVar2);
    uVar4 = (uint)uVar3 ^ 1;
  }
  _objc_release(in_x3);
  return uVar4 & 1;
}



/* Entry: 107b2e2cc; end: 107b2e4db; -[SCOperaLeftTapLayerViewController gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b2e2cc(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  uVar2 = param_2;
  func_0x00010bf99b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c08ea60(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((uVar4 & 1) == 0) {
    uVar4 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6138;
    _objc_opt_class(PTR_PTR_1126b6138);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((uVar5 & 1) == 0) {
      lVar7 = (long)_DAT_11276a8c0;
      func_0x00010c09ef00(param_5);
      if (*(char *)(param_2 + (long)_DAT_11276a8b4) == '\x01') {
        uVar2 = param_5;
        dVar8 = param_1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
        _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        if ((uVar4 & 1) != 0) goto LAB_107b2e370;
        uVar4 = param_5;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
        _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        uVar6 = uVar5;
        _objc_opt_isKindOfClass(uVar5,puVar3);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar2);
        if ((uVar6 & 1) == 0) {
          func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
          _CGRectGetWidth();
          dVar9 = dVar8;
          func_0x00010bf46560(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2690e0();
          bVar1 = param_1 < dVar8 * dVar9;
          goto LAB_107b2e374;
        }
      }
    }
    bVar1 = false;
  }
  else {
LAB_107b2e370:
    param_2 = uVar2;
    bVar1 = false;
LAB_107b2e374:
    _objc_release(param_2);
  }
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 107b2e4dc; end: 107b2e5db; -[SCOperaLeftTapLayerViewController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_107b2e4dc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + _DAT_11276a8b8) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar4 = 1;
      goto LAB_107b2e5b8;
    }
  }
  puVar1 = PTR_DAT_1126a59c8;
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010010fab4(param_4,puVar1);
  uVar2 = param_4;
  if ((int)uVar3 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_4);
  puVar1 = PTR_DAT_1126a59d0;
  if (uVar2 == 0) {
    _objc_retain(param_4);
    uVar3 = param_4;
    func_0x00010010fab4(param_4,puVar1);
    _objc_release(param_4);
    uVar4 = 0;
    if (param_4 != 0) {
      uVar4 = (undefined4)uVar3;
    }
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar2);
LAB_107b2e5b8:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107b2e5dc; end: 107b2e64b; -[SCOperaLeftTapLayerViewController gestureDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2e5dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276a8c4);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110eae258);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b2e64c; end: 107b2e66b; -[SCOperaLeftTapLayerViewController delegateViewForGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2e64c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a8c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b2e66c; end: 107b2e6b7; -[SCOperaLeftTapLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2e66c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a8c8);
  _objc_storeStrong(param_1 + _DAT_11276a8c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a8c0,0);
  return;
}



/* Entry: 107b2e6b8; end: 107b2e95b; -[SCOperaLoadingLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2e6b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = (long)_DAT_11276a8cc;
  func_0x00010c160fc0(*(undefined8 *)(param_5 + lVar1),param_6,
                      &PTR____CFConstantStringClassReference_110eae278);
  puStack_68 = PTR_PTR_1126f9eb0;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  if (*(long *)(param_5 + _DAT_11276a8d0) == 0) {
    func_0x00010bf20c00(param_5);
    lVar2 = (long)_DAT_11276a8d4;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  }
  else if (*(long *)(param_5 + _DAT_11276a8d0) == 1) {
    func_0x00010bf20c00(param_5);
    dVar3 = param_1;
    _CGRectGetHeight();
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    param_1 = SQRT(param_1 * param_1 + dVar3 * dVar3);
    lVar2 = (long)_DAT_11276a8d4;
    func_0x00010c202c80(param_1,param_1,*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf20c00(param_5);
    _CGRectGetMidX();
    func_0x00010c17a840(*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf20c00(param_5);
    _CGRectGetMidY();
    func_0x00010c17a860(*(undefined8 *)(param_5 + lVar2));
  }
  else {
    lVar2 = (long)_DAT_11276a8d4;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276a8d8));
  func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010c202c80(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  func_0x00010c17a840(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a860(*(undefined8 *)(param_5 + lVar1));
  lVar2 = (long)_DAT_11276a8dc;
  func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010c202c80(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  func_0x00010c17a840(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a860(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf1fec0(*(undefined8 *)(param_5 + lVar1));
  dVar3 = param_1;
  func_0x00010bf1fec0(*(undefined8 *)(param_5 + lVar2));
  dVar3 = param_1 + dVar3 + 16.0;
  lVar1 = (long)_DAT_11276a8e0;
  func_0x00010c2172c0(dVar3,*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  func_0x00010c17a840(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  lVar1 = (long)_DAT_11276a8e4;
  func_0x00010c17a840(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a860(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  lVar2 = (long)_DAT_11276a8e8;
  func_0x00010c17a840(*(undefined8 *)(param_5 + lVar2));
  func_0x00010c274140(*(undefined8 *)(param_5 + lVar1));
  dVar3 = dVar3 + -16.0;
  func_0x00010c173440(dVar3,*(undefined8 *)(param_5 + lVar2));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar4 = dVar3 + -75.0;
  func_0x00010bf1fec0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010c19f0e0(dVar4,dVar3 + 16.0,0x4062c00000000000,0x4044000000000000,
                      *(undefined8 *)(param_5 + _DAT_11276a8ec));
  return;
}



/* Entry: 107b2e95c; end: 107b2ea2f; -[SCOperaLoadingLayerView setupBackgroundWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2e95c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276a8f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11276a8d4;
  lVar4 = *(long *)(param_1 + lVar3);
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    if (lVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      *(undefined **)(param_1 + lVar3) = puVar2;
      _objc_release(uVar1);
      func_0x00010c066fa0(param_1,param_2,*(undefined8 *)(param_1 + lVar3),0);
      func_0x00010beab080(param_1);
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar3),param_2,
                          *(undefined8 *)(param_1 + _DAT_11276a8d8));
      goto LAB_107b2ea1c;
    }
    func_0x00010c1a9f00(lVar4,param_2,param_3);
    lVar4 = *(long *)(param_1 + lVar3);
    uVar1 = 0;
  }
  func_0x00010c1a7f60(lVar4,param_2,uVar1);
LAB_107b2ea1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2ea30; end: 107b2eb5b; -[SCOperaLoadingLayerView setupViewForLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ea30(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c09d3c0();
  if (lVar1 == 1) {
    func_0x00010beadde0(param_1,param_2,param_3,param_4);
  }
  else {
    lVar1 = param_3;
    func_0x00010c09d3c0();
    if (lVar1 == 2) {
      lVar1 = param_3;
      func_0x00010bf98c20(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bf98fe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf98900(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beac6e0(param_1,param_2,lVar1,lVar2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  lVar1 = param_3;
  func_0x00010bf140e0();
  *(long *)(param_1 + _DAT_11276a8d0) = lVar1;
  func_0x00010beab080(param_1);
  lVar1 = param_3;
  func_0x00010bf802e0(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276a8d8),param_2,lVar1);
  func_0x00010c1cbe20(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2eb5c; end: 107b2ebb3; -[SCOperaLoadingLayerView showLoadingIndicator:] */

/* WARNING: Possible PIC construction at 0x000107b2eb7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b2eb80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2eb5c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11276a8cc),PTR_s_startAnimating_112671118);
    return;
  }
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11276a8cc));
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a8dc),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 107b2ebb4; end: 107b2ec47; -[SCOperaLoadingLayerView setProgressForProgressIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ebb4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = (long)_DAT_11276a8dc;
  dVar3 = param_1;
  func_0x00010c117720(*(undefined8 *)(param_2 + lVar1));
  _CACurrentMediaTime();
  lVar2 = (long)_DAT_11276a8f4;
  dVar5 = *(double *)(param_2 + lVar2);
  dVar4 = dVar3;
  func_0x000109128f04();
  if (ABS(dVar3 - dVar5) < dVar4) {
    return;
  }
  _CACurrentMediaTime();
  *(double *)(param_2 + lVar2) = dVar4;
                    /* WARNING: Could not recover jumptable at 0x00010c1e4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + lVar1),PTR_s_setProgress__112656bc8);
  return;
}



/* Entry: 107b2ec48; end: 107b2ec63; -[SCOperaLoadingLayerView resetProgressIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ec48(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11276a8f4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1097b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a8dc),PTR_s_prepareForReuse_112620008);
  return;
}



/* Entry: 107b2ec64; end: 107b2ed0f; -[SCOperaLoadingLayerView _setupLoadingViewWithLayer:page:] */

/* WARNING: Possible PIC construction at 0x000107b2ecd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b2ecf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b2ecd4) */
/* WARNING: Removing unreachable block (ram,0x000107b2ecf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ec64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010beadd60(param_1);
  func_0x00010beadd80(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a8e0),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 107b2ed10; end: 107b2ee57; -[SCOperaLoadingLayerView _setupLoadingSpinnerWithLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ed10(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  
  func_0x00010c09cca0();
  if (param_3 == 0) {
    piVar4 = (int *)&DAT_11276a8dc;
    lVar5 = (long)_DAT_11276a8cc;
    if (*(long *)(param_1 + lVar5) == 0) {
      puVar1 = PTR_PTR_1126d6890;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfffc60(puVar1,param_2,puVar2,0x65);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar1;
      _objc_release(uVar3);
      _objc_release(puVar2);
      func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
      piVar4 = (int *)&DAT_11276a8dc;
    }
  }
  else {
    if (param_3 != 2) {
      return;
    }
    piVar4 = (int *)&DAT_11276a8cc;
    lVar5 = (long)_DAT_11276a8dc;
    if (*(long *)(param_1 + lVar5) == 0) {
      puVar1 = PTR_PTR_1126d1388;
      func_0x00010c238fa0(PTR_PTR_1126d1388,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126d1380;
      _objc_alloc();
      func_0x00010c061ce0();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar2;
      _objc_release(uVar3);
      func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
      _objc_release(puVar1);
      piVar4 = (int *)&DAT_11276a8cc;
    }
  }
  lVar5 = (long)*piVar4;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107b2ee58; end: 107b2ef7b; -[SCOperaLoadingLayerView _setupLoadingSubTextWithLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ee58(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11276a8e0;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c2256c0(0x406f400000000000,lVar1);
  lVar1 = param_3;
  func_0x00010c260ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c260ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_release();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2ef7c; end: 107b2f04b; -[SCOperaLoadingLayerView _setupErrorViewWithHeader:subtext:buttonText:] */

/* WARNING: Possible PIC construction at 0x000107b2eff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107b2f014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b2eff8) */
/* WARNING: Removing unreachable block (ram,0x000107b2f018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ef7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010beac660(param_1);
  func_0x00010beac5e0(param_1);
  _objc_release(param_3);
  func_0x00010beac5a0(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a8e4),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 107b2f04c; end: 107b2f14f; -[SCOperaLoadingLayerView _setupErrorSubtext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2f04c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276a8e4;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c212f20(lVar1,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c2256c0(0x406f400000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2f150; end: 107b2f22b; -[SCOperaLoadingLayerView _setupErrorHeader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2f150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276a8e8;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c212f20(lVar1,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2f22c; end: 107b2f48b; -[SCOperaLoadingLayerView _setupErrorButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2f22c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276a8ec;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126af4f0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(uVar3);
    func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4),param_2,1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff8000000000000);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c271420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                        PTR_s__errorButtonPressed__112538538,0x40);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c216260(lVar1,param_2,param_3,0);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216380(uVar3,param_2,puVar2,0);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  if (*(long *)(param_1 + _DAT_11276a8f0) == 0) {
    puVar2 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216380(uVar3,param_2,puVar2,1);
  _objc_release(puVar2);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar4),param_2,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e480(uVar3,param_2,puVar2,1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1732a0(uVar3,param_2,puVar2,0);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1732a0(uVar3,param_2,puVar2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b2f48c; end: 107b2f4e7; -[SCOperaLoadingLayerView _errorButtonPressed:] */

void FUN_107b2f48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d140();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b2f4e8; end: 107b2f56f; -[SCOperaLoadingLayerView _setupBlurredEffectView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2f4e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276a8d8;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010c00ee20();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b2f570; end: 107b2f58f; -[SCOperaLoadingLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2f570(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a8f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b2f590; end: 107b2f5a3; -[SCOperaLoadingLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2f590(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a8f8,param_3);
  return;
}



/* Entry: 107b2f5a4; end: 107b2f65f; -[SCOperaLoadingLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2f5a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a8f8);
  _objc_storeStrong(param_1 + _DAT_11276a8d8,0);
  _objc_storeStrong(param_1 + _DAT_11276a8d4,0);
  _objc_storeStrong(param_1 + _DAT_11276a8f0,0);
  _objc_storeStrong(param_1 + _DAT_11276a8ec,0);
  _objc_storeStrong(param_1 + _DAT_11276a8e4,0);
  _objc_storeStrong(param_1 + _DAT_11276a8e8,0);
  _objc_storeStrong(param_1 + _DAT_11276a8e0,0);
  _objc_storeStrong(param_1 + _DAT_11276a8dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a8cc,0);
  return;
}



/* Entry: 107b2f660; end: 107b2f663; -[SCOperaLoadingLayerViewController didTryPagingWhenPagingDisabled:] */

void FUN_107b2f660(void)

{
  return;
}



/* Entry: 107b2f664; end: 107b2f67b; -[SCOperaLoadingLayerViewController isBlocking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107b2f664(long param_1)

{
  return (*(byte *)(param_1 + _DAT_11276a8fc) ^ 0xff) & 1;
}



/* Entry: 107b2f67c; end: 107b2f68b; -[SCOperaLoadingLayerViewController isBeingDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b2f67c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a8fc);
}



/* Entry: 107b2f68c; end: 107b2f693; -[SCOperaLoadingLayerViewController shouldBlockOtherLayersFromDisplayingWithCurrentPage:] */

undefined8 FUN_107b2f68c(void)

{
  return 1;
}



/* Entry: 107b2f694; end: 107b2f83b; -[SCOperaLoadingLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107b2f694(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  if ((int)uVar2 == 0) {
    uVar2 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01b40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (param_1 != 0.0) {
      uVar1 = param_2;
      func_0x00010c0ea360();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf461c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf91000();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar4 & 1) == 0) {
        if (param_4 == 5) {
          uVar1 = param_2;
          func_0x00010c08c0e0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bf920a0();
          _objc_release(uVar1);
          if ((uVar2 & 1) != 0) {
            return 0;
          }
        }
        uVar1 = param_2;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf80da0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf4b900(uVar2,param_3,puVar5);
        _objc_release(puVar5);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)uVar3 != 0) {
          func_0x00010befa560(param_2,param_3,&PTR____CFConstantStringClassReference_110eae298);
          return 1;
        }
      }
      return 0;
    }
  }
  else {
    _objc_release(uVar1);
  }
  return 0xffffffffffffffff;
}



/* Entry: 107b2f83c; end: 107b2fb5f; -[SCOperaLoadingLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2f83c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09d3c0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010c09d3c0();
    if (lVar1 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276a900));
    }
    else {
      func_0x00010be35900(param_1);
    }
  }
  else {
    lVar6 = (long)_DAT_11276a900;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar6));
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf61900();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
      _objc_release(puVar3);
    }
    else {
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf14100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010c228520(*(undefined8 *)(param_1 + lVar6));
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      lVar1 = param_1;
      func_0x00010bfe8840(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf14100();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010bfe78a0(lVar1);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c229940(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c09d3c0();
    _objc_release(lVar1);
    if (lVar2 == 2) {
      puVar3 = PTR_PTR_1126c95c8;
      func_0x00010bf98f20(PTR_PTR_1126c95c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04420(param_1);
      _objc_release(puVar3);
    }
  }
  func_0x00010bedae00(param_1);
  func_0x00010bedae40(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b2fb60; end: 107b2fbbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2fb60(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c228520(*(undefined8 *)(param_1 + _DAT_11276a900));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b2fbbc; end: 107b2fbff; -[SCOperaLoadingLayerViewController dealloc] */

void FUN_107b2fbbc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be93220();
  puStack_28 = PTR_PTR_1126f9eb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b2fc00; end: 107b2fd97; -[SCOperaLoadingLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2fc00(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126d6898;
  _objc_alloc();
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(uVar9,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar8 = (long)_DAT_11276a900;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar8),param_2,param_1);
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08c520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdb4e0();
  if ((int)uVar3 != 0) {
    uVar3 = param_1;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf8fc40();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar6 & 1) != 0) {
      return;
    }
    uVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a1a0();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar9);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b2fd98; end: 107b2fdf7; -[SCOperaLoadingLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2fd98(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9eb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  *(undefined1 *)(param_1 + _DAT_11276a904) = 1;
  func_0x00010bedae00(param_1);
  func_0x00010bedae40(param_1);
  return;
}



/* Entry: 107b2fdf8; end: 107b2fe4b; -[SCOperaLoadingLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2fdf8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9eb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  *(undefined1 *)(param_1 + _DAT_11276a904) = 0;
  func_0x00010be940a0(param_1);
  return;
}



/* Entry: 107b2fe4c; end: 107b2fecb; -[SCOperaLoadingLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2fe4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  *(undefined1 *)(param_1 + _DAT_11276a904) = 0;
  lVar1 = (long)_DAT_11276a900;
  func_0x00010c228520(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c139400(*(undefined8 *)(param_1 + lVar1));
  func_0x00010bedae00(param_1);
  func_0x00010be93220(param_1);
  func_0x00010be940a0(param_1);
  puStack_28 = PTR_PTR_1126f9eb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  return;
}



/* Entry: 107b2fecc; end: 107b2fedf; -[SCOperaLoadingLayerViewController setupPlaybackAnalyticsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2fecc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a908,param_3);
  return;
}



/* Entry: 107b2fee0; end: 107b2ff23; -[SCOperaLoadingLayerViewController _resetTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2fee0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276a90c;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b2ff24; end: 107b300cf; -[SCOperaLoadingLayerViewController _updateLoadingIndicatorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b2ff24(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09d3c0();
  if (lVar3 == 1) {
    cVar1 = *(char *)(param_1 + _DAT_11276a904);
    _objc_release(lVar2);
    if (cVar1 == '\x01') {
      lVar2 = param_1 + _DAT_11276a908;
      _objc_loadWeakRetained(lVar2);
      lVar3 = param_1;
      func_0x00010c0eaa40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a460(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_initWeak(auStack_38,param_1);
      puVar4 = PTR_PTR_1126ae888;
      _objc_alloc();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0522e0(0x3fe0000000000000);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11276a90c);
      *(undefined **)(param_1 + _DAT_11276a90c) = puVar4;
      _objc_release(uVar5);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      return;
    }
  }
  else {
    _objc_release(lVar2);
  }
  func_0x00010be940a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be358f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideLoadingIndicator_11256afd8);
  return;
}



/* Entry: 107b300d0; end: 107b300fb;  */

void FUN_107b300d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb99a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b300fc; end: 107b3018b; -[SCOperaLoadingLayerViewController _showLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b300fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eae2b8);
  lVar1 = param_1 + _DAT_11276a910;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09cf00(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c238170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a900),PTR_s_showLoadingIndicator__11266ba80,1);
  return;
}



/* Entry: 107b3018c; end: 107b3021b; -[SCOperaLoadingLayerViewController _hideLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3018c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010befa560(param_1,param_2,&PTR____CFConstantStringClassReference_110eae2d8);
  lVar1 = param_1 + _DAT_11276a910;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09cee0(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c238170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a900),PTR_s_showLoadingIndicator__11266ba80,0);
  return;
}



/* Entry: 107b3021c; end: 107b30363; -[SCOperaLoadingLayerViewController _hideLoadingLayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3021c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107b30364;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock();
  lVar2 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0f13e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((int)lVar4 != 0) {
    *(undefined1 *)(param_1 + _DAT_11276a8fc) = 1;
    func_0x00010bf1d9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1da00();
    _objc_release(param_1);
  }
  (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107b30364; end: 107b303d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30364(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11276a8fc) = 0;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276a900),param_2,1);
    lVar1 = param_1;
    func_0x00010bf1d9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1da20();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b303d4; end: 107b304d7; -[SCOperaLoadingLayerViewController _updateLoadingProgressMonitingStateIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b303d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09cca0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c09d3c0();
    _objc_release(lVar1);
    if (lVar2 == 1) {
      if (*(char *)(param_1 + _DAT_11276a904) != '\x01') {
        return;
      }
      lVar1 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c117a00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec0680(param_1);
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be93230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetLoadingProgressMonitor_112582628);
  return;
}



/* Entry: 107b304d8; end: 107b3057b; -[SCOperaLoadingLayerViewController _resetLoadingProgressMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b304d8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276a914;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11276a918;
  if (*(long *)(param_1 + lVar4) != 0) {
    lVar2 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c09d260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256c40();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + _DAT_11276a91c) = 0;
  return;
}



/* Entry: 107b3057c; end: 107b306af; -[SCOperaLoadingLayerViewController _startMonitoringProgressUpdateIfNeededWithRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3057c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_11276a91c) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11276a91c) = 1;
    lVar2 = (long)_DAT_11276a918;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c09d260();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c251280(lVar2);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b306b0; end: 107b3070f;  */

void FUN_107b306b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010be82f80(param_1,param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b30710; end: 107b307bb; -[SCOperaLoadingLayerViewController _progressUpdateHandlerWithProgress:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b30710(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  if (*(char *)(param_2 + _DAT_11276a91c) == '\x01') {
    if (param_4 == 0) {
      func_0x00010c1e4780(param_1,*(undefined8 *)(param_2 + _DAT_11276a900));
    }
    else {
      func_0x00010be93220(param_2);
      func_0x00010be9b660(param_2);
      puVar1 = PTR_PTR_1126c95c8;
      func_0x00010c09cce0(PTR_PTR_1126c95c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04420(param_2,param_3,puVar1);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b307bc; end: 107b308bf; -[SCOperaLoadingLayerViewController _scheduleRetryForProgressMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b307bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae888;
  _objc_alloc();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0522e0(0x3fe0000000000000);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a914);
  *(undefined **)(param_1 + _DAT_11276a914) = puVar1;
  _objc_release(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}


