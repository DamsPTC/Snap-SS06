/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aea0e1c; end: 10aea1497; -[SCLensBackgroundPrefetcher _prefetchActiveLenses:cachedLenses:] */

/* WARNING: Possible PIC construction at 0x00010aea10f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010aea1258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010aea1274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010aea12b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010aea1278) */
/* WARNING: Removing unreachable block (ram,0x00010aea12a8) */
/* WARNING: Removing unreachable block (ram,0x00010aea125c) */
/* WARNING: Removing unreachable block (ram,0x00010aea1270) */
/* WARNING: Removing unreachable block (ram,0x00010aea10f4) */
/* WARNING: Removing unreachable block (ram,0x00010aea111c) */
/* WARNING: Removing unreachable block (ram,0x00010aea1138) */
/* WARNING: Removing unreachable block (ram,0x00010aea1128) */
/* WARNING: Removing unreachable block (ram,0x00010aea113c) */
/* WARNING: Removing unreachable block (ram,0x00010aea1148) */
/* WARNING: Removing unreachable block (ram,0x00010aea1164) */
/* WARNING: Removing unreachable block (ram,0x00010aea12b8) */
/* WARNING: Removing unreachable block (ram,0x00010aea12d4) */
/* WARNING: Removing unreachable block (ram,0x00010aea12dc) */
/* WARNING: Removing unreachable block (ram,0x00010aea12e8) */
/* WARNING: Removing unreachable block (ram,0x00010aea1244) */
/* WARNING: Removing unreachable block (ram,0x00010aea10dc) */

