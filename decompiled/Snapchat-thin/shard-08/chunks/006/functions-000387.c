/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062d43d0; end: 1062d43df; -[SCContextAlbumArtView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062d43d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112745294),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 1062d43e0; end: 1062d444f; -[SCContextAlbumArtView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062d43e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112745298,0);
  _objc_storeStrong(param_1 + _DAT_112745294,0);
  _objc_storeStrong(param_1 + _DAT_112745290,0);
  _objc_storeStrong(param_1 + _DAT_112745288,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274528c,0);
  return;
}



/* Entry: 1062d4450; end: 1062d44ab;  */

void FUN_1062d4450(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  dRam00000001136c35d0 = param_1 * 24.0;
  dRam00000001136c35d8 = param_1 * 24.0;
  return;
}



/* Entry: 1062d44ac; end: 1062d45ff; -[SCContextWaveformView initWithWaveformCount:minHeight:maxHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062d44ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f0ce8;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274529c) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127452a0) = param_2;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    if (0 < param_5) {
      lVar6 = 0;
      do {
        puVar3 = (undefined1 *)puVar1;
        func_0x00010c2a2b20(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(puVar2);
        _objc_release(puVar3);
        puVar3 = (undefined1 *)puVar1;
        func_0x00010c08c0e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c0dfd40(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb20(puVar3);
        _objc_release(puVar4);
        _objc_release(puVar3);
        lVar6 = lVar6 + 1;
      } while (param_5 != lVar6);
    }
    puVar4 = puVar2;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127452a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127452a4) = puVar4;
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062d4600; end: 1062d474b; -[SCContextWaveformView setTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1062d4600(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  long lStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_e0 = PTR_PTR_1126f0ce8;
  lStack_e8 = param_1;
  _objc_msgSendSuper2(&lStack_e8,PTR_s_setTintColor__112663280,param_3);
  dVar7 = 0.0;
  lVar4 = *(long *)(param_1 + _DAT_1127452a4);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      _objc_retainAutorelease(param_3);
      func_0x00010bdc0fe0();
      func_0x00010c16e440(uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return dVar7;
  }
  ___stack_chk_fail();
  uVar3 = *(ulong *)(param_3 + _DAT_1127452a4);
  func_0x00010bf529e0(uVar3);
  return (double)((float)uVar3 * 4.0 + -2.0);
}



/* Entry: 1062d474c; end: 1062d4793; -[SCContextWaveformView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1062d474c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127452a4);
  func_0x00010bf529e0(uVar1);
  return (double)((float)uVar1 * 4.0 + -2.0);
}



/* Entry: 1062d4794; end: 1062d4873; -[SCContextWaveformView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062d4794(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  lVar5 = (long)_DAT_1127452a4;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c2a2b00((double)((float)(uVar4 & 0xffffffff) * 0.2),param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20(uVar2);
      _objc_release(lVar1);
      _objc_release(uVar2);
      uVar4 = uVar4 + 1;
      uVar3 = *(ulong *)(param_1 + lVar5);
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 1062d4874; end: 1062d4937; -[SCContextWaveformView waveformWithPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062d4874(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = (long)_DAT_11274529c;
  dVar5 = *(double *)(param_1 + _DAT_1127452a0);
  dVar6 = *(double *)(param_1 + lVar1);
  puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
  _objc_opt_new(PTR__OBJC_CLASS___CALayer_1126b1750);
  func_0x00010c19f0e0((double)((float)param_3 * 4.0),(dVar5 - dVar6) * 0.5,0x4000000000000000,
                      *(undefined8 *)(param_1 + lVar1));
  func_0x00010c1842e0(0x3ff0000000000000,puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar2,param_2,puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062d4938; end: 1062d4a87; -[SCContextWaveformView waveformAnimationWithDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062d4938(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                      &PTR____CFConstantStringClassReference_110e48d78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_2 + _DAT_11274529c),PTR__OBJC_CLASS___NSNumber_1126ae570
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_2 + _DAT_1127452a0),PTR__OBJC_CLASS___NSNumber_1126ae570
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c192d40(0x3fe0000000000000,puVar1);
  dVar3 = 5.19391626240373e-315;
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc0c0(0x3ea8f5c3,0,0x3f2b851f,0x3f800000,
                      PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  _CACurrentMediaTime();
  func_0x00010c16fd40(param_1 + dVar3,puVar1);
  func_0x00010c1eabe0(0x7f800000,puVar1);
  func_0x00010c16d4c0(puVar1,param_3,1);
  func_0x00010c1ea580(puVar1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062d4a88; end: 1062d4a9b; -[SCContextWaveformView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062d4a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127452a4,0);
  return;
}



/* Entry: 1062d4a9c; end: 1062d4c0f;  */

void FUN_1062d4a9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126c9740;
  _objc_opt_class(PTR_PTR_1126c9740);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e48d98,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062d4c10; end: 1062d4f63; -[SCPayoutsContextCreator initWithValdiBlizzardLoggingServices:circumstanceEngine:valdiCOFStoresServices:composerNetworkingBridgeServices:runtime:notificationServices:simpleWebBrowserScopeExposer:taskManagementServices:userSession:userStorageServices:payoutsServices:userUnifiedGRPCServices:navigator:appHandler:composerCoreUIServices:] */

undefined8 *
FUN_1062d4c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f0cf0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
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
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar2);
  }
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1062d4f64; end: 1062d552b; -[SCPayoutsContextCreator createPayoutsContext] */

