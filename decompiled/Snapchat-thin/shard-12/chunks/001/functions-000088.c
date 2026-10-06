/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d402c8; end: 108d40363; -[SCImageProcessAnimatedTrajectoryBackedDrawCommandTransformProvider initWithImageSize:videoTargetTrajectory:] */

undefined1 *
FUN_108d402c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fe748;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108d40364; end: 108d4048b; -[SCImageProcessAnimatedTrajectoryBackedDrawCommandTransformProvider transformAtPresentationTime:outputSize:] */

void FUN_108d40364(double *param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  double *param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  dStack_68 = param_6[1];
  dVar2 = *param_6;
  dStack_60 = param_6[2];
  dVar3 = param_3;
  dStack_70 = dVar2;
  func_0x00010c27a4a0(uVar1,param_5,&dStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ada0();
  func_0x00010c27ada0(uVar1);
  _CGAffineTransformMakeTranslation(param_1,param_2 * dVar2,param_3 * dVar3);
  dStack_98 = param_1[1];
  dStack_a0 = *param_1;
  dStack_88 = param_1[3];
  dStack_90 = param_1[2];
  dStack_78 = param_1[5];
  dStack_80 = param_1[4];
  func_0x00010c141a80(uVar1);
  _CGAffineTransformRotate(&dStack_70,&dStack_a0);
  param_1[1] = dStack_68;
  *param_1 = dStack_70;
  param_1[3] = dStack_58;
  param_1[2] = dStack_60;
  param_1[5] = dStack_48;
  param_1[4] = dStack_50;
  dStack_98 = param_1[1];
  dStack_a0 = *param_1;
  dStack_88 = param_1[3];
  dStack_90 = param_1[2];
  dStack_78 = param_1[5];
  dVar2 = param_1[4];
  dStack_80 = dVar2;
  func_0x00010c14e120(uVar1);
  dVar3 = dVar2;
  func_0x00010c14e120(uVar1);
  _CGAffineTransformScale(&dStack_70,dVar2,dVar3,&dStack_a0);
  param_1[1] = dStack_68;
  *param_1 = dStack_70;
  param_1[3] = dStack_58;
  param_1[2] = dStack_60;
  param_1[5] = dStack_48;
  param_1[4] = dStack_50;
  _objc_release(uVar1);
  return;
}



/* Entry: 108d4048c; end: 108d404c7; -[SCImageProcessAnimatedTrajectoryBackedDrawCommandTransformProvider videoTrackingTransformAtPresentationTime:] */

void FUN_108d4048c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  func_0x00010c27a4a0(*(undefined8 *)(param_1 + 0x18),param_2,&uStack_30);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d404c8; end: 108d404d7; -[SCImageProcessAnimatedTrajectoryBackedDrawCommandTransformProvider originalImageSizeWithOutputSize:] */

undefined1  [16] FUN_108d404c8(double param_1,double param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 * *(double *)(param_3 + 8);
  auVar1._8_8_ = param_2 * *(double *)(param_3 + 0x10);
  return auVar1;
}



/* Entry: 108d404d8; end: 108d405af; -[SCImageProcessAnimatedTrajectoryBackedDrawCommandTransformProvider isEqual:] */

bool FUN_108d404d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar2 = true;
    goto LAB_108d40578;
  }
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b26f8;
  _objc_opt_class(PTR_PTR_1126b26f8);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
LAB_108d40550:
    bVar2 = false;
  }
  else {
    bVar2 = false;
    if ((*(double *)(param_3 + 8) == *(double *)(param_1 + 8)) &&
       (bVar2 = false, !NAN(*(double *)(param_3 + 0x10)) && !NAN(*(double *)(param_1 + 0x10)))) {
      bVar2 = *(double *)(param_3 + 0x10) == *(double *)(param_1 + 0x10);
    }
    if (!bVar2) goto LAB_108d40550;
    bVar2 = *(long *)(param_3 + 0x18) == *(long *)(param_1 + 0x18);
  }
  _objc_release(uVar1);
LAB_108d40578:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 108d405b0; end: 108d405bb; -[SCImageProcessAnimatedTrajectoryBackedDrawCommandTransformProvider .cxx_destruct] */

void FUN_108d405b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108d405bc; end: 108d407b3; -[SCImageProcessAnimatedDrawCommand initWithImages:vertexCoordinatesProviders:flipVertically:videoSpeedFactor:cropppingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d405bc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (lRam000000011372e588 != -1) {
    func_0x000107c27d9c(0x11372e588,&PTR___NSConcreteGlobalBlock_110ac2dc8);
  }
  uVar3 = uRam000000011372e590;
  _objc_retain(uRam000000011372e590);
  puStack_58 = PTR_PTR_1126fe750;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithProgram__11253a1b0,uVar3);
  _objc_release(uVar3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_4;
    func_0x00010bf51e00();
    lVar5 = (long)_DAT_11277b628;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = uVar3;
    _objc_release(uVar4);
    lVar2 = *(long *)((long)puVar1 + lVar5);
    func_0x00010bf529e0();
    lVar2 = lVar2 << 2;
    _malloc();
    *(long *)((long)puVar1 + (long)_DAT_11277b62c) = lVar2;
    lVar2 = *(long *)((long)puVar1 + lVar5);
    func_0x00010bf529e0();
    lVar2 = lVar2 << 2;
    _malloc();
    *(long *)((long)puVar1 + (long)_DAT_11277b630) = lVar2;
    lVar2 = *(long *)((long)puVar1 + lVar5);
    func_0x00010bf529e0();
    lVar2 = lVar2 << 3;
    _malloc();
    *(long *)((long)puVar1 + (long)_DAT_11277b634) = lVar2;
    uVar3 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b638);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b638) = uVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277b63c) = param_6;
    *(double *)((long)puVar1 + (long)_DAT_11277b640) = ABS(param_1);
    *(bool *)((long)puVar1 + (long)_DAT_11277b644) = param_1 < 0.0;
    lVar2 = (long)_DAT_11277b648;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar2);
    *(undefined8 *)((long)puVar1 + lVar2) = param_7;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108d407b4; end: 108d40afb; +[SCImageProcessAnimatedDrawCommand commandWithVideoTrackedImages:videoSpeedFactor:croppingState:targetTrajectoryFactory:] */

