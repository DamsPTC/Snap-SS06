/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10604cd84; end: 10604d0a3; -[SCMyUnifiedProfileSpectaclesCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10604cd84(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ef478;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar3 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c1db8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar19 = (long)_DAT_11273d9b0;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar17);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar19));
    puVar18 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar18);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = *(long *)((long)puVar1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar18;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_88 = lVar20;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar17;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar15;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar16;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar17);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(lVar20);
    _objc_release(puVar4);
    _objc_release(puVar18);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b6a58;
  _objc_opt_class(PTR_PTR_1126b6a58);
  puVar18 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  puVar1 = param_3;
  if (((ulong)puVar18 & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  _objc_retain(puVar1);
  lVar20 = (long)_DAT_11273d9b4;
  puVar18 = *(undefined8 **)(lVar3 + lVar20);
  _objc_retain(puVar18);
  _objc_retain(puVar1);
  if (puVar18 == puVar1) {
    _objc_release(puVar1);
    _objc_release(puVar18);
  }
  else {
    if (puVar1 == (undefined8 *)0x0) {
      _objc_release(puVar18);
    }
    else {
      puVar4 = puVar18;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar18);
      if (((ulong)puVar4 & 1) != 0) goto LAB_10604d184;
    }
    _objc_retain(puVar1);
    uVar17 = *(undefined8 *)(lVar3 + lVar20);
    *(undefined8 **)(lVar3 + lVar20) = puVar1;
    _objc_release(uVar17);
    func_0x00010c2226c0(*(undefined8 *)(lVar3 + _DAT_11273d9b0));
  }
LAB_10604d184:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 10604d0a4; end: 10604d1a3; -[SCMyUnifiedProfileSpectaclesCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604d0a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b6a58;
  _objc_opt_class(PTR_PTR_1126b6a58);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11273d9b4;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_10604d184;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_11273d9b0));
  }
LAB_10604d184:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10604d1a4; end: 10604d237; +[SCMyUnifiedProfileSpectaclesCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_10604d1a4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar3 = param_1;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b6a58;
  _objc_opt_class(PTR_PTR_1126b6a58);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  if ((param_5 == 0) || ((uVar2 & 1) == 0)) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    param_2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010bfe0720(PTR_PTR_1126b50b8);
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    if (dVar3 <= param_2) {
      param_2 = dVar3;
    }
  }
  _objc_release(param_5);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10604d238; end: 10604d23b; -[SCMyUnifiedProfileSpectaclesCell handleTapAction] */

void FUN_10604d238(void)

{
  return;
}



/* Entry: 10604d23c; end: 10604d31b; -[SCMyUnifiedProfileSpectaclesCell deviceInfoViewDidClickAbortFlightButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604d23c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b6a58;
  uVar4 = *(ulong *)(param_1 + _DAT_11273d9b4);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273d9b8);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10604d31c; end: 10604d3fb; -[SCMyUnifiedProfileSpectaclesCell deviceInfoViewDidTapBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604d31c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b6a58;
  uVar4 = *(ulong *)(param_1 + _DAT_11273d9b4);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273d9b8);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bf31be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10604d3fc; end: 10604d40b; -[SCMyUnifiedProfileSpectaclesCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10604d3fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d9b4);
}



/* Entry: 10604d40c; end: 10604d41b; -[SCMyUnifiedProfileSpectaclesCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10604d40c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d9b8);
}



/* Entry: 10604d41c; end: 10604d45b; -[SCMyUnifiedProfileSpectaclesCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604d41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d9b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604d45c; end: 10604d4ab; -[SCMyUnifiedProfileSpectaclesCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10604d45c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d9b8,0);
  _objc_storeStrong(param_1 + _DAT_11273d9b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d9b0,0);
  return;
}



/* Entry: 10604d4ac; end: 10604d5f3; -[SCMyUnifiedProfileSpectaclesSectionDataProvider initWithSpectaclesAppStatusProvider:spectaclesManager:onDemandResourceFetching:] */

undefined1 *
FUN_10604d4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ef480;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b68a8;
    _objc_alloc();
    func_0x00010c0312e0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10604d5f4; end: 10604d63f; -[SCMyUnifiedProfileSpectaclesSectionDataProvider connectedDevice] */

void FUN_10604d5f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf486e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10604d640; end: 10604d683; -[SCMyUnifiedProfileSpectaclesSectionDataProvider setUp] */

void FUN_10604d640(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf486c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8240(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedf210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSection_112595628);
  return;
}



