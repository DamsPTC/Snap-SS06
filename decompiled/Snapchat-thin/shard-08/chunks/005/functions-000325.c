/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10619fd1c; end: 10619fd47; -[SCCaptureVideoDataSourceObserver stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_10619fd1c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10619fd48; end: 10619fd4f; -[SCCaptureVideoDataSourceObserver isAsync] */

undefined8 FUN_10619fd48(void)

{
  return 0;
}



/* Entry: 10619fd50; end: 10619fdc3; -[SCCaptureVideoDataSourceObserver observeSampleBuffer:] */

void FUN_10619fd50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf70d80();
  func_0x00010bdff560(param_1,param_2,param_3,lVar3);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10619fdc4; end: 10619fdc7; -[SCCaptureVideoDataSourceObserver observeSampleBufferAsynchronously:completion:] */

void FUN_10619fdc4(void)

{
  return;
}



/* Entry: 10619fdc8; end: 10619fddf; -[SCCaptureVideoDataSourceObserver cameraCaptureLensProvider] */

void FUN_10619fdc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10619fde0; end: 10619fe1f; -[SCCaptureVideoDataSourceObserver .cxx_destruct] */

void FUN_10619fde0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10619fe20; end: 10619fed3; -[SCFeatureCameraModeSelectionManagerImpl initWithFeatures:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10619fe20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0030;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274162c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdd61e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741630);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112741630) = puVar3;
    _objc_release(uVar2);
    func_0x00010be66660(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10619fed4; end: 1061a0277; -[SCFeatureCameraModeSelectionManagerImpl modesForDirectorModeToolbar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619fed4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_190 [8];
  undefined4 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined4 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c0d3c80();
  _objc_initWeak(auStack_108,param_1);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar9 = *(long *)(param_1 + _DAT_11274162c);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        uVar12 = *(ulong *)(lStack_148 + lVar8 * 8);
        uVar3 = uVar12;
        func_0x00010c074c20();
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar12;
          func_0x00010c0cfda0();
          uVar10 = *(ulong *)(param_1 + _DAT_112741634);
          if (uVar10 != 0) {
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            _objc_release(puVar4);
            if ((uVar10 & 1) == 0) goto LAB_1061a0178;
          }
          func_0x00010bde3c60(param_1);
          func_0x00010c252440(uVar12);
          func_0x00010be60f00(param_1);
          puVar5 = PTR_PTR_1126c8778;
          _objc_alloc(PTR_PTR_1126c8778);
          puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_178 = 0xc2000000;
          pcStack_170 = FUN_1061a0280;
          puStack_168 = &UNK_11085ae18;
          _objc_copyWeak(auStack_160,auStack_108);
          uStack_158 = (int)uVar3;
          func_0x00010c02c500(0x3ff0000000000000,puVar5);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c154e40(uVar12);
          func_0x00010bde3ea0(param_1);
          func_0x00010c0df760(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f8f20(puVar5);
          _objc_release(puVar4);
          _objc_copyWeak(auStack_190,auStack_108);
          uStack_188 = (int)uVar3;
          func_0x00010c1f8fe0(puVar5);
          lVar6 = param_1;
          func_0x00010bdc3f00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c160fa0(puVar5);
          _objc_release(lVar6);
          func_0x00010befa120(puVar1);
          _objc_destroyWeak(auStack_190);
          _objc_release(puVar5);
          _objc_destroyWeak(auStack_160);
        }
LAB_1061a0178:
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar9;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  puVar7 = auStack_108;
  _objc_destroyWeak(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume(puVar7);
  return;
}



/* Entry: 1061a0278; end: 1061a027f;  */

void FUN_1061a0278(void)

{
  return;
}



/* Entry: 1061a0280; end: 1061a02f7;  */

void FUN_1061a0280(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be6a180(lVar1,param_2,*(undefined4 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061a02f8; end: 1061a03f3; -[SCFeatureCameraModeSelectionManagerImpl toolbarButtonPositionDidChange:mode:] */

void FUN_1061a02f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1061a03f4; end: 1061a0487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a03f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112741630);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined4 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(uVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c273840(uVar3,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061a0488; end: 1061a0493; -[SCFeatureCameraModeSelectionManagerImpl modesForVerticalToolbar] */

undefined * FUN_1061a0488(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 1061a0494; end: 1061a0497; -[SCFeatureCameraModeSelectionManagerImpl resetMetrics] */

void FUN_1061a0494(void)

{
  return;
}



/* Entry: 1061a0498; end: 1061a04a3; -[SCFeatureCameraModeSelectionManagerImpl usageMetrics] */

undefined * FUN_1061a0498(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 1061a04a4; end: 1061a06af; -[SCFeatureCameraModeSelectionManagerImpl _observeModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a04a4(undefined1 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112741638);
  *(undefined **)(param_1 + _DAT_112741638) = puVar1;
  _objc_release(uVar6);
  puVar5 = param_1;
  _objc_initWeak(auStack_108);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar7 = *(long *)(param_1 + _DAT_11274162c);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_140;
    do {
      lVar10 = 0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lStack_148 + lVar10 * 8);
        func_0x00010c0cfd80();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = auStack_108;
        _objc_copyWeak(auStack_158);
        uVar6 = uVar8;
        func_0x00010c25ff60(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_destroyWeak(auStack_158);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar7;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  puVar3 = auStack_108;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  _objc_retain(puVar5);
  puVar3 = puVar3 + 0x28;
  _objc_loadWeakRetained();
  if ((puVar3 != (undefined1 *)0x0) && (puVar4 = puVar5, func_0x00010bf1f3c0(), (int)puVar4 != 0)) {
    func_0x00010be6a160(puVar3);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1061a06b0; end: 1061a0713;  */

void FUN_1061a06b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010bf1f3c0(), (int)uVar1 != 0)) {
    func_0x00010be6a160(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061a0714; end: 1061a092b; -[SCFeatureCameraModeSelectionManagerImpl _onModeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a0714(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  long lVar9;
  long lVar10;
  undefined1 auStack_188 [8];
  undefined4 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined **ppuStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_1 + _DAT_11274162c);
  _objc_retain(lVar9);
  uVar8 = SUB84(&uStack_130,0);
  lVar1 = lVar9;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    unaff_x21 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    lStack_140 = lVar9;
    uStack_138 = param_3;
    do {
      param_1 = 0;
      uVar5 = param_3;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        unaff_x22 = *(undefined8 *)(lStack_128 + param_1 * 8);
        uVar2 = unaff_x22;
        func_0x00010c252440();
        param_3 = uVar5;
        if ((int)uVar2 == 1) {
          uVar2 = unaff_x22;
          func_0x00010bfec0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0cfda0(uVar5);
          func_0x00010c0df760(puVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010bf4b900();
          if ((int)uVar4 == 0) {
            func_0x00010bfec0c0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0cfda0(unaff_x22);
            func_0x00010c0df760(puVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar5;
            func_0x00010bf4b900();
            _objc_release(puVar6);
            param_3 = uStack_138;
            lVar9 = lStack_140;
            _objc_release(uVar5);
            _objc_release(puVar3);
            _objc_release(uVar2);
            if ((int)uVar4 == 0) goto LAB_1061a08b8;
          }
          else {
            _objc_release(puVar3);
            _objc_release(uVar2);
          }
          func_0x00010bf803c0(unaff_x22);
        }
LAB_1061a08b8:
        param_1 = param_1 + 1;
        uVar5 = param_3;
      } while (lVar1 != param_1);
      uVar8 = SUB84(&uStack_130,0);
      lVar1 = lVar9;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar9);
  uVar5 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1061a092c;
  puVar7 = auStack_178;
  uStack_170 = unaff_x22;
  ppuStack_168 = unaff_x21;
  lStack_160 = param_1;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_initWeak(puVar7,uVar5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_188,auStack_178);
  uStack_180 = uVar8;
  func_0x00010c0f7fc0(puVar7);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_178);
  return;
}



/* Entry: 1061a092c; end: 1061a09fb; -[SCFeatureCameraModeSelectionManagerImpl _onModeTypeTapped:] */

void FUN_1061a092c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1061a09fc; end: 1061a0b1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a09fc(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar4;
  long lVar5;
  undefined1 auStack_168 [8];
  undefined4 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    unaff_x21 = *(long *)(lVar1 + _DAT_11274162c);
    _objc_retain(unaff_x21);
    lVar2 = unaff_x21;
    param_3 = (int)&uStack_120;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(unaff_x21);
          }
          func_0x00010c0e6f00(*(undefined8 *)(lStack_118 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = unaff_x21;
        param_3 = (int)&uStack_120;
        func_0x00010bf52a60();
        unaff_x22 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(unaff_x21);
  }
  lVar2 = lVar1;
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1061a0b1c;
  puVar3 = auStack_158;
  uStack_150 = unaff_x22;
  lStack_148 = unaff_x21;
  lStack_140 = param_1;
  lStack_138 = lVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_initWeak(puVar3,lVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_168,auStack_158);
  uStack_160 = param_3;
  func_0x00010c0f7fc0(puVar3);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_158);
  return;
}



/* Entry: 1061a0b1c; end: 1061a0beb; -[SCFeatureCameraModeSelectionManagerImpl _onModeTypeTappedSecondary:] */

void FUN_1061a0b1c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1061a0bec; end: 1061a0d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1061a0bec(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar3 = *(long *)(uVar1 + (long)_DAT_11274162c);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    param_3 = (uint)&uStack_120;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(lVar3);
          }
          func_0x00010c155020(*(undefined8 *)(lStack_118 + lVar5 * 8),param_2,
                              *(undefined4 *)(param_1 + 0x28));
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = lVar3;
        param_3 = (uint)&uStack_120;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar3);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar1;
  }
  ___stack_chk_fail();
  if (param_3 < 5) {
    return (ulong)*(uint *)(&UNK_10ddd9c74 + (ulong)param_3 * 4);
  }
  return 0;
}



/* Entry: 1061a0d0c; end: 1061a0d2b; -[SCFeatureCameraModeSelectionManagerImpl _modeStateFromCameraModeState:] */

undefined4 FUN_1061a0d0c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 5) {
    return *(undefined4 *)(&UNK_10ddd9c74 + (ulong)param_3 * 4);
  }
  return 0;
}



/* Entry: 1061a0d2c; end: 1061a0e93; -[SCFeatureCameraModeSelectionManagerImpl _buildFeaturesDictionary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1061a0d2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
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
  
  iVar6 = (int)&uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + _DAT_11274162c);
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        uVar3 = uVar8;
        func_0x00010c0cfda0(uVar8);
        lVar4 = param_1;
        func_0x00010bde3c60(param_1,param_2,uVar3);
        func_0x00010c0df760(puVar5,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar1,param_2,uVar8,puVar5);
        _objc_release(puVar5);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar7;
      iVar6 = (int)&uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  if (iVar6 - 1U < 0x18) {
    return (undefined *)(ulong)*(uint *)(&UNK_10ddd9c88 + (ulong)(iVar6 - 1U) * 4);
  }
  return (undefined *)0x1;
}



/* Entry: 1061a0e94; end: 1061a0eb7; -[SCFeatureCameraModeSelectionManagerImpl _composerCameraModeFromCameraModeType:] */

undefined4 FUN_1061a0e94(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 0x18) {
    return *(undefined4 *)(&UNK_10ddd9c88 + (ulong)(param_3 - 1U) * 4);
  }
  return 1;
}



/* Entry: 1061a0eb8; end: 1061a0ecb; -[SCFeatureCameraModeSelectionManagerImpl _composerCameraModeStateFromCameraModeState:] */

uint FUN_1061a0eb8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 != 2) {
    param_3 = (uint)(param_3 != 1);
  }
  return param_3;
}



/* Entry: 1061a0ecc; end: 1061a0edf; -[SCFeatureCameraModeSelectionManagerImpl _composerSecondaryButtonTypeFromSecondaryButtonState:] */

int FUN_1061a0ecc(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + -1;
  if (7 < param_3 - 2U) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 1061a0ee0; end: 1061a0f6b; -[SCFeatureCameraModeSelectionManagerImpl _accessibilityIdFromCameraModeType:] */

undefined ** FUN_1061a0ee0(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 0xd) {
    if (param_3 == 2) {
      return &PTR____CFConstantStringClassReference_110e43f38;
    }
    if (param_3 == 4) {
      return &PTR____CFConstantStringClassReference_110e43e98;
    }
    if (param_3 == 0xc) {
      return &PTR____CFConstantStringClassReference_110e43eb8;
    }
  }
  else {
    if (param_3 == 0xd) {
      return &PTR____CFConstantStringClassReference_110e43f18;
    }
    if (param_3 == 0xf) {
      return &PTR____CFConstantStringClassReference_110e43ed8;
    }
    if (param_3 == 0x14) {
      return &PTR____CFConstantStringClassReference_110e43ef8;
    }
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1061a0f6c; end: 1061a0f7b; -[SCFeatureCameraModeSelectionManagerImpl dmToolbarFeatureAllowlist] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a0f6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741634);
}



/* Entry: 1061a0f7c; end: 1061a0fbb; -[SCFeatureCameraModeSelectionManagerImpl setDmToolbarFeatureAllowlist:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a0f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741634;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061a0fbc; end: 1061a101b; -[SCFeatureCameraModeSelectionManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a0fbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741634,0);
  _objc_storeStrong(param_1 + _DAT_112741638,0);
  _objc_storeStrong(param_1 + _DAT_112741630,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274162c,0);
  return;
}



/* Entry: 1061a101c; end: 1061a1027; +[SCCCameraDirectorModeIPreviewButtonActionHandling valdiMarshallableObjectDescriptor] */

void FUN_1061a101c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110912b58;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1061a1028; end: 1061a106b;  */

undefined8 FUN_1061a1028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8780;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x0001061a1554();
  func_0x0001061a1508();
  return param_1;
}



/* Entry: 1061a106c; end: 1061a1077; +[SCCCameraDirectorModeIUndoButtonActionHandling valdiMarshallableObjectDescriptor] */

void FUN_1061a106c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110912b88;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1061a1078; end: 1061a10bb;  */

undefined8 FUN_1061a1078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8788;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x0001061a1554();
  func_0x0001061a1508();
  return param_1;
}