void FUN_108d407b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      lVar9 = *(long *)(lVar7 * 8);
      lVar5 = lVar9;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        lVar5 = lVar9;
        func_0x00010bfe6ac0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar5);
        func_0x00010c27a460(lVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar3);
        _objc_retain(param_6);
        _objc_retain(puVar3);
        func_0x00010c0c0400(lVar9);
        _objc_release(lVar9);
        _objc_release(puVar3);
        _objc_release(param_6);
        _objc_release(puVar3);
      }
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  _objc_alloc(param_2);
  func_0x00010c01d120(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  lVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  __Unwind_Resume();
  _objc_retain(param_3);
  uVar8 = *(undefined8 *)(lVar4 + 0x20);
  puVar2 = PTR_PTR_1126b2708;
  _objc_alloc(PTR_PTR_1126b2708);
  func_0x00010c0db660(*(undefined8 *)(lVar4 + 0x28));
  func_0x00010c01ce60(puVar2);
  func_0x00010befa120(uVar8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d40afc; end: 108d40b93;  */

void FUN_108d40afc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b2708;
  _objc_alloc(PTR_PTR_1126b2708);
  func_0x00010c0db660(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c01ce60(puVar1);
  func_0x00010befa120(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d40b94; end: 108d40c83;  */

void FUN_108d40b94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d9160();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR_PTR_1126b26f8;
  _objc_alloc(PTR_PTR_1126b26f8);
  func_0x00010c0db660(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c01cea0(puVar3);
  func_0x00010befa120(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d40c84; end: 108d40cef; -[SCImageProcessAnimatedDrawCommand dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d40c84(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + _DAT_11277b62c));
  _free(*(undefined8 *)(param_1 + _DAT_11277b630));
  _free(*(undefined8 *)(param_1 + _DAT_11277b634));
  puStack_28 = PTR_PTR_1126fe750;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108d40cf0; end: 108d40f13; -[SCImageProcessAnimatedDrawCommand loadWithContext:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_108d40cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  ulong uVar7;
  long lStack_70;
  undefined *puStack_68;
  long lVar5;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277b64c;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_3;
  _objc_release(uVar2);
  puStack_68 = PTR_PTR_1126fe750;
  plVar3 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_loadWithContext_error__112604c28,param_3,param_4);
  if ((int)plVar3 != 0) {
    uVar7 = 0;
    lVar6 = (long)_DAT_11277b628;
    while( true ) {
      uVar4 = *(ulong *)(param_1 + lVar6);
      func_0x00010bf529e0();
      if (uVar4 <= uVar7) break;
      *(undefined4 *)(*(long *)(param_1 + _DAT_11277b62c) + uVar7 * 4) = 0;
      *(undefined4 *)(*(long *)(param_1 + _DAT_11277b630) + uVar7 * 4) = 0xffffffff;
      *(undefined8 *)(*(long *)(param_1 + _DAT_11277b634) + uVar7 * 8) = 0xbff0000000000000;
      uVar7 = uVar7 + 1;
    }
    func_0x00010c0ef080(param_3);
    func_0x00010c0ef080(param_3);
    func_0x00010c09c420(param_1);
    lVar6 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar5;
    _glGetAttribLocation();
    *(undefined4 *)(param_1 + _DAT_11277b650) = uVar1;
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar5;
    _glGetAttribLocation();
    *(undefined4 *)(param_1 + _DAT_11277b654) = uVar1;
    _objc_release(lVar6);
    lVar6 = param_1;
    func_0x00010c117700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c117700();
    uVar1 = (undefined4)lVar5;
    _glGetUniformLocation();
    *(undefined4 *)(param_1 + _DAT_11277b658) = uVar1;
    _objc_release(lVar6);
  }
  _objc_release(param_3);
  return plVar3;
}



/* Entry: 108d40f14; end: 108d41507; -[SCImageProcessAnimatedDrawCommand loadTexturesAtTime:offset:outputWidth:outputHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d40f14(undefined8 param_1,double param_2,long param_3,undefined8 param_4,double *param_5
                  ,long param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_6);
  uVar14 = 0;
  lVar11 = (long)_DAT_11277b628;
  if (param_7 <= param_8) {
    param_7 = param_8;
  }
  do {
    uVar1 = *(ulong *)(param_3 + lVar11);
    func_0x00010bf529e0();
    if (uVar1 <= uVar14) {
      _objc_release(param_6);
      return;
    }
    if (param_6 == 0) {
      uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      dStack_a0 = *(double *)PTR__kCMTimeZero_110348670;
      uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    }
    else {
      func_0x00010bdc1140(&dStack_a0);
    }
    dStack_c8 = param_5[1];
    dStack_d0 = *param_5;
    dStack_c0 = param_5[2];
    dStack_e8 = (double)uStack_98;
    dStack_f0 = dStack_a0;
    dStack_e0 = (double)uStack_90;
    _CMTimeAdd(&dStack_b8,&dStack_d0,&dStack_f0);
    dStack_e8 = dStack_b0;
    dStack_f0 = dStack_b8;
    dStack_e0 = dStack_a8;
    dVar18 = 1.0 / *(double *)(param_3 + _DAT_11277b640);
    _CMTimeMultiplyByFloat64(&dStack_d0,&dStack_f0);
    uVar2 = *(ulong *)(param_3 + lVar11);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2720;
    _objc_opt_class(PTR_PTR_1126b2720);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar1 & 1) == 0) {
      iVar13 = 0;
LAB_108d41108:
      _objc_release(uVar2);
    }
    else {
      uVar4 = *(ulong *)(param_3 + lVar11);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf035e0();
      _objc_release(uVar4);
      _objc_release(uVar2);
      if (1 < uVar5) {
        uVar2 = *(ulong *)(param_3 + lVar11);
        if ((*(byte *)(param_3 + _DAT_11277b644) & 1) == 0) {
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          dStack_e8 = dStack_c8;
          dStack_f0 = dStack_d0;
          dStack_e0 = dStack_c0;
          dVar18 = dStack_d0;
          _CMTimeGetSeconds(&dStack_f0);
          uVar5 = uVar2;
          func_0x00010bf036c0();
          iVar13 = (int)uVar5;
        }
        else {
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010bf035e0();
          _objc_release(uVar2);
          uVar2 = *(ulong *)(param_3 + lVar11);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          dStack_e8 = dStack_c8;
          dStack_f0 = dStack_d0;
          dStack_e0 = dStack_c0;
          dVar18 = dStack_d0;
          _CMTimeGetSeconds(&dStack_f0);
          uVar4 = uVar2;
          func_0x00010bf036c0();
          iVar13 = ~(uint)uVar4 + (int)uVar5;
        }
        goto LAB_108d41108;
      }
      uVar1 = 0;
      iVar13 = 0;
    }
    lVar12 = (long)_DAT_11277b638;
    uVar5 = *(ulong *)(param_3 + lVar12);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    _objc_opt_respondsToSelector();
    _objc_release(uVar5);
    dVar21 = 1.0;
    if ((uVar2 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_3 + lVar12);
      func_0x00010c0dfd40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      dStack_e8 = dStack_c8;
      dStack_f0 = dStack_d0;
      dStack_e0 = dStack_c0;
      dVar21 = dStack_d0;
      func_0x00010bf01b60();
      dVar18 = dVar21;
      _objc_release(uVar6);
    }
    lVar12 = (long)_DAT_11277b630;
    if ((iVar13 != *(int *)(*(long *)(param_3 + lVar12) + uVar14 * 4)) ||
       (dVar18 = *(double *)(*(long *)(param_3 + _DAT_11277b634) + uVar14 * 8), dVar18 != dVar21)) {
      uVar6 = *(undefined8 *)(param_3 + lVar11);
      if ((uVar1 & 1) == 0) {
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0dfd40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf035c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar6 = uVar7;
      }
      func_0x00010c23d0a0(uVar6);
      dVar19 = dVar18;
      func_0x00010c14e120(uVar6);
      uVar7 = uVar6;
      if (0 < (long)param_7) {
        func_0x00010b690ad8(dVar18,param_2,dVar19);
        dVar19 = dVar18;
        dVar20 = param_2;
        func_0x00010b690b78(param_7);
        if ((dVar18 != dVar19) || (param_2 != dVar20)) {
          func_0x00010c14e6c0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
        }
      }
      uVar6 = uVar7;
      func_0x00010bfe9820(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = uVar6;
      _objc_retainAutorelease(uVar6);
      func_0x00010bdc1020();
      uVar10 = uVar7;
      _CGImageGetWidth();
      uVar8 = uVar7;
      _CGImageGetHeight(uVar7);
      uVar9 = uVar8;
      _CGColorSpaceCreateDeviceRGB();
      iVar17 = (int)uVar10;
      uVar10 = 0;
      _CGBitmapContextCreate(0,(long)iVar17,(long)(int)uVar8,8,(long)(iVar17 << 2),uVar9,1);
      dVar18 = (double)(int)uVar8;
      _CGContextClearRect(0,0,(double)iVar17,dVar18);
      if (dVar21 < 1.0) {
        _CGContextSetAlpha(dVar21,uVar10);
      }
      param_2 = 0.0;
      _CGContextDrawImage(0,0,(double)iVar17,dVar18,uVar10,uVar7);
      _CGColorSpaceRelease(uVar9);
      lVar16 = (long)_DAT_11277b62c;
      _glDeleteTextures(1,*(long *)(param_3 + lVar16) + uVar14 * 4);
      uVar15 = (undefined4)*(undefined8 *)(param_3 + _DAT_11277b64c);
      _CGBitmapContextGetData(uVar10);
      func_0x00010bf596e0();
      *(undefined4 *)(*(long *)(param_3 + lVar16) + uVar14 * 4) = uVar15;
      *(int *)(*(long *)(param_3 + lVar12) + uVar14 * 4) = iVar13;
      *(double *)(*(long *)(param_3 + _DAT_11277b634) + uVar14 * 8) = dVar21;
      _CGContextRelease(uVar10);
      _objc_release(uVar6);
    }
    uVar14 = uVar14 + 1;
  } while( true );
}



/* Entry: 108d41508; end: 108d415af; -[SCImageProcessAnimatedDrawCommand unloadWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108d41508(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  puStack_48 = PTR_PTR_1126fe750;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_unloadWithError__11267dcf0);
  if ((int)plVar1 != 0) {
    lVar4 = (long)_DAT_11277b628;
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = 0;
      uVar5 = 0;
      lVar6 = (long)_DAT_11277b62c;
      do {
        _glDeleteTextures(1,*(long *)(param_1 + lVar6) + lVar2);
        uVar5 = uVar5 + 1;
        uVar3 = *(ulong *)(param_1 + lVar4);
        func_0x00010bf529e0();
        lVar2 = lVar2 + 4;
      } while (uVar5 < uVar3);
    }
  }
  return (undefined1 *)plVar1;
}



/* Entry: 108d415b0; end: 108d41f5b; -[SCImageProcessAnimatedDrawCommand runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_108d415b0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
             ulong param_6,undefined8 param_7,undefined8 param_8,ulong param_9,ulong param_10,
             undefined4 param_11,undefined4 param_12,double *param_13,undefined8 param_14,
             undefined8 param_15)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_14);
  uVar11 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109079e0c(param_6,param_7,param_8,param_9,param_10,100,10,uVar11,param_15);
  _objc_release(uVar11);
  if ((param_6 & 1) == 0) {
LAB_108d4173c:
    ppuVar9 = (undefined **)0x0;
  }
  else {
    uVar11 = param_3;
    func_0x00010c117700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fd20();
    _objc_release(uVar11);
    _glBlendFunc(1,0x303);
    _glEnable(0xbe2);
    lVar13 = (long)_DAT_11277b63c;
    if ((*(byte *)(param_3 + lVar13) & 1) == 0) {
      dStack_108 = param_13[1];
      dStack_110 = *param_13;
      dStack_f8 = param_13[3];
      dStack_100 = param_13[2];
      dStack_e8 = param_13[5];
      dStack_f0 = param_13[4];
      uVar11 = param_3;
      func_0x00010bf89d00(param_1,param_2);
      if ((uVar11 & 1) == 0) goto LAB_108d4173c;
    }
    lVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      dStack_128 = 0.0;
      dStack_120 = 0.0;
      dStack_118 = 0.0;
    }
    else {
      func_0x00010bdc1140(&dStack_128,lVar2);
    }
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    dStack_108 = dStack_120;
    dStack_110 = dStack_128;
    dStack_100 = dStack_118;
    func_0x00010c09c420(param_3);
    uVar11 = 0;
    dVar19 = (double)param_9;
    dVar14 = (double)param_10;
    lVar8 = (long)_DAT_11277b628;
    dVar22 = dVar19;
    while( true ) {
      uVar3 = *(ulong *)(param_3 + lVar8);
      func_0x00010bf529e0();
      if (uVar3 <= uVar11) break;
      _glActiveTexture(0x84c2);
      _glBindTexture(0xde1,*(undefined4 *)(*(long *)(param_3 + (long)_DAT_11277b62c) + uVar11 * 4));
      _glUniform1i(*(undefined4 *)(param_3 + (long)_DAT_11277b658),2);
      lVar10 = (long)_DAT_11277b638;
      uVar4 = *(ulong *)(param_3 + lVar10);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      _objc_opt_respondsToSelector();
      _objc_release(uVar4);
      if ((uVar3 & 1) == 0) {
        lVar12 = *(long *)(param_3 + lVar10);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 == 0) {
          dStack_f8 = 0.0;
          dStack_100 = 0.0;
          dStack_e8 = 0.0;
          dStack_f0 = 0.0;
          dStack_108 = 0.0;
          dStack_110 = 0.0;
        }
        else {
          func_0x00010c27a480(&dStack_110,dVar19,dVar14,lVar12);
        }
        dVar25 = dStack_e8;
        dVar18 = dStack_f0;
        dVar24 = dStack_f8;
        dVar30 = dStack_100;
        dVar15 = dStack_108;
        dVar22 = dStack_110;
        _objc_release(lVar12);
      }
      else {
        puVar5 = *(undefined **)(param_3 + lVar10);
        func_0x00010c0dfd40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        dStack_108 = dStack_120;
        dStack_110 = dStack_128;
        dStack_100 = dStack_118;
        puVar6 = puVar5;
        dVar15 = dStack_128;
        func_0x00010c29ba20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        lVar12 = (long)_DAT_11277b648;
        puVar5 = puVar6;
        if (*(long *)(param_3 + lVar12) != 0) {
          func_0x00010c0c2640(PTR_PTR_1126bf720);
          dVar30 = 0.0;
          if (dVar15 != 0.0) {
            if (dVar22 == 0.0) {
              dVar30 = INFINITY;
            }
            else {
              dVar30 = dVar15 / dVar22;
            }
          }
          func_0x00010bf20c80(*(undefined8 *)(param_3 + lVar12));
          dVar29 = dVar19;
          dVar20 = dVar14;
          func_0x00010b690c04(dVar19,dVar14,dVar30);
          func_0x00010b690c04();
          dVar17 = dVar29;
          dVar21 = dVar20;
          func_0x00010c27ada0(puVar6);
          func_0x00010c27ada0(puVar6);
          _CGAffineTransformMakeTranslation(&dStack_110,dVar29 * 0.5,dVar20 * 0.5);
          dStack_188 = dStack_108;
          dStack_190 = dStack_110;
          dStack_178 = dStack_f8;
          dStack_180 = dStack_100;
          dStack_168 = dStack_e8;
          dStack_170 = dStack_f0;
          dVar22 = dStack_f0;
          func_0x00010c27ade0(*(undefined8 *)(param_3 + lVar12));
          dVar15 = dVar22;
          func_0x00010c27ae20(*(undefined8 *)(param_3 + lVar12));
          _CGAffineTransformTranslate(&dStack_160,dVar29 * dVar22,dVar20 * dVar15,&dStack_190);
          dStack_f8 = dStack_148;
          dStack_100 = dStack_150;
          dStack_e8 = dStack_138;
          dStack_f0 = dStack_140;
          dStack_108 = dStack_158;
          dStack_110 = dStack_160;
          dStack_188 = dStack_158;
          dStack_190 = dStack_160;
          dStack_178 = dStack_148;
          dStack_180 = dStack_150;
          dStack_168 = dStack_138;
          dStack_170 = dStack_140;
          func_0x00010c141a80(*(undefined8 *)(param_3 + lVar12));
          _CGAffineTransformRotate(&dStack_160,&dStack_190);
          dStack_f8 = dStack_148;
          dStack_100 = dStack_150;
          dStack_e8 = dStack_138;
          dStack_f0 = dStack_140;
          dStack_108 = dStack_158;
          dStack_110 = dStack_160;
          dStack_188 = dStack_158;
          dStack_190 = dStack_160;
          dStack_178 = dStack_148;
          dStack_180 = dStack_150;
          dStack_168 = dStack_138;
          dStack_170 = dStack_140;
          dVar22 = dStack_140;
          func_0x00010c14e120(*(undefined8 *)(param_3 + lVar12));
          dVar15 = dVar22;
          func_0x00010c14e120(*(undefined8 *)(param_3 + lVar12));
          _CGAffineTransformScale(&dStack_160,dVar22,dVar15,&dStack_190);
          dStack_f8 = dStack_148;
          dStack_100 = dStack_150;
          dStack_e8 = dStack_138;
          dStack_f0 = dStack_140;
          dStack_108 = dStack_158;
          dStack_110 = dStack_160;
          dStack_188 = dStack_158;
          dStack_190 = dStack_160;
          dStack_178 = dStack_148;
          dStack_180 = dStack_150;
          dStack_168 = dStack_138;
          dStack_170 = dStack_140;
          _CGAffineTransformTranslate(&dStack_160,dVar29 * -0.5,dVar20 * -0.5,&dStack_190);
          dVar25 = dStack_138;
          dVar18 = dStack_140;
          dVar24 = dStack_148;
          dVar15 = dStack_150;
          dVar30 = dStack_158;
          dVar22 = dStack_160;
          dStack_f8 = dStack_148;
          dStack_100 = dStack_150;
          dStack_e8 = dStack_138;
          dStack_f0 = dStack_140;
          dStack_108 = dStack_158;
          dStack_110 = dStack_160;
          dVar16 = dStack_158;
          func_0x00010c141a80(puVar6);
          dVar23 = dVar16;
          func_0x00010c141a80(*(undefined8 *)(param_3 + lVar12));
          dVar26 = dVar23;
          func_0x00010c14e120(puVar6);
          dVar28 = dVar26;
          func_0x00010c14e120(*(undefined8 *)(param_3 + lVar12));
          puVar5 = PTR_PTR_1126b2700;
          _objc_alloc(PTR_PTR_1126b2700);
          dVar15 = ((dVar19 - dVar29) * 0.5 +
                   dVar18 + dVar20 * dVar21 * dVar15 + dVar29 * dVar17 * dVar22) / dVar19;
          dVar22 = ((dVar14 - dVar20) * 0.5 +
                   dVar25 + dVar20 * dVar21 * dVar24 + dVar29 * dVar17 * dVar30) / dVar14;
          func_0x00010c055500(dVar15,dVar22,dVar26 * dVar28,dVar16 + dVar23);
          _objc_release(puVar6);
        }
        func_0x00010c27ada0(puVar5);
        func_0x00010c27ada0(puVar5);
        _CGAffineTransformMakeTranslation(&dStack_110,dVar15 * dVar19,dVar22 * dVar14);
        dStack_158 = dStack_108;
        dStack_160 = dStack_110;
        dStack_148 = dStack_f8;
        dStack_150 = dStack_100;
        dStack_138 = dStack_e8;
        dStack_140 = dStack_f0;
        func_0x00010c141a80(puVar5);
        _CGAffineTransformRotate(&dStack_110,&dStack_160);
        dStack_158 = dStack_108;
        dStack_160 = dStack_110;
        dStack_148 = dStack_f8;
        dStack_150 = dStack_100;
        dStack_138 = dStack_e8;
        dStack_140 = dStack_f0;
        dVar22 = dStack_110;
        func_0x00010c14e120(puVar5);
        dVar15 = dVar22;
        func_0x00010c14e120(puVar5);
        _CGAffineTransformScale(&dStack_110,dVar22,dVar15,&dStack_160);
        dVar25 = dStack_e8;
        dVar18 = dStack_f0;
        dVar24 = dStack_f8;
        dVar30 = dStack_100;
        dVar15 = dStack_108;
        dVar22 = dStack_110;
        _objc_release(puVar5);
      }
      uVar7 = *(undefined8 *)(param_3 + lVar10);
      func_0x00010c0dfd40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      dVar29 = dVar19;
      dVar17 = dVar14;
      func_0x00010c0ed5a0();
      _objc_release(uVar7);
      dVar16 = dVar29 * -0.5;
      dVar26 = dVar30 * dVar17 * -0.5;
      dVar23 = dVar24 * dVar17 * -0.5;
      dVar28 = dVar25 + dVar23 + dVar16 * dVar15;
      fVar27 = (float)((dVar28 + dVar28) / dVar14 + -1.0);
      bVar1 = *(char *)(param_3 + lVar13) == '\0';
      fStack_d4 = -fVar27;
      if (bVar1) {
        fStack_d4 = fVar27;
      }
      dVar28 = dVar18 + dVar26 + dVar16 * dVar22;
      fStack_d8 = (float)((dVar28 + dVar28) / dVar19 + -1.0);
      dVar29 = dVar29 * 0.5;
      dVar26 = dVar18 + dVar26 + dVar29 * dVar22;
      dVar23 = dVar25 + dVar23 + dVar29 * dVar15;
      fStack_d0 = (float)((dVar26 + dVar26) / dVar19 + -1.0);
      fVar27 = (float)((dVar23 + dVar23) / dVar14 + -1.0);
      fStack_cc = -fVar27;
      if (bVar1) {
        fStack_cc = fVar27;
      }
      dVar30 = dVar30 * dVar17 * 0.5;
      dVar23 = dVar18 + dVar30 + dVar16 * dVar22;
      dVar24 = dVar24 * dVar17 * 0.5;
      dVar17 = dVar25 + dVar24 + dVar16 * dVar15;
      fStack_c8 = (float)((dVar23 + dVar23) / dVar19 + -1.0);
      fVar27 = (float)((dVar17 + dVar17) / dVar14 + -1.0);
      fStack_c4 = -fVar27;
      if (bVar1) {
        fStack_c4 = fVar27;
      }
      dVar18 = dVar18 + dVar30 + dVar29 * dVar22;
      dVar25 = dVar25 + dVar24 + dVar29 * dVar15;
      fStack_c0 = (float)((dVar18 + dVar18) / dVar19 + -1.0);
      fVar27 = (float)((dVar25 + dVar25) / dVar14 + -1.0);
      fStack_bc = -fVar27;
      if (bVar1) {
        fStack_bc = fVar27;
      }
      dVar22 = (double)(ulong)(uint)fStack_bc;
      lVar10 = (long)_DAT_11277b650;
      _glVertexAttribPointer(*(undefined4 *)(param_3 + lVar10),2,0x1406,0,0,&fStack_d8);
      _glEnableVertexAttribArray(*(undefined4 *)(param_3 + lVar10));
      lVar10 = (long)_DAT_11277b654;
      _glVertexAttribPointer(*(undefined4 *)(param_3 + lVar10),2,0x1406,0,0,&UNK_10df9fea8);
      _glEnableVertexAttribArray(*(undefined4 *)(param_3 + lVar10));
      _glDrawArrays(5,0,4);
      uVar11 = uVar11 + 1;
    }
    _objc_release(lVar2);
    ppuVar9 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
  }
  _objc_release(param_14);
  lVar13 = param_5;
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar9);
  _objc_release(param_14);
  _objc_release(param_5);
  __Unwind_Resume(lVar13);
  return &PTR____CFConstantStringClassReference_110ef67b8;
}



/* Entry: 108d41f5c; end: 108d41f67; -[SCImageProcessAnimatedDrawCommand commandName] */

undefined ** FUN_108d41f5c(void)

{
  return &PTR____CFConstantStringClassReference_110ef67b8;
}



/* Entry: 108d41f68; end: 108d420eb; -[SCImageProcessAnimatedDrawCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108d41f68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar6 = 0;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar2 = true;
    goto LAB_108d420ac;
  }
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b26f0;
  _objc_opt_class(PTR_PTR_1126b26f0);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
LAB_108d42098:
    bVar2 = false;
  }
  else {
    puStack_38 = PTR_PTR_1126fe750;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_baseisEqual__11253a1b8,param_3);
    if ((uVar6 & 1) == 0) goto LAB_108d42098;
    iVar3 = (int)*(undefined8 *)(param_3 + (long)_DAT_11277b628);
    func_0x00010c071b60();
    if (iVar3 == 0) goto LAB_108d42098;
    iVar3 = (int)*(undefined8 *)(param_3 + (long)_DAT_11277b638);
    func_0x00010c071b60();
    if ((iVar3 == 0) ||
       (*(char *)(param_3 + (long)_DAT_11277b63c) != *(char *)(param_1 + (long)_DAT_11277b63c)))
    goto LAB_108d42098;
    fVar7 = (float)*(double *)(param_3 + (long)_DAT_11277b640);
    fVar8 = (float)*(double *)(param_1 + (long)_DAT_11277b640);
    fVar9 = ABS(fVar7 - fVar8);
    fVar7 = ABS(fVar7 + fVar8) * 1.1920929e-07;
    bVar2 = true;
    if ((1.1754944e-38 <= fVar9) && (bVar2 = false, !NAN(fVar9) && !NAN(fVar7))) {
      bVar2 = fVar9 < fVar7;
    }
    if (!bVar2) goto LAB_108d42098;
    bVar2 = *(long *)(param_3 + (long)_DAT_11277b648) == *(long *)(param_1 + (long)_DAT_11277b648);
  }
  _objc_release(uVar1);
LAB_108d420ac:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 108d420ec; end: 108d4214b; -[SCImageProcessAnimatedDrawCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d420ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b648,0);
  _objc_storeStrong(param_1 + _DAT_11277b638,0);
  _objc_storeStrong(param_1 + _DAT_11277b628,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b64c,0);
  return;
}



/* Entry: 108d4214c; end: 108d42277; -[SCImageProcessCPUAnimatedDrawCommand initWithImages:vertexCoordinatesProviders:cropppingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d4214c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fe758;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b65c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b65c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b660);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277b660) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277b664;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d42278; end: 108d42e73; -[SCImageProcessCPUAnimatedDrawCommand runWithContext:inputPixelBuffer:outputPixelBuffer:orientationFit:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_108d42278(long param_1,undefined8 param_2,long param_3,undefined *param_4,undefined *param_5,
             ulong param_6,double param_7)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long extraout_x8;
  int *piVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int *piVar19;
  undefined **ppuVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  int aiStack_230 [2];
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_220 = param_3;
  puStack_218 = param_4;
  puStack_210 = param_5;
  _objc_retain(param_3);
  lVar24 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  param_6 = param_6 & 0xffffffffffffffef;
  FUN_1090798f0(param_6,100,10,lVar24,param_7);
  _objc_release(lVar24);
  if ((param_6 & 1) == 0) {
    ppuVar20 = (undefined **)0x0;
  }
  else {
    lVar24 = lStack_220;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar24 == 0) {
      dStack_c8 = 0.0;
      dStack_c0 = 0.0;
      dStack_b8 = 0.0;
    }
    else {
      func_0x00010bdc1140(&dStack_c8,lVar24);
    }
    _objc_release(lVar24);
    _CVPixelBufferLockBaseAddress(puStack_218,0);
    puVar2 = puStack_210;
    _CVPixelBufferLockBaseAddress(puStack_210,0);
    _CGColorSpaceCreateDeviceRGB();
    puVar5 = puStack_210;
    puVar14 = puStack_210;
    puStack_228 = puVar2;
    _CVPixelBufferGetWidth();
    puVar3 = puVar5;
    _CVPixelBufferGetHeight();
    puVar4 = puVar5;
    dStack_1b8 = param_7;
    _CVPixelBufferGetBytesPerRow();
    _CVPixelBufferGetBaseAddress(puVar5);
    _CGBitmapContextCreate();
    puVar2 = puStack_218;
    if (puStack_218 != puStack_210) {
      puVar16 = puStack_218;
      _CVPixelBufferGetWidth();
      puVar6 = puVar2;
      _CVPixelBufferGetHeight();
      puVar7 = puVar2;
      _CVPixelBufferGetBytesPerRow();
      _CVPixelBufferGetBaseAddress();
      puVar8 = puStack_210;
      _CVPixelBufferGetBaseAddress();
      if (((puVar16 == puVar14) && (puVar6 == puVar3)) && (puVar7 == puVar4)) {
        _memcpy();
      }
      else {
        puStack_1c0 = puVar8;
        FUN_10908b62c(puVar16,puVar6,puVar14,puVar3,&dStack_100,&dStack_130,&dStack_160);
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar14 << 2);
        piVar15 = (int *)((long)aiStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        if (puVar14 != (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
          dVar31 = (double)dStack_160._0_4_;
          dVar32 = (double)NEON_ucvtf(dStack_100);
          do {
            piVar15[(long)puVar16] =
                 (int)((float)(dVar32 + dVar31 * ((double)((ulong)puVar16 & 0xffffffff) + 0.5)) +
                      -0.5);
            puVar16 = puVar16 + 1;
          } while (puVar14 != puVar16);
        }
        if (puVar3 != (undefined *)0x0) {
          puVar16 = (undefined *)0x0;
          dVar31 = (double)NEON_ucvtf(dStack_130);
          puVar17 = puStack_1c0 + 1;
          do {
            if (puVar14 != (undefined *)0x0) {
              puVar18 = puVar17;
              piVar19 = piVar15;
              puVar6 = puVar14;
              do {
                puVar1 = puVar2 + (long)*piVar19 * 4 +
                                  (long)puVar7 *
                                  (long)(int)((float)(dVar31 + (double)dStack_160._0_4_ *
                                                               ((double)((ulong)puVar16 & 0xffffffff
                                                                        ) + 0.5)) + -0.5);
                puVar18[-1] = *puVar1;
                *puVar18 = puVar1[1];
                puVar18[1] = puVar1[2];
                puVar18[2] = puVar1[3];
                puVar18 = puVar18 + 4;
                puVar6 = puVar6 + -1;
                piVar19 = piVar19 + 1;
              } while (puVar6 != (undefined *)0x0);
            }
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + (long)puVar4;
          } while (puVar16 != puVar3);
        }
      }
    }
    lVar24 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    FUN_109079a74(puVar14,puVar3,puVar4,100,10,lVar24,dStack_1b8);
    _objc_release(lVar24);
    if (((ulong)puVar2 & 1) == 0) {
      _CGColorSpaceRelease(puStack_228);
      _CGContextRelease(puVar5);
      _CVPixelBufferUnlockBaseAddress(puStack_210,0);
      _CVPixelBufferUnlockBaseAddress(puStack_218,0);
      ppuVar20 = (undefined **)0x0;
    }
    else {
      uVar22 = 0;
      dVar31 = (double)puVar14;
      dVar32 = (double)puVar3;
      lVar24 = (long)_DAT_11277b65c;
      puStack_1c8 = PTR_s_videoTrackingTransformAtPresenta_1126848b0;
      puStack_1c0 = PTR_s_alphaAtPresentationTime__11259e080;
      dStack_1d8 = dVar32;
      dStack_1d0 = dVar31;
      while( true ) {
        uVar9 = *(ulong *)(param_1 + lVar24);
        func_0x00010bf529e0();
        if (uVar9 <= uVar22) break;
        uVar10 = *(ulong *)(param_1 + lVar24);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b2720;
        _objc_opt_class(PTR_PTR_1126b2720);
        uVar9 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar2);
        _objc_release(uVar10);
        uVar11 = *(undefined8 *)(param_1 + lVar24);
        if ((uVar9 & 1) == 0) {
          func_0x00010c0dfd40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          uVar13 = uVar11;
          func_0x00010bdc1020(uVar11);
        }
        else {
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          dStack_f8 = dStack_c0;
          dStack_100 = dStack_c8;
          dStack_f0 = dStack_b8;
          _CMTimeGetSeconds(&dStack_100);
          func_0x00010bf036c0(uVar11);
          uVar12 = uVar11;
          func_0x00010bf035c0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          uVar13 = uVar12;
          func_0x00010bdc1020(uVar12);
          _objc_release(uVar12);
        }
        _objc_release(uVar11);
        lVar23 = (long)_DAT_11277b660;
        uVar10 = *(ulong *)(param_1 + lVar23);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar10;
        _objc_opt_respondsToSelector();
        _objc_release(uVar10);
        dStack_1b8 = 1.0;
        if ((uVar9 & 1) == 0) {
LAB_108d4275c:
          dStack_f8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 8);
          dStack_100 = *(double *)PTR__CGAffineTransformIdentity_110347008;
          dStack_e8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
          dVar29 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
          dStack_d8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
          dStack_e0 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
          uVar10 = *(ulong *)(param_1 + lVar23);
          dStack_f0 = dVar29;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar10;
          _objc_opt_respondsToSelector();
          _objc_release(uVar10);
          if ((uVar9 & 1) == 0) {
            lVar21 = *(long *)(param_1 + lVar23);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            dStack_1a8 = dStack_c0;
            dStack_1b0 = dStack_c8;
            dStack_1a0 = dStack_b8;
            if (lVar21 == 0) {
              dStack_118 = 0.0;
              dStack_120 = 0.0;
              dStack_108 = 0.0;
              dStack_110 = 0.0;
              dStack_128 = 0.0;
              dStack_130 = 0.0;
            }
            else {
              func_0x00010c27a480(&dStack_130,dVar31,dVar32,lVar21);
            }
            dStack_f8 = dStack_128;
            dStack_100 = dStack_130;
            dStack_e8 = dStack_118;
            dStack_f0 = dStack_120;
            dStack_d8 = dStack_108;
            dStack_e0 = dStack_110;
            _objc_release(lVar21);
          }
          else {
            puVar14 = *(undefined **)(param_1 + lVar23);
            func_0x00010c0dfd40(puVar14);
            _objc_retainAutoreleasedReturnValue();
            dStack_128 = dStack_c0;
            dStack_130 = dStack_c8;
            dStack_120 = dStack_b8;
            puVar2 = puVar14;
            dVar28 = dStack_c8;
            func_0x00010c29ba20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
            lVar21 = (long)_DAT_11277b664;
            puVar14 = puVar2;
            if (*(long *)(param_1 + lVar21) != 0) {
              func_0x00010c0c2640(PTR_PTR_1126bf720);
              dVar30 = 0.0;
              if (dVar28 != 0.0) {
                if (dVar29 == 0.0) {
                  dVar30 = INFINITY;
                }
                else {
                  dVar30 = dVar28 / dVar29;
                }
              }
              func_0x00010bf20c80(*(undefined8 *)(param_1 + lVar21));
              func_0x00010b690c04(dVar31,dVar32,dVar30);
              func_0x00010b690c04();
              dVar29 = dVar31;
              dVar25 = dVar32;
              func_0x00010c27ada0(puVar2);
              func_0x00010c27ada0(puVar2);
              _CGAffineTransformMakeTranslation(&dStack_130,dVar31 * 0.5,dVar32 * 0.5);
              dStack_188 = dStack_128;
              dStack_190 = dStack_130;
              dStack_178 = dStack_118;
              dStack_180 = dStack_120;
              dStack_168 = dStack_108;
              dStack_170 = dStack_110;
              dVar28 = dStack_110;
              func_0x00010c27ade0(*(undefined8 *)(param_1 + lVar21));
              dVar30 = dVar28;
              func_0x00010c27ae20(*(undefined8 *)(param_1 + lVar21));
              _CGAffineTransformTranslate(&dStack_160,dVar31 * dVar28,dVar32 * dVar30,&dStack_190);
              dStack_118 = dStack_148;
              dStack_120 = dStack_150;
              dStack_108 = dStack_138;
              dStack_110 = dStack_140;
              dStack_128 = dStack_158;
              dStack_130 = dStack_160;
              dStack_188 = dStack_158;
              dStack_190 = dStack_160;
              dStack_178 = dStack_148;
              dStack_180 = dStack_150;
              dStack_168 = dStack_138;
              dStack_170 = dStack_140;
              func_0x00010c141a80(*(undefined8 *)(param_1 + lVar21));
              dStack_1e8 = dVar25;
              dStack_1e0 = dVar29;
              _CGAffineTransformRotate(&dStack_160,&dStack_190);
              dStack_118 = dStack_148;
              dStack_120 = dStack_150;
              dStack_108 = dStack_138;
              dStack_110 = dStack_140;
              dStack_128 = dStack_158;
              dStack_130 = dStack_160;
              dStack_188 = dStack_158;
              dStack_190 = dStack_160;
              dStack_178 = dStack_148;
              dStack_180 = dStack_150;
              dStack_168 = dStack_138;
              dStack_170 = dStack_140;
              dVar29 = dStack_140;
              func_0x00010c14e120(*(undefined8 *)(param_1 + lVar21));
              dVar28 = dVar29;
              func_0x00010c14e120(*(undefined8 *)(param_1 + lVar21));
              _CGAffineTransformScale(&dStack_160,dVar29,dVar28,&dStack_190);
              dStack_118 = dStack_148;
              dStack_120 = dStack_150;
              dStack_108 = dStack_138;
              dStack_110 = dStack_140;
              dStack_128 = dStack_158;
              dStack_130 = dStack_160;
              dStack_188 = dStack_158;
              dStack_190 = dStack_160;
              dStack_178 = dStack_148;
              dStack_180 = dStack_150;
              dStack_168 = dStack_138;
              dStack_170 = dStack_140;
              dStack_1f8 = dVar31;
              dStack_1f0 = dVar32;
              _CGAffineTransformTranslate(&dStack_160,dVar31 * -0.5,dVar32 * -0.5,&dStack_190);
              dVar30 = dStack_138;
              dVar28 = dStack_140;
              dVar29 = dStack_148;
              dVar32 = dStack_150;
              dVar31 = dStack_160;
              dStack_118 = dStack_148;
              dStack_120 = dStack_150;
              dStack_108 = dStack_138;
              dStack_110 = dStack_140;
              dStack_128 = dStack_158;
              dStack_130 = dStack_160;
              dStack_200 = dStack_158;
              dVar25 = dStack_158;
              func_0x00010c141a80(puVar2);
              dStack_208 = dVar25;
              func_0x00010c141a80(*(undefined8 *)(param_1 + lVar21));
              dVar26 = dVar25;
              func_0x00010c14e120(puVar2);
              dVar27 = dVar26;
              func_0x00010c14e120(*(undefined8 *)(param_1 + lVar21));
              puVar14 = PTR_PTR_1126b2700;
              _objc_alloc(PTR_PTR_1126b2700);
              dVar28 = ((dStack_1d0 - dStack_1f8) * 0.5 +
                       dVar28 + dStack_1f0 * dStack_1e8 * dVar32 + dStack_1f8 * dStack_1e0 * dVar31)
                       / dStack_1d0;
              dVar29 = ((dStack_1d8 - dStack_1f0) * 0.5 +
                       dVar30 + dStack_1f0 * dStack_1e8 * dVar29 +
                                dStack_1f8 * dStack_1e0 * dStack_200) / dStack_1d8;
              func_0x00010c055500(dVar28,dVar29,dVar26 * dVar27,dStack_208 + dVar25);
              _objc_release(puVar2);
              dVar31 = dStack_1d0;
              dVar32 = dStack_1d8;
            }
            func_0x00010c27ada0(puVar14);
            func_0x00010c27ada0(puVar14);
            _CGAffineTransformMakeTranslation(&dStack_100,dVar28 * dVar31,dVar29 * dVar32);
            dStack_158 = dStack_f8;
            dStack_160 = dStack_100;
            dStack_148 = dStack_e8;
            dStack_150 = dStack_f0;
            dStack_138 = dStack_d8;
            dStack_140 = dStack_e0;
            func_0x00010c141a80(puVar14);
            _CGAffineTransformRotate(&dStack_130,&dStack_160);
            dStack_e8 = dStack_118;
            dStack_f0 = dStack_120;
            dStack_d8 = dStack_108;
            dStack_e0 = dStack_110;
            dStack_f8 = dStack_128;
            dStack_100 = dStack_130;
            dStack_158 = dStack_128;
            dStack_160 = dStack_130;
            dStack_148 = dStack_118;
            dStack_150 = dStack_120;
            dStack_138 = dStack_108;
            dStack_140 = dStack_110;
            dVar29 = dStack_110;
            func_0x00010c14e120(puVar14);
            dVar28 = dVar29;
            func_0x00010c14e120(puVar14);
            _CGAffineTransformScale(&dStack_130,dVar29,dVar28,&dStack_160);
            dStack_f8 = dStack_128;
            dStack_100 = dStack_130;
            dStack_e8 = dStack_118;
            dStack_f0 = dStack_120;
            dStack_d8 = dStack_108;
            dStack_e0 = dStack_110;
            _objc_release(puVar14);
          }
          uVar11 = *(undefined8 *)(param_1 + lVar23);
          func_0x00010c0dfd40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          dVar29 = dVar31;
          dVar28 = dVar32;
          func_0x00010c0ed5a0(dVar31,dVar32);
          _objc_release(uVar11);
          _CGContextSaveGState(puVar5);
          _CGContextTranslateCTM(0,dVar32,puVar5);
          _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,puVar5);
          dStack_128 = dStack_f8;
          dStack_130 = dStack_100;
          dStack_118 = dStack_e8;
          dStack_120 = dStack_f0;
          dStack_108 = dStack_d8;
          dStack_110 = dStack_e0;
          _CGContextConcatCTM(puVar5,&dStack_130);
          _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,puVar5);
          if (dStack_1b8 < 1.0) {
            _CGContextSetAlpha(dStack_1b8,puVar5);
          }
          _CGContextDrawImage(dVar29 * -0.5,dVar28 * -0.5,dVar29,dVar28,puVar5,uVar13);
          _CGContextRestoreGState(puVar5);
        }
        else {
          uVar11 = *(undefined8 *)(param_1 + lVar23);
          func_0x00010c0dfd40(uVar11);
          _objc_retainAutoreleasedReturnValue();
          dStack_f8 = dStack_c0;
          dStack_100 = dStack_c8;
          dStack_f0 = dStack_b8;
          dVar29 = dStack_c8;
          func_0x00010bf01b60();
          dStack_1b8 = dVar29;
          _objc_release(uVar11);
          if (0.0 < dStack_1b8) goto LAB_108d4275c;
        }
        uVar22 = uVar22 + 1;
      }
      _CGColorSpaceRelease(puStack_228);
      _CGContextRelease(puVar5);
      _CVPixelBufferUnlockBaseAddress(puStack_210,0);
      _CVPixelBufferUnlockBaseAddress(puStack_218,0);
      ppuVar20 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
    }
  }
  lVar24 = lStack_220;
  _objc_release(lStack_220);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return ppuVar20;
  }
  ___stack_chk_fail();
  _objc_release(lStack_220);
  __Unwind_Resume(lVar24);
  return &PTR____CFConstantStringClassReference_110ef67d8;
}



/* Entry: 108d42e74; end: 108d42e7f; -[SCImageProcessCPUAnimatedDrawCommand commandName] */

undefined ** FUN_108d42e74(void)

{
  return &PTR____CFConstantStringClassReference_110ef67d8;
}



/* Entry: 108d42e80; end: 108d42fab; -[SCImageProcessCPUAnimatedDrawCommand isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108d42e80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar6 = 0;
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar2 = true;
    goto LAB_108d42f6c;
  }
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126da098;
  _objc_opt_class(PTR_PTR_1126da098);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
LAB_108d42f58:
    bVar2 = false;
  }
  else {
    puStack_38 = PTR_PTR_1126fe758;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_isEqual__1125fa0c8,param_3);
    if ((uVar6 & 1) == 0) goto LAB_108d42f58;
    iVar3 = (int)*(undefined8 *)(param_3 + (long)_DAT_11277b65c);
    func_0x00010c071b60();
    if (iVar3 == 0) goto LAB_108d42f58;
    iVar3 = (int)*(undefined8 *)(param_3 + (long)_DAT_11277b660);
    func_0x00010c071b60();
    if (iVar3 == 0) goto LAB_108d42f58;
    bVar2 = *(long *)(param_3 + (long)_DAT_11277b664) == *(long *)(param_1 + (long)_DAT_11277b664);
  }
  _objc_release(uVar1);
LAB_108d42f6c:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 108d42fac; end: 108d42ffb; -[SCImageProcessCPUAnimatedDrawCommand .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d42fac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b664,0);
  _objc_storeStrong(param_1 + _DAT_11277b660,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b65c,0);
  return;
}



/* Entry: 108d42ffc; end: 108d433cf; -[SCEncryptedContentManager initWithEncryptedDatabase:keyService:dataObjectContext:overlayFormatServices:memoriesExperimentService:memoriesVideoDecryptionEventPublisher:encryptionDetector:grapheneRegistry:memoriesS2RLogger:userBlizzard:] */

undefined8 *
FUN_108d42ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126fe760;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = puVar1[8];
    _objc_retain(param_3);
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(param_7);
  }
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



/* Entry: 108d433d0; end: 108d4346b;  */

void FUN_108d433d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf900a0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d4346c; end: 108d435cf; -[SCEncryptedContentManager secureEncryptData:key:IV:masterKey:] */

void FUN_108d4346c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_5;
  uVar3 = param_4;
  if (param_6 != 0) {
    _objc_retain(param_6);
    lVar1 = param_6;
    func_0x00010bf93ec0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_6;
    func_0x00010c0646e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156c60(param_4,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_6;
    func_0x00010bf93ec0(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_6;
    func_0x00010c0646e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    func_0x00010c156c60(param_5,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar5 = param_3;
  func_0x00010c156ce0(param_3,param_2,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108d435d0; end: 108d43723; -[SCEncryptedContentManager requestDecryptedDataForSnap:cloudFile:synchronous:queue:resultHandler:] */

void FUN_108d435d0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfdd120();
  uVar3 = uVar1;
  if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010c080ca0(), (int)uVar2 != 0)) {
    uVar2 = param_3;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar3 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar2);
      uVar3 = uVar2;
    }
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  puVar4 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  func_0x00010c1351e0(param_1,param_2,param_3,param_4,param_5,puVar4,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d43724; end: 108d43a7b; -[SCEncryptedContentManager requestDecryptedDataForSnap:cloudFile:representation:synchronous:queue:resultHandler:] */

void FUN_108d43724(long param_1,undefined8 param_2,ulong param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_8 != 0) {
    _objc_retain(param_8);
    _objc_retain(param_7);
    uStack_68 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bfdd120();
    if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c080ca0(), (int)uVar1 != 0)) {
      uVar1 = param_3;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        uVar6 = param_3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(uVar1);
        uVar6 = uVar1;
      }
      _objc_release(uStack_68);
      _objc_release(uVar1);
      uStack_68 = uVar6;
    }
    ppuVar2 = param_4;
    func_0x00010bfaca60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93dc0();
    ppuVar3 = ppuVar2;
    func_0x00010bfad160();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c072e60();
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar5 = ppuVar3;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar4 = ppuVar5;
      }
      _objc_retain();
      _objc_release(ppuVar5);
      uVar6 = *(ulong *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010bf7fa40();
      _objc_release(uVar6);
      if ((uVar1 & 1) == 0) {
        puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(uVar1);
        func_0x00010c1d0640(puVar7);
        func_0x00010bdd6120(param_1);
        lVar8 = param_1;
        func_0x00010be1eda0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf51e00(puVar7);
        FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6838,lVar8,puVar9,
                      *(undefined8 *)(param_1 + 0x68));
        _objc_release(puVar9);
        _objc_release(lVar8);
        _objc_release(puVar7);
      }
      _objc_release(ppuVar4);
    }
    puVar7 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    func_0x00010be90dc0(param_1);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(puVar7);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d43a7c; end: 108d43ab7; -[SCEncryptedContentManager requestAVAssetForSnap:automaticallyLoadedAssetKeys:cloudFile:encryptedContentManagerCallSite:synchronous:queue:resultHandler:] */

void FUN_108d43a7c(void)

{
  func_0x00010be907c0();
  return;
}



/* Entry: 108d43ab8; end: 108d43abb; -[SCEncryptedContentManager requestAVAssetForSnap:automaticallyLoadedAssetKeys:cloudFile:representation:encryptedContentManagerCallSite:synchronous:queue:resultHandler:] */

void FUN_108d43ab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be907d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestAVAssetForSnap_automatic_112581b90);
  return;
}



/* Entry: 108d43abc; end: 108d43ad3; -[SCEncryptedContentManager requestImageForSnap:cloudFile:encryptedContentManagerCallSite:synchronous:queue:resultHandler:] */

void FUN_108d43abc(undefined8 param_1)

{
  int in_w5;
  
  if (in_w5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c135850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestImageSynchronouslyForSnap_11262b030)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c135750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestImageAsynchronouslyForSna_11262aff0);
  return;
}



