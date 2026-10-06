/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dc0bf0; end: 107dc0c3f; -[SCOperaRotatingVideoLayerViewController _player] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc0bf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f2e4);
  func_0x00010c100fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107dc0c40; end: 107dc0daf; -[SCOperaRotatingVideoLayerViewController videoAsset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc0c40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11276f314;
  lVar6 = *(long *)(param_1 + lVar7);
  if (lVar6 == 0) {
    lVar6 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    lVar6 = param_1;
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010c299240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf0b380();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c2991c0(lVar1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_1 + _DAT_11276f2d8;
      _objc_loadWeakRetained();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c0eaa40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf0ba00(lVar1,param_2,lVar2,lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar1);
    lVar6 = *(long *)(param_1 + lVar7);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 107dc0db0; end: 107dc0e3b; -[SCOperaRotatingVideoLayerViewController _fadeInControls] */

void FUN_107dc0db0(undefined8 param_1,undefined8 param_2)

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
  pcStack_28 = FUN_107dc0e3c;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107dc0e80;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_38,
                      &puStack_60);
  return;
}



/* Entry: 107dc0e3c; end: 107dc0e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc0e3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276f2e4);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc0e80; end: 107dc0e87;  */

void FUN_107dc0e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupControlsFadeTimer_1125888e8);
  return;
}



/* Entry: 107dc0e88; end: 107dc0e8f; -[SCOperaRotatingVideoLayerViewController _fadeOutControls] */

void FUN_107dc0e88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeOutControlsWithCompletion__112561198,0);
  return;
}



/* Entry: 107dc0e90; end: 107dc0f53; -[SCOperaRotatingVideoLayerViewController _fadeOutControlsWithCompletion:] */

void FUN_107dc0e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107dc0f54;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107dc0f98;
  puStack_68 = &UNK_110842508;
  uStack_60 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fc999999999999a,0,puVar1,param_2,4,&puStack_58,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 107dc0f54; end: 107dc0f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc0f54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276f2e4);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc0f98; end: 107dc0fab;  */

void FUN_107dc0f98(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107dc0fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107dc0fac; end: 107dc105f; -[SCOperaRotatingVideoLayerViewController _setupControlsFadeTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc0fac(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276f354;
  func_0x00010c069d00(*(undefined8 *)(param_2 + lVar4));
  lVar1 = param_2;
  func_0x00010be74f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fdc0();
  _objc_release(lVar1);
  if (0.0 < param_1) {
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x4008000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_3,param_2,
                        PTR_s__fadeOutControls_112561190,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    *(undefined **)(param_2 + lVar4) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 107dc1060; end: 107dc1063; -[SCOperaRotatingVideoLayerViewController _setupMediaLoggerTimer] */

void FUN_107dc1060(void)

{
  return;
}



/* Entry: 107dc1064; end: 107dc1067; -[SCOperaRotatingVideoLayerViewController handleTap:] */

void FUN_107dc1064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beccfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleVideoControlsView_112590d90);
  return;
}



/* Entry: 107dc1068; end: 107dc10d3; -[SCOperaRotatingVideoLayerViewController _toggleVideoControlsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1068(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276f2e4);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40();
  _objc_release(uVar1);
  if (param_1 == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0def0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__fadeInControls_112561158);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__fadeOutControls_112561190);
  return;
}



/* Entry: 107dc10d4; end: 107dc113f; -[SCOperaRotatingVideoLayerViewController videoControlsView:didToggleVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc10d4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_4 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
  func_0x00010c2241a0(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f2e4);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272600();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupControlsFadeTimer_1125888e8);
  return;
}



/* Entry: 107dc1140; end: 107dc1143; -[SCOperaRotatingVideoLayerViewController videoControlsView:didToggleCaption:] */

void FUN_107dc1140(void)

{
  return;
}



/* Entry: 107dc1144; end: 107dc118f; -[SCOperaRotatingVideoLayerViewController videoControlsView:didToggleRotateLeft:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1144(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_4 != 0) {
    uVar1 = 4;
  }
  if (1 < *(long *)(param_1 + _DAT_11276f2c4) - 1U) {
    uVar1 = 1;
  }
  func_0x00010bea8440(param_1,param_2,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupControlsFadeTimer_1125888e8);
  return;
}



/* Entry: 107dc1190; end: 107dc1193; -[SCOperaRotatingVideoLayerViewController videoControlsView:didToggleControlsVisibility:] */

void FUN_107dc1190(void)

{
  return;
}



/* Entry: 107dc1194; end: 107dc132f; -[SCOperaRotatingVideoLayerViewController _setTargetOrientation:andRotateView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1194(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = (long)_DAT_11276f2c4;
  if (*(long *)(param_1 + lVar3) != param_3) {
    if (param_3 - 3U < 2) {
      if (param_3 == 4) {
        uVar4 = 0xbff921fb54442d18;
      }
      else {
        uVar4 = 0x3ff921fb54442d18;
      }
      _CGAffineTransformMakeRotation(&uStack_60,uVar4);
    }
    else {
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    *(long *)(param_1 + lVar3) = param_3;
    func_0x00010beabd00(param_1);
    if ((*(long *)(param_1 + lVar3) != 3) && (*(long *)(param_1 + lVar3) == 1)) {
      puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
      func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ed100();
      _objc_release(puVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276f2e4);
    func_0x00010bf50040(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272b60();
    _objc_release(uVar4);
    if (param_4 != 0) {
      lVar3 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010c27a460(&uStack_90,lVar3);
      }
      uStack_b8 = uStack_58;
      uStack_c0 = uStack_60;
      uStack_a8 = uStack_48;
      uStack_b0 = uStack_50;
      uStack_98 = uStack_38;
      uStack_a0 = uStack_40;
      puVar2 = &uStack_90;
      _CGAffineTransformEqualToTransform(puVar2,&uStack_c0);
      _objc_release(lVar3);
      if (((ulong)puVar2 & 1) == 0) {
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        uStack_78 = uStack_48;
        uStack_80 = uStack_50;
        uStack_68 = uStack_38;
        uStack_70 = uStack_40;
        func_0x00010be977e0(param_1);
      }
    }
  }
  return;
}



/* Entry: 107dc1330; end: 107dc149f; -[SCOperaRotatingVideoLayerViewController _rotateVideoWithTransform:] */

void FUN_107dc1330(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  uVar2 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar3 = param_1;
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  dVar4 = dVar3;
  _objc_release(uVar2);
  if (dVar3 <= param_1) {
    dVar3 = param_1;
  }
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar5 = dVar4;
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(uVar2);
  if (dVar5 <= dVar4) {
    dVar4 = dVar5;
  }
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_68 = param_4[3];
  uStack_70 = param_4[2];
  uStack_58 = param_4[5];
  uStack_60 = param_4[4];
  iVar1 = (int)&uStack_80;
  _CGAffineTransformIsIdentity();
  uStack_e0 = 0xc2000000;
  dStack_b8 = dVar3;
  if (iVar1 == 0) {
    dStack_b8 = dVar4;
  }
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  dStack_c0 = dVar4;
  if (iVar1 == 0) {
    dStack_c0 = dVar3;
  }
  pcStack_d8 = FUN_107dc14a0;
  puStack_d0 = &UNK_1109fe8c8;
  uStack_a8 = param_4[1];
  uStack_b0 = *param_4;
  uStack_98 = param_4[3];
  uStack_a0 = param_4[2];
  uStack_88 = param_4[5];
  uStack_90 = param_4[4];
  uStack_c8 = param_2;
  func_0x00010bf03420(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_e8,0);
  return;
}



/* Entry: 107dc14a0; end: 107dc1583;  */

void FUN_107dc14a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 107dc1584; end: 107dc16b7;  */

void FUN_107dc1584(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  FUN_107dc16b8();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dc16b8; end: 107dc1707;  */

void FUN_107dc16b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = in_stack_00000008;
  uStack_30 = in_stack_00000000;
  func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_30,"{CGSize=dd}");
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dc1708; end: 107dc1743; -[SCOperaRotatingVideoLayerViewController videoControlsView:didTogglePlay:] */

void FUN_107dc1708(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    func_0x00010c13d1c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be0dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeOutControls_112561190);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 107dc1744; end: 107dc174f; -[SCOperaRotatingVideoLayerViewController videoControlsViewDidBeginSeeking:pauseOnSeek:] */

void FUN_107dc1744(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pause_11261b0e8);
    return;
  }
  return;
}