/* Entry: 10604d684; end: 10604d6ab; -[SCMyUnifiedProfileSpectaclesSectionDataProvider statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_10604d684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bed8240(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bedf210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSection_112595628);
  return;
}



/* Entry: 10604d6ac; end: 10604d72b; -[SCMyUnifiedProfileSpectaclesSectionDataProvider spectaclesDevice:didUpdateInfo:] */

void FUN_10604d6ac(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf486c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (((param_4 & 0x801) != 0) && (param_3 == lVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bedf210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSection_112595628);
    return;
  }
  return;
}



/* Entry: 10604d72c; end: 10604d72f; -[SCMyUnifiedProfileSpectaclesSectionDataProvider spectaclesDeviceDidUpdateDeviceName:] */

void FUN_10604d72c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSection_112595628);
  return;
}



/* Entry: 10604d730; end: 10604d7d7; -[SCMyUnifiedProfileSpectaclesSectionDataProvider _updateSection] */

void FUN_10604d730(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10604d7d8; end: 10604d803;  */

void FUN_10604d7d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10604d804; end: 10604d837; -[SCMyUnifiedProfileSpectaclesSectionDataProvider _updateSectionDataModel] */

void FUN_10604d804(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10604d838; end: 10604dadb; -[SCMyUnifiedProfileSpectaclesSectionDataProvider _updateFlightManagerWithDevice:] */

void FUN_10604d838(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf486c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf486c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != param_3) {
      func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
      lVar1 = param_3;
      func_0x00010bfa1c80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfb2940();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar3;
      _objc_release(uVar7);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_initWeak(auStack_78,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfb2a80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10604dadc;
      puStack_88 = &UNK_110842a38;
      _objc_copyWeak(auStack_80,auStack_78);
      uVar6 = uVar5;
      func_0x00010c25ff60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfb2960(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,auStack_78);
      uVar6 = uVar5;
      func_0x00010c25ff60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10604dadc; end: 10604db8b;  */

void FUN_10604dadc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c2827c0();
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    func_0x00010bedf200(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10604db8c; end: 10604db97; +[SCMyUnifiedProfileSpectaclesSectionDataProvider announcerIdentifier] */

undefined ** FUN_10604db8c(void)

{
  return &PTR____CFConstantStringClassReference_110e39fd8;
}



/* Entry: 10604db98; end: 10604db9f; -[SCMyUnifiedProfileSpectaclesSectionDataProvider addListener:] */

void FUN_10604db98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10604dba0; end: 10604dba7; -[SCMyUnifiedProfileSpectaclesSectionDataProvider removeListener:] */

void FUN_10604dba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10604dba8; end: 10604dbe3; -[SCMyUnifiedProfileSpectaclesSectionDataProvider setSectionDataModel:] */

void FUN_10604dba8(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x00010c06fc80();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bedf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSectionDataModel_112595648);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedf210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSection_112595628);
  return;
}



/* Entry: 10604dbe4; end: 10604dd27; -[SCMyUnifiedProfileSpectaclesSectionDataProvider containerCellViewModelsForIndexPaths:] */

undefined * FUN_10604dbe4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    func_0x00010bdcfca0(param_1);
  }
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc();
  puVar5 = PTR_PTR_1126b6a58;
  lVar2 = param_1;
  func_0x00010bf486c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b7160(puVar5,param_2,lVar2,uVar3,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd260(puVar1,param_2,&PTR____CFConstantStringClassReference_110e39fb8,puVar5);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_10604dd28;
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e39fb8;
    puVar5 = PTR_PTR_1126c74e8;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_opt_class();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      puVar1 = puVar4;
      func_0x00010bf486c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar5 = PTR_PTR_1126b6a58;
      if (puVar1 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        func_0x00010bf486c0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c234440(puVar5,param_2,puVar4);
        puVar5 = (undefined *)((ulong)puVar5 & 0xffffffff);
        _objc_release(puVar4);
      }
      return puVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar4;
}



/* Entry: 10604dd28; end: 10604ddab; -[SCMyUnifiedProfileSpectaclesSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_10604dd28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e39fb8;
  puVar3 = PTR_PTR_1126c74e8;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010bf486c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126b6a58;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf486c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c234440(puVar3,param_2,puVar1);
    puVar3 = (undefined *)((ulong)puVar3 & 0xffffffff);
    _objc_release(puVar1);
  }
  return puVar3;
}



/* Entry: 10604ddac; end: 10604de27; -[SCMyUnifiedProfileSpectaclesSectionDataProvider numberOfItemsInSection:] */

ulong FUN_10604ddac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010bf486c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126b6a58;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010bf486c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c234440(puVar2,param_2,param_1);
    uVar3 = (ulong)puVar2 & 0xffffffff;
    _objc_release(param_1);
  }
  return uVar3;
}