/* Entry: 108d43ad4; end: 108d43f9f; -[SCEncryptedContentManager requestImageSynchronouslyForSnap:cloudFile:encryptedContentManagerCallSite:resultHandler:] */

void FUN_108d43ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf8b0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be91220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  lVar3 = lVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_108d43fa0;
    uStack_88 = 0x108d43fb0;
    puStack_80 = (undefined *)0x0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_108d43fa0;
    uStack_b8 = 0x108d43fb0;
    uStack_b0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_108d43fa0;
    uStack_e8 = 0x108d43fb0;
    uStack_e0 = 0;
    uVar4 = 0;
    _dispatch_semaphore_create();
    puVar8 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar4);
    func_0x00010be91300(param_1);
    _objc_release(uVar5);
    _objc_release(puVar8);
    _dispatch_semaphore_wait(uVar4,0xffffffffffffffff);
    uVar5 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf8b0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be91200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar5);
    lVar6 = puStack_100[5];
    if (lVar6 == 0) {
      lVar7 = lVar3;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010c067ec0();
      lVar6 = (long)(int)lVar6;
      _objc_release(lVar7);
    }
    else {
      func_0x00010bf3ec40();
    }
    lVar7 = lVar3;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      if (lVar7 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        _objc_retain(param_4);
        _objc_retain(param_3);
        func_0x00010c0f7fc0(uVar5);
        _objc_release(param_3);
        _objc_release(param_4);
      }
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puStack_100[5];
      puStack_100[5] = puVar8;
      _objc_release(uVar5);
    }
    (**(code **)(param_6 + 0x10))(param_6,lVar7,puStack_100[5]);
    _objc_release(lVar7);
    _objc_release(lVar3);
    _objc_release(uVar4);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    puVar8 = puStack_80;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c067ec0();
    _objc_release(lVar3);
    if ((int)lVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = lVar2;
    func_0x00010bfb0d80(lVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,lVar3,puVar8);
    _objc_release(lVar3);
  }
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d43fa0; end: 108d43fb7;  */

