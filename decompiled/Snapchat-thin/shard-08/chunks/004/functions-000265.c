/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10608e680; end: 10608e683;  */

void FUN_10608e680(void)

{
  return;
}



/* Entry: 10608e684; end: 10608e6af;  */

void FUN_10608e684(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10608e6b0; end: 10608e7db;  */

void FUN_10608e6b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10608e7dc;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10608e808;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0c1540(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10608e7dc; end: 10608e85f;  */

void FUN_10608e7dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10608e860; end: 10608e863;  */

void FUN_10608e860(void)

{
  return;
}



/* Entry: 10608e864; end: 10608e96f; -[SCameraUICriticalSectionMonitorImpl _beginCriticalSection] */

void FUN_10608e864(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010be40e60();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c24e7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf4b320();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297280(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11090b4c0,uVar3,1);
      _objc_release(uVar3);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 10608e970; end: 10608e97b;  */

void FUN_10608e970(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setUserInteractionEnabled__112665468,0);
  return;
}



/* Entry: 10608e97c; end: 10608ea33; -[SCameraUICriticalSectionMonitorImpl _endCriticalSection] */

void FUN_10608e97c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf94540();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf4b320();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297280(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11090b4e0,uVar3,1);
      _objc_release(uVar3);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 10608ea34; end: 10608ea3f;  */

void FUN_10608ea34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setUserInteractionEnabled__112665468,1);
  return;
}



/* Entry: 10608ea40; end: 10608ea4b; -[SCameraUICriticalSectionMonitorImpl _handleViewDidAppear] */

void FUN_10608ea40(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10608ea4c; end: 10608ea53; -[SCameraUICriticalSectionMonitorImpl _handleViewDidDisappear] */

void FUN_10608ea4c(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be09870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endCriticalSection_11255ffb8);
  return;
}



/* Entry: 10608ea54; end: 10608ea67; -[SCameraUICriticalSectionMonitorImpl _handleFrameReceived] */

void FUN_10608ea54(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be09870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endCriticalSection_11255ffb8);
    return;
  }
  return;
}



/* Entry: 10608ea68; end: 10608eabb; -[SCameraUICriticalSectionMonitorImpl _handleNewVideoDatasource:] */

