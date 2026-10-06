/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f44064; end: 105f44087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f44064(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11273acec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f44088; end: 105f441e3; -[SCMapViewportItemsRegistryServicesEntryPoint _getMapViewportItemsForVisibleCoordinateBounds:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f44088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_7);
  _objc_initWeak(auStack_78,param_5);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105f441e4;
  puStack_a8 = &UNK_1108fa838;
  uStack_98 = param_1;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  _objc_copyWeak(auStack_a0,auStack_78);
  ppuVar1 = &puStack_c0;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_5 + _DAT_11273acb0);
  _objc_retain(param_7);
  func_0x00010bfc4760(uVar2);
  _objc_release(param_7);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  return;
}



/* Entry: 105f441e4; end: 105f4429f;  */

void FUN_105f441e4(long param_1,long param_2)

{
  ushort uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    dVar2 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x38));
    if ((2.220446049250313e-16 < dVar2) ||
       (dVar2 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x40)),
       2.220446049250313e-16 < dVar2)) {
      dVar3 = 2.220446049250313e-16;
      func_0x00010bf51c80(param_2);
      uVar1 = NEON_uminv(CONCAT44(CONCAT22(-(ushort)(dVar3 <= *(double *)(param_1 + 0x40)),
                                           -(ushort)(dVar2 <= *(double *)(param_1 + 0x38))),
                                  CONCAT22(-(ushort)(*(double *)(param_1 + 0x30) <= dVar3),
                                           -(ushort)(*(double *)(param_1 + 0x28) <= dVar2))),2);
      if ((uVar1 & 1) == 0) goto LAB_105f44290;
    }
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be2c000();
    _objc_release(param_1);
  }
LAB_105f44290:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f442a0; end: 105f442b3;  */