void FUN_1062d4f64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126c9748;
  _objc_alloc_init(PTR_PTR_1126c9748);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1cf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d8300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc960(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f27718();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f27828();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b0ec0;
  _objc_alloc(PTR_PTR_1126b0ec0);
  uVar3 = uVar4;
  func_0x00010bf162c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c150960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c142020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7180(puVar6);
  func_0x00010c161400(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010c1cba60(puVar1);
  func_0x00010c199440(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfcfa80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4d00(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126ae728;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfcfa80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4ce0(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar9);
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar7);
  _objc_retain(uVar2);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9750;
  _objc_alloc(PTR_PTR_1126c9750);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c2923e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c1067a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_1062d84b8();
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf46560(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019660(puVar10);
  func_0x00010c1d9e60(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf3f680(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0dc680(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce4c0(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161e00(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062d552c; end: 1062d55c3;  */

void FUN_1062d552c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    func_0x00010bfcfa00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1062d55c4; end: 1062d569b; -[SCPayoutsContextCreator .cxx_destruct] */

void FUN_1062d55c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 1062d569c; end: 1062d5767; -[SCPayoutsExternalAppHandler initWithSIGNotificationsServices:simpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:] */

undefined1 *
FUN_1062d569c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0cf8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062d5768; end: 1062d577b; -[SCPayoutsExternalAppHandler openEmailApp] */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_1062d5768(void)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  code *pcVar4;
  
  puVar1 = PTR___dispatch_main_q_11034be20;
  ppuVar3 = &PTR___NSConcreteGlobalBlock_11091ae10;
  func_0x000107c61174();
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_11091ae10);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar2 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      pcVar4 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar4;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar4 = pcRam0000000113817cd0;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_11091ae10);
  func_0x000107c61180();
  (*pcVar4)(puVar1,ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 1062d577c; end: 1062d57eb;  */

void FUN_1062d577c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110db1578);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062d57ec; end: 1062d58f7; -[SCPayoutsExternalAppHandler openUrlWithUrl:] */

void FUN_1062d57ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      _objc_initWeak(auStack_38,param_1);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1062d58f8;
      puStack_50 = &UNK_110841fb0;
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(puVar2);
      puStack_48 = puVar2;
      func_0x0001000d76cc("APPSTORE",&puStack_68);
      _objc_release(puStack_48);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062d58f8; end: 1062d598b;  */

void FUN_1062d58f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    func_0x00010c27ece0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf24600(uVar4,param_2,uVar3,lVar2,lVar1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x10),param_2,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062d598c; end: 1062d5b17; -[SCPayoutsExternalAppHandler copyToClipboardWithLabel:text:successMessage:] */

void FUN_1062d598c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1062d5a68;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = param_4;
  uStack_48 = param_1;
  uStack_40 = param_5;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1062d5b18; end: 1062d5b23; -[SCPayoutsExternalAppHandler pushToValdiMarshaller:] */

undefined8 FUN_1062d5b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107a2afa8(param_3,param_1);
  func_0x000107a2af94();
  func_0x000107a2af00();
  func_0x000107a2aedc();
  return param_3;
}



/* Entry: 1062d5b24; end: 1062d5b6b; -[SCPayoutsExternalAppHandler didDismiss] */

void FUN_1062d5b24(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1062d5b6c; end: 1062d5b73; -[SCPayoutsExternalAppHandler uiContainer] */

undefined8 FUN_1062d5b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062d5b74; end: 1062d5ba3; -[SCPayoutsExternalAppHandler setUiContainer:] */

void FUN_1062d5b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062d5ba4; end: 1062d5beb; -[SCPayoutsExternalAppHandler .cxx_destruct] */

void FUN_1062d5ba4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062d5bec; end: 1062d5ed7; -[SCPayoutsFetcherImpl initWithGrpcService:userId:didPassSecurityCheck:routeTag:configuration:] */

undefined1 *
FUN_1062d5bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,long param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f0d00;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    if (param_5 == 0) {
      uVar4 = *(undefined8 *)((long)puVar2 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c230820();
      *(char *)((long)puVar2 + 0x18) = (char)uVar3;
      _objc_release(uVar4);
    }
    else {
      *(undefined1 *)((long)puVar2 + 0x18) = 1;
    }
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_7;
    _objc_release(uVar3);
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf53280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daf278;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar1 = ppuVar6;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    puVar8 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c106d20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010c1d0640(puVar7);
    puVar8 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar8);
    func_0x00010c1d0640(puVar7);
    func_0x00010c1d0640(puVar7);
    _objc_release(ppuVar1);
    if (param_6 != 0) {
      func_0x00010c1d0640(puVar7);
    }
    puVar8 = PTR_PTR_1126ae748;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar8;
    _objc_release(uVar3);
    _objc_release(puVar7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1062d5ed8; end: 1062d5faf; -[SCPayoutsFetcherImpl getCrystalsSummaryWithCallback:] */

void FUN_1062d5ed8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010be1e340(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062d5fb0; end: 1062d6057;  */

void FUN_1062d5fb0(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010be1e320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e48e38;
    if (lVar3 != 0) {
      ppuVar1 = (undefined **)0x0;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar3,ppuVar1);
    _objc_release(lVar3);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),0,&PTR____CFConstantStringClassReference_110e48e38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062d6058; end: 1062d6107; -[SCPayoutsFetcherImpl startCashoutWithEarnings:timestamp:callback:valueCents:] */

void FUN_1062d6058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_6);
  if (param_6 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1062d6108;
    puStack_50 = &UNK_11091ae60;
    _objc_retain(param_6);
    lStack_48 = param_6;
    func_0x00010bebfa80(param_1,param_2,param_3,param_4,param_5,&puStack_68);
    _objc_release(lStack_48);
  }
  _objc_release(param_6);
  return;
}



/* Entry: 1062d6108; end: 1062d611b;  */

void FUN_1062d6108(long param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001062d6118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3 != 0);
  return;
}



/* Entry: 1062d611c; end: 1062d623b; -[SCPayoutsFetcherImpl getCrystalsActivityWithPayoutDate:cashoutDate:pageSize:callback:] */

void FUN_1062d611c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    _objc_initWeak(auStack_58,param_2);
    _objc_retain(param_6);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010be1cb80(param_1,param_2);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1062d623c; end: 1062d62e3;  */

void FUN_1062d623c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010be1e300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e48e58;
    if (lVar3 != 0) {
      ppuVar1 = (undefined **)0x0;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar3,ppuVar1);
    _objc_release(lVar3);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),0,&PTR____CFConstantStringClassReference_110e48e38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062d62e4; end: 1062d65e3; -[SCPayoutsFetcherImpl _getCrystalsInfoFromSummary:] */

void FUN_1062d62e4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c230780();
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb52c0();
    _objc_release(uVar3);
    puVar12 = PTR_PTR_1126c9758;
    _objc_alloc();
    lVar5 = param_3;
    func_0x00010bf12680(param_3);
    lVar6 = param_3;
    func_0x00010bf126a0(param_3);
    iVar13 = (int)uVar2;
    dVar14 = 260000.0;
    if (iVar13 == 0) {
      dVar14 = (double)(long)(double)lVar5;
    }
    dVar15 = 260000.0;
    if (iVar13 == 0) {
      dVar15 = (double)(long)(double)lVar6;
    }
    lVar5 = param_3;
    func_0x00010c0f6b00(param_3);
    lVar6 = param_3;
    func_0x00010c0e8000();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0e8160();
    FUN_1062d6cd0(uVar4,lVar5,lVar7);
    lVar5 = param_3;
    func_0x00010c0e8000(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0e7f40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c0e8000(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010beecc60();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf2c620(param_3);
    }
    lVar10 = param_3;
    func_0x00010c0e8000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121ec0();
    func_0x00010c006f20(dVar14,dVar15,puVar12);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar6);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (iVar13 == 0) {
      func_0x00010c0f7400(param_3);
      func_0x00010c0df7c0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1da200(puVar12);
      _objc_release(puVar11);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf32f40(param_3);
      func_0x00010c0df7c0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179f20(puVar12);
      _objc_release(puVar11);
    }
    else {
      func_0x00010c1da200(puVar12);
      func_0x00010c179f20(puVar12);
    }
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0f7540(param_3);
    func_0x00010c0df7c0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da220(puVar12);
    _objc_release(puVar11);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1062d65e4; end: 1062d66f7; -[SCPayoutsFetcherImpl _getCrystalsActivity:] */

void FUN_1062d65e4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126c9760;
  puVar7 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c230780();
    lVar4 = param_3;
    func_0x00010bef1380(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_1062d6d80(uVar3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0d9d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0d9920(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c00ece0(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar3);
    _objc_release(lVar4);
    _objc_release(uVar2);
    puVar7 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1062d66f8; end: 1062d67e3; -[SCPayoutsFetcherImpl _getCrystalsSummaryDataWithHandler:] */

void FUN_1062d66f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c9768;
  _objc_opt_class(PTR_PTR_1126c9768);
  func_0x00010c0199c0(puVar1,param_2,param_3,puVar2);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c9770;
  _objc_alloc_init(PTR_PTR_1126c9770);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e48e78,puVar4,
                      *(undefined8 *)(param_1 + 0x10),puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062d67e4; end: 1062d6947; -[SCPayoutsFetcherImpl _startCashOutWithEarnings:timestamp:valueCents:handler:] */

void FUN_1062d67e4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c230780();
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    puVar2 = PTR_PTR_1126c9778;
    _objc_alloc_init(PTR_PTR_1126c9778);
    func_0x00010c179ea0();
    func_0x00010c179ee0(puVar2);
    func_0x00010c179ec0(puVar2);
    puVar3 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126c9780);
    func_0x00010c0199c0(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062d6948; end: 1062d6a87; -[SCPayoutsFetcherImpl _getActivityDataWithPayoutDate:cashoutDate:pageSize:handler:] */

void FUN_1062d6948(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c9788;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1d9e20();
  _objc_release(param_4);
  func_0x00010c179f00(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c1d8660(puVar1,param_3,(long)param_1);
  puVar2 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  puVar3 = PTR_PTR_1126c9790;
  _objc_opt_class(PTR_PTR_1126c9790);
  func_0x00010c0199c0(puVar2,param_3,param_6,puVar3);
  _objc_release(param_6);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar4,param_3,&PTR____CFConstantStringClassReference_110e48eb8,puVar3,
                      *(undefined8 *)(param_2 + 0x10),puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062d6a88; end: 1062d6a93; -[SCPayoutsFetcherImpl pushToValdiMarshaller:] */

undefined8 FUN_1062d6a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107a2afa8(param_3,param_1);
  func_0x000107a2af94();
  func_0x000107a2af00();
  func_0x000107a2aedc();
  return param_3;
}



/* Entry: 1062d6a94; end: 1062d6acf; -[SCPayoutsFetcherImpl .cxx_destruct] */

void FUN_1062d6a94(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062d6ad0; end: 1062d6adf;  */

int FUN_1062d6ad0(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 - 2U < 8) {
    iVar1 = (int)(param_1 - 2U) + 1;
  }
  return iVar1;
}



/* Entry: 1062d6ae0; end: 1062d6ccf;  */

undefined * FUN_1062d6ae0(long param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  iVar7 = (int)&uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        lVar10 = *(long *)(lStack_138 + lVar12 * 8);
        puVar4 = PTR_PTR_1126c9798;
        _objc_alloc(PTR_PTR_1126c9798);
        lVar5 = lVar10;
        func_0x00010c296d80(lVar10);
        lVar6 = lVar10;
        func_0x00010c296e40(lVar10);
        func_0x00010c0f6b20();
        func_0x00010c0604e0((double)lVar5,(double)lVar6,puVar4);
        lVar5 = lVar10;
        func_0x00010bf6e6e0(lVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18c040(puVar4);
        _objc_release(lVar5);
        func_0x00010bf8bf80(lVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c193340(puVar4);
        _objc_release(lVar10);
        func_0x00010befa120(puVar2);
        _objc_release(puVar4);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_1;
      iVar7 = (int)&uStack_140;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  if (param_1 != 0) {
    uVar9 = 0;
    if (param_1 - 2U < 8) {
      uVar9 = (int)(param_1 - 2U) + 1;
    }
    return (undefined *)(ulong)uVar9;
  }
  if (iVar7 < 3) {
    if (iVar7 != 1) {
      return (undefined *)(ulong)(iVar7 == 2);
    }
  }
  else {
    if (iVar7 == 3) {
      uVar9 = 6;
      if (param_2 < 2) {
        if ((param_2 == -0x4524111) || (param_2 == 0)) {
          return (undefined *)0x5;
        }
        bVar1 = param_2 == 1;
        uVar8 = 4;
      }
      else {
        if (param_2 == 2) {
          return (undefined *)0x5;
        }
        uVar8 = 3;
        uVar9 = 2;
        if (param_2 != 5) {
          uVar9 = 6;
        }
        bVar1 = param_2 == 3;
      }
      if (!bVar1) {
        uVar8 = uVar9;
      }
      return (undefined *)(ulong)uVar8;
    }
    if (iVar7 == 5) {
      return (undefined *)0x7;
    }
    if (iVar7 != 4) {
      return (undefined *)0x0;
    }
  }
  return (undefined *)0x8;
}



/* Entry: 1062d6cd0; end: 1062d6d7f;  */

uint FUN_1062d6cd0(long param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar3 = 0;
    if (param_1 - 2U < 8) {
      uVar3 = (int)(param_1 - 2U) + 1;
    }
    return uVar3;
  }
  if (param_3 < 3) {
    if (param_3 != 1) {
      return (uint)(param_3 == 2);
    }
  }
  else {
    if (param_3 == 3) {
      uVar3 = 6;
      if (param_2 < 2) {
        if ((param_2 == -0x4524111) || (param_2 == 0)) {
          return 5;
        }
        bVar1 = param_2 == 1;
        uVar2 = 4;
      }
      else {
        if (param_2 == 2) {
          return 5;
        }
        uVar2 = 3;
        uVar3 = 2;
        if (param_2 != 5) {
          uVar3 = 6;
        }
        bVar1 = param_2 == 3;
      }
      if (!bVar1) {
        uVar2 = uVar3;
      }
      return uVar2;
    }
    if (param_3 == 5) {
      return 7;
    }
    if (param_3 != 4) {
      return 0;
    }
  }
  return 8;
}



/* Entry: 1062d6d80; end: 1062d79a3;  */

undefined * FUN_1062d6d80(int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 == 0) {
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    lVar17 = param_2;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar17 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_2);
        }
        lVar26 = *(long *)(lVar24 * 8);
        lVar18 = lVar26;
        func_0x00010bef1980();
        if ((int)lVar18 == 1) {
          puVar25 = PTR_PTR_1126c97a0;
          _objc_alloc(PTR_PTR_1126c97a0);
          lVar18 = lVar26;
          func_0x00010c0f6aa0(lVar26);
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar18;
          func_0x00010bf5cb60();
          lVar19 = lVar26;
          func_0x00010c0f6aa0(lVar26);
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar19;
          func_0x00010bf8bfa0();
          func_0x00010c060420((double)lVar21,(double)lVar20,puVar25);
          _objc_release(lVar19);
          _objc_release(lVar18);
          func_0x00010c1d9e40(puVar25);
          lVar18 = lVar26;
          func_0x00010c0f6aa0(lVar26);
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar18;
          func_0x00010c0f6ac0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d9e00(puVar25);
          _objc_release(lVar21);
          _objc_release(lVar18);
          puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          lVar18 = lVar26;
          func_0x00010c0f6aa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c252d60();
          func_0x00010c0df760(puVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c209fc0(puVar25);
          _objc_release(puVar22);
          _objc_release(lVar18);
          lVar18 = lVar26;
          func_0x00010c0f6aa0(lVar26);
          _objc_retainAutoreleasedReturnValue();
          lVar21 = lVar18;
          func_0x00010c0f6ae0();
          _objc_retainAutoreleasedReturnValue();
          lVar19 = lVar21;
          FUN_1062d6ae0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c193360(puVar25);
          _objc_release(lVar19);
          _objc_release(lVar21);
          _objc_release(lVar18);
          puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0f6aa0(lVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297020();
          func_0x00010c0df7c0(puVar22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220300(puVar25);
          _objc_release(puVar22);
LAB_1062d75ac:
          _objc_release(lVar26);
        }
        else {
          lVar18 = lVar26;
          func_0x00010bef1980();
          if ((int)lVar18 == 2) {
            puVar25 = PTR_PTR_1126c97a0;
            _objc_alloc(PTR_PTR_1126c97a0);
            lVar18 = lVar26;
            func_0x00010bf32f00(lVar26);
            _objc_retainAutoreleasedReturnValue();
            lVar21 = lVar18;
            func_0x00010bf5cb80();
            func_0x00010c060420((double)lVar21,0,puVar25);
            _objc_release(lVar18);
            puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            lVar18 = lVar26;
            func_0x00010bf32f00(lVar26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296d80();
            func_0x00010c0df7c0(puVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220300(puVar25);
            _objc_release(puVar22);
            _objc_release(lVar18);
            lVar18 = lVar26;
            func_0x00010bf32f00(lVar26);
            _objc_retainAutoreleasedReturnValue();
            lVar21 = lVar18;
            func_0x00010bf32f20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d9e00(puVar25);
            _objc_release(lVar21);
            _objc_release(lVar18);
            puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            lVar18 = lVar26;
            func_0x00010bf32f00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c252440();
            func_0x00010c0df760(puVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c209fc0(puVar25);
            _objc_release(puVar22);
            _objc_release(lVar18);
            func_0x00010bf32f00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c27dd80();
            _objc_release(lVar26);
            func_0x00010c1d9e40(puVar25);
          }
          else {
            lVar18 = lVar26;
            func_0x00010bef1980();
            if ((int)lVar18 == 3) {
              puVar25 = PTR_PTR_1126c97a0;
              _objc_alloc(PTR_PTR_1126c97a0);
              lVar18 = lVar26;
              func_0x00010c0f6aa0(lVar26);
              _objc_retainAutoreleasedReturnValue();
              lVar21 = lVar18;
              func_0x00010bf8bfa0();
              func_0x00010c060420(0,(double)lVar21,puVar25);
              _objc_release(lVar18);
              func_0x00010c1d9e40(puVar25);
              puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              lVar18 = lVar26;
              func_0x00010c0f6aa0(lVar26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf5cb60();
              func_0x00010c0df7c0(puVar22);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c220300(puVar25);
              _objc_release(puVar22);
              _objc_release(lVar18);
              lVar18 = lVar26;
              func_0x00010c0f6aa0(lVar26);
              _objc_retainAutoreleasedReturnValue();
              lVar21 = lVar18;
              func_0x00010c0f6ac0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d9e00(puVar25);
              _objc_release(lVar21);
              _objc_release(lVar18);
              puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              lVar18 = lVar26;
              func_0x00010c0f6aa0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c252d60();
              func_0x00010c0df760(puVar22);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c209fc0(puVar25);
              _objc_release(puVar22);
              _objc_release(lVar18);
              func_0x00010c0f6aa0(lVar26);
              _objc_retainAutoreleasedReturnValue();
              lVar18 = lVar26;
              func_0x00010c0f6ae0();
              _objc_retainAutoreleasedReturnValue();
              lVar21 = lVar18;
              FUN_1062d6ae0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c193360(puVar25);
              _objc_release(lVar21);
              _objc_release(lVar18);
              goto LAB_1062d75ac;
            }
            puVar25 = (undefined *)0x0;
          }
        }
        func_0x00010befa120(puVar16);
        _objc_release(puVar25);
        lVar24 = lVar24 + 1;
      } while (lVar17 != lVar24);
      lVar17 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    puVar22 = puVar16;
    func_0x00010bf51e00(puVar16);
  }
  else {
    puVar16 = PTR_PTR_1126c97a0;
    _objc_alloc();
    func_0x00010c060420(0x4094500000000000,0x4283076ee4434000);
    func_0x00010c1d9e00();
    func_0x00010c1d9e40(puVar16);
    func_0x00010c220300(puVar16);
    func_0x00010c209fc0(puVar16);
    puVar25 = PTR_PTR_1126c97a0;
    _objc_alloc();
    func_0x00010c060420(0x410e848000000000,0x4283076ee4434000);
    func_0x00010c1d9e00();
    func_0x00010c1d9e40(puVar25);
    func_0x00010c209fc0(puVar25);
    func_0x00010c220300(puVar25);
    puVar4 = PTR_PTR_1126c97a0;
    _objc_alloc();
    func_0x00010c060420(0x410e848000000000,0x4283076ee4434000);
    func_0x00010c1d9e00();
    func_0x00010c1d9e40(puVar4);
    func_0x00010c209fc0(puVar4);
    func_0x00010c220300(puVar4);
    puVar5 = PTR_PTR_1126c97a0;
    _objc_alloc();
    func_0x00010c060420(0x410e848000000000,0x4283076ee4434000);
    func_0x00010c1d9e00();
    func_0x00010c1d9e40(puVar5);
    func_0x00010c209fc0(puVar5);
    func_0x00010c220300(puVar5);
    puVar6 = PTR_PTR_1126c9798;
    _objc_alloc();
    func_0x00010c0604e0(0x40fe848000000000,0x40fe848000000000);
    func_0x00010c193340();
    puVar7 = PTR_PTR_1126c97a0;
    _objc_alloc();
    func_0x00010c060420(0x410e848000000000,0x4277819377868000);
    func_0x00010c1d9e00();
    func_0x00010c1d9e40(puVar7);
    func_0x00010c220300(puVar7);
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193360(puVar7);
    _objc_release(puVar22);
    func_0x00010c209fc0(puVar7);
    puVar8 = PTR_PTR_1126c9798;
    _objc_alloc();
    func_0x00010c0604e0(0x40fe848000000000,0x40fe848000000000);
    func_0x00010c193340();
    puVar9 = PTR_PTR_1126c97a0;
    _objc_alloc();
    func_0x00010c060420(0x410e848000000000,0x4277819377868000);
    func_0x00010c1d9e00();
    func_0x00010c1d9e40(puVar9);
    func_0x00010c220300(puVar9);
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193360(puVar9);
    _objc_release(puVar22);
    func_0x00010c209fc0(puVar9);
    puVar10 = PTR_PTR_1126c9798;
    _objc_alloc();
    func_0x00010c0604e0(0x40fe848000000000,0x40fe848000000000);
    func_0x00010c193340();
    puVar11 = PTR_PTR_1126c97a0;
    _objc_alloc();
    func_0x00010c060420(0x410e848000000000,0x4277819377868000);
    func_0x00010c1d9e00();
    func_0x00010c1d9e40(puVar11);
    func_0x00010c220300(puVar11);
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193360(puVar11);
    _objc_release(puVar22);
    func_0x00010c209fc0(puVar11);
    puVar12 = PTR_PTR_1126c9798;
    _objc_alloc();
    func_0x00010c0604e0(0x407f400000000000,0x407f400000000000);
    func_0x00010c193340();
    puVar13 = PTR_PTR_1126c97a0;
    _objc_alloc();
    func_0x00010c060420(0x407f400000000000,0x42777fa5f0c08000);
    func_0x00010c1d9e00();
    func_0x00010c1d9e40(puVar13);
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193360(puVar13);
    _objc_release(puVar22);
    func_0x00010c209fc0(puVar13);
    func_0x00010c220300(puVar13);
    puVar14 = PTR_PTR_1126c9798;
    _objc_alloc();
    func_0x00010c0604e0(0x407f400000000000,0x407f400000000000);
    func_0x00010c193340();
    puVar15 = PTR_PTR_1126c97a0;
    _objc_alloc();
    func_0x00010c060420(0,0x42777fa5f0c08000);
    func_0x00010c1d9e00();
    func_0x00010c1d9e40(puVar15);
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193360(puVar15);
    _objc_release(puVar22);
    func_0x00010c209fc0(puVar15);
    func_0x00010c220300(puVar15);
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
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
    _objc_release(puVar25);
  }
  _objc_release(puVar16);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
    return puVar22;
  }
  ___stack_chk_fail();
  if (puRam00000001136c35e8 == (undefined *)0x0) {
    puVar16 = PTR_PTR_1126ae980;
    func_0x00010bf00e00();
    do {
      if (puRam00000001136c35e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c35e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c35e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c35e8 = puVar16;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c35e8;
}



/* Entry: 1062d79a4; end: 1062d7a1f;  */

undefined * FUN_1062d79a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c35e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e48fd8,
                        &UNK_10ddda7f0,&UNK_10ddda858,6,FUN_1062d7a20,0);
    do {
      if (puRam00000001136c35e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c35e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c35e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c35e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c35e8;
}



/* Entry: 1062d7a20; end: 1062d7a2b;  */

bool FUN_1062d7a20(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1062d7a2c; end: 1062d7aa7;  */

undefined * FUN_1062d7a2c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c35f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e48ff8,
                        &UNK_10ddda870,&UNK_10ddda8c0,6,FUN_1062d7aa8,0);
    do {
      if (puRam00000001136c35f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c35f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c35f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c35f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c35f0;
}



/* Entry: 1062d7aa8; end: 1062d7ab3;  */

bool FUN_1062d7aa8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1062d7ab4; end: 1062d7b2f;  */

undefined * FUN_1062d7ab4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c35f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e49018,
                        &UNK_10ddda8d8,&UNK_10ddda920,4,FUN_1062d7b30,0);
    do {
      if (puRam00000001136c35f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c35f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c35f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c35f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c35f8;
}



/* Entry: 1062d7b30; end: 1062d7b3b;  */

bool FUN_1062d7b30(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1062d7b3c; end: 1062d7bb7;  */

undefined * FUN_1062d7b3c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3600 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e49038,
                        &UNK_10ddda930,&UNK_10ddda9b0,0xb,FUN_1062d7bb8,0);
    do {
      if (puRam00000001136c3600 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3600;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3600,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3600 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3600;
}



/* Entry: 1062d7bb8; end: 1062d7bc3;  */

bool FUN_1062d7bb8(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 1062d7bc4; end: 1062d7c3f;  */

undefined * FUN_1062d7bc4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3608 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e49058,
                        &UNK_10ddda9dc,&UNK_10dddaa18,4,FUN_1062d7c40,0);
    do {
      if (puRam00000001136c3608 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3608;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3608,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3608 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3608;
}



/* Entry: 1062d7c40; end: 1062d7c4b;  */

bool FUN_1062d7c40(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1062d7c4c; end: 1062d7cc7;  */

undefined * FUN_1062d7c4c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3610 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e49078,
                        &UNK_10dddaa28,&UNK_10dddaa4c,3,FUN_1062d7cc8,0);
    do {
      if (puRam00000001136c3610 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3610;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3610,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3610 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3610;
}



/* Entry: 1062d7cc8; end: 1062d7cd3;  */

bool FUN_1062d7cc8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1062d7cd4; end: 1062d7d4f;  */

undefined * FUN_1062d7cd4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3618 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e49098,
                        &UNK_10dddaa58,&UNK_10dddaaa8,5,FUN_1062d7d50,0);
    do {
      if (puRam00000001136c3618 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3618;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3618,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3618 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3618;
}



/* Entry: 1062d7d50; end: 1062d7d5b;  */

bool FUN_1062d7d50(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1062d7d5c; end: 1062d7dd7;  */

undefined * FUN_1062d7d5c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3620 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e490b8,
                        &UNK_10dddaabc,&UNK_10dddaaf0,4,FUN_1062d7dd8,0);
    do {
      if (puRam00000001136c3620 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3620;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3620,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3620 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3620;
}



/* Entry: 1062d7dd8; end: 1062d7de3;  */

bool FUN_1062d7dd8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1062d7de4; end: 1062d7e4b; +[SCCrystalHubOnboardingInfo descriptor] */

void FUN_1062d7de4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9890,
                        &PTR____CFConstantStringClassReference_110e490d8,&PTR_DAT_1131499c0,
                        &PTR_DAT_113149bd8,5,0x20,0x1c);
    puRam00000001136c3628 = puVar1;
  }
  return;
}



/* Entry: 1062d7e4c; end: 1062d7eb3; +[SCCrystalHubGetCrystalActivitySummaryRequest descriptor] */

void FUN_1062d7e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad98e0,
                        &PTR____CFConstantStringClassReference_110df5518,&PTR_DAT_1131499c0,0,0,4,
                        0x1c);
    puRam00000001136c3630 = puVar1;
  }
  return;
}



/* Entry: 1062d7eb4; end: 1062d7f1b; +[SCCrystalHubGetCrystalActivitySummaryResponse descriptor] */

void FUN_1062d7eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9930,
                        &PTR____CFConstantStringClassReference_110df5558,&PTR_DAT_1131499c0,
                        &PTR_DAT_113149db8,8,0x38,0x1c);
    puRam00000001136c3638 = puVar1;
  }
  return;
}



/* Entry: 1062d7f1c; end: 1062d7f83; +[SCCrystalHubStartCashoutRequest descriptor] */

void FUN_1062d7f1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9980,
                        &PTR____CFConstantStringClassReference_110e490f8,&PTR_DAT_1131499c0,
                        &PTR_DAT_113149a58,3,0x20,0x1c);
    puRam00000001136c3640 = puVar1;
  }
  return;
}



/* Entry: 1062d7f84; end: 1062d7feb; +[SCCrystalHubStartCashoutResponse descriptor] */

void FUN_1062d7f84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad99d0,
                        &PTR____CFConstantStringClassReference_110e49118,&PTR_DAT_1131499c0,0,0,4,
                        0x1c);
    puRam00000001136c3648 = puVar1;
  }
  return;
}



/* Entry: 1062d7fec; end: 1062d8053; +[SCCrystalHubPayoutSource descriptor] */

void FUN_1062d7fec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9a20,
                        &PTR____CFConstantStringClassReference_110df52f8,&PTR_DAT_1131499c0,
                        &PTR_s_value_113149c78,5,0x28,0x1c);
    puRam00000001136c3650 = puVar1;
  }
  return;
}



/* Entry: 1062d8054; end: 1062d80bb; +[SCCrystalHubForfeitInfo descriptor] */

void FUN_1062d8054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9a70,
                        &PTR____CFConstantStringClassReference_110e49138,&PTR_DAT_1131499c0,
                        &PTR_DAT_1131499d8,1,0x10,0x1c);
    puRam00000001136c3658 = puVar1;
  }
  return;
}