/* Entry: 1061a10bc; end: 1061a10c7; +[SCCCameraDirectorModeDraftsPickerView componentPath] */

undefined ** FUN_1061a10bc(void)

{
  return &PTR____CFConstantStringClassReference_110e43f58;
}



/* Entry: 1061a10c8; end: 1061a10e7; -[SCCCameraDirectorModeDraftsPickerView initWithViewModel:componentContext:runtime:] */

void FUN_1061a10c8(void)

{
  FUN_1061a14e4(PTR_PTR_1126f0038);
  return;
}



/* Entry: 1061a10e8; end: 1061a111b; -[SCCCameraDirectorModeDraftsPickerView setViewModel:] */

void FUN_1061a10e8(void)

{
  func_0x0001061a14f8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1514();
  func_0x0001061a1520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a111c; end: 1061a1153; -[SCCCameraDirectorModeDraftsPickerView viewModel] */

void FUN_1061a111c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a1154; end: 1061a115f; +[SCCCameraDirectorModeErrorToast componentPath] */

undefined ** FUN_1061a1154(void)

{
  return &PTR____CFConstantStringClassReference_110e43f78;
}



/* Entry: 1061a1160; end: 1061a117f; -[SCCCameraDirectorModeErrorToast initWithViewModel:componentContext:runtime:] */

void FUN_1061a1160(void)

{
  FUN_1061a14e4(PTR_PTR_1126f0040);
  return;
}



/* Entry: 1061a1180; end: 1061a11b3; -[SCCCameraDirectorModeErrorToast setViewModel:] */

void FUN_1061a1180(void)

{
  func_0x0001061a14f8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1514();
  func_0x0001061a1520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a11b4; end: 1061a11eb; -[SCCCameraDirectorModeErrorToast viewModel] */

void FUN_1061a11b4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a11ec; end: 1061a11f7; +[SCCCameraDirectorModeGreenScreenMediaPicker componentPath] */

undefined ** FUN_1061a11ec(void)

{
  return &PTR____CFConstantStringClassReference_110e43f98;
}



/* Entry: 1061a11f8; end: 1061a1217; -[SCCCameraDirectorModeGreenScreenMediaPicker initWithViewModel:componentContext:runtime:] */

void FUN_1061a11f8(void)

{
  FUN_1061a14e4(PTR_PTR_1126f0048);
  return;
}



/* Entry: 1061a1218; end: 1061a124b; -[SCCCameraDirectorModeGreenScreenMediaPicker setViewModel:] */

void FUN_1061a1218(void)

{
  func_0x0001061a14f8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1514();
  func_0x0001061a1520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a124c; end: 1061a1283; -[SCCCameraDirectorModeGreenScreenMediaPicker viewModel] */

void FUN_1061a124c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a1284; end: 1061a128f; +[SCCCameraDirectorModeMusicButton componentPath] */

undefined ** FUN_1061a1284(void)

{
  return &PTR____CFConstantStringClassReference_110e43fb8;
}



/* Entry: 1061a1290; end: 1061a12af; -[SCCCameraDirectorModeMusicButton initWithViewModel:componentContext:runtime:] */

void FUN_1061a1290(void)

{
  FUN_1061a14e4(PTR_PTR_1126f0050);
  return;
}



/* Entry: 1061a12b0; end: 1061a12e3; -[SCCCameraDirectorModeMusicButton setViewModel:] */

void FUN_1061a12b0(void)

{
  func_0x0001061a14f8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1514();
  func_0x0001061a1520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a12e4; end: 1061a131b; -[SCCCameraDirectorModeMusicButton viewModel] */

void FUN_1061a12e4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a131c; end: 1061a1327; +[SCCCameraDirectorModePreviewButton componentPath] */

undefined ** FUN_1061a131c(void)

{
  return &PTR____CFConstantStringClassReference_110e43fd8;
}



/* Entry: 1061a1328; end: 1061a1347; -[SCCCameraDirectorModePreviewButton initWithViewModel:componentContext:runtime:] */

void FUN_1061a1328(void)

{
  FUN_1061a14e4(PTR_PTR_1126f0058);
  return;
}



/* Entry: 1061a1348; end: 1061a137b; -[SCCCameraDirectorModePreviewButton setViewModel:] */

void FUN_1061a1348(void)

{
  func_0x0001061a14f8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1514();
  func_0x0001061a1520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a137c; end: 1061a13b3; -[SCCCameraDirectorModePreviewButton viewModel] */

void FUN_1061a137c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a13b4; end: 1061a13bf; +[SCCCameraDirectorModeUndoButton componentPath] */

undefined ** FUN_1061a13b4(void)

{
  return &PTR____CFConstantStringClassReference_110e43ff8;
}



/* Entry: 1061a13c0; end: 1061a13df; -[SCCCameraDirectorModeUndoButton initWithViewModel:componentContext:runtime:] */

void FUN_1061a13c0(void)

{
  FUN_1061a14e4(PTR_PTR_1126f0060);
  return;
}



/* Entry: 1061a13e0; end: 1061a1413; -[SCCCameraDirectorModeUndoButton setViewModel:] */

void FUN_1061a13e0(void)

{
  func_0x0001061a14f8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1514();
  func_0x0001061a1520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a1414; end: 1061a144b; -[SCCCameraDirectorModeUndoButton viewModel] */

void FUN_1061a1414(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a144c; end: 1061a1457; +[SCCCameraDirectorModeVerticalToolbar componentPath] */

undefined ** FUN_1061a144c(void)

{
  return &PTR____CFConstantStringClassReference_110e44018;
}



/* Entry: 1061a1458; end: 1061a1477; -[SCCCameraDirectorModeVerticalToolbar initWithViewModel:componentContext:runtime:] */

void FUN_1061a1458(void)

{
  FUN_1061a14e4(PTR_PTR_1126f0068);
  return;
}



/* Entry: 1061a1478; end: 1061a14ab; -[SCCCameraDirectorModeVerticalToolbar setViewModel:] */

void FUN_1061a1478(void)

{
  func_0x0001061a14f8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1514();
  func_0x0001061a1520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1061a14ac; end: 1061a14e3; -[SCCCameraDirectorModeVerticalToolbar viewModel] */

void FUN_1061a14ac(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001061a1508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a14e4; end: 1061a156f;  */

void FUN_1061a14e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 1061a1570; end: 1061a157b; +[SCCCameraControlCenter componentPath] */

undefined ** FUN_1061a1570(void)

{
  return &PTR____CFConstantStringClassReference_110e44038;
}



/* Entry: 1061a157c; end: 1061a15af; -[SCCCameraControlCenter initWithViewModel:componentContext:runtime:] */

void FUN_1061a157c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0070;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1061a15b0; end: 1061a15ff; -[SCCCameraControlCenter setViewModel:] */

void FUN_1061a15b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a1600; end: 1061a1643; -[SCCCameraControlCenter viewModel] */

void FUN_1061a1600(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061a1644; end: 1061a164b; -[SCCameraDirectorModePreviewButtonState__Enum init] */

void FUN_1061a1644(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 1061a164c; end: 1061a166b; -[SCCCameraDirectorModeDraftsPickerContext init] */

void FUN_1061a164c(void)

{
  FUN_1061a1b70(PTR_PTR_1126f0078);
  return;
}



/* Entry: 1061a166c; end: 1061a167b; +[SCCCameraDirectorModeDraftsPickerContext valdiMarshallableObjectDescriptor] */

void FUN_1061a166c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd9ce8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a167c; end: 1061a169b; -[SCCCameraDirectorModeDraftsPickerViewModel init] */

void FUN_1061a167c(void)

{
  FUN_1061a1b70(PTR_PTR_1126f0080);
  return;
}



/* Entry: 1061a169c; end: 1061a16ab; +[SCCCameraDirectorModeDraftsPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a169c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_headerTitle_110912bb8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a16ac; end: 1061a16cb; -[SCCCameraDirectorModeErrorToastContext init] */

void FUN_1061a16ac(void)

{
  FUN_1061a1b70(PTR_PTR_1126f0088);
  return;
}



/* Entry: 1061a16cc; end: 1061a16df; +[SCCCameraDirectorModeErrorToastContext valdiMarshallableObjectDescriptor] */

void FUN_1061a16cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110912be8;
  param_1[1] = &PTR_s_SCBridgeObservable_110912c18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a16e0; end: 1061a16ff; -[SCCCameraDirectorModeErrorToastViewModel init] */

void FUN_1061a16e0(void)

{
  FUN_1061a1b70(PTR_PTR_1126f0090);
  return;
}



/* Entry: 1061a1700; end: 1061a170f; +[SCCCameraDirectorModeErrorToastViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a1700(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddd9d00;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a1710; end: 1061a174b; -[SCCCameraDirectorModeGreenScreenMediaPickerContext initWithCameraRollProvider:] */

void FUN_1061a1710(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0098;
  uStack_20 = param_1;
  func_0x0001061a1c08(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 1061a174c; end: 1061a176b; +[SCCCameraDirectorModeGreenScreenMediaPickerContext valdiMarshallableObjectDescriptor] */

void FUN_1061a174c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110912c70;
  param_1[1] = &PTR_DAT_110912cd0;
  param_1[2] = &PTR_DAT_110912c28;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a176c; end: 1061a178b;  */

undefined8 FUN_1061a176c(void)

{
  code *extraout_x8;
  
  func_0x0001061a1c2c();
  (*extraout_x8)();
  return 0;
}



/* Entry: 1061a178c; end: 1061a17db;  */

void FUN_1061a178c(void)

{
  func_0x0001061a1c10();
  func_0x0001061a1be0();
  func_0x0001061a1ba0(FUN_1061a1b00);
  func_0x0001061a1c24();
  func_0x0001061a1bc4();
  func_0x0001061a1c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a17dc; end: 1061a17ff;  */

undefined8 FUN_1061a17dc(void)

{
  code *extraout_x8;
  
  func_0x0001061a1c2c();
  (*extraout_x8)();
  return 0;
}



/* Entry: 1061a1800; end: 1061a184f;  */

void FUN_1061a1800(void)

{
  func_0x0001061a1c10();
  func_0x0001061a1be0();
  func_0x0001061a1ba0(0x1061a1b24);
  func_0x0001061a1c24();
  func_0x0001061a1bc4();
  func_0x0001061a1c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a1850; end: 1061a186f; -[SCCCameraDirectorModeGreenScreenMediaPickerViewModel init] */

void FUN_1061a1850(void)

{
  FUN_1061a1b70(PTR_PTR_1126f00a0);
  return;
}



/* Entry: 1061a1870; end: 1061a187f; +[SCCCameraDirectorModeGreenScreenMediaPickerViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a1870(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110912ce8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a1880; end: 1061a189f; -[SCCCameraDirectorModeMusicButtonContext init] */

void FUN_1061a1880(void)

{
  FUN_1061a1b70(PTR_PTR_1126f00a8);
  return;
}



/* Entry: 1061a18a0; end: 1061a18af; +[SCCCameraDirectorModeMusicButtonContext valdiMarshallableObjectDescriptor] */

void FUN_1061a18a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110912d18;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a18b0; end: 1061a18cf; -[SCCCameraDirectorModeMusicButtonViewModel init] */

void FUN_1061a18b0(void)

{
  FUN_1061a1b70(PTR_PTR_1126f00b0);
  return;
}



/* Entry: 1061a18d0; end: 1061a18e3; +[SCCCameraDirectorModeMusicButtonViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a18d0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110912d48;
  param_1[1] = &PTR_DAT_110912d78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a18e4; end: 1061a191b; -[SCCCameraDirectorModeMusicSelection initWithTrackTitle:] */

void FUN_1061a18e4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f00b8;
  uStack_20 = param_1;
  func_0x0001061a1c08(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 1061a191c; end: 1061a192f; +[SCCCameraDirectorModeMusicSelection valdiMarshallableObjectDescriptor] */

void FUN_1061a191c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110912d88;
  param_1[1] = &PTR_DAT_110912dd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a1930; end: 1061a194f; -[SCCCameraDirectorModePreviewButtonContext init] */

void FUN_1061a1930(void)

{
  FUN_1061a1b70(PTR_PTR_1126f00c0);
  return;
}



/* Entry: 1061a1950; end: 1061a1963; +[SCCCameraDirectorModePreviewButtonContext valdiMarshallableObjectDescriptor] */

void FUN_1061a1950(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_110912de0;
  param_1[1] = &PTR_DAT_110912e28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a1964; end: 1061a1983; -[SCCCameraDirectorModePreviewButtonViewModel init] */

void FUN_1061a1964(void)

{
  FUN_1061a1b70(PTR_PTR_1126f00c8);
  return;
}



/* Entry: 1061a1984; end: 1061a1993; +[SCCCameraDirectorModePreviewButtonViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061a1984(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110912e40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a1994; end: 1061a19b3; -[SCCCameraDirectorModeToolbarContext init] */

void FUN_1061a1994(void)

{
  FUN_1061a1b70(PTR_PTR_1126f00d0);
  return;
}



/* Entry: 1061a19b4; end: 1061a19d3; +[SCCCameraDirectorModeToolbarContext valdiMarshallableObjectDescriptor] */

void FUN_1061a19b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110912ea0;
  param_1[1] = &PTR_DAT_110912ed0;
  param_1[2] = &PTR_DAT_110912e70;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061a19d4; end: 1061a19fb;  */

undefined8 FUN_1061a19d4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return 0;
}



/* Entry: 1061a19fc; end: 1061a1a4b;  */

void FUN_1061a19fc(void)

{
  func_0x0001061a1c10();
  func_0x0001061a1be0();
  func_0x0001061a1ba0(0x1061a1b48);
  func_0x0001061a1c24();
  func_0x0001061a1bc4();
  func_0x0001061a1c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a1a4c; end: 1061a1a6b; -[SCCCameraDirectorModeUndoButtonContext init] */

void FUN_1061a1a4c(void)

{
  FUN_1061a1b70(PTR_PTR_1126f00d8);
  return;
}