void FUN_105f442a0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105f442ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105f442b4; end: 105f4440b; -[SCMapViewportItemsRegistryServicesEntryPoint _handleMapViewportItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f442b4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar6 = (long)_DAT_11273aca8;
    _os_unfair_lock_lock(param_1 + lVar6);
    lVar5 = (long)_DAT_11273accc;
    if (*(long *)(param_1 + lVar5) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar1;
      _objc_release(uVar4);
    }
    lVar7 = (long)_DAT_11273ace0;
    if (*(long *)(param_1 + lVar7) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      *(undefined **)(param_1 + lVar7) = puVar1;
      _objc_release(uVar4);
    }
    func_0x00010befa140(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
    lVar5 = param_3;
    func_0x00010c27df80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010bf4bb00(lVar2,param_2,&PTR____CFConstantStringClassReference_110e31f18);
    lVar3 = param_3;
    func_0x00010c27dd80();
    if (((uint)(lVar3 == 4) & (uint)lVar5) == 1) {
      func_0x00010befa140(*(undefined8 *)(param_1 + lVar7),param_2,param_3);
    }
    _objc_release(lVar2);
    _os_unfair_lock_unlock(param_1 + lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f4440c; end: 105f447fb; -[SCMapViewportItemsRegistryServicesEntryPoint _updateMapViewportViewEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f4440c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11273aca8;
  _os_unfair_lock_lock(param_1 + lVar11);
  lVar13 = param_1 + _DAT_11273acb4;
  _objc_loadWeakRetained(lVar13);
  lVar1 = lVar13;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar1);
  _objc_release(lVar13);
  func_0x00010c29fd40(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 0;
  lVar14 = *(long *)(param_1 + _DAT_11273accc);
  _objc_retain(lVar14);
  lVar13 = lVar14;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar13 == 0) {
      _objc_release(lVar14);
      lVar13 = (long)_DAT_11273acd0;
      uVar15 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010bf529e0(puVar4);
      func_0x00010c218660(uVar15);
      uVar15 = *(undefined8 *)(param_1 + lVar13);
      puVar8 = puVar3;
      func_0x00010bf446e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e9a0(uVar15);
      _objc_release(puVar8);
      puVar8 = puVar4;
      func_0x00010bf529e0();
      uVar15 = *(undefined8 *)(param_1 + lVar13);
      if (puVar8 < (undefined *)0xc9) {
        puVar8 = puVar4;
        func_0x00010c223440(uVar15);
      }
      else {
        puVar9 = puVar4;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010c223440(uVar15);
        _objc_release(puVar9);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
      lVar13 = param_1 + lVar11;
      _os_unfair_lock_unlock();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return;
      }
      ___stack_chk_fail();
      _os_unfair_lock_unlock(param_1 + lVar11);
      __Unwind_Resume(lVar13);
      puVar3 = PTR_PTR_1126c6360;
      _objc_retain(puVar8);
      _objc_alloc_init(puVar3);
      puVar4 = puVar8;
      func_0x00010bfe5ec0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      func_0x00010c1dc3a0(puVar3);
      _objc_release(puVar4);
      func_0x00010c1c2900(puVar3);
      func_0x00010c1c25a0(puVar3);
      func_0x00010c222d20(uVar17,puVar3);
      FUN_105f422a4(lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar13;
      func_0x00010c0ba460();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar14;
      func_0x00010c0baae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar1);
      _objc_release(lVar13);
      func_0x00010c2bf200(lVar2);
      func_0x00010c227aa0(puVar3);
      func_0x00010c168480(puVar3);
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar14);
      }
      lVar16 = *(long *)(lVar12 * 8);
      func_0x00010bf51c80(lVar16);
      lVar5 = lVar2;
      func_0x00010c151120(lVar2);
      lVar6 = lVar16;
      func_0x00010c27dd80();
      lVar7 = lVar16;
      if (lVar6 == 2) {
        FUN_105f41564(lVar16,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe5ec0(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        lVar5 = lVar16;
LAB_105f4462c:
        lVar16 = lVar7;
        _objc_release(lVar5);
      }
      else {
        lVar6 = lVar16;
        func_0x00010c27dd80();
        if (lVar6 == 1) {
          FUN_105f41564(lVar16,lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe5ec0(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          lVar5 = lVar16;
          goto LAB_105f4462c;
        }
        FUN_105f41564(lVar16,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
      }
      func_0x00010befa120(puVar4);
      _objc_release(lVar16);
      lVar12 = lVar12 + 1;
    } while (lVar13 != lVar12);
    lVar13 = lVar14;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105f447fc; end: 105f44937; -[SCMapViewportItemsRegistryServicesEntryPoint _constructMapsViewportPlacesAdsImpressionForMapViewportItem:mapSessionId:mapViewportSessionId:viewTimeSec:] */

void FUN_105f447fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c6360;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  uVar2 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1dc3a0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c1c2900(puVar1,param_3,param_6);
  func_0x00010c1c25a0(puVar1,param_3,param_5);
  func_0x00010c222d20(param_1,puVar1);
  FUN_105f422a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  func_0x00010c2bf200(uVar4);
  func_0x00010c227aa0(puVar1);
  func_0x00010c168480(puVar1,param_3,&PTR____CFConstantStringClassReference_110e32878);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f44938; end: 105f44987; -[SCMapViewportItemsRegistryServicesEntryPoint _createNumberFormatter] */

void FUN_105f44938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_alloc_init(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
  func_0x00010c1d02e0();
  func_0x00010c1c3b00(puVar1,param_2,3);
  func_0x00010c1eea20(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f44988; end: 105f44a33; -[SCMapViewportItemsRegistryServicesEntryPoint _getScreenLocationForViewportItemLocation:] */

undefined8 FUN_105f44988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_105f422a4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010c151100(param_1,param_2,uVar3);
  FUN_105f41540();
  _objc_release(uVar3);
  return uVar1;
}



/* Entry: 105f44a34; end: 105f44bb7; -[SCMapViewportItemsRegistryServicesEntryPoint _visibleCoordinateBounds] */

double FUN_105f44a34(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_5;
  FUN_105f44064();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d26a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a0140();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  FUN_105f422a4(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  func_0x00010c29fd40(uVar3);
  func_0x00010c2bf200(uVar3);
  func_0x000108d31d88();
  if ((param_3 < param_1) || (param_4 < param_2)) {
    param_1 = 0.0;
  }
  _objc_release(uVar3);
  return param_1;
}



/* Entry: 105f44bb8; end: 105f44d2b; -[SCMapViewportItemsRegistryServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f44bb8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ad0c,0);
  _objc_destroyWeak(param_1 + _DAT_11273acb8);
  _objc_destroyWeak(param_1 + _DAT_11273ad08);
  _objc_destroyWeak(param_1 + _DAT_11273ad04);
  _objc_destroyWeak(param_1 + _DAT_11273ad00);
  _objc_destroyWeak(param_1 + _DAT_11273acfc);
  _objc_destroyWeak(param_1 + _DAT_11273acf8);
  _objc_destroyWeak(param_1 + _DAT_11273acf4);
  _objc_destroyWeak(param_1 + _DAT_11273acf0);
  _objc_destroyWeak(param_1 + _DAT_11273acec);
  _objc_destroyWeak(param_1 + _DAT_11273acb4);
  _objc_destroyWeak(param_1 + _DAT_11273ace8);
  _objc_storeStrong(param_1 + _DAT_11273ac98,0);
  _objc_storeStrong(param_1 + _DAT_11273aca4,0);
  _objc_storeStrong(param_1 + _DAT_11273ac9c,0);
  _objc_storeStrong(param_1 + _DAT_11273acb0,0);
  _objc_storeStrong(param_1 + _DAT_11273ace0,0);
  _objc_storeStrong(param_1 + _DAT_11273accc,0);
  _objc_storeStrong(param_1 + _DAT_11273acd4,0);
  _objc_storeStrong(param_1 + _DAT_11273acd0,0);
  _objc_storeStrong(param_1 + _DAT_11273aca0,0);
  _objc_storeStrong(param_1 + _DAT_11273acc0,0);
  _objc_storeStrong(param_1 + _DAT_11273acbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273acac,0);
  return;
}



/* Entry: 105f44d2c; end: 105f457b7; -[SCNSnapMapsSdkFeatureDescriptor encodeToViewportItemWithContext:] */

undefined1 *
FUN_105f44d2c(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined *param_10)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  float fVar22;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_170;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar4 = param_5;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c6368;
  func_0x00010c06d420();
  puVar7 = PTR_PTR_1126c6368;
  if (((int)puVar5 != 0) ||
     (puVar5 = PTR_PTR_1126c6320, func_0x00010c074e00(), puVar7 = PTR_PTR_1126c6320,
     (int)puVar5 != 0)) {
    uStack_170 = param_7;
    func_0x00010c27cc80();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_105f456e4;
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = 0;
  puVar7 = puVar4;
  func_0x00010c118b60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  fVar22 = (float)uVar17;
  while (puVar5 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar7);
      }
      uVar19 = *(undefined8 *)((long)puVar21 * 8);
      uVar18 = uVar19;
      func_0x00010c27e100(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar18;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c086560(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar6);
      _objc_release(uVar19);
      _objc_release(uVar8);
      _objc_release(uVar18);
      puVar21 = puVar21 + 1;
    } while (puVar5 != puVar21);
    puVar5 = puVar7;
    func_0x00010bf52a60();
    fVar22 = (float)uVar17;
  }
  _objc_release(puVar7);
  puVar5 = puVar6;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c0720c0();
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = param_5;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar7;
    func_0x00010bf4b900();
    _objc_release(puVar7);
    if (((ulong)puVar21 & 1) != 0) goto LAB_105f44f54;
    puVar7 = puVar5;
    func_0x00010c0720c0();
    if (((ulong)puVar7 & 1) != 0) {
      bVar1 = true;
      bVar2 = false;
      uStack_170 = 4;
      goto LAB_105f44f60;
    }
    puVar7 = param_5;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar7;
    func_0x00010bf4b900();
    _objc_release(puVar7);
    puVar21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    if (((ulong)puVar20 & 1) != 0) {
      bVar1 = true;
      bVar2 = false;
      uStack_170 = 4;
      goto LAB_105f44f74;
    }
    uStack_170 = 0;
    puVar20 = (undefined *)0x0;
  }
  else {
LAB_105f44f54:
    bVar1 = false;
    bVar2 = true;
    uStack_170 = 6;
LAB_105f44f60:
    puVar21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
LAB_105f44f74:
    puVar7 = puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar7;
    func_0x00010c08fa60();
    if (puVar20 != (undefined *)0x0) {
      func_0x00010c1d0560(puVar21);
    }
    puVar20 = puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar20;
    func_0x00010c08fa60();
    if (puVar9 != (undefined *)0x0) {
      puVar9 = puVar20;
      func_0x00010c0720c0();
      if (((ulong)puVar9 & 1) == 0) {
        func_0x00010c0720c0(puVar20);
      }
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar21);
      _objc_release(puVar9);
    }
    puVar9 = puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c08fa60();
    if (puVar10 == (undefined *)0x0) {
      func_0x00010c1d0560(puVar6);
    }
    func_0x00010c1d0560(puVar21);
    puVar10 = puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010c0720c0();
    if (((((ulong)puVar12 & 1) == 0) &&
        (puVar12 = puVar10, func_0x00010c0720c0(), ((ulong)puVar12 & 1) == 0)) &&
       (puVar12 = puVar11, func_0x00010c0720c0(), ((ulong)puVar12 & 1) == 0)) {
      func_0x00010c0720c0(puVar11);
    }
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar21);
    _objc_release(puVar12);
    puVar12 = puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c08fa60();
    if (puVar13 != (undefined *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar21);
      _objc_release(puVar13);
    }
    puVar13 = puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c08fa60();
    if (puVar14 != (undefined *)0x0) {
      func_0x00010c1d0560(puVar21);
    }
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar20);
    _objc_release(puVar7);
    if (bVar1) {
      puVar7 = puVar6;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar7;
      func_0x00010c08fa60();
      if (puVar20 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        puVar20 = puVar4;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar7);
    }
    else {
      puVar20 = (undefined *)0x0;
    }
    if (bVar2) {
      puVar7 = puVar6;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c08fa60();
      if (puVar9 != (undefined *)0x0) {
        _objc_retain(puVar7);
        _objc_release(puVar20);
        func_0x00010c1d0560(puVar21);
        puVar20 = puVar7;
      }
      puVar9 = puVar6;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c08fa60();
      if (puVar10 != (undefined *)0x0) {
        func_0x00010c1d0560(puVar21);
      }
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
  }
  puVar7 = param_5;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf4b900();
  _objc_release(puVar7);
  if ((int)puVar9 != 0) {
    puVar7 = puVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c08fa60();
    if (puVar9 != (undefined *)0x0) {
      _objc_retain(puVar7);
      _objc_release(puVar20);
      puVar20 = puVar7;
    }
    _objc_release(puVar7);
  }
  func_0x00010c08aca0(param_5);
  param_1 = (double)fVar22;
  func_0x00010c0b4a40(param_5);
  param_2 = (double)fVar22;
  _CLLocationCoordinate2DMake();
  uVar17 = param_7;
  param_3 = param_1;
  func_0x00010c0dff20(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_7;
  func_0x00010c0dff20(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_5;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf529e0();
  _objc_release(puVar7);
  if (puVar9 != (undefined *)0x0) {
    puVar7 = param_5;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar21);
    _objc_release(puVar7);
    puVar7 = param_5;
    func_0x00010bfcf800(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    FUN_105f3fdf4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar7);
    func_0x00010c1d0560(puVar21);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  puVar7 = param_5;
  func_0x00010bf44620();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf529e0();
  _objc_release(puVar7);
  if (puVar9 != (undefined *)0x0) {
    func_0x00010bf44620(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_5;
    FUN_105f3fdf4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c1d0560(puVar21);
    _objc_release(puVar7);
  }
  puVar9 = puVar6;
  FUN_105f3f76c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar9;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c1d0560(puVar21);
  }
  puVar7 = PTR_PTR_1126c6318;
  _objc_alloc();
  puVar10 = puVar21;
  func_0x00010bf51e00();
  func_0x00010bf885a0(uVar17);
  param_4 = param_3;
  func_0x00010bf885a0(uVar18);
  param_9 = 0;
  param_5 = puVar20;
  param_10 = puVar10;
  func_0x00010c01b5c0();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar5);
  _objc_release(puVar6);
LAB_105f456e4:
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  puVar15 = &uStack_210;
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_208 = PTR_PTR_1126ee1d0;
  uStack_210 = param_7;
  _objc_msgSendSuper2(&uStack_210,PTR_s_init_1125d9248);
  if (puVar15 != (undefined8 *)0x0) {
    puVar4 = param_5;
    func_0x00010bf51e00();
    uVar17 = *(undefined8 *)((long)puVar15 + 8);
    *(undefined **)((long)puVar15 + 8) = puVar4;
    _objc_release(uVar17);
    *(double *)((long)puVar15 + 0x38) = param_1;
    *(double *)((long)puVar15 + 0x40) = param_2;
    *(undefined8 *)((long)puVar15 + 0x10) = uStack_170;
    uVar17 = param_9;
    func_0x00010bf51e00();
    uVar18 = *(undefined8 *)((long)puVar15 + 0x18);
    *(undefined8 *)((long)puVar15 + 0x18) = uVar17;
    _objc_release(uVar18);
    puVar4 = param_10;
    func_0x00010bf51e00();
    uVar17 = *(undefined8 *)((long)puVar15 + 0x20);
    *(undefined **)((long)puVar15 + 0x20) = puVar4;
    _objc_release(uVar17);
    *(double *)((long)puVar15 + 0x28) = param_3;
    *(double *)((long)puVar15 + 0x30) = param_4;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  return (undefined1 *)puVar15;
}



/* Entry: 105f457b8; end: 105f458c7; -[SCMapViewportItem initWithIdentifier:coordinate:type:labels:typeSpecificProperties:screenLocationX:screenLocationY:] */

undefined1 *
FUN_105f457b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ee1d0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 105f458c8; end: 105f458eb; -[SCMapViewportItem copyWithZone:] */

undefined8 FUN_105f458c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f458ec; end: 105f459f7; -[SCMapViewportItem hash] */

undefined8 * FUN_105f458ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_58 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_68;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105f45b38:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105f45b44;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[2] == param_3[2] &&
         (ABS((double)puVar3[7] - (double)param_3[7]) <= 2.220446049250313e-16)) &&
        (ABS((double)puVar3[8] - (double)param_3[8]) <= 2.220446049250313e-16)))) {
      dVar9 = ABS((double)puVar3[5] - (double)param_3[5]);
      dVar8 = ABS((double)puVar3[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if (bVar1) {
        dVar9 = ABS((double)puVar3[6] - (double)param_3[6]);
        dVar8 = ABS((double)puVar3[6] + (double)param_3[6]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
          bVar1 = dVar9 < dVar8;
        }
        if (((bVar1) &&
            ((lVar5 = puVar3[1], lVar5 == param_3[1] || (func_0x00010c071ae0(), (int)lVar5 != 0))))
           && ((lVar5 = puVar3[3], lVar5 == param_3[3] || (func_0x00010c071ae0(), (int)lVar5 != 0)))
           ) {
          puVar7 = (undefined8 *)puVar3[4];
          if (puVar7 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_105f45b44;
          }
          goto LAB_105f45b38;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_105f45b44:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 105f459f8; end: 105f45b5f; -[SCMapViewportItem isEqual:] */

long FUN_105f459f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105f45b38:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105f45b44;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38)) <= 2.220446049250313e-16))
        && (ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40)) <= 2.220446049250313e-16)
        ))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
        dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + 0x20);
          if (lVar4 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105f45b44;
          }
          goto LAB_105f45b38;
        }
      }
    }
    lVar4 = 0;
  }
