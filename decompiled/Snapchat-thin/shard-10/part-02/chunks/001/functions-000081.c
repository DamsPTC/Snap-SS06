/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b38c5c; end: 107b38c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38c5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276aa44),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b38c74; end: 107b38cc7; -[SCOperaTextLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38c74(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9f38;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276aa44));
  return;
}



/* Entry: 107b38cc8; end: 107b38d57; -[SCOperaTextLayerViewController shareableMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38cc8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276aa44;
  func_0x00010bf01b40(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_2 + lVar3));
  lVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + lVar3));
  puVar2 = PTR_PTR_1126c90a8;
  _objc_alloc(PTR_PTR_1126c90a8);
  func_0x00010c045ae0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b38d58; end: 107b38f5f; -[SCOperaTextLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38d58(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c074000(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 == 0) goto LAB_107b38f44;
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c074000(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  _objc_release(lVar2);
  _objc_release(puVar1);
  if ((int)lVar3 == 0) {
LAB_107b38ec0:
    uVar6 = 1;
  }
  else {
    uVar4 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c230ea0();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) {
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010c26cc80(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      if (lVar2 == 0) goto LAB_107b38ec0;
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010c26cc80(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1f3c0();
      _objc_release(lVar2);
      _objc_release(puVar1);
      uVar6 = (uint)lVar3 ^ 1;
    }
    else {
      uVar6 = 0;
    }
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c26cca0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(lVar2);
  _objc_release(puVar1);
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_11276aa44);
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee900();
  func_0x00010c28c240(uVar7,param_2,uVar6);
  _objc_release(param_1);
LAB_107b38f44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b38f60; end: 107b39077; -[SCOperaTextLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38f60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126d6a60;
  _objc_alloc();
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
  lVar2 = (long)_DAT_11276aa44;
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  *(undefined **)(param_1 + lVar2) = puVar1;
  _objc_release(uVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar2),param_2,
                      &PTR____CFConstantStringClassReference_110eae4d8);
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar2),param_2,
                      &PTR____CFConstantStringClassReference_110eae4d8);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b39078; end: 107b391f7; -[SCOperaTextLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39078(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar9 = (long)_DAT_11276aa44;
    uVar8 = *(undefined8 *)(param_2 + lVar9);
    lVar1 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2298a0(uVar8,param_3,lVar1);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126b2640;
    lVar1 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c298ec0();
    lVar3 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe4140();
    lVar5 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298f20();
    lVar6 = param_2;
    uVar8 = param_1;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe42c0();
    func_0x00010c08cb60(param_1,uVar8,puVar7,param_3,lVar2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c08d120(param_2,param_3,*(undefined8 *)(param_2 + lVar9),puVar7,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 107b391f8; end: 107b392e3; -[SCOperaTextLayerViewController image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b391f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_11276aa44;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  uVar5 = 0;
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
  uVar1 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _UIGraphicsGetCurrentContext();
  func_0x00010c12fc60(uVar1,param_6,uVar2);
  _objc_release(uVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _UIGraphicsBeginImageContextWithOptions(uVar5,param_4,0,0);
  _objc_release(lVar3);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  uVar2 = uVar1;
  func_0x00010bf89920(uVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b392e4; end: 107b392f7; -[SCOperaTextLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b392e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aa44,0);
  return;
}



/* Entry: 107b392f8; end: 107b39607; -[SCOperaCircularTimerLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b392f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126f9f40;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1d4c20(puVar1);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11276aa48;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c19bc80(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11276aa4c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c19bc80(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11276aa50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(uVar4);
    _objc_release(puVar2);
    func_0x00010c1bdd00(0x4004000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(uVar4);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11276aa54;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276aa58) = 0x3ff0000000000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b39608; end: 107b3967b; -[SCOperaCircularTimerLayerView setInnerTimerVisible:] */