/* Entry: 1062d80bc; end: 1062d8123; +[SCCrystalHubPayoutActivity descriptor] */

void FUN_1062d80bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9ac0,
                        &PTR____CFConstantStringClassReference_110e49158,&PTR_DAT_1131499c0,
                        &PTR_DAT_113149eb8,8,0x40,0x1c);
    puRam00000001136c3660 = puVar1;
  }
  return;
}



/* Entry: 1062d8124; end: 1062d818b; +[SCCrystalHubCashout descriptor] */

void FUN_1062d8124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9b10,
                        &PTR____CFConstantStringClassReference_110df54d8,&PTR_DAT_1131499c0,
                        &PTR_s_value_113149d18,5,0x28,0x1c);
    puRam00000001136c3668 = puVar1;
  }
  return;
}



/* Entry: 1062d818c; end: 1062d81f3; +[SCCrystalHubActivity descriptor] */

void FUN_1062d818c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9b60,
                        &PTR____CFConstantStringClassReference_110df54f8,&PTR_DAT_1131499c0,
                        &PTR_DAT_113149ab8,3,0x18,0x1c);
    puRam00000001136c3670 = puVar1;
  }
  return;
}



/* Entry: 1062d81f4; end: 1062d825b; +[SCCrystalHubGetActivityRequest descriptor] */