void FUN_108d43fa0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108d43fb8; end: 108d4434b;  */

void FUN_108d43fb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d4434c; end: 108d44483; -[SCEncryptedContentManager requestImageAsynchronouslyForSnap:cloudFile:encryptedContentManagerCallSite:queue:resultHandler:] */

void FUN_108d4434c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108d44484;
  puStack_88 = &UNK_110866740;
  lStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_6;
  uStack_60 = param_5;
  uStack_58 = param_7;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d44484; end: 108d4475f;  */

void FUN_108d44484(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf8b0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be91220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar7);
  lVar3 = lVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    _objc_initWeak(auStack_90,*(undefined8 *)(param_1 + 0x20));
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puVar8 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_90);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar11);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    func_0x00010be91300(uVar7);
    _objc_release(uVar1);
    _objc_release(puVar8);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  else {
    lVar3 = lVar2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067ec0();
    _objc_release(lVar4);
    if ((int)lVar5 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108d44760;
    puStack_70 = &UNK_11084a9e8;
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar7);
    lStack_68 = lVar3;
    puStack_60 = puVar8;
    uStack_58 = uVar7;
    _objc_retain(puVar8);
    func_0x000107c27d8c(uVar1,&puStack_88);
    _objc_release(puStack_60);
    _objc_release(uStack_58);
    _objc_release(lVar3);
    _objc_release(puVar8);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 108d44760; end: 108d44773;  */

void FUN_108d44760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d44770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108d44774; end: 108d44c83;  */

void FUN_108d44774(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = (undefined *)(param_1 + 0x40);
  _objc_loadWeakRetained();
  if (puVar2 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_108d44c44;
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38420(0);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar5);
  }
  else {
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8b0c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010be91200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (param_4 == (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010c067ec0();
      puVar13 = (undefined *)(long)(int)puVar13;
      _objc_release(puVar6);
    }
    else {
      puVar13 = param_4;
      func_0x00010bf3ec40();
    }
    puVar6 = puVar5;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_4;
    if (puVar13 != (undefined *)0x0) {
      if (puVar6 == (undefined *)0x0) {
        ppuVar7 = *(undefined ***)(param_1 + 0x28);
        func_0x00010bfad280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
        if (ppuVar8 != (undefined **)0x0) {
          ppuVar1 = ppuVar8;
        }
        _objc_retain();
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
        uVar9 = *(ulong *)(puVar2 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf7fa40();
        _objc_release(uVar9);
        if ((uVar10 & 1) == 0) {
          puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(uVar3);
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(uVar3);
          func_0x00010c1d0640(puVar11);
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c08fa60(param_2);
          func_0x00010c0df840(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(puVar13);
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c08fa60(param_3);
          func_0x00010c0df840(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(puVar13);
          func_0x00010bdd6120(puVar2);
          puVar13 = puVar2;
          func_0x00010be1eda0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010bf51e00(puVar11);
          FUN_108e00074(&PTR____CFConstantStringClassReference_110ef68d8,puVar13,puVar12,
                        *(undefined8 *)(puVar2 + 0x68));
          _objc_release(puVar12);
          _objc_release(puVar13);
          _objc_release(puVar11);
        }
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c241220(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be38420(puVar2);
        _objc_release(uVar3);
        _objc_release(puVar13);
        _objc_release(ppuVar1);
      }
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
    }
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108d44c84;
    puStack_80 = &UNK_11084a9e8;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    puStack_78 = puVar6;
    puStack_70 = puVar11;
    uStack_68 = uVar4;
    _objc_retain(puVar11);
    _objc_retain(puVar6);
    func_0x000107c27d8c(uVar3,&puStack_98);
    _objc_release(puStack_70);
    _objc_release(puStack_78);
    _objc_release(uStack_68);
    _objc_release(puVar11);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
LAB_108d44c44:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108d44c84; end: 108d44c97;  */

void FUN_108d44c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d44c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108d44c98; end: 108d44caf; -[SCEncryptedContentManager requestOverlayFormatForSnap:cloudFile:encryptedContentManagerCallSite:synchronous:queue:resultHandler:] */

void FUN_108d44c98(undefined8 param_1)

{
  int in_w5;
  
  if (in_w5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c136070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestOverlayFormatSynchronousl_11262b238)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c136010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestOverlayFormatAsynchronous_11262b220);
  return;
}



/* Entry: 108d44cb0; end: 108d453e7; -[SCEncryptedContentManager requestOverlayFormatSynchronouslyForSnap:cloudFile:encryptedContentManagerCallSite:resultHandler:] */

void FUN_108d44cb0(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lStack_160;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be915c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar2 = lVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067ec0();
  _objc_release(lVar3);
  if ((int)lVar4 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar2 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,lVar2,puVar16);
    goto LAB_108d45344;
  }
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_108d43fa0;
  uStack_78 = 0x108d43fb0;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_108d43fa0;
  uStack_a8 = 0x108d43fb0;
  uStack_a0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_108d43fa0;
  uStack_d8 = 0x108d43fb0;
  uStack_d0 = 0;
  uVar5 = 0;
  _dispatch_semaphore_create();
  puVar6 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  func_0x00010be91300(param_1);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _dispatch_semaphore_wait(uVar5,0xffffffffffffffff);
  ppuVar8 = param_4;
  func_0x00010bfad280();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (ppuVar8 == (undefined **)0x0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    ppuVar9 = param_4;
    func_0x00010bfad280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64ac0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be6eba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(ppuVar9);
    lStack_160 = puStack_f0[5];
    if (lStack_160 == 0) {
      lVar4 = lVar3;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010c067ec0();
      lStack_160 = (long)(int)lVar10;
      _objc_release(lVar4);
    }
    else {
      func_0x00010bf3ec40();
    }
    lVar4 = lVar3;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    if (lStack_160 == 0) {
      if (lVar4 == 0) goto LAB_108d452c8;
LAB_108d452c0:
      uVar7 = 0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puStack_f0[5];
      puStack_f0[5] = puVar6;
      _objc_release(uVar7);
      if (lVar4 != 0) goto LAB_108d452c0;
      ppuVar11 = param_4;
      func_0x00010bfad280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar9 = ppuVar12;
      }
      _objc_retain();
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      uVar13 = *(ulong *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf7fa40();
      _objc_release(uVar13);
      if ((uVar14 & 1) == 0) {
        puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(uVar7);
        uVar7 = param_3;
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(uVar7);
        func_0x00010c1d0640(puVar15);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c08fa60(puStack_90[5]);
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c08fa60(puStack_c0[5]);
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(puVar6);
        func_0x00010bdd6120(param_1);
        lVar10 = param_1;
        func_0x00010be1eda0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar15;
        func_0x00010bf51e00(puVar15);
        FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6918,lVar10,puVar6,
                      *(undefined8 *)(param_1 + 0x68));
        _objc_release(puVar6);
        _objc_release(lVar10);
        _objc_release(puVar15);
      }
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be38420(param_1);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(ppuVar9);
LAB_108d452c8:
      uVar7 = puStack_f0[5];
    }
    (**(code **)(param_6 + 0x10))(param_6,lVar4,uVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(ppuVar8);
  _objc_release(uVar5);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
LAB_108d45344:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar16);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d453e8; end: 108d454b3;  */

void FUN_108d453e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d454b4; end: 108d4563f; -[SCEncryptedContentManager requestOverlayFormatAsynchronouslyForSnap:cloudFile:encryptedContentManagerCallSite:queue:resultHandler:] */

void FUN_108d454b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d45640; end: 108d458db;  */

void FUN_108d45640(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be915c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  lVar2 = lVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067ec0();
  _objc_release(lVar3);
  if ((int)lVar4 == 0) {
    puVar6 = (undefined *)0x0;
    puVar5 = PTR_PTR_1126bf788;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bf788;
  }
  PTR_PTR_1126bf788 = puVar5;
  if (lVar2 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_alloc(puVar5);
    func_0x00010c017ba0();
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010c11de00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,param_1 + 0x50);
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar12);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar8);
    func_0x00010be91300(uVar7);
    _objc_release(uVar9);
    _objc_release(puVar5);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_a0);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108d458dc;
    puStack_80 = &UNK_11084a9e8;
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    _objc_retain(uVar7);
    uStack_68 = uVar7;
    _objc_retain(lVar2);
    lStack_78 = lVar2;
    _objc_retain(puVar6);
    puStack_70 = puVar6;
    func_0x000107c27d8c(uVar9,&puStack_98);
    _objc_release(puStack_70);
    _objc_release(lStack_78);
    _objc_release(uStack_68);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar6);
  return;
}



/* Entry: 108d458dc; end: 108d458ef;  */

void FUN_108d458dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d458ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108d458f0; end: 108d45e07;  */

void FUN_108d458f0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_108d45dc8;
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38420(0);
    _objc_release(uVar12);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar6);
  }
  else {
    _objc_retain(param_4);
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bfad280();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    if (lVar3 == 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,0);
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010be6eba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      lVar5 = lVar4;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == (undefined *)0x0) {
        lVar7 = lVar4;
        func_0x00010c154b60();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c067ec0();
        puVar13 = (undefined *)(long)(int)lVar8;
        _objc_release(lVar7);
      }
      else {
        puVar13 = param_4;
        func_0x00010bf3ec40();
      }
      if (puVar13 != (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
        if (lVar5 == 0) {
          uVar9 = *(ulong *)(lVar2 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010bf7fa40();
          _objc_release(uVar9);
          if ((uVar10 & 1) == 0) {
            puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(uVar12);
            uVar12 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010bf8b0c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(uVar12);
            lVar7 = lVar3;
            func_0x00010beec820();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(lVar7);
            puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c08fa60(param_2);
            func_0x00010c0df840(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(puVar13);
            puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c08fa60(param_3);
            func_0x00010c0df840(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(puVar13);
            func_0x00010bdd6120(lVar2);
            lVar7 = lVar2;
            func_0x00010be1eda0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar11;
            func_0x00010bf51e00(puVar11);
            FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6958,lVar7,puVar13,
                          *(undefined8 *)(lVar2 + 0x68));
            _objc_release(puVar13);
            _objc_release(lVar7);
            _objc_release(puVar11);
          }
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c241220(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be38420(lVar2);
          _objc_release(uVar12);
          _objc_release(puVar13);
        }
      }
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_108d45e08;
      puStack_80 = &UNK_11084a9e8;
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar1);
      lStack_78 = lVar5;
      uStack_68 = uVar1;
      _objc_retain(puVar6);
      puStack_70 = puVar6;
      _objc_retain(lVar5);
      func_0x000107c27d8c(uVar12,&puStack_98);
      _objc_release(puStack_70);
      _objc_release(lStack_78);
      _objc_release(uStack_68);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(puVar6);
LAB_108d45dc8:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108d45e08; end: 108d45e1b;  */

void FUN_108d45e08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d45e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108d45e1c; end: 108d460cb; -[SCEncryptedContentManager requestDecryptedDataForSnap:cloudFile:synchronous:representation:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d45e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  ppuVar1 = param_4;
  func_0x00010bfaca60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93dc0();
  ppuVar2 = ppuVar1;
  func_0x00010bfad160();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c072e60();
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar4 = ppuVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar4;
    }
    _objc_retain();
    _objc_release(ppuVar4);
    uVar5 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf7fa40();
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(uVar8);
      uVar8 = param_3;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(uVar8);
      func_0x00010c1d0640(puVar7);
      func_0x00010bdd6120(param_1);
      lVar9 = param_1;
      func_0x00010be1eda0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010bf51e00(puVar7);
      FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6838,lVar9,puVar10,
                    *(undefined8 *)(param_1 + 0x68));
      _objc_release(puVar10);
      _objc_release(lVar9);
      _objc_release(puVar7);
    }
    _objc_release(ppuVar3);
  }
  func_0x00010be90dc0(param_1);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d460cc; end: 108d46103; -[SCEncryptedContentManager requestDecryptedDataForSnap:cloudFile:synchronous:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d460cc(void)

{
  func_0x00010c135220();
  return;
}



/* Entry: 108d46104; end: 108d46127; -[SCEncryptedContentManager _requestDecryptedDataForSnap:fileURL:encryptionHint:synchronous:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d46104(undefined8 param_1)

{
  int in_w5;
  
  if (in_w5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be90df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestDecryptedDataSynchronous_112581d18)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be90db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestDecryptedDataAsynchronou_112581d08);
  return;
}



/* Entry: 108d46128; end: 108d462eb; -[SCEncryptedContentManager requestKeyIVForSnap:encryptedContentManagerCallSite:queue:resultHandler:] */

void FUN_108d46128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x108d46234;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d462ec; end: 108d462f7;  */

void FUN_108d462ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d462f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108d462f8; end: 108d4649f; -[SCEncryptedContentManager requestOverlayFormatForSnap:encryptedOverlayBlob:encryptedContentManagerCallSite:queue:resultHandler:] */

void FUN_108d462f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_4 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,0);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_7);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d464a0; end: 108d465f3;  */