/* Entry: 107dc1750; end: 107dc1753; -[SCOperaRotatingVideoLayerViewController videoControlsSeekingProgressDidUpdate:seekingTargetTime:] */

void FUN_107dc1750(void)

{
  return;
}



/* Entry: 107dc1754; end: 107dc177f; -[SCOperaRotatingVideoLayerViewController videoControlsView:didEndSeekingWithPlayButtonToggled:] */

void FUN_107dc1754(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    func_0x00010c13d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010be0dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeOutControls_112561190);
    return;
  }
  return;
}



/* Entry: 107dc1780; end: 107dc17cf; -[SCOperaRotatingVideoLayerViewController videoControlsViewDidPressExit:] */

void FUN_107dc1780(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107dc17d0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010be0dfe0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 107dc17d0; end: 107dc1813;  */

void FUN_107dc17d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107dc1814; end: 107dc1817; -[SCOperaRotatingVideoLayerViewController videoControlsView:didSeekToTime:reason:seekingToleranceDisabled:] */

void FUN_107dc1814(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c157270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_seekToTime__1126336b8);
  return;
}



/* Entry: 107dc1818; end: 107dc181b; -[SCOperaRotatingVideoLayerViewController videoControlsViewDidPressShowActionMenuButton:] */

void FUN_107dc1818(void)

{
  return;
}



/* Entry: 107dc181c; end: 107dc181f; -[SCOperaRotatingVideoLayerViewController videoControlsViewDidPressSendButton:] */

void FUN_107dc181c(void)

{
  return;
}



/* Entry: 107dc1820; end: 107dc18cb; -[SCOperaRotatingVideoLayerViewController seekToMediaStartTimeWithCompletion:] */

void FUN_107dc1820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6880();
  _CMTimeMakeWithSeconds(auStack_58,0x3f847ae147ae147b,600);
  _CMTimeMakeWithSeconds(auStack_70,0x3fb999999999999a,600);
  func_0x00010c1572e0(param_1,param_2,param_3,auStack_58,auStack_70,param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 107dc18cc; end: 107dc1913; -[SCOperaRotatingVideoLayerViewController seekToTime:] */

void FUN_107dc18cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_48 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
  uStack_50 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
  uStack_40 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
  uStack_30 = uStack_50;
  uStack_28 = uStack_48;
  uStack_20 = uStack_40;
  func_0x00010c1572e0(param_1,param_2,&uStack_30,&uStack_50,0);
  return;
}



