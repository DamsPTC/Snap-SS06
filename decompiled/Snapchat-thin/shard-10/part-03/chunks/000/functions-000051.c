/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dd8440; end: 107dd86d3; -[SCOperaLayerViewController logShakeToReportState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107dd8440(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
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
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ebe4b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3580(param_3,param_2,puVar1);
  _objc_release(puVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar8 = (long)_DAT_11276f87c;
  lVar9 = *(long *)(param_1 + lVar8);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar9);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar3 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c0dff20(uVar3,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25dfa0();
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bfb68e0();
        _NSStringFromCGRect();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf0aca0(uVar3);
        func_0x00010c0df720();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar5 = uVar3;
        func_0x00010bf87840(uVar3);
        func_0x00010c0df840(puVar6,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110ebe538);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b3580(param_3,param_2,puVar1);
        _objc_release(puVar1);
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(uVar11);
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  return *(long *)(param_3 + _DAT_11276f89c);
}



/* Entry: 107dd86d4; end: 107dd86e3; -[SCOperaLayerViewController layerContentMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd86d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f89c);
}



/* Entry: 107dd86e4; end: 107dd86f3; -[SCOperaLayerViewController setLayerContentMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd86e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276f89c) = param_3;
  return;
}



/* Entry: 107dd86f4; end: 107dd8713; -[SCOperaLayerViewController propertyUpdateModerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd86f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276f8a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dd8714; end: 107dd8727; -[SCOperaLayerViewController setPropertyUpdateModerator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd8714(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276f8a0,param_3);
  return;
}



/* Entry: 107dd8728; end: 107dd8767; -[SCOperaLayerViewController setLegacySessionStateContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd8728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276f898;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dd8768; end: 107dd8787; -[SCOperaLayerViewController eventPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd8768(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276f8a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dd8788; end: 107dd879b; -[SCOperaLayerViewController setEventPublisher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd8788(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276f8a4,param_3);
  return;
}



/* Entry: 107dd879c; end: 107dd87ab; -[SCOperaLayerViewController layer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd879c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f88c);
}



/* Entry: 107dd87ac; end: 107dd87bb; -[SCOperaLayerViewController page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd87ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f890);
}



/* Entry: 107dd87bc; end: 107dd87cb; -[SCOperaLayerViewController configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd87bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f86c);
}



/* Entry: 107dd87cc; end: 107dd87db; -[SCOperaLayerViewController layerViewControllerConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd87cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f870);
}



/* Entry: 107dd87dc; end: 107dd87eb; -[SCOperaLayerViewController operaDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd87dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f874);
}



/* Entry: 107dd87ec; end: 107dd87fb; -[SCOperaLayerViewController eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd87ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f878);
}



/* Entry: 107dd87fc; end: 107dd881b; -[SCOperaLayerViewController pageableViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd87fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276f8a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dd881c; end: 107dd882f; -[SCOperaLayerViewController setPageableViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd881c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276f8a8,param_3);
  return;
}



/* Entry: 107dd8830; end: 107dd883f; -[SCOperaLayerViewController frameLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd8830(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f880);
}



/* Entry: 107dd8840; end: 107dd8933; -[SCOperaLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd8840(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f880,0);
  _objc_destroyWeak(param_1 + _DAT_11276f8a8);
  _objc_storeStrong(param_1 + _DAT_11276f878,0);
  _objc_storeStrong(param_1 + _DAT_11276f874,0);
  _objc_storeStrong(param_1 + _DAT_11276f870,0);
  _objc_storeStrong(param_1 + _DAT_11276f86c,0);
  _objc_storeStrong(param_1 + _DAT_11276f890,0);
  _objc_storeStrong(param_1 + _DAT_11276f88c,0);
  _objc_destroyWeak(param_1 + _DAT_11276f8a4);
  _objc_storeStrong(param_1 + _DAT_11276f898,0);
  _objc_destroyWeak(param_1 + _DAT_11276f8a0);
  _objc_storeStrong(param_1 + _DAT_11276f884,0);
  _objc_storeStrong(param_1 + _DAT_11276f894,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f87c,0);
  return;
}



/* Entry: 107dd8934; end: 107dd8947; +[SCOperaSubviewLayoutConfig layoutConfig] */

void FUN_107dd8934(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dd8948; end: 107dd897f; +[SCOperaSubviewLayoutConfig layoutConfigWithHeightToWidthAspectRatio:docking:] */

void FUN_107dd8948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc();
  func_0x00010c01a400(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dd8980; end: 107dd89c7; +[SCOperaSubviewLayoutConfig layoutConfigWithVerticalAlignment:horizontalAlignment:verticalMargin:horizontalMargin:] */

void FUN_107dd8980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_alloc();
  func_0x00010c060ae0(param_1,param_2,param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dd89c8; end: 107dd8a03; -[SCOperaSubviewLayoutConfig init] */

void FUN_107dd89c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fb290;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 107dd8a04; end: 107dd8a63; -[SCOperaSubviewLayoutConfig initWithHeightToWidthAspectRatio:docking:] */

void FUN_107dd8a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb290;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 107dd8a64; end: 107dd8acb; -[SCOperaSubviewLayoutConfig initWithVerticalAlignment:horizontalAlignment:verticalMargin:horizontalMargin:] */

void FUN_107dd8a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb290;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
  }
  return;
}



/* Entry: 107dd8acc; end: 107dd8ad3; -[SCOperaSubviewLayoutConfig style] */

undefined8 FUN_107dd8acc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dd8ad4; end: 107dd8adb; -[SCOperaSubviewLayoutConfig diagonalLength] */

undefined8 FUN_107dd8ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dd8adc; end: 107dd8ae3; -[SCOperaSubviewLayoutConfig aspectRatio] */

undefined8 FUN_107dd8adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dd8ae4; end: 107dd8aeb; -[SCOperaSubviewLayoutConfig docking] */

undefined8 FUN_107dd8ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dd8aec; end: 107dd8af3; -[SCOperaSubviewLayoutConfig verticalAlignment] */

undefined8 FUN_107dd8aec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dd8af4; end: 107dd8afb; -[SCOperaSubviewLayoutConfig horizontalAlignment] */

undefined8 FUN_107dd8af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dd8afc; end: 107dd8b03; -[SCOperaSubviewLayoutConfig verticalMargin] */

undefined8 FUN_107dd8afc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dd8b04; end: 107dd8b0b; -[SCOperaSubviewLayoutConfig horizontalMargin] */

undefined8 FUN_107dd8b04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dd8b0c; end: 107dd929f;  */

void FUN_107dd8b0c(undefined8 *param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  *param_1 = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = 0;
  param_1[6] = &PTR____CFConstantStringClassReference_110ebe558;
  param_1[7] = 0;
  if (0.0 < param_2) {
    dVar2 = param_3;
    _CGRectGetHeight(param_3,param_4,param_5,param_6);
    dVar7 = param_3;
    _CGRectGetWidth(param_3,param_4,param_5,param_6);
    dVar3 = param_3;
    _CGRectGetWidth(param_3,param_4,param_5,param_6);
    dVar4 = param_3;
    _CGRectGetWidth(param_3,param_4,param_5,param_6);
    if (param_2 <= dVar2 / dVar7) {
      param_2 = param_2 * dVar4;
      dVar2 = param_3;
      _CGRectGetHeight(param_3,param_4,param_5,param_6);
      if (param_7 <= dVar2 - param_2) {
        dVar7 = param_3;
        _CGRectGetMinX(param_3,param_4,param_5,param_6);
        dVar4 = param_3;
        _CGRectGetMinY(param_3,param_4,param_5,param_6);
        if (param_7 + param_7 < dVar2 - param_2) {
          _CGRectGetHeight(param_3,param_4,param_5,param_6);
          param_7 = (param_3 - param_2) * 0.5;
        }
        param_1[1] = dVar7;
        param_1[2] = dVar4 + param_7;
        param_1[3] = dVar3;
        param_1[4] = param_2;
      }
      else {
        dVar2 = param_3;
        _CGRectGetMinX(param_3,param_4,param_5,param_6);
        _CGRectGetMinY(param_3,param_4,param_5,param_6);
        param_1[1] = dVar2;
        param_1[2] = param_3;
        param_1[3] = dVar3;
        param_1[4] = param_2;
        *(undefined1 *)(param_1 + 5) = 1;
      }
    }
    else {
      lVar1 = 8;
      if (1.77 <= dVar2 / dVar7) {
        lVar1 = 0;
      }
      dVar6 = *(double *)(&UNK_10dee7580 + lVar1);
      dVar2 = param_3;
      _CGRectGetHeight(param_3,param_4,param_5,param_6);
      dVar3 = param_6;
      dVar7 = param_5;
      dVar5 = param_3;
      if (dVar6 <= (param_2 * dVar4) / dVar2 + -1.0) {
        dVar7 = param_3;
        _CGRectGetHeight(param_3,param_4,param_5,param_6);
        dVar3 = param_3;
        _CGRectGetHeight(param_3,param_4,param_5,param_6);
        dVar7 = dVar7 / param_2;
        _CGRectGetMinX(param_3,param_4,param_5,param_6);
        dVar2 = param_3;
        _CGRectGetWidth(param_3,param_4,param_5,param_6);
        _CGRectGetMinY(param_3,param_4,param_5,param_6);
        dVar5 = dVar5 + (dVar2 - dVar7) * 0.5;
        param_4 = param_3;
      }
      param_1[1] = dVar5;
      param_1[2] = param_4;
      param_1[3] = dVar7;
      param_1[4] = dVar3;
    }
  }
  return;
}



/* Entry: 107dd92a0; end: 107dd92cb;  */

undefined1  [16] FUN_107dd92a0(double param_1,double param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((0.0 < param_2) && (0.0 < param_1)) {
    if (param_3 < param_2 / param_1) {
      auVar1._0_8_ = param_2 / param_3;
      auVar1._8_8_ = param_2;
      return auVar1;
    }
    param_2 = param_1 * param_3;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107dd92cc; end: 107dd9303;  */

undefined1  [16] FUN_107dd92cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  FUN_107dd9304(param_3,0,0,param_1,param_2);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 107dd9304; end: 107dd9447;  */

double FUN_107dd9304(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = param_2;
  _CGRectGetWidth(param_2,param_3,param_4,param_5);
  dVar1 = param_2;
  _CGRectGetWidth(param_2,param_3,param_4,param_5);
  dVar2 = param_2;
  _CGRectGetHeight(param_2,param_3,param_4,param_5);
  if (dVar2 < param_1 * dVar1) {
    dVar3 = param_2;
    _CGRectGetHeight(param_2,param_3,param_4,param_5);
    dVar3 = dVar3 / param_1;
    _CGRectGetHeight(param_2,param_3,param_4,param_5);
  }
  dVar1 = param_2;
  _CGRectGetMinX(param_2,param_3,param_4,param_5);
  dVar2 = param_2;
  _CGRectGetWidth(param_2,param_3,param_4,param_5);
  _CGRectGetMinY(param_2,param_3,param_4,param_5);
  _CGRectGetHeight(param_2,param_3,param_4,param_5);
  return dVar1 + (dVar2 - dVar3) * 0.5;
}



/* Entry: 107dd9448; end: 107dd994b;  */

void FUN_107dd9448(undefined8 *param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  *param_1 = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = 0;
  param_1[6] = &PTR____CFConstantStringClassReference_110ebe5b8;
  param_1[7] = 0;
  if (param_2 <= 0.0) {
    return;
  }
  dVar1 = param_3;
  _CGRectGetHeight(param_3,param_4,param_5,param_6);
  if (dVar1 <= 0.0) {
    return;
  }
  dVar1 = param_3;
  _CGRectGetWidth(param_3,param_4,param_5,param_6);
  if (dVar1 <= 0.0) {
    return;
  }
  if (param_7 <= 0.0) {
    param_7 = 1.0499999523162842;
  }
  if (param_8 <= 0.0) {
    param_8 = 1.1200000047683716;
  }
  if (1.0 < param_2) {
    dVar1 = param_5;
    dVar3 = param_6;
    if ((0.0 < param_6) && (0.0 < param_5)) {
      if (param_6 / param_5 <= param_2) {
        dVar3 = param_2 * param_5;
      }
      else {
        dVar1 = param_6 / param_2;
      }
    }
    dVar2 = param_3;
    _CGRectGetWidth(param_3,param_4,param_5,param_6);
    if ((dVar1 / dVar2 <= param_7) &&
       (dVar1 = param_3, _CGRectGetHeight(param_3,param_4,param_5,param_6), dVar3 / dVar1 <= param_8
       )) {
      *param_1 = 2;
      param_2 = param_3;
      goto LAB_107dd95d4;
    }
  }
  *param_1 = 1;
  FUN_107dd9304();
  param_6 = param_5;
  param_5 = param_4;
  param_4 = param_3;
LAB_107dd95d4:
  param_1[1] = param_2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}



/* Entry: 107dd994c; end: 107dd99eb;  */

undefined8
FUN_107dd994c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _CGRectGetMinX();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  return uVar1;
}



/* Entry: 107dd99ec; end: 107dd9a2b; +[SCOperaContextUtils isMyStorySingleSnapContext:] */

bool FUN_107dd99ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea1a58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 == 0;
}



/* Entry: 107dd9a2c; end: 107dd9ab7; +[SCOperaContextUtils isStoryContext:] */

bool FUN_107dd9a2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcadf8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea1a58);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107dd9ab8; end: 107dd9b83; +[SCOperaContextUtils adProductSourceTypeForContext:] */

long FUN_107dd9ab8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    lVar5 = -1;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c067ec0(uVar1);
    _objc_release(uVar1);
    lVar5 = (long)(int)uVar2;
  }
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 107dd9b84; end: 107dd9c4f; +[SCOperaContextUtils adTypeForContext:] */

long FUN_107dd9b84(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    lVar5 = -1;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c067ec0(uVar1);
    _objc_release(uVar1);
    lVar5 = (long)(int)uVar2;
  }
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 107dd9c50; end: 107dd9cef; +[SCOperaContextUtils isDisableLegacyOperaHeaderContext:] */

uint FUN_107dd9c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0db18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  if ((int)uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0db38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    uVar4 = (uint)uVar3 ^ 1;
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107dd9cf0; end: 107dd9e07;  */

undefined8 FUN_107dd9cf0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07dd40();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126afde0;
  if ((int)uVar3 != 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e34d58;
    func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e34d58,
                        &PTR____CFConstantStringClassReference_110e34d78,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf57f80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    if (param_2 != 0) {
      func_0x00010c10d3a0(puVar5);
    }
    _objc_release(puVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107dd9e08; end: 107dd9f7b; +[SCOperaContextUtilities baseLayerTypeForContext:] */

long FUN_107dd9e08(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = (int)param_1;
  _objc_retain(param_3);
  uVar2 = param_1;
  _objc_opt_class();
  func_0x00010c077260();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    _objc_opt_class();
    func_0x00010c0771c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      _objc_opt_class();
      func_0x00010c07cc40();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_1;
        _objc_opt_class();
        func_0x00010c083240();
        if ((uVar2 & 1) == 0) {
          uVar2 = param_1;
          _objc_opt_class();
          func_0x00010c07cc20();
          if ((uVar2 & 1) == 0) {
            uVar2 = param_1;
            _objc_opt_class();
            func_0x00010c075040();
            if ((uVar2 & 1) == 0) {
              _objc_opt_class();
              func_0x00010c080240();
              if ((param_1 & 1) == 0) {
                lVar4 = param_3;
                func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0be98
                                   );
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar4 == 0) {
                  _objc_opt_class();
                  func_0x00010c077180();
                  lVar4 = 0x1b;
                  if (iVar1 == 0) {
                    lVar4 = 0;
                  }
                }
                else {
                  lVar3 = param_3;
                  func_0x00010c0e00e0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f0be98);
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar3;
                  func_0x00010c2827c0();
                  _objc_release(lVar3);
                }
              }
              else {
                lVar4 = 0xb;
              }
            }
            else {
              lVar4 = 1;
            }
          }
          else {
            lVar4 = 2;
          }
        }
        else {
          lVar4 = 6;
        }
      }
      else {
        lVar4 = 5;
      }
    }
    else {
      lVar4 = 9;
    }
  }
  else {
    lVar4 = 4;
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107dd9f7c; end: 107dd9fe3; +[SCOperaContextUtilities isLoadingContext:] */

undefined8 FUN_107dd9f7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0bc38);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c067fc0(), lVar1 - 3U < 0xfffffffffffffffe)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107dd9fe4; end: 107dda07b; +[SCOperaContextUtilities isStreamingContext:] */

