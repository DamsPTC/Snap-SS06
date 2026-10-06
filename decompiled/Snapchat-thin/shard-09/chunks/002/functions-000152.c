/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ad88b0; end: 106ad88b7; -[SCBlizzardEventLoggerAdapter setShouldSampleEvents:] */

void FUN_106ad88b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106ad88b8; end: 106ad88c3; -[SCBlizzardEventLoggerAdapter setExperimentProvider:] */

void FUN_106ad88b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106ad88c4; end: 106ad88cb; -[SCBlizzardEventLoggerAdapter appStateProvider] */

undefined8 FUN_106ad88c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106ad88cc; end: 106ad88fb; -[SCBlizzardEventLoggerAdapter setAppStateProvider:] */

void FUN_106ad88cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad88fc; end: 106ad8903; -[SCBlizzardEventLoggerAdapter mapDeserializer] */

undefined8 FUN_106ad88fc(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106ad8904; end: 106ad890b; -[SCBlizzardEventLoggerAdapter fileQueues] */

undefined8 FUN_106ad8904(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106ad890c; end: 106ad893b; -[SCBlizzardEventLoggerAdapter setFileQueues:] */

void FUN_106ad890c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad893c; end: 106ad8943; -[SCBlizzardEventLoggerAdapter isSpectrumEnabled] */

undefined1 FUN_106ad893c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 106ad8944; end: 106ad894b; -[SCBlizzardEventLoggerAdapter setIsSpectrumEnabled:] */

void FUN_106ad8944(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 106ad894c; end: 106ad8953; -[SCBlizzardEventLoggerAdapter appInsightsMetadataStorage] */

undefined8 FUN_106ad894c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106ad8954; end: 106ad8a7b; -[SCBlizzardEventLoggerAdapter .cxx_destruct] */

void FUN_106ad8954(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad8a7c; end: 106ad8b8b;  */

undefined * FUN_106ad8a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c246ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c246ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(param_3);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar3 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 106ad8b8c; end: 106ad8bbb; -[SCBlizzardEventLoggerConstructorV2 setConfig:] */

void FUN_106ad8b8c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad8bbc; end: 106ad8beb; -[SCBlizzardEventLoggerConstructorV2 setLoggingQueue:] */

void FUN_106ad8bbc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad8bec; end: 106ad8c1b; -[SCBlizzardEventLoggerConstructorV2 setTimeProvider:] */

void FUN_106ad8bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad8c1c; end: 106ad8c4b; -[SCBlizzardEventLoggerConstructorV2 setEventConfigurer:] */

void FUN_106ad8c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad8c4c; end: 106ad8c7b; -[SCBlizzardEventLoggerConstructorV2 setAppStateProvider:] */

void FUN_106ad8c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad8c7c; end: 106ad8cab; -[SCBlizzardEventLoggerConstructorV2 setFileSystem:] */

void FUN_106ad8c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad8cac; end: 106ad8cb3; -[SCBlizzardEventLoggerConstructorV2 fileCompressor] */

undefined8 FUN_106ad8cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ad8cb4; end: 106ad8ce3; -[SCBlizzardEventLoggerConstructorV2 setFileCompressor:] */

void FUN_106ad8cb4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad8ce4; end: 106ad8d13; -[SCBlizzardEventLoggerConstructorV2 setAllSpectrumLoggers:] */

void FUN_106ad8ce4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad8d14; end: 106ad8d1b; -[SCBlizzardEventLoggerConstructorV2 circumstanceEngine] */

undefined8 FUN_106ad8d14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106ad8d1c; end: 106ad8d23; -[SCBlizzardEventLoggerConstructorV2 blizzardRtusEventRouter] */

undefined8 FUN_106ad8d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106ad8d24; end: 106ad8d53; -[SCBlizzardEventLoggerConstructorV2 setBlizzardRtusEventRouter:] */

void FUN_106ad8d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad8d54; end: 106ad8d83; -[SCBlizzardEventLoggerConstructorV2 setEagerUploadStatusManager:] */

void FUN_106ad8d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad8d84; end: 106ad8db3; -[SCBlizzardEventLoggerConstructorV2 setEagerUploadIdProvider:] */

void FUN_106ad8d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad8db4; end: 106ad8de3; -[SCBlizzardEventLoggerProviderV2 getLoggersForSCBlizzardEvent:] */

void FUN_106ad8db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf9a1a0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be20490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getLoggersForQoS_region__112565ac0,param_3,1);
  return;
}



/* Entry: 106ad8de4; end: 106ad8de7; -[SCBlizzardEventLoggerProviderV2 getBlizzardLoggers] */

void FUN_106ad8de4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_blizzardLoggers_1125a4d70);
  return;
}