/* Entry: 107dc1914; end: 107dc1af7; -[SCOperaRotatingVideoLayerViewController seekToTime:toleranceBefore:toleranceAfter:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1914(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x4;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  
  _objc_retain(in_x4);
  *(undefined1 *)(param_2 + _DAT_11276f2c8) = 1;
  _objc_initWeak(auStack_58,param_2);
  lVar1 = param_2;
  func_0x00010be74f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _CMTimeMakeWithSeconds(auStack_70,param_1,600);
  _objc_copyWeak(auStack_80,auStack_58);
  uStack_78 = param_1;
  _objc_retain(in_x4);
  func_0x00010c157300(lVar1);
  puVar2 = PTR_PTR_1126c9aa8;
  func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eaa40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa540(puVar2);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(in_x4);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(in_x4);
  return;
}



/* Entry: 107dc1af8; end: 107dc1ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1af8(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_11276f2c8) = 0;
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11276f2e4);
    func_0x00010bf50040(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befd900(*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar2);
    lVar3 = lVar1;
    func_0x00010c117a40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34e20(*(undefined8 *)(param_1 + 0x30));
    _objc_release(lVar3);
    if ((param_2 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dc1ba4; end: 107dc1bef; -[SCOperaRotatingVideoLayerViewController setProgress:forIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1ba4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276f2e4);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befd900(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc1bf0; end: 107dc1cb7; -[SCOperaRotatingVideoLayerViewController operaRotatingLayerPinchController:didFinishPinchWithScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1bf0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  lVar2 = (long)_DAT_11276f35c;
  dVar6 = *(double *)(param_1 + lVar2);
  if (dVar6 == 0.0) {
    func_0x00010beed820(*(undefined8 *)(param_1 + _DAT_11276f2bc));
    *(double *)(param_1 + lVar2) = dVar6;
  }
  lVar5 = (long)_DAT_11276f330;
  func_0x00010c075560(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010c08f5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e520();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276f32c);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f2d4);
  func_0x00010bf60aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141a80();
  FUN_107dbaf3c(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc1cb8; end: 107dc1dc7; -[SCOperaRotatingVideoLayerViewController operaRotatingLayerPinchController:updateTransformWithScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c28ac00(*(undefined8 *)(param_4 + _DAT_11276f32c));
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0fc2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940();
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c232cc0();
  if ((int)puVar2 != 0) {
    lVar6 = (long)_DAT_11276f32c;
    lVar5 = *(long *)(puVar3 + lVar6);
    func_0x00010c0b8420();
    _objc_release(puVar1);
    if (lVar5 == 4) {
      return;
    }
    lVar5 = *(long *)(puVar3 + lVar6);
    func_0x00010c0b8420();
    if (0xfffffffffffffffc < lVar5 - 6U) {
      uVar4 = *(ulong *)(puVar3 + _DAT_11276f330);
      func_0x00010c0fc340();
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
    if (puVar3[_DAT_11276f34c] == '\x01') {
      lVar5 = *(long *)(puVar3 + lVar6);
      func_0x00010c0b8420();
      if (0xfffffffffffffffc < lVar5 - 6U) {
        return;
      }
    }
    func_0x00010c28ac40(param_2,param_3,*(undefined8 *)(puVar3 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010c28ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(puVar3 + lVar6),
               PTR_s_updateTargetViewWithRotation_ani_112680530,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107dc1dc8; end: 107dc1ee3; -[SCOperaRotatingVideoLayerViewController motionManagerDidUpdateRotation:translation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c232cc0();
  if ((int)lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  lVar4 = (long)_DAT_11276f32c;
  lVar1 = *(long *)(param_4 + lVar4);
  func_0x00010c0b8420();
  _objc_release(lVar2);
  if (lVar1 != 4) {
    lVar2 = *(long *)(param_4 + lVar4);
    func_0x00010c0b8420();
    if (0xfffffffffffffffc < lVar2 - 6U) {
      uVar3 = *(ulong *)(param_4 + _DAT_11276f330);
      func_0x00010c0fc340();
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    if (*(char *)(param_4 + _DAT_11276f34c) == '\x01') {
      lVar2 = *(long *)(param_4 + lVar4);
      func_0x00010c0b8420();
      if (0xfffffffffffffffc < lVar2 - 6U) {
        return;
      }
    }
    func_0x00010c28ac40(param_2,param_3,*(undefined8 *)(param_4 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c28ac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(param_4 + lVar4),
               PTR_s_updateTargetViewWithRotation_ani_112680530,1);
    return;
  }
  return;
}



/* Entry: 107dc1ee4; end: 107dc1ee7; -[SCOperaRotatingVideoLayerViewController videoControlsViewCurrentTime:] */

void FUN_107dc1ee4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__currentTime_11255b670);
  return;
}



/* Entry: 107dc1ee8; end: 107dc1eeb; -[SCOperaRotatingVideoLayerViewController videoControlsViewDuration:] */

void FUN_107dc1ee8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be06ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__duration_11255f450);
  return;
}



/* Entry: 107dc1eec; end: 107dc1f63; -[SCOperaRotatingVideoLayerViewController _currentTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1eec(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + _DAT_11276f2e4);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010bf60480(param_1,lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dc1f64; end: 107dc1fdb; -[SCOperaRotatingVideoLayerViewController _duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1f64(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + _DAT_11276f2e4);
  func_0x00010c100fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x00010bf8b160(param_1,lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dc1fdc; end: 107dc2053; -[SCOperaRotatingVideoLayerViewController movingViewsForFadeTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc1fdc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + _DAT_11276f2f4) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276f330);
    func_0x00010c075560();
    if (iVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
      func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      goto LAB_107dc2044;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_107dc2044:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107dc2054; end: 107dc205b; -[SCOperaRotatingVideoLayerViewController fadingViewsForFadeTransition] */

undefined8 FUN_107dc2054(void)

{
  return 0;
}