void FUN_108d464a0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar7);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  func_0x00010be91300(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 108d465f4; end: 108d46a87;  */

void FUN_108d465f4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = (undefined *)(param_1 + 0x40);
  _objc_loadWeakRetained();
  if (puVar2 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_108d46a48;
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38420(0);
    _objc_release(uVar9);
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar4);
  }
  else {
    _objc_retain(param_4);
    puVar4 = puVar2;
    func_0x00010be6eba0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010c067ec0();
      puVar11 = (undefined *)(long)(int)puVar11;
      _objc_release(puVar5);
    }
    else {
      puVar11 = param_4;
      func_0x00010bf3ec40();
    }
    puVar5 = param_4;
    if (puVar11 != (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      if (puVar3 == (undefined *)0x0) {
        uVar6 = *(ulong *)(puVar2 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf7fa40();
        _objc_release(uVar6);
        if ((uVar7 & 1) == 0) {
          puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(uVar9);
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(uVar9);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
          func_0x00010c0df840(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(puVar11);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c08fa60(param_2);
          func_0x00010c0df840(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(puVar11);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c08fa60(param_3);
          func_0x00010c0df840(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar8);
          _objc_release(puVar11);
          puVar11 = puVar2;
          func_0x00010be1eda0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010bf51e00(puVar8);
          FUN_108e00074(&PTR____CFConstantStringClassReference_110ef69b8,puVar11,puVar10,
                        *(undefined8 *)(puVar2 + 0x68));
          _objc_release(puVar10);
          _objc_release(puVar11);
          _objc_release(puVar8);
        }
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c241220(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be38420(puVar2);
        _objc_release(uVar9);
        _objc_release(puVar11);
      }
    }
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108d46a88;
    puStack_80 = &UNK_11084a9e8;
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    puStack_78 = puVar3;
    puStack_70 = puVar5;
    uStack_68 = uVar1;
    _objc_retain(puVar5);
    _objc_retain(puVar3);
    func_0x000107c27d8c(uVar9,&puStack_98);
    _objc_release(puStack_70);
    _objc_release(puStack_78);
    _objc_release(uStack_68);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
LAB_108d46a48:
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108d46a88; end: 108d46a9b;  */

void FUN_108d46a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d46a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108d46a9c; end: 108d46aab; -[SCEncryptedContentManager _decryptData:key:IV:] */

void FUN_108d46a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c156c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_secureDecryptWithKey_iv__112633538,param_4,param_5);
  return;
}



/* Entry: 108d46aac; end: 108d4723b; +[SCEncryptedContentManager _handleEncryptionRequestForSnapId:key:IV:isEncrypted:keyService:userBlizzard:queue:resultHandler:] */

void FUN_108d46aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = param_4;
  func_0x00010c08fa60();
  if (((puVar1 == (undefined *)0x0) || (lVar2 = param_5, func_0x00010c08fa60(), param_6 == 0)) ||
     (lVar2 == 0)) {
    puVar1 = param_4;
    func_0x00010c08fa60();
    if ((puVar1 != (undefined *)0x0) && (lVar2 = param_5, func_0x00010c08fa60(), lVar2 != 0)) {
      (**(code **)(param_10 + 0x10))(param_10,param_4,param_5,0);
      goto LAB_108d46dc8;
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c08fa60(param_4);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c08fa60(param_5);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010bf51e00(puVar5);
    FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6ad8,
                  &PTR____CFConstantStringClassReference_110ef6b18,puVar1,param_8);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_10 + 0x10))(param_10,param_4,param_5,puVar1);
    _objc_release(puVar1);
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_108d43fa0;
    uStack_70 = 0x108d43fb0;
    uStack_68 = 0;
    uVar3 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain(param_8);
    _objc_retain(param_10);
    uVar4 = uVar3;
    func_0x00010c135d60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puStack_88[5];
    puStack_88[5] = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(param_10);
    _objc_release(param_8);
    _objc_release(param_3);
    _objc_release(param_5);
    puVar5 = param_4;
  }
  _objc_release(puVar5);
LAB_108d46dc8:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d4723c; end: 108d47467; -[SCEncryptedContentManager _requestKeyIVForSnap:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d4723c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x108d4738c;
  puStack_80 = &UNK_110ac2ed8;
  uStack_78 = param_3;
  uStack_70 = uVar1;
  uStack_68 = uVar3;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c135a60(uVar2,param_2,param_3,param_4,param_5,&puStack_98);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_78);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108d47468; end: 108d4751f; -[SCEncryptedContentManager _requestDecryptedMediaDataForSnapId:duplicateSnapId:cloudFile:representation:key:IV:] */

void FUN_108d47468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010bfad280(param_5,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90e20(param_1,param_2,param_3,param_5,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d47520; end: 108d47757; -[SCEncryptedContentManager _requestDecryptedMediaDataForSnapId:fileURL:key:IV:] */

void FUN_108d47520(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c072e60();
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126b60f8;
    func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,0,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d04b0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c08fa60(param_6);
    }
    if (puVar5 == (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar1 = param_4;
      lVar2 = param_5;
      lVar7 = param_6;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110ef6b38);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010c0dd860(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3540(uVar4,param_2,2,puVar3,puVar5,0,param_3,param_8,uVar1,lVar2,lVar7);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(uVar4);
      puVar5 = (undefined *)0x0;
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d04c8;
    }
    else {
      lVar2 = param_5;
      func_0x00010c08fa60();
      if ((lVar2 == 0) || (lVar2 = param_6, func_0x00010c08fa60(), lVar2 == 0)) {
        ppuVar6 = (undefined **)0x0;
      }
      else {
        _objc_autoreleasePoolPush();
        func_0x00010bdf8ac0(param_1,param_2,puVar5,param_5,param_6);
        _objc_retainAutoreleasedReturnValue();
        if (param_1 == (undefined *)0x0) {
          ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d04e0;
        }
        else {
          _objc_retain(param_1);
          _objc_release(puVar5);
          ppuVar6 = (undefined **)0x0;
          puVar5 = param_1;
        }
        _objc_release(param_1);
        _objc_autoreleasePoolPop(lVar2);
      }
    }
    puVar3 = PTR_PTR_1126b60f8;
    func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,puVar5,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d47758; end: 108d477d7; -[SCEncryptedContentManager _canAccessWithoutDecryptionForContent:] */

bool FUN_108d47758(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c22ee80();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      lVar4 = param_3;
      func_0x00010bf93dc0(param_3);
      bVar1 = lVar4 == 2;
      goto LAB_108d477bc;
    }
  }
  bVar1 = false;
LAB_108d477bc:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108d477d8; end: 108d478e3; -[SCEncryptedContentManager _requestOverlayFormatWithoutDecryptionForSnapId:cloudFile:] */

void FUN_108d477d8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bfaca80(param_4,param_2,&PTR____CFConstantStringClassReference_110f72718,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bdd9880(param_1,param_2,param_4);
  puVar2 = PTR_PTR_1126b60f8;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar2,param_2,0,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_4;
    func_0x00010bfad160();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6ebc0(param_1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = param_1;
    }
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108d478e4; end: 108d479ff; -[SCEncryptedContentManager _requestImageWithoutDecryptionForSnapId:duplicateSnapId:cloudFile:] */

void FUN_108d478e4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bfaca80(param_5,param_2,&PTR____CFConstantStringClassReference_110f726f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bdd9880(param_1,param_2,uVar1);
  puVar3 = PTR_PTR_1126b60f8;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar3,param_2,0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    func_0x00010be91200(param_1,param_2,param_3,param_4,param_5,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d47a00; end: 108d47b4f; -[SCEncryptedContentManager _requestImageForSnapId:duplicateSnapId:cloudFile:key:IV:] */

void FUN_108d47a00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  
  func_0x00010be90e00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067ec0();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    ppuVar7 = (undefined **)0x0;
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar6 = PTR_PTR_1126b60f8;
  }
  else {
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)(int)lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar6 = PTR_PTR_1126b60f8;
  }
  PTR__OBJC_CLASS___UIImage_1126aea68 = puVar4;
  PTR_PTR_1126b60f8 = puVar6;
  if (lVar1 == 0) {
    func_0x00010c0f2b40(puVar6,param_2,0,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c14d040(puVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((puVar4 == (undefined *)0x0) &&
       (ppuVar5 = ppuVar7, func_0x00010c067ec0(), (int)ppuVar5 == 0)) {
      _objc_release(ppuVar7);
      ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d04f8;
    }
    puVar6 = PTR_PTR_1126b60f8;
    func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,puVar4,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(ppuVar7);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108d47b50; end: 108d47b5b; -[SCEncryptedContentManager _overlayFormatFromUnencryptedOverlayBlob:] */

void FUN_108d47b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__overlayFormatFromEncryptedOverl_112579488,param_3,0,0);
  return;
}



/* Entry: 108d47b5c; end: 108d47d4b; -[SCEncryptedContentManager _overlayFormatFromEncryptedOverlayBlob:key:IV:] */

void FUN_108d47b5c(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  puVar8 = PTR_PTR_1126b60f8;
  if (param_3 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar8,param_2,0,puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108d47d00;
  }
  lVar2 = param_4;
  func_0x00010c08fa60();
  if ((lVar2 == 0) || (lVar2 = param_5, func_0x00010c08fa60(), lVar2 == 0)) {
    uVar9 = 0;
LAB_108d47c08:
    puVar3 = (undefined *)0x0;
    puVar7 = param_3;
  }
  else {
    puVar3 = param_1;
    func_0x00010bdf8ac0(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      uVar9 = 0xb;
      goto LAB_108d47c08;
    }
    _objc_retain();
    _objc_release(param_3);
    uVar9 = 0;
    puVar7 = puVar3;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010c0ef840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0ef880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  puVar8 = PTR_PTR_1126b60f8;
  uVar1 = 7;
  if (lVar5 != 0 || puVar3 == (undefined *)0x0) {
    uVar1 = uVar9;
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f2b40(puVar8,param_2,lVar5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar3);
LAB_108d47d00:
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108d47d4c; end: 108d47ebf; -[SCEncryptedContentManager _AVAssetWithoutDecryptionForSnap:cloudFile:representation:] */

void FUN_108d47d4c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfaca80(param_4,param_2,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bdd9880(param_1,param_2,uVar1);
  puVar5 = PTR_PTR_1126b60f8;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar5,param_2,0,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf8b0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010be90e00(param_1,param_2,uVar3,uVar4,param_4,param_5,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bdd1aa0(param_1,param_2,puVar2,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108d47ec0; end: 108d48053; -[SCEncryptedContentManager _avAssetFromDataToErrorPair:videoDecryptionEventToReport:snap:] */

void FUN_108d47ec0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c067ec0();
  _objc_release(lVar2);
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11ac60();
    _objc_release(uVar4);
  }
  iVar8 = (int)lVar3;
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126b60f8;
    _objc_alloc(PTR_PTR_1126b60f8);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)iVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0134e0(puVar6,param_2,0,puVar7);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc();
    func_0x00010c0082a0();
    lVar2 = 3;
    if (iVar8 != 0 || puVar7 != (undefined *)0x0) {
      lVar2 = (long)iVar8;
    }
    puVar6 = PTR_PTR_1126b60f8;
    _objc_alloc(PTR_PTR_1126b60f8);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0134e0(puVar6,param_2,puVar7,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108d48054; end: 108d4830b; -[SCEncryptedContentManager _AVAssetForSnap:cloudFile:representation:encryptedContentManagerCallSite:completion:] */

void FUN_108d48054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_4;
  func_0x00010bfad2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdc3700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain();
    _objc_initWeak(auStack_68,param_1);
    puVar7 = PTR_PTR_1126bf788;
    _objc_alloc();
    func_0x00010c017ba0();
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010be91300(param_1);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar6);
  }
  else if (param_7 != 0) {
    lVar4 = lVar2;
    func_0x00010c154b60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067ec0();
    _objc_release(lVar4);
    (**(code **)(param_7 + 0x10))(param_7,lVar3,(long)(int)lVar5);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d4830c; end: 108d485af;  */

void FUN_108d4830c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = (undefined *)(param_1 + 0x50);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_108d48574;
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,9);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8b0c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010be90e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = puVar5;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == 0) {
      puVar10 = puVar5;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar10;
      func_0x00010c067ec0();
      lVar11 = (long)(int)puVar6;
      _objc_release(puVar10);
    }
    else {
      lVar11 = param_4;
      func_0x00010bf3ec40();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)uVar2 == 0) {
      puVar10 = (undefined *)0x0;
      if (puVar4 == (undefined *)0x0) goto LAB_108d484b8;
LAB_108d484d4:
      puVar6 = puVar1;
      func_0x00010bdd1aa0();
      _objc_retainAutoreleasedReturnValue();
      if (*(long *)(param_1 + 0x48) != 0) {
        puVar7 = puVar6;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c154b60();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c067ec0();
        _objc_release(puVar8);
        (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
                  (*(long *)(param_1 + 0x48),puVar7,(long)(int)puVar9);
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
    }
    else {
      puVar10 = PTR_PTR_1126dbd68;
      _objc_alloc(PTR_PTR_1126dbd68);
      func_0x00010c046ec0();
      if (puVar4 != (undefined *)0x0) goto LAB_108d484d4;
LAB_108d484b8:
      if (lVar11 == 0) goto LAB_108d484d4;
      (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,lVar11);
    }
    _objc_release(puVar10);
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
LAB_108d48574:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d485b0; end: 108d485d7; -[SCEncryptedContentManager _requestAVAssetForSnap:automaticallyLoadedAssetKeys:cloudFile:representation:encryptedContentManagerCallSite:synchronous:queue:resultHandler:] */

void FUN_108d485b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  if (param_8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be907f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__requestAVAssetSynchronouslyForS_112581b98,param_3,param_5,param_6,
               param_7,param_11);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be907b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestAVAssetAsynchronouslyFor_112581b88);
  return;
}



/* Entry: 108d485d8; end: 108d487e7; -[SCEncryptedContentManager _requestAVAssetSynchronouslyForSnap:cloudFile:representation:encryptedContentManagerCallSite:resultHandler:] */

void FUN_108d485d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = 0;
  _dispatch_semaphore_create();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108d43fa0;
  uStack_70 = 0x108d43fb0;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_108d43fa0;
  uStack_a0 = 0x108d43fb0;
  uStack_98 = 0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010bdc36e0(param_1);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  (**(code **)(param_7 + 0x10))(param_7,puStack_88[5],puStack_b8[5]);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d487e8; end: 108d48a73;  */

void FUN_108d487e8(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_2);
  lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar10 + 0x28);
  *(long *)(lVar10 + 0x28) = param_2;
  _objc_release(uVar2);
  if (param_2 == 0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x20);
    func_0x00010bfad280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf7fa40();
    _objc_release(uVar5);
    if ((uVar6 & 1) == 0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(uVar2);
      func_0x00010c1d0640(puVar7);
      func_0x00010bdd6120(*(undefined8 *)(param_1 + 0x30));
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010be1eda0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf51e00(puVar7);
      FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6b58,uVar2,puVar8,
                    *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68));
      _objc_release(puVar8);
      _objc_release(uVar2);
      _objc_release(puVar7);
    }
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c241220(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38420(uVar2);
    _objc_release(uVar9);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar2 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined **)(lVar10 + 0x28) = puVar8;
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(ppuVar1);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d48a74; end: 108d48c57; -[SCEncryptedContentManager _requestAVAssetAsynchronouslyForSnap:automaticallyLoadedAssetKeys:cloudFile:representation:encryptedContentManagerCallSite:queue:resultHandler:] */

void FUN_108d48a74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d48c58; end: 108d48da3;  */

void FUN_108d48c58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar2);
  func_0x00010bdc36e0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 108d48da4; end: 108d49253;  */

void FUN_108d48da4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_108d49224;
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38420(0);
    _objc_release(uVar10);
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,ppuVar15);
  }
  else if (param_2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = *(undefined ***)(param_1 + 0x28);
    func_0x00010bfad280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar15 = ppuVar5;
    }
    _objc_retain(ppuVar15);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    uVar6 = *(ulong *)(lVar1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf7fa40();
    _objc_release(uVar6);
    if ((uVar7 & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar8);
      _objc_release(uVar10);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar8);
      _objc_release(uVar10);
      func_0x00010c1d0640(puVar8);
      func_0x00010bdd6120(lVar1);
      lVar2 = lVar1;
      func_0x00010be1eda0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf51e00(puVar8);
      FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6b98,lVar2,puVar9,
                    *(undefined8 *)(lVar1 + 0x68));
      _objc_release(puVar9);
      _objc_release(lVar2);
      _objc_release(puVar8);
    }
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38420(lVar1);
    _objc_release(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108d49254;
    puStack_78 = &UNK_11084aaa8;
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar10);
    puStack_70 = puVar3;
    uStack_68 = uVar10;
    _objc_retain(puVar3);
    func_0x000107c27d8c(uVar11,&puStack_90);
    _objc_release(puStack_70);
    _objc_release(uStack_68);
    _objc_release(puVar3);
    _objc_release(puVar8);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x108d49268;
      puStack_a8 = &UNK_11084aaa8;
      ppuVar15 = *(undefined ***)(param_1 + 0x48);
      _objc_retain(ppuVar15);
      ppuStack_98 = ppuVar15;
      _objc_retain(param_2);
      lStack_a0 = param_2;
      func_0x000107c27d8c(uVar10,&puStack_c0);
      _objc_release(lStack_a0);
      ppuVar15 = ppuStack_98;
    }
    else {
      ppuVar15 = *(undefined ***)(param_1 + 0x40);
      _objc_retain(ppuVar15);
      _objc_retain(param_2);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar11);
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar12);
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar13);
      uVar14 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar14);
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar10);
      func_0x00010c09c640(param_2);
      _objc_release(uVar10);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(param_2);
    }
  }
  _objc_release(ppuVar15);