/* Entry: 106ad8de8; end: 106ad8deb; -[SCBlizzardEventLoggerProviderV2 getSpectrumLoggers] */

void FUN_106ad8de8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_spectrumLoggers_112670100);
  return;
}



/* Entry: 106ad8dec; end: 106ad8e1b; -[SCBlizzardEventLoggerProviderV2 setQosToLoggersDict:] */

void FUN_106ad8dec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad8e1c; end: 106ad8e23; -[SCBlizzardEventLoggerProviderV2 blizzardLoggers] */

undefined8 FUN_106ad8e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ad8e24; end: 106ad8e53; -[SCBlizzardEventLoggerProviderV2 setBlizzardLoggers:] */

void FUN_106ad8e24(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad8e54; end: 106ad8e5b; -[SCBlizzardEventLoggerProviderV2 spectrumLoggers] */

undefined8 FUN_106ad8e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ad8e5c; end: 106ad8e8b; -[SCBlizzardEventLoggerProviderV2 setSpectrumLoggers:] */

void FUN_106ad8e5c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad8e8c; end: 106ad8ebb; -[SCBlizzardEventLoggerProviderV2 setSpectrumPriorityToLoggerMap:] */

void FUN_106ad8e8c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad8ebc; end: 106ad8f03; -[SCBlizzardEventLoggerProviderV2 .cxx_destruct] */

void FUN_106ad8ebc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad8f04; end: 106ad9077; -[SCBlizzardEventLogger maybeFlushSpectrumAllEventsToDiskIfTimeElapsed] */

void FUN_106ad8f04(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  
  uVar1 = param_2;
  func_0x00010c249aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  uVar2 = param_2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c249a60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar6 = param_1;
    _objc_release(puVar4);
    func_0x00010c249b20(param_2);
    uVar1 = param_2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c249a60();
    _objc_release(uVar1);
    if ((double)uVar2 <= param_1 - dVar6) {
      uVar1 = param_2;
      func_0x00010bfcde60(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_2;
      func_0x00010c0ad4a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_2;
      func_0x00010c249aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf529e0();
      FUN_106acb350(uVar1,&PTR____CFConstantStringClassReference_110db8118,uVar2,uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be99c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__saveSpectrumEventsAndDrain_1125840b8);
      return;
    }
  }
  return;
}



/* Entry: 106ad9078; end: 106ad907b; -[SCBlizzardEventLogger flushSpectrumAllEventsToDisk] */

void FUN_106ad9078(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveSpectrumEventsAndDrain_1125840b8);
  return;
}



/* Entry: 106ad907c; end: 106ad9743; -[SCBlizzardEventLogger _saveSpectrumEventsAndDrain] */