/* Entry: 10604de28; end: 10604dedf; -[SCMyUnifiedProfileSpectaclesSectionDataProvider _asyncAnnounceSectionWillAppearOnScreen] */

void FUN_10604de28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10604dee0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10604dee0; end: 10604df0b;  */

void FUN_10604dee0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becfc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10604df0c; end: 10604dfcf; -[SCMyUnifiedProfileSpectaclesSectionDataProvider _triggerLifecycleEvent] */

void FUN_10604df0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110eb4a58;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f12078,0,puVar1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10604dfd0; end: 10604dfe7; -[SCMyUnifiedProfileSpectaclesSectionDataProvider dataProviderDelegate] */

void FUN_10604dfd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10604dfe8; end: 10604dff3; -[SCMyUnifiedProfileSpectaclesSectionDataProvider setDataProviderDelegate:] */

void FUN_10604dfe8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10604dff4; end: 10604dffb; -[SCMyUnifiedProfileSpectaclesSectionDataProvider sectionDataModel] */

undefined8 FUN_10604dff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10604dffc; end: 10604e003; -[SCMyUnifiedProfileSpectaclesSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10604dffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10604e004; end: 10604e033; -[SCMyUnifiedProfileSpectaclesSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10604e004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604e034; end: 10604e03b; -[SCMyUnifiedProfileSpectaclesSectionDataProvider lifecycleAnnouncer] */

undefined8 FUN_10604e034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10604e03c; end: 10604e06b; -[SCMyUnifiedProfileSpectaclesSectionDataProvider setLifecycleAnnouncer:] */

void FUN_10604e03c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10604e06c; end: 10604e0f7; -[SCMyUnifiedProfileSpectaclesSectionDataProvider .cxx_destruct] */

void FUN_10604e06c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10604e0f8; end: 10604e213; -[SCMyUnifiedProfileSpectaclesSectionProvider initWithAppStatusProvider:spectaclesManager:onDemandResourceFetching:spectaclesHomeScopeExposer:homeScopeServices:] */

undefined1 *
FUN_10604e0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ef488;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10604e214; end: 10604e21b; -[SCMyUnifiedProfileSpectaclesSectionProvider order] */

undefined8 FUN_10604e214(void)

{
  return 0xc;
}



/* Entry: 10604e21c; end: 10604e357; -[SCMyUnifiedProfileSpectaclesSectionProvider section] */

void FUN_10604e21c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    puVar1 = PTR_PTR_1126b1108;
    _objc_alloc();
    func_0x00010c04f820();
    puVar2 = PTR_PTR_1126c74f0;
    _objc_alloc();
    func_0x00010c04ae20();
    lVar6 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c1bd8e0(puVar2,param_2,lVar6);
    _objc_release(lVar6);
    ppuStack_48 = &PTR____CFConstantStringClassReference_110eb4ff8;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110eb4a58;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1f9240(puVar1,param_2,puVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar4);
    _objc_release(puVar2);
    lVar6 = *(long *)(param_1 + 8);
  }
  lVar5 = lVar6;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 == 0) {
      puVar1 = PTR_PTR_1126c74f8;
      _objc_alloc();
      uVar4 = *(undefined8 *)(lVar5 + 0x18);
      uVar7 = *(undefined8 *)(lVar5 + 0x38);
      lVar6 = lVar5 + 0x30;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c04ae00(puVar1,param_2,uVar4,uVar7,lVar6);
      uVar4 = *(undefined8 *)(lVar5 + 0x10);
      *(undefined **)(lVar5 + 0x10) = puVar1;
      _objc_release(uVar4);
      _objc_release(lVar6);
      lVar6 = *(long *)(lVar5 + 0x10);
    }
    _objc_retain(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10604e358; end: 10604e3eb; -[SCMyUnifiedProfileSpectaclesSectionProvider actionHandler] */

void FUN_10604e358(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126c74f8;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c04ae00(puVar1,param_2,uVar3,uVar4,lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10604e3ec; end: 10604e403; -[SCMyUnifiedProfileSpectaclesSectionProvider lifecycleAnnouncer] */

void FUN_10604e3ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10604e404; end: 10604e40f; -[SCMyUnifiedProfileSpectaclesSectionProvider setLifecycleAnnouncer:] */

void FUN_10604e404(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10604e410; end: 10604e47f; -[SCMyUnifiedProfileSpectaclesSectionProvider .cxx_destruct] */

void FUN_10604e410(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10604e480; end: 10604e5c7;  */

void FUN_10604e480(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  if ((long)(param_1 + param_2) < 2) {
    func_0x00010604f160();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    _objc_alloc_init();
    puVar2 = puVar1;
    func_0x00010c1d02e0();
    param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010604f178();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c25d4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c25d4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10604e5c8; end: 10604e6db;  */

void FUN_10604e5c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfb0d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c06e7e0();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar2 == 0) {
    func_0x00010604f358();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109025738();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10604e6dc; end: 10604e8d7;  */

void FUN_10604e6dc(undefined *param_1,undefined8 param_2)

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
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 < (undefined *)0x10) {
    puVar1 = param_1;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c074be0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      puVar1 = param_1;
      func_0x00010bfd38e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06e7e0();
      _objc_release(puVar1);
    }
    puVar1 = param_1;
    func_0x00010c15e740(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_1;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3a038);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10604e8d8; end: 10604eeff; +[SCSpectaclesSettingsDeviceStatusHelper statusStringWithAppStatusProviding:device:] */

void FUN_10604e8d8(float param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_alloc_init();
  func_0x00010c1d02e0();
  puVar2 = param_4;
  func_0x00010bf06300();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  switch(puVar2) {
  case (undefined *)0x0:
code_r0x00010604ebe4:
    puVar2 = param_5;
    func_0x00010c082060();
    if ((int)puVar2 != 0) goto code_r0x00010604ebf0;
    goto code_r0x00010604ec20;
  case (undefined *)0x1:
code_r0x00010604ebf0:
    func_0x00010604f118();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x2:
    puVar2 = param_5;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf70e00();
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x1) {
      func_0x000109026728();
      _objc_retainAutoreleasedReturnValue();
      break;
    }
    if (puVar4 != (undefined *)0x0) goto code_r0x00010604ebe4;
code_r0x00010604ec20:
    func_0x00010604f130();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x3:
    puVar4 = param_5;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bfcfc40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    else {
      puVar3 = param_5;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c06e420();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar4);
      if ((int)puVar5 != 0) {
        puVar2 = param_5;
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010bfcfc40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010c067fc0();
        _objc_release(puVar4);
        _objc_release(puVar2);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puVar3 == (undefined *)0x0) {
          func_0x00010604f1f0();
          _objc_retainAutoreleasedReturnValue();
          break;
        }
        func_0x00010604f208();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_5;
        func_0x00010c0692a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfcfc40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010c25d4c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        goto code_r0x00010604edd0;
      }
    }
    puVar2 = param_5;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf70e00();
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x1) {
      func_0x000109025798();
      _objc_retainAutoreleasedReturnValue();
      break;
    }
    if (puVar4 == (undefined *)0x0) {
      func_0x00010604f220();
      _objc_retainAutoreleasedReturnValue();
      break;
    }
  case (undefined *)0x15:
  case (undefined *)0x16:
  case (undefined *)0x17:
    func_0x00010604f280();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x4:
    func_0x00010604f298();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x5:
    func_0x00010604f2f8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x6:
code_r0x00010604ecdc:
    func_0x00010604f2e0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x7:
    func_0x00010604f100();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x8:
    func_0x00010604f238();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x9:
    func_0x00010604f250();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xa:
    func_0x00010604f268();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xb:
    func_0x00010604f190();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xc:
  case (undefined *)0x19:
    func_0x00010604f1a8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xd:
    func_0x00010604f370();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0xe:
    func_0x00010604f340();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010604ed10;
  case (undefined *)0xf:
    puVar2 = param_5;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf70e00();
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x1) {
      puVar2 = param_4;
      func_0x00010bfb0b60(param_4);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (param_1 <= 0.0) {
        func_0x000109025750();
        _objc_retainAutoreleasedReturnValue();
        break;
      }
      func_0x000109025768();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar4 != (undefined *)0x0) goto code_r0x00010604ecdc;
      puVar2 = param_4;
      func_0x00010bfb0b60(param_4);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (param_1 <= 0.0) {
        func_0x00010604f2c8();
        _objc_retainAutoreleasedReturnValue();
        break;
      }
      func_0x00010604f2b0();
      _objc_retainAutoreleasedReturnValue();
    }
    goto code_r0x00010604ed10;
  case (undefined *)0x10:
    func_0x00010604f310();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x11:
    func_0x00010604f328();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x12:
    func_0x00010604f388();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010604ed10;
  case (undefined *)0x13:
    func_0x00010604f3a0();
    _objc_retainAutoreleasedReturnValue();
code_r0x00010604ed10:
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfb0b60(param_4);
    func_0x00010c0df740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c25d4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
code_r0x00010604edd0:
    _objc_release(puVar5);
    _objc_release(puVar3);
code_r0x00010604ede4:
    _objc_release(puVar2);
    puVar2 = puVar4;
    break;
  case (undefined *)0x14:
    func_0x00010604f148();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined *)0x18:
    puVar2 = param_4;
    func_0x00010bf4cb00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c27a420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((long)puVar3 < 2) {
      func_0x00010604f1c0();
      _objc_retainAutoreleasedReturnValue();
      break;
    }
    func_0x00010604f1d8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c25d4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    goto code_r0x00010604ede4;
  case (undefined *)0x1a:
    puVar2 = param_4;
    func_0x00010bf4cb00(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c27a420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    puVar5 = puVar2;
    func_0x00010c27a440(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf529e0();
    FUN_10604e480(puVar4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x00010604edd0;
  default:
    puVar2 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10604ef00; end: 10604ef1f; +[SCSpectaclesSettingsDeviceStatusHelper redStatusExpandedDescriptionForState:] */

uint FUN_10604ef00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(0x1b < param_3) | 0x2003fc0U >> (ulong)((uint)param_3 & 0x1f) & 1;
}



/* Entry: 10604ef20; end: 10604ef97; +[SCSpectaclesSettingsDeviceStatusHelper redStatusForState:device:] */

undefined8 FUN_10604ef20(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = 1;
  if (param_3 < 0x1c) {
    if ((1L << (param_3 & 0x3f) & 0xdffc01cU) == 0) {
      if (param_3 == 0) {
        uVar1 = param_4;
        func_0x00010c082060(param_4);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 10604ef98; end: 10604f01f; +[SCSpectaclesSettingsDeviceStatusHelper defaultDeviceIcon] */

void FUN_10604ef98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e1ab38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14d100(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10604f020; end: 10604f02f; +[SCSpectaclesSettingsDeviceStatusHelper sortDevices:] */

void FUN_10604f020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c246cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sortedArrayUsingComparator__11266f550,
             &PTR___NSConcreteGlobalBlock_1109095f8);
  return;
}



/* Entry: 10604f030; end: 10604f0ff;  */

ulong FUN_10604f030(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf48920();
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c0692a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c089980();
    lVar2 = param_3;
    func_0x00010c0692a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c089980();
    uVar4 = (ulong)((long)uVar4 < lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 10604f100; end: 10604f3b7;  */

void FUN_10604f100(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3a058;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3a058,
                      &PTR____CFConstantStringClassReference_110e3a078,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10604f3b8; end: 106050703; -[SCSpectaclesDeviceInfoView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10604f3b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_180;
  undefined *puStack_178;
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
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_178 = PTR_PTR_1126ef490;
  puVar1 = &uStack_180;
  uStack_180 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010bdf93a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273da10);
    *(undefined8 **)((long)puVar1 + (long)_DAT_11273da10) = puVar2;
    _objc_release(uVar11);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar22 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar25 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    lVar20 = (long)_DAT_11273da14;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar3;
    _objc_release(uVar11);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    lVar14 = (long)_DAT_11273da18;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar3;
    _objc_release(uVar11);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar14));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    lVar15 = (long)_DAT_11273da1c;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar3;
    _objc_release(uVar11);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar15));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar15));
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    puVar3 = PTR_PTR_1126b6a28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e900();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b6a30;
    _objc_alloc();
    func_0x00010c001640();
    lVar12 = (long)_DAT_11273da20;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar4;
    _objc_release(uVar11);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    lVar16 = (long)_DAT_11273da24;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar4;
    _objc_release(uVar11);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar16));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    lVar17 = (long)_DAT_11273da28;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar4;
    _objc_release(uVar11);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar17));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    puVar4 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = (long)_DAT_11273da2c;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined **)((long)puVar1 + lVar21) = puVar4;
    _objc_release(uVar11);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c1a7f60(uVar11);
    uVar13 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x000109025780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar13);
    _objc_release(uVar11);
    func_0x00010c16e480(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1bec80(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1bec80(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010c1bec80(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar21));
    func_0x00010befbb60(puVar1);
    puVar4 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_11273da30;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar4;
    _objc_release(uVar11);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar19));
    uVar11 = *(undefined8 *)((long)puVar1 + lVar19);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar11);
    _objc_release(puVar4);
    func_0x00010c16e480(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1aab40(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1aab40(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1aab40(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1bec80(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1bec80(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1bec80(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbb60(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar22,uVar23,uVar24,uVar25);
    lVar18 = (long)_DAT_11273da34;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar4;
    _objc_release(uVar11);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar18));
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar24;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar23;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar25;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar22;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar13;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar11);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(uVar22);
    _objc_release(uVar25);
    _objc_release(uVar23);
    _objc_release(uVar24);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar23;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar13;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar25;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar11;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar22);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar25);
    _objc_release(uVar13);
    _objc_release(uVar24);
    _objc_release(uVar23);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar23;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar22;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar25;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar13;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d0 = uVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar25);
    _objc_release(uVar22);
    _objc_release(uVar24);
    _objc_release(uVar23);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar22 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar22;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar11;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010bf348e0(uVar25);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar13);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar11);
    _objc_release(uVar23);
    _objc_release(uVar22);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar22 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar22;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar13;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar11);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar13);
    _objc_release(uVar23);
    _objc_release(uVar22);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar12));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar24;
    func_0x00010bf49420(0x401a000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar11;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar25;
    func_0x00010bf49420(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar23;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar13;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar7;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_108 = uVar22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar22);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar13);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar23);
    _objc_release(uVar25);
    _objc_release(uVar11);
    _objc_release(uVar24);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar21));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar22 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar22;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar11;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar21);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_128 = uVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar13);
    _objc_release(puVar8);
    _objc_release(uVar23);
    _objc_release(uVar11);
    _objc_release(puVar2);
    _objc_release(uVar22);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar24;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar23;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar22;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar11;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar6;
    func_0x00010bf49420(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_138 = uVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar13);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar22);
    _objc_release(puVar8);
    _objc_release(uVar25);
    _objc_release(uVar23);
    _objc_release(puVar2);
    _objc_release(uVar24);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar24 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = uVar23;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = uVar22;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = uVar13;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_158 = uVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar22);
    _objc_release(puVar8);
    _objc_release(uVar25);
    _objc_release(uVar23);
    _objc_release(puVar10);
    _objc_release(uVar24);
    func_0x00010c181f00(0x437a0000,*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c181f00(0x437a0000,*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c181f00(0x443b8000,*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c181f00(0x443b8000,*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c181f00(0x443b8000,*(undefined8 *)((long)puVar1 + lVar16));
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar18));
    _objc_release(puVar4);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar12 = (long)_DAT_11273da2c;
  func_0x00010c1beb60(*(undefined8 *)(puVar3 + lVar12));
  func_0x00010c21e900(*(undefined8 *)(puVar3 + lVar12));
  puVar1 = (undefined8 *)(puVar3 + _DAT_11273da38);
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf708a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 106050704; end: 106050767; -[SCSpectaclesDeviceInfoView _abortButtonClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106050704(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273da2c;
  func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar1),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar1),param_2,0);
  param_1 = param_1 + _DAT_11273da38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf708a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106050768; end: 1060507a3; -[SCSpectaclesDeviceInfoView _settingsButtonClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106050768(long param_1)

{
  param_1 = param_1 + _DAT_11273da38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf708c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060507a4; end: 106050853; -[SCSpectaclesDeviceInfoView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060507a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ef490;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  lVar3 = (long)_DAT_11273da14;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11273da10;
  lVar5 = *(long *)(param_1 + lVar4);
  _objc_release();
  if (lVar1 == lVar5) {
    lVar1 = param_1;
    func_0x00010bdf93a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar2);
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3));
  }
  return;
}