long FUN_107dd9fe4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e158);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e158);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107dda07c; end: 107dda117; +[SCOperaContextUtilities isRotateImageContext:] */

bool FUN_107dda07c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0be98);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0be98);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2827c0();
    bVar1 = lVar4 == 2;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107dda118; end: 107dda1ef; +[SCOperaContextUtilities isImageContext:] */

bool FUN_107dda118(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0c078);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0be98);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0be98);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c2827c0();
      bVar1 = lVar5 == 1;
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107dda1f0; end: 107dda28b; +[SCOperaContextUtilities isRotateVideoContext:] */

bool FUN_107dda1f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0be98);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0be98);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2827c0();
    bVar1 = lVar4 == 5;
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107dda28c; end: 107dda397; +[SCOperaContextUtilities isVideoContext:] */

bool FUN_107dda28c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e158b8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0c298);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0be98);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        bVar1 = false;
      }
      else {
        lVar5 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0be98);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c2827c0();
        bVar1 = lVar6 == 6;
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107dda398; end: 107dda3e3; +[SCOperaContextUtilities isGLVideoPlayerContext:] */

undefined8 FUN_107dda398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0c578);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107dda3e4; end: 107dda47f; +[SCOperaContextUtilities isContentTopSnapRemoteWebpageContext:] */