LAB_105f45b44:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105f45b60; end: 105f45b67; -[SCMapViewportItem identifier] */

undefined8 FUN_105f45b60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f45b68; end: 105f45b6f; -[SCMapViewportItem coordinate] */

undefined1  [16] FUN_105f45b68(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 105f45b70; end: 105f45b77; -[SCMapViewportItem type] */

undefined8 FUN_105f45b70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f45b78; end: 105f45b7f; -[SCMapViewportItem labels] */

undefined8 FUN_105f45b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f45b80; end: 105f45b87; -[SCMapViewportItem typeSpecificProperties] */

undefined8 FUN_105f45b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f45b88; end: 105f45b8f; -[SCMapViewportItem screenLocationX] */

undefined8 FUN_105f45b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f45b90; end: 105f45b97; -[SCMapViewportItem screenLocationY] */

undefined8 FUN_105f45b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f45b98; end: 105f45bd3; -[SCMapViewportItem .cxx_destruct] */

void FUN_105f45b98(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f45bd4; end: 105f45bef; +[SCMapViewportItemBuilder mapViewportItem] */

void FUN_105f45bd4(void)

{
  _objc_alloc_init(PTR_PTR_1126c6370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f45bf0; end: 105f45dbf; +[SCMapViewportItemBuilder mapViewportItemFromExistingMapViewportItem:] */

void FUN_105f45bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126c6370;
  _objc_retain(param_4);
  func_0x00010c0bab80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2af9a0(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(param_4);
  puVar4 = puVar3;
  func_0x00010c2ab1e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c27dd80(param_4);
  puVar6 = puVar4;
  func_0x00010c2bbd20(puVar4,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c087920(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b2040(puVar6,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c27df80(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2bbd40(puVar7,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151140(param_4);
  puVar10 = puVar9;
  func_0x00010c2b7ac0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151160(param_4);
  _objc_release(param_4);
  puVar11 = puVar10;
  func_0x00010c2b7ae0(param_1,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105f45dc0; end: 105f45dff; -[SCMapViewportItemBuilder build] */

void FUN_105f45dc0(long param_1)

{
  _objc_alloc(PTR_PTR_1126c6318);
  func_0x00010c01b5c0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f45e00; end: 105f45e37; -[SCMapViewportItemBuilder withIdentifier:] */

long FUN_105f45e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105f45e38; end: 105f45e3f; -[SCMapViewportItemBuilder withCoordinate:] */

void FUN_105f45e38(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  return;
}



/* Entry: 105f45e40; end: 105f45e47; -[SCMapViewportItemBuilder withType:] */

void FUN_105f45e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 105f45e48; end: 105f45e7f; -[SCMapViewportItemBuilder withLabels:] */

long FUN_105f45e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105f45e80; end: 105f45eb7; -[SCMapViewportItemBuilder withTypeSpecificProperties:] */

long FUN_105f45e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105f45eb8; end: 105f45ebf; -[SCMapViewportItemBuilder withScreenLocationX:] */

void FUN_105f45eb8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 105f45ec0; end: 105f45ec7; -[SCMapViewportItemBuilder withScreenLocationY:] */

void FUN_105f45ec0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 105f45ec8; end: 105f45f03; -[SCMapViewportItemBuilder .cxx_destruct] */

void FUN_105f45ec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f45f04; end: 105f45f77; -[SCGrapheneMapViewportImpressionsMetric2 init] */

undefined1 * FUN_105f45f04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee1d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f45f78; end: 105f460eb;  */

undefined *
FUN_105f45f78(long param_1,undefined *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f350219;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108fa868,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  uVar1 = uStack_80;
  ppuVar3 = &puStack_e0;
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(uVar1);
  puStack_d8 = PTR_PTR_1126ee1e0;
  puStack_e0 = puVar2;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined1 **)((long)ppuVar3 + 0x18) = puVar5;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)ppuVar3 + 0x10),param_4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x20);
    *(undefined8 *)((long)ppuVar3 + 0x20) = param_5;
    _objc_release(uVar4);
    *(undefined8 *)((long)ppuVar3 + 0x28) = param_6;
    *(undefined1 *)((long)ppuVar3 + 8) = param_7;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x30);
    *(undefined8 *)((long)ppuVar3 + 0x30) = param_8;
    _objc_release(uVar4);
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x38);
    *(undefined8 *)((long)ppuVar3 + 0x38) = uVar1;
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  return (undefined *)ppuVar3;
}



/* Entry: 105f460ec; end: 105f4621f; -[SCMapPlaceProfileV2Scope initWithDataObservable:delegate:uiContainer:layerSource:shouldDismissOnTrayHidden:trayPositionObservable:selectedPinTapObservable:] */

undefined1 *
FUN_105f460ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
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
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ee1e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f46220; end: 105f46237; -[SCMapPlaceProfileV2Scope delegate] */

void FUN_105f46220(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f46238; end: 105f4623f; -[SCMapPlaceProfileV2Scope trayDataObservable] */

undefined8 FUN_105f46238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f46240; end: 105f46247; -[SCMapPlaceProfileV2Scope uiContainer] */

undefined8 FUN_105f46240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f46248; end: 105f4624f; -[SCMapPlaceProfileV2Scope shouldDismissOnTrayHidden] */

undefined1 FUN_105f46248(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f46250; end: 105f46257; -[SCMapPlaceProfileV2Scope layerSource] */

undefined8 FUN_105f46250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f46258; end: 105f4625f; -[SCMapPlaceProfileV2Scope trayPositionObservable] */

undefined8 FUN_105f46258(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f46260; end: 105f46267; -[SCMapPlaceProfileV2Scope selectedPinTapObservable] */

undefined8 FUN_105f46260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f46268; end: 105f462b7; -[SCMapPlaceProfileV2Scope .cxx_destruct] */

void FUN_105f46268(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 105f462b8; end: 105f46443; -[SCMapPlaceTrayConfiguration initWithOpenSource:sourceType:showSeeOnSnapMapSection:layerSource:mapSessionId:viewportSessionId:networkViewportSessionId:mapViewportSessionId:sourceSessionId:mapZoomLevel:placeId:hasMediaPin:] */

undefined8 *
FUN_105f462b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126ee1e8;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    puVar1[5] = param_8;
    puVar1[6] = param_9;
    puVar1[7] = param_10;
    puVar1[8] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_1;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_14;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105f46444; end: 105f46467; -[SCMapPlaceTrayConfiguration copyWithZone:] */

undefined8 FUN_105f46444(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f46468; end: 105f4653b; -[SCMapPlaceTrayConfiguration hash] */

undefined8 * FUN_105f46468(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_88;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105f4669c:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105f466a8;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[5] == param_3[5])) &&
          (puVar3[6] == param_3[6])) && ((puVar3[7] == param_3[7] && (puVar3[8] == param_3[8]))))))
       && (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) {
      dVar8 = ABS((double)puVar3[10] - (double)param_3[10]);
      if (((((dVar8 < 2.2250738585072014e-308) ||
            (dVar8 < ABS((double)puVar3[10] + (double)param_3[10]) * 2.220446049250313e-16)) &&
           ((lVar5 = puVar3[2], lVar5 == param_3[2] || (func_0x00010c071ae0(), (int)lVar5 != 0))))
          && (((lVar5 = puVar3[3], lVar5 == param_3[3] || (func_0x00010c071ae0(), (int)lVar5 != 0))
              && ((lVar5 = puVar3[4], lVar5 == param_3[4] ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
         ((lVar5 = puVar3[9], lVar5 == param_3[9] || (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        puVar7 = (undefined8 *)puVar3[0xb];
        if (puVar7 != (undefined8 *)param_3[0xb]) {
          func_0x00010c071ae0();
          goto LAB_105f466a8;
        }
        goto LAB_105f4669c;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_105f466a8:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 105f4653c; end: 105f466c3; -[SCMapPlaceTrayConfiguration isEqual:] */

long FUN_105f4653c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105f4669c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105f466a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
          (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
         ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
          (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))))) &&
       (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) {
      dVar4 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
      if (((((dVar4 < 2.2250738585072014e-308) ||
            (dVar4 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) *
                     2.220446049250313e-16)) &&
           ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          (((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
           ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
         ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x58);
        if (lVar3 != *(long *)(param_3 + 0x58)) {
          func_0x00010c071ae0();
          goto LAB_105f466a8;
        }
        goto LAB_105f4669c;
      }
    }
    lVar3 = 0;
  }
LAB_105f466a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105f466c4; end: 105f466cb; -[SCMapPlaceTrayConfiguration openSource] */

undefined8 FUN_105f466c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f466cc; end: 105f466d3; -[SCMapPlaceTrayConfiguration sourceType] */

undefined8 FUN_105f466cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f466d4; end: 105f466db; -[SCMapPlaceTrayConfiguration showSeeOnSnapMapSection] */

undefined1 FUN_105f466d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f466dc; end: 105f466e3; -[SCMapPlaceTrayConfiguration layerSource] */

undefined8 FUN_105f466dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f466e4; end: 105f466eb; -[SCMapPlaceTrayConfiguration mapSessionId] */

undefined8 FUN_105f466e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f466ec; end: 105f466f3; -[SCMapPlaceTrayConfiguration viewportSessionId] */

undefined8 FUN_105f466ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f466f4; end: 105f466fb; -[SCMapPlaceTrayConfiguration networkViewportSessionId] */

undefined8 FUN_105f466f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f466fc; end: 105f46703; -[SCMapPlaceTrayConfiguration mapViewportSessionId] */

undefined8 FUN_105f466fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105f46704; end: 105f4670b; -[SCMapPlaceTrayConfiguration sourceSessionId] */

undefined8 FUN_105f46704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105f4670c; end: 105f46713; -[SCMapPlaceTrayConfiguration mapZoomLevel] */

undefined8 FUN_105f4670c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f46714; end: 105f4671b; -[SCMapPlaceTrayConfiguration placeId] */

undefined8 FUN_105f46714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105f4671c; end: 105f46723; -[SCMapPlaceTrayConfiguration hasMediaPin] */

undefined1 FUN_105f4671c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105f46724; end: 105f46777; -[SCMapPlaceTrayConfiguration .cxx_destruct] */

void FUN_105f46724(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105f46778; end: 105f469d7; -[SCMapPlaceTrayData initWithIdentifier:coordinate:bounds:openSource:sourceSessionId:sourceType:annotations:viewportSessionData:hasMediaPin:basemapPlace:customServerRankingId:shouldDisplayPlacePin:isPromoted:placeLinkButtonData:] */

undefined8 *
FUN_105f46778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined4 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_18);
  puStack_78 = PTR_PTR_1126ee1f0;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[0xc] = param_1;
    puVar1[0xd] = param_2;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_12;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_16;
    *(undefined1 *)((long)puVar1 + 10) = param_16._1_1_;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105f469d8; end: 105f469fb; -[SCMapPlaceTrayData copyWithZone:] */

undefined8 FUN_105f469d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f469fc; end: 105f46b23; -[SCMapPlaceTrayData hash] */

undefined8 * FUN_105f469fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_98 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_90 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (undefined8 *)param_3) {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105f46cd4;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar4 & 1) == 0) ||
         ((((*(char *)((long)puVar3 + 8) != param_3[8] ||
            (*(char *)((long)puVar3 + 9) != param_3[9])) ||
           (*(char *)((long)puVar3 + 10) != param_3[10])) ||
          ((2.220446049250313e-16 <
            ABS(*(double *)((long)puVar3 + 0x60) - *(double *)(param_3 + 0x60)) ||
           (2.220446049250313e-16 <
            ABS(*(double *)((long)puVar3 + 0x68) - *(double *)(param_3 + 0x68)))))))) ||
        (((lVar5 = *(long *)((long)puVar3 + 0x10), lVar5 != *(long *)(param_3 + 0x10) &&
          (func_0x00010c071ae0(), (int)lVar5 == 0)) ||
         ((((lVar5 = *(long *)((long)puVar3 + 0x18), lVar5 != *(long *)(param_3 + 0x18) &&
            (func_0x00010c071ae0(), (int)lVar5 == 0)) ||
           ((lVar5 = *(long *)((long)puVar3 + 0x20), lVar5 != *(long *)(param_3 + 0x20) &&
            (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
          ((lVar5 = *(long *)((long)puVar3 + 0x28), lVar5 != *(long *)(param_3 + 0x28) &&
           (func_0x00010c071ae0(), (int)lVar5 == 0)))))))) ||
       (((lVar5 = *(long *)((long)puVar3 + 0x30), lVar5 != *(long *)(param_3 + 0x30) &&
         (func_0x00010c071ae0(), (int)lVar5 == 0)) ||
        ((((lVar5 = *(long *)((long)puVar3 + 0x38), lVar5 != *(long *)(param_3 + 0x38) &&
           (func_0x00010c071ae0(), (int)lVar5 == 0)) ||
          ((lVar5 = *(long *)((long)puVar3 + 0x40), lVar5 != *(long *)(param_3 + 0x40) &&
           (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
         (((lVar5 = *(long *)((long)puVar3 + 0x48), lVar5 != *(long *)(param_3 + 0x48) &&
           (func_0x00010c071ae0(), (int)lVar5 == 0)) ||
          ((lVar5 = *(long *)((long)puVar3 + 0x50), lVar5 != *(long *)(param_3 + 0x50) &&
           (func_0x00010c071ae0(), (int)lVar5 == 0)))))))))) {
      puVar7 = (undefined1 *)0x0;
      goto LAB_105f46cd4;
    }
    puVar7 = *(undefined1 **)((long)puVar3 + 0x58);
    if (puVar7 != *(undefined1 **)(param_3 + 0x58)) {
      func_0x00010c071ae0();
      goto LAB_105f46cd4;
    }
  }
  puVar7 = (undefined1 *)0x1;
LAB_105f46cd4:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 105f46b24; end: 105f46cef; -[SCMapPlaceTrayData isEqual:] */

long FUN_105f46b24(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105f46cd4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) == 0) ||
         ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))) ||
          ((2.220446049250313e-16 < ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60))
           || (2.220446049250313e-16 <
               ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68)))))))) ||
        (((lVar3 = *(long *)(param_1 + 0x10), lVar3 != *(long *)(param_3 + 0x10) &&
          (func_0x00010c071ae0(), (int)lVar3 == 0)) ||
         ((((lVar3 = *(long *)(param_1 + 0x18), lVar3 != *(long *)(param_3 + 0x18) &&
            (func_0x00010c071ae0(), (int)lVar3 == 0)) ||
           ((lVar3 = *(long *)(param_1 + 0x20), lVar3 != *(long *)(param_3 + 0x20) &&
            (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
          ((lVar3 = *(long *)(param_1 + 0x28), lVar3 != *(long *)(param_3 + 0x28) &&
           (func_0x00010c071ae0(), (int)lVar3 == 0)))))))) ||
       (((lVar3 = *(long *)(param_1 + 0x30), lVar3 != *(long *)(param_3 + 0x30) &&
         (func_0x00010c071ae0(), (int)lVar3 == 0)) ||
        ((((lVar3 = *(long *)(param_1 + 0x38), lVar3 != *(long *)(param_3 + 0x38) &&
           (func_0x00010c071ae0(), (int)lVar3 == 0)) ||
          ((lVar3 = *(long *)(param_1 + 0x40), lVar3 != *(long *)(param_3 + 0x40) &&
           (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
         (((lVar3 = *(long *)(param_1 + 0x48), lVar3 != *(long *)(param_3 + 0x48) &&
           (func_0x00010c071ae0(), (int)lVar3 == 0)) ||
          ((lVar3 = *(long *)(param_1 + 0x50), lVar3 != *(long *)(param_3 + 0x50) &&
           (func_0x00010c071ae0(), (int)lVar3 == 0)))))))))) {
      lVar3 = 0;
      goto LAB_105f46cd4;
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != *(long *)(param_3 + 0x58)) {
      func_0x00010c071ae0();
      goto LAB_105f46cd4;
    }
  }
  lVar3 = 1;
LAB_105f46cd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105f46cf0; end: 105f46cf7; -[SCMapPlaceTrayData identifier] */

undefined8 FUN_105f46cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f46cf8; end: 105f46cff; -[SCMapPlaceTrayData coordinate] */

undefined1  [16] FUN_105f46cf8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x60);
}



/* Entry: 105f46d00; end: 105f46d07; -[SCMapPlaceTrayData bounds] */

undefined8 FUN_105f46d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f46d08; end: 105f46d0f; -[SCMapPlaceTrayData openSource] */

undefined8 FUN_105f46d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f46d10; end: 105f46d17; -[SCMapPlaceTrayData sourceSessionId] */

undefined8 FUN_105f46d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f46d18; end: 105f46d1f; -[SCMapPlaceTrayData sourceType] */

undefined8 FUN_105f46d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f46d20; end: 105f46d27; -[SCMapPlaceTrayData annotations] */

undefined8 FUN_105f46d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f46d28; end: 105f46d2f; -[SCMapPlaceTrayData viewportSessionData] */

undefined8 FUN_105f46d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105f46d30; end: 105f46d37; -[SCMapPlaceTrayData hasMediaPin] */

undefined1 FUN_105f46d30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f46d38; end: 105f46d3f; -[SCMapPlaceTrayData basemapPlace] */

undefined8 FUN_105f46d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105f46d40; end: 105f46d47; -[SCMapPlaceTrayData customServerRankingId] */

undefined8 FUN_105f46d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f46d48; end: 105f46d4f; -[SCMapPlaceTrayData shouldDisplayPlacePin] */

undefined1 FUN_105f46d48(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105f46d50; end: 105f46d57; -[SCMapPlaceTrayData isPromoted] */

undefined1 FUN_105f46d50(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105f46d58; end: 105f46d5f; -[SCMapPlaceTrayData placeLinkButtonData] */

undefined8 FUN_105f46d58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105f46d60; end: 105f46def; -[SCMapPlaceTrayData .cxx_destruct] */

void FUN_105f46d60(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105f46df0; end: 105f46e3f; -[SCMapPlaceTrayPositionUpdate initWithPosition:animated:] */

void FUN_105f46df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee1f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 105f46e40; end: 105f46e63; -[SCMapPlaceTrayPositionUpdate copyWithZone:] */

undefined8 FUN_105f46e40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f46e64; end: 105f46ebf; -[SCMapPlaceTrayPositionUpdate hash] */

undefined8 * FUN_105f46e64(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 8);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (undefined8 *)0x1;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (puVar1[2] != param_3[2])) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)(ulong)(*(char *)(puVar1 + 1) == *(char *)(param_3 + 1));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105f46ec0; end: 105f46f57; -[SCMapPlaceTrayPositionUpdate isEqual:] */

bool FUN_105f46ec0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105f46f58; end: 105f46f5f; -[SCMapPlaceTrayPositionUpdate position] */

undefined8 FUN_105f46f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f46f60; end: 105f46f67; -[SCMapPlaceTrayPositionUpdate animated] */

undefined1 FUN_105f46f60(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f46f68; end: 105f46fdb; -[SCMapMultiTrayServices initWithMultiTrayManager:] */

undefined1 * FUN_105f46f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee200;
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



/* Entry: 105f46fdc; end: 105f46fe3; -[SCMapMultiTrayServices multiTrayManager] */

undefined8 FUN_105f46fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f46fe4; end: 105f46fef; -[SCMapMultiTrayServices .cxx_destruct] */

void FUN_105f46fe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f46ff0; end: 105f4703f; -[SCMapTrayChromeConfiguration initWithIsCloseable:visibleChromeV2Components:] */

void FUN_105f46ff0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee208;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 105f47040; end: 105f47063; -[SCMapTrayChromeConfiguration copyWithZone:] */

undefined8 FUN_105f47040(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105f47064; end: 105f470bf; -[SCMapTrayChromeConfiguration hash] */

ulong * FUN_105f47064(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(puVar1[2] == param_3[2]);
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105f470c0; end: 105f47157; -[SCMapTrayChromeConfiguration isEqual:] */

bool FUN_105f470c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105f47158; end: 105f4715f; -[SCMapTrayChromeConfiguration isCloseable] */

undefined1 FUN_105f47158(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f47160; end: 105f47167; -[SCMapTrayChromeConfiguration visibleChromeV2Components] */

undefined8 FUN_105f47160(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f47168; end: 105f471c3; +[SCMapTrayEvent didChangeToPositionWithPosition:] */

void FUN_105f47168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6028;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f471c4; end: 105f4720f; +[SCMapTrayEvent wasRemoved] */

void FUN_105f471c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6028;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105f47210; end: 105f4726b; +[SCMapTrayEvent willChangeToPositionWithPosition:interactionMethod:] */

void FUN_105f47210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6028;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