undefined * FUN_106ad907c(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010c249aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = param_1;
    func_0x00010c249aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c249b00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar4;
    func_0x00010c27a540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar14);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010c249aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010befff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        uVar15 = *(undefined8 *)((long)puVar14 * 8);
        puVar5 = PTR_PTR_1126d04d0;
        _objc_opt_new(PTR_PTR_1126d04d0);
        uVar6 = uVar15;
        func_0x00010c249a80(uVar15);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1976e0(puVar5);
        _objc_release(uVar7);
        _objc_release(uVar6);
        puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        _objc_release(puVar8);
        func_0x00010c17cc00(puVar5);
        func_0x00010bf3d1e0(uVar15);
        func_0x00010c17ce60(puVar5);
        func_0x00010c249c00(param_1);
        func_0x00010c207be0(param_1);
        func_0x00010c1fcfa0(puVar5);
        puVar9 = PTR_PTR_1126d03c0;
        _objc_opt_new(PTR_PTR_1126d03c0);
        func_0x00010c197840();
        func_0x00010befa120(puVar2);
        puVar10 = param_1;
        func_0x00010bfcde60(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar6 = uVar15;
        func_0x00010c249a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9a0a0();
        func_0x00010c14de00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        FUN_106ac88fc(puVar10,puVar8,1);
        _objc_release(puVar8);
        _objc_release(uVar6);
        _objc_release(puVar10);
        puVar10 = param_1;
        func_0x00010bfcde60(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c249a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9a0a0();
        func_0x00010c14de00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar5;
        func_0x00010bf99c00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c08fa60();
        FUN_106ac8a70(puVar10,puVar8,puVar12);
        _objc_release(puVar11);
        _objc_release(puVar8);
        _objc_release(uVar15);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar5);
        puVar14 = puVar14 + 1;
      } while (puVar3 != puVar14);
      puVar3 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d04d8;
    _objc_opt_new(PTR_PTR_1126d04d8);
    func_0x00010c207c00();
    puVar4 = param_1;
    func_0x00010bfcde60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010c249aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar14;
    func_0x00010befff20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf529e0();
    FUN_106ac247c(puVar4,puVar5);
    _objc_release(puVar8);
    _objc_release(puVar14);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010bfcde60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010bf529e0(puVar2);
    FUN_106ac24f4(puVar4,puVar14);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bf63640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010c071180();
    if ((int)puVar14 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = param_1;
      func_0x00010bf8bd80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc8020();
      _objc_release(puVar14);
      puVar14 = param_1;
      func_0x00010bf8bd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      func_0x00010c249aa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010befff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c11e020(param_1);
      func_0x00010c125a80(param_1);
      func_0x00010bf529e0(puVar2);
      func_0x00010c28dc20(puVar14);
      _objc_release(puVar5);
      _objc_release(puVar8);
      _objc_release(puVar14);
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = param_1;
    func_0x00010bfacfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c249aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010befff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c11e020(param_1);
    func_0x00010c125a80(param_1);
    func_0x00010bf07080(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar8);
    puVar8 = param_1;
    func_0x00010c249aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010c249aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c12c0e0(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c207ba0(param_1);
    _objc_release(puVar8);
    _objc_release(puVar14);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 106ad9744; end: 106ad974b; -[SCBlizzardEventLogger _isInternalBuild] */

undefined8 FUN_106ad9744(void)

{
  return 0;
}



/* Entry: 106ad974c; end: 106ad984f; -[SCBlizzardEventLoggerAdapter streamEvent:region:] */

void FUN_106ad974c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0b3ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_40 = param_4;
    func_0x00010befa3a0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106ad9850; end: 106ad988f;  */

void FUN_106ad9850(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010beeb620(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ad9890; end: 106ad9893; +[SCSpectrumLogViewerDisplay appendToSpectrumLogViewerIfLoggingEnabled:region:] */

void FUN_106ad9890(void)

{
  return;
}



/* Entry: 106ad9894; end: 106ad99d7; +[SCBlizzardEvent eventFromSCAEventWithProperties:properties:isCritical:appInsightsMetadataStorage:] */

void FUN_106ad9894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0a640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  func_0x00010bef7f60(uVar2);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b72d8;
  _objc_opt_class(PTR_PTR_1126b72d8);
  _objc_opt_isKindOfClass(param_3,puVar3);
  puVar3 = PTR_PTR_1126d02f8;
  _objc_alloc(PTR_PTR_1126d02f8);
  func_0x00010bfc5360(param_3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1ee20(PTR_PTR_1126d02f8);
  func_0x00010c03b760(puVar3);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ad99d8; end: 106ad99eb; +[SCBlizzardEvent eventFromProperties:isCritical:appInsightsMetadataStorage:] */

void FUN_106ad99d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d02f8,PTR_s_eventFromProperties_isCritical_e_1125c4140,param_3,param_4,
             0xffffffffffffffff,param_5);
  return;
}



/* Entry: 106ad99ec; end: 106ad9a03; +[SCBlizzardEvent eventFromProperties:isCritical:eventQoS:appInsightsMetadataStorage:] */

void FUN_106ad99ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d02f8,PTR_s_eventFromProperties_isCritical_e_1125c4148);
  return;
}



/* Entry: 106ad9a04; end: 106ad9adb; +[SCBlizzardEvent eventFromProperties:isCritical:eventQoS:isUserTrackedEvent:rawEvent:appInsightsMetadataStorage:] */

void FUN_106ad9a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d02f8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  puVar1 = puVar2;
  func_0x00010be1ee20(puVar2,param_2,param_7);
  func_0x00010bf99ea0(puVar2,param_2,param_3,param_4,param_5,param_6,param_7,puVar1,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ad9adc; end: 106ad9ba7; +[SCBlizzardEvent eventFromProperties:isCritical:eventQoS:isUserTrackedEvent:rawEvent:blizzardEventSource:appInsightsMetadataStorage:] */

void FUN_106ad9adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d02f8;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03b760();
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ad9ba8; end: 106ad9c0f; -[SCBlizzardEvent logQueueSequenceId] */

undefined8 FUN_106ad9ba8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0d3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b4ca0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106ad9c10; end: 106ad9c77; -[SCBlizzardEvent setLogQueueSequenceId:] */

void FUN_106ad9c10(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ad9c78; end: 106ad9cc7; -[SCBlizzardEvent logQueueName] */

void FUN_106ad9c78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ad9cc8; end: 106ad9d23; -[SCBlizzardEvent setLogQueueName:] */

void FUN_106ad9cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0d3d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ad9d24; end: 106ad9d73; -[SCBlizzardEvent userId] */

void FUN_106ad9d24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ad9d74; end: 106ad9dc3; -[SCBlizzardEvent userGuid] */

void FUN_106ad9d74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ad9dc4; end: 106ad9e13; -[SCBlizzardEvent sessionId] */

void FUN_106ad9dc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d3d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ad9e14; end: 106ad9e9f; -[SCBlizzardEvent isEqual:] */

long FUN_106ad9e14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    if (param_3 != 0) {
      lVar1 = param_3;
      _objc_opt_class();
      lVar2 = param_1;
      _objc_opt_class(param_1);
      func_0x00010c071ae0(lVar1,param_2,lVar2);
      if ((int)lVar1 != 0) {
        func_0x00010c071d40(param_1,param_2,param_3);
        goto LAB_106ad9e84;
      }
    }
    param_1 = 0;
  }
LAB_106ad9e84:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106ad9ea0; end: 106ada0db; -[SCBlizzardEvent isEqualToEvent:] */

bool FUN_106ad9ea0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
    goto LAB_106ada034;
  }
  if (param_3 != 0) {
    lVar2 = param_1;
    func_0x00010c06f9a0();
    lVar3 = param_3;
    func_0x00010c06f9a0();
    if ((int)lVar2 == (int)lVar3) {
      lVar2 = param_1;
      func_0x00010bf9a1a0();
      lVar3 = param_3;
      func_0x00010bf9a1a0();
      if (lVar2 == lVar3) {
        lVar2 = param_1;
        func_0x00010c082920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          lVar2 = param_3;
          func_0x00010c082920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 != 0) goto LAB_106ada030;
        }
        else {
          _objc_release();
        }
        lVar2 = param_1;
        func_0x00010c082920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_3;
        func_0x00010c082920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        if (lVar2 == lVar3) {
          lVar2 = param_1;
          func_0x00010bf1ce00();
          lVar3 = param_3;
          func_0x00010bf1ce00();
          if ((int)lVar2 == (int)lVar3) {
            lVar2 = param_1;
            func_0x00010c0d3d80();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = param_3;
            func_0x00010c0d3d80();
            _objc_retainAutoreleasedReturnValue();
            if (lVar2 == lVar3) {
              _objc_release(lVar3);
              _objc_release(lVar2);
            }
            else {
              lVar4 = param_1;
              func_0x00010c0d3d80();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = param_3;
              func_0x00010c0d3d80(param_3);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar4;
              func_0x00010c071d00(lVar4,param_2,lVar5);
              _objc_release(lVar5);
              _objc_release(lVar4);
              _objc_release(lVar3);
              _objc_release(lVar2);
              if ((int)lVar6 == 0) goto LAB_106ada030;
            }
            lVar2 = param_1;
            func_0x00010c1200e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar2 == 0) {
              lVar2 = param_3;
              func_0x00010c1200e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar2 != 0) goto LAB_106ada030;
            }
            else {
              _objc_release();
            }
            func_0x00010c1200e0(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_3;
            func_0x00010c1200e0(param_3);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = param_1 == lVar2;
            _objc_release();
            _objc_release(param_1);
            goto LAB_106ada034;
          }
        }
      }
    }
  }