/* Entry: 106050854; end: 10605088f; -[SCSpectaclesDeviceInfoView _tap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106050854(long param_1)

{
  param_1 = param_1 + _DAT_11273da38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf708c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106050890; end: 106050a93; -[SCSpectaclesDeviceInfoView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106050890(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11273da3c;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = param_3;
    func_0x00010bf706e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11273da14),param_2,
                          *(undefined8 *)(param_1 + _DAT_11273da10));
    }
    else {
      lVar3 = param_3;
      func_0x00010bf706e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea3640(param_1,param_2,lVar3);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11273da18),param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c252d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11273da1c),param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf175e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11273da24),param_2,lVar3);
    _objc_release(lVar3);
    func_0x00010bf17500(param_3);
    lVar4 = (long)_DAT_11273da20;
    func_0x00010c16f9e0(*(undefined8 *)(param_1 + lVar4));
    lVar3 = param_3;
    func_0x00010c06e420(param_3);
    func_0x00010c1afe80(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    lVar3 = param_3;
    func_0x00010c0772a0(param_3);
    func_0x00010c1b2660(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    lVar3 = param_3;
    func_0x00010bfb2a80();
    if (lVar3 != 0) {
      lVar3 = param_3;
      func_0x00010bfb2a80(param_3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11273da30),param_2,lVar3 != 3);
      lVar3 = param_3;
      func_0x00010bfb2a80(param_3);
      lVar4 = (long)_DAT_11273da2c;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,lVar3 == 3);
      lVar3 = param_3;
      func_0x00010bfb2a80(param_3);
      func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar4),param_2,lVar3 == 2);
      lVar3 = param_3;
      func_0x00010bfb2a80(param_3);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,lVar3 != 2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106050a94; end: 106050baf; -[SCSpectaclesDeviceInfoView _setDeviceIconWithIconFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106050a94(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273da40;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar2 = param_3;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar1);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106050bb0; end: 106050c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106050bb0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + _DAT_11273da40))) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11273da14));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106050c28; end: 106050caf; -[SCSpectaclesDeviceInfoView _defaultDeviceIcon] */

