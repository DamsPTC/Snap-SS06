/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106174750; end: 106174813;  */

void FUN_106174750(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106174814; end: 10617483f;  */

void FUN_106174814(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed1460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106174840; end: 10617487b; -[SCFeatureImageSuperResolutionImpl forwardCameraTimerGesture:] */

void FUN_106174840(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be4df90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadModel_112571180);
    return;
  }
  return;
}



/* Entry: 10617487c; end: 1061749e7; -[SCFeatureImageSuperResolutionImpl _startObservingCapturerStateUpdateWithManagedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617487c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  lVar6 = (long)_DAT_112740cb4;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1061749e8; end: 106174ae3;  */

void FUN_1061749e8(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106174ae4;
  puStack_60 = &UNK_110872b00;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e6580(param_2);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e2d80(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106174ae4; end: 106174b3b;  */

void FUN_106174ae4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed1460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106174b3c; end: 106174b8b; -[SCFeatureImageSuperResolutionImpl _unloadModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106174b3c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740cb8;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf3a3c0(*(undefined8 *)(param_1 + _DAT_112740ca8));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106174b8c; end: 106174d9b; -[SCFeatureImageSuperResolutionImpl _loadModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106174b8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(param_1 + _DAT_112740ca4) == 0xb) {
    return;
  }
  lVar7 = param_1;
  func_0x00010bdc5220();
  lVar6 = (long)_DAT_112740ca0;
  if (lVar7 == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb24e0();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  _objc_release(uVar1);
  _objc_release(uVar2);
  lVar7 = (long)_DAT_112740cac;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c22df80();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c262be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar6 = (long)_DAT_112740cb8;
  uVar3 = *(ulong *)(param_1 + lVar6);
  if (uVar3 != 0) {
    func_0x00010c0720c0(uVar3,param_2,uVar1);
    uVar2 = uVar1;
    if ((uVar3 & 1) != 0) goto LAB_106174d68;
    func_0x00010bed1460(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112740ca8);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0cfe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1e40(uVar5,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar1;
LAB_106174d68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106174d9c; end: 106174ef3; -[SCFeatureImageSuperResolutionImpl _activeFlashMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106174d9c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112740ca0;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c1410c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c141120();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar3 == 2) {
    lVar4 = 2;
  }
  else {
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c1410c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c141120();
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
    if (lVar3 == 1) {
      lVar4 = 1;
    }
    else {
      lVar1 = *(long *)(param_1 + lVar5);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c1410c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c141120();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar4 != 3) {
        lVar4 = 0;
      }
    }
  }
  return lVar4;
}



/* Entry: 106174ef4; end: 106174f73; -[SCFeatureImageSuperResolutionImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106174ef4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740cb4,0);
  _objc_storeStrong(param_1 + _DAT_112740cb8,0);
  _objc_storeStrong(param_1 + _DAT_112740cac,0);
  _objc_storeStrong(param_1 + _DAT_112740ca8,0);
  _objc_storeStrong(param_1 + _DAT_112740cb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740ca0,0);
  return;
}



/* Entry: 106174f74; end: 1061750f7; -[SCFeatureImagineLensToolbarImpl initWithCameraToolbar:imagineLensService:cameraUIServices:renderTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106174f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126efed8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_112740cbc),param_3);
    lVar6 = (long)_DAT_112740cc0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_4;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112740cc4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_5;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112740cc8;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_6;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740ccc);
    *(undefined **)((long)puVar2 + (long)_DAT_112740ccc) = puVar4;
    _objc_release(uVar3);
    puVar5 = (undefined1 *)puVar2;
    func_0x00010bf56060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740cd0);
    *(undefined1 **)((long)puVar2 + (long)_DAT_112740cd0) = puVar5;
    _objc_release(uVar3);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112740cd4);
    uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar3;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112740cd8) = 1;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112740cdc) = 1;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1061750f8; end: 106175177; -[SCFeatureImagineLensToolbarImpl configureLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061750f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740ce0);
  *(undefined8 *)(param_1 + _DAT_112740ce0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2737c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ca20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106175178; end: 1061751bf; -[SCFeatureImagineLensToolbarImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106175178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112740cd4);
  func_0x00010bf2bb60(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cd20();
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1061751c0; end: 1061751c3; -[SCFeatureImagineLensToolbarImpl activate] */

void FUN_1061751c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beae750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupObservables_112589378);
  return;
}



/* Entry: 1061751c4; end: 106175543; -[SCFeatureImagineLensToolbarImpl _setupObservables] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061751c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar11 = (long)_DAT_112740cc0;
  lVar2 = *(long *)(param_1 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe9c20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106175544;
    puStack_88 = &UNK_110857828;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe9c40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1061755b4;
    puStack_b0 = &UNK_110842a38;
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
  }
  lVar10 = (long)_DAT_112740cbc;
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar11 = lVar2;
  func_0x00010c071800();
  _objc_release(lVar2);
  if ((int)lVar11 != 0) {
    param_1 = param_1 + lVar10;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar11 = lVar2;
    func_0x00010bf2b420(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar11;
    func_0x00010c0e0ea0(lVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_78);
    lVar9 = lVar8;
    func_0x00010c25ff60(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_destroyWeak(auStack_d0);
    _objc_release(lVar2);
  }
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106175544; end: 1061755b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106175544(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112740ce4;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    func_0x00010bee4040(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061755b4; end: 106175677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061755b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + _DAT_112740cdc) = (char)uVar1;
    func_0x00010bee4040(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106175678; end: 106175727; -[SCFeatureImagineLensToolbarImpl _updateVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106175678(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  byte bStack_18;
  
  bStack_18 = 0;
  if (*(long *)(param_1 + _DAT_112740ce4) != 0) {
    if (*(char *)(param_1 + _DAT_112740cd8) == '\x01') {
      bStack_18 = *(byte *)(param_1 + _DAT_112740cdc);
    }
    else {
      bStack_18 = 0;
    }
  }
  bStack_18 = bStack_18 & 1;
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106175728;
  puStack_28 = &UNK_110845ce0;
  lStack_20 = param_1;
  func_0x00010bf03440(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,4,&puStack_40,
                      0);
  return;
}



/* Entry: 106175728; end: 10617574f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106175728(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740cd0),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106175750; end: 10617596f; -[SCFeatureImagineLensToolbarImpl _onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106175750(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar6 = (long)_DAT_112740ce4;
  if (*(long *)(param_1 + lVar6) != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740cc8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c29f120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    iVar2 = (int)uVar3;
    puVar1 = (undefined8 *)(param_1 + _DAT_112740cd4);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    uVar12 = puVar1[2];
    uVar13 = puVar1[3];
    uVar3 = uVar10;
    uVar7 = uVar11;
    uVar8 = uVar12;
    uVar9 = uVar13;
    _CGRectIsEmpty(uVar10,uVar11,uVar12,uVar13);
    if (iVar2 != 0) {
      func_0x00010bfb68e0(uVar4);
      uVar10 = uVar3;
      uVar11 = uVar7;
      uVar12 = uVar8;
      uVar13 = uVar9;
    }
    _objc_initWeak(auStack_78,param_1);
    puVar5 = PTR_PTR_1126c8618;
    _objc_alloc(PTR_PTR_1126c8618);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c094540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106175970;
    puStack_88 = &UNK_110911990;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c0248e0(uVar10,uVar11,uVar12,uVar13,puVar5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740cc0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158ac0();
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 106175970; end: 106175aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106175970(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740cc4);
    func_0x00010bf2b640(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf4b340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar3 = uVar2;
    func_0x00010bf2bb60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106175aac; end: 106175db7; -[SCFeatureImagineLensToolbarImpl createEntryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106175aac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010c21e900(puVar1);
  puVar2 = PTR_PTR_1126b6138;
  _objc_alloc_init();
  func_0x00010c1aac60();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar2);
  _objc_release(puVar3);
  func_0x00010c1c3c80(0x3ff3333333333333,puVar2);
  func_0x00010c1d4b80(puVar2);
  func_0x00010c21d680(puVar2);
  func_0x00010c218d60(0xc000000000000000,0xc000000000000000,0xc000000000000000,0xc000000000000000,
                      puVar2);
  func_0x00010c195460(puVar2);
  func_0x00010befbd40(puVar2);
  func_0x00010c219b60(puVar2);
  func_0x00010befbb60(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + _DAT_112740cc8,0);
  _objc_storeStrong(puVar2 + _DAT_112740cc4,0);
  _objc_storeStrong(puVar2 + _DAT_112740ce4,0);
  _objc_storeStrong(puVar2 + _DAT_112740cd0,0);
  _objc_storeStrong(puVar2 + _DAT_112740ce0,0);
  _objc_storeStrong(puVar2 + _DAT_112740ce8,0);
  _objc_storeStrong(puVar2 + _DAT_112740ccc,0);
  _objc_storeStrong(puVar2 + _DAT_112740cc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar2 + _DAT_112740cbc);
  return;
}



/* Entry: 106175db8; end: 106175e63; -[SCFeatureImagineLensToolbarImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106175db8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740cc8,0);
  _objc_storeStrong(param_1 + _DAT_112740cc4,0);
  _objc_storeStrong(param_1 + _DAT_112740ce4,0);
  _objc_storeStrong(param_1 + _DAT_112740cd0,0);
  _objc_storeStrong(param_1 + _DAT_112740ce0,0);
  _objc_storeStrong(param_1 + _DAT_112740ce8,0);
  _objc_storeStrong(param_1 + _DAT_112740ccc,0);
  _objc_storeStrong(param_1 + _DAT_112740cc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112740cbc);
  return;
}



/* Entry: 106175e64; end: 106176017; -[SCFeatureImportMediaImpl initWithDirectorModeFeature:lensCarouselManager:postModeConfiguration:memoriesContentFetcher:contentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106175e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126efee0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112740cf0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112740cf4),param_4);
    lVar4 = (long)_DAT_112740cf8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112740cfc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf4c240(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112740d00),uVar2);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740d04);
    *(undefined **)((long)puVar1 + (long)_DAT_112740d04) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740d08);
    *(undefined **)((long)puVar1 + (long)_DAT_112740d08) = puVar3;
    _objc_release(uVar2);
    func_0x00010be89b80(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106176018; end: 10617625b; -[SCFeatureImportMediaImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106176018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10617625c;
  puStack_90 = &UNK_110855770;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_88 = param_3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740d0c);
  *(undefined **)(param_1 + _DAT_112740d0c) = puVar1;
  _objc_release(uVar2);
  _objc_retain(puVar1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_d8 = puVar4;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1061762a4;
  puStack_c0 = &UNK_1109119c0;
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(puVar1);
  puStack_b8 = puVar1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740d10);
  *(undefined **)(param_1 + _DAT_112740d10) = puVar3;
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_e0,auStack_78);
  _objc_retain(puVar1);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740d14);
  *(undefined **)(param_1 + _DAT_112740d14) = puVar4;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + _DAT_112740d18) = 1;
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 10617625c; end: 1061762a3;  */

void FUN_10617625c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeeaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061762a4; end: 106176383;  */

void FUN_1061762a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bdecd00(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106176384; end: 1061764ff; -[SCFeatureImportMediaImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106176384(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112740cf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf87260();
  lVar2 = lVar1;
  _objc_release();
  if ((int)lVar6 != 0) {
    puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar3 == (undefined *)0x3) {
      lVar2 = 3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010be4e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadRecentThumbnail_1125712e8);
        return;
      }
      goto LAB_1061764fc;
    }
    lVar1 = param_1 + _DAT_112740d00;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0295e0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b940(lVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = param_1;
    func_0x00010bea4980();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_1061764fc:
  ___stack_chk_fail();
  pcStack_58 = FUN_106176500;
  lVar6 = (long)_DAT_112740d04;
  lStack_70 = lVar1;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010bf86d80(*(undefined8 *)(lVar2 + lVar6));
  uVar5 = *(undefined8 *)(lVar2 + lVar6);
  *(undefined8 *)(lVar2 + lVar6) = 0;
  _objc_release(uVar5);
  puStack_78 = PTR_PTR_1126efee0;
  lStack_80 = lVar2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106176500; end: 10617655b; -[SCFeatureImportMediaImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106176500(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112740d04;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126efee0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10617655c; end: 106176627; -[SCFeatureImportMediaImpl presentMemoriesPickerWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617655c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_112740cec) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112740cec) = 1;
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106176628;
    puStack_40 = &UNK_110848708;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_58);
    _objc_release(uStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106176628; end: 10617670b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106176628(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112740cf0);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c10d040(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10617670c; end: 106176757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617670c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112740cec) = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106176758; end: 10617675f; -[SCFeatureImportMediaImpl modeEnabledStateChangedObservable] */

undefined8 FUN_106176758(void)

{
  return 0;
}



/* Entry: 106176760; end: 106176763; -[SCFeatureImportMediaImpl disableMode] */

void FUN_106176760(void)

{
  return;
}



/* Entry: 106176764; end: 10617676b; -[SCFeatureImportMediaImpl isHidden] */

undefined8 FUN_106176764(void)

{
  return 0;
}



/* Entry: 10617676c; end: 106176777; -[SCFeatureImportMediaImpl incompatibleModes] */

undefined * FUN_10617676c(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106176778; end: 10617677f; -[SCFeatureImportMediaImpl modeType] */

undefined8 FUN_106176778(void)

{
  return 0xd;
}



/* Entry: 106176780; end: 106176827; -[SCFeatureImportMediaImpl onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106176780(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010c0cfda0();
  if ((int)lVar3 != param_3) {
    return;
  }
  lVar3 = (long)_DAT_112740cf0;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf78ec0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_presentMemoriesPickerWithComplet_112620e30,0)
  ;
  return;
}



/* Entry: 106176828; end: 10617682b; -[SCFeatureImportMediaImpl secondaryOnTap:] */

void FUN_106176828(void)

{
  return;
}



/* Entry: 10617682c; end: 10617683b; -[SCFeatureImportMediaImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10617682c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740cec);
}



/* Entry: 10617683c; end: 106176843; -[SCFeatureImportMediaImpl secondaryButtonState] */

undefined8 FUN_10617683c(void)

{
  return 0;
}



/* Entry: 106176844; end: 106176847; -[SCFeatureImportMediaImpl toolbarButtonPositionDidChange:] */

void FUN_106176844(void)

{
  return;
}



/* Entry: 106176848; end: 106176c77; -[SCFeatureImportMediaImpl _createImportSideButtonView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106176848(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_3;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740cf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf87260();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR_PTR_1126b6138;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fd3333333333333);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar18);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = puVar18;
    func_0x00010c08c0e0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar18;
    func_0x00010c08c0e0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4000000000000000);
    _objc_release(puVar3);
    puVar3 = puVar18;
    func_0x00010c08c0e0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar3);
    func_0x00010c1c3c80(0x3ff199999999999a,puVar18);
    puVar3 = PTR_PTR_1126b08d8;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100b74f58(0x4000000000000000,0x3fd0000000000000,0,0,puVar3,puVar18,puVar4);
    _objc_release(puVar4);
    func_0x00010c219b60(puVar18);
    lVar5 = param_3;
    func_0x00010bfe12e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar5);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar18;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf49420(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar18;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf49420(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar18;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar18;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3;
    func_0x00010bf2b240(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar12;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(lVar10);
    _objc_release(lVar5);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    func_0x00010c21e900(puVar18);
    func_0x00010befbd40(puVar18);
    lVar5 = param_1;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    puVar18 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    if (lVar5 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      _objc_retain(lVar5);
      _objc_opt_new(puVar18);
      func_0x00010c182220();
      puVar3 = puVar18;
      func_0x00010c08c0e0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4024000000000000);
      _objc_release(puVar3);
      puVar3 = puVar18;
      func_0x00010c08c0e0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar3);
      func_0x00010c219b60(puVar18);
      func_0x00010befbb60(lVar5);
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 106176c78; end: 106176d37; -[SCFeatureImportMediaImpl _createImageView:] */

void FUN_106176c78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_new(puVar2);
    func_0x00010c182220();
    puVar1 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar1);
    func_0x00010c219b60(puVar2,param_2,0);
    func_0x00010befbb60(param_3,param_2,puVar2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106176d38; end: 106176f5f; -[SCFeatureImportMediaImpl _createDefaultImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106176d38(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  int *piVar19;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bdeea60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != (undefined *)0x0) {
    puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_3;
    puStack_90 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = puVar16;
    func_0x00010bf493a0(puVar2,param_2,puVar16);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = param_1;
    puStack_a0 = puVar2;
    puStack_88 = puVar2;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = param_3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = unaff_x24;
    func_0x00010bf493a0(unaff_x24,param_2,unaff_x25);
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = param_1;
    puStack_80 = unaff_x27;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x28;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
    puStack_78 = unaff_x26;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = unaff_x22;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x23;
    func_0x00010beef8c0(puStack_a8);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x26);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(puStack_a0);
    _objc_release(puStack_98);
    _objc_release(puStack_90);
    _objc_retain(param_1);
  }
  _objc_release(param_1);
  puVar16 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_106176f60;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_110 = unaff_x28;
    puStack_108 = unaff_x27;
    puStack_100 = unaff_x26;
    puStack_f8 = unaff_x25;
    puStack_f0 = unaff_x24;
    puStack_e8 = unaff_x23;
    puStack_e0 = unaff_x22;
    puStack_d8 = unaff_x21;
    puStack_d0 = param_1;
    puStack_c8 = param_3;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    puVar18 = puVar2;
    func_0x00010bdeea60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    if (puVar16 != (undefined *)0x0) {
      puVar3 = puVar16;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf493a0(puVar3,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar16;
      puStack_138 = puVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bf493a0(puVar6,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar16;
      puStack_130 = puVar8;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c08de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493a0(puVar9,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar16;
      puStack_128 = puVar11;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010bf493a0(puVar12,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_120 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_138,4);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar15;
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_retain(puVar16);
    }
    _objc_release(puVar16);
    _objc_release();
    param_1 = puVar16;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_retain(puVar18);
      if (puVar18 == (undefined *)0x0) {
        puVar16 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e43158);
        _objc_retainAutoreleasedReturnValue();
        piVar19 = (int *)&DAT_112740d14;
        uVar17 = *(undefined8 *)(puVar2 + _DAT_112740d10);
        func_0x00010c269d40(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00();
        _objc_release(uVar17);
      }
      else {
        piVar19 = (int *)&DAT_112740d10;
        puVar16 = *(undefined **)(puVar2 + _DAT_112740d14);
        func_0x00010c269d40(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00();
      }
      _objc_release(puVar16);
      uVar17 = *(undefined8 *)(puVar2 + *piVar19);
      func_0x00010c269d40(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar18);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106176f60; end: 1061771cb; -[SCFeatureImportMediaImpl _createThumbnailImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106176f60(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  int *piVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar16 = param_3;
  func_0x00010bdeea60();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf493a0(lVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    lStack_88 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf493a0(lVar4,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    lStack_80 = lVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010c08de00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf493a0(lVar7,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    lStack_78 = lVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf493a0(lVar10,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010beef8c0(puVar14);
    _objc_release(puVar13);
    _objc_release(lVar12);
    _objc_release(puVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_retain(param_1);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar16);
  if (puVar16 == (undefined *)0x0) {
    puVar14 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e43158);
    _objc_retainAutoreleasedReturnValue();
    piVar17 = (int *)&DAT_112740d14;
    uVar15 = *(undefined8 *)(param_3 + _DAT_112740d10);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar15);
  }
  else {
    piVar17 = (int *)&DAT_112740d10;
    puVar14 = *(undefined **)(param_3 + _DAT_112740d14);
    func_0x00010c269d40(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  _objc_release(puVar14);
  uVar15 = *(undefined8 *)(param_3 + *piVar17);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar16);
  return;
}



/* Entry: 1061771cc; end: 1061772b7; -[SCFeatureImportMediaImpl _setImportSideButtonImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061771cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int *piVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e43158);
    _objc_retainAutoreleasedReturnValue();
    piVar3 = (int *)&DAT_112740d14;
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740d10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar2);
  }
  else {
    piVar3 = (int *)&DAT_112740d10;
    puVar1 = *(undefined **)(param_1 + _DAT_112740d14);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
  }
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + *piVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061772b8; end: 106177403; -[SCFeatureImportMediaImpl _loadRecentThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061772b8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + _DAT_112740d00;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c13e560(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106177404; end: 1061774e7;  */

void FUN_106177404(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010b7f5374(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1061774e8;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    puStack_38 = puVar2;
    _objc_retain();
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(puStack_38);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1061774e8; end: 1061774f3;  */

void FUN_1061774e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setImportSideButtonImage__112586c08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1061774f4; end: 1061775d3; -[SCFeatureImportMediaImpl _cacheAndConfigureThumbnailFromAsset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061774f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740d08);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1061775d4; end: 1061776af;  */

void FUN_1061775d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x000107fe9894(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061776b0;
  puStack_50 = &UNK_1109119f0;
  _objc_copyWeak(auStack_48,param_3 + 0x28);
  func_0x000107f6e0e0(param_1,param_2,puVar1,uVar2,1,&puStack_68);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1061776b0; end: 1061777f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061776b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_2;
    _UIImageJPEGRepresentation(0x3fe6666666666666,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_112740d00;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    _objc_retain(param_2);
    func_0x00010c14a860(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1061777f4; end: 10617786b;  */

void FUN_1061777f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10617786c;
  puStack_28 = &UNK_110841f80;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_20 = uVar1;
  uStack_18 = uVar2;
  func_0x000100162d98("APPSTORE",&puStack_40);
  _objc_release(uStack_18);
  return;
}



/* Entry: 10617786c; end: 106177877;  */

void FUN_10617786c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setImportSideButtonImage__112586c08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106177878; end: 10617787f; -[SCFeatureImportMediaImpl _importSideButtonOnTap:] */

void FUN_106177878(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onTap__1126175d8,0xd);
  return;
}



/* Entry: 106177880; end: 106177ae3; -[SCFeatureImportMediaImpl _registerObserversIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106177880(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740cf8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf87260();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_68,param_1);
    lVar3 = param_1 + _DAT_112740cf4;
    _objc_loadWeakRetained(lVar3);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106177ae4;
    puStack_78 = &UNK_11084efc0;
    puVar4 = auStack_70;
    _objc_copyWeak(puVar4,auStack_68);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126c8620;
    _objc_alloc(PTR_PTR_1126c8620);
    func_0x00010c03d900();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112740cfc);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0e0920();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar6);
    uVar2 = uVar1;
    func_0x00010c0e0ea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 106177ae4; end: 106177b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106177ae4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + _DAT_112740d1c,lVar1);
    _objc_release(lVar1);
    func_0x00010be89860(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106177b74; end: 106177b83;  */

void FUN_106177b74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae750,PTR_s_optionalWithValue__112618c18,param_2);
  return;
}



/* Entry: 106177b84; end: 106177c2f;  */

void FUN_106177b84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bcd80();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106177c30; end: 106177cab;  */

void FUN_106177c30(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfa9d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(param_2);
  return;
}



/* Entry: 106177cac; end: 106177cb7;  */

void FUN_106177cac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd7590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cacheAndConfigureThumbnailFromA_112553700,
             param_2);
  return;
}



/* Entry: 106177cb8; end: 106177e0f; -[SCFeatureImportMediaImpl _registerLensObserversForLensCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106177cb8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_112740d1c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bef0d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e0ec0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106177e10; end: 106177e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106177e10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf1f3c0(param_2);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740d0c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106177e94; end: 106177f67; -[SCFeatureImportMediaImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106177e94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740d08,0);
  _objc_destroyWeak(param_1 + _DAT_112740d00);
  _objc_storeStrong(param_1 + _DAT_112740cfc,0);
  _objc_storeStrong(param_1 + _DAT_112740cf8,0);
  _objc_storeStrong(param_1 + _DAT_112740d04,0);
  _objc_destroyWeak(param_1 + _DAT_112740d1c);
  _objc_destroyWeak(param_1 + _DAT_112740cf4);
  _objc_storeStrong(param_1 + _DAT_112740d10,0);
  _objc_storeStrong(param_1 + _DAT_112740d14,0);
  _objc_storeStrong(param_1 + _DAT_112740d0c,0);
  _objc_storeStrong(param_1 + _DAT_112740d20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740cf0,0);
  return;
}



/* Entry: 106177f68; end: 1061780c3; -[SCCameraFlashFeatureInitializer createInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106177f68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c8630;
  _objc_alloc(PTR_PTR_1126c8630);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112740d58);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112740d60);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112740d64);
  lVar9 = param_1 + _DAT_112740d68;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bffbec0(puVar1,param_2,uVar6,uVar7,uVar8,lVar9);
  _objc_release(lVar9);
  lVar9 = (long)_DAT_112740d5c;
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(puVar1,param_2,uVar6,uVar8,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061780c4; end: 10617853f; -[SCCameraDirectorModePresentingFeatureInitializer initWithCameraViewType:cameraConfiguration:directorModeLaunchServices:directorModeScopeServices:cameraUserBlizzardLogger:multiSnapFeature:lensCarouselManager:userSession:mainCameraViewControllerLifecycleEvents:cameraSnapCreationLogger:cameraUserActionLogger:contentDeliveryServices:cameraTooltipsService:cameraHardwareServicesAPI:cameraSnapModelServices:snapDocManagerServices:snapDocThumbnailServices:directorModeActivator:afterCaptureActionTracker:tinsel:appStartExperimentReader:cameraDeviceSettingsResolver:cameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061780c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126eff08;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740df0) = param_3;
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740df4,param_4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740df8,param_5);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740dfc,param_6);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740e00,param_7);
    lVar3 = (long)_DAT_112740e04;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112740e08;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740e0c,param_10);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740e10,param_11);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740e14,param_12);
    lVar3 = (long)_DAT_112740e18;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_13;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740e1c,param_14);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740e20,param_15);
    lVar3 = (long)_DAT_112740e24;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_16;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112740e28;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_17;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112740e2c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_18;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112740e30;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_19;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112740e34;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_20;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112740e38;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_21;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112740e3c;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_22;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740e40,param_23);
    lVar3 = (long)_DAT_112740e44;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_24;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740e48,param_25);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106178540; end: 1061785cb; -[SCCameraDirectorModePresentingFeatureInitializer enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106178540(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x000100456ca0();
  if ((uVar1 & 1) == 0) {
    lVar3 = param_1 + (long)_DAT_112740df4;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf7f280();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf926c0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 1061785cc; end: 1061787db; -[SCCameraDirectorModePresentingFeatureInitializer createInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061785cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar1 = PTR_PTR_1126c8648;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112740df8;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112740dfc;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_112740df4;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112740e00;
  _objc_loadWeakRetained();
  uVar12 = *(undefined8 *)(param_1 + _DAT_112740e04);
  uVar13 = *(undefined8 *)(param_1 + _DAT_112740e08);
  lVar6 = param_1 + _DAT_112740e0c;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_112740e10;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_112740e14;
  _objc_loadWeakRetained();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112740e18);
  lVar9 = param_1 + _DAT_112740e1c;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_112740e20;
  _objc_loadWeakRetained();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112740e24);
  uVar19 = *(undefined8 *)(param_1 + _DAT_112740e28);
  uVar20 = *(undefined8 *)(param_1 + _DAT_112740e2c);
  uVar17 = *(undefined8 *)(param_1 + _DAT_112740e30);
  uVar21 = *(undefined8 *)(param_1 + _DAT_112740e34);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112740e38);
  uVar18 = *(undefined8 *)(param_1 + _DAT_112740e3c);
  lVar11 = param_1 + _DAT_112740e40;
  _objc_loadWeakRetained();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112740e44);
  param_1 = param_1 + _DAT_112740e48;
  _objc_loadWeakRetained();
  func_0x00010c00c9e0(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,uVar12,uVar13,lVar6,lVar7,lVar8,uVar14,
                      lVar9,lVar10,uVar15,uVar19,uVar20,uVar17,uVar21,uVar16,uVar18,lVar11,uVar22,
                      param_1);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061787dc; end: 10617892f; -[SCCameraDirectorModePresentingFeatureInitializer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061787dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112740e48);
  _objc_storeStrong(param_1 + _DAT_112740e44,0);
  _objc_destroyWeak(param_1 + _DAT_112740e40);
  _objc_storeStrong(param_1 + _DAT_112740e3c,0);
  _objc_storeStrong(param_1 + _DAT_112740e38,0);
  _objc_storeStrong(param_1 + _DAT_112740e34,0);
  _objc_storeStrong(param_1 + _DAT_112740e30,0);
  _objc_storeStrong(param_1 + _DAT_112740e2c,0);
  _objc_storeStrong(param_1 + _DAT_112740e28,0);
  _objc_storeStrong(param_1 + _DAT_112740e24,0);
  _objc_destroyWeak(param_1 + _DAT_112740e20);
  _objc_destroyWeak(param_1 + _DAT_112740e1c);
  _objc_storeStrong(param_1 + _DAT_112740e18,0);
  _objc_destroyWeak(param_1 + _DAT_112740e14);
  _objc_destroyWeak(param_1 + _DAT_112740e10);
  _objc_destroyWeak(param_1 + _DAT_112740e0c);
  _objc_storeStrong(param_1 + _DAT_112740e08,0);
  _objc_storeStrong(param_1 + _DAT_112740e04,0);
  _objc_destroyWeak(param_1 + _DAT_112740e00);
  _objc_destroyWeak(param_1 + _DAT_112740dfc);
  _objc_destroyWeak(param_1 + _DAT_112740df8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112740df4);
  return;
}



/* Entry: 106178930; end: 106178e13; -[SCFeatureLevelerModeImpl initWithApplicationLifecycleEvents:viewControllerLifecycleEvents:cameraUserActionLogger:deviceMotionManager:preferences:cameraHardwareResources:usesRuntimeViewfinderGeometry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106178930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_80 = PTR_PTR_1126eff18;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112740e80;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740e84);
    *(undefined **)((long)puVar2 + (long)_DAT_112740e84) = puVar4;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112740e88;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_8;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_112740e8c) = param_9;
    _objc_initWeak(auStack_90,puVar2);
    uVar3 = param_3;
    func_0x00010c2a6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106178e14;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar7 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf75dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x106178e48;
    puStack_c8 = &UNK_110846510;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar7 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar3);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_106178e7c;
    puStack_f0 = &UNK_11084e590;
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar3 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf2a500();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_106178ff4;
    puStack_118 = &UNK_110852698;
    _objc_copyWeak(auStack_110,auStack_90);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar5);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112740e90);
    uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar3;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    *(undefined1 *)((long)puVar2 + (long)_DAT_112740e94) = 0;
    *(undefined8 *)((long)puVar2 + (long)_DAT_112740e98) = 0x404e000000000000;
    lVar6 = (long)_DAT_112740e9c;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_6;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_112740ea0;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_7;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_138,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112740ea4);
    *(undefined **)((long)puVar2 + (long)_DAT_112740ea4) = puVar4;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 106178e14; end: 106178e7b;  */

void FUN_106178e14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdccec0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106178e7c; end: 106178f7f;  */

void FUN_106178e7c(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106178f84;
  puStack_60 = &UNK_110849200;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106178f80; end: 106178f83;  */

void FUN_106178f80(void)

{
  return;
}



/* Entry: 106178f84; end: 106178fb7;  */

void FUN_106178f84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee9de0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106178fb8; end: 106178fbb;  */

void FUN_106178fb8(void)

{
  return;
}



/* Entry: 106178fbc; end: 106178fef;  */

void FUN_106178fbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee9e00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106178ff0; end: 106178ff3;  */

void FUN_106178ff0(void)

{
  return;
}



/* Entry: 106178ff4; end: 106179097;  */

void FUN_106178ff4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdc1080(param_2);
    func_0x00010be8e300(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106179098; end: 1061790db; -[SCFeatureLevelerModeImpl dealloc] */

void FUN_106179098(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126eff18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061790dc; end: 1061790eb; -[SCFeatureLevelerModeImpl isActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061790dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740e94);
}



/* Entry: 1061790ec; end: 106179173; -[SCFeatureLevelerModeImpl _checkAndStartRendering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061790ec(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740ea4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07d660();
  if ((int)uVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  bVar1 = *(byte *)(param_1 + _DAT_112740e94);
  _objc_release(uVar2);
  if ((bVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc4870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activate_11254ebb8);
  return;
}



/* Entry: 106179174; end: 10617918f; -[SCFeatureLevelerModeImpl _checkAndStopRendering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106179174(long param_1)

{
  if (*(char *)(param_1 + _DAT_112740e94) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdf81f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deactivate_11255ba18);
    return;
  }
  return;
}



/* Entry: 106179190; end: 1061791e3; -[SCFeatureLevelerModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106179190(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740ea8;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar1,param_3);
  func_0x00010bdeaca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061791e4; end: 106179273; -[SCFeatureLevelerModeImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061791e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112740eac;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != param_3) {
    _objc_storeWeak(param_1 + lVar3,param_3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740ea4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc4a0(param_3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106179274; end: 106179283; -[SCFeatureLevelerModeImpl isCameraModeActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106179274(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740e94);
}



/* Entry: 106179284; end: 10617928b; -[SCFeatureLevelerModeImpl cameraModeType] */

undefined8 FUN_106179284(void)

{
  return 1;
}



/* Entry: 10617928c; end: 106179427; -[SCFeatureLevelerModeImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617928c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  lVar6 = (long)_DAT_112740eb0;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf70e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_70);
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106179428; end: 1061794cb;  */

void FUN_106179428(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3b80(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061794cc; end: 1061794ff;  */

void FUN_1061794cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be013e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106179500; end: 106179557; -[SCFeatureLevelerModeImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106179500(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740e84;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112740eb0;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106179558; end: 10617960b; -[SCFeatureLevelerModeImpl shortcutEnableIfNecessary:cameraShortcutId:scanSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106179558(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bf2ae40();
  uVar1 = param_1;
  func_0x00010bf2ae20();
  if ((uVar1 & param_3) != 0) {
    lVar2 = param_1 + (long)_DAT_112740eac;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112740ea4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf25540(lVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar2);
    func_0x00010c1fadc0(lVar4,param_2,1);
    _objc_release(lVar4);
  }
  return (uVar1 & param_3) != 0;
}



/* Entry: 10617960c; end: 106179697; -[SCFeatureLevelerModeImpl shortcutDisable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617960c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_112740eac;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740ea4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf25540(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010c1fadc0(lVar3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106179698; end: 10617969f; -[SCFeatureLevelerModeImpl cameraShortcutFeatureType] */

undefined8 FUN_106179698(void)

{
  return 0;
}



/* Entry: 1061796a0; end: 1061796a7; -[SCFeatureLevelerModeImpl cameraShortcutFeatureOption] */

undefined8 FUN_1061796a0(void)

{
  return 8;
}



/* Entry: 1061796a8; end: 1061796af; -[SCFeatureLevelerModeImpl hasPendingContent] */

undefined8 FUN_1061796a8(void)

{
  return 0;
}



/* Entry: 1061796b0; end: 1061796bb; -[SCFeatureLevelerModeImpl cameraShortcutFeatureName] */

undefined ** FUN_1061796b0(void)

{
  return &PTR____CFConstantStringClassReference_110e431f8;
}



/* Entry: 1061796bc; end: 10617980f; -[SCFeatureLevelerModeImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061796bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740ea4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740ea0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f320();
  func_0x00010c1b4280(uVar1,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar8 = (long)_DAT_112740e88;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1,param_2,uVar3,uVar2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106179810; end: 10617982b; -[SCFeatureLevelerModeImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106179810(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112740eb4) = 0;
  *(undefined8 *)(param_1 + _DAT_112740eb8) = 0;
  return;
}



/* Entry: 10617982c; end: 10617991b; -[SCFeatureLevelerModeImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617982c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e431b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_112740eb4));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e431d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_48 = puVar1;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_112740eb8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar2 = puVar1 + _DAT_112740eac;
    _objc_loadWeakRetained();
    uVar4 = *(undefined8 *)(puVar1 + _DAT_112740ea4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfecd60(puVar2,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar2);
    if (puVar5 != (undefined *)0x7fffffffffffffff) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e42758);
      _objc_release(puVar2);
    }
    lVar6 = *(long *)(puVar1 + _DAT_112740ebc);
    if (lVar6 == 0) {
      func_0x00010c1d0560(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                          &PTR____CFConstantStringClassReference_110db16f8);
    }
    else {
      func_0x0001061a7e54();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar3,param_2,lVar6,&PTR____CFConstantStringClassReference_110db16f8);
      _objc_release(lVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