void FUN_1062d81f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9bb0,
                        &PTR____CFConstantStringClassReference_110df5598,&PTR_DAT_1131499c0,
                        &PTR_DAT_113149b18,3,0x20,0x1c);
    puRam00000001136c3678 = puVar1;
  }
  return;
}



/* Entry: 1062d825c; end: 1062d82c3; +[SCCrystalHubGetActivityResponse descriptor] */

void FUN_1062d825c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9c00,
                        &PTR____CFConstantStringClassReference_110df55d8,&PTR_DAT_1131499c0,
                        &PTR_DAT_113149b78,3,0x20,0x1c);
    puRam00000001136c3680 = puVar1;
  }
  return;
}



/* Entry: 1062d82c4; end: 1062d832b; +[SCCrystalHubGetTotalCrystalsBySourceRequest descriptor] */

void FUN_1062d82c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9c50,
                        &PTR____CFConstantStringClassReference_110e49178,&PTR_DAT_1131499c0,
                        &PTR_DAT_1131499f8,1,8,0x1c);
    puRam00000001136c3688 = puVar1;
  }
  return;
}



/* Entry: 1062d832c; end: 1062d8393; +[SCCrystalHubGetTotalCrystalsBySourceResponse descriptor] */

void FUN_1062d832c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ad9ca0,
                        &PTR____CFConstantStringClassReference_110e49198,&PTR_DAT_1131499c0,
                        &PTR_DAT_113149a18,2,0x18,0x1c);
    puRam00000001136c3690 = puVar1;
  }
  return;
}