LAB_108d49224:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108d49254; end: 108d4927b;  */

void FUN_108d49254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d49264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108d4927c; end: 108d49783;  */

void FUN_108d4927c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lVar15 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar15);
  lVar3 = lVar15;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    _objc_release(lVar15);
  }
  else {
    puVar14 = (undefined *)0x0;
    lVar17 = *plStack_160;
    do {
      lVar16 = 0;
      do {
        if (*plStack_160 != lVar17) {
          _objc_enumerationMutation(lVar15);
        }
        lVar4 = *(long *)(param_1 + 0x28);
        lStack_178 = 0;
        func_0x00010c2533c0();
        lVar2 = lStack_178;
        _objc_retain(lStack_178);
        if (lVar4 != 2) {
          if (puVar14 == (undefined *)0x0) {
            puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            func_0x00010bf71e20();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar2 == 0) {
            ppuStack_128 = &PTR____CFConstantStringClassReference_110daf4d8;
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            puStack_120 = puVar5;
          }
          else {
            ppuStack_118 = &PTR____CFConstantStringClassReference_110daf4d8;
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_110 = &PTR____CFConstantStringClassReference_110daeeb8;
            lStack_100 = lVar2;
            puStack_108 = puVar5;
          }
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar14);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        _objc_release(lVar2);
        lVar16 = lVar16 + 1;
      } while (lVar3 != lVar16);
      lVar3 = lVar15;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    _objc_release(lVar15);
    if (puVar14 != (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = *(undefined ***)(param_1 + 0x30);
      func_0x00010bfad280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar8 != (undefined **)0x0) {
        ppuVar1 = ppuVar8;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      uVar9 = *(ulong *)(*(long *)(param_1 + 0x40) + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf7fa40();
      _objc_release(uVar9);
      if ((uVar10 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(uVar11);
        uVar11 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(uVar11);
        func_0x00010c1d0640(puVar6);
        func_0x00010bdd6120(*(undefined8 *)(param_1 + 0x40));
        uVar11 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010be1eda0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar6;
        func_0x00010bf51e00(puVar6);
        FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6b98,uVar11,puVar12,
                      *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x68));
        _objc_release(puVar12);
        _objc_release(uVar11);
        _objc_release(puVar6);
      }
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      uVar13 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c241220(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be38420(uVar11);
      _objc_release(uVar13);
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_108d49784;
      puStack_190 = &UNK_11084aaa8;
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      uVar13 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(uVar13);
      puStack_188 = puVar5;
      uStack_180 = uVar13;
      _objc_retain(puVar5);
      func_0x000107c27d8c(uVar11,&puStack_1a8);
      _objc_release(puStack_188);
      _objc_release(uStack_180);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(ppuVar1);
      goto LAB_108d49740;
    }
  }
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x108d49798;
  puStack_1c0 = &UNK_11084aaa8;
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  puVar14 = *(undefined **)(param_1 + 0x58);
  _objc_retain(puVar14);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  puStack_1b0 = puVar14;
  _objc_retain(uVar13);
  uStack_1b8 = uVar13;
  func_0x000107c27d8c(uVar11,&puStack_1d8);
  _objc_release(uStack_1b8);
  puVar14 = puStack_1b0;
LAB_108d49740:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108d49794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar14 + 0x28) + 0x10))
            (*(long *)(puVar14 + 0x28),0,*(undefined8 *)(puVar14 + 0x20));
  return;
}