void FUN_106050c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e1ab38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14d100(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106050cb0; end: 106050cbf; -[SCSpectaclesDeviceInfoView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106050cb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273da3c);
}



/* Entry: 106050cc0; end: 106050cdf; -[SCSpectaclesDeviceInfoView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106050cc0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273da38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106050ce0; end: 106050cf3; -[SCSpectaclesDeviceInfoView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106050ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273da38,param_3);
  return;
}



/* Entry: 106050cf4; end: 106050ddf; -[SCSpectaclesDeviceInfoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106050cf4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273da38);
  _objc_storeStrong(param_1 + _DAT_11273da3c,0);
  _objc_storeStrong(param_1 + _DAT_11273da40,0);
  _objc_storeStrong(param_1 + _DAT_11273da34,0);
  _objc_storeStrong(param_1 + _DAT_11273da30,0);
  _objc_storeStrong(param_1 + _DAT_11273da2c,0);
  _objc_storeStrong(param_1 + _DAT_11273da10,0);
  _objc_storeStrong(param_1 + _DAT_11273da24,0);
  _objc_storeStrong(param_1 + _DAT_11273da28,0);
  _objc_storeStrong(param_1 + _DAT_11273da20,0);
  _objc_storeStrong(param_1 + _DAT_11273da14,0);
  _objc_storeStrong(param_1 + _DAT_11273da1c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273da18,0);
  return;
}



/* Entry: 106050de0; end: 106050fab; -[SCSpectaclesDeviceCellViewModel initWithSerialNumber:deviceIconFuture:name:status:statusTextColor:batteryLevel:isLowBattery:isCharging:batteryLevelText:statusDescription:showConnectionButton:showLoadingIndicator:flightStatus:] */