long FUN_107dda3e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0cad8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0cf78);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107dda480; end: 107dda4c3; +[SCOperaContextUtilities isSubscriptionLongformContext:] */

bool FUN_107dda480(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0d258);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 107dda4c4; end: 107dda507; +[SCOperaContextUtilities isOptOutInterstitialContext:] */

bool FUN_107dda4c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e1b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 107dda508; end: 107dda5cb; +[SCOperaContextUtilities isLongformContext:] */

undefined8 FUN_107dda508(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c077260(param_1,param_2,param_3);
  if (((((uVar1 & 1) == 0) &&
       (uVar1 = param_1, func_0x00010c0771c0(param_1,param_2,param_3), (uVar1 & 1) == 0)) &&
      (uVar1 = param_1, func_0x00010c080240(param_1,param_2,param_3), (uVar1 & 1) == 0)) &&
     ((uVar1 = param_1, func_0x00010c077180(param_1,param_2,param_3), (uVar1 & 1) == 0 &&
      (func_0x00010c077220(param_1,param_2,param_3), (param_1 & 1) == 0)))) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e2f8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107dda5cc; end: 107dda60f; +[SCOperaContextUtilities isLongformRemoteWebpageContext:] */

bool FUN_107dda5cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0cad8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 107dda610; end: 107dda6e3; +[SCOperaContextUtilities isLongformVideoContext:] */

uint FUN_107dda610(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  uint uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0c9f8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    unaff_x21 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0cab8);
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x21 != 0) goto LAB_107dda678;
    uVar4 = 0;
  }
  else {
LAB_107dda678:
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0ca38);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    uVar4 = (uint)lVar3 ^ 1;
    _objc_release(lVar2);
    if (lVar1 != 0) goto LAB_107dda6bc;
  }
  _objc_release(unaff_x21);