/* Entry: 1062d8394; end: 1062d8403;  */

void FUN_1062d8394(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062d8404; end: 1062d8447;  */

undefined8 FUN_1062d8404(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e491b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1062d8448; end: 1062d84b7;  */

void FUN_1062d8448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062d84b8; end: 1062d84fb;  */

undefined8 FUN_1062d84b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e491d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1062d84fc; end: 1062d8593;  */

void FUN_1062d84fc(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain();
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_2,param_3,puVar1,&PTR____CFConstantStringClassReference_110e491f8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062d8594; end: 1062d859f;  */

void FUN_1062d8594(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110e491f8)
  ;
  return;
}



/* Entry: 1062d85a0; end: 1062d8637;  */

void FUN_1062d85a0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain();
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_2,param_3,puVar1,&PTR____CFConstantStringClassReference_110e49298);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062d8638; end: 1062d8683;  */

void FUN_1062d8638(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110e49298)
  ;
  return;
}



/* Entry: 1062d8684; end: 1062d86f3;  */

void FUN_1062d8684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  func_0x00010c1d0560(param_1,param_2,PTR____kCFBooleanFalse_11034ab60,
                      &PTR____CFConstantStringClassReference_110e49238);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e49258);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062d86f4; end: 1062d8717;  */

void FUN_1062d86f4(undefined8 param_1)