undefined8 *
FUN_106050de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126ef498;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    puVar1[7] = param_1;
    *(undefined1 *)(puVar1 + 1) = param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_10;
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_14;
    *(undefined1 *)((long)puVar1 + 0xb) = param_14._1_1_;
    puVar1[10] = param_16;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106050fac; end: 106050fcf; -[SCSpectaclesDeviceCellViewModel copyWithZone:] */

undefined8 FUN_106050fac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106050fd0; end: 1060510bf; -[SCSpectaclesDeviceCellViewModel hash] */

undefined8 * FUN_106050fd0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_68 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uStack_70 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_30 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar3;
  func_0x000100505190(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_10605123c:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106051248;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((((*(char *)((long)puVar5 + 8) == param_3[8] && (*(char *)((long)puVar5 + 9) == param_3[9]))
         && (*(char *)((long)puVar5 + 10) == param_3[10])) &&
        ((*(char *)((long)puVar5 + 0xb) == param_3[0xb] &&
         (*(long *)((long)puVar5 + 0x50) == *(long *)(param_3 + 0x50))))))) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x38) - *(double *)(param_3 + 0x38));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x38) + *(double *)(param_3 + 0x38)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if (((((bVar1) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
          ((((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x30), lVar7 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071c60(), (int)lVar7 != 0)))))) &&
         ((lVar7 = *(long *)((long)puVar5 + 0x40), lVar7 == *(long *)(param_3 + 0x40) ||
          (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
        puVar9 = *(undefined1 **)((long)puVar5 + 0x48);
        if (puVar9 != *(undefined1 **)(param_3 + 0x48)) {
          func_0x00010c071ae0();
          goto LAB_106051248;
        }
        goto LAB_10605123c;
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_106051248:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 1060510c0; end: 106051263; -[SCSpectaclesDeviceCellViewModel isEqual:] */

long FUN_1060510c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10605123c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106051248;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
         (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071c60(), (int)lVar4 != 0)))))) &&
         ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x48);
        if (lVar4 != *(long *)(param_3 + 0x48)) {
          func_0x00010c071ae0();
          goto LAB_106051248;
        }
        goto LAB_10605123c;
      }
    }
    lVar4 = 0;
  }