LAB_107dda6bc:
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107dda6e4; end: 107dda727; +[SCOperaContextUtilities isLongformShowContext:] */

bool FUN_107dda6e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e698);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 107dda728; end: 107dda76b; +[SCOperaContextUtilities isLongformCameraContext:] */

bool FUN_107dda728(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0e398);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 107dda76c; end: 107dda7ab; +[SCOperaContextUtilities isLongformShowcaseContext:] */

bool FUN_107dda76c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e4ed38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 107dda7ac; end: 107dda83b; +[SCOperaContextUtilities playerWidthFromParams:] */

double FUN_107dda7ac(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_4);
  func_0x00010c2a5040(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfb2c80(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return (double)param_1;
}



/* Entry: 107dda83c; end: 107dda8cb; +[SCOperaContextUtilities playerHeightFromParams:] */

double FUN_107dda83c(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_4);
  func_0x00010bfe0640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfb2c80(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return (double)param_1;
}



/* Entry: 107dda8cc; end: 107dda9a3; +[SCOperaContextUtilities viewportFromParams:] */

undefined1  [16]
FUN_107dda8cc(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_4);
  func_0x00010c29f780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar3 = (double)param_1;
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c29f5c0(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfb2c80(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  auVar4._8_8_ = (double)param_1;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 107dda9a4; end: 107ddaa7b; +[SCOperaContextUtilities resolutionFromParams:] */

undefined1  [16]
FUN_107dda9a4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_PTR_1126b2348;
  _objc_retain(param_4);
  func_0x00010c13a500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar3 = (double)param_1;
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c13a460(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfb2c80(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  auVar4._8_8_ = (double)param_1;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 107ddaa7c; end: 107ddaad7; +[SCOperaContextUtilities aspectRatioForParams:] */

double FUN_107ddaa7c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010c1010a0(param_2,param_3,param_4);
  dVar1 = param_1;
  func_0x00010c100a80(param_2,param_3,param_4);
  _objc_release(param_4);
  return param_1 / dVar1;
}



/* Entry: 107ddaad8; end: 107ddab43; +[SCOperaContextUtilities pageLoadingStateStringFromContext:] */

undefined * FUN_107ddaad8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0bc38);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010c067fc0(), 2 < uVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = (&PTR_PTR_110a0d018)[uVar1];
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 107ddab44; end: 107ddabaf; +[SCOperaContextUtilities itemFeatureAttributionInfoFromContext:] */

void FUN_107ddab44(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0bbf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2dc0;
  _objc_opt_class(PTR_PTR_1126b2dc0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ddabb0; end: 107ddae0f; +[SCOperaContextUtilities loadingPropertiesWithState:errorDomain:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ***
FUN_107ddabb0(undefined8 param_1,undefined8 param_2,undefined ***param_3,undefined **param_4,
             undefined *param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **unaff_x22;
  undefined *unaff_x23;
  long lVar16;
  long lVar17;
  undefined ***unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = (undefined **)param_3;
  ppuVar14 = param_4;
  _objc_retain(param_4);
  pppuVar5 = (undefined ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 < (undefined ***)0x2) {
    func_0x00010c1d0640(pppuVar5);
    ppuVar14 = &PTR____CFConstantStringClassReference_110f0bc58;
    ppuVar13 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce08;
  }
  else {
    if ((long)param_3 - 3U < 2) {
      func_0x00010c1d0640(pppuVar5);
      func_0x00010c1d0640(pppuVar5);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puStack_60 = puVar1;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      unaff_x23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_50 = puVar2;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_5 = unaff_x23;
      func_0x00010bf99240(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(pppuVar5);
      _objc_release(puVar1);
      _objc_release(unaff_x23);
      unaff_x22 = &PTR____CFConstantStringClassReference_110db3738;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = &PTR____CFConstantStringClassReference_110f0c938;
      ppuVar13 = unaff_x22;
      func_0x00010c1d0640(pppuVar5);
      _objc_release(unaff_x22);
      _objc_release(puVar2);
      goto LAB_107ddadbc;
    }
    if (param_3 != (undefined ***)0x2) goto LAB_107ddadbc;
    ppuVar14 = &PTR____CFConstantStringClassReference_110f0bc38;
    ppuVar13 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cce20;
  }
  func_0x00010c1d0640(pppuVar5);
LAB_107ddadbc:
  pppuVar4 = pppuVar5;
  func_0x00010bf51e00();
  _objc_release(pppuVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar4);
    return pppuVar4;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_107ddae10;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f8 = PTR_PTR_1126fb298;
  pppuVar3 = &ppuStack_100;
  ppuStack_100 = param_4;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(pppuVar3,PTR_s_init_1125d9248);
  pppuVar6 = (undefined ***)0x0;
  if (pppuVar3 != (undefined ***)0x0) {
    *(undefined8 *)((long)pppuVar3 + (long)_DAT_11276f8cc) = 0xbff0000000000000;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(pppuVar3);
    _objc_release(puVar2);
    pppuVar5 = pppuVar3;
    func_0x00010bdf4ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)pppuVar3 + (long)_DAT_11276f8d0);
    *(undefined ****)((long)pppuVar3 + (long)_DAT_11276f8d0) = pppuVar5;
    _objc_release(uVar15);
    pppuVar5 = pppuVar3;
    func_0x00010bdf4c20();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)pppuVar3 + (long)_DAT_11276f8d4);
    *(undefined ****)((long)pppuVar3 + (long)_DAT_11276f8d4) = pppuVar5;
    _objc_release(uVar15);
    pppuVar5 = pppuVar3;
    func_0x00010bdf3dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_11276f8d8;
    uVar15 = *(undefined8 *)((long)pppuVar3 + lVar16);
    *(undefined ****)((long)pppuVar3 + lVar16) = pppuVar5;
    _objc_release(uVar15);
    func_0x00010befbb60(pppuVar3);
    func_0x00010c219b60(*(undefined8 *)((long)pppuVar3 + lVar16));
    puStack_138 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    pppuVar4 = *(undefined ****)((long)pppuVar3 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar3;
    ppuStack_108 = (undefined **)pppuVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_110 = (undefined **)pppuVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = (undefined **)pppuVar4;
    uVar15 = *(undefined8 *)((long)pppuVar3 + lVar16);
    ppuStack_118 = (undefined **)pppuVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = pppuVar3;
    uStack_120 = uVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_128 = (undefined **)pppuVar5;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar15;
    unaff_x26 = *(undefined8 *)((long)pppuVar3 + lVar16);
    uStack_130 = uVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = pppuVar3;
    uStack_140 = unaff_x26;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = unaff_x26;
    pppuVar5 = *(undefined ****)((long)pppuVar3 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = (undefined **)pppuVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d8 = unaff_x22;
    unaff_x23 = *(undefined **)((long)pppuVar3 + lVar16);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = pppuVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = (undefined **)0x5;
    unaff_x27 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d0 = unaff_x25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = (undefined **)unaff_x27;
    func_0x00010beef8c0(puStack_138);
    _objc_release(unaff_x27);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(pppuVar4);
    _objc_release(pppuVar5);
    _objc_release(unaff_x26);
    _objc_release(unaff_x28);
    _objc_release(uStack_140);
    _objc_release(uStack_130);
    _objc_release(ppuStack_128);
    _objc_release(uStack_120);
    _objc_release(ppuStack_118);
    _objc_release(ppuStack_110);
    pppuVar6 = (undefined ***)ppuStack_108;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_107ddb180;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = PTR_PTR_1126fb298;
  ppuStack_1d8 = (undefined **)pppuVar6;
  ppuStack_1a0 = (undefined **)unaff_x28;
  ppuStack_198 = (undefined **)unaff_x27;
  uStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  ppuStack_180 = (undefined **)unaff_x24;
  puStack_178 = unaff_x23;
  ppuStack_170 = unaff_x22;
  ppuStack_168 = (undefined **)pppuVar4;
  ppuStack_160 = (undefined **)pppuVar5;
  ppuStack_158 = (undefined **)pppuVar3;
  ppuStack_150 = &puStack_70;
  _objc_msgSendSuper2(&ppuStack_1d8,PTR_s_didMoveToSuperview_1125bb968);
  pppuVar5 = pppuVar6;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = pppuVar5;
  _objc_release();
  if (pppuVar5 != (undefined ***)0x0) {
    func_0x00010c219b60(pppuVar6);
    pppuVar5 = pppuVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar6;
    func_0x00010c262ca0(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_11276f8dc;
    uVar15 = *(undefined8 *)((long)pppuVar6 + lVar16);
    *(undefined ****)((long)pppuVar6 + lVar16) = pppuVar7;
    _objc_release(uVar15);
    _objc_release(pppuVar3);
    _objc_release(pppuVar4);
    _objc_release(pppuVar5);
    pppuVar5 = pppuVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar6;
    func_0x00010c262ca0(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar5;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar7);
    _objc_release(pppuVar3);
    _objc_release(pppuVar5);
    func_0x00010c1e3380(0x437a0000,pppuVar4);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    pppuVar5 = pppuVar6;
    ppuStack_1c8 = (undefined **)pppuVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar6;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar7 = pppuVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar6;
    ppuStack_1c0 = (undefined **)pppuVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar10 = pppuVar6;
    func_0x00010c262ca0(pppuVar6);
    _objc_retainAutoreleasedReturnValue();
    pppuVar11 = pppuVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar12 = pppuVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1b0 = *(undefined8 *)((long)pppuVar6 + lVar16);
    ppuVar14 = (undefined **)0x4;
    pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_1b8 = (undefined **)pppuVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = (undefined **)pppuVar6;
    func_0x00010beef8c0(puVar2);
    _objc_release(pppuVar6);
    _objc_release(pppuVar12);
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    _objc_release(pppuVar9);
    _objc_release(pppuVar8);
    _objc_release(pppuVar7);
    _objc_release(pppuVar3);
    _objc_release(pppuVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_retain(ppuVar14);
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)((long)pppuVar4 + (long)_DAT_11276f8e0);
  *(undefined ***)((long)pppuVar4 + (long)_DAT_11276f8e0) = ppuVar13;
  _objc_release(uVar15);
  ppuVar13 = ppuVar14;
  func_0x00010bf51e00();
  _objc_release(ppuVar14);
  uVar15 = *(undefined8 *)((long)pppuVar4 + (long)_DAT_11276f8e4);
  *(undefined ***)((long)pppuVar4 + (long)_DAT_11276f8e4) = ppuVar13;
  _objc_release(uVar15);
  lVar16 = (long)_DAT_11276f8d0;
  func_0x00010c213180(*(undefined8 *)((long)pppuVar4 + lVar16));
  lVar17 = (long)_DAT_11276f8d4;
  func_0x00010c213180(*(undefined8 *)((long)pppuVar4 + lVar17));
  _objc_release(param_5);
  pppuVar5 = (undefined ***)PTR__OBJC_CLASS___UIFont_1126aec38;
  if (param_6 == 0) {
    func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(*(undefined8 *)((long)pppuVar4 + lVar16));
  func_0x00010c19e480(*(undefined8 *)((long)pppuVar4 + lVar17));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar5);
  return pppuVar5;
}



/* Entry: 107ddae10; end: 107ddb17f; -[SCOperaVideoProgressTextView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ddae10(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126fb298;
  puVar1 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276f8cc) = 0xbff0000000000000;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bdf4ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f8d0);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11276f8d0) = puVar3;
    _objc_release(uVar14);
    puVar3 = puVar1;
    func_0x00010bdf4c20();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f8d4);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11276f8d4) = puVar3;
    _objc_release(uVar14);
    puVar3 = puVar1;
    func_0x00010bdf3dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11276f8d8;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 **)((long)puVar1 + lVar15) = puVar3;
    _objc_release(uVar14);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = *(undefined8 **)((long)puVar1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_a8 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar4;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar15);
    puStack_b8 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_c0 = uVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar3;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar14;
    unaff_x26 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_d0 = uVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = puVar1;
    uStack_e0 = unaff_x26;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = unaff_x26;
    unaff_x20 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = unaff_x22;
    unaff_x23 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 5;
    unaff_x27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = unaff_x25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x27;
    func_0x00010beef8c0(puStack_d8);
    _objc_release(unaff_x27);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    _objc_release(unaff_x26);
    _objc_release(unaff_x28);
    _objc_release(uStack_e0);
    _objc_release(uStack_d0);
    _objc_release(puStack_c8);
    _objc_release(uStack_c0);
    _objc_release(puStack_b8);
    _objc_release(puStack_b0);
    puVar3 = puStack_a8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_107ddb180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = PTR_PTR_1126fb298;
  puStack_178 = puVar3;
  puStack_140 = unaff_x28;
  puStack_138 = unaff_x27;
  uStack_130 = unaff_x26;
  uStack_128 = unaff_x25;
  puStack_120 = unaff_x24;
  uStack_118 = unaff_x23;
  uStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  uStack_100 = unaff_x20;
  puStack_f8 = puVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_178,PTR_s_didMoveToSuperview_1125bb968);
  puVar1 = puVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  _objc_release();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c219b60(puVar3);
    puVar1 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c262ca0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11276f8dc;
    uVar14 = *(undefined8 *)((long)puVar3 + lVar15);
    *(undefined8 **)((long)puVar3 + lVar15) = puVar6;
    _objc_release(uVar14);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c262ca0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    func_0x00010c1e3380(0x437a0000,puVar4);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = puVar3;
    puStack_168 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_160 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c262ca0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = *(undefined8 *)((long)puVar3 + lVar15);
    param_4 = 4;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_158 = puVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar12;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf51e00();
  uVar14 = *(undefined8 *)((long)puVar4 + (long)_DAT_11276f8e0);
  *(undefined **)((long)puVar4 + (long)_DAT_11276f8e0) = param_3;
  _objc_release(uVar14);
  uVar14 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar13 = *(undefined8 *)((long)puVar4 + (long)_DAT_11276f8e4);
  *(undefined8 *)((long)puVar4 + (long)_DAT_11276f8e4) = uVar14;
  _objc_release(uVar13);
  lVar15 = (long)_DAT_11276f8d0;
  func_0x00010c213180(*(undefined8 *)((long)puVar4 + lVar15));
  lVar16 = (long)_DAT_11276f8d4;
  func_0x00010c213180(*(undefined8 *)((long)puVar4 + lVar16));
  _objc_release(param_5);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIFont_1126aec38;
  if (param_6 == 0) {
    func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(*(undefined8 *)((long)puVar4 + lVar15));
  func_0x00010c19e480(*(undefined8 *)((long)puVar4 + lVar16));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 107ddb180; end: 107ddb467; -[SCOperaVideoProgressTextView didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddb180(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126fb298;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_didMoveToSuperview_1125bb968);
  lVar13 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar13;
  _objc_release();
  if (lVar13 != 0) {
    func_0x00010c219b60(param_1);
    lVar13 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11276f8dc;
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    *(long *)(param_1 + lVar12) = lVar2;
    _objc_release(uVar11);
    _objc_release(lVar14);
    _objc_release(lVar1);
    _objc_release(lVar13);
    lVar13 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar13;
    func_0x00010bf49460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar14);
    _objc_release(lVar13);
    func_0x00010c1e3380(0x437a0000,lVar1);
    puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar13 = param_1;
    lStack_88 = lVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    lStack_80 = lVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c262ca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = *(undefined8 *)(param_1 + lVar12);
    param_4 = 4;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar7;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar8;
    func_0x00010beef8c0(puVar10);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(lVar1 + _DAT_11276f8e0);
  *(undefined **)(lVar1 + _DAT_11276f8e0) = param_3;
  _objc_release(uVar11);
  uVar11 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar9 = *(undefined8 *)(lVar1 + _DAT_11276f8e4);
  *(undefined8 *)(lVar1 + _DAT_11276f8e4) = uVar11;
  _objc_release(uVar9);
  lVar13 = (long)_DAT_11276f8d0;
  func_0x00010c213180(*(undefined8 *)(lVar1 + lVar13));
  lVar14 = (long)_DAT_11276f8d4;
  func_0x00010c213180(*(undefined8 *)(lVar1 + lVar14));
  _objc_release(param_5);
  puVar10 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (param_6 == 0) {
    func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(*(undefined8 *)(lVar1 + lVar13));
  func_0x00010c19e480(*(undefined8 *)(lVar1 + lVar14));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 107ddb468; end: 107ddb56f; -[SCOperaVideoProgressTextView configureWithText:timeText:textColor:usesEmphasisFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddb468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276f8e0);
  *(undefined8 *)(param_1 + _DAT_11276f8e0) = param_3;
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f8e4);
  *(undefined8 *)(param_1 + _DAT_11276f8e4) = uVar3;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11276f8d0;
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,param_5);
  lVar5 = (long)_DAT_11276f8d4;
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,param_5);
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (param_6 == 0) {
    func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ddb570; end: 107ddb57f; -[SCOperaVideoProgressTextView setBottomOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddb570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f8dc),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 107ddb580; end: 107ddb6e7; -[SCOperaVideoProgressTextView updateProgressLabelWithTimeLeft:] */

/* WARNING: Possible PIC construction at 0x000107ddb650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107ddb67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107ddb6a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ddb680) */
/* WARNING: Removing unreachable block (ram,0x000107ddb654) */
/* WARNING: Removing unreachable block (ram,0x000107ddb6a8) */
/* WARNING: Removing unreachable block (ram,0x000107ddb6b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddb580(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  double dVar5;
  
  dVar5 = (double)(int)(param_1 + 0.5);
  if (*(double *)(param_2 + _DAT_11276f8cc) == dVar5) {
    return;
  }
  *(double *)(param_2 + _DAT_11276f8cc) = dVar5;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_2 + _DAT_11276f8e4) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)(int)(param_1 + 0.5));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db2d98;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db2d98);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + _DAT_11276f8d4);
      goto code_r0x00010c212f20;
    }
  }
  uVar3 = *(undefined8 *)(param_2 + _DAT_11276f8d4);
  ppuVar4 = (undefined **)0x0;
code_r0x00010c212f20:
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setText__1126625f0,ppuVar4);
  return;
}



/* Entry: 107ddb6e8; end: 107ddb7d3; -[SCOperaVideoProgressTextView _createTitleLabel] */

void FUN_107ddb6e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c165e20(puVar1,param_2,0);
  func_0x00010c1bdb00(puVar1,param_2,4);
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c17d4c0(puVar1,param_2,1);
  func_0x00010c181cc0(0x437a0000,puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ddb7d4; end: 107ddb8bf; -[SCOperaVideoProgressTextView _createTimeLabel] */

void FUN_107ddb7d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c165e20(puVar1,param_2,0);
  func_0x00010c1bdb00(puVar1,param_2,4);
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c17d4c0(puVar1,param_2,1);
  func_0x00010c181cc0(0x443b8000,puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ddb8c0; end: 107ddb9ab; -[SCOperaVideoProgressTextView _createStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddb8c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar2);
  func_0x00010c16e060(puVar1);
  func_0x00010c166c00(puVar1);
  func_0x00010c190b80(puVar1);
  puVar2 = puVar1;
  func_0x00010c207380(0,puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + _DAT_11276f8e4,0);
  _objc_storeStrong(puVar2 + _DAT_11276f8e0,0);
  _objc_storeStrong(puVar2 + _DAT_11276f8dc,0);
  _objc_storeStrong(puVar2 + _DAT_11276f8d4,0);
  _objc_storeStrong(puVar2 + _DAT_11276f8d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + _DAT_11276f8d8,0);
  return;
}



/* Entry: 107ddb9ac; end: 107ddba2b; -[SCOperaVideoProgressTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddb9ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f8e4,0);
  _objc_storeStrong(param_1 + _DAT_11276f8e0,0);
  _objc_storeStrong(param_1 + _DAT_11276f8dc,0);
  _objc_storeStrong(param_1 + _DAT_11276f8d4,0);
  _objc_storeStrong(param_1 + _DAT_11276f8d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f8d8,0);
  return;
}



/* Entry: 107ddba2c; end: 107ddbb5f; -[SCOperaVideoProgressViewV2 init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ddba2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb2a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276f8e8) = 0xffffffffffffffff;
    func_0x00010c160fc0(puVar1);
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11276f8ec;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f8f0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f8f0) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126d7e48;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f8f4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f8f4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126d7e48;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f8f8);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f8f8) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107ddbb60; end: 107ddbcd7; -[SCOperaVideoProgressViewV2 layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddbb60(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fb2a0;
  lStack_60 = param_4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  dVar5 = *(double *)(param_4 + _DAT_11276f8fc);
  param_3 = param_3 * dVar5;
  func_0x00010be82e60(param_4);
  lVar4 = (long)_DAT_11276f8ec;
  dVar6 = 0.0;
  func_0x00010c19f0e0(0,0,param_3,dVar5,*(undefined8 *)(param_4 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar4));
  _CGRectGetMaxX();
  dVar5 = dVar6;
  func_0x00010bf20c00(param_4);
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar4));
  _CGRectGetMaxX();
  param_3 = param_3 - dVar5;
  func_0x00010be82e60(param_4);
  lVar4 = (long)_DAT_11276f8f0;
  func_0x00010c19f0e0(dVar6,0,param_3,dVar5,*(undefined8 *)(param_4 + lVar4));
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar4));
  func_0x00010bf199c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar4));
  func_0x00010c19f0e0(puVar1);
  uVar3 = *(undefined8 *)(param_4 + _DAT_11276f8f8);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107ddbcd8; end: 107ddbd7f; -[SCOperaVideoProgressViewV2 setProgressWithVideoViewTimeSec:mediaDurationSec:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddbcd8(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = (long)_DAT_11276f900;
  dVar2 = param_1;
  func_0x00010c1177e0(*(undefined8 *)(param_3 + lVar1));
  param_1 = param_1 + dVar2;
  func_0x00010c1177a0(*(undefined8 *)(param_3 + lVar1));
  dVar4 = 1.0;
  if ((dVar2 != 0.0) &&
     ((dVar3 = dVar2, 0.0 < dVar2 || (dVar4 = 0.0, dVar3 = param_2, 0.0 < param_2)))) {
    dVar3 = param_1 / dVar3;
    dVar4 = 1.0;
    if (dVar3 <= 1.0) {
      dVar4 = dVar3;
    }
  }
  func_0x00010c1e4680(dVar4,param_3);
  if (0.0 <= dVar2) {
    param_2 = dVar2;
  }
  param_2 = param_2 - param_1;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c288df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,param_3,PTR_s_updateProgressLabelWithTimeLeft__11267fda0);
  return;
}



/* Entry: 107ddbd80; end: 107ddbdbb; -[SCOperaVideoProgressViewV2 setProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddbd80(ulong param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  if (0x7fefffffffffffff < (param_1 & 0x7fffffffffffffff)) {
    return;
  }
  dVar1 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  *(double *)(param_2 + _DAT_11276f8fc) = dVar2;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107ddbdbc; end: 107ddbdff; -[SCOperaVideoProgressViewV2 expandProgressViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107ddbdbc(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11276f904);
  if (bVar1 == 1) {
    func_0x00010c11bb20();
  }
  else {
    func_0x00010bea3c20(param_1,param_2,1,1);
  }
  return bVar1 ^ 1;
}



/* Entry: 107ddbe00; end: 107ddbe63; -[SCOperaVideoProgressViewV2 collapseProgressViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ddbe00(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276f900);
  func_0x00010bf80640();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + _DAT_11276f904) == '\x01')) {
    uVar2 = 1;
    func_0x00010bea3c20(param_1,param_2,0,1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 107ddbe64; end: 107ddbe87; -[SCOperaVideoProgressViewV2 applySkipAttemptHighlight] */

void FUN_107ddbe64(undefined8 param_1)

{
  func_0x00010bf9be00();
                    /* WARNING: Could not recover jumptable at 0x00010c11bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pulseProgressViewIfNeeded_1126248e8);
  return;
}



/* Entry: 107ddbe88; end: 107ddbf13; -[SCOperaVideoProgressViewV2 clearSkipAttemptHighlight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddbe88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_11276f900;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar3 = (long)_DAT_11276f908;
    func_0x00010c069d00(*(undefined8 *)(param_1 + lVar3));
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c129260(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276f8f0),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107ddbf14; end: 107ddc037; -[SCOperaVideoProgressViewV2 pulseProgressViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddbf14(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar5 = (long)_DAT_11276f900;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c129280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276f8f0));
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11276f908;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar4));
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010c08ace0();
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c150360(0x3fe8000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar3;
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 107ddc038; end: 107ddc0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddc038(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276f900);
    func_0x00010c129260(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276f8f0),param_2,uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ddc0a4; end: 107ddc0af; -[SCOperaVideoProgressViewV2 showDefaultProgressView] */

void FUN_107ddc0a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setExpanded_animated__1125868b0,0,1);
  return;
}



/* Entry: 107ddc0b0; end: 107ddc287; -[SCOperaVideoProgressViewV2 setProgressViewWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddc0b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar6 = (long)_DAT_11276f900;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = param_3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c129260(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276f8f0),param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf43f00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_11276f8ec),param_2,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276f8f8);
    lVar2 = param_3;
    func_0x00010c117a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c117aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c1292a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c294a20(param_3);
    func_0x00010bf47c00(uVar1,param_2,lVar2,lVar3,lVar4,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276f8f4);
    lVar2 = param_3;
    func_0x00010c117a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c117aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf43f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c294a20(param_3);
    func_0x00010bf47c00(uVar1,param_2,lVar2,lVar3,lVar4,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c08cdc0(param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bf80640(uVar1);
    func_0x00010bea3c20(param_1,param_2,uVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ddc288; end: 107ddc2ef; -[SCOperaVideoProgressViewV2 updateProgressLabelWithTimeLeft:] */

/* WARNING: Possible PIC construction at 0x000107ddc2d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ddc2d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddc288(double param_1,long param_2)

{
  if (param_1 < 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setHidden__1126479f8,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c288df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11276f8f4),
             PTR_s_updateProgressLabelWithTimeLeft__11267fda0);
  return;
}



/* Entry: 107ddc2f0; end: 107ddc44f; -[SCOperaVideoProgressViewV2 _setExpanded:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddc2f0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  *(char *)(param_1 + _DAT_11276f904) = (char)param_3;
  lVar3 = (long)_DAT_11276f8f8;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  lVar2 = (long)_DAT_11276f8f4;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
  uVar4 = 0xc000000000000000;
  if (param_3 == 0) {
    uVar4 = 0xc034000000000000;
  }
  func_0x00010c173680(uVar4,*(undefined8 *)(param_1 + lVar2));
  func_0x00010c173680(uVar4,*(undefined8 *)(param_1 + lVar3));
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar4 = 0x3fd3333333333333;
  if (param_4 == 0) {
    uVar4 = 0;
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107ddc450;
  puStack_68 = &UNK_110842e18;
  lStack_60 = param_1;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf03420(uVar4,puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107ddc450; end: 107ddc457;  */

void FUN_107ddc450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107ddc458; end: 107ddc4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddc458(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (param_1 != 0)) && ((*(byte *)(param_1 + _DAT_11276f904) & 1) == 0)) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276f8f8));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276f8f4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ddc4c4; end: 107ddc4e3; -[SCOperaVideoProgressViewV2 _progressBarHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ddc4c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4034000000000000;
  if (*(char *)(param_1 + _DAT_11276f904) == '\0') {
    uVar1 = 0x4008000000000000;
  }
  return uVar1;
}



/* Entry: 107ddc4e4; end: 107ddc563; -[SCOperaVideoProgressViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ddc4e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f900,0);
  _objc_storeStrong(param_1 + _DAT_11276f908,0);
  _objc_storeStrong(param_1 + _DAT_11276f8f8,0);
  _objc_storeStrong(param_1 + _DAT_11276f8f4,0);
  _objc_storeStrong(param_1 + _DAT_11276f8f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f8ec,0);
  return;
}



/* Entry: 107ddc564; end: 107ddc607; -[SCOperaMetaInfoProvider initWithTrackerService:circumstanceEngine:] */

undefined1 *
FUN_107ddc564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb2a8;
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



/* Entry: 107ddc608; end: 107ddc64b; -[SCOperaMetaInfoProvider _allowMediaFileAttachment] */

void FUN_107ddc608(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100150168();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110ebed58,0,0);
    return;
  }
  return;
}



/* Entry: 107ddc64c; end: 107ddc6f7; -[SCOperaMetaInfoProvider getJiraLabelsByProject:] */

undefined ** FUN_107ddc64c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR_PTR_1126aedf8;
  _objc_retain(param_3);
  func_0x00010c0e9ee0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c9aa8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0897a0();
    _objc_release(puVar1);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111181ad8;
    if (puVar3 != (undefined *)0x1) {
      ppuVar4 = (undefined **)0x0;
    }
  }
  return ppuVar4;
}



/* Entry: 107ddc6f8; end: 107ddc82b; -[SCOperaMetaInfoProvider provideMetaInfoFiles:] */

void FUN_107ddc6f8(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bdca240();
    if ((param_1 & 1) == 0) {
      (**(code **)(param_3 + 0x10))(param_3,PTR____NSArray0__struct_11034ab48);
    }
    else {
      puVar1 = PTR_PTR_1126c9aa8;
      func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c2747e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c22a520();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf5f6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126c9aa8;
      func_0x00010c22b6a0(PTR_PTR_1126c9aa8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfad460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      (**(code **)(param_3 + 0x10))(param_3,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