void FUN_10aea0e1c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x10));
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a9760();
    _objc_release(uVar2);
    lVar3 = *(long *)(param_2 + 0x18);
    func_0x00010bf9b120();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf14300();
    _objc_release(uVar2);
    bVar1 = false;
    if ((0.0 < param_1) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 < 1.0;
    }
    lVar4 = lVar3;
    if ((bVar1) && (lVar8 = lVar3, func_0x00010bf529e0(), lVar8 != 0)) {
      func_0x00010bf529e0(lVar3);
      func_0x00010c099060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    uVar2 = param_5;
    func_0x00010c0ba200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(ulong *)(param_2 + 0x30);
    func_0x00010bf1f440();
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010c0990a0();
      if ((int)uVar11 != 0) {
        uVar7 = *(undefined8 *)(param_2 + 0x78);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar7;
        func_0x00010c097c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06b760();
        _objc_release(uVar11);
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
    }
    uVar6 = *(undefined8 *)(param_2 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_2 + 0x38);
    func_0x00010bfae0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    _objc_retain(uVar6);
    lVar3 = lVar8;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_retain(lVar3);
    lVar8 = lVar3;
    func_0x00010bf52a60();
    uVar11 = uRam0000000000000000;
    if (lVar8 != 0) goto code_r0x00010c094540;
    _objc_release(lVar3);
    puVar9 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf07b60();
    if (puVar10 == (undefined *)0x2) {
      lVar8 = lVar3;
      func_0x00010bf529e0();
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if (lVar8 == 0) goto LAB_10aea1408;
      uVar11 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010bf002e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      _objc_retain(lVar3);
      lVar8 = lVar3;
      func_0x00010bf52a60();
      uVar11 = uRam0000000000000000;
      if (lVar8 != 0) goto code_r0x00010c094540;
      _objc_release(lVar3);
      uVar11 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7fa0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar11);
      lVar8 = param_2;
      func_0x00010bdd8680(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_2 + 0x60);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(lVar3);
      lVar12 = lVar8;
      func_0x00010c154b60(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282760();
      lVar13 = lVar8;
      func_0x00010bfb0d80(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282760();
      func_0x00010c0a95a0(uVar11);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(uVar11);
      _objc_release(lVar8);
      _objc_release(puVar9);
    }
    else {
      _objc_release(puVar9);
LAB_10aea1408:
      func_0x00010bde2fc0(param_2);
    }
    _objc_release(lVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(lVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = param_3;
code_r0x00010c094540:
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar11,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10aea1498; end: 10aea149f;  */

void FUN_10aea1498(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10aea14a0; end: 10aea153f;  */

ulong FUN_10aea14a0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar3 = param_2;
    func_0x00010c07f200();
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      uVar2 = param_2;
      func_0x00010c094540(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar3);
      _objc_release(uVar2);
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c072d40(uVar1);
    uVar3 = (ulong)((uint)uVar1 ^ 1);
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 10aea1540; end: 10aea164f; -[SCLensBackgroundPrefetcher _completePrefetchingJobWithReasonForLogging:] */

void FUN_10aea1540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0720c0();
    lVar3 = *(long *)(param_1 + 0x20);
    if ((int)uVar2 == 0) {
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,0,0);
      }
    }
    else if (lVar3 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,2,puVar1);
      _objc_release(puVar1);
    }
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1520();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aea1650; end: 10aea170b; +[SCLensBackgroundPrefetcher _jobConfigFromBackgroundPrefetchConfig:] */

void FUN_10aea1650(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar1 = param_3;
  if (param_3 == 0) {
    lVar1 = param_1;
    func_0x00010bdf91c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_3;
  func_0x00010c1078a0(param_3);
  lVar3 = param_3;
  func_0x00010c083c40();
  uVar4 = 1;
  if ((int)lVar3 != 0) {
    uVar4 = 2;
  }
  lVar3 = param_3;
  func_0x00010c06e440(param_3);
  func_0x00010be463a0(param_1,param_2,(int)lVar2 * 0x3c,uVar4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10aea170c; end: 10aea184b; +[SCLensBackgroundPrefetcher _jobConfigWithTimeInterval:networkConnectivity:batteryState:] */

void FUN_10aea170c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar3 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar2,param_2,puVar3);
  func_0x00010c1b67e0(puVar1,param_2,puVar2);
  puVar4 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  func_0x00010c16fb40(puVar4,param_2,param_5);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010bf06200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c1b66e0(puVar1,param_2,puVar4);
  func_0x00010c198180(puVar1,param_2,3);
  func_0x00010c1b6840(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2f2d8);
  func_0x00010c1b6780(puVar1,param_2,0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aea184c; end: 10aea1897; +[SCLensBackgroundPrefetcher _defaultBackgroundPrefetchConfig] */

void FUN_10aea184c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc058;
  _objc_opt_new(PTR_PTR_1126bc058);
  func_0x00010c195460();
  func_0x00010c1e0560(puVar1,param_2,0x1e0);
  func_0x00010c1b5ba0(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aea1898; end: 10aea18a3; -[SCLensBackgroundPrefetcher dataSyncerIdentifier] */

undefined ** FUN_10aea1898(void)

{
  return &PTR____CFConstantStringClassReference_110f2f2d8;
}



/* Entry: 10aea18a4; end: 10aea190f; -[SCLensBackgroundPrefetcher jobConfig] */

void FUN_10aea18a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c090220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126de4f8;
  func_0x00010be46380(PTR_PTR_1126de4f8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aea1910; end: 10aea1917; -[SCLensBackgroundPrefetcher submitOnRegister] */

undefined8 FUN_10aea1910(void)

{
  return 1;
}



/* Entry: 10aea1918; end: 10aea19cb; -[SCLensBackgroundPrefetcher onSync:] */

void FUN_10aea1918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1540();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aea19cc;
  puStack_50 = &UNK_11085b7b0;
  uStack_38 = 0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10aea19cc; end: 10aea1a67;  */

void FUN_10aea19cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bf14320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bec15f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startRetrievingFixedPrefetchFlo_11258df20);
  return;
}



/* Entry: 10aea1a68; end: 10aea1b1b; -[SCLensBackgroundPrefetcher _fetchScheduledLensMetadataFuture] */

void FUN_10aea1a68(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6d80();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aea1b1c; end: 10aea1b67;  */

void FUN_10aea1b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aea1b68; end: 10aea1d17; -[SCLensBackgroundPrefetcher _startRetrievingFixedPrefetchFlow] */

void FUN_10aea1b68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be13bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9860();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126ae558;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  lStack_58 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfab840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_initWeak(auStack_60,param_1);
  puVar10 = auStack_60;
  _objc_copyWeak(auStack_68);
  func_0x00010c297260(puVar5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume(lVar1);
  _objc_retain(puVar10);
  puVar6 = puVar10;
  func_0x00010bf529e0();
  if (puVar6 == (undefined1 *)0x2) {
    puVar6 = puVar10;
    func_0x00010c0dfd40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar7);
    puVar8 = puVar6;
    func_0x00010bfb0d80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be53920(lVar7);
    _objc_release(puVar8);
    _objc_release(lVar7);
    lVar7 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar7);
    puVar8 = puVar6;
    func_0x00010c154b60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be53920(lVar7);
    _objc_release(puVar8);
    _objc_release(lVar7);
    lVar1 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    puVar8 = puVar6;
    func_0x00010bfb0d80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c154b60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be76f20(lVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar1);
  }
  else {
    puVar6 = (undefined1 *)(lVar1 + 0x20);
    _objc_loadWeakRetained(puVar6);
    func_0x00010bde2fc0();
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 10aea1d18; end: 10aea1e83;  */

void FUN_10aea1d18(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 2) {
    lVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar1;
    func_0x00010bfb0d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be53920(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar1;
    func_0x00010c154b60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be53920(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar2 = lVar1;
    func_0x00010bfb0d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c154b60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be76f20(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bde2fc0();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aea1e84; end: 10aea1f7f; -[SCLensBackgroundPrefetcher _logFixedLensMetadataUpdatedWithLenses:metadataStoreName:] */

void FUN_10aea1e84(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdd8680(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010c154b60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c282760();
  uVar6 = uVar1;
  func_0x00010bfb0d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c282760();
  func_0x00010c0a98a0(uVar2,param_2,uVar3,uVar5 & 0xffffffff,param_4,uVar7 & 0xffffffff);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aea1f80; end: 10aea215b; -[SCLensBackgroundPrefetcher _calculateFixedNonFetchedAndSponsoredLensCountFromLenses:] */

void FUN_10aea1f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10aea2090;
  puStack_40 = &UNK_110c8dd70;
  uStack_38 = uVar4;
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c124d20(param_3,param_2,&puStack_58,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d24f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c124d20(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8ddc0,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d24f0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10aea215c; end: 10aea220f; -[SCLensBackgroundPrefetcher .cxx_destruct] */

void FUN_10aea215c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10aea2210; end: 10aea235f; -[SCLensLatestScheduledMetadataRetriever initWithScheduleNamespaceService:scheduleNamespaceNetworkUpdateProvider:namespacesToPrefetch:circumstanceEngineServices:] */

undefined1 *
FUN_10aea2210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127015c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c067f00();
    *(long *)((long)puVar1 + 0x20) = (long)(int)uVar2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aea2360; end: 10aea2467; -[SCLensLatestScheduledMetadataRetriever getLatestLensesWithCallbackPerformer:completionBlock:] */

void FUN_10aea2360(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aea2468; end: 10aea249b;  */

void FUN_10aea2468(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be20000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aea249c; end: 10aea285f; -[SCLensLatestScheduledMetadataRetriever _getLatestLensesWithCallbackPerformer:completionBlock:] */

void FUN_10aea249c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10aea2860;
  uStack_88 = 0x10aea2870;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_10aea2860;
  uStack_b8 = 0x10aea2870;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_80 = puVar1;
  _objc_opt_new();
  uStack_f8 = 0;
  uStack_e8 = 0x2020000000;
  uStack_e0 = 0;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  puVar1 = PTR_PTR_1126ae810;
  puStack_110 = &uStack_118;
  puStack_f0 = &uStack_f8;
  puStack_b0 = puVar2;
  _objc_opt_new();
  _objc_initWeak(auStack_120,param_1);
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_10aea2878;
  puStack_160 = &UNK_11094c028;
  puStack_140 = &uStack_f8;
  _objc_copyWeak(auStack_128,auStack_120);
  puStack_138 = &uStack_d8;
  _objc_retain(param_3);
  uStack_158 = param_3;
  _objc_retain(param_4);
  uStack_148 = param_4;
  puStack_130 = &uStack_118;
  _objc_retain(puVar1);
  ppuVar3 = &puStack_178;
  puStack_150 = puVar1;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c150040();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_180,auStack_120);
  _objc_retain(ppuVar3);
  uVar5 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251660();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(ppuVar3);
  uVar7 = NEON_ucvtf(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0f7fe0(uVar7,uVar6);
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_180);
  _objc_release(ppuVar3);
  _objc_release(puStack_150);
  _objc_release(uStack_148);
  _objc_release(uStack_158);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_120);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_118,8);
  __Block_object_dispose(&uStack_f8,8);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(puStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aea2860; end: 10aea2877;  */

void FUN_10aea2860(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aea2878; end: 10aea2bff;  */

long FUN_10aea2878(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) == 0) {
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar8 = *(long *)(lVar2 + 0x28);
      _objc_retain(lVar8);
      lVar5 = lVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      if (lVar5 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        do {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(lVar8);
            }
            lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar6 == 0) {
              if (lVar11 == 0) {
                lVar6 = *(long *)(lVar2 + 8);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar6;
                func_0x00010bf273a0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar6);
              }
              lVar6 = lVar11;
              func_0x00010bfb2040();
              _objc_retainAutoreleasedReturnValue();
              if (lVar6 != 0) {
                lVar13 = lVar6;
                func_0x00010bef0bc0();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_10aea2a78;
              }
              lVar13 = 0;
              lVar14 = 0;
            }
            else {
              lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar6;
              func_0x00010bef0bc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar6);
              lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
LAB_10aea2a78:
              lVar14 = lVar6;
              func_0x00010c105c60();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(lVar6);
            if (lVar13 != 0) {
              func_0x00010befa160(puVar3);
            }
            if (lVar14 != 0) {
              func_0x00010befa160(puVar4);
            }
            _objc_release(lVar14);
            _objc_release(lVar13);
            lVar10 = lVar10 + 1;
          } while (lVar5 != lVar10);
          lVar5 = lVar8;
          func_0x00010bf52a60();
        } while (lVar5 != 0);
      }
      _objc_release(lVar8);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar12);
      _objc_retain(puVar4);
      _objc_retain(puVar3);
      func_0x00010c0f7fc0(uVar9);
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
      func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar12);
      _objc_release(lVar11);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010c14ffc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(param_2);
    return lVar7;
  }
  return lVar2;
}



/* Entry: 10aea2c00; end: 10aea2c67;  */

undefined8 FUN_10aea2c00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c14ffc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10aea2c68; end: 10aea2c87;  */

void FUN_10aea2c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aea2c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18),0);
  return;
}



/* Entry: 10aea2c88; end: 10aea2def;  */

void FUN_10aea2c88(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = param_2;
    func_0x00010c0d52c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    uVar4 = param_2;
    func_0x00010c0d52c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c14ffc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    uVar3 = param_2;
    func_0x00010c0d52c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c14ffc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d53e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x28);
    func_0x00010c080280();
    if (iVar1 != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aea2df0; end: 10aea2e0b;  */

void FUN_10aea2df0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010aea2e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10aea2e0c; end: 10aea2e53; -[SCLensLatestScheduledMetadataRetriever .cxx_destruct] */

void FUN_10aea2e0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aea2e54; end: 10aea2e57; -[SCLensMetadataFetcher lastUpdateTimestamp] */

void FUN_10aea2e54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c112930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_previousUpdateTimestamp_112622468);
  return;
}



/* Entry: 10aea2e58; end: 10aea2efb; -[SCLensMetadataFetcher fetchData] */

void FUN_10aea2e58(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be10d60(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10aea2efc; end: 10aea2f2f;  */

void FUN_10aea2efc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be10c60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aea2f30; end: 10aea3023; -[SCLensMetadataFetcher fetchDataIfNecessary] */

void FUN_10aea2f30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010be10d60(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aea3024; end: 10aea3097;  */

void FUN_10aea3024(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be10cc0(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar4,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aea3098; end: 10aea309f; -[SCLensMetadataFetcher clear] */

void FUN_10aea3098(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPreviousUpdateTimestamp__112656428,0);
  return;
}



/* Entry: 10aea30a0; end: 10aea315b; -[SCLensMetadataFetcher _wrappedWithCheckFetchBlock:] */

void FUN_10aea30a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aea315c;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10aea315c; end: 10aea31a3;  */

void FUN_10aea315c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x48) & 1) == 0)) && (*(long *)(param_1 + 0x20) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aea31a4; end: 10aea31df; -[SCLensMetadataFetcher _fetchDataWithFetchBlock:] */

void FUN_10aea31a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010beeb7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aea31e0; end: 10aea327f; -[SCLensMetadataFetcher _fetchDataAfterDelay:withFetchBlock:] */

void FUN_10aea31e0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = 0;
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeb7a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x000107c27d84(uVar1,uVar2,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aea3280; end: 10aea33df; -[SCLensMetadataFetcher _fetchData] */

void FUN_10aea3280(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  *(undefined1 *)(param_1 + 0x48) = 1;
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0945e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10aea33e0;
  puStack_68 = &UNK_110c8de40;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bfab140(uVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10aea33e0; end: 10aea354b;  */

void FUN_10aea33e0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    if (param_3 == 200) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      puVar1 = PTR_PTR_1126de500;
      func_0x00010bfabd40(PTR_PTR_1126de500);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_release(puVar1);
      *(undefined1 *)(param_1 + 0x49) = 1;
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e2800(param_1);
      _objc_release(puVar1);
    }
    else {
      func_0x00010be96ec0(0x4000000000000000,param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aea354c; end: 10aea3637; -[SCLensMetadataFetcher _fetchDataIfNecessary] */

undefined8 FUN_10aea354c(double param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  if ((*(byte *)(param_2 + 0x49) & 1) == 0) {
    uVar1 = *(ulong *)(param_2 + 0x10);
    func_0x00010c22e940();
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf87080(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e2800(param_2,param_3,puVar2);
      _objc_release(puVar2);
    }
    *(undefined1 *)(param_2 + 0x49) = 1;
  }
  lVar3 = param_2;
  func_0x00010c112920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    dVar5 = param_1;
    func_0x00010c0ce3c0(*(undefined8 *)(param_2 + 0x10));
    _objc_release(puVar2);
    if (param_1 < dVar5) {
      uVar4 = 0;
      goto LAB_10aea3618;
    }
  }
  func_0x00010be10c60(param_2);
  uVar4 = 1;
LAB_10aea3618:
  _objc_release(lVar3);
  return uVar4;
}



/* Entry: 10aea3638; end: 10aea37cb; -[SCLensMetadataFetcher _retryFetchDataWithDelay:error:] */

void FUN_10aea3638(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  dVar5 = param_1;
  _objc_retain(param_4);
  if (*(long *)(param_2 + 0x20) == 0) {
LAB_10aea36b0:
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    *(undefined **)(param_2 + 0x20) = puVar1;
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,param_2);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010be10c80(param_1,param_2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    dVar6 = dVar5;
    func_0x00010c0ce5a0(*(undefined8 *)(param_2 + 0x10));
    _objc_release(puVar1);
    if (dVar6 < dVar5) goto LAB_10aea36b0;
  }
  lVar4 = param_4;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0720c0();
  if ((int)lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010bf3ec40();
    _objc_release(lVar4);
    if (lVar2 != -0x3f1) goto LAB_10aea378c;
    lVar4 = *(long *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  _objc_release(lVar4);
LAB_10aea378c:
  _objc_release(param_4);
  return;
}



/* Entry: 10aea37cc; end: 10aea37ff;  */

void FUN_10aea37cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be10cc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aea3800; end: 10aea383b; -[SCLensMetadataFetcher previousUpdateTimestamp] */

void FUN_10aea3800(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aea383c; end: 10aea3897; -[SCLensMetadataFetcher setPreviousUpdateTimestamp:] */

void FUN_10aea383c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aea3898; end: 10aea38f7; -[SCLensMetadataFetchingActiveUserInfoProvider shouldCheckPreviousFetchTimestampForFirstFetch] */

uint FUN_10aea3898(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06b760();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)uVar3 ^ 1;
}



/* Entry: 10aea38f8; end: 10aea396b; -[SCLensMetadataFetchingActiveUserInfoProvider minimumFetchInterval] */

undefined8 FUN_10aea38f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06b760();
  uVar4 = 0x40e5180000000000;
  if ((int)uVar3 == 0) {
    uVar4 = 0x40f5180000000000;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 10aea396c; end: 10aea3977; -[SCLensMetadataFetchingActiveUserInfoProvider minimumRetryFetchInterval] */

undefined8 FUN_10aea396c(void)

{
  return 0x4092c00000000000;
}



/* Entry: 10aea3978; end: 10aea39ef; -[SCLensMetadataFetchingResult initWithValue:] */

undefined1 * FUN_10aea3978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127015d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aea39f0; end: 10aea3a6b; -[SCLensMetadataFetchingResult initWithError:] */

undefined1 * FUN_10aea39f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127015d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aea3a6c; end: 10aea3ab7; +[SCLensMetadataFetchingResult fetchingResultWithValue:] */

void FUN_10aea3a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de500;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c060400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aea3ab8; end: 10aea3b03; +[SCLensMetadataFetchingResult fetchingResultWithError:] */

void FUN_10aea3ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de500;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c010760();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aea3b04; end: 10aea3b87; -[SCLensMetadataFetchingResult matchFetchingResultWithValue:fetchingResultWithError:] */

void FUN_10aea3b04(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10aea3b6c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10aea3b6c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10aea3b6c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aea3b88; end: 10aea3bb7; -[SCLensMetadataFetchingResult .cxx_destruct] */

void FUN_10aea3b88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aea3bb8; end: 10aea3cef;  */

void FUN_10aea3bb8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfe4420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320(puVar1,param_3,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2705a0(*(undefined8 *)(param_2 + 0x20));
  param_1 = param_1 * 1000.0;
  func_0x00010c1eeba0(puVar1,param_3,(long)param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010beffb00(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c214be0(puVar1,param_3,(long)(param_1 * 1000.0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_3,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126de508;
  _objc_alloc(PTR_PTR_1126de508);
  func_0x00010c058f80();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aea3cf0; end: 10aea3d9b; -[SCLastMixerUpdateDateProvider initWithMixerDataProvider:scheduleNamespace:] */

undefined1 *
FUN_10aea3cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127015e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    func_0x00010bec7da0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aea3d9c; end: 10aea3dd7; -[SCLastMixerUpdateDateProvider lastUpdateDate] */

void FUN_10aea3d9c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aea3dd8; end: 10aea3f5f; -[SCLastMixerUpdateDateProvider _subscribeToMixerDataProvider:namespace:] */

void FUN_10aea3dd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0d5380(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_68;
  _objc_copyWeak(auStack_70,puVar5);
  lVar3 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(param_3);
  _objc_retain(puVar5);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  puVar4 = puVar5;
  func_0x00010c08a660(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010bea5260(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aea3f60; end: 10aea3fcf;  */

void FUN_10aea3f60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c08a660(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bea5260(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aea3fd0; end: 10aea400f; -[SCLastMixerUpdateDateProvider _setLastUpdateDate:] */

void FUN_10aea3fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 10aea4010; end: 10aea403f; -[SCLastMixerUpdateDateProvider .cxx_destruct] */

void FUN_10aea4010(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aea4040; end: 10aea40b3; -[SCMixerFetchEventMapper initWithFetchEventObservable:] */

undefined1 * FUN_10aea4040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127015f0;
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



/* Entry: 10aea40b4; end: 10aea40c3; -[SCMixerFetchEventMapper scheduleNetworkUpdateObservable] */

void FUN_10aea40b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_flatMap__1125ca340,
             &PTR___NSConcreteGlobalBlock_110c8df50);
  return;
}



/* Entry: 10aea40c4; end: 10aea411f;  */

void FUN_10aea40c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de410;
  func_0x00010be82960(PTR_PTR_1126de410,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010bfba9e0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aea4120; end: 10aea4227; +[SCMixerFetchEventMapper _processedNamespaceDataFromFetchEvent:] */

void FUN_10aea4120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aea4228;
  uStack_30 = 0x10aea4238;
  uStack_28 = 0;
  func_0x00010c0bf9c0(param_3);
  puVar1 = (undefined *)puStack_48[5];
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aea4228; end: 10aea423f;  */

void FUN_10aea4228(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10aea4240; end: 10aea4277;  */

void FUN_10aea4240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aea4278; end: 10aea4287;  */

void FUN_10aea4278(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be82990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de410,PTR_s__processedNamespaceDataFromInter_11257e400,param_2);
  return;
}



/* Entry: 10aea4288; end: 10aea4553; +[SCMixerFetchEventMapper _processedNamespaceDataFromInternalData:] */

void FUN_10aea4288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c069460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef09a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c105c40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be4c2a0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126de338;
  _objc_alloc();
  uVar2 = uVar1;
  func_0x00010c14ffc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c27d100();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c08a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c0da7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf93ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010c089660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bfa81c0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041c20(puVar5,param_2,uVar2,uVar3,uVar4,param_1,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11
                      ,uVar12);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar13 = PTR_PTR_1126de510;
  _objc_alloc(PTR_PTR_1126de510);
  uVar2 = param_3;
  func_0x00010bf27240(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c02dce0(puVar13,param_2,puVar5,uVar2);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10aea4554; end: 10aea456b;  */

void FUN_10aea4554(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__lensMetadataFromInternalItem__1125706b0,param_2)
  ;
  return;
}



/* Entry: 10aea456c; end: 10aea46e3; +[SCMixerFetchEventMapper _lensesMapFromLenses:] */

void FUN_10aea456c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
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
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar6 = *(long *)(lStack_118 + lVar8 * 8);
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010c08fa60();
        if (lVar3 != 0) {
          func_0x00010c1d0640(puVar1);
        }
        _objc_release(lVar6);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_10aea46e4;
    puStack_140 = puVar1;
    lStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puStack_168 = &uStack_170;
    uStack_170 = 0;
    uStack_160 = 0x3032000000;
    pcStack_158 = FUN_10aea4228;
    uStack_150 = 0x10aea4238;
    uStack_148 = 0;
    func_0x00010c0bd220(puVar4);
    puVar5 = (undefined *)puStack_168[5];
    _objc_retain(puVar5);
    __Block_object_dispose(&uStack_170,8);
    _objc_release(uStack_148);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aea46e4; end: 10aea47c3; +[SCMixerFetchEventMapper _lensMetadataFromInternalItem:] */

void FUN_10aea46e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10aea4228;
  uStack_30 = 0x10aea4238;
  uStack_28 = 0;
  func_0x00010c0bd220(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aea47c4; end: 10aea47fb;  */

void FUN_10aea47c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aea47fc; end: 10aea4807; -[SCMixerFetchEventMapper .cxx_destruct] */

void FUN_10aea47fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aea4808; end: 10aea4963; -[SCMixerMetadataFetcher fetchNamespaces:requestParams:] */

void FUN_10aea4808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c297260(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aea4964; end: 10aea4ac7;  */

void FUN_10aea4964(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if (param_3 != 0) {
      func_0x00010bf43ca0(uVar2);
      goto LAB_10aea4a60;
    }
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99440(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010be12c80(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(puVar3);
LAB_10aea4a60:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10aea4ac8; end: 10aea4adf;  */

void FUN_10aea4ac8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10aea4ae0; end: 10aea4ddb; -[SCMixerMetadataFetcher _fetchNamespaces:requestFeatureInfoProviders:requestParams:success:failure:] */

void FUN_10aea4ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_4;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c135500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99440(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,puVar4);
    }
  }
  else {
    puVar4 = *(undefined **)(param_1 + 8);
    _objc_retain();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    uVar5 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(uVar1);
    _objc_retain(param_6);
    _objc_retain(uVar7);
    _objc_retain(uVar6);
    _objc_retain(puVar4);
    _objc_retain(uVar9);
    _objc_retain(uVar8);
    _objc_retain(uVar5);
    func_0x00010c297260(lVar3);
    _objc_release(param_6);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_7);
    _objc_release(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10aea4ddc; end: 10aea4de3;  */

void FUN_10aea4ddc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_namespaceId_112612f10);
  return;
}



/* Entry: 10aea4de4; end: 10aea5343;  */

void FUN_10aea4de4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126de518;
  if (param_2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99440(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,puVar3);
    }
  }
  else {
    lVar2 = param_2;
    func_0x00010c0d7d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf888c0();
    lVar6 = param_2;
    func_0x00010c0d7d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88880();
    lVar4 = param_2;
    func_0x00010c0d7d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1206a0();
    func_0x00010c137140(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
    puVar1 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x40);
    func_0x00010c28d880(*(undefined8 *)(param_1 + 0x30));
    func_0x00010befd020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010bef9140(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99440(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x68);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,puVar7);
      }
    }
    else {
      func_0x00010bf5fd80(*(undefined8 *)(param_1 + 0x50));
      puVar7 = *(undefined **)(param_1 + 0x50);
      _objc_retain(puVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(param_1 + 0x60);
      _objc_retain(uVar9);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar10);
      uVar11 = *(undefined8 *)(param_1 + 0x70);
      _objc_retain(uVar11);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar12);
      uVar13 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar13);
      uVar14 = *(undefined8 *)(param_1 + 0x68);
      _objc_retain(uVar14);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      func_0x00010bfa8b80(lVar2);
      _objc_release(uVar5);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    _objc_release(puVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 10aea5344; end: 10aea535b; +[SCMixerMetadataFetcher _internalNamespaceDataFromResponseData:] */

void FUN_10aea5344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8e0d0);
  return;
}



/* Entry: 10aea535c; end: 10aea53d3; -[SCMixerMetadataFetcher .cxx_destruct] */

void FUN_10aea535c(long param_1)

{
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



/* Entry: 10aea53d4; end: 10aea53d7; -[SCMixerNetworkConfigProvider host] */

void FUN_10aea53d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be60af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mixerHost_112575c58);
  return;
}



/* Entry: 10aea53d8; end: 10aea53e3; -[SCMixerNetworkConfigProvider timeoutSec] */

undefined8 FUN_10aea53d8(void)

{
  return 0x404e000000000000;
}



/* Entry: 10aea53e4; end: 10aea53eb; -[SCMixerNetworkConfigProvider aliveInBackgroundSec] */

undefined8 FUN_10aea53e4(void)

{
  return 0x403e000000000000;
}



/* Entry: 10aea53ec; end: 10aea55c3; -[SCMixerNetworkConfigProvider additionalHeadersForMode:] */

void FUN_10aea53ec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 < 4) {
    func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(&PTR_PTR_110c8e0f0)[param_3],
                        &PTR____CFConstantStringClassReference_110f2f418);
  }
  lVar2 = param_1;
  func_0x00010be97aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar2);
  if ((int)puVar3 != 0) {
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110dadcb8);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110deb478);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110dbeff8);
  puVar4 = PTR_PTR_1126bbf90;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c091f60(uVar7);
  func_0x00010c091fa0(puVar4,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bbf90;
  func_0x00010c091f80(PTR_PTR_1126bbf90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aea55c4; end: 10aea56af; -[SCMixerNetworkConfigProvider _mixerHost] */

void FUN_10aea55c4(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = param_1;
  func_0x00010be60b20();
  if ((long)ppuVar1 < 3) {
    if (ppuVar1 == (undefined **)0x0) {
      param_1 = &PTR____CFConstantStringClassReference_110dd5138;
      goto LAB_10aea56a0;
    }
    if (ppuVar1 == (undefined **)0x1) goto LAB_10aea5630;
    if (ppuVar1 == (undefined **)0x2) {
      param_1 = &PTR____CFConstantStringClassReference_110db1dd8;
      goto LAB_10aea56a0;
    }
  }
  else {
    if (ppuVar1 == (undefined **)0x3) {
LAB_10aea5630:
      param_1 = &PTR____CFConstantStringClassReference_110f2f478;
      goto LAB_10aea56a0;
    }
    if (ppuVar1 == (undefined **)0x4) {
      func_0x00010b0ec730();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar1);
      param_1 = ppuVar1;
      if ((int)puVar2 == 0) {
        param_1 = &PTR____CFConstantStringClassReference_110f2f478;
      }
      _objc_retain(param_1);
      _objc_release(ppuVar1);
      goto LAB_10aea56a0;
    }
    if (ppuVar1 == (undefined **)0x5) {
      func_0x00010be60b00(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10aea56a0;
    }
  }
  param_1 = &PTR____CFConstantStringClassReference_110def498;
  _objc_retain(&PTR____CFConstantStringClassReference_110def498);
LAB_10aea56a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10aea56b0; end: 10aea56b7; -[SCMixerNetworkConfigProvider _mixerHostTweakValue] */

undefined8 FUN_10aea56b0(void)

{
  return 5;
}



/* Entry: 10aea56b8; end: 10aea5747; -[SCMixerNetworkConfigProvider _mixerHostFromCOF] */

undefined ** FUN_10aea56b8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110f2f5f8,
                      &PTR____CFConstantStringClassReference_110def558,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd5138;
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110def538);
    ppuVar3 = &PTR____CFConstantStringClassReference_110db1dd8;
    if ((int)uVar2 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd5138;
    }
  }
  _objc_release(uVar1);
  return ppuVar3;
}



/* Entry: 10aea5748; end: 10aea57d7; -[SCMixerNetworkConfigProvider _routingTag] */

void FUN_10aea5748(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = param_1;
  func_0x00010b0ec73c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d500(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar2);
  if ((int)puVar3 != 0) {
    func_0x00010be97ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_1;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar2);
  uVar1 = uVar2;
  if ((int)puVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aea57d8; end: 10aea57ef; -[SCMixerNetworkConfigProvider _routingTagFromCOF] */

void FUN_10aea57d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_feat_112675010,
             &PTR____CFConstantStringClassReference_110f2f618,0);
  return;
}



/* Entry: 10aea57f0; end: 10aea581f; -[SCMixerNetworkConfigProvider .cxx_destruct] */

void FUN_10aea57f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aea5820; end: 10aea599b; -[SCMixerRequestProvider initWithUserAdIdProvider:cachedDataProvider:bandwidthEstimator:networkConnectivityMonitor:interactionHistoryProvider:locationRequestProvider:userCountryCodeProvider:] */

undefined1 *
FUN_10aea5820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112701608;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aea599c; end: 10aea5e3f; -[SCMixerRequestProvider requestForNamespaces:requestFeatureInfoProviders:params:requestUUID:] */

void FUN_10aea599c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126de470;
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdd80e0(puVar1,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126de528;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126de470;
  func_0x00010be61ea0(PTR_PTR_1126de470,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  func_0x00010c1cb160(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126de470;
  uVar13 = param_5;
  func_0x00010bf27360(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd8100(puVar3,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  func_0x00010c175480(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar13);
  uVar13 = param_4;
  func_0x00010bf00560(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar13;
  func_0x00010bf43280(uVar13,param_2,&PTR___NSConcreteGlobalBlock_110c8e130);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar6 = PTR_PTR_1126de530;
  func_0x00010c0cb140(PTR_PTR_1126de530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126de470;
  func_0x00010bdc96e0(PTR_PTR_1126de470,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164240(puVar6,param_2,puVar3);
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c135be0(uVar7,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1abd20(puVar6,param_2,1);
  func_0x00010c1abca0(puVar6,param_2,1);
  func_0x00010c219340(puVar6,param_2,2);
  func_0x00010c1ebf20(puVar2,param_2,puVar6);
  puVar3 = PTR_PTR_1126de470;
  uVar13 = param_5;
  func_0x00010c0d53c0(param_5);
  func_0x00010be90d00(puVar3,param_2,uVar13);
  func_0x00010c1cb0e0(puVar2,param_2,puVar3);
  puVar3 = PTR_PTR_1126de470;
  uVar13 = *(undefined8 *)(param_1 + 8);
  lVar8 = param_1;
  func_0x00010bdea040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60c00(puVar3,param_2,uVar5,uVar7,uVar13,lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  func_0x00010c21e7c0(puVar2,param_2,puVar3);
  puVar4 = PTR_PTR_1126de470;
  func_0x00010be62a60(PTR_PTR_1126de470,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc3e0(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126de470;
  func_0x00010bde9cc0(PTR_PTR_1126de470,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c1ebd20(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126de470;
  uVar13 = param_5;
  func_0x00010bf4f820(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76d00(puVar4,param_2,uVar5,uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  puVar9 = PTR_PTR_1126de470;
  uVar13 = param_5;
  func_0x00010bf4f820(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be85dc0(puVar9,param_2,uVar13,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  func_0x00010c183640(puVar2,param_2,puVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010c1425a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8020(puVar2,param_2,uVar13);
  _objc_release(uVar13);
  _objc_release(uVar10);
  puVar11 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10aea5e48;
  puStack_78 = &UNK_1108599d8;
  puStack_70 = puVar2;
  puStack_68 = puVar11;
  _objc_retain();
  _objc_retain(puVar2);
  func_0x00010c297260(puVar1,param_2,&puStack_90,0);
  puVar12 = puVar11;
  func_0x00010bfbc3e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_68);
  _objc_release(puStack_70);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10aea5e40; end: 10aea5e47;  */

void FUN_10aea5e40(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14fff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_scheduleNamespaceRequestFeatureI_112631a18);
  return;
}



/* Entry: 10aea5e48; end: 10aea5fa3;  */

void FUN_10aea5e48(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    _objc_retain(param_2);
    uVar1 = param_2;
    func_0x00010c0b8600(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0b8600(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar3 = uVar1;
    func_0x00010c0d3c80(uVar1);
    func_0x00010c175460(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c0d3c80(uVar2);
    func_0x00010c175440(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10aea5fa4; end: 10aea600b;  */

void FUN_10aea5fa4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_2;
    func_0x00010bcb56d8(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aea600c; end: 10aea612f; +[SCMixerRequestProvider _rankingContextualInfoWithContextualInfo:predictedContext:] */

void FUN_10aea600c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126de540;
  if (param_3 == 0 && param_4 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0cb140(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126de470;
    lVar1 = param_3;
    func_0x00010bf2b540(param_3);
    func_0x00010be85d60(puVar2,param_2,lVar1);
    func_0x00010c177420(puVar3,param_2,puVar2);
    puVar2 = PTR_PTR_1126de470;
    lVar1 = param_3;
    func_0x00010c2439e0(param_3);
    func_0x00010be85e20(puVar2,param_2,lVar1);
    func_0x00010c2059c0(puVar3,param_2,puVar2);
    puVar2 = PTR_PTR_1126de470;
    lVar1 = param_3;
    func_0x00010c243400(param_3);
    func_0x00010be85e00(puVar2,param_2,lVar1);
    func_0x00010c2056c0(puVar3,param_2,puVar2);
    func_0x00010c1dfca0(puVar3,param_2,param_4);
    _objc_release(param_4);
    lVar1 = param_3;
    func_0x00010c105ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1df9a0(puVar3,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