{
  if ((bRam00000001136c3698 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey__112651b80,PTR____kCFBooleanTrue_11034ab68,
             &PTR____CFConstantStringClassReference_110e49238);
  return;
}



/* Entry: 1062d8718; end: 1062d880b;  */

bool FUN_1062d8718(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c0dff20(param_2,param_3,&PTR____CFConstantStringClassReference_110e49238);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar4 = true;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    if ((int)lVar2 == 0) {
      lVar2 = param_2;
      func_0x00010c0dff20(param_2,param_3,&PTR____CFConstantStringClassReference_110e49258);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        bVar4 = true;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        _objc_release(puVar3);
        bVar4 = 86400.0 < param_1;
      }
      _objc_release(lVar2);
    }
    else {
      bVar4 = true;
      uRam00000001136c3698 = 1;
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return bVar4;
}



/* Entry: 1062d880c; end: 1062d887b;  */

void FUN_1062d880c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062d887c; end: 1062d88bf;  */

undefined8 FUN_1062d887c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e492b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1062d88c0; end: 1062d8a3b;  */

void FUN_1062d88c0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0cfd40(param_2);
  uVar2 = param_2;
  func_0x00010c104060(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001004a2160();
  uVar4 = param_2;
  func_0x00010c087500(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_70);
  uVar5 = param_2;
  func_0x00010bfe4420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_90);
  func_0x00010c2908c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010011c84c();
  FUN_1062d8a3c(param_1,uVar1,uVar3 & 0xffffffffff,auStack_70,auStack_90,uVar6 & 0xffff);
  _objc_release(param_2);
  func_0x0001001148fc(auStack_90);
  _objc_release(uVar5);
  func_0x0001001148fc(auStack_70);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010011c874();
  return;
}