LAB_106ada030:
  bVar1 = false;
LAB_106ada034:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106ada0dc; end: 106ada137; -[SCBlizzardEvent hash] */

long FUN_106ada0dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c06f9a0();
  lVar1 = 0x1f;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  func_0x00010c0d3d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return lVar2 + lVar1;
}



/* Entry: 106ada138; end: 106ada20b; -[SCBlizzardEvent _setDateForBothJsonAndProtoMaps:usingKey:protoFieldNumber:] */

void FUN_106ada138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bea34a0(param_2,param_3,param_4,param_5);
  func_0x00010c1200e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f320(param_4);
  _objc_release(param_4);
  func_0x00010c0df720(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_2,param_3,param_5,param_6,puVar1,5);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ada20c; end: 106ada23b; -[SCBlizzardEvent setAppInsightsMetadataStorage:] */

void FUN_106ada20c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ada23c; end: 106ada243; -[SCBlizzardEvent setIsCritical:] */

void FUN_106ada23c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ada244; end: 106ada24b; -[SCBlizzardEvent setEventQoS:] */

void FUN_106ada244(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106ada24c; end: 106ada27b; -[SCBlizzardEvent setIsUserTrackedEvent:] */

void FUN_106ada24c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ada27c; end: 106ada283; -[SCBlizzardEvent setBlizzardEventSource:] */

void FUN_106ada27c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106ada284; end: 106ada2b3; -[SCBlizzardEvent setRawEvent:] */

void FUN_106ada284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ada2b4; end: 106ada2e3; -[SCBlizzardEvent setMutableProperties:] */

void FUN_106ada2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ada2e4; end: 106ada36f; -[SCBlizzardEventList isEqual:] */

long FUN_106ada2e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    param_1 = 1;
  }
  else {
    if (param_3 != 0) {
      lVar1 = param_3;
      _objc_opt_class();
      lVar2 = param_1;
      _objc_opt_class(param_1);
      func_0x00010c071ae0(lVar1,param_2,lVar2);
      if ((int)lVar1 != 0) {
        func_0x00010c071d60(param_1,param_2,param_3);
        goto LAB_106ada354;
      }
    }
    param_1 = 0;
  }