/* Entry: 107dc205c; end: 107dc20c7; -[SCOperaRotatingVideoLayerViewController _sendMediaFailsToDisplayEvent] */

void FUN_107dc205c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c4dc0(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107dc20c8; end: 107dc232f; -[SCOperaRotatingVideoLayerViewController _playbackFailedWithError:failureType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc20c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = (long)_DAT_11276f30c;
  lVar7 = (long)_DAT_11276f310;
  bVar2 = *(byte *)(param_1 + lVar7);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _objc_release(uVar3);
  lVar9 = (long)_DAT_11276f308;
  *(undefined8 *)(param_1 + lVar9) = param_4;
  *(undefined1 *)(param_1 + lVar7) = 1;
  lVar7 = param_1 + _DAT_11276f2d8;
  _objc_loadWeakRetained();
  lVar4 = lVar7;
  func_0x00010c0c6680();
  _objc_release(lVar7);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)lVar4 != 0) {
    puVar5 = PTR_PTR_1126ba158;
    func_0x00010bf87dc0(PTR_PTR_1126ba158);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar6,param_2,puVar5,100,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar7 = *(long *)(param_1 + lVar1);
    if (lVar7 == 0) {
      _objc_retain(puVar6);
      lVar7 = *(long *)(param_1 + lVar1);
      *(undefined **)(param_1 + lVar1) = puVar6;
    }
    else {
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010bf3ec40(uVar3);
      uStack_78 = *(undefined8 *)PTR__NSUnderlyingErrorKey_110345660;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1)
      ;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar5,param_2,lVar7,uVar3,puVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      *(undefined **)(param_1 + lVar1) = puVar5;
      _objc_release(uVar3);
      _objc_release(puVar8);
    }
    _objc_release(lVar7);
    *(undefined8 *)(param_1 + lVar9) = 3;
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126b2638;
  func_0x00010c29a1a0(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar6);
  _objc_release(puVar6);
  lVar7 = *(long *)(param_1 + lVar9);
  if (lVar7 - 1U < 2 || lVar7 == 4) {
    lVar7 = *(long *)(param_1 + lVar1);
    func_0x00010bf3ec40();
    if ((lVar7 == -0x2e2d) && ((bVar2 & 1) == 0)) {
      func_0x00010be953c0(param_1,param_2,0);
      goto LAB_107dc22ec;
    }
    func_0x00010becade0(param_1);
  }
  else if (lVar7 != 3) goto LAB_107dc22ec;
  func_0x00010be9f6e0(param_1);