/* Entry: 108d49784; end: 108d497ab;  */

void FUN_108d49784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d49794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108d497ac; end: 108d498a3; -[SCEncryptedContentManager _requestDataWithoutDecryptionForSnapId:fileURL:encryptionHint:] */

void FUN_108d497ac(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c234900();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b60f8;
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0xf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar4,param_2,0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    func_0x00010be90e20(param_1,param_2,param_3,param_4,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108d498a4; end: 108d49f13; -[SCEncryptedContentManager _requestDecryptedDataSynchronouslyForSnap:fileURL:encryptionHint:memoriesGrapheneContext:resultHandler:] */

void FUN_108d498a4(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be90d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if ((param_7 == 0) || (lVar5 == 0)) {
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    pcStack_80 = FUN_108d43fa0;
    uStack_78 = 0x108d43fb0;
    uStack_70 = 0;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_108d43fa0;
    uStack_a8 = 0x108d43fb0;
    uStack_a0 = 0;
    puStack_f0 = &uStack_f8;
    uStack_f8 = 0;
    uStack_e8 = 0x3032000000;
    pcStack_e0 = FUN_108d43fa0;
    uStack_d8 = 0x108d43fb0;
    uStack_d0 = 0;
    uVar6 = 0;
    _dispatch_semaphore_create();
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar6);
    func_0x00010be91300(param_1);
    _objc_release(uVar7);
    _dispatch_semaphore_wait(uVar6,0xffffffffffffffff);
    lVar5 = param_1;
    func_0x00010be90e20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = puStack_f0[5];
    if (lVar9 == 0) {
      lVar10 = lVar5;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      func_0x00010c067ec0();
      lVar9 = (long)(int)lVar9;
      _objc_release(lVar10);
    }
    else {
      func_0x00010bf3ec40();
    }
    lVar10 = lVar5;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar10 != 0) && (lVar9 != 0)) {
      puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puStack_f0[5];
      puStack_f0[5] = puVar11;
      _objc_release(uVar7);
    }
    if (lVar8 == 0) {
      if (puStack_f0[5] != 0) {
        func_0x00010bf3ec40();
      }
      ppuVar12 = param_4;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar1 = ppuVar12;
      }
      _objc_retain();
      _objc_release(ppuVar12);
      uVar13 = *(ulong *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf7fa40();
      _objc_release(uVar13);
      if ((uVar14 & 1) == 0) {
        puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(uVar7);
        uVar7 = param_3;
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(uVar7);
        func_0x00010c1d0640(puVar15);
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c08fa60(puStack_90[5]);
        func_0x00010c0df840(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(puVar11);
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c08fa60(puStack_c0[5]);
        func_0x00010c0df840(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(puVar11);
        lVar9 = param_1;
        func_0x00010be1eda0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar15;
        func_0x00010bf51e00(puVar15);
        FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6bd8,lVar9,puVar11,
                      *(undefined8 *)(param_1 + 0x68));
        _objc_release(puVar11);
        _objc_release(lVar9);
        _objc_release(puVar15);
      }
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be38420(param_1);
      _objc_release(uVar7);
      puVar15 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_7 + 0x10))(param_7,0,puVar15);
      _objc_release(puVar15);
      _objc_release(puVar11);
      _objc_release(ppuVar1);
    }
    else {
      (**(code **)(param_7 + 0x10))(param_7,lVar8,0);
    }
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(uVar6);
    _objc_release(uVar6);
    __Block_object_dispose(&uStack_f8,8);
    _objc_release(uStack_d0);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,lVar4,0);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d49f14; end: 108d49fdf;  */