LAB_106051248:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106051264; end: 10605126b; -[SCSpectaclesDeviceCellViewModel serialNumber] */

undefined8 FUN_106051264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10605126c; end: 106051273; -[SCSpectaclesDeviceCellViewModel deviceIconFuture] */

undefined8 FUN_10605126c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106051274; end: 10605127b; -[SCSpectaclesDeviceCellViewModel name] */

undefined8 FUN_106051274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10605127c; end: 106051283; -[SCSpectaclesDeviceCellViewModel status] */

undefined8 FUN_10605127c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106051284; end: 10605128b; -[SCSpectaclesDeviceCellViewModel statusTextColor] */

undefined8 FUN_106051284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10605128c; end: 106051293; -[SCSpectaclesDeviceCellViewModel batteryLevel] */

undefined8 FUN_10605128c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106051294; end: 10605129b; -[SCSpectaclesDeviceCellViewModel isLowBattery] */

undefined1 FUN_106051294(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10605129c; end: 1060512a3; -[SCSpectaclesDeviceCellViewModel isCharging] */

undefined1 FUN_10605129c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1060512a4; end: 1060512ab; -[SCSpectaclesDeviceCellViewModel batteryLevelText] */

undefined8 FUN_1060512a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1060512ac; end: 1060512b3; -[SCSpectaclesDeviceCellViewModel statusDescription] */

undefined8 FUN_1060512ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1060512b4; end: 1060512bb; -[SCSpectaclesDeviceCellViewModel showConnectionButton] */

undefined1 FUN_1060512b4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1060512bc; end: 1060512c3; -[SCSpectaclesDeviceCellViewModel showLoadingIndicator] */

undefined1 FUN_1060512bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1060512c4; end: 1060512cb; -[SCSpectaclesDeviceCellViewModel flightStatus] */

undefined8 FUN_1060512c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1060512cc; end: 106051337; -[SCSpectaclesDeviceCellViewModel .cxx_destruct] */

void FUN_1060512cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106051338; end: 106051357; -[SCSpectaclesBatteryStatusViewConfiguration initWithStrokeColor:] */

void FUN_106051338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff8000000000000,0x3ff8000000000000,0,0x3fe8000000000000,0,0x3ff8000000000000,param_1
             ,PTR_s_initWithStrokeColor_borderWidth__1125f1450,param_3,0);
  return;
}