/* WARNING: Possible PIC construction at 0x000107b3964c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b39650) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39608(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + _DAT_11276aa5c) = (char)param_3;
  uVar1 = 0x3f800000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_11276aa54),PTR_s_setOpacity__112652d18);
  return;
}



/* Entry: 107b3967c; end: 107b39697; -[SCOperaCircularTimerLayerView setInnerTimerMaxValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3967c(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  *(double *)(param_2 + _DAT_11276aa60) = dVar1;
  return;
}



/* Entry: 107b39698; end: 107b396b3; -[SCOperaCircularTimerLayerView setInnerTimerCurrentValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39698(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  *(double *)(param_2 + _DAT_11276aa64) = dVar1;
  return;
}



/* Entry: 107b396b4; end: 107b396cf; -[SCOperaCircularTimerLayerView setOuterTimerMaxValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b396b4(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  *(double *)(param_2 + _DAT_11276aa68) = dVar1;
  return;
}



/* Entry: 107b396d0; end: 107b396eb; -[SCOperaCircularTimerLayerView setOuterTimerCurrentValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b396d0(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  *(double *)(param_2 + _DAT_11276aa6c) = dVar1;
  return;
}



/* Entry: 107b396ec; end: 107b3970b; -[SCOperaCircularTimerLayerView setPercentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b396ec(double param_1,long param_2)

{
  *(double *)(param_2 + _DAT_11276aa58) = param_1 * 1.263157894736842 + 1.0;
  return;
}



/* Entry: 107b3970c; end: 107b399d3; -[SCOperaCircularTimerLayerView drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3970c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  
  func_0x00010bddeae0();
  dVar9 = param_1 * 0.5;
  lVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  dVar8 = dVar9;
  func_0x00010c1842e0(dVar9);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  func_0x00010bf19a00(9.5 - dVar9,9.5 - dVar9,param_1,param_1,dVar8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_2 + _DAT_11276aa48),param_3,puVar3);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(0x4012000000000000,0x4012000000000000,0x4024000000000000,0x4024000000000000,
                      0x4014000000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar2,param_3,puVar3);
  puVar4 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_2 + _DAT_11276aa4c),param_3,puVar4);
  dVar12 = *(double *)(param_2 + _DAT_11276aa64);
  dVar8 = 1.0 - *(double *)(param_2 + _DAT_11276aa6c) / *(double *)(param_2 + _DAT_11276aa68);
  dVar8 = (dVar8 + dVar8) * 3.141592653589793 + -1.5607963267948965;
  uVar10 = NEON_fminnm(dVar8,0x4012d97c7f3321d2);
  dVar11 = *(double *)(param_2 + _DAT_11276aa60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar8 = dVar8 * 0.5;
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11276aa58;
  func_0x00010bef6d40(dVar8,dVar8,dVar9 + *(double *)(param_2 + lVar7) * -2.25,0xbff921fb54442d18,
                      uVar10);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11276aa50);
  puVar5 = puVar4;
  _objc_retainAutorelease(puVar4);
  func_0x00010bdc1040();
  func_0x00010c1d9820(uVar10,param_3,puVar5);
  lVar1 = param_2;
  func_0x00010c0655e0();
  if ((int)lVar1 != 0) {
    dVar9 = 1.0 - dVar12 / dVar11;
    uVar10 = NEON_fminnm((dVar9 + dVar9) * 3.141592653589793 + -1.5607963267948965,
                         0x4012d97c7f3321d2);
    dVar9 = *(double *)(param_2 + lVar7);
    puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d18c0(dVar8,dVar8);
    func_0x00010bef6d40(dVar8,dVar8,dVar9 * 10.0 * 0.5,0xbff921fb54442d18,uVar10,puVar5,param_3,0);
    uVar10 = *(undefined8 *)(param_2 + _DAT_11276aa54);
    puVar6 = puVar5;
    _objc_retainAutorelease(puVar5);
    func_0x00010bdc1040();
    func_0x00010c1d9820(uVar10,param_3,puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b399d4; end: 107b39a0f; -[SCOperaCircularTimerLayerView intrinsicContentSize] */

