/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10535a0b0; end: 10535a0bb; -[SCAppAttestStateImpl nonce] */

void FUN_10535a0b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 10535a0bc; end: 10535a0c3; -[SCAppAttestStateImpl sharedService] */

undefined8 FUN_10535a0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10535a0c4; end: 10535a0f3; -[SCAppAttestStateImpl setSharedService:] */

void FUN_10535a0c4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10535a0f4; end: 10535a153; -[SCAppAttestStateImpl .cxx_destruct] */

void FUN_10535a0f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10535a154; end: 10535a25f; -[SCAppAttestStateManagerImpl initWithRequirement:keyGenerationAndAttestationTimeout:assertionTimeout:errorRetryBackoff:errorMaxRetries:blizzardLogger:grapheneRegistry:] */

undefined1 *
FUN_10535a154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e7a60;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined4 *)((long)puVar1 + 0x20) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___DCAppAttestService_1126b7a38;
    func_0x00010c22bf80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    func_0x00010be8a1e0(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 10535a260; end: 10535a267; -[SCAppAttestStateManagerImpl reinitState] */

void FUN_10535a260(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reinitStateWithRequirement__112580218,2);
  return;
}



/* Entry: 10535a268; end: 10535a2bf; -[SCAppAttestStateManagerImpl _reinitStateWithRequirement:] */

void FUN_10535a268(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7a68;
  _objc_alloc();
  func_0x00010c03f720(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18));
  func_0x00010c1ff0e0();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10535a2c0; end: 10535a2cb; -[SCAppAttestStateManagerImpl state] */

void FUN_10535a2c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x40,1);
  return;
}



/* Entry: 10535a2cc; end: 10535a2d3; -[SCAppAttestStateManagerImpl sharedService] */

undefined8 FUN_10535a2cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10535a2d4; end: 10535a303; -[SCAppAttestStateManagerImpl setSharedService:] */

void FUN_10535a2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10535a304; end: 10535a357; -[SCAppAttestStateManagerImpl .cxx_destruct] */

