/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e0d968; end: 106e0d98b; -[SCOperaGLImageLayerViewController resume] */

void FUN_106e0d968(undefined8 param_1)

{
  func_0x00010bead180();
                    /* WARNING: Could not recover jumptable at 0x00010bec1090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPlaybackIfNecessary_11258ddc8);
  return;
}



/* Entry: 106e0d98c; end: 106e0d9af; -[SCOperaGLImageLayerViewController viewWillFullyAppear] */

void FUN_106e0d98c(undefined8 param_1)

{
  func_0x00010bead180();
                    /* WARNING: Could not recover jumptable at 0x00010bec1090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPlaybackIfNecessary_11258ddc8);
  return;
}



/* Entry: 106e0d9b0; end: 106e0da2f; -[SCOperaGLImageLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0d9b0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6fd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + _DAT_11275ef80));
  *(undefined1 *)(param_1 + _DAT_11275efa0) = 1;
  func_0x00010beaed80(param_1);
  func_0x00010bead180(param_1);
  func_0x00010bec1080(param_1);
  return;
}



/* Entry: 106e0da30; end: 106e0da8f; -[SCOperaGLImageLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0da30(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6fd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  *(undefined1 *)(param_1 + _DAT_11275efa0) = 0;
  *(undefined1 *)(param_1 + _DAT_11275efa4) = 0;
  func_0x00010bec3660(param_1);
  return;
}



/* Entry: 106e0da90; end: 106e0da97; -[SCOperaGLImageLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_106e0da90(void)

{
  return 0;
}



/* Entry: 106e0da98; end: 106e0daab; -[SCOperaGLImageLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0da98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275ef84),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106e0daac; end: 106e0dabb; -[SCOperaGLImageLayerViewController _resetTrackingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0daac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275ef88),PTR_s_resetTrackingParams_11262c0a0);
  return;
}



/* Entry: 106e0dabc; end: 106e0db1f; -[SCOperaGLImageLayerViewController _startPlaybackIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0dabc(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275efa8;
  if ((*(byte *)(param_1 + lVar1) & 1) != 0) {
    return;
  }
  func_0x00010be94220();
  func_0x00010bec0360(param_1);
  *(undefined1 *)(param_1 + lVar1) = 1;
  lVar1 = (long)_DAT_11275ef90;
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c2504b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_startRunning_112671b50);
  return;
}



/* Entry: 106e0db20; end: 106e0db97; -[SCOperaGLImageLayerViewController _stopPlaybackIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0db20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275ef90;
  func_0x00010c2568a0(*(undefined8 *)(param_1 + lVar2));
  if (*(char *)(param_1 + _DAT_11275efa8) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11275efa8) = 0;
    func_0x00010bec3160(param_1);
    func_0x00010c12cf80(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e0db98; end: 106e0dd47; -[SCOperaGLImageLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0db98(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0fc2e0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11275efac);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0fc2e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010c210240(uVar4,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010beeec40(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010beeec40(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010c161c20(*(undefined8 *)(param_1 + _DAT_11275ef9c),param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010beeec40(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010c161b40(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e0dd48; end: 106e0ddbb; -[SCOperaGLImageLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0dd48(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6fd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  func_0x00010c139840(*(undefined8 *)(param_1 + _DAT_11275ef88));
  func_0x00010bec3660(param_1);
  func_0x00010be92e00(param_1);
  *(undefined1 *)(param_1 + _DAT_11275efa4) = 0;
  *(undefined1 *)(param_1 + _DAT_11275efb0) = 0;
  return;
}



/* Entry: 106e0ddbc; end: 106e0df17; -[SCOperaGLImageLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0ddbc(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c07cc60();
  _objc_release();
  if ((int)puVar6 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010c0c2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar7 = (long)_DAT_11275ef88;
    func_0x00010c0c2c20(*(undefined8 *)(param_2 + lVar7));
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c0cd980();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0cd980(*(undefined8 *)(param_2 + lVar7));
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  puVar6 = puVar1;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(puVar6);
  _CGAffineTransformMakeScale(&uStack_110,uVar8,uVar8);
  uStack_138 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_140 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_128 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_130 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_118 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_120 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformConcat(&uStack_e0,&uStack_110,&uStack_140);
  puVar6 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uStack_d8;
  uStack_110 = uStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  func_0x00010c219960();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bf69a40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c1677c0(*(undefined8 *)(puVar1 + _DAT_11275ef84));
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bf69a40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c1677c0(*(undefined8 *)(puVar1 + _DAT_11275ef80));
  _objc_release(puVar6);
  return;
}



/* Entry: 106e0df18; end: 106e0e047; -[SCOperaGLImageLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0df18(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(&uStack_a0,uVar2,uVar2);
  uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformConcat(&uStack_70,&uStack_a0,&uStack_d0);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c1677c0(*(undefined8 *)(param_2 + _DAT_11275ef84));
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c1677c0(*(undefined8 *)(param_2 + _DAT_11275ef80));
  _objc_release(lVar1);
  return;
}



/* Entry: 106e0e048; end: 106e0e0cb; -[SCOperaGLImageLayerViewController _resetHorizontalPageOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0e048(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11275ef84));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11275ef80));
  return;
}



/* Entry: 106e0e0cc; end: 106e0e1a3; -[SCOperaGLImageLayerViewController operaRotatingLayerPinchController:didFinishPinchWithScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0e0cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c07cc60();
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    lVar5 = (long)_DAT_11275efac;
    func_0x00010c075560(*(undefined8 *)(param_1 + lVar5));
    lVar1 = param_1;
    func_0x00010c08f5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e520();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275ef88);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275ef74);
    func_0x00010bf60aa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    func_0x000107dbaf3c(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106e0e1a4; end: 106e0e2db; -[SCOperaGLImageLayerViewController operaRotatingLayerPinchController:updateTransformWithScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0e1a4(undefined8 param_1,double param_2,undefined *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  uVar11 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c07cc60();
  _objc_release();
  if ((int)puVar5 != 0) {
    func_0x00010c28ac00(param_1,*(undefined8 *)(param_3 + _DAT_11275ef88));
    puVar5 = PTR_PTR_1126c9410;
    func_0x00010c0fc2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c118dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e940();
    _objc_release(param_3);
    _objc_release();
    uVar11 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c07cc60();
  _objc_release(puVar5);
  if (((int)puVar6 != 0) && (puVar4[_DAT_11275efa0] == '\x01')) {
    lVar12 = (long)_DAT_11275ef88;
    lVar10 = *(long *)(puVar4 + lVar12);
    func_0x00010c0b8420();
    if (lVar10 != 5) {
      lVar13 = (long)_DAT_11275efac;
      lVar10 = *(long *)(puVar4 + lVar13);
      if (lVar10 == 0) {
        puVar5 = PTR_PTR_1126d2b58;
        _objc_alloc();
        puVar1 = (undefined8 *)(puVar4 + _DAT_11275ef78);
        puVar6 = puVar4;
        func_0x00010bf46560(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee8c0();
        puVar7 = puVar4;
        uVar9 = uVar11;
        func_0x00010bf46560(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24c9a0();
        param_2 = (double)puVar1[1];
        func_0x00010c061580(*puVar1,param_2,puVar1[2],puVar1[3],uVar11,uVar9);
        uVar11 = *(undefined8 *)(puVar4 + lVar13);
        *(undefined **)(puVar4 + lVar13) = puVar5;
        _objc_release(uVar11);
        _objc_release(puVar7);
        _objc_release(puVar6);
        uVar11 = *(undefined8 *)(puVar4 + lVar13);
        puVar5 = puVar4;
        func_0x00010c0fc260();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          puVar6 = puVar4;
          func_0x00010c29bf00(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa900(uVar11);
          _objc_release(puVar6);
        }
        else {
          func_0x00010befa900(uVar11);
        }
        _objc_release(puVar5);
        lVar10 = *(long *)(puVar4 + lVar13);
      }
      func_0x000107dbae24(lVar10,*(undefined8 *)(puVar4 + lVar12));
      uVar11 = *(undefined8 *)(puVar4 + lVar13);
      puVar5 = puVar4;
      func_0x00010c08f5c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beeebe0();
      func_0x00010c200ba0(uVar11);
      _objc_release(puVar5);
      uVar11 = *(undefined8 *)(puVar4 + lVar13);
      puVar5 = puVar4;
      func_0x00010c08f5c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c292300();
      puVar7 = puVar4;
      func_0x00010c0f0be0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107dbb2e0(puVar6,puVar8);
      func_0x00010c1aba80(uVar11);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      func_0x00010c14e120(*(undefined8 *)(puVar4 + lVar13));
      func_0x00010c0eb1a0(puVar4);
      lVar12 = *(long *)(puVar4 + lVar12);
      uVar9 = *(undefined8 *)(puVar4 + lVar13);
      dVar14 = 0.0;
      _objc_retain();
      _objc_retain(uVar9);
      uVar11 = uVar9;
      func_0x00010c075560();
      lVar10 = lVar12;
      func_0x00010c0b8420();
      if ((int)uVar11 == 0) {
        if (lVar10 == 4) {
          _objc_retain(lVar12);
          _objc_retain(uVar9);
          func_0x00010c0895e0(lVar12);
          dVar16 = dVar14;
          func_0x00010c29f6c0(lVar12);
          dVar15 = 0.0;
          if (dVar16 != 0.0) {
            if (param_2 == 0.0) {
              dVar15 = INFINITY;
            }
            else {
              dVar15 = dVar16 / param_2;
            }
          }
          func_0x00010bf47880(dVar14,dVar15,lVar12);
          dVar14 = 0.0;
          func_0x00010c28ac20(lVar12);
          func_0x00010c089cc0(lVar12);
          dVar16 = ABS(dVar14);
          func_0x00010c29f6c0(lVar12);
          func_0x00010bf20c00(lVar12);
          _objc_release(lVar12);
          bVar2 = false;
          bVar3 = false;
          if (dVar16 < 2.356194490192345) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar16)) {
              bVar2 = dVar16 == 0.7853981633974483;
              bVar3 = 0.7853981633974483 <= dVar16;
            }
          }
          if (!bVar3 || bVar2) {
            dVar15 = dVar14;
          }
          func_0x00010c139580(0x3ff0000000000000,param_2 / dVar15,0x3ff0000000000000,uVar9);
          _objc_release(uVar9);
        }
      }
      else if (lVar10 == 3) {
        func_0x000107dbb0a0(0,lVar12,uVar9);
      }
      _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar12);
      return;
    }
  }
  return;
}



/* Entry: 106e0e2dc; end: 106e0e553; -[SCOperaGLImageLayerViewController _setupPinchControllerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0e2dc(undefined8 param_1,double param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar4 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar4;
  func_0x00010c07cc60();
  _objc_release(lVar4);
  if (((int)lVar11 != 0) && (*(char *)(param_3 + _DAT_11275efa0) == '\x01')) {
    lVar11 = (long)_DAT_11275ef88;
    lVar4 = *(long *)(param_3 + lVar11);
    func_0x00010c0b8420();
    if (lVar4 != 5) {
      lVar12 = (long)_DAT_11275efac;
      lVar4 = *(long *)(param_3 + lVar12);
      if (lVar4 == 0) {
        puVar5 = PTR_PTR_1126d2b58;
        _objc_alloc();
        puVar1 = (undefined8 *)(param_3 + _DAT_11275ef78);
        lVar4 = param_3;
        func_0x00010bf46560(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee8c0();
        lVar6 = param_3;
        uVar10 = param_1;
        func_0x00010bf46560(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24c9a0();
        param_2 = (double)puVar1[1];
        func_0x00010c061580(*puVar1,param_2,puVar1[2],puVar1[3],param_1,uVar10);
        uVar10 = *(undefined8 *)(param_3 + lVar12);
        *(undefined **)(param_3 + lVar12) = puVar5;
        _objc_release(uVar10);
        _objc_release(lVar6);
        _objc_release(lVar4);
        uVar10 = *(undefined8 *)(param_3 + lVar12);
        lVar4 = param_3;
        func_0x00010c0fc260();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          lVar6 = param_3;
          func_0x00010c29bf00(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa900(uVar10);
          _objc_release(lVar6);
        }
        else {
          func_0x00010befa900(uVar10);
        }
        _objc_release(lVar4);
        lVar4 = *(long *)(param_3 + lVar12);
      }
      func_0x000107dbae24(lVar4,*(undefined8 *)(param_3 + lVar11));
      uVar10 = *(undefined8 *)(param_3 + lVar12);
      lVar4 = param_3;
      func_0x00010c08f5c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beeebe0();
      func_0x00010c200ba0(uVar10);
      _objc_release(lVar4);
      uVar10 = *(undefined8 *)(param_3 + lVar12);
      lVar4 = param_3;
      func_0x00010c08f5c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c292300();
      lVar7 = param_3;
      func_0x00010c0f0be0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107dbb2e0(lVar6,lVar8);
      func_0x00010c1aba80(uVar10);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar4);
      func_0x00010c14e120(*(undefined8 *)(param_3 + lVar12));
      func_0x00010c0eb1a0(param_3);
      lVar11 = *(long *)(param_3 + lVar11);
      uVar9 = *(undefined8 *)(param_3 + lVar12);
      dVar13 = 0.0;
      _objc_retain();
      _objc_retain(uVar9);
      uVar10 = uVar9;
      func_0x00010c075560();
      lVar4 = lVar11;
      func_0x00010c0b8420();
      if ((int)uVar10 == 0) {
        if (lVar4 == 4) {
          _objc_retain(lVar11);
          _objc_retain(uVar9);
          func_0x00010c0895e0(lVar11);
          dVar15 = dVar13;
          func_0x00010c29f6c0(lVar11);
          dVar14 = 0.0;
          if (dVar15 != 0.0) {
            if (param_2 == 0.0) {
              dVar14 = INFINITY;
            }
            else {
              dVar14 = dVar15 / param_2;
            }
          }
          func_0x00010bf47880(dVar13,dVar14,lVar11);
          dVar13 = 0.0;
          func_0x00010c28ac20(lVar11);
          func_0x00010c089cc0(lVar11);
          dVar15 = ABS(dVar13);
          func_0x00010c29f6c0(lVar11);
          func_0x00010bf20c00(lVar11);
          _objc_release(lVar11);
          bVar2 = false;
          bVar3 = false;
          if (dVar15 < 2.356194490192345) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar15)) {
              bVar2 = dVar15 == 0.7853981633974483;
              bVar3 = 0.7853981633974483 <= dVar15;
            }
          }
          if (!bVar3 || bVar2) {
            dVar14 = dVar13;
          }
          func_0x00010c139580(0x3ff0000000000000,param_2 / dVar14,0x3ff0000000000000,uVar9);
          _objc_release(uVar9);
        }
      }
      else if (lVar4 == 3) {
        func_0x000107dbb0a0(0,lVar11,uVar9);
      }
      _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar11);
      return;
    }
  }
  return;
}



/* Entry: 106e0e554; end: 106e0e5cb; -[SCOperaGLImageLayerViewController setPinchGestureTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0e554(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11275efb4;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_3 != lVar1) {
    _objc_storeWeak(param_1 + lVar2,param_3);
    if (*(long *)(param_1 + _DAT_11275efac) != 0) {
      func_0x00010befa900();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e0e5cc; end: 106e0e65b; -[SCOperaGLImageLayerViewController _glCommandsForKey:] */

void FUN_106e0e5cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfccd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfccd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e0e65c; end: 106e0e8d7; -[SCOperaGLImageLayerViewController _setupImageProcessSessionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0e65c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = (long)_DAT_11275ef90;
  if (*(long *)(param_1 + lVar12) == 0) {
    puVar1 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bf4f0;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0eed40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be24060(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0cd220();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010be24060(param_1,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c700(puVar2,param_2,puVar1,lVar5,lVar8);
    uVar10 = *(undefined8 *)(param_1 + _DAT_11275ef98);
    *(undefined **)(param_1 + _DAT_11275ef98) = puVar2;
    _objc_release(uVar10);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126bf4f8;
    _objc_alloc();
    func_0x00010c03c620();
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar2;
    _objc_release(uVar10);
    lVar3 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed97c0(param_1,param_2,0,lVar3);
    _objc_release(lVar3);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c2235a0(*(undefined8 *)(param_1 + lVar12),param_2,&uStack_90);
    uVar10 = *(undefined8 *)(param_1 + _DAT_11275ef7c);
    func_0x00010bfccde0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5c20();
    func_0x00010c182d20(uVar10);
    _objc_release(puVar2);
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    puVar2 = PTR_PTR_1126bf4e8;
    _objc_alloc(PTR_PTR_1126bf4e8);
    puVar9 = PTR_PTR_1126bf4b8;
    _objc_opt_new(PTR_PTR_1126bf4b8);
    func_0x00010c01cce0(puVar2,param_2,puVar9,uVar10);
    func_0x00010c1eaae0(uVar11,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(uVar10);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 106e0e8d8; end: 106e0e987; -[SCOperaGLImageLayerViewController setActionMenuEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0e8d8(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,uint param_7)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(byte *)(param_5 + _DAT_11275efb0) == param_7) {
    return;
  }
  *(char *)(param_5 + _DAT_11275efb0) = (char)param_7;
  lVar4 = *(long *)(param_5 + _DAT_11275ef88);
  uVar5 = *(undefined8 *)(param_5 + _DAT_11275efac);
  if (param_7 == 0) {
    lVar3 = *(long *)(param_5 + _DAT_11275ef74);
    func_0x00010bf60aa0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    func_0x000107dbaf3c(lVar4,uVar5);
  }
  else {
    dVar6 = 0.0;
    _objc_retain();
    _objc_retain(uVar5);
    lVar3 = lVar4;
    func_0x00010c0b8420();
    if ((lVar3 == 3) || (lVar3 = lVar4, func_0x00010c0b8420(), lVar3 == 4)) {
      func_0x00010c0895e0(lVar4);
      dVar8 = dVar6;
      func_0x00010c29f6c0(lVar4);
      dVar7 = 0.0;
      if (dVar8 != 0.0) {
        if (param_2 == 0.0) {
          dVar7 = INFINITY;
        }
        else {
          dVar7 = dVar8 / param_2;
        }
      }
      func_0x00010bf47880(dVar6,dVar7,lVar4);
      dVar6 = 0.0;
      func_0x00010bfb51a0(lVar4);
      func_0x00010c089cc0(lVar4);
      dVar8 = ABS(dVar6);
      func_0x00010c29f6c0(lVar4);
      func_0x00010bf20c00(lVar4);
      bVar1 = false;
      bVar2 = false;
      if (dVar8 < 2.356194490192345) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar8)) {
          bVar1 = dVar8 == 0.7853981633974483;
          bVar2 = 0.7853981633974483 <= dVar8;
        }
      }
      if (!bVar2 || bVar1) {
        dVar6 = dVar7;
      }
      param_4 = param_4 / dVar6;
      func_0x00010c089ce0(lVar4);
      dVar8 = dVar6;
      func_0x00010c089ce0(lVar4);
      func_0x00010c139580(dVar6,dVar8,param_4,uVar5);
    }
    _objc_release(uVar5);
    lVar3 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106e0e988; end: 106e0ea2b; -[SCOperaGLImageLayerViewController movingViewsForFadeTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0e988(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07cc60();
  _objc_release(lVar2);
  if (((int)lVar3 != 0) && (*(char *)(param_1 + _DAT_11275efa0) == '\x01')) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11275efac);
    func_0x00010c075560();
    if (iVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
      func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      goto LAB_106e0ea18;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_106e0ea18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106e0ea2c; end: 106e0ea33; -[SCOperaGLImageLayerViewController fadingViewsForFadeTransition] */

undefined8 FUN_106e0ea2c(void)

{
  return 0;
}



/* Entry: 106e0ea34; end: 106e0ea43; -[SCOperaGLImageLayerViewController mediaViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0ea34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb68f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275ef84),PTR_s_frame_1125cb3e0);
  return;
}



/* Entry: 106e0ea44; end: 106e0eaef; -[SCOperaGLImageLayerViewController mediaHeightToWidthAspectRatio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106e0ea44(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c07cc60();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    func_0x00010bde8060(param_3);
    dVar3 = 0.0;
    if ((param_1 != 0.0) && (param_2 != 0.0)) {
      dVar3 = -param_2;
      if (0.0 <= param_2) {
        dVar3 = param_2;
      }
      dVar4 = -param_1;
      if (0.0 <= param_1) {
        dVar4 = param_1;
      }
      dVar3 = dVar3 / dVar4;
    }
  }
  else {
    dVar3 = *(double *)(param_3 + _DAT_11275ef78 + 0x10);
    if (dVar3 == 0.0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = *(double *)(param_3 + _DAT_11275ef78 + 0x18) / dVar3;
    }
  }
  return dVar3;
}



/* Entry: 106e0eaf0; end: 106e0eb03; -[SCOperaGLImageLayerViewController _contentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106e0eaf0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11275ef78 + 0x10);
}



/* Entry: 106e0eb04; end: 106e0eb0b; -[SCOperaGLImageLayerViewController isOverlay] */

undefined8 FUN_106e0eb04(void)

{
  return 0;
}



/* Entry: 106e0eb0c; end: 106e0eda7; -[SCOperaGLImageLayerViewController colorFilterSessionDidRenderImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0eb0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar9 = (long)_DAT_11275efa4;
  if ((*(byte *)(param_3 + lVar9) & 1) == 0) {
    lVar10 = (long)_DAT_11275ef94;
    if (*(long *)(param_3 + lVar10) == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR_PTR_1126b2348;
      func_0x00010c0c4c60();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_c0 = puVar11;
      puStack_b8 = puVar11;
      func_0x00010bf93780(*(undefined8 *)(param_3 + lVar10));
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b2348;
      puStack_c8 = puVar12;
      puStack_90 = puVar12;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)(param_3 + lVar10);
      puVar12 = PTR_PTR_1126b2348;
      puStack_d0 = puVar11;
      puStack_b0 = puVar11;
      func_0x00010bfe90c0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = *(undefined **)(param_3 + _DAT_11275ef80);
      puStack_e0 = puVar11;
      puStack_d8 = puVar12;
      puStack_a8 = puVar12;
      if (puVar11 == (undefined *)0x0) {
        puStack_e0 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar1 = PTR_PTR_1126b2348;
      puStack_80 = puStack_e0;
      func_0x00010c13a500();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_a0 = puVar1;
      func_0x00010c23d0a0(*(undefined8 *)(param_3 + lVar10));
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b2348;
      puStack_78 = puVar2;
      func_0x00010c13a460();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_98 = puVar3;
      func_0x00010c23d0a0(*(undefined8 *)(param_3 + lVar10));
      func_0x00010c0df720(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_70 = unaff_x22;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x22);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (puVar11 == (undefined *)0x0) {
        _objc_release(puStack_e0);
      }
      _objc_release(puStack_d8);
      _objc_release(puStack_d0);
      _objc_release(puStack_c8);
      _objc_release(puStack_c0);
    }
    unaff_x21 = PTR_PTR_1126b2338;
    func_0x00010bfe8ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_3);
    _objc_release(unaff_x21);
    *(undefined1 *)(param_3 + lVar9) = 1;
    _objc_release(puVar12);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_11275ef84));
  lVar9 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_106e0eda8;
  lVar10 = (long)_DAT_11275efb8;
  if (*(long *)(lVar9 + lVar10) == 0) {
    lVar8 = lVar9;
    puStack_110 = unaff_x22;
    puStack_108 = unaff_x21;
    lStack_100 = param_3;
    lStack_f8 = param_5;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010c07cc60();
    _objc_release(lVar8);
    if ((int)lVar4 != 0) {
      _objc_initWeak(auStack_118,lVar9);
      lVar8 = (long)_DAT_11275ef74;
      func_0x00010bf18460(*(undefined8 *)(lVar9 + lVar8));
      uVar5 = *(undefined8 *)(lVar9 + lVar8);
      func_0x00010c297080();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_120,auStack_118);
      uVar6 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar9 + lVar10);
      *(undefined8 *)(lVar9 + lVar10) = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_120);
      _objc_destroyWeak(auStack_118);
    }
  }
  return;
}



/* Entry: 106e0eda8; end: 106e0eed3; -[SCOperaGLImageLayerViewController _startListeningToMotionManagerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0eda8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar6 = (long)_DAT_11275efb8;
  if (*(long *)(param_1 + lVar6) == 0) {
    lVar5 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c07cc60();
    _objc_release(lVar5);
    if ((int)lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      lVar5 = (long)_DAT_11275ef74;
      func_0x00010bf18460(*(undefined8 *)(param_1 + lVar5));
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c297080();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      uVar3 = uVar2;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = uVar3;
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 106e0eed4; end: 106e0ef63;  */

void FUN_106e0eed4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c141a80(param_4);
  uVar1 = param_1;
  func_0x00010c27ada0(param_4);
  uVar2 = uVar1;
  func_0x00010bfce0a0(param_4);
  _objc_release(param_4);
  func_0x00010c0d12a0(param_1,uVar1,param_2,uVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e0ef64; end: 106e0efbb; -[SCOperaGLImageLayerViewController _stopListeningToMotionManagerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0ef64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275efb8;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf94da0(*(undefined8 *)(param_1 + _DAT_11275ef74));
    func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e0efbc; end: 106e0f0ff; -[SCOperaGLImageLayerViewController motionManagerDidUpdateRotation:translation:gravity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0efbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c232cc0();
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c07cc60();
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      lVar3 = (long)_DAT_11275ef88;
      lVar1 = *(long *)(param_5 + lVar3);
      func_0x00010c0b8420();
      if (lVar1 != 4) {
        lVar1 = *(long *)(param_5 + lVar3);
        func_0x00010c0b8420();
        if (0xfffffffffffffffc < lVar1 - 6U) {
          uVar2 = *(ulong *)(param_5 + _DAT_11275efac);
          func_0x00010c0fc340();
          if ((uVar2 & 1) != 0) {
            return;
          }
        }
        if (*(char *)(param_5 + _DAT_11275efb0) == '\x01') {
          lVar1 = *(long *)(param_5 + lVar3);
          func_0x00010c0b8420();
          if (0xfffffffffffffffc < lVar1 - 6U) {
            return;
          }
        }
        func_0x00010c28ac40(param_2,param_3,*(undefined8 *)(param_5 + lVar3));
        func_0x00010c28ac20(param_1,*(undefined8 *)(param_5 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c28c210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,param_4,*(undefined8 *)(param_5 + _DAT_11275ef9c),
                   PTR_s_updateVisibilityForRotation_grav_112680aa8);
        return;
      }
    }
  }
  return;
}



/* Entry: 106e0f100; end: 106e0f11f; -[SCOperaGLImageLayerViewController pinchGestureTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0f100(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275efb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e0f120; end: 106e0f1fb; -[SCOperaGLImageLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0f120(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275efb4);
  _objc_storeStrong(param_1 + _DAT_11275efac,0);
  _objc_storeStrong(param_1 + _DAT_11275ef9c,0);
  _objc_storeStrong(param_1 + _DAT_11275ef98,0);
  _objc_storeStrong(param_1 + _DAT_11275ef90,0);
  _objc_storeStrong(param_1 + _DAT_11275efb8,0);
  _objc_storeStrong(param_1 + _DAT_11275ef74,0);
  _objc_storeStrong(param_1 + _DAT_11275ef94,0);
  _objc_storeStrong(param_1 + _DAT_11275ef7c,0);
  _objc_storeStrong(param_1 + _DAT_11275ef84,0);
  _objc_storeStrong(param_1 + _DAT_11275ef88,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ef80,0);
  return;
}



/* Entry: 106e0f1fc; end: 106e0f287;  */

undefined8 FUN_106e0f1fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf3ec40();
    if (lVar1 - 3U < 0x21) {
      uVar3 = *(undefined8 *)(&UNK_10ddee368 + (lVar1 - 3U) * 8);
      goto LAB_106e0f26c;
    }
  }
  uVar3 = 0;
LAB_106e0f26c:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 106e0f288; end: 106e0f2df; -[SCOperaGLVideoLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0f288(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6fd8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11275efbc));
  return;
}



/* Entry: 106e0f2e0; end: 106e0f353; -[SCOperaGLVideoLayerView setGlVideoView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0f2e0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11275efbc;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    if (param_3 != 0) {
      func_0x00010c066fa0(param_1,param_2,param_3,0);
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e0f354; end: 106e0f363; -[SCOperaGLVideoLayerView glVideoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e0f354(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275efbc);
}



/* Entry: 106e0f364; end: 106e0f377; -[SCOperaGLVideoLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0f364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275efbc,0);
  return;
}



/* Entry: 106e0f378; end: 106e0f537; -[SCOperaGLVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:bandwidthEstimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e0f378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f6fe0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275efc0);
    *(undefined **)((long)puVar1 + (long)_DAT_11275efc0) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275efc4);
    *(undefined **)((long)puVar1 + (long)_DAT_11275efc4) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275efc8);
    *(undefined **)((long)puVar1 + (long)_DAT_11275efc8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c48c0;
    _objc_alloc();
    func_0x00010c00c300();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275efcc);
    *(undefined **)((long)puVar1 + (long)_DAT_11275efcc) = puVar3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11275efd0;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_5);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 106e0f538; end: 106e0f53f;  */

void FUN_106e0f538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceMotionManager_1125b9c90);
  return;
}



/* Entry: 106e0f540; end: 106e0faf3; -[SCOperaGLVideoLayerViewController loadView] */

/* WARNING: Possible PIC construction at 0x000106e0fbf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e0fbf8) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc60) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc00) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc34) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc38) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc3c) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc40) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc44) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc48) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc54) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc58) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc80) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc5c) */
/* WARNING: Removing unreachable block (ram,0x000106e0fca4) */
/* WARNING: Removing unreachable block (ram,0x00010c08cdc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0f540(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdVar1 = (double *)(param_5 + _DAT_11275efd4);
  lVar10 = param_5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar9 = param_5;
  dVar11 = param_1;
  dVar13 = param_2;
  dVar14 = param_3;
  dVar15 = param_4;
  func_0x00010c08c520(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb1c0();
  *pdVar1 = param_1 + dVar13;
  pdVar1[1] = param_2 + dVar11;
  pdVar1[2] = param_3 - (dVar13 + dVar15);
  pdVar1[3] = param_4 - (dVar11 + dVar14);
  _objc_release(lVar9);
  _objc_release(lVar10);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar12 = *(undefined8 *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(uVar12,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_5);
  _objc_release(puVar2);
  lVar10 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar10);
  lVar10 = param_5;
  func_0x00010c08c520();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar10;
  func_0x00010bfdb4e0();
  _objc_release(lVar10);
  if ((int)lVar9 != 0) {
    lVar10 = param_5;
    func_0x00010bf46560(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a1a0();
    lVar9 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar12);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(lVar10);
  }
  lVar10 = (long)_DAT_11275efd8;
  if (*(long *)(param_5 + lVar10) == 0) {
    puVar2 = PTR_PTR_1126d2b40;
    _objc_alloc();
    uVar16 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar17 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010c013de0(uVar16,uVar17,pdVar1[2],pdVar1[3]);
    uVar12 = *(undefined8 *)(param_5 + lVar10);
    *(undefined **)(param_5 + lVar10) = puVar2;
    _objc_release(uVar12);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + lVar10));
    _objc_release(puVar2);
    lVar9 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar9);
    lVar9 = param_5;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c99e0;
    func_0x00010c233ac0(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1f3c0();
    _objc_release(lVar4);
    _objc_release(puVar2);
    _objc_release(lVar3);
    _objc_release(lVar9);
    if ((int)lVar5 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010c013de0(uVar16,uVar17,pdVar1[2],pdVar1[3]);
      lVar9 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar9);
      puVar6 = PTR_PTR_1126afd30;
      _objc_alloc();
      func_0x00010bfffc60();
      lVar9 = (long)_DAT_11275efdc;
      uVar12 = *(undefined8 *)(param_5 + lVar9);
      *(undefined **)(param_5 + lVar9) = puVar6;
      _objc_release(uVar12);
      func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar9));
      func_0x00010c202c80(*(undefined8 *)(param_5 + lVar9));
      uVar17 = *(undefined8 *)(param_5 + lVar10);
      func_0x00010bf4dce0(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMidX();
      uVar7 = *(undefined8 *)(param_5 + lVar10);
      uVar12 = uVar16;
      func_0x00010bf4dce0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMidY();
      func_0x00010c17a6a0(uVar16,uVar12,*(undefined8 *)(param_5 + lVar9));
      _objc_release(uVar7);
      _objc_release(uVar17);
      func_0x00010befbb60(puVar2);
      _objc_release(puVar2);
    }
  }
  lVar9 = (long)_DAT_11275efe0;
  if (*(long *)(param_5 + lVar9) == 0) {
    puVar2 = PTR_PTR_1126d1378;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),pdVar1[2],pdVar1[3]);
    uVar12 = *(undefined8 *)(param_5 + lVar9);
    *(undefined **)(param_5 + lVar9) = puVar2;
    _objc_release(uVar12);
    func_0x00010c221ca0(*(undefined8 *)(param_5 + lVar9));
    uVar12 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010bfccde0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4c20();
    _objc_release(uVar12);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010bfccde0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1917e0();
    _objc_release(uVar12);
    _objc_release(puVar2);
  }
  lVar9 = (long)_DAT_11275efe4;
  if (*(long *)(param_5 + lVar9) == 0) {
    puVar2 = PTR_PTR_1126d2b38;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),pdVar1[2],pdVar1[3]);
    func_0x00010c1a3c20();
    uVar12 = *(undefined8 *)(param_5 + lVar9);
    *(undefined **)(param_5 + lVar9) = puVar2;
    _objc_release(uVar12);
  }
  uVar12 = *(undefined8 *)(param_5 + lVar10);
  func_0x00010bf4dce0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar12);
  puVar2 = PTR_PTR_1126d2b48;
  _objc_alloc();
  lVar10 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061460(*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3]);
  uVar12 = *(undefined8 *)(param_5 + _DAT_11275efe8);
  *(undefined **)(param_5 + _DAT_11275efe8) = puVar2;
  _objc_release(uVar12);
  _objc_release();
  *(undefined1 *)(param_5 + _DAT_11275efec) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar10 + _DAT_11275eff0) != 0) {
    lVar8 = (long)_DAT_11275efe4;
    lVar9 = (long)_DAT_11275eff4;
    if (*(long *)(lVar10 + lVar8) != *(long *)(lVar10 + lVar9)) {
      func_0x00010c12c960();
      func_0x00010bfb68e0(*(undefined8 *)(lVar10 + lVar8));
      func_0x00010c19f0e0(*(undefined8 *)(lVar10 + lVar9));
      uVar16 = *(undefined8 *)(lVar10 + lVar9);
      _objc_retain(uVar16);
      uVar12 = *(undefined8 *)(lVar10 + lVar8);
      *(undefined8 *)(lVar10 + lVar8) = uVar16;
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(lVar10 + _DAT_11275efd8);
      func_0x00010bf4dce0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar12);
    }
  }
  lVar9 = lVar10;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010c07cc60();
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar10 + _DAT_11275efe4),
             PTR_s_setTranslatesAutoresizingMaskInt_112664100,(int)lVar8 == 0);
  return;
}



/* Entry: 106e0faf4; end: 106e0fd0f; -[SCOperaGLVideoLayerViewController _updateLayout] */

/* WARNING: Possible PIC construction at 0x000106e0fbf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e0fbf8) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc60) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc00) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc34) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc38) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc3c) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc40) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc44) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc48) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc54) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc58) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc80) */
/* WARNING: Removing unreachable block (ram,0x000106e0fc5c) */
/* WARNING: Removing unreachable block (ram,0x000106e0fca4) */
/* WARNING: Removing unreachable block (ram,0x00010c08cdc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0faf4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_11275eff0) != 0) {
    lVar4 = (long)_DAT_11275efe4;
    lVar2 = (long)_DAT_11275eff4;
    if (*(long *)(param_1 + lVar4) != *(long *)(param_1 + lVar2)) {
      func_0x00010c12c960();
      func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar4));
      func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
      uVar3 = *(undefined8 *)(param_1 + lVar2);
      _objc_retain(uVar3);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = uVar3;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + _DAT_11275efd8);
      func_0x00010bf4dce0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar1);
    }
  }
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c07cc60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c219b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275efe4),
             PTR_s_setTranslatesAutoresizingMaskInt_112664100,(int)lVar4 == 0);
  return;
}



/* Entry: 106e0fd10; end: 106e0fe8f; -[SCOperaGLVideoLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0fd10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [48];
  
  lVar6 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    lVar6 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07cc60();
    func_0x00010beda6a0(param_1);
    _objc_release(lVar6);
    func_0x00010beaed80(param_1);
    func_0x00010beab0c0(param_1);
    func_0x00010be977a0(auStack_70,param_1);
    lVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010be91ee0();
    if ((int)lVar6 != 0) {
      lVar6 = (long)_DAT_11275eff8;
      if (*(long *)(param_1 + lVar6) == 0) {
        lVar1 = param_1;
        func_0x00010c0f0be0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar2 = lVar4;
        func_0x00010010fab4(lVar4,PTR_DAT_1126a57d8);
        lVar1 = lVar4;
        if ((int)lVar2 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar4);
        uVar5 = *(undefined8 *)(param_1 + lVar6);
        *(long *)(param_1 + lVar6) = lVar1;
        _objc_release(uVar5);
      }
    }
  }
  return;
}



/* Entry: 106e0fe90; end: 106e0ff73; -[SCOperaGLVideoLayerViewController _rotateTransform] */

void FUN_106e0fe90(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dVar4 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  lVar1 = param_2;
  dStack_60 = dVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c064360();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    dVar3 = -1.5707963267948966;
  }
  else {
    dVar3 = 1.0;
    if (lVar2 != 2) goto LAB_106e0ff30;
    dVar3 = 1.5707963267948966;
  }
  _CGAffineTransformMakeRotation(&uStack_70,dVar3);
  func_0x00010bde8060(param_2);
  func_0x00010bde8060(param_2);
  dVar3 = dVar4 / dVar3;
LAB_106e0ff30:
  _CGAffineTransformMakeScale(auStack_a0,dVar3,dVar3);
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  dStack_c0 = dStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  _CGAffineTransformConcat(param_1,auStack_a0,&uStack_d0);
  return;
}



/* Entry: 106e0ff74; end: 106e1011b; -[SCOperaGLVideoLayerViewController _updateLayerLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e0ff74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  byte param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar4 = (long)_DAT_11275efec;
  if ((param_5 & 1) == 0) {
    if ((*(byte *)(param_3 + lVar4) & 1) == 0) {
      return;
    }
    *(byte *)(param_3 + lVar4) = param_5;
    func_0x00010bf47880(0,0,*(undefined8 *)(param_3 + _DAT_11275efe8),param_4,1);
  }
  else {
    *(byte *)(param_3 + lVar4) = param_5;
    _objc_initWeak(auStack_58,param_3);
    lVar4 = param_3;
    func_0x00010bee8920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6700();
    lVar2 = param_3;
    func_0x00010c08c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b8420();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106e1011c;
    puStack_70 = &UNK_11097e6b0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar4);
    lStack_68 = lVar4;
    func_0x000107dbb1d4(param_1,param_2,lVar3,lVar4,&puStack_88);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_58);
  }
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(param_3);
  return;
}



/* Entry: 106e1011c; end: 106e101ef;  */

void FUN_106e1011c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106e101f0;
  puStack_68 = &UNK_11084d6b8;
  _objc_copyWeak(auStack_58,param_3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 106e101f0; end: 106e1026f;  */

void FUN_106e101f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bee8920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != lVar3) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bde5800(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e10270; end: 106e1033b; -[SCOperaGLVideoLayerViewController _configureRotatingViewManipulatorWithMediaSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e10270(double param_1,double param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar7 = (long)_DAT_11275efe8;
  uVar6 = *(undefined8 *)(param_3 + lVar7);
  lVar3 = param_3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8420();
  lVar4 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c65c0();
  dVar9 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar9 = INFINITY;
    }
    else {
      dVar9 = param_1 / param_2;
    }
  }
  func_0x00010bf47880(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar4 = *(long *)(param_3 + lVar7);
  uVar5 = *(undefined8 *)(param_3 + _DAT_11275effc);
  dVar8 = 0.0;
  _objc_retain();
  _objc_retain(uVar5);
  uVar6 = uVar5;
  func_0x00010c075560();
  lVar3 = lVar4;
  func_0x00010c0b8420();
  if ((int)uVar6 == 0) {
    if (lVar3 == 4) {
      _objc_retain(lVar4);
      _objc_retain(uVar5);
      func_0x00010c0895e0(lVar4);
      dVar11 = dVar8;
      func_0x00010c29f6c0(lVar4);
      dVar10 = 0.0;
      if (dVar11 != 0.0) {
        if (dVar9 == 0.0) {
          dVar10 = INFINITY;
        }
        else {
          dVar10 = dVar11 / dVar9;
        }
      }
      func_0x00010bf47880(dVar8,dVar10,lVar4);
      dVar8 = 0.0;
      func_0x00010c28ac20(lVar4);
      func_0x00010c089cc0(lVar4);
      dVar11 = ABS(dVar8);
      func_0x00010c29f6c0(lVar4);
      func_0x00010bf20c00(lVar4);
      _objc_release(lVar4);
      bVar1 = false;
      bVar2 = false;
      if (dVar11 < 2.356194490192345) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar11)) {
          bVar1 = dVar11 == 0.7853981633974483;
          bVar2 = 0.7853981633974483 <= dVar11;
        }
      }
      if (!bVar2 || bVar1) {
        dVar10 = dVar8;
      }
      func_0x00010c139580(0x3ff0000000000000,dVar9 / dVar10,0x3ff0000000000000,uVar5);
      _objc_release(uVar5);
    }
  }
  else if (lVar3 == 3) {
    func_0x000107dbb0a0(0,lVar4,uVar5);
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106e1033c; end: 106e10493; -[SCOperaGLVideoLayerViewController _setupBoomboxVisibilityController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1033c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = param_2;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  if ((uVar3 & 1) == 0) {
    uVar6 = *(ulong *)(param_2 + (long)_DAT_11275f000);
    *(undefined8 *)(param_2 + (long)_DAT_11275f000) = 0;
  }
  else {
    uVar6 = param_2;
    func_0x00010c0f0be0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126d2b50;
    _objc_alloc();
    uVar6 = param_2;
    func_0x00010c118dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2f60(param_1,puVar4,param_3,uVar6);
    uVar5 = *(undefined8 *)(param_2 + (long)_DAT_11275f000);
    *(undefined **)(param_2 + (long)_DAT_11275f000) = puVar4;
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106e10494; end: 106e104a7; -[SCOperaGLVideoLayerViewController setupPlaybackAnalyticsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e10494(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275f004,param_3);
  return;
}



/* Entry: 106e104a8; end: 106e1050b; -[SCOperaGLVideoLayerViewController pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e104a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bec3b80();
  lVar1 = param_1 + _DAT_11275f004;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar1,param_2,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e1050c; end: 106e10577; -[SCOperaGLVideoLayerViewController resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1050c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010beaeee0();
  func_0x00010bec1080(param_1);
  lVar1 = param_1 + _DAT_11275f004;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e10578; end: 106e1058b; -[SCOperaGLVideoLayerViewController supportedResponsiveLayoutType] */

void FUN_106e10578(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2268f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSSet_1126ae870,PTR_s_setWithObject__112667460,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9310);
  return;
}



/* Entry: 106e1058c; end: 106e105c3; -[SCOperaGLVideoLayerViewController viewWillFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1058c(long param_1)

{
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11275efdc));
  func_0x00010beaeee0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec1090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPlaybackIfNecessary_11258ddc8);
  return;
}



/* Entry: 106e105c4; end: 106e10643; -[SCOperaGLVideoLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e105c4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6fe0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + _DAT_11275efe4));
  *(undefined1 *)(param_1 + _DAT_11275f008) = 1;
  func_0x00010beaed80(param_1);
  func_0x00010beaeee0(param_1);
  func_0x00010bec1080(param_1);
  return;
}



/* Entry: 106e10644; end: 106e106a3; -[SCOperaGLVideoLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e10644(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6fe0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  func_0x00010bec3b80(param_1);
  *(undefined1 *)(param_1 + _DAT_11275f00c) = 0;
  *(undefined1 *)(param_1 + _DAT_11275f008) = 0;
  return;
}



/* Entry: 106e106a4; end: 106e106ab; -[SCOperaGLVideoLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_106e106a4(void)

{
  return 0;
}



/* Entry: 106e106ac; end: 106e10747; -[SCOperaGLVideoLayerViewController shareableMedia] */

void FUN_106e106ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0b380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c90a8;
    _objc_alloc(PTR_PTR_1126c90a8);
    func_0x00010bee8920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060b40(puVar3,param_2,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e10748; end: 106e107bf; -[SCOperaGLVideoLayerViewController _requiresNGSMEPlayback] */

bool FUN_106e10748(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 106e107c0; end: 106e108ff; -[SCOperaGLVideoLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e107c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf16020(param_4);
  uVar2 = param_4;
  func_0x00010bf16020(param_4);
  _objc_release(param_4);
  lVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29a020();
  lVar5 = param_1;
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107dc331c(lVar4,param_3,lVar5,uVar1,uVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  if ((int)lVar4 != 0) {
    lVar3 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 == 0) {
      func_0x00010beaeee0(param_1);
      func_0x00010be78e00(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275efd8),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106e10900; end: 106e10937; -[SCOperaGLVideoLayerViewController mediaIsBeingPreparedForDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e10900(long param_1)

{
  if ((*(char *)(param_1 + _DAT_11275f010) == '\x01') &&
     (*(char *)(param_1 + _DAT_11275f00c) != '\x01')) {
    return 1;
  }
  return 0;
}



/* Entry: 106e10938; end: 106e109af; -[SCOperaGLVideoLayerViewController setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e10938(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0efa0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)param_1,*(undefined8 *)(param_2 + (long)_DAT_11275f014),
             PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 106e109b0; end: 106e10c1f; -[SCOperaGLVideoLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e109b0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0c5840(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0c5840(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    if ((int)lVar3 == 0) {
      lVar3 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0ffbc0();
      func_0x00010bea7860(param_1,param_2,lVar4 == 1);
      _objc_release(lVar3);
    }
    else {
      func_0x00010bea7860(param_1,param_2,1);
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0fc2e0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11275effc);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c0fc2e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010c210240(uVar5,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010beeec40(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010beeec40(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010c161c20(*(undefined8 *)(param_1 + _DAT_11275f000),param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010beeec40(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010c161b40(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e10c20; end: 106e10cff; -[SCOperaGLVideoLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e10c20(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6fe0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_teardown_112678538);
  func_0x00010c281b20(*(undefined8 *)(param_1 + _DAT_11275efc8));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f01c);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed1a80(param_1);
  _objc_release(uVar1);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + _DAT_11275efc0));
  func_0x00010c139840(*(undefined8 *)(param_1 + _DAT_11275efe8));
  *(undefined1 *)(param_1 + _DAT_11275f00c) = 0;
  func_0x00010bec3b80(param_1);
  func_0x00010be92e00(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f020);
  *(undefined8 *)(param_1 + _DAT_11275f020) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f024);
  *(undefined8 *)(param_1 + _DAT_11275f024) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11275f028) = 0;
  return;
}



/* Entry: 106e10d00; end: 106e10dc3; -[SCOperaGLVideoLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e10d00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275f024);
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c120300(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar4,puVar2);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + _DAT_11275f020);
  func_0x00010bf60c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010bef7f60(puVar1,param_2,lVar3);
  }
  func_0x00010bee3d20(param_1,param_2,puVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e10dc4; end: 106e10faf; -[SCOperaGLVideoLayerViewController _updateViewParamsWithSpectaclesInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e10dc4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar10 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010c07cc60();
  _objc_release(lVar10);
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c0c2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar10 = (long)_DAT_11275efe8;
    func_0x00010c0c2c20(*(undefined8 *)(param_2 + lVar10));
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2348;
    func_0x00010c0cd980();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0cd980(*(undefined8 *)(param_2 + lVar10));
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010c0c4a80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010beed820(*(undefined8 *)(param_2 + _DAT_11275efc0));
    param_1 = param_1 * 1000.0;
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_4);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be977a0(&uStack_110);
  lVar10 = param_4;
  func_0x00010bf69a40(param_4);
  _objc_retainAutoreleasedReturnValue();
  dVar11 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar10);
  _CGAffineTransformMakeScale(&uStack_170,dVar11,dVar11);
  uStack_198 = uStack_108;
  uStack_1a0 = uStack_110;
  uStack_188 = uStack_f8;
  uStack_190 = uStack_100;
  uStack_178 = uStack_e8;
  uStack_180 = uStack_f0;
  _CGAffineTransformConcat(&uStack_140,&uStack_170,&uStack_1a0);
  lVar10 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = uStack_138;
  uStack_170 = uStack_140;
  uStack_158 = uStack_128;
  uStack_160 = uStack_130;
  uStack_148 = uStack_118;
  uStack_150 = uStack_120;
  func_0x00010c219960();
  _objc_release(lVar10);
  lVar10 = param_4;
  func_0x00010bf69a40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c1677c0(*(undefined8 *)(param_4 + _DAT_11275efd8));
  _objc_release(lVar10);
  lVar10 = param_4;
  func_0x00010bf69a40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c1677c0(*(undefined8 *)(param_4 + _DAT_11275efe4));
  _objc_release(lVar10);
  if (param_1 == 0.0) {
    func_0x00010be95e80();
  }
  else {
    func_0x00010be70e60(param_4);
  }
  return;
}



/* Entry: 106e10fb0; end: 106e110fb; -[SCOperaGLVideoLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e10fb0(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010be977a0(&uStack_70);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  dVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(&uStack_d0,dVar2,dVar2);
  uStack_f8 = uStack_68;
  uStack_100 = uStack_70;
  uStack_e8 = uStack_58;
  uStack_f0 = uStack_60;
  uStack_d8 = uStack_48;
  uStack_e0 = uStack_50;
  _CGAffineTransformConcat(&uStack_a0,&uStack_d0,&uStack_100);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c1677c0(*(undefined8 *)(param_2 + _DAT_11275efd8));
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  func_0x00010c1677c0(*(undefined8 *)(param_2 + _DAT_11275efe4));
  _objc_release(lVar1);
  if (param_1 == 0.0) {
    func_0x00010be95e80();
  }
  else {
    func_0x00010be70e60(param_2);
  }
  return;
}



/* Entry: 106e110fc; end: 106e1110b; -[SCOperaGLVideoLayerViewController didScrollHorizontallyWithOffset:] */

void FUN_106e110fc(double param_1,undefined8 param_2)

{
  if (param_1 == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010be95e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__resumePlaybackIfNecessary_112583140);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be70e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__pausePlayer_112579d38);
  return;
}



/* Entry: 106e1110c; end: 106e1118f; -[SCOperaGLVideoLayerViewController _resetHorizontalPageOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1110c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11275efd8));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11275efe4));
  return;
}



/* Entry: 106e11190; end: 106e11503; -[SCOperaGLVideoLayerViewController _observeNGSMEPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e11190(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar9 = (long)_DAT_11275eff0;
  if (*(long *)(param_1 + lVar9) != 0) {
    lVar8 = (long)_DAT_11275f02c;
    if (*(long *)(param_1 + lVar8) == 0) {
      puVar2 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar2;
      _objc_release(uVar7);
      _objc_initWeak(auStack_78,param_1);
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c100d20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106e11504;
      puStack_88 = &UNK_11084a018;
      _objc_copyWeak(auStack_80,auStack_78);
      uVar7 = uVar3;
      func_0x00010c25ff60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c100f00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = puVar2;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x106e1154c;
      puStack_b0 = &UNK_11097e6e0;
      _objc_copyWeak(auStack_a8,auStack_78);
      uVar7 = uVar3;
      func_0x00010c25ff60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c100e00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_d0,auStack_78);
      uVar7 = uVar3;
      func_0x00010c25ff60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    lVar9 = (long)_DAT_11275f020;
    if (*(long *)(param_1 + lVar9) == 0) {
      if (*(long *)(param_1 + _DAT_11275f030) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(*(long *)(param_1 + _DAT_11275f030) + 0x10) == 2;
      }
      puVar2 = PTR_PTR_1126d2b60;
      _objc_alloc();
      puVar4 = PTR_PTR_1126aeea8;
      _objc_opt_new(PTR_PTR_1126aeea8);
      lVar8 = param_1;
      func_0x00010c0eaa40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c0ea360(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf461c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c036da0(0);
      uVar7 = *(undefined8 *)(param_1 + lVar9);
      *(undefined **)(param_1 + lVar9) = puVar2;
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar8);
      _objc_release(puVar4);
      if (bVar1) {
        func_0x00010bf7bd40(*(undefined8 *)(param_1 + lVar9));
      }
    }
  }
  return;
}



/* Entry: 106e11504; end: 106e11593;  */

void FUN_106e11504(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ca00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e11594; end: 106e11647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e11594(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 8) == 2)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf11280();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
        puVar3 = PTR_PTR_1126b2638;
        func_0x00010bf112e0(PTR_PTR_1126b2638);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf04420(param_1);
        _objc_release(puVar3);
      }
      func_0x00010bf78e40(*(undefined8 *)(param_1 + _DAT_11275f020));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106e11648; end: 106e116a7; -[SCOperaGLVideoLayerViewController _handleNGSMEModelChange:] */

void FUN_106e11648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e116a8;
  puStack_20 = &UNK_11097e740;
  uStack_18 = param_1;
  func_0x00010c0c0800(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_11097e770);
  return;
}



/* Entry: 106e116a8; end: 106e116af;  */

void FUN_106e116a8(void)

{
  return;
}



/* Entry: 106e116b0; end: 106e1182b; -[SCOperaGLVideoLayerViewController _handleNGSMEStatusChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e116b0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar3 = *(ulong *)(param_3 + 0x10);
    if (3 < (long)uVar3) {
      if (((uVar3 == 4) || (uVar3 == 5)) || (uVar3 == 6)) {
        uVar2 = *(undefined8 *)(param_3 + 0x18);
        _objc_retain(uVar2);
        func_0x00010c1b8520(param_1,param_2,uVar2);
        _objc_release(uVar2);
      }
      goto LAB_106e11804;
    }
    if (1 < uVar3) {
      if (uVar3 == 2) {
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275efd8),param_2,0);
        func_0x00010be9f700(param_1);
        goto LAB_106e11804;
      }
      if (uVar3 != 3) goto LAB_106e11804;
    }
  }
  lVar4 = *(long *)(param_1 + _DAT_11275f030);
  if ((lVar4 == 0) || (fVar5 = *(float *)(lVar4 + 8), fVar5 == 0.0)) {
    if ((param_3 != 0) && (0.0 < *(float *)(param_3 + 8))) {
      func_0x00010bf7bd40(*(undefined8 *)(param_1 + _DAT_11275f020));
      goto LAB_106e11804;
    }
    if (lVar4 == 0) goto LAB_106e11804;
    fVar5 = *(float *)(lVar4 + 8);
  }
  if ((0.0 < fVar5) && ((param_3 == 0 || (*(float *)(param_3 + 8) == 0.0)))) {
    lVar4 = (long)_DAT_11275eff0;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c07a400();
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11275f020);
      if (*(long *)(param_1 + lVar4) == 0) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
      }
      else {
        func_0x00010bf60480(&uStack_58);
      }
      _CMTimeGetSeconds(&uStack_58);
      func_0x00010bf7ba20(uVar2);
    }
  }
LAB_106e11804:
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275f030);
  *(long *)(param_1 + _DAT_11275f030) = param_3;
  _objc_release(uVar2);
  return;
}



/* Entry: 106e1182c; end: 106e118a7; -[SCOperaGLVideoLayerViewController _unobserveAVPlayerItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1182c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275efc4);
  uVar2 = *(undefined8 *)PTR__AVPlayerItemFailedToPlayToEndTimeNotification_1103480d0;
  _objc_retain(param_3);
  func_0x00010c12d5c0(uVar1,param_2,param_1,uVar2,param_3);
  func_0x00010c281a80(*(undefined8 *)(param_1 + _DAT_11275efc8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e118a8; end: 106e11a5b; -[SCOperaGLVideoLayerViewController _observeAVPlayerItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e118a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010befa240(*(undefined8 *)(param_1 + _DAT_11275efc4));
  lVar6 = (long)_DAT_11275f01c;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252d60();
  _objc_release(lVar1);
  if (lVar2 == 2) {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf5f0a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8520(param_1);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11275efc8);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0e0780(uVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e11a5c; end: 106e11bf3;  */

void FUN_106e11a5c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_106e11bcc;
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_106e11bbc:
    _objc_release(uVar2);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
      _objc_release(uVar1);
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_106e11bcc;
    }
    puVar4 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar2 = uVar1;
    func_0x00010c252d60();
    if (uVar2 == 2) {
      uVar2 = uVar1;
      func_0x00010bf987e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8520(param_1);
      goto LAB_106e11bbc;
    }
  }
  _objc_release(uVar1);
LAB_106e11bcc:
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e11bf4; end: 106e11daf; -[SCOperaGLVideoLayerViewController _observeAVPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e11bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  lVar3 = (long)_DAT_11275efc8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106e11db0;
  puStack_78 = &UNK_110929a90;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_retain(param_3);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 106e11db0; end: 106e11f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e11db0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510;
    uVar5 = param_4;
    func_0x00010c0e00e0(param_4,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c067ec0();
    if ((int)uVar2 == 0) {
      uVar2 = param_4;
      func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c067ec0();
      _objc_release(uVar2);
      _objc_release(uVar5);
      if ((int)uVar3 == 1) {
        func_0x00010bf7bd40(*(undefined8 *)(param_1 + _DAT_11275f020));
        goto LAB_106e11f20;
      }
    }
    else {
      _objc_release(uVar5);
    }
    uVar5 = param_4;
    func_0x00010c0e00e0(param_4,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c067ec0();
    if ((int)uVar2 == 1) {
      uVar2 = param_4;
      func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c067ec0();
      _objc_release(uVar2);
      _objc_release(uVar5);
      if ((int)uVar4 == 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11275f014);
        func_0x00010c07a400();
        if (iVar1 != 0) {
          uVar5 = *(undefined8 *)(param_1 + _DAT_11275f020);
          if (param_3 == 0) {
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
          }
          else {
            func_0x00010bf60480(&uStack_68,param_3);
          }
          _CMTimeGetSeconds(&uStack_68);
          func_0x00010bf7ba20(uVar5);
        }
      }
    }
    else {
      _objc_release(uVar5);
    }
  }
LAB_106e11f20:
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e11f70; end: 106e11feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e11f70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    if ((lVar2 == *(long *)(lVar1 + _DAT_11275f01c)) && (func_0x00010c252d60(), lVar2 == 2)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf987e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8520(lVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e11fec; end: 106e1204f; -[SCOperaGLVideoLayerViewController setLastPlaybackError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e11fec(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11275f024;
  if (*(long *)(param_1 + lVar2) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010be9f6e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e12050; end: 106e12113; -[SCOperaGLVideoLayerViewController _playerFailedToPlayToEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e12050(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + _DAT_11275f01c);
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar1 == lVar2) {
    lVar1 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8520(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e12114; end: 106e1217f; -[SCOperaGLVideoLayerViewController _sendMediaFailsToDisplayEvent] */

void FUN_106e12114(undefined8 param_1,undefined8 param_2)

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



/* Entry: 106e12180; end: 106e12247; -[SCOperaGLVideoLayerViewController videoPlaybackSession:didRenderFrameAtTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e12180(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275efd8),param_2,0);
  func_0x00010be9f700(param_1);
  puVar1 = PTR_s_playerItemDidReachEnd__11252c4a8;
  if (*(char *)(param_1 + _DAT_11275f00c) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275efc4);
    uVar4 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275f01c);
    func_0x00010bf5f0a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240(uVar3,param_2,param_1,puVar1,uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106e12248; end: 106e124f3; -[SCOperaGLVideoLayerViewController _sendMediaStartsToDisplayIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e12248(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_11275f00c;
  if (((*(byte *)(param_2 + lVar7) & 1) == 0) && (*(char *)(param_2 + _DAT_11275f008) == '\x01')) {
    func_0x00010c138160(*(undefined8 *)(param_2 + _DAT_11275efc0));
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c29ad40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar8 = (long)_DAT_11275f014;
    puStack_98 = puVar2;
    func_0x00010c26faa0(*(undefined8 *)(param_2 + lVar8));
    param_1 = param_1 * 1000.0;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2348;
    puStack_88 = puVar3;
    func_0x00010c29b4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_90 = puVar4;
    func_0x00010c250000(*(undefined8 *)(param_2 + lVar8));
    func_0x00010c0df720(param_1 * 1000.0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_88,&puStack_98,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_2,param_3,puVar1,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    *(undefined1 *)(param_2 + lVar7) = 1;
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c29a1a0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_2,param_3,puVar3);
    _objc_release(puVar3);
    lVar7 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c07cc60();
    _objc_release(lVar7);
    if ((int)lVar8 != 0) {
      lVar7 = param_2;
      func_0x00010c118dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c9410;
      func_0x00010c141a60();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR____kCFBooleanFalse_11034ab60;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_a8 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_a0,&puStack_a8,1
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7e940(lVar7,param_3,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(lVar7);
    }
    param_2 = *(long *)(param_2 + _DAT_11275efdc);
    func_0x00010c2558c0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_2 + _DAT_11275f038) = 0;
  func_0x00010bec3660();
  func_0x00010becb020(param_2);
  func_0x00010be934c0(param_2);
  func_0x00010c0f0be0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(param_2);
  func_0x00010c069d00(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 106e124f4; end: 106e1258f; -[SCOperaGLVideoLayerViewController _stopVideoAndTearDownSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e124f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_11275f038) = 0;
  func_0x00010bec3660();
  func_0x00010becb020(param_1);
  func_0x00010be934c0(param_1);
  func_0x00010c0f0be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  func_0x00010c069d00(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106e12590; end: 106e1259f; -[SCOperaGLVideoLayerViewController _resetTrackingParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e12590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275efe8),PTR_s_resetTrackingParams_11262c0a0);
  return;
}



/* Entry: 106e125a0; end: 106e127e3; -[SCOperaGLVideoLayerViewController _startPlaybackIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e125a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = param_1;
  func_0x00010be91ee0();
  if ((int)lVar8 == 0) {
    lVar8 = (long)_DAT_11275f010;
    if ((*(byte *)(param_1 + lVar8) & 1) == 0) {
      func_0x00010be94220(param_1);
      *(undefined1 *)(param_1 + lVar8) = 1;
      func_0x00010bef9980(*(undefined8 *)(param_1 + _DAT_11275f014),param_2,param_1);
      func_0x00010bec0360(param_1);
      func_0x00010bdcdac0(param_1);
      lVar8 = (long)_DAT_11275f020;
      if (*(long *)(param_1 + lVar8) == 0) {
        puVar1 = PTR_PTR_1126d2b60;
        _objc_alloc();
        lVar2 = *(long *)(param_1 + _DAT_11275f01c);
        func_0x00010bf5f0a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c252d60();
        puVar4 = PTR_PTR_1126aeea8;
        _objc_opt_new(PTR_PTR_1126aeea8);
        uVar9 = *(undefined8 *)(param_1 + _DAT_11275efd0);
        lVar5 = param_1;
        func_0x00010c0eaa40(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010c0ea360(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf461c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c036da0(0,puVar1,param_2,lVar3 != 1,puVar4,uVar9,lVar5,lVar7);
        uVar9 = *(undefined8 *)(param_1 + lVar8);
        *(undefined **)(param_1 + lVar8) = puVar1;
        _objc_release(uVar9);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(puVar4);
        _objc_release(lVar2);
      }
      if (*(char *)(param_1 + _DAT_11275f038) == '\x01') {
        func_0x00010be95ea0();
      }
      else {
        func_0x00010bec1120(param_1);
      }
      lVar8 = (long)_DAT_11275f01c;
      uVar9 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf5f0a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed1a80(param_1,param_2,uVar9);
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf5f0a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be65980(param_1,param_2,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar9);
      return;
    }
  }
  else {
    func_0x00010bec1120(param_1);
    func_0x00010be666a0(param_1);
    if (*(long *)(param_1 + _DAT_11275eff0) != 0) {
      *(undefined1 *)(param_1 + _DAT_11275f010) = 1;
    }
  }
  return;
}



/* Entry: 106e127e4; end: 106e127ff; -[SCOperaGLVideoLayerViewController _resumePlaybackIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e127e4(long param_1)

{
  if (*(char *)(param_1 + _DAT_11275f010) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be95eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumePlayer_112583148);
    return;
  }
  return;
}



/* Entry: 106e12800; end: 106e1285b; -[SCOperaGLVideoLayerViewController _preparePlaybackForFastStartIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e12800(long param_1)

{
  if (((*(byte *)(param_1 + _DAT_11275f038) & 1) == 0) &&
     ((*(byte *)(param_1 + _DAT_11275efec) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_11275f038) = 1;
    func_0x00010bec1120(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be70e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pausePlayer_112579d38);
    return;
  }
  return;
}



/* Entry: 106e1285c; end: 106e128e3; -[SCOperaGLVideoLayerViewController _startPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1285c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c2504a0(*(undefined8 *)(param_1 + _DAT_11275f014));
  func_0x00010c2504a0(*(undefined8 *)(param_1 + _DAT_11275eff0));
  *(undefined1 *)(param_1 + _DAT_11275f03c) = 1;
  lVar1 = param_1 + _DAT_11275f004;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e128e4; end: 106e1296b; -[SCOperaGLVideoLayerViewController _resumePlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e128e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c13d7c0(*(undefined8 *)(param_1 + _DAT_11275f014));
  func_0x00010c13d7c0(*(undefined8 *)(param_1 + _DAT_11275eff0));
  *(undefined1 *)(param_1 + _DAT_11275f03c) = 1;
  lVar1 = param_1 + _DAT_11275f004;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e1296c; end: 106e129f3; -[SCOperaGLVideoLayerViewController _pausePlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e1296c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c0f6000(*(undefined8 *)(param_1 + _DAT_11275f014),param_2,1);
  func_0x00010c0f5fe0(*(undefined8 *)(param_1 + _DAT_11275eff0));
  *(undefined1 *)(param_1 + _DAT_11275f03c) = 0;
  lVar1 = param_1 + _DAT_11275f004;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar1,param_2,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e129f4; end: 106e12b33; -[SCOperaGLVideoLayerViewController _stopPlaybackIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e129f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11275f014;
  func_0x00010c2568a0(*(undefined8 *)(param_1 + lVar4));
  lVar5 = param_1 + _DAT_11275f004;
  _objc_loadWeakRetained(lVar5);
  lVar1 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar5);
  if (*(char *)(param_1 + _DAT_11275f010) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11275f010) = 0;
    func_0x00010c0f5b20(*(undefined8 *)(param_1 + _DAT_11275efc0));
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275efc4);
    lVar5 = (long)_DAT_11275f01c;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf5f0a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf5f0a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1a80(param_1);
    _objc_release(uVar2);
    func_0x00010bec3160(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar4),PTR_s_removeListener__112628e00,param_1);
    return;
  }
  return;
}



/* Entry: 106e12b34; end: 106e132bf; -[SCOperaGLVideoLayerViewController _setupPlaybackSessionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e12b34(undefined **param_1,undefined **param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined **unaff_x23;
  undefined *puVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined4 uVar19;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_1;
  func_0x00010be91ee0();
  if ((int)ppuVar9 == 0) {
    ppuVar17 = param_1;
    func_0x00010bee8920();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126ba150;
    ppuVar3 = param_1;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar17;
    func_0x00010c22e420();
    _objc_release(ppuVar18);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar14 == 0) {
      unaff_x23 = (undefined **)(long)_DAT_11275f01c;
      if (*(long *)((long)param_1 + (long)unaff_x23) == 0) {
        puVar14 = PTR_PTR_1126c9e68;
        _objc_alloc();
        func_0x00010c037060();
        uVar1 = *(undefined8 *)((long)param_1 + (long)unaff_x23);
        *(undefined **)((long)param_1 + (long)unaff_x23) = puVar14;
        _objc_release(uVar1);
        ppuVar9 = *(undefined ***)((long)param_1 + (long)unaff_x23);
        func_0x00010be65960(param_1);
        func_0x00010c1e7640(0,*(undefined8 *)((long)param_1 + (long)unaff_x23));
        func_0x00010c2241a0(0,*(undefined8 *)((long)param_1 + (long)unaff_x23));
      }
      lVar12 = (long)_DAT_11275f014;
      if (*(long *)((long)param_1 + lVar12) == 0) {
        ppuVar9 = ppuVar17;
        func_0x00010c279200();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar9);
        func_0x00010beda760(param_1);
        puVar14 = PTR_PTR_1126bf4d0;
        func_0x00010c22bec0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126bf4f0;
        _objc_alloc();
        ppuVar9 = param_1;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar9;
        func_0x00010c0eed40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = param_1;
        func_0x00010be24060(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = param_1;
        func_0x00010c08c0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar5;
        func_0x00010c0cd220();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = param_1;
        func_0x00010be24060(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03c700();
        uVar1 = *(undefined8 *)((long)param_1 + (long)_DAT_11275f048);
        *(undefined **)((long)param_1 + (long)_DAT_11275f048) = puVar11;
        _objc_release(uVar1);
        _objc_release(ppuVar6);
        _objc_release(ppuVar8);
        _objc_release(ppuVar5);
        _objc_release(ppuVar18);
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        puVar11 = PTR_PTR_1126bf500;
        _objc_alloc();
        unaff_x23 = *(undefined ***)((long)param_1 + (long)_DAT_11275efe0);
        func_0x00010bfccde0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be70200();
        ppuVar9 = param_1;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07cc60();
        ppuVar4 = param_1;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07cc60();
        func_0x00010c03c720();
        uVar1 = *(undefined8 *)((long)param_1 + lVar12);
        *(undefined **)((long)param_1 + lVar12) = puVar11;
        _objc_release(uVar1);
        _objc_release(ppuVar4);
        _objc_release(ppuVar9);
        _objc_release(unaff_x23);
        ppuVar9 = ppuVar17;
        func_0x00010bde5520(param_1);
        func_0x00010c10a180(*(undefined8 *)((long)param_1 + lVar12));
        _objc_release(puVar14);
        _objc_release(ppuVar3);
      }
    }
    else {
      puVar14 = PTR_PTR_1126ba158;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e87858;
      unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(puVar14);
      ppuVar9 = ppuVar3;
      func_0x00010c1b8520(param_1);
      _objc_release(ppuVar3);
    }
    goto LAB_106e13248;
  }
  ppuVar3 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110dcb8b8;
  ppuVar17 = ppuVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  if (ppuVar17 == (undefined **)0x0) {
    ppuVar3 = param_1;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = ppuVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110f378b8;
    ppuVar4 = unaff_x23;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    _objc_release(ppuVar3);
    if (ppuVar4 != (undefined **)0x0) goto LAB_106e12bd8;
LAB_106e130ec:
    ppuVar3 = param_1;
    func_0x00010bee8920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar9 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar9;
      func_0x00010c0eed40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = param_1;
      func_0x00010be24060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar5;
      func_0x00010c0cd220();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = param_1;
      func_0x00010be24060(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar18;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      _objc_release(ppuVar8);
      _objc_release(ppuVar5);
      _objc_release(ppuVar18);
      _objc_release(ppuVar3);
      _objc_release(ppuVar9);
      unaff_x23 = (undefined **)PTR_PTR_1126bf678;
      _objc_alloc();
      ppuVar9 = param_1;
      func_0x00010bee8920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar9;
      FUN_106e15094();
      _objc_retainAutoreleasedReturnValue();
      param_2 = ppuVar3;
      func_0x00010af1f598(unaff_x23,ppuVar3,0);
      _objc_release(ppuVar3);
      _objc_release(ppuVar9);
      ppuVar9 = unaff_x23;
      func_0x00010beae340(param_1);
      _objc_release(unaff_x23);
      _objc_release(ppuVar7);
    }
  }
  else {
    ppuVar4 = ppuVar17;
    func_0x00010c27bfa0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0) goto LAB_106e130ec;
LAB_106e12bd8:
    lVar12 = (long)_DAT_11275f040;
    if ((ppuVar4 != *(undefined ***)((long)param_1 + lVar12)) &&
       (ppuVar4 != *(undefined ***)((long)param_1 + (long)_DAT_11275f044))) {
      _objc_retain(ppuVar4);
      uVar1 = *(undefined8 *)((long)param_1 + lVar12);
      *(undefined ***)((long)param_1 + lVar12) = ppuVar4;
      _objc_release(uVar1);
      _objc_initWeak(&puStack_88,ppuVar4);
      _objc_initWeak(auStack_90,param_1);
      uVar1 = *(undefined8 *)((long)param_1 + lVar12);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_106e132c0;
      puStack_a8 = &UNK_11097e790;
      unaff_x23 = &puStack_c0;
      _objc_copyWeak(auStack_a0,auStack_90);
      puVar2 = auStack_98;
      param_2 = &puStack_88;
      _objc_copyWeak();
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &puStack_c0;
      func_0x00010c297260(uVar1);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(&puStack_88);
    }
  }
  _objc_release(ppuVar4);
LAB_106e13248:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(&puStack_88);
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar9;
  _objc_retain(param_2);
  _objc_retain(ppuVar9);
  ppuVar3 = ppuVar17 + 4;
  _objc_loadWeakRetained();
  if (ppuVar3 != (undefined **)0x0) {
    lVar16 = (long)_DAT_11275f040;
    ppuVar18 = *(undefined ***)((long)ppuVar3 + lVar16);
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar5 = ppuVar17 + 5;
      _objc_loadWeakRetained();
      _objc_release();
      if (ppuVar18 == ppuVar5) {
        func_0x00010be934c0(ppuVar3);
        if ((param_2 == (undefined **)0x0) || (ppuVar9 != (undefined **)0x0)) {
          ppuVar18 = ppuVar3;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar18;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = &PTR____CFConstantStringClassReference_110dcb8b8;
          ppuVar8 = ppuVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar5);
          _objc_release(ppuVar18);
          ppuVar18 = ppuVar9;
          FUN_106e0f1fc();
          if ((ppuVar18 == (undefined **)0x0) || (ppuVar18 == (undefined **)0x2)) {
            func_0x00010c069d00(ppuVar8);
          }
          else if (ppuVar18 == (undefined **)0x1) {
            ppuVar17 = ppuVar17 + 5;
            _objc_loadWeakRetained();
            uVar1 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_11275f044);
            *(undefined ***)((long)ppuVar3 + (long)_DAT_11275f044) = ppuVar17;
            _objc_release(uVar1);
            ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            puVar14 = PTR_PTR_1126ba158;
            func_0x00010bf87dc0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar17;
            func_0x00010c1b8520(ppuVar3);
            _objc_release(ppuVar17);
            _objc_release(puVar11);
            _objc_release(puVar14);
          }
        }
        else {
          ppuVar4 = param_2;
          func_0x00010beae340(ppuVar3);
          ppuVar17 = ppuVar17 + 5;
          _objc_loadWeakRetained();
          uVar1 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_11275f044);
          *(undefined ***)((long)ppuVar3 + (long)_DAT_11275f044) = ppuVar17;
          _objc_release(uVar1);
          lVar13 = (long)_DAT_11275f03c;
          if (*(char *)((long)ppuVar3 + lVar13) == '\x01') {
            func_0x00010bec1080(ppuVar3);
            *(undefined1 *)((long)ppuVar3 + lVar13) = 0;
          }
          ppuVar8 = *(undefined ***)((long)ppuVar3 + lVar16);
          *(undefined8 *)((long)ppuVar3 + lVar16) = 0;
        }
        _objc_release(ppuVar8);
      }
    }
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar4);
    puVar14 = PTR_PTR_1126d23d0;
    if (ppuVar4 == (undefined **)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = ppuVar4[1];
    }
    _objc_retain(puVar11);
    ppuVar9 = param_2;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar9;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da320();
    _objc_release(ppuVar3);
    _objc_release(ppuVar17);
    _objc_release(ppuVar9);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar14 == 0) {
      puVar15 = (undefined *)(long)_DAT_11275eff0;
      if (*(long *)((long)param_2 + (long)puVar15) != 0) goto LAB_106e137f4;
      lVar16 = (long)_DAT_11275f034;
      _objc_retain(ppuVar4);
      uVar1 = *(undefined8 *)((long)param_2 + lVar16);
      *(undefined ***)((long)param_2 + lVar16) = ppuVar4;
      _objc_release(uVar1);
      ppuVar17 = (undefined **)(long)_DAT_11275eff8;
      puVar14 = *(undefined **)((long)param_2 + (long)ppuVar17);
      if (*(long *)((long)param_2 + lVar16) == 0) goto LAB_106e13844;
      uVar1 = *(undefined8 *)(*(long *)((long)param_2 + lVar16) + 8);
      while( true ) {
        _objc_retain(uVar1);
        puVar11 = puVar14;
        func_0x00010c101140();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)((long)param_2 + (long)puVar15);
        *(undefined **)((long)param_2 + (long)puVar15) = puVar11;
        _objc_release(uVar10);
        _objc_release(uVar1);
        ppuVar9 = param_2;
        func_0x00010c08c0e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ffbc0();
        func_0x00010c2009a0(*(undefined8 *)((long)param_2 + (long)puVar15));
        _objc_release(ppuVar9);
        ppuVar9 = param_2;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar9;
        func_0x00010bf0efa0();
        uVar19 = 0;
        if ((int)ppuVar3 == 0) {
          uVar19 = 0x3f800000;
        }
        func_0x00010c2241a0(uVar19,*(undefined8 *)((long)param_2 + (long)puVar15));
        _objc_release(ppuVar9);
        uVar1 = *(undefined8 *)((long)param_2 + (long)ppuVar17);
        func_0x00010c101080(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        _objc_retainAutoreleasedReturnValue();
        lVar16 = (long)_DAT_11275eff4;
        uVar10 = *(undefined8 *)((long)param_2 + lVar16);
        *(undefined8 *)((long)param_2 + lVar16) = uVar1;
        _objc_release(uVar10);
        func_0x00010c2218a0(*(undefined8 *)((long)param_2 + lVar16));
        func_0x00010c1ddc80(*(undefined8 *)((long)param_2 + (long)puVar15));
        func_0x00010c10a180(*(undefined8 *)((long)param_2 + (long)puVar15));
LAB_106e137f4:
        func_0x00010beda760(param_2);
LAB_106e137fc:
        _objc_release(ppuVar4);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) break;
        ___stack_chk_fail();
LAB_106e13844:
        uVar1 = 0;
      }
      return;
    }
    puVar14 = PTR_PTR_1126ba158;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar14);
    func_0x00010c1b8520(param_2);
    _objc_release(puVar11);
    goto LAB_106e137fc;
  }
  return;
}



/* Entry: 106e132c0; end: 106e13543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e132c0(long param_1,undefined **param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined4 uVar15;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar7 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    lVar12 = (long)_DAT_11275f040;
    lVar14 = *(long *)(lVar7 + lVar12);
    if (lVar14 != 0) {
      lVar1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar14 == lVar1) {
        func_0x00010be934c0(lVar7);
        if ((param_2 == (undefined **)0x0) || (param_3 != (undefined **)0x0)) {
          lVar12 = lVar7;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar12;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = &PTR____CFConstantStringClassReference_110dcb8b8;
          lVar1 = lVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          _objc_release(lVar12);
          ppuVar2 = param_3;
          FUN_106e0f1fc();
          if ((ppuVar2 == (undefined **)0x0) || (ppuVar2 == (undefined **)0x2)) {
            func_0x00010c069d00(lVar1);
          }
          else if (ppuVar2 == (undefined **)0x1) {
            param_1 = param_1 + 0x28;
            _objc_loadWeakRetained();
            uVar6 = *(undefined8 *)(lVar7 + _DAT_11275f044);
            *(long *)(lVar7 + _DAT_11275f044) = param_1;
            _objc_release(uVar6);
            ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
            puVar10 = PTR_PTR_1126ba158;
            func_0x00010bf87dc0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar2;
            func_0x00010c1b8520(lVar7);
            _objc_release(ppuVar2);
            _objc_release(puVar9);
            _objc_release(puVar10);
          }
        }
        else {
          ppuVar4 = param_2;
          func_0x00010beae340(lVar7);
          param_1 = param_1 + 0x28;
          _objc_loadWeakRetained();
          uVar6 = *(undefined8 *)(lVar7 + _DAT_11275f044);
          *(long *)(lVar7 + _DAT_11275f044) = param_1;
          _objc_release(uVar6);
          lVar14 = (long)_DAT_11275f03c;
          if (*(char *)(lVar7 + lVar14) == '\x01') {
            func_0x00010bec1080(lVar7);
            *(undefined1 *)(lVar7 + lVar14) = 0;
          }
          lVar1 = *(long *)(lVar7 + lVar12);
          *(undefined8 *)(lVar7 + lVar12) = 0;
        }
        _objc_release(lVar1);
      }
    }
  }
  _objc_release(lVar7);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar4);
    puVar10 = PTR_PTR_1126d23d0;
    if (ppuVar4 == (undefined **)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = ppuVar4[1];
    }
    _objc_retain(puVar9);
    ppuVar2 = param_2;
    func_0x00010c0ea360();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da320();
    _objc_release(ppuVar3);
    _objc_release(ppuVar13);
    _objc_release(ppuVar2);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar10 == 0) {
      puVar11 = (undefined *)(long)_DAT_11275eff0;
      if (*(long *)((long)param_2 + (long)puVar11) != 0) goto LAB_106e137f4;
      lVar5 = (long)_DAT_11275f034;
      _objc_retain(ppuVar4);
      uVar6 = *(undefined8 *)((long)param_2 + lVar5);
      *(undefined ***)((long)param_2 + lVar5) = ppuVar4;
      _objc_release(uVar6);
      ppuVar13 = (undefined **)(long)_DAT_11275eff8;
      puVar10 = *(undefined **)((long)param_2 + (long)ppuVar13);
      if (*(long *)((long)param_2 + lVar5) == 0) goto LAB_106e13844;
      uVar6 = *(undefined8 *)(*(long *)((long)param_2 + lVar5) + 8);
      while( true ) {
        _objc_retain(uVar6);
        puVar9 = puVar10;
        func_0x00010c101140();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)((long)param_2 + (long)puVar11);
        *(undefined **)((long)param_2 + (long)puVar11) = puVar9;
        _objc_release(uVar8);
        _objc_release(uVar6);
        ppuVar2 = param_2;
        func_0x00010c08c0e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ffbc0();
        func_0x00010c2009a0(*(undefined8 *)((long)param_2 + (long)puVar11));
        _objc_release(ppuVar2);
        ppuVar2 = param_2;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010bf0efa0();
        uVar15 = 0;
        if ((int)ppuVar3 == 0) {
          uVar15 = 0x3f800000;
        }
        func_0x00010c2241a0(uVar15,*(undefined8 *)((long)param_2 + (long)puVar11));
        _objc_release(ppuVar2);
        uVar6 = *(undefined8 *)((long)param_2 + (long)ppuVar13);
        func_0x00010c101080(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
        _objc_retainAutoreleasedReturnValue();
        lVar5 = (long)_DAT_11275eff4;
        uVar8 = *(undefined8 *)((long)param_2 + lVar5);
        *(undefined8 *)((long)param_2 + lVar5) = uVar6;
        _objc_release(uVar8);
        func_0x00010c2218a0(*(undefined8 *)((long)param_2 + lVar5));
        func_0x00010c1ddc80(*(undefined8 *)((long)param_2 + (long)puVar11));
        func_0x00010c10a180(*(undefined8 *)((long)param_2 + (long)puVar11));
LAB_106e137f4:
        func_0x00010beda760(param_2);
LAB_106e137fc:
        _objc_release(ppuVar4);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) break;
        ___stack_chk_fail();
LAB_106e13844:
        uVar6 = 0;
      }
      return;
    }
    puVar10 = PTR_PTR_1126ba158;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    func_0x00010c1b8520(param_2);
    _objc_release(puVar9);
    goto LAB_106e137fc;
  }
  return;
}



/* Entry: 106e13544; end: 106e1384b; -[SCOperaGLVideoLayerViewController _setupNGSMEPlayerWithPlaybackPackage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e13544(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = PTR_PTR_1126d23d0;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 8);
  }
  _objc_retain(uVar4);
  lVar5 = param_1;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da320(puVar6,param_2,uVar4,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)puVar6 != 0) {
    puVar6 = PTR_PTR_1126ba158;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e87858;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&uStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar2,param_2,puVar6,0x66,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010c1b8520(param_1,param_2,puVar2);
    _objc_release(puVar2);
    while( true ) {
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) break;
      ___stack_chk_fail();
LAB_106e13844:
      uVar4 = 0;
LAB_106e136ec:
      _objc_retain(uVar4);
      puVar2 = puVar6;
      func_0x00010c101140(puVar6,param_2,uVar4,0,1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(puVar7 + param_1);
      *(undefined **)(puVar7 + param_1) = puVar2;
      _objc_release(uVar3);
      _objc_release(uVar4);
      lVar5 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010c0ffbc0();
      func_0x00010c2009a0(*(undefined8 *)(puVar7 + param_1),param_2,lVar1 == 1);
      _objc_release(lVar5);
      lVar5 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010bf0efa0();
      uVar9 = 0;
      if ((int)lVar1 == 0) {
        uVar9 = 0x3f800000;
      }
      func_0x00010c2241a0(uVar9,*(undefined8 *)(puVar7 + param_1));
      _objc_release(lVar5);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c101080(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),uVar4,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_11275eff4;
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = uVar4;
      _objc_release(uVar3);
      func_0x00010c2218a0(*(undefined8 *)(param_1 + lVar5),param_2,
                          *(undefined8 *)PTR__AVLayerVideoGravityResizeAspect_110348048);
      func_0x00010c1ddc80(*(undefined8 *)(puVar7 + param_1),param_2,*(undefined8 *)(param_1 + lVar5)
                         );
      func_0x00010c10a180(*(undefined8 *)(puVar7 + param_1));
LAB_106e137f4:
      func_0x00010beda760(param_1);
    }
    return;
  }
  puVar7 = (undefined *)(long)_DAT_11275eff0;
  if (*(long *)(puVar7 + param_1) != 0) goto LAB_106e137f4;
  lVar5 = (long)_DAT_11275f034;
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar4);
  lVar8 = (long)_DAT_11275eff8;
  puVar6 = *(undefined **)(param_1 + lVar8);
  if (*(long *)(param_1 + lVar5) == 0) goto LAB_106e13844;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + lVar5) + 8);
  goto LAB_106e136ec;
}



/* Entry: 106e1384c; end: 106e13863; -[SCOperaGLVideoLayerViewController isRecyclable] */

uint FUN_106e1384c(uint param_1)

{
  func_0x00010be91ee0();
  return param_1 ^ 1;
}