LAB_106ada354:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106ada370; end: 106ada45f; -[SCBlizzardEventList isEqualToEventList:] */

uint FUN_106ada370(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar5 = 1;
  }
  else if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0d3cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0d3cc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == lVar2) {
      uVar5 = 1;
    }
    else {
      func_0x00010c0d3cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c0d3cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c071b60(param_1,param_2,lVar3);
      uVar5 = (uint)lVar4;
      _objc_release(lVar3);
      _objc_release(param_1);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return uVar5 & 1;
}



/* Entry: 106ada460; end: 106ada49b; -[SCBlizzardEventList hash] */

undefined8 FUN_106ada460(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d3cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ada49c; end: 106ada4cb; -[SCBlizzardEventList setMutableEvents:] */

void FUN_106ada49c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ada4cc; end: 106ada60f; -[SCBlizzardNativeUserNotTrackedEvent initWithEventName:payloadId:qos:perUserSamplingRate:perEventSamplingRate:eventFields:protoSerializationCallback:perUserSamplingRateV2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106ada4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126f4c00;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112757b30);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b34) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b38) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b3c) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b40) = param_2;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112757b44);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b44) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112757b48;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b4c) = param_3;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106ada610; end: 106ada61f; -[SCBlizzardNativeUserNotTrackedEvent toProtoWithAllowedFields:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ada610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757b48),PTR_s_serializeToProto_112635450);
  return;
}