void FUN_10535a304(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10535a358; end: 10535a3c3; -[SCPromiseWithTimeout init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10535a358(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7a68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112721d80) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112721d84) = 0;
    func_0x00010c215be0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10535a3c4; end: 10535a46f; -[SCPromiseWithTimeout completeWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535a3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  pbVar1 = (byte *)(param_1 + _DAT_112721d80);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) == 0) {
    lVar5 = (long)_DAT_112721d88;
    dVar6 = *(double *)(param_1 + lVar5);
    if (dVar6 != 0.0) {
      _CACurrentMediaTime();
      dVar6 = dVar6 - *(double *)(param_1 + lVar5);
    }
    *(double *)(param_1 + _DAT_112721d84) = dVar6;
    puStack_38 = PTR_PTR_1126e7a68;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_completeWithValue__1125ae900,param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10535a470; end: 10535a51b; -[SCPromiseWithTimeout completeWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535a470(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  double dVar6;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  pbVar1 = (byte *)(param_1 + _DAT_112721d80);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) == 0) {
    lVar5 = (long)_DAT_112721d88;
    dVar6 = *(double *)(param_1 + lVar5);
    if (dVar6 != 0.0) {
      _CACurrentMediaTime();
      dVar6 = dVar6 - *(double *)(param_1 + lVar5);
    }
    *(double *)(param_1 + _DAT_112721d84) = dVar6;
    puStack_38 = PTR_PTR_1126e7a68;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_completeWithError__1125ae8d0,param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10535a51c; end: 10535a577; -[SCPromiseWithTimeout dealloc] */

void FUN_10535a51c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c2705c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e7a68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10535a578; end: 10535a6df; -[SCPromiseWithTimeout timeOutAfter:withError:onQueue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535a578(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010c2705c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_58,param_2);
    puVar2 = PTR_PTR_1126ae888;
    _objc_alloc(PTR_PTR_1126ae888);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010c0522e0(puVar2);
    func_0x00010c215be0(param_2);
    _objc_release(puVar2);
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + _DAT_112721d88) = param_1;
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10535a6e0; end: 10535a713;  */

void FUN_10535a6e0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf43ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10535a714; end: 10535a723; -[SCPromiseWithTimeout timeToCompletion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10535a714(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112721d84);
}



/* Entry: 10535a724; end: 10535a733; -[SCPromiseWithTimeout timeoutTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535a724(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112721d7c,1);
  return;
}



/* Entry: 10535a734; end: 10535a73f; -[SCPromiseWithTimeout setTimeoutTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535a734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10535a740; end: 10535a753; -[SCPromiseWithTimeout .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535a740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721d7c,0);
  return;
}



/* Entry: 10535a754; end: 10535a77f; +[SCGrapheneAppAttestMetric keyGenerationAndAttestation] */

void FUN_10535a754(void)

{
  _objc_alloc(PTR_PTR_1126b7a60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10535a780; end: 10535a7ab; +[SCGrapheneAppAttestMetric assertion] */

void FUN_10535a780(void)

{
  _objc_alloc(PTR_PTR_1126b7a60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10535a7ac; end: 10535a7d7; +[SCGrapheneAppAttestMetric overheadOnRegistration] */

void FUN_10535a7ac(void)

{
  _objc_alloc(PTR_PTR_1126b7a60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10535a7d8; end: 10535a803; +[SCGrapheneAppAttestMetric retry] */

void FUN_10535a7d8(void)

{
  _objc_alloc(PTR_PTR_1126b7a60);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10535a804; end: 10535a8a3; -[SCGrapheneAppAttestMetric description] */

void FUN_10535a804(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd3818;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd3818,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e7a70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10535a8a4; end: 10535aa03; -[SCGrapheneRegistry appAttestGraphene] */

void FUN_10535a8a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10535a92c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb568 != -1) {
    func_0x00010002a2fc(0x1136bb568,&puStack_48);
  }
  uVar1 = uRam00000001136bb560;
  _objc_retain(uRam00000001136bb560);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10535aa04; end: 10535ab07; -[SCPreLoginAttestationServiceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535aa04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721d8c);
  puVar2 = PTR_PTR_1126b7a70;
  _objc_alloc(PTR_PTR_1126b7a70);
  func_0x00010c037f60();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10535ab08; end: 10535ab47;  */

void FUN_10535ab08(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10535ab48; end: 10535ac03; -[SCPreLoginAttestationServiceEntryPoint _createPreLoginAttestationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535ab48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b7a78;
  _objc_alloc(PTR_PTR_1126b7a78);
  lVar2 = param_1 + _DAT_112721d90;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112721d94;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8760(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10535ac04; end: 10535ac57; -[SCPreLoginAttestationServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535ac04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721d8c,0);
  _objc_destroyWeak(param_1 + _DAT_112721d94);
  _objc_destroyWeak(param_1 + _DAT_112721d90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721d98);
  return;
}



/* Entry: 10535ac58; end: 10535addb; -[SCUserVerificationArgosServiceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535ac58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10535addc;
  puStack_68 = &UNK_11084ae38;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721d9c);
  *(undefined **)(param_1 + _DAT_112721d9c) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7a80;
  _objc_alloc(PTR_PTR_1126b7a80);
  func_0x00010bff3fc0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112721da0));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10535addc; end: 10535ae5b;  */

void FUN_10535addc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1cfe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10535ae5c; end: 10535b08f; -[SCUserVerificationArgosServiceEntryPoint _createArgosImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535ae5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126b7a88;
  _objc_alloc(PTR_PTR_1126b7a88);
  lVar10 = (long)_DAT_112721da4;
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112721da8;
  lVar4 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe800(puVar1,param_2,lVar3,lVar5,*(undefined8 *)(param_1 + _DAT_112721d9c));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b7a90;
  _objc_alloc(PTR_PTR_1126b7a90);
  lVar2 = param_1 + _DAT_112721dac;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112721db0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar10);
  lVar7 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053f80(puVar6,param_2,lVar3,lVar5,lVar7,puVar1);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b7a98;
  _objc_alloc(PTR_PTR_1126b7a98);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar2 = lVar9;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112721db4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c27eea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffee40(puVar8,param_2,puVar6,puVar1,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar9);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10535b090; end: 10535b17b; -[SCUserVerificationArgosServiceEntryPoint _getArgosScopedDirectory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535b090(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112721db8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf7f880();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf878c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10535b17c; end: 10535b21f; -[SCUserVerificationArgosServiceEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535b17c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721d9c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126e7a78;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10535b220; end: 10535b2b3; -[SCUserVerificationArgosServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535b220(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721da0,0);
  _objc_destroyWeak(param_1 + _DAT_112721da8);
  _objc_destroyWeak(param_1 + _DAT_112721db8);
  _objc_destroyWeak(param_1 + _DAT_112721db0);
  _objc_destroyWeak(param_1 + _DAT_112721dac);
  _objc_destroyWeak(param_1 + _DAT_112721da4);
  _objc_destroyWeak(param_1 + _DAT_112721db4);
  _objc_destroyWeak(param_1 + _DAT_112721dbc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721d9c,0);
  return;
}



/* Entry: 10535b2b4; end: 10535be5b; -[SCRegistrationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535b2b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  long lVar37;
  undefined *puVar38;
  long lVar39;
  undefined *puVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  undefined8 uVar47;
  long lVar48;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar40 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10535be5c;
  puStack_90 = &UNK_11087d668;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126b7aa0;
  _objc_alloc();
  lVar41 = (long)_DAT_112721dc0;
  lVar4 = param_1 + lVar41;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = (long)_DAT_112721dc4;
  lVar6 = param_1 + lVar42;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c23c580();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = (long)_DAT_112721dc8;
  lVar46 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar8 = lVar46;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112721dcc;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = (long)_DAT_112721dd0;
  lVar12 = param_1 + lVar44;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c08d880();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_112721dd4;
  lVar14 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c294760();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c294440();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112721de4;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c113f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb5dc0();
  func_0x00010beb6100();
  lVar20 = param_1 + _DAT_112721de8;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c296cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = (long)_DAT_112721dec;
  lVar22 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112721df0;
  _objc_loadWeakRetained();
  puStack_d0 = puVar40;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10535be9c;
  puStack_b8 = &UNK_110848ca8;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_f8 = puVar40;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x10535bed4;
  puStack_e0 = &UNK_110848ca8;
  _objc_copyWeak(auStack_d8,auStack_80);
  lVar25 = param_1 + _DAT_112721df4;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c127a40();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_112721df8;
  _objc_loadWeakRetained();
  lVar27 = lVar37;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + _DAT_112721dfc;
  _objc_loadWeakRetained();
  lVar28 = lVar39;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0573c0();
  _objc_release(lVar28);
  _objc_release(lVar39);
  _objc_release(lVar27);
  _objc_release(lVar37);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar46);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar29 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  puVar30 = PTR_PTR_1126af000;
  _objc_alloc();
  lVar4 = param_1 + _DAT_112721e00;
  _objc_loadWeakRetained(lVar4);
  lVar46 = lVar4;
  func_0x00010c2970e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112721e04;
  _objc_loadWeakRetained(lVar6);
  lVar9 = lVar6;
  func_0x00010bf9c540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffef00();
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar46);
  _objc_release(lVar4);
  puVar31 = PTR_PTR_1126b7aa8;
  _objc_alloc();
  lVar4 = param_1 + lVar41;
  _objc_loadWeakRetained();
  lVar46 = (long)_DAT_112721e08;
  lVar6 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar9 = lVar6;
  func_0x00010c13d740();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + lVar45;
  _objc_loadWeakRetained();
  lVar16 = lVar45;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x10535bf0c;
  puStack_108 = &UNK_110848ca8;
  _objc_copyWeak(auStack_100,auStack_80);
  puStack_148 = puVar40;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x10535bf44;
  puStack_130 = &UNK_110848ca8;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c03dc00();
  _objc_release(lVar16);
  _objc_release(lVar45);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar4);
  puVar32 = puVar31;
  func_0x00010c0642c0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126afba8;
  _objc_alloc();
  lVar43 = param_1 + lVar43;
  _objc_loadWeakRetained(lVar43);
  lVar6 = lVar43;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112721e0c;
  _objc_loadWeakRetained(lVar4);
  lVar9 = lVar4;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03dca0();
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar43);
  puVar34 = PTR_PTR_1126afbe0;
  _objc_alloc();
  lVar4 = param_1 + lVar42;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c23c580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060900();
  _objc_release(lVar6);
  _objc_release(lVar4);
  puVar35 = PTR_PTR_1126b7ab0;
  _objc_alloc();
  func_0x00010c05f5a0();
  puVar36 = PTR_PTR_1126b7ab8;
  _objc_alloc();
  lVar4 = param_1 + _DAT_112721e10;
  _objc_loadWeakRetained();
  lVar25 = lVar4;
  func_0x00010bf353a0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar37 = lVar46;
  func_0x00010c13d740();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar31;
  func_0x00010c0642e0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x00010be8a040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112721e14;
  _objc_loadWeakRetained();
  lVar14 = lVar6;
  func_0x00010c124ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar16 = lVar9;
  func_0x00010c294440();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + lVar41;
  _objc_loadWeakRetained();
  lVar18 = lVar41;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = puVar31;
  func_0x00010c0642a0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar20 = lVar48;
  func_0x00010c294760();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112721e18;
  _objc_loadWeakRetained();
  lVar22 = lVar12;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_150,auStack_80);
  lVar42 = param_1 + lVar42;
  _objc_loadWeakRetained();
  lVar24 = lVar42;
  func_0x00010c23c580();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + lVar44;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010c08d880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0405e0();
  lVar43 = (long)_DAT_112721e1c;
  uVar47 = *(undefined8 *)(param_1 + lVar43);
  *(undefined **)(param_1 + lVar43) = puVar36;
  _objc_release(uVar47);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar24);
  _objc_release(lVar42);
  _objc_release(lVar22);
  _objc_release(lVar12);
  _objc_release(lVar20);
  _objc_release(lVar48);
  _objc_release(puVar40);
  _objc_release(lVar18);
  _objc_release(lVar41);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar39);
  _objc_release(puVar38);
  _objc_release(lVar37);
  _objc_release(lVar46);
  _objc_release(lVar25);
  _objc_release(lVar4);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar43));
  _objc_destroyWeak(auStack_150);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 10535be5c; end: 10535bfb3;  */

void FUN_10535be5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf23a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10535bfb4; end: 10535c02f; -[SCRegistrationEntryPoint _createRegistrationFeatureLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535bfb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b7ac0;
  _objc_alloc(PTR_PTR_1126b7ac0);
  param_1 = param_1 + _DAT_112721dc8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03dc40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10535c030; end: 10535c0cf; -[SCRegistrationEntryPoint _registrationChallenge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535c030(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + _DAT_112721e08;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c13d740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c13d700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1279e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10535c0d0; end: 10535c17f; -[SCRegistrationEntryPoint _shouldShowCombinedDisplayNameLabel] */

undefined8 FUN_10535c0d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam00000001136bb590 != -1) {
    func_0x00010002a2fc(0x1136bb590,&PTR___NSConcreteGlobalBlock_11087d698);
  }
  if ((bRam00000001136bb573 & 1) == 0) {
    FUN_10535c180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf1f440();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10535c180; end: 10535c1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535c180(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112721dec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10535c1a4; end: 10535c21b; -[SCRegistrationEntryPoint _shouldSkipUsernameIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10535c1a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112721e20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf35300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c234aa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 10535c21c; end: 10535c33f; -[SCRegistrationEntryPoint _shouldCombineDisplayNameAndBirthday] */

byte FUN_10535c21c(undefined8 param_1)

{
  byte bVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (lRam00000001136bb590 != -1) {
    func_0x00010002a2fc(0x1136bb590,&PTR___NSConcreteGlobalBlock_11087d698);
  }
  if ((bRam00000001136bb573 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x10535c2dc;
    puStack_30 = &UNK_110842e18;
    bVar1 = bRam00000001136bb570;
    if (lRam00000001136bb578 != -1) {
      uStack_28 = param_1;
      func_0x00010002a2fc(0x1136bb578,&puStack_48);
      bVar1 = bRam00000001136bb570;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10535c340; end: 10535c42b; -[SCRegistrationEntryPoint _shouldShowKoreanUserConsentChecklist] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10535c340(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (lRam00000001136bb590 != -1) {
    func_0x00010002a2fc(0x1136bb590,&PTR___NSConcreteGlobalBlock_11087d698);
  }
  if ((bRam00000001136bb573 & 1) == 0) {
    param_1 = param_1 + _DAT_112721e24;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010c0d2660();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c083f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
    if (lVar4 == 0) {
      bVar1 = false;
    }
    else {
      lVar2 = lVar4;
      func_0x00010bf32ee0(lVar4);
      bVar1 = lVar2 == 0;
    }
    _objc_release(lVar4);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10535c42c; end: 10535c553; -[SCRegistrationEntryPoint _shouldUseAsciiOnlyPassword] */

byte FUN_10535c42c(undefined8 param_1)

{
  byte bVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (lRam00000001136bb590 != -1) {
    func_0x00010002a2fc(0x1136bb590,&PTR___NSConcreteGlobalBlock_11087d698);
  }
  if ((bRam00000001136bb573 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x10535c4ec;
    puStack_30 = &UNK_110842e18;
    bVar1 = bRam00000001136bb571;
    if (lRam00000001136bb580 != -1) {
      uStack_28 = param_1;
      func_0x00010002a2fc(0x1136bb580,&puStack_48);
      bVar1 = bRam00000001136bb571;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10535c554; end: 10535c67b; -[SCRegistrationEntryPoint _shouldDisablePredictiveText] */

byte FUN_10535c554(undefined8 param_1)

{
  byte bVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (lRam00000001136bb590 != -1) {
    func_0x00010002a2fc(0x1136bb590,&PTR___NSConcreteGlobalBlock_11087d698);
  }
  if ((bRam00000001136bb573 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x10535c614;
    puStack_30 = &UNK_110842e18;
    bVar1 = bRam00000001136bb572;
    if (lRam00000001136bb588 != -1) {
      uStack_28 = param_1;
      func_0x00010002a2fc(0x1136bb588,&puStack_48);
      bVar1 = bRam00000001136bb572;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10535c67c; end: 10535c69b; -[SCRegistrationEntryPoint cosServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535c67c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112721df4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10535c69c; end: 10535c6af; -[SCRegistrationEntryPoint setCosServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535c69c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112721df4,param_3);
  return;
}



/* Entry: 10535c6b0; end: 10535c88f; -[SCRegistrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535c6b0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721e0c);
  _objc_destroyWeak(param_1 + _DAT_112721df4);
  _objc_storeStrong(param_1 + _DAT_112721de0,0);
  _objc_storeStrong(param_1 + _DAT_112721ddc,0);
  _objc_storeStrong(param_1 + _DAT_112721dd8,0);
  _objc_destroyWeak(param_1 + _DAT_112721e04);
  _objc_destroyWeak(param_1 + _DAT_112721e00);
  _objc_destroyWeak(param_1 + _DAT_112721df8);
  _objc_destroyWeak(param_1 + _DAT_112721dfc);
  _objc_destroyWeak(param_1 + _DAT_112721de4);
  _objc_destroyWeak(param_1 + _DAT_112721e08);
  _objc_destroyWeak(param_1 + _DAT_112721e24);
  _objc_destroyWeak(param_1 + _DAT_112721e2c);
  _objc_destroyWeak(param_1 + _DAT_112721dd4);
  _objc_destroyWeak(param_1 + _DAT_112721dd0);
  _objc_destroyWeak(param_1 + _DAT_112721dc8);
  _objc_destroyWeak(param_1 + _DAT_112721e28);
  _objc_destroyWeak(param_1 + _DAT_112721e14);
  _objc_destroyWeak(param_1 + _DAT_112721de8);
  _objc_destroyWeak(param_1 + _DAT_112721dcc);
  _objc_destroyWeak(param_1 + _DAT_112721e20);
  _objc_destroyWeak(param_1 + _DAT_112721e10);
  _objc_destroyWeak(param_1 + _DAT_112721dc4);
  _objc_destroyWeak(param_1 + _DAT_112721df0);
  _objc_destroyWeak(param_1 + _DAT_112721dec);
  _objc_destroyWeak(param_1 + _DAT_112721dc0);
  _objc_destroyWeak(param_1 + _DAT_112721e18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721e1c,0);
  return;
}



/* Entry: 10535c890; end: 10535c907; -[SCRegistrationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535c890(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b7ac8;
  _objc_alloc(PTR_PTR_1126b7ac8);
  lVar2 = param_1;
  func_0x00010bdf23e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021f40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112721e30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535c908; end: 10535c9bf; -[SCRegistrationServicesEntryPoint _createRegistrationService] */

void FUN_10535c908(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10535c9c0; end: 10535c9ff;  */

void FUN_10535c9c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdee580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10535ca00; end: 10535cf6f; -[SCRegistrationServicesEntryPoint _createGrpcRegistrationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535ca00(long param_1)

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
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uStack_d0;
  
  puVar1 = PTR_PTR_1126aee18;
  _objc_alloc();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112721e80;
    _objc_loadWeakRetained(lVar24);
  }
  lVar25 = lVar24;
  func_0x00010c2970e0(lVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffeee0();
  _objc_release(lVar25);
  _objc_release(lVar24);
  lVar24 = param_1 + _DAT_112721e34;
  _objc_loadWeakRetained();
  lVar2 = lVar24;
  FUN_105407ab4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar24 = param_1 + _DAT_112721e38;
  _objc_loadWeakRetained();
  lVar3 = lVar24;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar24 = param_1 + _DAT_112721e3c;
  _objc_loadWeakRetained();
  lVar4 = lVar24;
  func_0x00010c127ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar24 = param_1 + _DAT_112721e40;
  _objc_loadWeakRetained();
  lVar5 = lVar24;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar24 = param_1 + _DAT_112721e44;
  _objc_loadWeakRetained();
  lVar6 = lVar24;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar24 = param_1 + _DAT_112721e48;
  _objc_loadWeakRetained();
  lVar7 = lVar24;
  func_0x00010bfac320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar24 = param_1 + _DAT_112721e4c;
  _objc_loadWeakRetained();
  lVar8 = lVar24;
  func_0x00010c105dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar25 = (long)_DAT_112721e50;
  lVar24 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar9 = lVar24;
  func_0x00010bf32dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar10 = lVar25;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar24 = param_1 + _DAT_112721e54;
  _objc_loadWeakRetained();
  lVar11 = lVar24;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar25 = (long)_DAT_112721e58;
  lVar24 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar12 = lVar24;
  func_0x00010c23c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar24 = lVar25;
  func_0x00010bfe6100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112721e7c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar25;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_112721e5c;
  _objc_loadWeakRetained();
  lVar14 = lVar25;
  func_0x00010c127c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_112721e60;
  _objc_loadWeakRetained();
  lVar15 = lVar25;
  func_0x00010c1279a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  lVar25 = param_1 + _DAT_112721e64;
  _objc_loadWeakRetained();
  lVar16 = lVar25;
  func_0x00010bf70760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar25);
  puVar17 = PTR_PTR_1126b7ad0;
  _objc_alloc();
  puVar18 = PTR_PTR_1126af568;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = (undefined *)(param_1 + _DAT_112721e68);
  _objc_loadWeakRetained();
  uStack_d0 = puVar19;
  if (puVar19 == (undefined *)0x0) {
    uStack_d0 = PTR_PTR_1126af570;
    _objc_opt_new();
  }
  lVar25 = param_1 + _DAT_112721e6c;
  _objc_loadWeakRetained();
  lVar20 = lVar25;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112721e70;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c0d7c20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112721e74;
  _objc_loadWeakRetained();
  lVar23 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be42960();
  func_0x00010c058f60();
  _objc_release(lVar23);
  _objc_release(param_1);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar25);
  if (puVar19 == (undefined *)0x0) {
    _objc_release(uStack_d0);
  }
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar24);
  _objc_release(lVar12);
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
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10535cf70; end: 10535cfd3; -[SCRegistrationServicesEntryPoint _isPhoneEmailFirstEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10535cf70(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112721e54;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106bfda74();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 1;
}



/* Entry: 10535cfd4; end: 10535d0f3; -[SCRegistrationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535cfd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721e30,0);
  _objc_destroyWeak(param_1 + _DAT_112721e74);
  _objc_destroyWeak(param_1 + _DAT_112721e70);
  _objc_destroyWeak(param_1 + _DAT_112721e6c);
  _objc_destroyWeak(param_1 + _DAT_112721e64);
  _objc_destroyWeak(param_1 + _DAT_112721e80);
  _objc_destroyWeak(param_1 + _DAT_112721e60);
  _objc_destroyWeak(param_1 + _DAT_112721e7c);
  _objc_destroyWeak(param_1 + _DAT_112721e40);
  _objc_destroyWeak(param_1 + _DAT_112721e5c);
  _objc_destroyWeak(param_1 + _DAT_112721e68);
  _objc_destroyWeak(param_1 + _DAT_112721e50);
  _objc_destroyWeak(param_1 + _DAT_112721e4c);
  _objc_destroyWeak(param_1 + _DAT_112721e3c);
  _objc_destroyWeak(param_1 + _DAT_112721e38);
  _objc_destroyWeak(param_1 + _DAT_112721e34);
  _objc_destroyWeak(param_1 + _DAT_112721e54);
  _objc_destroyWeak(param_1 + _DAT_112721e48);
  _objc_destroyWeak(param_1 + _DAT_112721e58);
  _objc_destroyWeak(param_1 + _DAT_112721e44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721e78);
  return;
}



/* Entry: 10535d0f4; end: 10535d167; -[SCRegistrationFeatureLogger initWithRegistrationUserNotTrackedLogger:] */

undefined1 * FUN_10535d0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7a80;
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



/* Entry: 10535d168; end: 10535d1cf; -[SCRegistrationFeatureLogger logRegistrationUserDisplayNamePageviewWithVersion:] */

void FUN_10535d168(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7ad8;
  _objc_opt_new(PTR_PTR_1126b7ad8);
  func_0x00010c1e99a0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d1d0; end: 10535d223; -[SCRegistrationFeatureLogger logRegistrationUserDisplayNameSubmit] */

void FUN_10535d1d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7ae0;
  _objc_opt_new(PTR_PTR_1126b7ae0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d224; end: 10535d2b7; -[SCRegistrationFeatureLogger logRegistrationUserSuggestedUsernamePageview:] */

void FUN_10535d224(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7ae8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c247520();
  _objc_release(param_3);
  if (2 < uVar2) {
    uVar2 = 3;
  }
  func_0x00010c206c40(puVar1,param_2,uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d2b8; end: 10535d36f; -[SCRegistrationFeatureLogger logRegistrationSuggestedUsernameSwitchToUserInput:] */

void FUN_10535d2b8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7af0;
  _objc_opt_new(PTR_PTR_1126b7af0);
  uVar2 = param_3;
  func_0x00010c247520();
  if (2 < uVar2) {
    uVar2 = 3;
  }
  func_0x00010c206c40(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c2947c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010537cb4c();
  func_0x00010c1b5460(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10535d370; end: 10535d3d7; -[SCRegistrationFeatureLogger logRegistrationUserUsernamePageviewWithVersion:] */

void FUN_10535d370(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7af8;
  _objc_opt_new(PTR_PTR_1126b7af8);
  func_0x00010c1e99a0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d3d8; end: 10535d48f; -[SCRegistrationFeatureLogger logRegistrationUsernameAccept:] */

void FUN_10535d3d8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7b00;
  _objc_opt_new(PTR_PTR_1126b7b00);
  uVar2 = param_3;
  func_0x00010c247520();
  if (2 < uVar2) {
    uVar2 = 3;
  }
  func_0x00010c206c40(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c2947c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010537cb4c();
  func_0x00010c1b5460(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10535d490; end: 10535d4e3; -[SCRegistrationFeatureLogger logFeatureUsernameSuggestionRefreshUse] */

void FUN_10535d490(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7b08;
  _objc_opt_new(PTR_PTR_1126b7b08);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d4e4; end: 10535d55b; -[SCRegistrationFeatureLogger logResponseSuggestUsername:success:isAvailable:suggestions:] */

void FUN_10535d4e4(long param_1)

{
  undefined8 in_x5;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(in_x5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae700();
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10535d55c; end: 10535d5c3; -[SCRegistrationFeatureLogger logRegistrationUserPasswordPageviewWithVersion:] */

void FUN_10535d55c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7b10;
  _objc_opt_new(PTR_PTR_1126b7b10);
  func_0x00010c1e99a0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d5c4; end: 10535d62b; -[SCRegistrationFeatureLogger logFeaturePasswordShowHideToggle:] */

void FUN_10535d5c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7b18;
  _objc_opt_new(PTR_PTR_1126b7b18);
  func_0x00010c216a40();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d62c; end: 10535d6bb; -[SCRegistrationFeatureLogger logResponseRegister:success:errorSource:] */

void FUN_10535d62c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7b20;
  _objc_opt_new(PTR_PTR_1126b7b20);
  func_0x00010c1b92e0();
  func_0x00010c20f8a0(puVar1,param_2,param_4);
  func_0x00010c197280(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d6bc; end: 10535d75f; -[SCRegistrationFeatureLogger logUserCreateAccount] */

void FUN_10535d6bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7b28;
  _objc_opt_new(PTR_PTR_1126b7b28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c23c480(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d760; end: 10535d88f; -[SCRegistrationFeatureLogger logRegistrationUserInitialInfoSuccessWithUsername:userId:editBirthdayYear:editBirthdayMonth:editBirthdayDay:attemptCount:withVersion:preferredVerificationMethod:] */

void FUN_10535d760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,uint param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126b7b30;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1935e0();
  func_0x00010c1935c0(puVar1,param_2,param_6);
  func_0x00010c1935a0(puVar1,param_2,param_7);
  func_0x00010c16b460(puVar1,param_2,param_8);
  func_0x00010c1e99a0(puVar1,param_2,param_9);
  func_0x00010c21e620(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c21e4c0(puVar1,param_2,param_4);
  _objc_release(param_4);
  if (param_10 < 10) {
    ppuVar3 = (undefined **)(&PTR_PTR_11087d6e8)[param_10];
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daf6b8;
  }
  func_0x00010c1e0320(puVar1,param_2,ppuVar3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d890; end: 10535d91f; -[SCRegistrationFeatureLogger logRegistrationUserInitialInfoFail:attemptCount:withVersion:] */

void FUN_10535d890(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7b38;
  _objc_opt_new(PTR_PTR_1126b7b38);
  func_0x00010c1e97e0();
  func_0x00010c16b460(puVar1,param_2,param_4);
  func_0x00010c1e99a0(puVar1,param_2,param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d920; end: 10535d95f; -[SCRegistrationFeatureLogger logPageView:] */

void FUN_10535d920(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abcc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10535d960; end: 10535d9c7; -[SCRegistrationFeatureLogger logFeatureFieldAutofill:] */

void FUN_10535d960(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7b40;
  _objc_opt_new(PTR_PTR_1126b7b40);
  func_0x00010c19b800();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535d9c8; end: 10535da17; -[SCRegistrationFeatureLogger logRegistrationFlowEvent:pageType:] */

void FUN_10535d9c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10535da18; end: 10535db0f; -[SCRegistrationFeatureLogger logRegistrationCreateAccountWithUnverifiedNGOSignUp:] */

void FUN_10535da18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b7b48;
  _objc_opt_new(PTR_PTR_1126b7b48);
  func_0x00010c17aae0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c282c60(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9effdc(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd1ff8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0();
  _objc_release(uVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535db10; end: 10535db7f; -[SCRegistrationFeatureLogger logRegistrationNetworkRequestWithEndpoint:requestId:] */

void FUN_10535db10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adaa0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10535db80; end: 10535dc1f; -[SCRegistrationFeatureLogger logRegistrationNetworkResponseWithEndpoint:requestId:success:grpcStatusCode:protoStatusCode:latencyMS:] */

void FUN_10535db80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adac0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10535dc20; end: 10535dc9b; -[SCRegistrationFeatureLogger logRegistrationUserEmailSuccess:] */

void FUN_10535dc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7b50;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c194140();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535dc9c; end: 10535dca7; -[SCRegistrationFeatureLogger .cxx_destruct] */

void FUN_10535dc9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10535dca8; end: 10535dd1b; -[SCRegistrationVerificationLogger initWithUserVerificationEventLogger:] */

undefined1 * FUN_10535dca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7a88;
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



/* Entry: 10535dd1c; end: 10535dd67; -[SCRegistrationVerificationLogger logChallengeReceived:] */

void FUN_10535dd1c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 4) {
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ac2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_logPhoneEntryBegin_112608ac8);
      return;
    }
    if (param_3 == 2) {
LAB_10535dd50:
                    /* WARNING: Could not recover jumptable at 0x00010c0abcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_logPageViewAndReach__112608948,0x2e);
      return;
    }
  }
  else {
    if (param_3 == 9) goto LAB_10535dd50;
    if (param_3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010c0a55f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_logEmailBegin_112606f88);
      return;
    }
  }
  return;
}



/* Entry: 10535dd68; end: 10535de5f; -[SCRegistrationVerificationLogger logChallengeAttemptedWithChallengeType:loggingData:] */

void FUN_10535dd68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if (param_3 < 4) {
    if (param_3 == 1) {
      puVar1 = PTR_PTR_1126af2d8;
      _objc_alloc(PTR_PTR_1126af2d8);
      uVar2 = param_4;
      func_0x00010c0faf60(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf53280(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02c420(puVar1,param_2,uVar2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010c0b13e0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
      _objc_release(puVar1);
      goto LAB_10535de48;
    }
    if (param_3 != 2) goto LAB_10535de48;
  }
  else if (param_3 != 9) {
    if (param_3 == 4) {
      func_0x00010c0b13a0(*(undefined8 *)(param_1 + 8));
    }
    goto LAB_10535de48;
  }
  func_0x00010c0ac380(*(undefined8 *)(param_1 + 8),param_2,0);
LAB_10535de48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10535de60; end: 10535e083; -[SCRegistrationVerificationLogger logChallengeResultedWithChallengeType:challengeStatusCode:loggingData:] */

void FUN_10535de60(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  if (param_3 < 4) {
    if (param_3 != 1) {
      if (param_3 != 2) goto LAB_10535e034;
      goto LAB_10535df04;
    }
    if (3 < param_4 - 2U) {
      if (2 < param_4 + 1U) goto LAB_10535e034;
      lVar2 = param_5;
      func_0x00010c07e4a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf53280(param_5);
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010c0afa60();
        goto LAB_10535e030;
      }
      func_0x00010c0ac340(uVar3,param_2,lVar1);
      _objc_release(lVar1);
      lVar1 = param_5;
      func_0x00010c076040();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf1f3c0();
      _objc_release(lVar1);
      if ((int)lVar2 == 0) goto LAB_10535e034;
      goto LAB_10535df28;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf53280(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac320(uVar3,param_2,lVar1);
  }
  else {
    if (param_3 != 9) {
      if (param_3 != 4) goto LAB_10535e034;
      if (param_4 - 2U < 4) {
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf8d6c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be1ec40(param_1,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a5620(uVar3,param_2,param_1);
      }
      else {
        if (2 < param_4 + 1U) goto LAB_10535e034;
        uVar3 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf8d6c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be1ec40(param_1,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a5640(uVar3,param_2,param_1);
      }
      _objc_release(param_1);
      goto LAB_10535e030;
    }
LAB_10535df04:
    if (param_4 - 2U < 4) {
      func_0x00010c0ac360(*(undefined8 *)(param_1 + 8));
      goto LAB_10535e034;
    }
    if (2 < param_4 + 1U) goto LAB_10535e034;
LAB_10535df28:
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_5;
    func_0x00010c0739c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac3a0(uVar3,param_2,lVar1 != 0);
  }
LAB_10535e030:
  _objc_release(lVar1);
LAB_10535e034:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10535e084; end: 10535e167; -[SCRegistrationVerificationLogger _getEmailDomain:] */

void FUN_10535e084(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010c25d0a0(param_3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    ppuVar4 = ppuVar3;
    func_0x00010c11f420(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110dae4f8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x7fffffffffffffff) {
      ppuVar5 = ppuVar3;
      func_0x00010c260c00(ppuVar3,param_2,(long)ppuVar4 + 1);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar1 = ppuVar5;
      }
      _objc_retain(ppuVar1);
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10535e168; end: 10535e173; -[SCRegistrationVerificationLogger .cxx_destruct] */

void FUN_10535e168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10535e174; end: 10535e2cf; -[SCNGORegistrationDisplayNameViewController initWithScreen:viewConfig:privacyPolicyViewFactory:shouldShowCombinedDisplayNameLabel:shouldShowKoreanUserConsentChecklist:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10535e174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_4);
  uVar4 = param_4;
  func_0x00010bf602a0(param_4);
  uVar1 = param_4;
  func_0x00010c276d00(param_4);
  uVar2 = param_4;
  func_0x00010bf4fb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_68 = PTR_PTR_1126e7a90;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithStepIndex_totalSteps_con_1125f0b70,uVar4,uVar1,uVar2,
                      param_8);
  _objc_release(param_8);
  _objc_release(uVar2);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112721e8c;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + (long)_DAT_112721e90) = param_6;
    *(undefined1 *)((long)puVar3 + (long)_DAT_112721e94) = param_7;
    lVar5 = (long)_DAT_112721e98;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined8 *)((long)puVar3 + lVar5) = param_5;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + (long)_DAT_112721e9c) = 1;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 10535e2d0; end: 10535e2d7; -[SCNGORegistrationDisplayNameViewController pageViewName] */

undefined8 FUN_10535e2d0(void)

{
  return 0x54;
}



/* Entry: 10535e2d8; end: 10535e327; -[SCNGORegistrationDisplayNameViewController viewDidLoad] */

void FUN_10535e2d8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7a90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 10535e328; end: 10535e3a7; -[SCNGORegistrationDisplayNameViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535e328(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7a90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  if (*(char *)(param_1 + _DAT_112721e9c) == '\x01') {
    lVar1 = 0x14;
    if (*(char *)(param_1 + _DAT_112721e90) == '\0') {
      lVar1 = 0x18;
    }
    func_0x00010bf179a0(*(undefined8 *)(param_1 + *(int *)(&DAT_112721e8c + lVar1)));
  }
  return;
}



/* Entry: 10535e3a8; end: 10535e467; -[SCNGORegistrationDisplayNameViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10535e3a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + _DAT_112721ea4)) {
    func_0x00010bf179a0();
  }
  else if (((param_3 == *(long *)(param_1 + _DAT_112721ea8)) ||
           (param_3 == *(long *)(param_1 + _DAT_112721ea0))) &&
          (lVar1 = param_1, func_0x00010bf2c700(), (int)lVar1 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112721e8c);
    puVar2 = PTR_PTR_1126b7b58;
    func_0x00010c25f080(PTR_PTR_1126b7b58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 10535e468; end: 10535e53f; -[SCNGORegistrationDisplayNameViewController textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535e468(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b7b58;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112721e8c);
  lVar1 = 0x14;
  if (*(char *)(param_1 + _DAT_112721e90) == '\0') {
    lVar1 = 0x18;
  }
  uVar2 = *(undefined8 *)(param_1 + *(int *)(&DAT_112721e8c + lVar1));
  func_0x00010c26bea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112721ea8);
  func_0x00010c26bea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065a00(puVar4,param_2,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10535e540; end: 10535e58b; -[SCNGORegistrationDisplayNameViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535e540(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721e8c);
  puVar1 = PTR_PTR_1126b7b58;
  func_0x00010c25f080(PTR_PTR_1126b7b58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535e58c; end: 10535e5d7; -[SCNGORegistrationDisplayNameViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535e58c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721e8c);
  puVar1 = PTR_PTR_1126b7b58;
  func_0x00010c268d80(PTR_PTR_1126b7b58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535e5d8; end: 10535e627; -[SCNGORegistrationDisplayNameViewController checklistView:allChecked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535e5d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721e8c);
  puVar1 = PTR_PTR_1126b7b58;
  func_0x00010c087400(PTR_PTR_1126b7b58,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535e628; end: 10535e677; -[SCNGORegistrationDisplayNameViewController checklistView:selectedLinkWithURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535e628(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112721e8c);
  puVar1 = PTR_PTR_1126b7b58;
  func_0x00010c158da0(PTR_PTR_1126b7b58,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10535e678; end: 10535e727; -[SCNGORegistrationDisplayNameViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535e678(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721e8c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10535e728; end: 10535e76f;  */

void FUN_10535e728(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10535e770; end: 10535ea67; -[SCNGORegistrationDisplayNameViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535e770(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf2c700(param_3);
  func_0x00010c177be0(param_1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010bf2c9c0(param_3);
  func_0x00010c177c20(param_1,param_2,lVar2);
  lVar5 = (long)_DAT_112721ea0;
  uVar3 = *(ulong *)(param_1 + lVar5);
  lVar2 = param_3;
  if (uVar3 == 0) {
    lVar6 = (long)_DAT_112721ea4;
    uVar4 = *(ulong *)(param_1 + lVar6);
    func_0x00010c26bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bfb18a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0720c0(uVar4,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(uVar4);
    if ((uVar3 & 1) == 0) {
      lVar5 = param_3;
      func_0x00010bfb18a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2133c0(*(undefined8 *)(param_1 + lVar6),param_2,lVar5);
      _objc_release(lVar5);
    }
    lVar5 = param_3;
    func_0x00010bfb18c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161240(*(undefined8 *)(param_1 + lVar6),param_2,lVar5);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010bfb18c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0;
    if (lVar5 != 0) {
      uVar1 = 4;
    }
    func_0x00010c209fc0(*(undefined8 *)(param_1 + lVar6),param_2,uVar1);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010bf2c700(param_3);
    func_0x00010c195580(*(undefined8 *)(param_1 + lVar6),param_2,(uint)lVar5 ^ 1);
    lVar5 = (long)_DAT_112721ea8;
    uVar4 = *(ulong *)(param_1 + lVar5);
    func_0x00010c26bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c089720(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0720c0(uVar4,param_2,lVar6);
    _objc_release(lVar6);
    _objc_release(uVar4);
    if ((uVar3 & 1) == 0) {
      lVar6 = param_3;
      func_0x00010c089720(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2133c0(*(undefined8 *)(param_1 + lVar5),param_2,lVar6);
      _objc_release(lVar6);
    }
    lVar6 = param_3;
    func_0x00010c089740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161240(*(undefined8 *)(param_1 + lVar5),param_2,lVar6);
    _objc_release(lVar6);
    func_0x00010c089740();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bfb18a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,lVar6);
    _objc_release(lVar6);
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      lVar6 = param_3;
      func_0x00010bfb18a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2133c0(*(undefined8 *)(param_1 + lVar5),param_2,lVar6);
      _objc_release(lVar6);
    }
    lVar6 = param_3;
    func_0x00010bfb18c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161240(*(undefined8 *)(param_1 + lVar5),param_2,lVar6);
    _objc_release(lVar6);
    func_0x00010bfb18c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = 4;
  }
  func_0x00010c209fc0(*(undefined8 *)(param_1 + lVar5),param_2,uVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf2c700(param_3);
  func_0x00010c195580(*(undefined8 *)(param_1 + lVar5),param_2,(uint)lVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10535ea68; end: 10535f36b; -[SCNGORegistrationDisplayNameViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10535ea68(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  double in_d3;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar25);
  cVar1 = *(char *)(param_1 + _DAT_112721e90);
  puVar2 = PTR_PTR_1126af0a0;
  _objc_alloc();
  lVar25 = param_1;
  lStack_e0 = param_1;
  lStack_100 = param_1;
  if (cVar1 == '\x01') {
    puVar5 = puVar2;
    func_0x00010537c36c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010537c384();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051880();
    lVar27 = (long)_DAT_112721ea0;
    uVar24 = *(undefined8 *)(param_1 + lVar27);
    *(undefined **)(param_1 + lVar27) = puVar2;
    _objc_release(uVar24);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar27));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar27));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27));
    lVar7 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar3 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar25;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = lStack_e0;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lStack_f0 = lStack_e8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uStack_d8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lStack_108 = lStack_100;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lStack_110 = lStack_108;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar4;
    func_0x00010bf493c0(in_d3 / 6.0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar2,puVar9,puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar2;
    func_0x00010537c30c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010537c30c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051880();
    lVar30 = (long)_DAT_112721ea4;
    uVar24 = *(undefined8 *)(param_1 + lVar30);
    *(undefined **)(param_1 + lVar30) = puVar2;
    _objc_release(uVar24);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar30));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar30));
    func_0x00010c213300(*(undefined8 *)(param_1 + lVar30));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar30));
    lVar7 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar7);
    puVar2 = PTR_PTR_1126af0a0;
    _objc_alloc();
    puVar5 = puVar2;
    func_0x00010537c324();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010537c33c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051880();
    lVar31 = (long)_DAT_112721ea8;
    uVar24 = *(undefined8 *)(param_1 + lVar31);
    *(undefined **)(param_1 + lVar31) = puVar2;
    _objc_release(uVar24);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c16d0a0(*(undefined8 *)(param_1 + lVar31));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar31));
    func_0x00010c213300(*(undefined8 *)(param_1 + lVar31));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar31));
    lVar7 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar3 = *(undefined8 *)(param_1 + lVar30);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar25;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = *(undefined8 *)(param_1 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = lStack_e0;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lStack_f0 = lStack_e8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uStack_d8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lStack_108 = lStack_100;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lStack_110 = lStack_108;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar4;
    func_0x00010bf493c0(in_d3 / 20.0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(param_1 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_1;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar27;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1;
    func_0x00010c152980(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar26;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_1 + lVar30);
    func_0x00010bf1ff80(uVar28);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar20;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar14);
    _objc_release(uVar28);
    _objc_release(uVar20);
    _objc_release(uVar29);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar26);
    _objc_release(uVar16);
    _objc_release(puVar5);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar27);
  }
  _objc_release(puVar9);
  _objc_release(uStack_118);
  _objc_release(lStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_100);
  _objc_release(uVar4);
  _objc_release(uStack_f8);
  _objc_release(lStack_f0);
  _objc_release(lStack_e8);
  _objc_release(lStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uVar24);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar25);
  _objc_release(uVar3);
  lVar25 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar25;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar8;
  func_0x00010c086ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010bf493c0(0xc05e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar5);
  _objc_release(lVar10);
  _objc_release(lVar27);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar25);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x00010be39ee0(param_1);
  func_0x00010be3a280(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126af798;
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar2[_DAT_112721e94] == '\x01') {
    lVar23 = 0x14;
    if (puVar2[_DAT_112721e90] == '\0') {
      lVar23 = 0x1c;
    }
    uVar28 = *(undefined8 *)(puVar2 + *(int *)(&DAT_112721e8c + lVar23));
    _objc_retain(uVar28);
    _objc_alloc();
    func_0x00010c00a2c0();
    lVar23 = (long)_DAT_112721eac;
    uVar24 = *(undefined8 *)(puVar2 + lVar23);
    *(undefined **)(puVar2 + lVar23) = puVar5;
    _objc_release(uVar24);
    puVar5 = puVar2;
    func_0x00010c152980(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    func_0x00010c219b60(*(undefined8 *)(puVar2 + lVar23));
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(puVar2 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(puVar2 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(puVar2 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar28;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar20;
    func_0x00010bf493c0(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar21);
    _objc_release(uVar3);
    _objc_release(uVar14);
    _objc_release(uVar20);
    _objc_release(uVar29);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(uVar24);
    _objc_release(uVar28);
    _objc_release(puVar15);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(uVar4);
    puVar2[_DAT_112721e9c] = 0;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6de0();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *(long *)(puVar2 + _DAT_112721e98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar23;
  func_0x00010c113f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar23);
  puVar5 = puVar2;
  func_0x00010c29bf00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar5);
  func_0x00010c219b60(lVar25);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar23 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar25;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar2;
  func_0x00010c152980(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar25;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar2;
  func_0x00010bf25ac0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar5);
  _objc_release(puVar22);
  _objc_release(lVar11);
  _objc_release(puVar21);
  _objc_release(lVar10);
  _objc_release(lVar27);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(puVar15);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(lVar23);
  lVar23 = lVar25;
  func_0x00010bfd8be0();
  if ((int)lVar23 != 0) {
    func_0x00010c12c960(lVar25);
    puVar5 = puVar2;
    func_0x00010c152980(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    lVar23 = 0x14;
    if (puVar2[_DAT_112721e90] == '\0') {
      lVar23 = 0x1c;
    }
    lVar7 = 0x20;
    if (puVar2[_DAT_112721e94] == '\0') {
      lVar7 = lVar23;
    }
    uVar29 = *(undefined8 *)(puVar2 + *(int *)(&DAT_112721e8c + lVar7));
    _objc_retain(uVar29);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar23 = lVar25;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar25;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x00010c152980(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf4c920();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar25;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar29;
    func_0x00010bf1ff80(uVar29);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar21);
    _objc_release(lVar11);
    _objc_release(uVar24);
    _objc_release(lVar10);
    _objc_release(lVar27);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar29);
    _objc_release(puVar15);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(lVar23);
    puVar2[_DAT_112721e9c] = 0;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6de0();
    _objc_release(puVar2);
  }
  _objc_release(lVar25);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar25 + _DAT_112721eac,0);
  _objc_storeStrong(lVar25 + _DAT_112721e98,0);
  _objc_storeStrong(lVar25 + _DAT_112721ea0,0);
  _objc_storeStrong(lVar25 + _DAT_112721ea8,0);
  _objc_storeStrong(lVar25 + _DAT_112721ea4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar25 + _DAT_112721e8c,0);
  return;
}