void FUN_10608ea68(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x59) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x59) = 1;
    func_0x00010bdd33c0(param_1);
  }
  func_0x00010befa260(param_3,param_2,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10608eabc; end: 10608eb3b; -[SCameraUICriticalSectionMonitorImpl _isHeadlessMode] */

bool FUN_10608eabc(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf07b60();
  if (puVar3 == (undefined *)0x2) {
    puVar3 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0(PTR_PTR_1126ae520);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d9860();
    bVar1 = puVar4 != (undefined *)0x0;
    _objc_release(puVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 10608eb3c; end: 10608ec63; -[SCameraUICriticalSectionMonitorImpl startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_10608eb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c26d5a0(0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10608ec64; end: 10608ec8f;  */

void FUN_10608ec64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10608ec90; end: 10608ecbb; -[SCameraUICriticalSectionMonitorImpl stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_10608ec90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be09870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endCriticalSection_11255ffb8);
  return;
}



/* Entry: 10608ecbc; end: 10608ed3b; -[SCameraUICriticalSectionMonitorImpl .cxx_destruct] */

void FUN_10608ecbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 10608ed3c; end: 10608ef93; -[SCCaptureServiceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10608ed3c(long param_1,undefined8 param_2)

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
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  
  puVar1 = PTR_PTR_1126c7828;
  _objc_alloc();
  lVar20 = (long)_DAT_11273e430;
  lVar2 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010beeed00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bfe8ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c29b520();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar8 = lVar20;
  func_0x00010c123e00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11273e434;
  lVar9 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf30c00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11273e438;
  _objc_loadWeakRetained();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar14 = lVar21;
  func_0x00010bf29960();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11273e43c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c135640();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11273e440;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc980(puVar1,param_2,lVar3,lVar5,lVar7,lVar8,lVar10,lVar12,lVar13,lVar14,lVar16,
                      lVar18);
  uVar19 = *(undefined8 *)(param_1 + _DAT_11273e444);
  *(undefined **)(param_1 + _DAT_11273e444) = puVar1;
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar21);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar20);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10608ef94; end: 10608efb3; -[SCCaptureServiceEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10608ef94(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273e440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10608efb4; end: 10608efc7; -[SCCaptureServiceEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10608efb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273e440,param_3);
  return;
}



/* Entry: 10608efc8; end: 10608f03f; -[SCCaptureServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10608efc8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273e440);
  _objc_destroyWeak(param_1 + _DAT_11273e43c);
  _objc_destroyWeak(param_1 + _DAT_11273e438);
  _objc_destroyWeak(param_1 + _DAT_11273e434);
  _objc_destroyWeak(param_1 + _DAT_11273e448);
  _objc_destroyWeak(param_1 + _DAT_11273e430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e444,0);
  return;
}



/* Entry: 10608f040; end: 10608f12f; -[SCBasicCaptureImageStrategy initWithImageCaptureStrategyEvents:cameraHardwareServicesAPI:cameraCaptureRequestHandler:] */

undefined1 *
FUN_10608f040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ef788;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c7830;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10608f130; end: 10608f177; -[SCBasicCaptureImageStrategy captureWithConfiguration:] */

void FUN_10608f130(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7838;
  func_0x00010c105c80(PTR_PTR_1126c7838);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd10e0(*(undefined8 *)(param_1 + 0x18),param_2,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10608f178; end: 10608f31b; -[SCBasicCaptureImageStrategy captureImageWithConfiguration:] */

void FUN_10608f178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR_PTR_1126c7840;
  func_0x00010c2a5b20(PTR_PTR_1126c7840);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b9d38;
  uStack_50 = 0;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf30d40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25efc0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10608f31c; end: 10608f3bf;  */

void FUN_10608f31c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beca680();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10608f3c0; end: 10608f403; -[SCBasicCaptureImageStrategy completeWithStillImageData:discardRelatedData:configuration:currentCapturerState:] */

void FUN_10608f3c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c7840;
  func_0x00010bf72e40(PTR_PTR_1126c7840);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10608f404; end: 10608f447; -[SCBasicCaptureImageStrategy completeWithError:configuration:] */

void FUN_10608f404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c7840;
  func_0x00010bf79120(PTR_PTR_1126c7840);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10608f448; end: 10608f61b; -[SCBasicCaptureImageStrategy _takeImageCallback:directSnapDiscard:captureConfiguration:currentCaptureState:error:] */

void FUN_10608f448(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_7 == (undefined *)0x0) && (lVar1 != 0)) {
    param_7 = PTR_PTR_1126c7838;
    func_0x00010c104660(PTR_PTR_1126c7838);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd10e0(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    if (param_7 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      param_7 = puVar3;
    }
    puVar3 = PTR_PTR_1126c7838;
    func_0x00010bf9fba0(PTR_PTR_1126c7838);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd10e0(*(undefined8 *)(param_1 + 0x18));
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10608f61c; end: 10608f663; -[SCBasicCaptureImageStrategy .cxx_destruct] */

void FUN_10608f61c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10608f664; end: 10608f913; -[SCBasicCaptureVideoStrategy initWithVideoCaptureStrategyEvents:recordingFileURLGenerator:cameraHardwareServicesAPI:captureDeviceManager:cameraConfigurationServices:cameraHardwareResource:cameraCaptureRequestHandler:circumstanceEngine:] */

undefined8 *
FUN_10608f664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ef790;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar8 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf51e00();
    uVar6 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(puVar1);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_retain(param_5);
    uVar8 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar8);
    _objc_retain(param_6);
    uVar8 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar8);
    _objc_retain(param_7);
    uVar8 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar8);
    _objc_retain(param_3);
    uVar8 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar8);
    _objc_retain(param_4);
    uVar8 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126c7848;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar8 = puVar1[6];
    puVar1[6] = puVar9;
    _objc_release(uVar8);
    _objc_retain(param_9);
    uVar8 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar8);
    _objc_storeWeak(puVar1 + 0xc,param_10);
  }
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



/* Entry: 10608f914; end: 10608f957; -[SCBasicCaptureVideoStrategy dealloc] */

void FUN_10608f914(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126ef790;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10608f958; end: 10608fa4b; -[SCBasicCaptureVideoStrategy startRecordingWithConfiguration:] */

void FUN_10608f958(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = param_4;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c3e0(uVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c123d60(param_4);
  if (0.0 <= param_1) {
    puVar2 = PTR_PTR_1126c7850;
    func_0x00010c105c80(PTR_PTR_1126c7850,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd10e0(*(undefined8 *)(param_2 + 0x30),param_3,0,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10608fa4c; end: 10608fa57; -[SCBasicCaptureVideoStrategy stopRecording] */

void FUN_10608fa4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_handleEvent__1125d1dd0,3);
  return;
}



/* Entry: 10608fa58; end: 10608fa9f; -[SCBasicCaptureVideoStrategy cancelRecordingWithShouldAbort:cancelReason:callsite:] */

void FUN_10608fa58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7850;
  func_0x00010bf2f6a0(PTR_PTR_1126c7850);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd10e0(*(undefined8 *)(param_1 + 0x30),param_2,1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10608faa0; end: 10608fccb; -[SCBasicCaptureVideoStrategy scheduleRecordRequestWithConfiguration:] */

void FUN_10608faa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x30));
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  dVar4 = 1.60807493534087e-314;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10608fccc;
  puStack_60 = &UNK_110841fb0;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_78);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar3);
  func_0x00010c123d60(param_3);
  func_0x000100c749e0((float)dVar4,"APPSTORE",*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074a40(param_3);
  func_0x00010c1b19e0(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc15c0(param_3);
  func_0x00010c1a4e60(uVar1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf309c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178d80(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR_PTR_1126c7858;
  func_0x00010bf7a400(PTR_PTR_1126c7858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10608fccc; end: 10608fd27;  */

void FUN_10608fccc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7850;
  func_0x00010c105c80(PTR_PTR_1126c7850,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd10e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10608fd28; end: 10609020b; -[SCBasicCaptureVideoStrategy startRecordWithConfiguration:] */

void FUN_10608fd28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c7860;
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0754c0();
  func_0x00010bfa5160(puVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar4 = PTR_PTR_1126c7858;
  func_0x00010c2a69c0(PTR_PTR_1126c7858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80(uVar10);
  uVar6 = uVar3;
  func_0x00010c082a60();
  _objc_release(uVar3);
  _objc_release(uVar5);
  if ((int)uVar6 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c2bf1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227c80();
    _objc_release(uVar3);
    _objc_release(uVar6);
  }
  puVar4 = PTR_PTR_1126c7868;
  func_0x00010c0b8140(PTR_PTR_1126c7868);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8bc0((double)(long)puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf70d80(uVar10);
  func_0x00010c154f00(uVar10);
  func_0x00010c2b5f20(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bef0a60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar7 != 0) {
    lVar1 = param_3;
    func_0x00010bef0a60();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    if (0 < lVar7) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
  }
  lVar1 = param_3;
  func_0x00010c0d3100();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)lVar1 != 0) {
    func_0x00010c0d3a20(param_3);
    func_0x00010c0df880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b42a0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010c2bd1c0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc0620(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed60;
  func_0x00010bf46680(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf55480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b9d38;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfbc3e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = 0;
  _objc_copyWeak(auStack_78,auStack_68);
  func_0x00010bf31560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25efc0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar5);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  puVar9 = PTR_PTR_1126c7858;
  func_0x00010bf79f20(PTR_PTR_1126c7858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10609020c; end: 106090257;  */

void FUN_10609020c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec14c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106090258; end: 10609041f; -[SCBasicCaptureVideoStrategy stopRecord] */

void FUN_106090258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c3e0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c7858;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a69e0(puVar3,param_2,uVar5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x50),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4618);
  puVar3 = PTR_PTR_1126c7858;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79f60(puVar3,param_2,uVar5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106090420; end: 1060904cf; -[SCBasicCaptureVideoStrategy cancelRecordRequest] */

void FUN_106090420(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _dispatch_block_cancel(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c7858;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72d60(puVar3,param_2,uVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1060904d0; end: 1060905df; -[SCBasicCaptureVideoStrategy abortRecordWithShouldAbort:cancelReason:callsite:] */

void FUN_1060904d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c3e0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x50),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4630);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126c7858;
  func_0x00010bf79d60(PTR_PTR_1126c7858,param_2,*(undefined8 *)(param_1 + 0x40),param_3,param_4,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060905e0; end: 106090693; -[SCBasicCaptureVideoStrategy completeWithVideo:] */

void FUN_1060905e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c7858;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72ec0(puVar2,param_2,uVar4,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106090694; end: 106090747; -[SCBasicCaptureVideoStrategy completeWithError:] */

void FUN_106090694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c7858;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79100(puVar2,param_2,uVar4,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106090748; end: 1060908db; -[SCBasicCaptureVideoStrategy startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_106090748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  if (*(long *)(param_1 + 0x68) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c42e0();
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



/* Entry: 1060908dc; end: 106090b27;  */

void FUN_1060908dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106090b28;
  puStack_80 = &UNK_110872b00;
  _objc_copyWeak(auStack_78,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106090b70;
  puStack_a8 = &UNK_11090b530;
  _objc_copyWeak(auStack_a0,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106090bd8;
  puStack_d0 = &UNK_11090b560;
  _objc_copyWeak(auStack_c8,param_1 + 0x20);
  func_0x00010c0e7c40(param_2);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106090c70;
  puStack_f8 = &UNK_11090b590;
  _objc_copyWeak(auStack_f0,param_1 + 0x20);
  func_0x00010c0e3ae0(param_2);
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x106090cd8;
  puStack_120 = &UNK_11090b5c0;
  _objc_copyWeak(auStack_118,param_1 + 0x20);
  func_0x00010c0e3ac0(param_2);
  _objc_copyWeak(auStack_140,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  return;
}



/* Entry: 106090b28; end: 106090b6f;  */

void FUN_106090b28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddba40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106090b70; end: 106090bd7;  */

void FUN_106090b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddb880();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106090bd8; end: 106090c6f;  */

void FUN_106090bd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bddba60(param_1,param_2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106090c70; end: 106090da7;  */

void FUN_106090c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddb980();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106090da8; end: 106090dd3; -[SCBasicCaptureVideoStrategy stopObservingCapturerStateUpdate] */

void FUN_106090da8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106090dd4; end: 106090e27; -[SCBasicCaptureVideoStrategy _startRecordingCompletionHandlerWithActiveSessionInfo:error:] */

void FUN_106090dd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126c7850;
    func_0x00010bf9fbc0(PTR_PTR_1126c7850,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd10e0(*(undefined8 *)(param_1 + 0x30),param_2,4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106090e28; end: 106090f8b; -[SCBasicCaptureVideoStrategy _handleRecordingResultWithRecordedVideo:error:] */

void FUN_106090e28(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_3 == 0) || (param_4 != (undefined *)0x0)) {
    if (param_3 == 0 && param_4 == (undefined *)0x0) {
      uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_40 = &PTR____CFConstantStringClassReference_110e3c8f8;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e3c8d8,1000,
                          puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      param_4 = puVar2;
    }
    puVar2 = PTR_PTR_1126c7850;
    func_0x00010bf9fbc0(PTR_PTR_1126c7850,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd10e0(*(undefined8 *)(param_1 + 0x30),param_2,4,puVar2);
    _objc_release(puVar2);
  }
  else {
    param_4 = PTR_PTR_1126c7850;
    func_0x00010c104680(PTR_PTR_1126c7850,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd10e0(*(undefined8 *)(param_1 + 0x30),param_2,5,param_4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c7850;
  func_0x00010bf9fbc0(PTR_PTR_1126c7850);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd10e0(*(undefined8 *)(param_3 + 0x30),param_2,4,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106090f8c; end: 106090fd3; -[SCBasicCaptureVideoStrategy _capturerDidFailRecordingWithError:session:] */

void FUN_106090f8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7850;
  func_0x00010bf9fbc0(PTR_PTR_1126c7850);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd10e0(*(undefined8 *)(param_1 + 0x30),param_2,4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106090fd4; end: 106091187; -[SCBasicCaptureVideoStrategy _capturerWillFinishRecordingWithRecordedVideoFuture:session:videoSize:placeholderImage:] */

void FUN_106090fd4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126c7858;
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf318e0(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_78,param_3);
  puVar4 = auStack_80;
  _objc_copyWeak(puVar4,auStack_78);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106091188; end: 1060911ef;  */

void FUN_106091188(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ec40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060911f0; end: 106091243; -[SCBasicCaptureVideoStrategy _capturerDidCancelRecordingWithCapturerState:session:] */

void FUN_1060911f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126c7858;
  func_0x00010bf31840(PTR_PTR_1126c7858,param_2,*(undefined8 *)(param_1 + 0x40),param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106091244; end: 106091297; -[SCBasicCaptureVideoStrategy _capturerDidFinishRecordingWithCapturerState:session:] */

void FUN_106091244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126c7858;
  func_0x00010bf31860(PTR_PTR_1126c7858,param_2,*(undefined8 *)(param_1 + 0x40),param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106091298; end: 1060912eb; -[SCBasicCaptureVideoStrategy _capturerDidBeginRecordingWithCapturerState:session:] */

void FUN_106091298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126c7858;
  func_0x00010bf31820(PTR_PTR_1126c7858,param_2,*(undefined8 *)(param_1 + 0x40),param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060912ec; end: 10609133b; -[SCBasicCaptureVideoStrategy _capturerWillBeginRecordingWithCapturerState:] */

void FUN_1060912ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126c7858;
  func_0x00010bf318c0(PTR_PTR_1126c7858,param_2,*(undefined8 *)(param_1 + 0x40),param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10609133c; end: 1060913a7; -[SCBasicCaptureVideoStrategy _adjustedRecordingDurationForAudioConfiguration:] */

double FUN_10609133c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010c123ea0(param_4);
  if (param_1 <= 0.0) {
    func_0x00010bf6a120(param_4);
  }
  else {
    func_0x00010c123ea0();
    dVar1 = param_1;
    func_0x00010bf6a120(param_4);
    param_1 = param_1 * dVar1;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1060913a8; end: 106091457; -[SCBasicCaptureVideoStrategy .cxx_destruct] */

void FUN_1060913a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 106091458; end: 106091563; -[SCCaptureImageStrategyStateMachine initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106091458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7870;
  _objc_alloc();
  func_0x00010c00a2c0();
  puVar2 = PTR_PTR_1126c7830;
  func_0x00010becf440(PTR_PTR_1126c7830);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ef798;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithTransitions_initialState_1125f2f40,puVar2,0,
                      &PTR____CFConstantStringClassReference_110e3c918,0x32);
  _objc_release(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar3 + (long)_DAT_11273e494),param_3);
    lVar5 = (long)_DAT_11273e498;
    _objc_retain(puVar1);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined **)((long)puVar3 + lVar5) = puVar1;
    _objc_release(uVar4);
    func_0x00010c1e93c0(puVar3);
    func_0x00010c16a760(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 106091564; end: 1060916d3; +[SCCaptureImageStrategyStateMachine _transitionsWithDelegate:internalProxy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106091564(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x3;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c7878;
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_11273e498,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_11273e494);
  return;
}



/* Entry: 1060916d4; end: 10609170f; -[SCCaptureImageStrategyStateMachine .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060916d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e498,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273e494);
  return;
}



/* Entry: 106091710; end: 106091723; -[SCCaptureImageStrategyStateMachine getStateUml] */

void FUN_106091710(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf514b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c7880,PTR_s_convertStateMachineToUML_namePro_1125b1ed0,param_1,param_1);
  return;
}



/* Entry: 106091724; end: 106091747; -[SCCaptureImageStrategyStateMachine nameOfEvent:forStateMachine:] */

undefined ** FUN_106091724(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return (undefined **)(&PTR_PTR_11090b5f0)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 106091748; end: 10609176b; -[SCCaptureImageStrategyStateMachine nameOfState:forStateMachine:] */

undefined ** FUN_106091748(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return (undefined **)(&PTR_PTR_11090b610)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10609176c; end: 106091773; -[SCCaptureImageStrategyStateMachine stateMachineForState:ofParentStateMachine:] */

undefined8 FUN_10609176c(void)

{
  return 0;
}



/* Entry: 106091774; end: 1060917df; -[SCCaptureImageStrategyStateMachineInternalProxy initWithDelegate:] */

undefined1 * FUN_106091774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef7a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060917e0; end: 10609183f; -[SCCaptureImageStrategyStateMachineInternalProxy captureImage:] */

void FUN_1060917e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106091840;
  puStack_20 = &UNK_11090b630;
  uStack_18 = param_1;
  func_0x00010c0bf4a0(param_3,param_2,&puStack_38,0,0);
  return;
}



/* Entry: 106091840; end: 106091887;  */

void FUN_106091840(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf30d00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106091888; end: 1060918e3; -[SCCaptureImageStrategyStateMachineInternalProxy imageReceived:] */

void FUN_106091888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1060918e4;
  puStack_20 = &UNK_11090b660;
  uStack_18 = param_1;
  func_0x00010c0bf4a0(param_3,param_2,0,&puStack_38,0);
  return;
}



/* Entry: 1060918e4; end: 106091983;  */

void FUN_1060918e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf43d20();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106091984; end: 1060919df; -[SCCaptureImageStrategyStateMachineInternalProxy errorReceived:] */

void FUN_106091984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1060919e0;
  puStack_20 = &UNK_11090b690;
  uStack_18 = param_1;
  func_0x00010c0bf4a0(param_3,param_2,0,0,&puStack_38);
  return;
}



/* Entry: 1060919e0; end: 106091a47;  */

void FUN_1060919e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf43cc0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106091a48; end: 106091a4f; -[SCCaptureImageStrategyStateMachineInternalProxy .cxx_destruct] */

void FUN_106091a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106091a50; end: 106091b5b; -[SCCaptureVideoStrategyStateMachine initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106091a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar3 = &uStack_40;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7888;
  _objc_alloc();
  func_0x00010c00a2c0();
  puVar2 = PTR_PTR_1126c7848;
  func_0x00010becf440(PTR_PTR_1126c7848);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ef7a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithTransitions_initialState_1125f2f40,puVar2,0,
                      &PTR____CFConstantStringClassReference_110e3ca18,0x32);
  _objc_release(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar3 + (long)_DAT_11273e4a0),param_3);
    lVar5 = (long)_DAT_11273e4a4;
    _objc_retain(puVar1);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar5);
    *(undefined **)((long)puVar3 + lVar5) = puVar1;
    _objc_release(uVar4);
    func_0x00010c1e93c0(puVar3);
    func_0x00010c16a760(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 106091b5c; end: 106091e3b; +[SCCaptureVideoStrategyStateMachine _transitionsWithDelegate:internalProxy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106091b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  long lVar12;
  
  puVar1 = PTR_PTR_1126c7878;
  puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar6 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c7878;
  func_0x00010c27ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_11273e4a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1 + _DAT_11273e4a0);
  return;
}



/* Entry: 106091e3c; end: 106091e77; -[SCCaptureVideoStrategyStateMachine .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106091e3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e4a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273e4a0);
  return;
}



/* Entry: 106091e78; end: 106091e8b; -[SCCaptureVideoStrategyStateMachine getStateUml] */

void FUN_106091e78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf514b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c7880,PTR_s_convertStateMachineToUML_namePro_1125b1ed0,param_1,param_1);
  return;
}



/* Entry: 106091e8c; end: 106091eaf; -[SCCaptureVideoStrategyStateMachine nameOfEvent:forStateMachine:] */

undefined ** FUN_106091e8c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 7) {
    return (undefined **)(&PTR_PTR_11090b6c0)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 106091eb0; end: 106091ed3; -[SCCaptureVideoStrategyStateMachine nameOfState:forStateMachine:] */

undefined ** FUN_106091eb0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 8) {
    return (undefined **)(&PTR_PTR_11090b6f8)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 106091ed4; end: 106091edb; -[SCCaptureVideoStrategyStateMachine stateMachineForState:ofParentStateMachine:] */

undefined8 FUN_106091ed4(void)

{
  return 0;
}



/* Entry: 106091edc; end: 106091f47; -[SCCaptureVideoStrategyStateMachineInternalProxy initWithDelegate:] */

undefined1 * FUN_106091edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef7b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106091f48; end: 106091fab; -[SCCaptureVideoStrategyStateMachineInternalProxy startRecord:] */

void FUN_106091f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106091fac;
  puStack_20 = &UNK_11090b738;
  uStack_18 = param_1;
  func_0x00010c0bf4c0(param_3,param_2,&puStack_38,0,0,0);
  return;
}



/* Entry: 106091fac; end: 106091ff3;  */

void FUN_106091fac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2501a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106091ff4; end: 106092057; -[SCCaptureVideoStrategyStateMachineInternalProxy scheduleStartRecordRequest:] */

void FUN_106091ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106092058;
  puStack_20 = &UNK_11090b738;
  uStack_18 = param_1;
  func_0x00010c0bf4c0(param_3,param_2,&puStack_38,0,0,0);
  return;
}



/* Entry: 106092058; end: 10609209f;  */

void FUN_106092058(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c150120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060920a0; end: 1060920ff; -[SCCaptureVideoStrategyStateMachineInternalProxy abortRecord:] */

void FUN_1060920a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106092100;
  puStack_20 = &UNK_11090b768;
  uStack_18 = param_1;
  func_0x00010c0bf4c0(param_3,param_2,0,0,0,&puStack_38);
  return;
}



/* Entry: 106092100; end: 10609216f;  */

void FUN_106092100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beec580();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106092170; end: 1060921cf; -[SCCaptureVideoStrategyStateMachineInternalProxy videoReceived:] */

void FUN_106092170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1060921d0;
  puStack_20 = &UNK_11090b798;
  uStack_18 = param_1;
  func_0x00010c0bf4c0(param_3,param_2,0,&puStack_38,0,0);
  return;
}



/* Entry: 1060921d0; end: 106092217;  */

void FUN_1060921d0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf43d80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106092218; end: 106092277; -[SCCaptureVideoStrategyStateMachineInternalProxy errorReceived:] */

void FUN_106092218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106092278;
  puStack_20 = &UNK_110849810;
  uStack_18 = param_1;
  func_0x00010c0bf4c0(param_3,param_2,0,0,&puStack_38,0);
  return;
}



/* Entry: 106092278; end: 1060922bf;  */

void FUN_106092278(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf43ca0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060922c0; end: 1060922c7; -[SCCaptureVideoStrategyStateMachineInternalProxy configuration] */

undefined8 FUN_1060922c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060922c8; end: 1060922f7; -[SCCaptureVideoStrategyStateMachineInternalProxy setConfiguration:] */

void FUN_1060922c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1060922f8; end: 1060922ff; -[SCCaptureVideoStrategyStateMachineInternalProxy video] */

undefined8 FUN_1060922f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106092300; end: 10609232f; -[SCCaptureVideoStrategyStateMachineInternalProxy setVideo:] */

void FUN_106092300(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106092330; end: 106092337; -[SCCaptureVideoStrategyStateMachineInternalProxy error] */

undefined8 FUN_106092330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