/* Entry: 106ada620; end: 106ada64f; -[SCBlizzardNativeUserNotTrackedEvent getEventName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ada620(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112757b30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ada650; end: 106ada65f; -[SCBlizzardNativeUserNotTrackedEvent getPayloadIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada650(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b34);
}



/* Entry: 106ada660; end: 106ada66f; -[SCBlizzardNativeUserNotTrackedEvent getEventQoS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada660(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b38);
}



/* Entry: 106ada670; end: 106ada67f; -[SCBlizzardNativeUserNotTrackedEvent getPerUserSamplingRateV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b4c);
}



/* Entry: 106ada680; end: 106ada68f; -[SCBlizzardNativeUserNotTrackedEvent getPerUserSamplingRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada680(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b3c);
}



/* Entry: 106ada690; end: 106ada69f; -[SCBlizzardNativeUserNotTrackedEvent getPerEventSamplingRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada690(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b40);
}



/* Entry: 106ada6a0; end: 106ada74b; -[SCBlizzardNativeUserNotTrackedEvent asDictionary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ada6a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010bef7f60();
  puStack_38 = PTR_PTR_1126f4c00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_asDictionary_1125a0338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d0560(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ada74c; end: 106ada7ab; -[SCBlizzardNativeUserNotTrackedEvent copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ada74c(long param_1)

{
  _objc_alloc(PTR_PTR_1126d0330);
                    /* WARNING: Could not recover jumptable at 0x00010c010cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757b3c),*(undefined8 *)(param_1 + _DAT_112757b40),
             *(undefined8 *)(param_1 + _DAT_112757b4c));
  return;
}



/* Entry: 106ada7ac; end: 106ada7fb; -[SCBlizzardNativeUserNotTrackedEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ada7ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757b48,0);
  _objc_storeStrong(param_1 + _DAT_112757b44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757b30,0);
  return;
}



/* Entry: 106ada7fc; end: 106ada93f; -[SCBlizzardNativeUserTrackedEvent initWithEventName:payloadId:qos:perUserSamplingRate:perEventSamplingRate:eventFields:protoSerializationCallback:perUserSamplingRateV2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106ada7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126f4c08;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112757b50);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b50) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b54) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b58) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b5c) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b60) = param_2;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112757b64);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b64) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112757b68;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112757b6c) = param_3;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106ada940; end: 106ada94f; -[SCBlizzardNativeUserTrackedEvent toProtoWithAllowedFields:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ada940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15e8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757b68),PTR_s_serializeToProto_112635450);
  return;
}



/* Entry: 106ada950; end: 106ada97f; -[SCBlizzardNativeUserTrackedEvent getEventName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ada950(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112757b50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ada980; end: 106ada98f; -[SCBlizzardNativeUserTrackedEvent getPayloadIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada980(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b54);
}



/* Entry: 106ada990; end: 106ada99f; -[SCBlizzardNativeUserTrackedEvent getEventQoS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada990(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b58);
}



/* Entry: 106ada9a0; end: 106ada9af; -[SCBlizzardNativeUserTrackedEvent getPerUserSamplingRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada9a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b5c);
}



/* Entry: 106ada9b0; end: 106ada9bf; -[SCBlizzardNativeUserTrackedEvent getPerUserSamplingRateV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada9b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b6c);
}



/* Entry: 106ada9c0; end: 106ada9cf; -[SCBlizzardNativeUserTrackedEvent getPerEventSamplingRate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ada9c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112757b60);
}



/* Entry: 106ada9d0; end: 106adaa7b; -[SCBlizzardNativeUserTrackedEvent asDictionary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ada9d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010bef7f60();
  puStack_38 = PTR_PTR_1126f4c08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_asDictionary_1125a0338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d0560(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106adaa7c; end: 106adaadb; -[SCBlizzardNativeUserTrackedEvent copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106adaa7c(long param_1)

{
  _objc_alloc(PTR_PTR_1126d0328);
                    /* WARNING: Could not recover jumptable at 0x00010c010cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112757b5c),*(undefined8 *)(param_1 + _DAT_112757b60),
             *(undefined8 *)(param_1 + _DAT_112757b6c));
  return;
}



/* Entry: 106adaadc; end: 106adab2b; -[SCBlizzardNativeUserTrackedEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106adaadc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112757b68,0);
  _objc_storeStrong(param_1 + _DAT_112757b64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112757b50,0);
  return;
}



/* Entry: 106adab2c; end: 106adacef; -[SCSpectrumEvent copyWithZone:] */