void FUN_108d49f14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d49fe0; end: 108d4a267; -[SCEncryptedContentManager _requestDecryptedDataAsynchronouslyForSnap:fileURL:encryptionHint:memoriesGrapheneContext:queue:resultHandler:] */

void FUN_108d49fe0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_4;
  func_0x00010c072e60();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0,0);
  }
  else {
    uVar2 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be90d80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    if ((param_8 == 0) || (lVar5 == 0)) {
      _objc_initWeak(auStack_a0,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(param_3);
      _objc_retain(param_6);
      _objc_copyWeak(auStack_a8,auStack_a0);
      _objc_retain(param_8);
      _objc_retain(uVar2);
      _objc_retain(param_4);
      _objc_retain(param_7);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(param_7);
      _objc_release(param_4);
      _objc_release(uVar2);
      _objc_release(param_8);
      _objc_destroyWeak(auStack_a8);
      _objc_release(param_6);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_a0);
    }
    else {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_108d4a268;
      puStack_80 = &UNK_11084aaa8;
      _objc_retain(param_8);
      lStack_78 = lVar4;
      lStack_70 = param_8;
      func_0x000107c27d8c(param_7,&puStack_98);
      _objc_release(lStack_70);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d4a268; end: 108d4a27b;  */

void FUN_108d4a268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d4a278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108d4a27c; end: 108d4a3c3;  */

void FUN_108d4a27c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  func_0x00010be91300(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 108d4a3c4; end: 108d4a873;  */

void FUN_108d4a3c4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = (undefined *)(param_1 + 0x48);
  _objc_loadWeakRetained();
  if (puVar3 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_108d4a834;
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c241220(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38420(0);
    _objc_release(uVar10);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,puVar5);
  }
  else {
    _objc_retain(param_4);
    puVar5 = puVar3;
    func_0x00010be90e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010c067ec0();
      puVar13 = (undefined *)(long)(int)puVar13;
      _objc_release(puVar6);
    }
    else {
      puVar13 = param_4;
      func_0x00010bf3ec40();
    }
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar12 = param_4;
    if (puVar13 != (undefined *)0x0) {
      puVar13 = puVar5;
      func_0x00010c154b60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(puVar13);
      puVar12 = puVar6;
      if (puVar4 == (undefined *)0x0) {
        ppuVar7 = *(undefined ***)(param_1 + 0x30);
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
        if (ppuVar7 != (undefined **)0x0) {
          ppuVar1 = ppuVar7;
        }
        _objc_retain();
        _objc_release(ppuVar7);
        uVar8 = *(ulong *)(puVar3 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf7fa40();
        _objc_release(uVar8);
        if ((uVar9 & 1) == 0) {
          puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(uVar10);
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(uVar10);
          func_0x00010c1d0640(puVar13);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c08fa60(param_2);
          func_0x00010c0df840(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(puVar6);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c08fa60(param_3);
          func_0x00010c0df840(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar13);
          _objc_release(puVar6);
          puVar6 = puVar3;
          func_0x00010be1eda0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar13;
          func_0x00010bf51e00(puVar13);
          FUN_108e00074(&PTR____CFConstantStringClassReference_110ef6b58,puVar6,puVar11,
                        *(undefined8 *)(puVar3 + 0x68));
          _objc_release(puVar11);
          _objc_release(puVar6);
          _objc_release(puVar13);
        }
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c241220(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be38420(puVar3);
        _objc_release(uVar10);
        _objc_release(puVar6);
        _objc_release(ppuVar1);
      }
    }
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108d4a874;
    puStack_80 = &UNK_11084a9e8;
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    puStack_78 = puVar4;
    _objc_retain(uVar2);
    puStack_70 = puVar12;
    uStack_68 = uVar2;
    _objc_retain(puVar12);
    _objc_retain(puVar4);
    func_0x000107c27d8c(uVar10,&puStack_98);
    _objc_release(puStack_70);
    _objc_release(uStack_68);
    _objc_release(puStack_78);
    _objc_release(puVar12);
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
LAB_108d4a834:
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108d4a874; end: 108d4a89b;  */

void FUN_108d4a874(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d4a88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(long *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108d4a898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108d4a89c; end: 108d4aaa7; -[SCEncryptedContentManager _incrementEncryptionErrorGrapheneWithErrorCode:snapId:optionalMessage:] */

void FUN_108d4a89c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be1eda0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf93f20(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110db0dd8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110ef6c18,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ef6c38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c0dd860(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3540(uVar7,param_2,2,puVar2,puVar3,0,param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d4aaa8; end: 108d4aacf; -[SCEncryptedContentManager _getErrorInfoFromErrorCode:] */

undefined ** FUN_108d4aaa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x12) {
    return (undefined **)(&PTR_PTR_110ac2ff8)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e74a78;
}



/* Entry: 108d4aad0; end: 108d4ac83; -[SCEncryptedContentManager _buildExceptionParams:withCloudFile:representation:] */

void FUN_108d4aad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c242d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
    func_0x00010bfc7700(ppuVar2);
    ppuVar4 = ppuVar2;
    func_0x00010bfc4120();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bfc40e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar1 = ppuVar6;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar6);
    ppuVar6 = ppuVar4;
    func_0x00010bfcaaa0(ppuVar4);
    func_0x00010c1d0640(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110e4a098);
    _objc_release(ppuVar1);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,puVar7,&PTR____CFConstantStringClassReference_110ef6e78);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,puVar7,&PTR____CFConstantStringClassReference_110db9478);
    _objc_release(puVar7);
    func_0x00010c1d0640(param_3,param_2,param_5,&PTR____CFConstantStringClassReference_110ef6e98);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d4ac84; end: 108d4ad8b; -[SCEncryptedContentManager .cxx_destruct] */

void FUN_108d4ac84(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 108d4ad8c; end: 108d4ae8b;  */

void FUN_108d4ad8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar8 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f30383e);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_50 = puVar2;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"duration");
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_48 = puVar3;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f2f1c4e);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372e5a0;
  puRam000000011372e5a0 = puVar5;
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = (undefined1 *)ppuVar8;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ef6eb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  _objc_release(puVar6);
  FUN_108d4af50();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108d4ae8c; end: 108d4af4f; +[SCGalleryFilePathManager galleryUniqueJPGFileURLInCacheDirectoryWithPrefix:] */

void FUN_108d4ae8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ef6eb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  FUN_108d4af50();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108d4af50; end: 108d4afa3;  */

void FUN_108d4af50(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372e5a8 != -1) {
    func_0x000107c27d9c(0x11372e5a8,&PTR___NSConcreteGlobalBlock_110ac30d8);
  }
  uVar1 = uRam000000011372e5b0;
  _objc_retain(uRam000000011372e5b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d4afa4; end: 108d4b067; +[SCGalleryFilePathManager galleryUniqueMP4FileURLInCacheDirectoryWithPrefix:] */

void FUN_108d4afa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e4e638);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  FUN_108d4af50();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108d4b068; end: 108d4b0cf; +[SCGalleryFilePathManager clearGalleryMediaExceptUserHashSet:valdiRuntimeProvider:] */

void FUN_108d4b068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b24f0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf3b9e0(puVar1,param_2,param_3);
  func_0x00010bf3b900(PTR_PTR_1126b24f0,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d4b0d0; end: 108d4b36b; +[SCGalleryFilePathManager clearNativeDirectoryExceptUserHashSet:] */

void FUN_108d4b0d0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_108d4b36c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298c00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf4dfe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_retain(puVar7);
      puVar6 = puVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar6 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar7);
          }
          uVar12 = *(undefined8 *)((long)puVar11 * 8);
          func_0x00010c0899c0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_3;
          func_0x00010bf4b900();
          _objc_release(uVar12);
          if ((uVar8 & 1) == 0) {
            func_0x00010c12cc60(puVar3);
          }
          puVar11 = puVar11 + 1;
        } while (puVar6 != puVar11);
        puVar6 = puVar7;
        func_0x00010bf52a60();
      }
      _objc_release(puVar7);
      _objc_release(puVar7);
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar5);
    lVar5 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  if (lRam000000011372e5b8 != -1) {
    func_0x000107c27d9c(0x11372e5b8,&PTR___NSConcreteGlobalBlock_110ac30f8);
  }
  uVar12 = uRam000000011372e5c0;
  _objc_retain(uRam000000011372e5c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 108d4b36c; end: 108d4b3bf;  */

void FUN_108d4b36c(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372e5b8 != -1) {
    func_0x000107c27d9c(0x11372e5b8,&PTR___NSConcreteGlobalBlock_110ac30f8);
  }
  uVar1 = uRam000000011372e5c0;
  _objc_retain(uRam000000011372e5c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108d4b3c0; end: 108d4b483; +[SCGalleryFilePathManager clearMemoriesComposerDirectoryExceptUserHashSet:valdiRuntimeProvider:] */

void FUN_108d4b3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108d4b484;
  puStack_48 = &UNK_110ac30a8;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bfc69a0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}