LAB_107dc22ec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(param_3 + _DAT_11276f308) = 0;
  uVar3 = *(undefined8 *)(param_3 + _DAT_11276f30c);
  *(undefined8 *)(param_3 + _DAT_11276f30c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107dc2330; end: 107dc2353; -[SCOperaRotatingVideoLayerViewController _clearPlaybackErrorTrackingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc2330(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_11276f308) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f30c);
  *(undefined8 *)(param_1 + _DAT_11276f30c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc2354; end: 107dc24a7; -[SCOperaRotatingVideoLayerViewController _observePlayerViewForStreamingIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc2354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25c720();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11276f2b8);
    uVar3 = param_3;
    func_0x00010c100720(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0e0780(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107dc24a8; end: 107dc26eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc24a8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010bedada0(param_2);
    uVar6 = *(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510;
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_3,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067ec0();
    if ((int)uVar2 == 0) {
      uVar2 = param_5;
      func_0x00010c0e00e0(param_5,param_3,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c067ec0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 == 1) {
        lVar7 = (long)_DAT_11276f2bc;
        uVar4 = *(ulong *)(param_2 + lVar7);
        func_0x00010c07cd60();
        if (((uVar4 & 1) == 0) &&
           (func_0x00010beed820(*(undefined8 *)(param_2 + lVar7)), 0.0 < param_1)) {
          func_0x00010c24d960(*(undefined8 *)(param_2 + lVar7));
          lVar7 = param_2 + _DAT_11276f2fc;
          _objc_loadWeakRetained(lVar7);
          lVar5 = param_2;
          func_0x00010c0eaa40(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07a460(lVar7,param_3,lVar5,1);
          _objc_release(lVar5);
          _objc_release(lVar7);
        }
        func_0x00010be75060(param_2,param_3,param_4);
        goto LAB_107dc26c0;
      }
    }
    else {
      _objc_release(uVar1);
    }
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_3,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067ec0();
    if ((int)uVar2 == 1) {
      uVar2 = param_5;
      func_0x00010c0e00e0(param_5,param_3,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c067ec0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar6 == 0) {
        func_0x00010c0f5b20(*(undefined8 *)(param_2 + _DAT_11276f2bc));
        lVar7 = param_2 + _DAT_11276f2fc;
        _objc_loadWeakRetained(lVar7);
        lVar5 = param_2;
        func_0x00010c0eaa40(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07a460(lVar7,param_3,lVar5,0);
        _objc_release(lVar5);
        _objc_release(lVar7);
        func_0x00010be75080(param_2,param_3,param_4);
      }
    }
    else {
      _objc_release(uVar1);
    }
  }
LAB_107dc26c0:
  _objc_release(param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107dc26ec; end: 107dc2797; -[SCOperaRotatingVideoLayerViewController _resumeForBufferStatusChangeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc26ec(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + (long)_DAT_11276f344) == '\x01') {
    uVar2 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c14d400();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_11276f2f8);
      func_0x00010bfd6e20();
      if (iVar1 != 0) {
        uVar2 = param_1;
        func_0x00010be74f60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c14d3c0();
        _objc_release(uVar2);
        if ((int)uVar3 == 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resume_11262ce90);
      return;
    }
  }
  return;
}



/* Entry: 107dc2798; end: 107dc2837; -[SCOperaRotatingVideoLayerViewController _playerDidStall:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc2798(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_11276f344) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276f2f8);
    if (param_3 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf60480(&uStack_48,param_3);
    }
    _CMTimeGetSeconds(&uStack_48);
    func_0x00010bf7ba20(uVar1);
    func_0x00010bf73680(*(undefined8 *)(param_1 + _DAT_11276f340),param_2,1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107dc2838; end: 107dc2873; -[SCOperaRotatingVideoLayerViewController _playerDidResumeFromStall:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc2838(long param_1)

{
  func_0x00010bf7bd40(*(undefined8 *)(param_1 + _DAT_11276f2f8));
                    /* WARNING: Could not recover jumptable at 0x00010bf73690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f340),PTR_s_didChangeState__1125ba748,0);
  return;
}



/* Entry: 107dc2874; end: 107dc2983; -[SCOperaRotatingVideoLayerViewController _updateLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc2874(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25c720();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010be74f60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c14d400();
    _objc_release(lVar1);
    lVar3 = *(long *)(param_1 + _DAT_11276f2e4);
    func_0x00010c100fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c100ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c252d60();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if (lVar4 == 0) {
      bVar5 = *(byte *)(param_1 + _DAT_11276f2e0);
    }
    else {
      bVar5 = 0;
    }
    uVar6 = (uint)lVar2;
    if (lVar4 == 2) {
      uVar6 = 1;
    }
    if ((uVar6 & 1) == 0) {
      bVar5 = *(byte *)(param_1 + _DAT_11276f344) | bVar5;
    }
    else {
      bVar5 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010be08d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__enableLoadingIndicator__11255fd00,bVar5 & 1);
    return;
  }
  return;
}



/* Entry: 107dc2984; end: 107dc2af7; -[SCOperaRotatingVideoLayerViewController _enableLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc2984(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c25c720();
  if ((int)lVar8 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + _DAT_11276f2f4);
    _objc_release();
    if ((bVar1 & 1) != 0) {
      lVar8 = (long)_DAT_11276f364;
      if (*(byte *)(param_1 + lVar8) != param_3) {
        *(char *)(param_1 + lVar8) = (char)param_3;
        lVar2 = param_1;
        func_0x00010c118dc0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126c7d68;
        func_0x00010bf90b00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_48 = puVar3;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                            *(undefined1 *)(param_1 + lVar8));
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_40 = puVar4;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&puStack_48
                            ,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf7e940(lVar2,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release();
      }
    }
    lVar8 = lVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(lVar8 + _DAT_11276f2e4);
  func_0x00010c100fe0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  lVar2 = lVar8;
  func_0x00010c08c0e0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c720();
  func_0x00010bf88860(*(undefined8 *)(lVar8 + _DAT_11276f2dc));
  lVar9 = (long)_DAT_11276f2f8;
  func_0x00010bfd6e40(*(undefined8 *)(lVar8 + lVar9));
  uVar6 = *(undefined8 *)(lVar8 + lVar9);
  func_0x00010bf60c40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  _objc_retain(PTR____NSDictionary0__struct_11034ab58);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107dc2af8; end: 107dc2bc3; -[SCOperaRotatingVideoLayerViewController mediaLog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc2af8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276f2e4);
  func_0x00010c100fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c100ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c720();
  func_0x00010bf88860(*(undefined8 *)(param_1 + _DAT_11276f2dc));
  lVar5 = (long)_DAT_11276f2f8;
  func_0x00010bfd6e40(*(undefined8 *)(param_1 + lVar5));
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf60c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  _objc_retain(PTR____NSDictionary0__struct_11034ab58);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc2bc4; end: 107dc2be3; -[SCOperaRotatingVideoLayerViewController pinchGestureTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc2bc4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276f338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dc2be4; end: 107dc2d67; -[SCOperaRotatingVideoLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc2be4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276f338);
  _objc_destroyWeak(param_1 + _DAT_11276f2fc);
  _objc_storeStrong(param_1 + _DAT_11276f340,0);
  _objc_storeStrong(param_1 + _DAT_11276f2dc,0);
  _objc_destroyWeak(param_1 + _DAT_11276f2d8);
  _objc_storeStrong(param_1 + _DAT_11276f2f8,0);
  _objc_storeStrong(param_1 + _DAT_11276f2d0,0);
  _objc_storeStrong(param_1 + _DAT_11276f314,0);
  _objc_storeStrong(param_1 + _DAT_11276f33c,0);
  _objc_storeStrong(param_1 + _DAT_11276f30c,0);
  _objc_storeStrong(param_1 + _DAT_11276f358,0);
  _objc_storeStrong(param_1 + _DAT_11276f2d4,0);
  _objc_storeStrong(param_1 + _DAT_11276f330,0);
  _objc_storeStrong(param_1 + _DAT_11276f348,0);
  _objc_storeStrong(param_1 + _DAT_11276f328,0);
  _objc_storeStrong(param_1 + _DAT_11276f354,0);
  _objc_storeStrong(param_1 + _DAT_11276f360,0);
  _objc_storeStrong(param_1 + _DAT_11276f2bc,0);
  _objc_storeStrong(param_1 + _DAT_11276f2c0,0);
  _objc_storeStrong(param_1 + _DAT_11276f2b8,0);
  _objc_storeStrong(param_1 + _DAT_11276f304,0);
  _objc_storeStrong(param_1 + _DAT_11276f32c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f2e4,0);
  return;
}



/* Entry: 107dc2d68; end: 107dc2e47; +[SCSpectaclesOperaLayerViewControllerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_107dc2d68(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126d7dc0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d7dc8;
    _objc_alloc(PTR_PTR_1126d7dc8);
    func_0x00010c0019a0();
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107dc2e48; end: 107dc2f47; +[SCSpectaclesOperaLayerViewControllerFactory legacyLayerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:sharedResourceManager:] */

void FUN_107dc2e48(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126d7dd0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d7db0;
    _objc_alloc(PTR_PTR_1126d7db0);
    func_0x00010c001aa0();
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107dc2f48; end: 107dc2fa3;  */

uint FUN_107dc2f48(long param_1)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010b5fa088();
  if (lVar1 - 2U < 0xb) {
    func_0x00010b5fa088(param_1);
    lVar1 = param_1;
    func_0x00010b5faa08(param_1);
    uVar2 = (uint)lVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107dc2fa4; end: 107dc30e3;  */

void FUN_107dc2fa4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010b5fa088();
  if (lVar2 - 2U < 0xb) {
    lVar2 = param_1;
    func_0x00010b5fa088();
    uVar1 = (int)(lVar2 - 2U) + 2;
    if (10 < lVar2 - 2U) {
      uVar1 = 5;
    }
    uVar5 = (ulong)uVar1;
    lVar2 = param_1;
    FUN_107dc2f48();
    if ((int)lVar2 == 0) {
      FUN_107dc323c();
    }
    else {
      func_0x000109023974(param_1);
    }
    FUN_107dc30e4(uVar5,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0d3c80();
    _objc_release(uVar5);
    lVar2 = param_1;
    func_0x00010b5fa6c4();
    if ((int)lVar2 != 0) {
      func_0x00010c1d0640(uVar3);
    }
    lVar2 = param_1;
    func_0x000109023c14();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)lVar2 != 0) {
      func_0x000109023c78(param_1);
      func_0x00010c0df720(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(puVar4);
    }
    uVar5 = uVar3;
    func_0x00010bf51e00(uVar3);
    _objc_release(uVar3);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 107dc30e4; end: 107dc323b;  */

void FUN_107dc30e4(double param_1,double param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  bVar1 = false;
  if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (!bVar1) {
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107dc323c; end: 107dc331b;  */

undefined1  [16] FUN_107dc323c(double param_1,double param_2,double param_3,double param_4)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  dVar2 = param_3;
  dVar3 = param_4;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(puVar1);
  auVar4._8_8_ = param_4 - (param_1 + dVar2);
  auVar4._0_8_ = param_3 - (param_2 + dVar3);
  return auVar4;
}



/* Entry: 107dc331c; end: 107dc345f;  */

uint FUN_107dc331c(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9b90;
  func_0x00010bf02080();
  puVar2 = PTR_PTR_1126c9b90;
  func_0x00010bf020a0();
  uVar5 = 0;
  if (((ulong)puVar2 & param_1) != 0) {
    uVar5 = (uint)(param_2 == 2);
  }
  if (((ulong)puVar1 & param_1) != 0 && param_2 == 5) {
    uVar5 = 1;
  }
  puVar1 = PTR_PTR_1126c9b90;
  func_0x00010c0d9b00();
  if ((param_2 == 2) && (((ulong)puVar1 & param_1) != 0)) {
    uVar3 = param_3;
    func_0x00010c06b7e0(param_3);
    uVar5 = (uint)uVar3 | uVar5;
  }
  puVar1 = PTR_PTR_1126c9b90;
  func_0x00010c0d9c20();
  if (((ulong)puVar1 & param_1) != 0) {
    uVar3 = param_4;
    FUN_107dc3460(param_4);
    uVar4 = param_5;
    FUN_107dc3460(param_5);
    uVar6 = (uint)uVar3;
    if (param_2 != 5) {
      uVar6 = uVar5;
    }
    uVar5 = uVar6;
    if (param_2 == 2) {
      uVar5 = ((uint)uVar3 ^ 1) & (uint)uVar4;
    }
  }
  puVar1 = PTR_PTR_1126c9b90;
  func_0x00010c0d9c40();
  uVar6 = uVar5;
  if (((ulong)puVar1 & param_1) != 0) {
    FUN_107dc3460();
    FUN_107dc3460();
    uVar6 = (uint)param_4;
    if (param_2 != 5) {
      uVar6 = uVar5;
    }
    if (param_2 == 2) {
      if ((((uint)param_4 ^ 1) & (uint)param_5) == 1) {
        uVar3 = param_3;
        func_0x00010c06b7e0(param_3);
        uVar6 = (uint)uVar3 ^ 1;
      }
      else {
        uVar6 = 0;
      }
    }
  }
  _objc_release(param_3);
  return uVar6 & 1;
}



/* Entry: 107dc3460; end: 107dc34ff;  */

undefined8 FUN_107dc3460(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (lRam0000000113727f68 != -1) {
    func_0x00010002a2fc(0x113727f68,&PTR___NSConcreteGlobalBlock_110a0cdb0);
  }
  uVar1 = uRam0000000113727f70;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(uRam0000000113727f70);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return uVar3;
}



/* Entry: 107dc3500; end: 107dc3563;  */

void FUN_107dc3500(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ccce8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727f70;
  puRam0000000113727f70 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dc3564; end: 107dc35af; +[SCOperaActionMenuLayer layerWithPage:] */

void FUN_107dc3564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6948;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc35b0; end: 107dc3b5f; -[SCOperaActionMenuLayer initWithPage:] */

undefined1 * FUN_107dc35b0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126fb158;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    _objc_release(puVar3);
    if (((ulong)puVar5 & 1) != 0) {
      puVar3 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)((long)puVar2 + 0x20);
      *(undefined **)((long)puVar2 + 0x20) = puVar4;
      _objc_release(uVar6);
      _objc_release(puVar3);
    }
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 8) = (char)puVar4;
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      *(undefined1 *)((long)puVar2 + 0xf) = 1;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar2 + 0xf) = (char)puVar5;
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0x10) = (char)puVar4;
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined **)((long)puVar2 + 0x30) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2827c0();
    *(undefined **)((long)puVar2 + 0x38) = puVar4;
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined **)((long)puVar2 + 0x28) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x18),param_3);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if ((*(byte *)((long)puVar2 + 0x10) & 1) == 0) {
      puVar3 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined **)((long)puVar2 + 0x48) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if ((*(byte *)((long)puVar2 + 0x10) & 1) == 0) {
      puVar3 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)((long)puVar2 + 0x50);
    *(undefined **)((long)puVar2 + 0x50) = puVar3;
    _objc_release(uVar6);
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9448;
    _objc_opt_class(PTR_PTR_1126c9448);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bf125a0();
    _objc_release(puVar3);
    *(char *)((long)puVar2 + 0x11) = (char)puVar4;
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      *(undefined8 *)((long)puVar2 + 0x40) = 0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2827c0();
      *(undefined **)((long)puVar2 + 0x40) = puVar5;
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      *(undefined1 *)((long)puVar2 + 9) = 0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar2 + 9) = (char)puVar5;
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      *(undefined1 *)((long)puVar2 + 10) = 0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar2 + 10) = (char)puVar5;
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      *(undefined1 *)((long)puVar2 + 0xb) = 0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar2 + 0xb) = (char)puVar5;
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      *(undefined1 *)((long)puVar2 + 0xc) = 0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar2 + 0xc) = (char)puVar5;
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      *(undefined1 *)((long)puVar2 + 0xd) = 0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar2 + 0xd) = (char)puVar5;
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar2 + 0xe) = 0;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107dc3b60; end: 107dc3b67; -[SCOperaActionMenuLayer type] */