undefined1  [16] FUN_107b399d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bddeae0();
  uVar1 = param_1;
  func_0x00010bddeae0(param_2);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107b39a10; end: 107b39a27; -[SCOperaCircularTimerLayerView _circleDiameter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107b39a10(long param_1)

{
  return *(double *)(param_1 + _DAT_11276aa58) * 19.0;
}



/* Entry: 107b39a28; end: 107b39a2f; -[SCOperaCircularTimerLayerView timerShape] */

undefined8 FUN_107b39a28(void)

{
  return 0;
}



/* Entry: 107b39a30; end: 107b39a3f; -[SCOperaCircularTimerLayerView innerTimerVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b39a30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276aa5c);
}



/* Entry: 107b39a40; end: 107b39a4f; -[SCOperaCircularTimerLayerView innerTimerMaxValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b39a40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aa60);
}



/* Entry: 107b39a50; end: 107b39a5f; -[SCOperaCircularTimerLayerView innerTimerCurrentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b39a50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aa64);
}



/* Entry: 107b39a60; end: 107b39a6f; -[SCOperaCircularTimerLayerView outerTimerMaxValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b39a60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aa68);
}



/* Entry: 107b39a70; end: 107b39a7f; -[SCOperaCircularTimerLayerView outerTimerCurrentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b39a70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aa6c);
}



/* Entry: 107b39a80; end: 107b39adf; -[SCOperaCircularTimerLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39a80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276aa54,0);
  _objc_storeStrong(param_1 + _DAT_11276aa50,0);
  _objc_storeStrong(param_1 + _DAT_11276aa4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aa48,0);
  return;
}



/* Entry: 107b39ae0; end: 107b39c03; -[SCOperaRectangularTimerLayerView initWithFrame:] */

undefined1 * FUN_107b39ae0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9f48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c1d4c20(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    func_0x00010c213040(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1eda0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b39c04; end: 107b39c13; -[SCOperaRectangularTimerLayerView setInnerTimerVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39c04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276aa70) = param_3;
  return;
}



/* Entry: 107b39c14; end: 107b39c2f; -[SCOperaRectangularTimerLayerView setInnerTimerMaxValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39c14(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  *(double *)(param_2 + _DAT_11276aa74) = dVar1;
  return;
}



/* Entry: 107b39c30; end: 107b39ce3; -[SCOperaRectangularTimerLayerView setInnerTimerCurrentValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39c30(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  
  dVar4 = 0.0;
  if (0.0 <= param_1) {
    dVar4 = param_1;
  }
  *(double *)(param_2 + _DAT_11276aa78) = dVar4;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0720c0(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c212f20(param_2,param_3,puVar1);
    func_0x00010c069fa0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b39ce4; end: 107b39cff; -[SCOperaRectangularTimerLayerView setOuterTimerMaxValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39ce4(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  *(double *)(param_2 + _DAT_11276aa7c) = dVar1;
  return;
}



/* Entry: 107b39d00; end: 107b39d1b; -[SCOperaRectangularTimerLayerView setOuterTimerCurrentValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39d00(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  *(double *)(param_2 + _DAT_11276aa80) = dVar1;
  return;
}



/* Entry: 107b39d1c; end: 107b39d1f; -[SCOperaRectangularTimerLayerView setPercentOffset:] */

void FUN_107b39d1c(void)

{
  return;
}



/* Entry: 107b39d20; end: 107b39d53; -[SCOperaRectangularTimerLayerView layoutSubviews] */

void FUN_107b39d20(undefined8 param_1)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4010000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b39d54; end: 107b39f7b; -[SCOperaRectangularTimerLayerView drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b39d54(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  puStack_78 = PTR_PTR_1126f9f48;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_drawRect__1125271c8);
  _UIGraphicsGetCurrentContext();
  dVar5 = 1.0 - *(double *)(param_1 + _DAT_11276aa80) / *(double *)(param_1 + _DAT_11276aa7c);
  func_0x00010bf20c00(param_1);
  uVar2 = 0;
  _CGPathCreateWithRoundedRect(0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetStrokeColorWithColor(plVar1,puVar4);
  _objc_release(puVar3);
  _CGContextSetLineWidth(0x4004000000000000,plVar1);
  _CGContextAddPath(plVar1,uVar2);
  _CGContextStrokePath(plVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bfce0e0(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(plVar1,puVar4);
  _objc_release(puVar3);
  dVar6 = 3.0;
  _CGContextSetLineWidth(0x4008000000000000,plVar1);
  _CGContextAddPath(plVar1,uVar2);
  _CGContextReplacePathWithStrokedPath(plVar1);
  _CGContextClip(plVar1);
  _CFRelease(uVar2);
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  dVar7 = dVar6;
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d18c0(dVar6 * 0.5,dVar7 * 0.5);
  func_0x00010bef6d40(dVar6 * 0.5,dVar7 * 0.5,
                      (double)SQRT((float)(dVar7 * dVar7 + dVar6 * dVar6)) * 0.5,0xbff921fb54442d18,
                      (dVar5 + dVar5) * 3.141592653589793 + -1.5707963267948966,puVar3);
  puVar4 = puVar3;
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1040();
  _CGContextAddPath(plVar1,puVar4);
  _CGContextFillPath(plVar1);
  _objc_release(puVar3);
  return;
}



/* Entry: 107b39f7c; end: 107b39fe7; -[SCOperaRectangularTimerLayerView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107b39f7c(long param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar2 = 35.0;
  if (100.0 <= *(double *)(param_1 + _DAT_11276aa78)) {
    dVar1 = 1.79769313486232e+308;
    func_0x00010c23d5a0(0x7fefffffffffffff,0x4041800000000000);
    dVar2 = 51.0;
    if (35.0 <= dVar1) {
      dVar2 = dVar1 + 16.0;
    }
  }
  auVar3._8_8_ = 0x4041800000000000;
  auVar3._0_8_ = dVar2;
  return auVar3;
}



/* Entry: 107b39fe8; end: 107b39fef; -[SCOperaRectangularTimerLayerView timerShape] */

undefined8 FUN_107b39fe8(void)

{
  return 1;
}



/* Entry: 107b39ff0; end: 107b39fff; -[SCOperaRectangularTimerLayerView innerTimerVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b39ff0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276aa70);
}



/* Entry: 107b3a000; end: 107b3a00f; -[SCOperaRectangularTimerLayerView innerTimerMaxValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3a000(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aa74);
}



/* Entry: 107b3a010; end: 107b3a01f; -[SCOperaRectangularTimerLayerView innerTimerCurrentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3a010(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aa78);
}



/* Entry: 107b3a020; end: 107b3a02f; -[SCOperaRectangularTimerLayerView outerTimerMaxValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3a020(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aa7c);
}



/* Entry: 107b3a030; end: 107b3a03f; -[SCOperaRectangularTimerLayerView outerTimerCurrentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3a030(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aa80);
}



/* Entry: 107b3a040; end: 107b3a097; -[SCOperaTimerLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

undefined1 * FUN_107b3a040(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9f50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithConfiguration_layerViewC_1125de030);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 107b3a098; end: 107b3a237; -[SCOperaTimerLayerViewController didReceiveUpdateProperties:] */

void FUN_107b3a098(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c2708e0(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c2708e0(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    func_0x00010bea86e0(param_1,param_2,lVar3,1);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c270780(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    func_0x00010bddfae0(param_1);
  }
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c270900(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c9410;
    func_0x00010c270900(PTR_PTR_1126c9410);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(puVar1);
    func_0x00010bdcae80(param_1,param_2,(uint)lVar3 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3a238; end: 107b3a35b; -[SCOperaTimerLayerViewController setupPlaybackProgressUpdateTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9f50;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setupPlaybackProgressUpdateTrack_112667e70,param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c1005e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276aa88);
  *(undefined8 *)(param_1 + _DAT_11276aa88) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107b3a35c; end: 107b3a3a3;  */

void FUN_107b3a35c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b3a3a4; end: 107b3a43f; -[SCOperaTimerLayerViewController loadView] */

void FUN_107b3a3a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(uVar2);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b3a440; end: 107b3a557; -[SCOperaTimerLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a440(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_107b3a530;
  lVar6 = (long)_DAT_11276aa8c;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 != 0) {
    func_0x00010c270800();
    lVar2 = param_4;
    func_0x00010c22a600();
    if (lVar1 == lVar2) goto LAB_107b3a530;
  }
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c22a600();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    ppuVar4 = &PTR_PTR_1126d6a68;
LAB_107b3a4e0:
    puVar3 = *ppuVar4;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar5);
  }
  else if (lVar2 == 0) {
    ppuVar4 = &PTR_PTR_1126d6a70;
    goto LAB_107b3a4e0;
  }
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
LAB_107b3a530:
  func_0x00010bde5220(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3a558; end: 107b3a59f; -[SCOperaTimerLayerViewController viewDidFullyAppear] */

void FUN_107b3a558(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9f50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010beb0940(param_1);
  return;
}



/* Entry: 107b3a5a0; end: 107b3a5d7; -[SCOperaTimerLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a5a0(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11276aa84) & 1) != 0) {
    return;
  }
  func_0x00010bddfae0();
                    /* WARNING: Could not recover jumptable at 0x00010bde5230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__configureLayerView_112556e28);
  return;
}



/* Entry: 107b3a5d8; end: 107b3a62f; -[SCOperaTimerLayerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a5d8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9f50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  if (*(long *)(param_1 + _DAT_11276aa90) != 0) {
    func_0x00010bddfae0(param_1);
  }
  return;
}



/* Entry: 107b3a630; end: 107b3a733; -[SCOperaTimerLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a630(long param_1)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9f50;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c22a600();
  _objc_release(lVar1);
  dVar3 = 18.0;
  dVar4 = 10.0;
  if (lVar2 != 1) {
    dVar4 = 18.0;
  }
  lVar2 = (long)_DAT_11276aa8c;
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c202c80(*(undefined8 *)(param_1 + lVar2));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMinY();
  dVar3 = dVar4 + dVar3;
  func_0x00010c2172c0(dVar3,*(undefined8 *)(param_1 + lVar2));
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMaxX();
  func_0x00010c1ee020((dVar3 - dVar4) + -12.0,*(undefined8 *)(param_1 + lVar2));
  _objc_release(lVar1);
  return;
}



/* Entry: 107b3a734; end: 107b3a75b; -[SCOperaTimerLayerViewController pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a734(long param_1)

{
  if (*(long *)(param_1 + _DAT_11276aa90) != 0) {
    *(undefined1 *)(param_1 + _DAT_11276aa94) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bddfaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupTimerDisplayLink_112555858);
    return;
  }
  return;
}



/* Entry: 107b3a75c; end: 107b3a793; -[SCOperaTimerLayerViewController resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a75c(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276aa94;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010beb0940();
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 107b3a794; end: 107b3a797; -[SCOperaTimerLayerViewController start] */

void FUN_107b3a794(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setInitialViewTimerValue_112586c78);
  return;
}



/* Entry: 107b3a798; end: 107b3a7bb; -[SCOperaTimerLayerViewController stop] */

void FUN_107b3a798(undefined8 param_1)

{
  func_0x00010bddfae0();
                    /* WARNING: Could not recover jumptable at 0x00010bde5230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__configureLayerView_112556e28);
  return;
}



/* Entry: 107b3a7bc; end: 107b3a7cb; -[SCOperaTimerLayerViewController setPausedForAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a7bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276aa84) = param_3;
  return;
}



/* Entry: 107b3a7cc; end: 107b3a7db; -[SCOperaTimerLayerViewController isPausedForAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b3a7cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276aa84);
}



/* Entry: 107b3a7dc; end: 107b3a8cb; -[SCOperaTimerLayerViewController _setupTimerDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a7dc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c1102a0();
  _objc_release(lVar4);
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bddfaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupTimerDisplayLink_112555858);
    return;
  }
  lVar4 = (long)_DAT_11276aa90;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  func_0x00010bf85b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1dffe0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b3a8cc; end: 107b3a917; -[SCOperaTimerLayerViewController _cleanupTimerDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a8cc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276aa90;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11276aa98) = 0;
  return;
}



/* Entry: 107b3a918; end: 107b3aa0f; -[SCOperaTimerLayerViewController _timerDisplayLinkDidFire] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3a918(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  lVar2 = (long)_DAT_11276aa98;
  dVar5 = *(double *)(param_2 + lVar2);
  lVar4 = (long)_DAT_11276aa90;
  func_0x00010c2709c0(*(undefined8 *)(param_2 + lVar4));
  if (dVar5 == 0.0) {
    *(double *)(param_2 + lVar2) = param_1;
    return;
  }
  dVar5 = param_1 - *(double *)(param_2 + lVar2);
  func_0x00010c2709c0(*(undefined8 *)(param_2 + lVar4));
  *(double *)(param_2 + lVar2) = param_1;
  lVar2 = (long)_DAT_11276aa8c;
  uVar3 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c0ee6c0(uVar3);
  param_1 = param_1 - dVar5;
  func_0x00010c1d6da0(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c0655c0(uVar3);
  param_1 = param_1 - dVar5;
  func_0x00010c1ad120(uVar3);
  func_0x00010c0ee6c0(*(undefined8 *)(param_2 + lVar2));
  if (param_1 <= 0.0) {
    lVar4 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c0b5820();
    _objc_release(lVar4);
    if ((int)lVar1 != 0) {
      func_0x00010bea4b40(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar2),PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 107b3aa10; end: 107b3aa3b; -[SCOperaTimerLayerViewController _configureLayerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3aa10(long param_1)

{
  func_0x00010bea4b40();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aa8c),PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 107b3aa3c; end: 107b3aaeb; -[SCOperaTimerLayerViewController _updateLayerViewWithTimeLeft:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3aa3c(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  uVar1 = param_2;
  dVar5 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1102a0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar4 = (long)_DAT_11276aa8c;
  func_0x00010c0ee6c0(*(undefined8 *)(param_2 + lVar4));
  param_1 = dVar5 - param_1;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c0655c0(uVar3);
  dVar5 = dVar5 - param_1;
  func_0x00010c1ad120(dVar5,uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c0ee6c0(uVar3);
  func_0x00010c1d6da0(dVar5 - param_1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar4),PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 107b3aaec; end: 107b3abef; -[SCOperaTimerLayerViewController _setTimerVisible:animated:] */

void FUN_107b3aaec(double param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5)

{
  undefined8 uVar1;
  double dVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  dVar2 = (double)param_4;
  uVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40();
  _objc_release(uVar1);
  if (0.009999999776482582 <= ABS(param_1 - dVar2)) {
    if (param_5 == 0) {
      uVar1 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(dVar2);
      _objc_release(uVar1);
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107b3abf0;
      puStack_58 = &UNK_110848c48;
      uStack_50 = param_2;
      dStack_48 = dVar2;
      func_0x00010bf03440(0x3fb999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,0x10000,
                          &puStack_70,0);
    }
    if ((param_4 & 1) == 0) {
      func_0x00010bddfae0(param_2);
    }
  }
  return;
}



/* Entry: 107b3abf0; end: 107b3ac33;  */

void FUN_107b3abf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b3ac34; end: 107b3afbf; -[SCOperaTimerLayerViewController _setInitialViewTimerValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3ac34(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  
  lVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  lVar7 = (long)_DAT_11276aa8c;
  func_0x00010c1d6dc0(*(undefined8 *)(param_2 + lVar7));
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  lVar2 = param_2;
  dVar8 = param_1;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6880();
  param_1 = param_1 - dVar8;
  func_0x00010c1d6da0(*(undefined8 *)(param_2 + lVar7));
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0de880();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c276460();
    func_0x00010c1ad140(*(undefined8 *)(param_2 + lVar7));
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276e60();
    lVar2 = param_2;
    dVar8 = param_1;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6880();
    param_1 = param_1 - dVar8;
    func_0x00010c1ad120(*(undefined8 *)(param_2 + lVar7));
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    lVar2 = param_2;
    dVar8 = param_1;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276e60();
    func_0x00010c1ad160(*(undefined8 *)(param_2 + lVar7),param_3,
                        0.10000000149011612 < ABS(param_1 - dVar8));
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1102a0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010c1d6da0(0,*(undefined8 *)(param_2 + lVar7));
    }
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0de880();
    lVar3 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    param_1 = param_1 * (double)lVar2;
    func_0x00010c1ad140(param_1,*(undefined8 *)(param_2 + lVar7));
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0de880();
    lVar3 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5ff40();
    lVar5 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    param_1 = param_1 * (double)(lVar2 - lVar4);
    func_0x00010c1ad120(param_1,*(undefined8 *)(param_2 + lVar7));
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1102a0();
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_2 + lVar7);
    lVar1 = param_2;
    if ((int)lVar2 == 0) {
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6880();
    }
    else {
      param_1 = 0.0;
      func_0x00010c1d6da0(0,uVar6);
      uVar6 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c08c0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
    }
    dVar8 = param_1;
    func_0x00010c0655c0(uVar6);
    func_0x00010c1ad120(dVar8 - param_1,uVar6);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5ff40();
    lVar3 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0de880();
    func_0x00010c1ad160(*(undefined8 *)(param_2 + lVar7),param_3,lVar2 + 1 < lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  *(undefined8 *)(param_2 + _DAT_11276aa98) = 0;
  return;
}



/* Entry: 107b3afc0; end: 107b3b0bf; -[SCOperaTimerLayerViewController _animateOnVisibilityChange:] */

void FUN_107b3afc0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  double dStack_48;
  
  if (param_3 != 0) {
    uVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee8c0();
    uVar3 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beee900();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beee900();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107b3b0c0;
  puStack_58 = &UNK_110848c48;
  uStack_50 = param_1;
  dStack_48 = (double)param_3;
  func_0x00010bf03440(puVar1,param_2,0x30000,&puStack_70,0);
  _objc_release(uVar2);
  return;
}



/* Entry: 107b3b0c0; end: 107b3b113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b0c0(long param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276aa8c);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)dVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b3b114; end: 107b3b15b; -[SCOperaTimerLayerViewController _updateTimerWithTimeLeft:] */

void FUN_107b3b114(double param_1,undefined8 param_2)

{
  if (0.0 < param_1) {
    func_0x00010bddfae0();
    func_0x00010beda720(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010beb0950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setupTimerDisplayLink_112589bf8);
    return;
  }
  return;
}



/* Entry: 107b3b15c; end: 107b3b223; -[SCOperaTimerLayerViewController _updateTimerOnEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b15c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c252880();
  if (lVar1 == 2) {
    func_0x00010bddfae0(param_2);
  }
  else {
    if (lVar1 == 1) {
      uVar2 = *(undefined8 *)(param_2 + _DAT_11276aa90);
      uVar3 = 1;
    }
    else {
      if (lVar1 != 0) goto LAB_107b3b20c;
      lVar1 = param_2;
      func_0x00010c117a40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c276460();
      dVar4 = param_1;
      func_0x00010bf5fc00(param_4);
      _objc_release(lVar1);
      func_0x00010bee2260(param_1 - dVar4,param_2);
      uVar2 = *(undefined8 *)(param_2 + _DAT_11276aa90);
      uVar3 = 0;
    }
    func_0x00010c1d9980(uVar2,param_3,uVar3);
  }
LAB_107b3b20c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b3b224; end: 107b3b273; -[SCOperaTimerLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b224(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276aa90,0);
  _objc_storeStrong(param_1 + _DAT_11276aa88,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aa8c,0);
  return;
}



/* Entry: 107b3b274; end: 107b3b367; -[SCOperaRemoteVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:bandwidthEstimator:] */

undefined8
FUN_107b3b274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010bf62b80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001a00(param_1,param_2,param_3,param_4,param_5,param_6,uVar2,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107b3b368; end: 107b3b44b; -[SCOperaRemoteVideoLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:customVolumeController:bandwidthEstimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b3b368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f9f58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11276aaa0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276aaa4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107b3b44c; end: 107b3b4b7; -[SCOperaRemoteVideoLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b44c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9f58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  if (*(char *)(param_1 + _DAT_11276aaa8) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11276aaa8) = 0;
  }
  else {
    func_0x00010c29c980(*(undefined8 *)(param_1 + _DAT_11276aaac));
  }
  return;
}



/* Entry: 107b3b4b8; end: 107b3b4cb; -[SCOperaRemoteVideoLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:] */

void FUN_107b3b4b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 0xfffffffffffffffe) == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadVideo_112604bb0);
    return;
  }
  return;
}



/* Entry: 107b3b4cc; end: 107b3b4db; -[SCOperaRemoteVideoLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29ca10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aaac),PTR_s_viewDidFullyDisappear_112684ca8);
  return;
}



/* Entry: 107b3b4dc; end: 107b3b5bb; -[SCOperaRemoteVideoLayerViewController loadVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9cb8;
  func_0x00010c22b6a0(PTR_PTR_1126c9cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9880();
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar4 = (long)_DAT_11276aaac;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c09c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_5 + lVar4),PTR_s_loadVideo_112604bb0)
  ;
  return;
}



/* Entry: 107b3b5bc; end: 107b3b5cb; -[SCOperaRemoteVideoLayerViewController pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aaac),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 107b3b5cc; end: 107b3b5db; -[SCOperaRemoteVideoLayerViewController resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b5cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aaac),PTR_s_resume_11262ce90);
  return;
}



/* Entry: 107b3b5dc; end: 107b3b5eb; -[SCOperaRemoteVideoLayerViewController setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b5dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aaac),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 107b3b5ec; end: 107b3b64f; -[SCOperaRemoteVideoLayerViewController shareableMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b5ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c90a8;
  _objc_alloc(PTR_PTR_1126c90a8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276aaac);
  func_0x00010bfe8c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045ae0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b3b650; end: 107b3b6ab; -[SCOperaRemoteVideoLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b650(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9f58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  func_0x00010c26ac40(*(undefined8 *)(param_1 + _DAT_11276aaac));
  *(undefined1 *)(param_1 + _DAT_11276aaa8) = 0;
  return;
}



/* Entry: 107b3b6ac; end: 107b3b6bb; -[SCOperaRemoteVideoLayerViewController currentViewParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b6ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aaac),PTR_s_videoParameters_112684440);
  return;
}



/* Entry: 107b3b6bc; end: 107b3b6cb; -[SCOperaRemoteVideoLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

bool FUN_107b3b6bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 5U < 2;
}



/* Entry: 107b3b6cc; end: 107b3b727; -[SCOperaRemoteVideoLayerViewController setupPlaybackAnalyticsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b6cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276aab0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010c229100(*(undefined8 *)(param_1 + _DAT_11276aaac));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3b728; end: 107b3b8b7; -[SCOperaRemoteVideoLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b728(ulong param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d6a78;
  _objc_alloc();
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  func_0x00010c013de0(uVar9,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar8 = (long)_DAT_11276aab4;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar7);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar8),param_2,1);
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
    if ((uVar6 & 1) != 0) goto LAB_107b3b850;
    uVar2 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a1a0();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar9);
    _objc_release(uVar7);
  }
  _objc_release(uVar2);
LAB_107b3b850:
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b3b8b8; end: 107b3b96f; -[SCOperaRemoteVideoLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9f58;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = *(undefined8 *)(param_5 + _DAT_11276aaac);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 107b3b970; end: 107b3bcf3; -[SCOperaRemoteVideoLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3b970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_b8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126d6a80;
  lVar19 = (long)_DAT_11276aaac;
  lVar18 = *(long *)(param_1 + lVar19);
  if (lVar18 == 0) {
    lVar18 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0ea360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf99b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12a7c0(puVar3,param_2,lVar18,lVar1,lVar2,0,
                        *(undefined8 *)(param_1 + _DAT_11276aaa0));
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar19);
    *(undefined **)(param_1 + lVar19) = puVar3;
    _objc_release(uVar17);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar18);
    func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar19));
    lVar18 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c29bf00(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar18,param_2,uVar17);
    _objc_release(uVar17);
    _objc_release(lVar18);
    func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar19),param_2,param_1);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar19),param_2,param_1);
    func_0x00010c1d8aa0(*(undefined8 *)(param_1 + lVar19),param_2,param_1);
    lVar18 = *(long *)(param_1 + lVar19);
  }
  lVar19 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar19;
  func_0x00010c29a460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c29bb40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfb12c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c112dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  if (lVar9 == 0) {
    uStack_b8 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = uStack_b8;
    func_0x00010c112dc0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar11 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c29b140();
  lVar13 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf1f3c0();
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d080(lVar18,param_2,lVar1,lVar4,lVar5,lVar7,lVar10,lVar12,(char)lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar11);
  if (lVar9 == 0) {
    _objc_release(lVar10);
    _objc_release(uStack_b8);
  }
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar19);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b3bcf4; end: 107b3bd03; -[SCOperaRemoteVideoLayerViewController rotateBasedOnOrientation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3bcf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1419f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aaac),PTR_s_rotateVideoBasedOnOrientation_11262e098
            );
  return;
}



/* Entry: 107b3bd04; end: 107b3bd6f; -[SCOperaRemoteVideoLayerViewController pageIsFullyVisible:] */

undefined8 FUN_107b3bd04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f13c0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107b3bd70; end: 107b3bddb; -[SCOperaRemoteVideoLayerViewController pageIsPartiallyVisible:] */

undefined8 FUN_107b3bd70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f13e0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107b3bddc; end: 107b3be47; -[SCOperaRemoteVideoLayerViewController relativePositionForPageId:] */

undefined8 FUN_107b3bddc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c128180(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107b3be48; end: 107b3beab; -[SCOperaRemoteVideoLayerViewController safeInsetsForPage] */

undefined8 FUN_107b3be48(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149200();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107b3beac; end: 107b3beaf; -[SCOperaRemoteVideoLayerViewController setImageForBackdrop:] */

void FUN_107b3beac(void)

{
  return;
}



/* Entry: 107b3beb0; end: 107b3beeb; -[SCOperaRemoteVideoLayerViewController isPaused] */

undefined8 FUN_107b3beb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c079ba0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107b3beec; end: 107b3beef; -[SCOperaRemoteVideoLayerViewController remoteVideoViewControllerDidRotateToLandscape:] */

void FUN_107b3beec(void)

{
  return;
}



/* Entry: 107b3bef0; end: 107b3bf63; -[SCOperaRemoteVideoLayerViewController remoteVideoViewControllerDidPressExitButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3bef0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276aaac);
  func_0x00010c29a860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b3bf64; end: 107b3bfd7; -[SCOperaRemoteVideoLayerViewController remoteVideoViewControllerDidPressShowActionMenuButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3bf64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276aaac);
  func_0x00010c29a860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04440(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b3bfd8; end: 107b3c03b; -[SCOperaRemoteVideoLayerViewController remoteVideoViewControllerDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3bfd8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_3 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c0eaa40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f13e0(param_1,param_2,lVar1);
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      *(undefined1 *)(param_1 + _DAT_11276aaa8) = 1;
    }
  }
  return;
}



/* Entry: 107b3c03c; end: 107b3c03f; -[SCOperaRemoteVideoLayerViewController remoteVideoViewControllerWasPresented] */

void FUN_107b3c03c(void)

{
  return;
}



/* Entry: 107b3c040; end: 107b3c043; -[SCOperaRemoteVideoLayerViewController remoteVideoViewControllerDidFinishPlaying] */

void FUN_107b3c040(void)

{
  return;
}