/* Entry: 1062d8a3c; end: 1062d8ac3;  */

void FUN_1062d8a3c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined2 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    *(undefined8 *)(param_1 + 8) = param_4[2];
    *(undefined8 *)(param_1 + 6) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    *(undefined8 *)(param_1 + 0x10) = param_5[2];
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  *(undefined2 *)(param_1 + 0x14) = param_6;
  return;
}



/* Entry: 1062d8ac4; end: 1062d8b7b;  */

void FUN_1062d8ac4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_11091af18;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_1062d8b7c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1062d8df0(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1062d8b7c; end: 1062d8c7b;  */

void FUN_1062d8b7c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_11091af58;
  puVar4[3] = &PTR_DAT_11091afd0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_11091afa8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1062d8df0(&uStack_50);
  return;
}



/* Entry: 1062d8c7c; end: 1062d8c7f;  */

void FUN_1062d8c7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091af58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1062d8c80; end: 1062d8c93;  */

void FUN_1062d8c80(void)

{
  FUN_1062d8de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1062d8c94; end: 1062d8c9f;  */

long FUN_1062d8c94(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11091af18;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1062d8ca0; end: 1062d8cdf;  */

void FUN_1062d8ca0(void)

{
  FUN_1062d8e1c();
  return;
}



/* Entry: 1062d8ce0; end: 1062d8d4b;  */

void FUN_1062d8ce0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c119820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100626d7c(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1062d8d4c; end: 1062d8ddf;  */

long FUN_1062d8d4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11091af18;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1062d8de0; end: 1062d8def;  */

void FUN_1062d8de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091af58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1062d8df0; end: 1062d8e1b;  */

long FUN_1062d8df0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1062d8e1c; end: 1062d8e27;  */

long FUN_1062d8e1c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11091af18;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}