undefined8 FUN_107dc3b60(void)

{
  return 0x12;
}



/* Entry: 107dc3b68; end: 107dc3e6f; -[SCOperaActionMenuLayer isEqual:] */

bool FUN_107dc3b68(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar6 = PTR_PTR_1126d6948;
  _objc_opt_class();
  if (puVar3 != puVar6) {
    bVar2 = false;
    goto LAB_107dc3d4c;
  }
  if (param_1 == param_3) {
    bVar2 = true;
    goto LAB_107dc3d4c;
  }
  _objc_retain(param_3);
  puVar6 = *(undefined **)(param_1 + 0x20);
  puVar3 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  if (puVar6 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar6);
LAB_107dc3c3c:
    bVar1 = param_1[8];
    puVar6 = param_3;
    func_0x00010bf86360();
    if ((uint)bVar1 == (uint)puVar6) {
      puVar7 = *(undefined **)(param_1 + 0x28);
      puVar6 = param_3;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar7);
      _objc_retain(puVar6);
      if (puVar7 == puVar6) {
        _objc_release(puVar6);
        _objc_release(puVar7);
LAB_107dc3cc4:
        puVar8 = *(undefined **)(param_1 + 0x38);
        puVar7 = param_3;
        func_0x00010c150c20();
        if (((puVar8 != puVar7) ||
            (bVar1 = param_1[0xf], puVar7 = param_3, func_0x00010c15dfe0(),
            (uint)bVar1 != (uint)puVar7)) ||
           (bVar1 = param_1[0x10], puVar7 = param_3, func_0x00010c15e040(),
           (uint)bVar1 != (uint)puVar7)) goto LAB_107dc3d30;
        puVar8 = *(undefined **)(param_1 + 0x30);
        puVar7 = param_3;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 != puVar7) goto LAB_107dc3d20;
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        puVar8 = param_3;
        func_0x00010bf92720(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar9,puVar8);
        if ((int)uVar9 == 0) {
          bVar2 = false;
        }
        else {
          uVar9 = *(undefined8 *)(param_1 + 0x50);
          puVar4 = param_3;
          func_0x00010bf92ac0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bd86de8(uVar9,puVar4);
          if ((((((int)uVar9 == 0) ||
                (puVar10 = *(undefined **)(param_1 + 0x40), puVar5 = param_3, func_0x00010bfdef00(),
                puVar10 != puVar5)) ||
               ((bVar1 = param_1[10], puVar5 = param_3, func_0x00010c080120(),
                (uint)bVar1 != (uint)puVar5 ||
                ((bVar1 = param_1[0xb], puVar5 = param_3, func_0x00010bf2d760(),
                 (uint)bVar1 != (uint)puVar5 ||
                 (bVar1 = param_1[0xd], puVar5 = param_3, func_0x00010c079480(),
                 (uint)bVar1 != (uint)puVar5)))))) ||
              (bVar1 = param_1[9], puVar5 = param_3, func_0x00010c2606e0(),
              (uint)bVar1 != (uint)puVar5)) ||
             (bVar1 = param_1[0xc], puVar5 = param_3, func_0x00010bf2d7c0(),
             (uint)bVar1 != (uint)puVar5)) {
            bVar2 = false;
          }
          else {
            bVar1 = param_1[0x11];
            puVar5 = param_3;
            func_0x00010c2611e0(param_3);
            bVar2 = (uint)bVar1 == (uint)puVar5;
          }
          _objc_release(puVar4);
        }
        _objc_release(puVar8);
      }
      else {
        if (puVar6 != (undefined *)0x0) {
          puVar8 = puVar7;
          func_0x00010c071ae0();
          _objc_release(puVar6);
          _objc_release(puVar7);
          if ((int)puVar8 == 0) goto LAB_107dc3d30;
          goto LAB_107dc3cc4;
        }
LAB_107dc3d20:
        bVar2 = false;
      }
      _objc_release(puVar7);
      goto LAB_107dc3d34;
    }