undefined * FUN_106adab2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126d04e0;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2922e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf04e20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf066e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0edc80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bf70ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010beed3e0();
  uVar11 = param_1;
  func_0x00010bf061c0();
  func_0x00010bf3d1e0();
  func_0x00010c249a80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010bf51e00();
  func_0x00010c045320(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                      (int)uVar11);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 106adacf0; end: 106adacf7; -[SCSpectrumEvent clientNodepEpochMs] */

undefined8 FUN_106adacf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106adacf8; end: 106adad7b; -[SCSpectrumEvent .cxx_destruct] */

void FUN_106adacf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 106adad7c; end: 106adadf7; -[SCSpectrumEventList removeEarliestEvents:] */

ulong FUN_106adad7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c0d3cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  func_0x00010c0d3cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d520();
  _objc_release(param_1);
  return param_3;
}



/* Entry: 106adadf8; end: 106adae27; -[SCSpectrumEventList setMutableEvents:] */

void FUN_106adadf8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106adae28; end: 106adafbb; -[SCBlizzardRequestUrlProvider collectorUrlForlogQueueName:appInBackground:numEventsOnDisk:numEventsInRequest:] */

void FUN_106adae28(undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  int iVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e6e038;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110df09d8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuStack_70 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e6e058;
  uVar13 = param_6;
  uStack_78 = param_3;
  _objc_retain(param_3);
  func_0x00010c0df840(puVar1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e6e078;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_68 = puVar2;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  pppuVar11 = &ppuStack_98;
  uVar12 = 4;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_78,pppuVar11,4);
  iVar10 = (int)pppuVar11;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar5;
  func_0x00010be23a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_158 = &PTR____CFConstantStringClassReference_110e6e038;
    ppuStack_150 = &PTR____CFConstantStringClassReference_110df09d8;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110dad378;
    if (iVar10 == 0) {
      ppuStack_128 = &PTR____CFConstantStringClassReference_110dad398;
    }
    ppuStack_148 = &PTR____CFConstantStringClassReference_110e6e058;
    puStack_130 = puVar1;
    _objc_retain(puVar1);
    func_0x00010c0df840(puVar2,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_140 = &PTR____CFConstantStringClassReference_110e6e078;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_120 = puVar3;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_138 = &PTR____CFConstantStringClassReference_110e6e098;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_118 = puVar6;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_110 = puVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_130,&ppuStack_158,
                        5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010be23a00(puVar5,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      param_1 = *(undefined **)(puVar9 + 0x10);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106adafbc; end: 106adb1a3; -[SCBlizzardRequestUrlProvider collectorUrlForlogQueueName:appInBackground:numEventsOnDisk:numEventsInRequest:maxPriority:] */

void FUN_106adafbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e6e038;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110df09d8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_110dad398;
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e6e058;
  uStack_90 = param_3;
  _objc_retain(param_3);
  func_0x00010c0df840(puVar1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e6e078;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar2;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e6e098;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar4;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_90,&ppuStack_b8,5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be23a00(param_1,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    param_1 = *(undefined8 *)(puVar7 + 0x10);
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106adb1a4; end: 106adb1cb; -[SCBlizzardRequestUrlProvider collectorUrlForSpectrum] */

void FUN_106adb1a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


