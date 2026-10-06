/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105946a0c; end: 105946aeb; -[SCFideliusRetryService requestClientInitiatedRetry:source:] */

void FUN_105946a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c13f740(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a30c0(uVar2,param_2,param_4,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  FUN_1059467f8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2a0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105946aec; end: 105946b27; -[SCFideliusRetryService .cxx_destruct] */

void FUN_105946aec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105946b28; end: 105946c07; -[SCFideliusS2REntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105946b28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c0628;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272c648;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfac540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0271a0(puVar1,param_2,lVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272c64c);
  *(undefined **)(param_1 + _DAT_11272c64c) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11272c650;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1268c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105946c08; end: 105946c5b; -[SCFideliusS2REntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105946c08(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272c648);
  _objc_destroyWeak(param_1 + _DAT_11272c650);
  _objc_destroyWeak(param_1 + _DAT_11272c654);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272c64c,0);
  return;
}



/* Entry: 105946c5c; end: 105946ccf; -[SCFideliusS2RLogProvider initWithLogger:] */

undefined1 * FUN_105946c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eafa0;
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



/* Entry: 105946cd0; end: 105946d87; -[SCFideliusS2RLogProvider provideShakeLog] */

void FUN_105946cd0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  ppuVar2 = *(undefined ***)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c15eaa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e10c98;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuVar3 = ppuVar1;
  func_0x00010bf64920(ppuVar1,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126b7488;
  _objc_alloc(PTR_PTR_1126b7488);
  func_0x00010c0270a0();
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105946d88; end: 105946d93; -[SCFideliusS2RLogProvider .cxx_destruct] */

void FUN_105946d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105946d94; end: 105946e17; -[SCFideliusServiceCoordinator dataInvalidated] */

void FUN_105946d94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c0a0f60(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e10cd8);
  lVar1 = param_1;
  func_0x00010bfe6140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63c80();
  _objc_release(lVar1);
  func_0x00010c1a9ac0(param_1,param_2,0);
  func_0x00010c2055e0(param_1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  func_0x00010c161560(param_1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105946e18; end: 105946e9f; -[SCFideliusServiceCoordinator snapService:] */

void FUN_105946e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c243280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c06d280();
    _objc_release(lVar1);
  }
  func_0x00010c243280(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105946ea0; end: 105946ec7; -[SCFideliusServiceCoordinator retryService:] */

void FUN_105946ea0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105946ec8; end: 105946ecf; -[SCFideliusServiceCoordinator stopSnapService] */

void FUN_105946ec8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2055f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSnapService__11265efa0,0);
  return;
}



/* Entry: 105946ed0; end: 105946edb; -[SCFideliusServiceCoordinator snapService] */

void FUN_105946ed0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 105946edc; end: 105946ee3; -[SCFideliusServiceCoordinator retryService] */

undefined8 FUN_105946edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105946ee4; end: 105946f13; -[SCFideliusServiceCoordinator setRetryService:] */

void FUN_105946ee4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105946f14; end: 105946f43; -[SCFideliusServiceCoordinator setReEncryptionDelegate:] */

void FUN_105946f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105946f44; end: 105946fff; -[SCFideliusServiceCoordinator .cxx_destruct] */

void FUN_105946f44(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105947000; end: 1059470f3; -[SCFideliusSnapService _devicesForFriend:] */

void FUN_105947000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfac440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf71280(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1059470f4;
    puStack_48 = &UNK_1108c1128;
    _objc_retain(param_3);
    lVar1 = lVar3;
    uStack_40 = param_3;
    lStack_38 = param_1;
    func_0x000100504554(lVar3,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059470f4; end: 105947113;  */

void FUN_1059470f4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd3690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c0388,PTR_s_handshakeForFriend_deviceInfo_my_1125d2748,
             *(undefined8 *)(param_1 + 0x20),param_2,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30));
  return;
}



/* Entry: 105947114; end: 105947217; -[SCFideliusSnapService devicesForFriend:] */

void FUN_105947114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105947218;
  uStack_40 = 0x105947228;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105947218; end: 10594722f;  */

void FUN_105947218(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105947230; end: 105947273;  */

void FUN_105947230(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdfc020(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105947274; end: 1059472c7; -[SCFideliusTempIdentityManager init] */

undefined1 * FUN_105947274(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eafb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = 0;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1059472c8; end: 105947317; -[SCFideliusTempIdentityManager createTempIdentity] */

void FUN_1059472c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c0388;
  func_0x00010bf59620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105947318; end: 10594734f; -[SCFideliusTempIdentityManager consumeTempIdentity] */

void FUN_105947318(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105947350; end: 10594737b; -[SCFideliusTempIdentityManager .cxx_destruct] */

void FUN_105947350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10594737c; end: 10594742f; +[SCFideliusUserDatabaseManager databaseV2FileExists:] */

undefined * FUN_10594737c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_3);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0460;
  func_0x00010c291ae0(PTR_PTR_1126c0460,param_2,param_3,10,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c0f5800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 105947430; end: 105947507; -[SCFideliusUserDatabaseManager close] */

undefined1 FUN_105947430(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puVar2 = &UNK_10f3110b7;
  func_0x0001000ba800(&UNK_10f3110b7);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  func_0x0001000e2a84(puVar2);
  return uVar1;
}



/* Entry: 105947508; end: 10594758f;  */

void FUN_105947508(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  bVar1 = *(long *)(lVar3 + 0x30) == 0;
  if (bVar1) {
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a49c0();
    _objc_release(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
    *(undefined8 *)(lVar3 + 0x38) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = 0;
    _objc_release(uVar2);
    func_0x00010bf3d9e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = !bVar1;
  return;
}



/* Entry: 105947590; end: 1059475b7; -[SCFideliusUserDatabaseManager databaseName] */

void FUN_105947590(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059475b8; end: 1059475df; -[SCFideliusUserDatabaseManager hashedBeta] */

void FUN_1059475b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059475e0; end: 105947607; -[SCFideliusUserDatabaseManager friendDeviceInfoCacheV2] */

void FUN_1059475e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105947608; end: 10594762f; -[SCFideliusUserDatabaseManager keyProviderCache] */

void FUN_105947608(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105947630; end: 105947847; +[SCFideliusUserDatabaseManager deleteDatabaseWithName:version:source:logger:] */

void FUN_105947630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = &UNK_10f3110db;
  func_0x0001000ba800(&UNK_10f3110db);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c0460;
  func_0x00010c291ac0(PTR_PTR_1126c0460,param_2,param_3,param_4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfacbe0(puVar3,param_2,puVar7);
  _objc_release(puVar7);
  if ((int)puVar5 != 0) {
    puVar7 = puVar4;
    func_0x00010c0f5800(puVar4);
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    puVar5 = puVar3;
    func_0x00010c12cc40(puVar3,param_2,puVar7,&lStack_68);
    lVar1 = lStack_68;
    _objc_retain(lStack_68);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar5 & 1) == 0) {
      if (lVar1 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        lVar6 = lVar1;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3ec40();
        func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e0ea58);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
      }
      func_0x00010c0a7580(param_6,param_2,2,puVar7,param_5);
      _objc_release(puVar7);
    }
    else {
      func_0x00010c0a4c60(param_6,param_2,&PTR____CFConstantStringClassReference_110dab0d8,param_5);
    }
    _objc_release(lVar1);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105947848; end: 105947b13; +[SCFideliusUserDatabaseManager deleteDatabaseV2WithName:version:source:logger:] */

void FUN_105947848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = &UNK_10f311110;
  func_0x0001000ba800(&UNK_10f311110);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0460;
  func_0x00010c291ae0(PTR_PTR_1126c0460,param_2,param_3,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfacbe0(puVar2,param_2,puVar8);
  _objc_release(puVar8);
  if ((int)puVar4 != 0) {
    puVar8 = puVar3;
    func_0x00010c0f5800(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_68 = 0;
    puVar4 = puVar2;
    func_0x00010c12cc40(puVar2,param_2,puVar8,&lStack_68);
    lVar7 = lStack_68;
    _objc_retain(lStack_68);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar4 & 1) == 0) {
      if (lVar7 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        lVar6 = lVar7;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3ec40();
        func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110e0ea58);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
      }
      func_0x00010c0a7580(param_6,param_2,2,puVar8,param_5);
    }
    else {
      func_0x00010c0a4c60(param_6,param_2,&PTR____CFConstantStringClassReference_110dab0d8,param_5);
      puVar4 = PTR_PTR_1126c0388;
      func_0x00010c291a60(PTR_PTR_1126c0388,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dc4658);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010bdc2c60(puVar4,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = puVar8;
      func_0x00010c0f5800(puVar8);
      _objc_retainAutoreleasedReturnValue();
      lStack_70 = lVar7;
      func_0x00010c12cc40(puVar2,param_2,puVar4,&lStack_70);
      lVar6 = lStack_70;
      _objc_retain(lStack_70);
      _objc_release(lVar7);
      _objc_release(puVar4);
      lVar7 = lVar6;
    }
    _objc_release(puVar8);
    _objc_release(lVar7);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105947b14; end: 105947b1b; -[SCFideliusUserDatabaseManager perform:] */

void FUN_105947b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_perform__11261ba10);
  return;
}



/* Entry: 105947b1c; end: 105947c43; -[SCFideliusUserDatabaseManager _createWithUrl:urlV2:iwek:identity:fileManager:] */

long FUN_105947b1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = &UNK_10f311298;
  func_0x0001000ba800(&UNK_10f311298);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
  uStack_58 = 0;
  func_0x00010be4ef40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&uStack_58,
                      &PTR____CFConstantStringClassReference_110e10d78);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105947c44; end: 105947d3f; -[SCFideliusUserDatabaseManager dbV2InsertUserIdentity:source:] */

void FUN_105947c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f3112c5;
  func_0x0001000ba800(&UNK_10f3112c5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105947d40;
  puStack_60 = &UNK_110848ba8;
  lStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105947d40; end: 105947d4f;  */

void FUN_105947d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf81b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dbV2InsertUserIdentity_source__11255ba08,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105947d50; end: 105947f73; -[SCFideliusUserDatabaseManager _dbV2InsertUserIdentity:source:] */

ulong FUN_105947d50(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f3112fa;
  func_0x0001000ba800(&UNK_10f3112fa);
  uVar2 = param_1;
  func_0x00010bdeca00(param_1,param_2,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfdebe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0ee500(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfeb3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_3;
  func_0x00010c298be0(param_3);
  func_0x00010c0df780(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c066800(uVar2,param_2,uVar8,uVar3,uVar4,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  if ((uVar7 & 1) == 0) {
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010c0a47a0(uVar8,param_2,0,&PTR____CFConstantStringClassReference_110e10f38,param_4,
                        &PTR____CFConstantStringClassReference_110e0ded8,1,puVar6,0);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010c0a47a0(uVar8,param_2,1,0,param_4,&PTR____CFConstantStringClassReference_110e0ded8,1
                        ,puVar6,0);
  }
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105947f74; end: 10594809b; -[SCFideliusUserDatabaseManager dbV2InsertFriendDeviceInfos:source:userPreferences:] */

void FUN_105947f74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f31134c;
  func_0x0001000ba800(&UNK_10f31134c);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10594809c;
  puStack_78 = &UNK_11084c4a0;
  _objc_retain(param_5);
  uStack_70 = param_5;
  lStack_68 = param_1;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10594809c; end: 1059482f7;  */

void FUN_10594809c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x25;
  undefined8 uVar12;
  undefined8 unaff_x26;
  long lVar13;
  long lVar14;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 uStack_140;
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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bfac400();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bddb1a0(lVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010bdede80(uVar3,param_2,*(undefined8 *)(uVar3 + 0x50),*(undefined8 *)(uVar3 + 0x48),
                      *(undefined8 *)(uVar3 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c130dc0();
  uStack_140 = (char)uVar12;
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf529e0();
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010bddb1a0(lVar6,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e10f58;
    uVar8 = 0;
    uVar10 = uVar1;
    func_0x00010c0a47a0(uVar5);
    _objc_release(lVar6);
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar11 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar11);
    lVar6 = lVar11;
    func_0x00010bf52a60(lVar11,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar6 != 0) {
      lVar13 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          unaff_x26 = *(undefined8 *)(lStack_128 + lVar14 * 8);
          unaff_x25 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(unaff_x25,param_2,unaff_x26);
          _objc_release(unaff_x26);
          lVar14 = lVar14 + 1;
        } while (lVar6 != lVar14);
        lVar6 = lVar11;
        func_0x00010bf52a60(lVar11,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar6 != 0);
    }
    _objc_release(lVar11);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    uVar8 = 1;
    ppuVar9 = (undefined **)0x0;
    uVar10 = uVar1;
    func_0x00010c0a47a0(uVar5);
    lVar6 = param_1;
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  lVar11 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1059482f8;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  uStack_180 = uVar1;
  uStack_178 = uVar5;
  lStack_170 = lVar6;
  uStack_168 = uVar12;
  uStack_160 = uVar3;
  lStack_158 = lVar2;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(uVar8);
  _objc_retain(ppuVar9);
  _objc_retain(uVar10);
  puVar7 = &UNK_10f3113a5;
  func_0x0001000ba800(&UNK_10f3113a5);
  uVar12 = *(undefined8 *)(lVar11 + 8);
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_105948420;
  puStack_1b8 = &UNK_11084c4a0;
  _objc_retain(uVar10);
  uStack_1b0 = uVar10;
  lStack_1a8 = lVar11;
  _objc_retain(uVar8);
  uStack_1a0 = uVar8;
  _objc_retain(ppuVar9);
  ppuStack_198 = ppuVar9;
  func_0x00010c0f7fc0(uVar12,param_2,&puStack_1d0);
  _objc_release(ppuStack_198);
  _objc_release(uStack_1a0);
  _objc_release(uStack_1b0);
  func_0x0001000e2a84(puVar7);
  _objc_release(uVar10);
  _objc_release(ppuVar9);
  _objc_release(uVar8);
  return;
}



/* Entry: 1059482f8; end: 10594841f; -[SCFideliusUserDatabaseManager dbV2DeleteFriendDeviceInfos:source:userPreferences:] */

void FUN_1059482f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f3113a5;
  func_0x0001000ba800(&UNK_10f3113a5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105948420;
  puStack_78 = &UNK_11084c4a0;
  _objc_retain(param_5);
  uStack_70 = param_5;
  lStack_68 = param_1;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105948420; end: 10594864f;  */

void FUN_105948420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x25;
  undefined8 uVar12;
  undefined8 unaff_x26;
  long lVar13;
  long lVar14;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 uStack_140;
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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bfac400();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bddb1a0(lVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010bdede80(uVar3,param_2,*(undefined8 *)(uVar3 + 0x50),*(undefined8 *)(uVar3 + 0x48),
                      *(undefined8 *)(uVar3 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6bb00();
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    ppuVar9 = &PTR____CFConstantStringClassReference_110e10f78;
    uVar8 = 0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar11 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar11);
    lVar5 = lVar11;
    func_0x00010bf52a60(lVar11,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar5 != 0) {
      lVar13 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          unaff_x26 = *(undefined8 *)(lStack_128 + lVar14 * 8);
          unaff_x25 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0(unaff_x25,param_2,unaff_x26);
          _objc_release(unaff_x26);
          lVar14 = lVar14 + 1;
        } while (lVar5 != lVar14);
        lVar5 = lVar11;
        func_0x00010bf52a60(lVar11,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar11);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    uVar8 = 1;
    ppuVar9 = (undefined **)0x0;
  }
  uVar10 = uVar1;
  uStack_140 = (char)uVar12;
  func_0x00010c0a47a0(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar3);
  lVar5 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105948650;
  uStack_190 = unaff_x26;
  uStack_188 = unaff_x25;
  uStack_180 = uVar1;
  uStack_178 = uVar6;
  lStack_170 = param_1;
  uStack_168 = uVar12;
  uStack_160 = uVar3;
  lStack_158 = lVar2;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(uVar8);
  _objc_retain(ppuVar9);
  _objc_retain(uVar10);
  puVar7 = &UNK_10f3113fe;
  func_0x0001000ba800(&UNK_10f3113fe);
  uVar12 = *(undefined8 *)(lVar5 + 8);
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_105948778;
  puStack_1b8 = &UNK_11084c4a0;
  _objc_retain(uVar10);
  uStack_1b0 = uVar10;
  lStack_1a8 = lVar5;
  _objc_retain(uVar8);
  uStack_1a0 = uVar8;
  _objc_retain(ppuVar9);
  ppuStack_198 = ppuVar9;
  func_0x00010c0f7fc0(uVar12,param_2,&puStack_1d0);
  _objc_release(ppuStack_198);
  _objc_release(uStack_1a0);
  _objc_release(uStack_1b0);
  func_0x0001000e2a84(puVar7);
  _objc_release(uVar10);
  _objc_release(ppuVar9);
  _objc_release(uVar8);
  return;
}



/* Entry: 105948650; end: 105948777; -[SCFideliusUserDatabaseManager dbV2DeleteFriendDeviceInfosForUserId:source:userPreferences:] */

void FUN_105948650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f3113fe;
  func_0x0001000ba800(&UNK_10f3113fe);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105948778;
  puStack_78 = &UNK_11084c4a0;
  _objc_retain(param_5);
  uStack_70 = param_5;
  lStack_68 = param_1;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105948778; end: 10594890f;  */

void FUN_105948778(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfac400();
  _objc_release(uVar2);
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x00010bdede80(uVar3,param_2,*(undefined8 *)(uVar3 + 0x50),*(undefined8 *)(uVar3 + 0x48),
                      *(undefined8 *)(uVar3 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6b340();
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e10f98;
  }
  else {
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40),param_2,
                        *(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)0x0;
  }
  uVar4 = (ulong)!bVar1;
  func_0x00010c0a47a0(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  _objc_retain(ppuVar6);
  puVar5 = &UNK_10f311464;
  func_0x0001000ba800(&UNK_10f311464);
  uVar2 = *(undefined8 *)(uVar3 + 8);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105948a08;
  puStack_c0 = &UNK_110848ba8;
  _objc_retain(ppuVar6);
  ppuStack_b8 = ppuVar6;
  uStack_b0 = uVar3;
  _objc_retain(uVar4);
  uStack_a8 = uVar4;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_d8);
  _objc_release(uStack_a8);
  _objc_release(ppuStack_b8);
  func_0x0001000e2a84(puVar5);
  _objc_release(ppuVar6);
  _objc_release(uVar4);
  return;
}



/* Entry: 105948910; end: 105948a07; -[SCFideliusUserDatabaseManager dbV2DeleteAllFriendDeviceInfosFromSource:userPreferences:] */

void FUN_105948910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f311464;
  func_0x0001000ba800(&UNK_10f311464);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105948a08;
  puStack_60 = &UNK_110848ba8;
  _objc_retain(param_4);
  uStack_58 = param_4;
  lStack_50 = param_1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105948a08; end: 105948b3f;  */

void FUN_105948a08(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfac400();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0x28);
  func_0x00010bdede80(uVar4,param_2,*(undefined8 *)(uVar4 + 0x50),*(undefined8 *)(uVar4 + 0x48),
                      *(undefined8 *)(uVar4 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf6b360();
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar7 = &PTR____CFConstantStringClassReference_110e10fb8;
  }
  else {
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40));
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar7 = (undefined **)0x0;
  }
  func_0x00010c0a47a0(uVar2,param_2,!bVar1,ppuVar7,uVar8,
                      &PTR____CFConstantStringClassReference_110e0deb8,9999,puVar6,(char)uVar3);
  _objc_release(puVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105948b40; end: 105948ccb; -[SCFideliusUserDatabaseManager dbV2InsertMessageEncryptionKey:conversationId:messageId:timestamp:purgePolicy:source:] */

void FUN_105948b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = &UNK_10f3114ce;
  func_0x0001000ba800(&UNK_10f3114ce);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105948ccc;
  puStack_a0 = &UNK_1108bad48;
  lStack_98 = param_1;
  _objc_retain(param_4);
  uStack_90 = param_4;
  uStack_68 = param_5;
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retain(param_7);
  uStack_78 = param_7;
  _objc_retain(param_8);
  uStack_70 = param_8;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_b8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105948ccc; end: 105948e17;  */

void FUN_105948ccc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bdeca00(uVar1,param_2,*(undefined8 *)(uVar1 + 0x50),*(undefined8 *)(uVar1 + 0x48),
                      *(undefined8 *)(uVar1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c067ec0(uVar2);
  uVar3 = uVar1;
  func_0x00010c0665a0(uVar1,param_2,uVar4,uVar6,uVar7,(long)(int)uVar2,
                      *(undefined8 *)(param_1 + 0x40));
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010c0a47a0(uVar4,param_2,0,&PTR____CFConstantStringClassReference_110e10fd8,uVar7,
                        &PTR____CFConstantStringClassReference_110e0def8,1,puVar5,0);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010c0a47a0(uVar4,param_2,1,0,uVar7,&PTR____CFConstantStringClassReference_110e0def8,1,
                      puVar5,0);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105948e18; end: 105948eeb; -[SCFideliusUserDatabaseManager dbV2DeleteExpiredMessageKeysWithSource:] */

void FUN_105948e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f31152a;
  func_0x0001000ba800(&UNK_10f31152a);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105948eec;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_70);
  _objc_release(uStack_48);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105948eec; end: 105948fcf;  */

void FUN_105948eec(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bdeca00(uVar2,param_2,*(undefined8 *)(uVar2 + 0x50),*(undefined8 *)(uVar2 + 0x48),
                      *(undefined8 *)(uVar2 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6bc00();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e10ff8;
  }
  else {
    ppuVar6 = (undefined **)0x0;
  }
  func_0x00010c0a47a0(uVar4,param_2,!bVar1,ppuVar6,uVar7,
                      &PTR____CFConstantStringClassReference_110e0def8,9999,puVar5,0);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105948fd0; end: 1059490db; -[SCFideliusUserDatabaseManager dbV2DeleteMessageKeysWithConversationId:messageId:source:] */

void FUN_105948fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = &UNK_10f31158f;
  func_0x0001000ba800(&UNK_10f31158f);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1059490dc;
  puStack_78 = &UNK_11084d788;
  lStack_70 = param_1;
  _objc_retain(param_3);
  uStack_68 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_5);
  uStack_60 = param_5;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1059490dc; end: 1059491c7;  */

void FUN_1059490dc(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bdeca00(uVar2,param_2,*(undefined8 *)(uVar2 + 0x50),*(undefined8 *)(uVar2 + 0x48),
                      *(undefined8 *)(uVar2 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf6b680();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e11018;
  }
  else {
    ppuVar6 = (undefined **)0x0;
  }
  func_0x00010c0a47a0(uVar4,param_2,!bVar1,ppuVar6,uVar7,
                      &PTR____CFConstantStringClassReference_110e0def8,1,puVar5,0);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059491c8; end: 10594930f; -[SCFideliusUserDatabaseManager _createDBV2IfNotExistWithURL:iwek:logger:] */

void FUN_1059491c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f3115f6;
  func_0x0001000ba800(&UNK_10f3115f6);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
    puVar2 = PTR_PTR_1126c03a8;
    _objc_alloc();
    puVar3 = PTR_PTR_1126bd038;
    func_0x00010bf93a60(PTR_PTR_1126bd038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a100(puVar2,param_2,param_3,param_4,param_5,puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c0a4720(param_1,param_2,1,1,0,&PTR____CFConstantStringClassReference_110e11038,
                        &PTR____CFConstantStringClassReference_110e10d78);
    lVar5 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar5);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105949310; end: 10594943f; -[SCFideliusUserDatabaseManager _createFriendCacheV2IfNotExistWithURL:iwek:logger:] */

void FUN_105949310(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f311643;
  func_0x0001000ba800(&UNK_10f311643);
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x00010bdeca00(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0650;
    _objc_alloc();
    func_0x00010c008180();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar3);
    func_0x00010c0a4720(param_1,param_2,1,1,0,&PTR____CFConstantStringClassReference_110e11058,
                        &PTR____CFConstantStringClassReference_110e10d78);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar4);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105949440; end: 10594949b; -[SCFideliusUserDatabaseManager _cappedLoggingUserIds:] */

void FUN_105949440(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (9 < uVar1) {
    uVar1 = 10;
  }
  uVar2 = param_3;
  func_0x00010c25e980(param_3,param_2,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10594949c; end: 10594958b; -[SCFideliusUserDatabaseManager _cappedLoggingUserIdsWithDeviceInfos:] */

void FUN_10594949c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f31169f;
  func_0x0001000ba800(&UNK_10f31169f);
  lVar2 = param_3;
  func_0x00010bd86590(param_3,&PTR___NSConcreteGlobalBlock_1108c1188);
  lVar3 = lVar2;
  func_0x000100504554();
  if ((lVar3 == 0) || (lVar4 = lVar3, func_0x00010bf529e0(), lVar4 == 0)) {
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  }
  else {
    func_0x00010bddb180(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10594958c; end: 10594959b;  */

void FUN_10594958c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10594959c; end: 1059495a3; -[SCFideliusUserDatabaseManager circumstanceEngine] */

undefined8 FUN_10594959c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1059495a4; end: 1059495d3; -[SCFideliusUserDatabaseManager setCircumstanceEngine:] */

void FUN_1059495a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1059495d4; end: 10594966f; -[SCFideliusUserDatabaseManager .cxx_destruct] */

void FUN_1059495d4(long param_1)

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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105949670; end: 10594974b; -[SCFideliusUserDevice initWithDatabaseName:hashedBeta:timestamp:temporary:] */

undefined1 *
FUN_105949670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eafc8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10594974c; end: 1059497d3; -[SCFideliusUserDevice encodeWithCoder:] */

void FUN_10594974c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e11078);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e11098);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110dc1558);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110dd4458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059497d4; end: 105949803; -[SCFideliusUserDevice setDatabaseName:] */

void FUN_1059497d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105949804; end: 10594980b; -[SCFideliusUserDevice hashedBeta] */

undefined8 FUN_105949804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10594980c; end: 10594983b; -[SCFideliusUserDevice setHashedBeta:] */

void FUN_10594980c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10594983c; end: 105949843; -[SCFideliusUserDevice timestamp] */

undefined8 FUN_10594983c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105949844; end: 105949873; -[SCFideliusUserDevice setTimestamp:] */

void FUN_105949844(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105949874; end: 10594987b; -[SCFideliusUserDevice setTemporary:] */

void FUN_105949874(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10594987c; end: 1059498b7; -[SCFideliusUserDevice .cxx_destruct] */

void FUN_10594987c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1059498b8; end: 1059499d3; -[SCFideliusUserIdentity initWithHashedBeta:outBeta:inBeta:iwek:version:beta:] */

undefined1 *
FUN_1059498b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eafd0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1a74c0(puVar1);
    func_0x00010c1d6ce0(puVar1);
    func_0x00010c1ab7c0(puVar1);
    func_0x00010c1b64c0(puVar1);
    func_0x00010c220e20(puVar1);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1059499d4; end: 105949ae3; -[SCFideliusUserIdentity encodeWithCoder:] */

void FUN_1059499d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfdebe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e11098);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0ee500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e110b8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfeb3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e110d8);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c085320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e110f8);
  _objc_release(uVar1);
  func_0x00010c298be0(param_1);
  func_0x00010bf92fc0(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110dd8fd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105949ae4; end: 105949cd7; -[SCFideliusUserIdentity isEqual:] */

bool FUN_105949ae4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126c03c8;
    _objc_opt_class(PTR_PTR_1126c03c8);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
    }
    else {
      _objc_retain(param_3);
      uVar3 = param_1;
      func_0x00010c085320();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c085320(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c071ae0();
      if ((int)uVar5 == 0) {
        bVar1 = false;
      }
      else {
        uVar5 = param_1;
        func_0x00010bfdebe0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010bfdebe0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c071ae0();
        if ((int)uVar7 == 0) {
          bVar1 = false;
        }
        else {
          uVar7 = param_1;
          func_0x00010bfeb3c0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_3;
          func_0x00010bfeb3c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c071cc0();
          if ((int)uVar9 == 0) {
            bVar1 = false;
          }
          else {
            uVar9 = param_1;
            func_0x00010c0ee500();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_3;
            func_0x00010c0ee500(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar9;
            func_0x00010c071cc0();
            if ((int)uVar11 == 0) {
              bVar1 = false;
            }
            else {
              func_0x00010c298be0(param_1);
              uVar11 = param_3;
              func_0x00010c298be0(param_3);
              bVar1 = param_1 == uVar11;
            }
            _objc_release(uVar10);
            _objc_release(uVar9);
          }
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105949cd8; end: 105949cfb; -[SCFideliusUserIdentity copyWithZone:] */

undefined8 FUN_105949cd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105949cfc; end: 105949e8b;  */

void FUN_105949cfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain();
  puVar1 = &UNK_10f31170e;
  func_0x0001000ba800(&UNK_10f31170e);
  puVar2 = PTR_PTR_1126c05e8;
  _objc_alloc(PTR_PTR_1126c05e8);
  uVar3 = param_1;
  func_0x00010c085320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bfeb3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0ee500(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf19880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c11a4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c298be0(param_1);
  uVar9 = param_1;
  func_0x00010bfdebe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020660(puVar2,param_2,uVar3,uVar4,uVar5,uVar7,uVar8,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105949e8c; end: 105949e9f; +[SCFideliusUtils keyDerivationForKey:salt:] */

/* WARNING: Possible PIC construction at 0x00010bcb6030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bcb63d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bcb6034) */
/* WARNING: Removing unreachable block (ram,0x00010bcb609c) */
/* WARNING: Removing unreachable block (ram,0x00010bcb6078) */
/* WARNING: Removing unreachable block (ram,0x00010bcb63dc) */

void FUN_105949e8c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  int iVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined1 auStack_c0 [12];
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  puVar12 = &stack0xfffffffffffffff0;
  lVar10 = 0x50;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(0);
  _objc_retain(param_4);
  ppuVar11 = param_3;
  _objc_retain();
  ppuVar4 = param_4;
  if (param_4 == (undefined **)0x0) {
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar11;
  }
  if (param_3 == (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    iStack_b4 = 0;
    func_0x000107c2b428();
    unaff_x25 = ppuVar4;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    unaff_x26 = ppuVar4;
    func_0x00010c08fa60();
    unaff_x27 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    ppuVar3 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x000107c2b490(ppuVar11,unaff_x25,unaff_x26,unaff_x27,ppuVar3,&uStack_b0,&iStack_b4);
    if ((ppuVar11 == (undefined **)0x0) || (iStack_b4 != 0x20)) {
      ppuVar11 = (undefined **)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
  _objc_release(ppuVar4);
  puVar13 = &UNK_10bcb6034;
  puVar2 = auStack_c0;
  ppuVar3 = (undefined **)0x0;
  do {
    *(undefined ***)(puVar2 + -0x60) = unaff_x28;
    *(undefined ***)(puVar2 + -0x58) = unaff_x27;
    *(undefined ***)(puVar2 + -0x50) = unaff_x26;
    *(undefined ***)(puVar2 + -0x48) = unaff_x25;
    *(undefined ***)(puVar2 + -0x40) = ppuVar11;
    *(undefined ***)(puVar2 + -0x38) = ppuVar4;
    *(long *)(puVar2 + -0x30) = lVar10;
    *(undefined ***)(puVar2 + -0x28) = ppuVar3;
    *(undefined ***)(puVar2 + -0x20) = param_4;
    *(undefined ***)(puVar2 + -0x18) = param_3;
    *(undefined1 **)(puVar2 + -0x10) = puVar12;
    *(undefined **)(puVar2 + -8) = puVar13;
    *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_4 = ppuVar3;
    _objc_retain();
    _objc_retain(ppuVar3);
    unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    iVar9 = (int)lVar10;
    if (0 < iVar9) {
      unaff_x27 = (undefined **)(ulong)(iVar9 + 0x1fU >> 5);
      unaff_x28 = (undefined **)0x1;
      ppuVar8 = ppuVar4;
      do {
        ppuVar4 = ppuVar11;
        _objc_retainAutorelease(ppuVar11);
        func_0x00010bf25f00();
        ppuVar5 = ppuVar11;
        func_0x00010c08fa60(ppuVar11);
        _CCHmacInit(puVar2 + -0x210,2,ppuVar4,ppuVar5);
        ppuVar4 = ppuVar8;
        _objc_retainAutorelease(ppuVar8);
        func_0x00010bf25f00();
        ppuVar5 = ppuVar8;
        func_0x00010c08fa60(ppuVar8);
        _CCHmacUpdate(puVar2 + -0x210,ppuVar4,ppuVar5);
        if (ppuVar3 != (undefined **)0x0) {
          ppuVar4 = ppuVar3;
          _objc_retainAutorelease(ppuVar3);
          func_0x00010bf25f00();
          ppuVar5 = ppuVar3;
          func_0x00010c08fa60(ppuVar3);
          _CCHmacUpdate(puVar2 + -0x210,ppuVar4,ppuVar5);
        }
        puVar2[-0x211] = (char)unaff_x28;
        _CCHmacUpdate(puVar2 + -0x210,puVar2 + -0x211,1);
        param_4 = (undefined **)(puVar2 + -0x90);
        _CCHmacFinal(puVar2 + -0x210);
        unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar13);
        ppuVar4 = unaff_x25;
        func_0x00010bf51e00();
        _objc_release(ppuVar8);
        _objc_release(unaff_x25);
        unaff_x28 = (undefined **)(ulong)((int)unaff_x28 + 1);
        uVar1 = (int)unaff_x27 - 1;
        unaff_x27 = (undefined **)(ulong)uVar1;
        ppuVar8 = ppuVar4;
      } while (uVar1 != 0);
    }
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64b00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)iVar9;
    ppuVar8 = (undefined **)0x0;
    puVar7 = puVar6;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar13);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    param_3 = ppuVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x70)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    ___stack_chk_fail();
    *(undefined ***)(puVar2 + -0x280) = unaff_x28;
    *(undefined ***)(puVar2 + -0x278) = unaff_x27;
    *(undefined ***)(puVar2 + -0x270) = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    *(undefined ***)(puVar2 + -0x268) = unaff_x25;
    *(undefined ***)(puVar2 + -0x260) = ppuVar4;
    *(undefined **)(puVar2 + -600) = puVar6;
    *(undefined **)(puVar2 + -0x250) = puVar13;
    *(undefined **)(puVar2 + -0x248) = puVar7;
    *(undefined ***)(puVar2 + -0x240) = ppuVar3;
    *(undefined ***)(puVar2 + -0x238) = ppuVar11;
    *(undefined1 **)(puVar2 + -0x230) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x228) = &UNK_10bcb62c0;
    puVar12 = puVar2 + -0x230;
    _objc_retain();
    _objc_retain(param_4);
    _objc_retain(ppuVar8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    if (param_4 == (undefined **)0x0) {
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      if (param_3 == (undefined **)0x0) goto code_r0x00010bcb63b8;
code_r0x00010bcb6320:
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar4;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      unaff_x26 = ppuVar4;
      func_0x00010c08fa60();
      unaff_x27 = param_3;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      unaff_x28 = param_3;
      func_0x00010c08fa60();
      ppuVar3 = ppuVar11;
      _objc_retainAutorelease(ppuVar11);
      func_0x00010c0d3c60();
      _CCHmac(2,unaff_x25,unaff_x26,unaff_x27,unaff_x28,ppuVar3);
    }
    else {
      ppuVar4 = param_4;
      if (param_3 != (undefined **)0x0) goto code_r0x00010bcb6320;
code_r0x00010bcb63b8:
      ppuVar11 = (undefined **)0x0;
    }
    _objc_release(param_3);
    _objc_release(ppuVar4);
    puVar13 = &UNK_10bcb63dc;
    puVar2 = puVar2 + -0x280;
    ppuVar3 = ppuVar8;
  } while( true );
}



/* Entry: 105949ea0; end: 105949f43; +[SCFideliusUtils addFideliusHeader:] */

void FUN_105949ea0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c0388;
    func_0x00010bff6b40(PTR_PTR_1126c0388,param_2,param_3,
                        &PTR____CFConstantStringClassReference_110e11178);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    func_0x00010bf06a40();
    func_0x00010bf06ae0(puVar2,param_2,puVar1);
    puVar3 = puVar2;
    func_0x00010bf15da0(puVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105949f44; end: 105949fbf; +[SCFideliusUtils addFideliusHeaderBytes:] */

void FUN_105949f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_retain(param_3);
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06a40();
  func_0x00010bf06ae0(puVar1,param_2,param_3);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105949fc0; end: 10594a04b; +[SCFideliusUtils removeFideliusHeader:] */

void FUN_105949fc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c0388;
    func_0x00010bff6b40(PTR_PTR_1126c0388,param_2,param_3,
                        &PTR____CFConstantStringClassReference_110e11198);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c0388;
    func_0x00010c12c5a0(PTR_PTR_1126c0388,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10594a04c; end: 10594a0af; +[SCFideliusUtils removeFideliusHeaderBytes:] */

void FUN_10594a04c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 < 0x5b) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c25eac0(param_3,param_2,0x1a,0x41);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10594a0b0; end: 10594a293; +[SCFideliusUtils createTempIdentity] */

void FUN_10594a0b0(void)

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
  
  puVar1 = &UNK_10f31177a;
  func_0x0001000ba800();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c0658;
  func_0x00010bfbf6c0(PTR_PTR_1126c0658);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c11a4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010bff6b20();
  puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010bff6b20();
  puVar7 = puVar5;
  func_0x000100589174(puVar5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c1142a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c11a480(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c03c8;
  _objc_alloc(PTR_PTR_1126c03c8);
  func_0x00010c019e80();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10594a294; end: 10594a44b; +[SCFideliusUtils createInitPackage:hashedBetas:] */

void FUN_10594a294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfdebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c0660;
  _objc_alloc_init(PTR_PTR_1126c0660);
  puVar3 = puVar2;
  func_0x00010c1a74e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = param_3;
  func_0x00010c11a4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2067e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c085320(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2067c0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar9 = param_3;
  func_0x00010c298be0(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar10,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010c206780(puVar8,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10594a44c; end: 10594a4bf; +[SCFideliusUtils appendUtf8String:toData:] */

void FUN_10594a44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d3c80(param_4);
  uVar1 = param_3;
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf06ae0(param_4,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10594a4c0; end: 10594a567; +[SCFideliusUtils safeJSONSerialization:] */

void FUN_10594a4c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    puVar3 = puVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10594a568; end: 10594a8d3; +[SCFideliusUtils handshakeForFriend:device:myBeta:logger:] */

void FUN_10594a568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = &UNK_10f31179d;
  func_0x0001000ba800();
  puVar2 = param_4;
  func_0x00010c0ee500();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0388;
  if (puVar9 == (undefined *)0x7c) {
    puVar9 = param_4;
    func_0x00010c0ee500(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c580(puVar2,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar3 = PTR_PTR_1126c0388;
    func_0x00010bff6b40(PTR_PTR_1126c0388,param_2,puVar2,
                        &PTR____CFConstantStringClassReference_110e10c38);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c22bf60(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar9 = param_4;
      func_0x00010c0ee500(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aeec0(param_6,param_2,0,0,&PTR____CFConstantStringClassReference_110e11138,
                          puVar9);
      _objc_release(puVar9);
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126c03c0;
      _objc_alloc();
      puVar5 = param_4;
      func_0x00010c0ee500(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_4;
      func_0x00010c298be0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0df720(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051bc0(puVar9,param_2,puVar5,param_3,lVar4,puVar6,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(lVar4);
    }
    _objc_release(puVar3);
  }
  else {
    puVar2 = param_4;
    func_0x00010c0ee500(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aeec0(param_6,param_2,0,&PTR____CFConstantStringClassReference_110e111b8,
                        &PTR____CFConstantStringClassReference_110e11138,puVar2);
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10594a8d4; end: 10594ac4b; +[SCFideliusUtils handshakeForFriend:deviceInfo:myBeta:logger:] */

void FUN_10594a8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = &UNK_10f31179d;
  func_0x0001000ba800();
  puVar2 = param_4;
  func_0x00010c0ee500();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c0388;
  if (puVar9 == (undefined *)0x7c) {
    puVar9 = param_4;
    func_0x00010c0ee500(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c580(puVar2,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar3 = PTR_PTR_1126c0388;
    func_0x00010bff6b40(PTR_PTR_1126c0388,param_2,puVar2,
                        &PTR____CFConstantStringClassReference_110e10c38);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c22bf60(param_5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar9 = param_4;
      func_0x00010c0ee500(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aeec0(param_6,param_2,0,0,&PTR____CFConstantStringClassReference_110e11138,
                          puVar9);
      _objc_release(puVar9);
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126c03c0;
      _objc_alloc();
      puVar5 = param_4;
      func_0x00010c0ee500(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = param_4;
      func_0x00010c298be0(param_4);
      func_0x00010c0df7c0(puVar7,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0df720(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c051bc0(puVar9,param_2,puVar5,param_3,lVar4,puVar7,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(lVar4);
    }
    _objc_release(puVar3);
  }
  else {
    puVar2 = param_4;
    func_0x00010c0ee500(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aeec0(param_6,param_2,0,&PTR____CFConstantStringClassReference_110e111b8,
                        &PTR____CFConstantStringClassReference_110e11138,puVar2);
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10594ac4c; end: 10594ad57; +[SCFideliusUtils dataToDeriveKeyForOtherUserId:ourUserId:mystique:version:outgoing:type:] */

void FUN_10594ac4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc4098);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e111d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_6);
  puVar3 = PTR_PTR_1126c0388;
  func_0x00010bf07240(PTR_PTR_1126c0388,param_2,puVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10594ad58; end: 10594ade3; +[SCFideliusUtils deviceDatabaseFolderURLWithVersion:] */

void FUN_10594ad58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf07be0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e11218);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdc2c60(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10594ade4; end: 10594ae87; +[SCFideliusUtils SCCoreUUIDToE2eeUUID:] */

void FUN_10594ade4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe2ee0(param_3);
  uVar2 = param_3;
  func_0x00010c0b5940(param_3);
  _objc_release(param_3);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c05b8;
  func_0x00010bdc35c0(PTR_PTR_1126c05b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10594ae88; end: 10594aeaf; +[SCFideliusUtils toSOJUSecurityFideliusFriendInfoDictionary:] */

void FUN_10594ae88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108c11c8,
                      &PTR___NSConcreteGlobalBlock_1108c1208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10594aeb0; end: 10594af2f;  */

void FUN_10594aeb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe2ee0();
  uVar2 = param_2;
  func_0x00010c0b5940(param_2);
  func_0x000100c4a928(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10594af30; end: 10594af3f;  */

void FUN_10594af30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb8330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c0388,PTR_s_friendKeysToFideliusFriendInfo__1125cba70,param_2);
  return;
}



/* Entry: 10594af40; end: 10594b14f; +[SCFideliusUtils toKeyProviderSyncKeysResult:fideliusManager:logger:] */

void FUN_10594af40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10594aff8;
  puStack_48 = &UNK_1108c1258;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000100504554(param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10594b150; end: 10594b337;  */

void FUN_10594b150(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d4de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf19880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c22bf60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126c05b0;
  _objc_alloc(PTR_PTR_1126c05b0);
  uVar2 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(param_2);
  func_0x00010c03bc40(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10594b338; end: 10594b4ab; +[SCFideliusUtils toSOJUSecurityFideliusUpdatesResponse:senderUserId:] */

void FUN_10594b338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010c0dd4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10594b4ac;
  puStack_48 = &UNK_1108c12a8;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108c1288,&puStack_60);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c0670;
  _objc_alloc(PTR_PTR_1126c0670);
  func_0x00010c059920();
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10594b4ac; end: 10594b593;  */

void FUN_10594b4ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c064f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe2ee0();
  uVar4 = uVar2;
  func_0x00010c0b5940(uVar2);
  func_0x000100c4a928(uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c272200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10594b594; end: 10594b747; +[SCFideliusUtils toSOJUSecurityFidUpdatePackage:senderUserId:friendUserId:] */

void FUN_10594b594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126c0678;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar3 = PTR_PTR_1126c0388;
  uVar2 = param_3;
  func_0x00010c064f20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb8320(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_3;
  func_0x00010c123360(param_3);
  func_0x00010c0df6e0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c0388;
  uVar4 = param_3;
  func_0x00010c0cb5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb600(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c0388;
  uVar7 = param_3;
  func_0x00010bf0bcc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf0bce0(puVar8,param_2,uVar7,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c047fe0(puVar1,param_2,0,puVar3,0,puVar5,puVar6,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10594b748; end: 10594b7b7; +[SCFideliusUtils friendKeysToFideliusFriendInfo:] */

void FUN_10594b748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bfb8020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100504554();
  puVar2 = PTR_PTR_1126c0680;
  _objc_alloc(PTR_PTR_1126c0680);
  func_0x00010c00c480();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10594b7b8; end: 10594b8b3;  */

void FUN_10594b7b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126c0388;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c0400;
  _objc_alloc(PTR_PTR_1126c0400);
  puVar4 = puVar2;
  func_0x00010bf15da0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c298be0(param_2);
  _objc_release(param_2);
  func_0x00010c0df880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0326c0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10594b8b4; end: 10594b8d3; +[SCFideliusUtils messageIdentifierToArroyoMessageIds:] */

void FUN_10594b8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108c1338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