LAB_107dc3cac:
    bVar2 = false;
  }
  else {
    if (puVar3 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x00010c071ae0();
      _objc_release(puVar3);
      _objc_release(puVar6);
      if ((int)puVar7 != 0) goto LAB_107dc3c3c;
      goto LAB_107dc3cac;
    }
LAB_107dc3d30:
    bVar2 = false;
LAB_107dc3d34:
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
LAB_107dc3d4c:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 107dc3e70; end: 107dc3e87; -[SCOperaActionMenuLayer page] */

void FUN_107dc3e70(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dc3e88; end: 107dc3e93; -[SCOperaActionMenuLayer setPage:] */

void FUN_107dc3e88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107dc3e94; end: 107dc3e9b; -[SCOperaActionMenuLayer displayName] */

undefined8 FUN_107dc3e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dc3e9c; end: 107dc3ea3; -[SCOperaActionMenuLayer username] */

undefined8 FUN_107dc3e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dc3ea4; end: 107dc3eab; -[SCOperaActionMenuLayer timestamp] */

undefined8 FUN_107dc3ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dc3eac; end: 107dc3eb3; -[SCOperaActionMenuLayer score] */

undefined8 FUN_107dc3eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dc3eb4; end: 107dc3ebb; -[SCOperaActionMenuLayer displayScore] */

undefined1 FUN_107dc3eb4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dc3ebc; end: 107dc3ec3; -[SCOperaActionMenuLayer hdState] */

undefined8 FUN_107dc3ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dc3ec4; end: 107dc3ecb; -[SCOperaActionMenuLayer subscriptionAndOptInTreatmentEnabled] */

undefined1 FUN_107dc3ec4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dc3ecc; end: 107dc3ed3; -[SCOperaActionMenuLayer isSubscribed] */

undefined1 FUN_107dc3ecc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107dc3ed4; end: 107dc3edb; -[SCOperaActionMenuLayer canShowNotifictionOptInButton] */

undefined1 FUN_107dc3ed4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107dc3edc; end: 107dc3ee3; -[SCOperaActionMenuLayer canShowSubscribeButton] */

undefined1 FUN_107dc3edc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107dc3ee4; end: 107dc3eeb; -[SCOperaActionMenuLayer isOptedInForNotifications] */

undefined1 FUN_107dc3ee4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107dc3eec; end: 107dc3ef3; -[SCOperaActionMenuLayer isAd] */

undefined1 FUN_107dc3eec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107dc3ef4; end: 107dc3efb; -[SCOperaActionMenuLayer sendingEnabled] */

undefined1 FUN_107dc3ef4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107dc3efc; end: 107dc3f03; -[SCOperaActionMenuLayer sendingPreparing] */

undefined1 FUN_107dc3efc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107dc3f04; end: 107dc3f0b; -[SCOperaActionMenuLayer subtitlesAvailable] */

undefined1 FUN_107dc3f04(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107dc3f0c; end: 107dc3f13; -[SCOperaActionMenuLayer enabledButtons] */

undefined8 FUN_107dc3f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107dc3f14; end: 107dc3f1b; -[SCOperaActionMenuLayer enabledV2Buttons] */

undefined8 FUN_107dc3f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107dc3f1c; end: 107dc3f77; -[SCOperaActionMenuLayer .cxx_destruct] */

void FUN_107dc3f1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 107dc3f78; end: 107dc3fc3; +[SCOperaAnimatedImageLayer layerWithPage:] */

void FUN_107dc3f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d68e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc3fc4; end: 107dc4057; -[SCOperaAnimatedImageLayer initWithPage:] */

undefined1 * FUN_107dc3fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126fb160;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc4058; end: 107dc405f; -[SCOperaAnimatedImageLayer type] */

undefined8 FUN_107dc4058(void)

{
  return 3;
}



/* Entry: 107dc4060; end: 107dc4103; -[SCOperaAnimatedImageLayer isEqual:] */

undefined8 FUN_107dc4060(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126d68e0;
  _objc_opt_class();
  if (puVar1 == puVar2) {
    if (param_1 == param_3) {
      uVar3 = 1;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar1 = param_3;
      func_0x00010c2553e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b60(uVar3,param_2,puVar1);
      _objc_release(puVar1);
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107dc4104; end: 107dc410b; -[SCOperaAnimatedImageLayer stickers] */

undefined8 FUN_107dc4104(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dc410c; end: 107dc4117; -[SCOperaAnimatedImageLayer .cxx_destruct] */

void FUN_107dc410c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dc4118; end: 107dc4163; +[SCOperaArrowLayer layerWithPage:] */

void FUN_107dc4118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6908;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc4164; end: 107dc427f; -[SCOperaArrowLayer initWithPage:] */

undefined1 * FUN_107dc4164(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fb168;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    if (lVar2 != 0) {
      func_0x00010c2827c0();
    }
    *(long *)((long)puVar1 + 0x10) = lVar3;
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(long *)((long)puVar1 + 0x20) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = 0x3ff0000000000000;
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc4280; end: 107dc4287; -[SCOperaArrowLayer type] */

undefined8 FUN_107dc4280(void)

{
  return 10;
}