/* Entry: 106051358; end: 106051417; -[SCSpectaclesBatteryStatusViewConfiguration initWithStrokeColor:borderWidth:cornerRadius:batteryLevelInset:capHeight:capSpacing:capCornerRadius:orientation:] */

undefined1 *
FUN_106051358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ef4a0;
  uStack_70 = param_7;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 106051418; end: 10605141f; -[SCSpectaclesBatteryStatusViewConfiguration strokeColor] */

undefined8 FUN_106051418(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106051420; end: 106051427; -[SCSpectaclesBatteryStatusViewConfiguration borderWidth] */

undefined8 FUN_106051420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106051428; end: 10605142f; -[SCSpectaclesBatteryStatusViewConfiguration cornerRadius] */

undefined8 FUN_106051428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106051430; end: 106051437; -[SCSpectaclesBatteryStatusViewConfiguration batteryLevelInset] */

undefined8 FUN_106051430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106051438; end: 10605143f; -[SCSpectaclesBatteryStatusViewConfiguration capHeight] */

undefined8 FUN_106051438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106051440; end: 106051447; -[SCSpectaclesBatteryStatusViewConfiguration capSpacing] */

undefined8 FUN_106051440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106051448; end: 10605144f; -[SCSpectaclesBatteryStatusViewConfiguration capCornerRadius] */

undefined8 FUN_106051448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106051450; end: 106051457; -[SCSpectaclesBatteryStatusViewConfiguration orientation] */

undefined8 FUN_106051450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106051458; end: 106051463; -[SCSpectaclesBatteryStatusViewConfiguration .cxx_destruct] */

void FUN_106051458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106051464; end: 106051683; -[SCSpectaclesBatteryStatusView initWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106051464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126ef4a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11273da98;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11273da9c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010bf1fc80(param_3);
    func_0x00010c1bdd00(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11273daa0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1bdd00(0,*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11273daa4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1bdd00(0,*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11273daa8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bed58e0(puVar1);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106051684; end: 106051763; -[SCSpectaclesBatteryStatusView _updateComponentColors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106051684(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273da98;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c25dbc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(*(undefined8 *)(param_1 + _DAT_11273da9c),param_2,uVar2);
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010bdf6a60(param_1);
  func_0x00010c19bc00(*(undefined8 *)(param_1 + _DAT_11273daa0),param_2,lVar3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c25dbc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + _DAT_11273daa4),param_2,uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c25dbc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c19bc00(*(undefined8 *)(param_1 + _DAT_11273daa8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


