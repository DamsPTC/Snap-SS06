/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bf5380; end: 106bf541f; -[SCGrapheneAdservicesMetric description] */

void FUN_106bf5380(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e78798;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e78798,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f5a88;
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



/* Entry: 106bf5420; end: 106bf559f; -[SCGrapheneRegistry adservicesGraphene] */

void FUN_106bf5420(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106bf54a8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c6d20 != -1) {
    func_0x00010002a2fc(0x1136c6d20,&puStack_48);
  }
  uVar1 = uRam00000001136c6d18;
  _objc_retain(uRam00000001136c6d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bf55a0; end: 106bf55f7; -[SCApplicationInstallLoggerServices initWithApplicationInstallLogger:] */

long FUN_106bf55a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106bf55f8; end: 106bf55ff; -[SCApplicationInstallLoggerServices applicationInstallLogger] */

undefined8 FUN_106bf55f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bf5600; end: 106bf560b; -[SCApplicationInstallLoggerServices .cxx_destruct] */

void FUN_106bf5600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf560c; end: 106bf5687;  */

undefined * FUN_106bf560c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6d28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e78878,
                        &UNK_10dde7b18,&UNK_10dde7b34,4,FUN_106bf5688,0);
    do {
      if (puRam00000001136c6d28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6d28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6d28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6d28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6d28;
}



/* Entry: 106bf5688; end: 106bf5693;  */

bool FUN_106bf5688(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106bf5694; end: 106bf56fb; +[RetrieveConversionValueRequest descriptor] */

void FUN_106bf5694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b21e10,
                        &PTR____CFConstantStringClassReference_110e78898,&PTR_DAT_113177cd0,
                        &PTR_DAT_113177d48,5,0x28,0x1c);
    puRam00000001136c6d30 = puVar1;
  }
  return;
}



/* Entry: 106bf56fc; end: 106bf5763; +[RetrieveConversionValueResponse descriptor] */

void FUN_106bf56fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b21e60,
                        &PTR____CFConstantStringClassReference_110e788b8,&PTR_DAT_113177cd0,
                        &PTR_s_conversionValue_113177ce8,3,0xc,0x1c);
    puRam00000001136c6d38 = puVar1;
  }
  return;
}



/* Entry: 106bf5764; end: 106bf5a47; -[SCDurableDeviceIDPostAuthLoggingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bf5764(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_11275a9d0;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c073d80();
  if ((int)lVar3 == 0) {
    lVar10 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar3 = lVar10;
    func_0x00010c293780();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c073c40();
    _objc_release(lVar3);
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 == 0) goto LAB_106bf5858;
  }
  else {
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1 + _DAT_11275a9d4;
  _objc_loadWeakRetained(lVar1);
  lVar10 = lVar1;
  func_0x00010bf8b100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5500();
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar1);
LAB_106bf5858:
  param_1 = param_1 + _DAT_11275a9d8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6840();
  func_0x00010c198180(puVar5,param_2,0);
  puVar6 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1edae0(puVar6,param_2,0xe10);
  func_0x00010c1ed860(puVar5,param_2,puVar6);
  puVar7 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar8 = puVar7;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf06200(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf06200(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf06200(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar8);
  func_0x00010c1cc140(puVar7,param_2,1);
  func_0x00010c1b66e0(puVar5,param_2,puVar7);
  puVar8 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar9 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar8,param_2,puVar9);
  func_0x00010c1b67e0(puVar5,param_2,puVar8);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c25f200(lVar10,param_2,0,puVar5,0,0);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 106bf5a48; end: 106bf5a97; -[SCDurableDeviceIDPostAuthLoggingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bf5a48(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275a9d4);
  _objc_destroyWeak(param_1 + _DAT_11275a9d8);
  _objc_destroyWeak(param_1 + _DAT_11275a9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275a9dc);
  return;
}



/* Entry: 106bf5a98; end: 106bf5b0b; -[SCDurableDeviceIDReportingJobProcessor initWithDurableDeviceIDLogger:] */

undefined1 * FUN_106bf5a98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5a90;
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



/* Entry: 106bf5b0c; end: 106bf5b7b; -[SCDurableDeviceIDReportingJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106bf5b0c(long param_1)

{
  undefined8 uVar1;
  long in_x5;
  
  _objc_retain(in_x5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5500();
  _objc_release(uVar1);
  if (in_x5 != 0) {
    (**(code **)(in_x5 + 0x10))(in_x5,0,0);
  }
  _objc_release(in_x5);
  return 0;
}



/* Entry: 106bf5b7c; end: 106bf5b87; -[SCDurableDeviceIDReportingJobProcessor .cxx_destruct] */

void FUN_106bf5b7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf5b88; end: 106bf5bfb; -[SCDurableDeviceIDLoggerServices initWithDurableDeviceIDLogger:] */

undefined1 * FUN_106bf5b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5a98;
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



/* Entry: 106bf5bfc; end: 106bf5c03; -[SCDurableDeviceIDLoggerServices durableDeviceIDLogger] */

undefined8 FUN_106bf5bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bf5c04; end: 106bf5c33; -[SCDurableDeviceIDLoggerServices setDurableDeviceIDLogger:] */

void FUN_106bf5c04(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106bf5c34; end: 106bf5c3f; -[SCDurableDeviceIDLoggerServices .cxx_destruct] */

void FUN_106bf5c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf5c40; end: 106bf5d13; -[SCPasskeyEnrollmentScope initWithPresentingWindow:uiContainer:delegate:trigger:] */

undefined1 *
FUN_106bf5c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f5aa0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bf5d14; end: 106bf5d1b; -[SCPasskeyEnrollmentScope presentingWindow] */

undefined8 FUN_106bf5d14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bf5d1c; end: 106bf5d23; -[SCPasskeyEnrollmentScope uiContainer] */

undefined8 FUN_106bf5d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106bf5d24; end: 106bf5d3b; -[SCPasskeyEnrollmentScope delegate] */

void FUN_106bf5d24(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf5d3c; end: 106bf5d43; -[SCPasskeyEnrollmentScope trigger] */

undefined8 FUN_106bf5d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106bf5d44; end: 106bf5d7b; -[SCPasskeyEnrollmentScope .cxx_destruct] */

void FUN_106bf5d44(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf5d7c; end: 106bf5dc7; +[SCPasskeyEnrollmentResult cancelled] */

void FUN_106bf5d7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1490;
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



/* Entry: 106bf5dc8; end: 106bf5e13; +[SCPasskeyEnrollmentResult deduped] */

void FUN_106bf5dc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1490;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bf5e14; end: 106bf5e6f; +[SCPasskeyEnrollmentResult failureWithPermanent:] */

void FUN_106bf5e14(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1490;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bf5e70; end: 106bf5eb7; +[SCPasskeyEnrollmentResult success] */

void FUN_106bf5e70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1490;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bf5eb8; end: 106bf5edb; -[SCPasskeyEnrollmentResult copyWithZone:] */

undefined8 FUN_106bf5eb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106bf5edc; end: 106bf5f37; -[SCPasskeyEnrollmentResult hash] */

void FUN_106bf5edc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x10);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f5aa8;
  puStack_60 = puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf5f38; end: 106bf5f7b; -[SCPasskeyEnrollmentResult internalInit] */

void FUN_106bf5f38(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5aa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf5f7c; end: 106bf6013; -[SCPasskeyEnrollmentResult isEqual:] */

bool FUN_106bf5f7c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106bf6014; end: 106bf60fb; -[SCPasskeyEnrollmentResult matchSuccess:failure:cancelled:deduped:] */

void FUN_106bf6014(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 != 0) {
      if ((lVar1 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))(param_4,*(undefined1 *)(param_1 + 0x10));
      }
      goto LAB_106bf60cc;
    }
    if (param_3 == 0) goto LAB_106bf60cc;
    pcVar2 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  else if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_106bf60cc;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if ((lVar1 != 3) || (param_6 == 0)) goto LAB_106bf60cc;
    pcVar2 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
  }
  (*pcVar2)(lVar1);
LAB_106bf60cc:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bf60fc; end: 106bf6147; +[SCPasskeyEnrollmentStatus creatingPasskey] */

void FUN_106bf60fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1498;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bf6148; end: 106bf618f; +[SCPasskeyEnrollmentStatus fetchingEnrollmentOptions] */

void FUN_106bf6148(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1498;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bf6190; end: 106bf61f7; +[SCPasskeyEnrollmentStatus finishedWithResult:] */

void FUN_106bf6190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1498;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bf61f8; end: 106bf6243; +[SCPasskeyEnrollmentStatus persistingPasskey] */

void FUN_106bf61f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1498;
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



/* Entry: 106bf6244; end: 106bf6267; -[SCPasskeyEnrollmentStatus copyWithZone:] */

undefined8 FUN_106bf6244(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106bf6268; end: 106bf62c7; -[SCPasskeyEnrollmentStatus hash] */

void FUN_106bf6268(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f5ab0;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf62c8; end: 106bf630b; -[SCPasskeyEnrollmentStatus internalInit] */

void FUN_106bf62c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5ab0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf630c; end: 106bf63ab; -[SCPasskeyEnrollmentStatus isEqual:] */

long FUN_106bf630c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106bf6390;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_106bf6390;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106bf6390;
    }
  }
  lVar3 = 1;
LAB_106bf6390:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106bf63ac; end: 106bf6493; -[SCPasskeyEnrollmentStatus matchFetchingEnrollmentOptions:creatingPasskey:persistingPasskey:finished:] */

void FUN_106bf63ac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_106bf6464;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_106bf6464;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else {
    if (lVar1 != 2) {
      if ((lVar1 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_106bf6464;
    }
    if (param_5 == 0) goto LAB_106bf6464;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  (*pcVar2)(lVar1);
LAB_106bf6464:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bf6494; end: 106bf649f; -[SCPasskeyEnrollmentStatus .cxx_destruct] */

void FUN_106bf6494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106bf64a0; end: 106bf65c3; -[SCAdInitDurableJob initWithAdsPreferencesProvider:adConfigProvider:userAdIdProvider:adInitializer:jobKey:] */

undefined1 *
FUN_106bf64a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5ab8;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bf65c4; end: 106bf67ab; -[SCAdInitDurableJob processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106bf65c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
    lVar1 = param_4;
    _objc_retainAutorelease(param_4);
    func_0x00010bf25f00();
    func_0x00010c057e80(puVar2,param_2,lVar1);
    puVar3 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  puVar2 = PTR_PTR_1126d14a0;
  _objc_alloc(PTR_PTR_1126d14a0);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c13e1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef3e0();
  func_0x00010bff2740(puVar2,param_2,uVar8,uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106bf67ac;
  puStack_78 = &UNK_110968060;
  lStack_70 = param_1;
  uStack_68 = param_6;
  _objc_retain(param_6);
  func_0x00010c064c00(uVar8,param_2,puVar2,&puStack_90);
  _objc_release(uVar8);
  _objc_release(uStack_68);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(param_4);
  return 0;
}



/* Entry: 106bf67ac; end: 106bf67c7;  */

void FUN_106bf67ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106bf67c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
    return;
  }
  return;
}



/* Entry: 106bf67c8; end: 106bf681b; -[SCAdInitDurableJob .cxx_destruct] */

void FUN_106bf67c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf681c; end: 106bf6a9f; -[SCAdInitializer initWithRequestInfoProvider:configAdapter:adConfigProvider:networkManager:pixelTrackingCookieManager:persistedDataAdapter:commonMetricsManager:initMetricsManager:snapTokenAdapter:adsPreferencesProvider:adsCircumstanceEngineAdapter:appInstalledInfoProvider:appStoreInfoProvider:onDeviceFeatureGatingProvider:javascriptFetcher:isPrimary:] */

undefined8
FUN_106bf681c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain();
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3bf2cc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0x10);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  func_0x00010c03f000(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_18);
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
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106bf6aa0; end: 106bf6e57; -[SCAdInitializer initWithRequestInfoProvider:configAdapter:adConfigProvider:networkManager:pixelTrackingCookieManager:persistedDataAdapter:commonMetricsManager:initMetricsManager:snapTokenAdapter:adsPreferencesProvider:adsCircumstanceEngineAdapter:appInstalledInfoProvider:appStoreInfoProvider:onDeviceFeatureGatingProvider:isPrimary:performer:timeProvider:javascriptFetcher:] */

undefined8 *
FUN_106bf6aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f5ac0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xc,param_8);
    _objc_storeWeak(puVar1 + 0xe,param_9);
    _objc_storeWeak(puVar1 + 0xf,param_10);
    _objc_storeWeak(puVar1 + 0xd,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x10,param_11);
    _objc_storeWeak(puVar1 + 0x11,param_12);
    _objc_storeWeak(puVar1 + 0x12,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[2];
    puVar1[2] = param_15;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 6) = param_17;
    _objc_retain(param_19);
    uVar2 = puVar1[3];
    puVar1[3] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[4];
    puVar1[4] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[5];
    puVar1[5] = param_21;
    _objc_release(uVar2);
    if (*(char *)(puVar1 + 6) == '\x01') {
      _objc_storeWeak(puVar1 + 0x13,param_16);
      puVar3 = PTR_PTR_1126b8c98;
      func_0x00010bf806c0();
      if (((ulong)puVar3 & 1) == 0) {
        uVar2 = param_8;
        func_0x00010bfc20e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puVar1[7];
        puVar1[7] = uVar2;
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
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



/* Entry: 106bf6e58; end: 106bf6f57; -[SCAdInitializer initializeWithMetadata:completion:] */

void FUN_106bf6e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bf6f58; end: 106bf6f8b;  */

void FUN_106bf6f58(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3ad80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bf6f8c; end: 106bf706f; -[SCAdInitializer reInitialize:] */

void FUN_106bf6f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106bf7070; end: 106bf70a3;  */

void FUN_106bf7070(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be85f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bf70a4; end: 106bf714b; -[SCAdInitializer tearDown] */

void FUN_106bf70a4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106bf714c; end: 106bf7177;  */

void FUN_106bf714c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde11e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bf7178; end: 106bf71a7; -[SCAdInitializer _clearUp] */

void FUN_106bf7178(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bf71a8; end: 106bf7487; -[SCAdInitializer _initWithMetadata:completion:] */

void FUN_106bf71a8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 0xa0);
  func_0x00010bf51e00();
  dVar8 = param_1;
  if (lVar1 == 0) {
    lVar2 = param_2 + 0x60;
    _objc_loadWeakRetained();
    lVar1 = lVar2;
    func_0x00010bfc6d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    dVar8 = param_1;
    if (lVar1 != 0) goto LAB_106bf7220;
LAB_106bf725c:
    lVar2 = *(long *)(param_2 + 0x38);
    func_0x00010c1192a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf51e00();
    _objc_release(lVar2);
    lVar2 = param_2 + 0x68;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010c2355c0();
    _objc_release(lVar2);
    lVar2 = lVar3;
    if ((int)lVar4 != 0) {
      lVar4 = param_2 + 0x68;
      _objc_loadWeakRetained();
      lVar2 = lVar4;
      func_0x00010bf6a3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar4);
    }
    puVar5 = *(undefined **)(param_2 + 0x38);
    func_0x00010bf51e00(puVar5);
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      func_0x00010bf604e0(PTR_PTR_1126afec0);
      lVar3 = param_2 + 0x68;
      dVar8 = param_1;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010bfc2100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar3);
      puVar5 = PTR_PTR_1126b8cd0;
      _objc_alloc(PTR_PTR_1126b8cd0);
      lVar3 = lVar4;
      func_0x00010c1194a0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c1192a0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22f000(lVar4);
      func_0x00010c03b8e0(puVar5);
      _objc_release(lVar6);
      _objc_release(lVar3);
      lVar3 = param_2 + 0x78;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf604e0(PTR_PTR_1126afec0);
      func_0x00010c0a89a0(dVar8 - param_1,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar4);
    }
    func_0x00010be10620(param_2);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88da0();
    _objc_release(uVar7);
    _objc_release(puVar5);
    param_2 = lVar2;
  }
  else {
LAB_106bf7220:
    puVar5 = PTR_PTR_1126b8c98;
    func_0x00010bf25dc0();
    param_1 = dVar8;
    if (((ulong)puVar5 & 1) != 0) goto LAB_106bf725c;
    func_0x00010bf885a0(lVar1);
    param_1 = dVar8;
    func_0x00010bf604e0(PTR_PTR_1126afec0);
    dVar8 = param_1 - dVar8;
    func_0x00010bfef3e0(param_4);
    if (param_1 <= dVar8) goto LAB_106bf725c;
    if (param_5 == 0) goto LAB_106bf7410;
    puVar5 = PTR_PTR_1126b9200;
    func_0x00010c261840(PTR_PTR_1126b9200);
    func_0x00010bef55e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,1,puVar5,param_2);
  }
  _objc_release(param_2);
LAB_106bf7410:
  _objc_release(lVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bf7488; end: 106bf7623; -[SCAdInitializer _fetchCofTokenWithMetadata:adSourceConfig:initURL:completion:] */

void FUN_106bf7488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x90;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be140a0(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x90;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bf46540(param_1);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bf7624; end: 106bf767b;  */

void FUN_106bf7624(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be140a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bf767c; end: 106bf7933; -[SCAdInitializer _fetchSnapTokenWithMetadata:adSourceConfig:initURL:cofToken:completion:] */

void FUN_106bf767c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_7;
  _objc_retain();
  _dispatch_group_create();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106bf7934;
  uStack_88 = 0x106bf7944;
  uStack_80 = 0;
  puStack_a0 = &uStack_a8;
  _dispatch_group_enter();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106bf794c;
  puStack_c0 = &UNK_11084a578;
  uStack_b8 = uVar1;
  puStack_b0 = &uStack_a8;
  func_0x00010bfcab40(*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_e0,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_e8,auStack_e0);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_7);
  func_0x00010bfa4960(param_1);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_e0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bf7934; end: 106bf794b;  */

void FUN_106bf7934(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106bf794c; end: 106bf79a7;  */

void FUN_106bf794c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bf79a8; end: 106bf7ad7;  */

void FUN_106bf79a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106bf7ad8;
  puStack_88 = &UNK_110968090;
  _objc_copyWeak(auStack_48,param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar3;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = uVar4;
  uStack_60 = param_2;
  _objc_retain(uVar3);
  uStack_58 = uVar3;
  uStack_50 = uVar5;
  _objc_retain(param_2);
  func_0x000100bc0718(uVar1,uVar2,&puStack_a0);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106bf7ad8; end: 106bf7ba3;  */

void FUN_106bf7ad8(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be3ada0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bf7ba4; end: 106bf7bc3;  */

void FUN_106bf7ba4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106bf7bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,0,0);
    return;
  }
  return;
}



/* Entry: 106bf7bc4; end: 106bf8173; -[SCAdInitializer _initWithMetadata:defaultAdSourceConfig:initEndpoint:cofToken:snapToken:storefrontCountryCode:completion:] */

void FUN_106bf7bc4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,long param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c08fa60();
  lVar2 = param_6;
  if (lVar1 == 0) {
    lVar2 = param_5;
    func_0x00010c1192a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    func_0x00010c1648e0(param_2);
  }
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_2 = param_2 + 0x70;
    _objc_loadWeakRetained(param_2);
    func_0x00010c0ae200();
    _objc_release(param_2);
    if (param_10 != 0) {
      (**(code **)(param_10 + 0x10))(param_10,0,0,0);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c292860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfcbcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar1 = param_2 + 0x68;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010848d1d0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2 + 0x60;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c163880();
    _objc_release(lVar1);
    lVar10 = *(long *)(param_2 + 0x40);
    uVar3 = param_4;
    func_0x00010befe100(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c149400(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2 + 0x70;
    _objc_loadWeakRetained(lVar1);
    lVar7 = param_2 + 0x68;
    _objc_loadWeakRetained();
    func_0x00010848d61c(lVar10,uVar3,uVar4,0,uVar6,1,lVar1,param_7,0,param_9,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_release(uVar6);
    _objc_release(uVar3);
    lVar1 = param_2 + 0x70;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0b1e00();
    _objc_release(lVar1);
    lVar1 = lVar10;
    func_0x00010c149400();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar7 == 0) {
      lVar1 = param_2 + 0x78;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0a89c0();
      _objc_release(lVar1);
    }
    lVar1 = param_2 + 0x70;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0a0dc0();
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126b8df0;
    _objc_alloc(PTR_PTR_1126b8df0);
    uVar9 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c291220(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c291200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2 + 0x68;
    _objc_loadWeakRetained(lVar1);
    uVar6 = param_8;
    func_0x00010848d588(param_8,lVar1,*(undefined1 *)(param_2 + 0x30),lVar5);
    lVar7 = lVar10;
    func_0x00010bf63640(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05a360(puVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_initWeak(auStack_80,param_2);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_106bf8174;
    puStack_b0 = &UNK_1108efce8;
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(lVar2);
    lStack_a8 = lVar2;
    uStack_88 = param_1;
    _objc_retain(lVar10);
    lStack_a0 = lVar10;
    _objc_retain(param_10);
    lStack_98 = param_10;
    _objc_copyWeak(auStack_d8,auStack_80);
    _objc_retain(lVar2);
    uStack_d0 = param_1;
    _objc_retain(lVar10);
    _objc_retain(param_10);
    func_0x00010c25ede0(uVar3);
    param_2 = param_2 + 0x70;
    _objc_loadWeakRetained(param_2);
    func_0x00010c1368e0();
    _objc_release(param_2);
    _objc_release(param_10);
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_d8);
    _objc_release(lStack_98);
    _objc_release(lStack_a0);
    _objc_release(lStack_a8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar8);
    _objc_release(lVar10);
    _objc_release(lVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106bf8174; end: 106bf82c3;  */

void FUN_106bf8174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c252ee0(param_2);
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c15ebe0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be2cca0(uVar2,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bf82c4; end: 106bf84f3; -[SCAdInitializer _handleNetworkResponse:error:responseStatusCode:requestEndpoint:requestStartTimestamp:requestSize:completion:] */

/* WARNING: Removing unreachable block (ram,0x000106bf8430) */
/* WARNING: Removing unreachable block (ram,0x000106bf845c) */

void FUN_106bf82c4(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  if (param_5 == 0) {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
    func_0x00010beda380(param_2);
  }
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x20));
  lVar1 = param_2 + 0x70;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c08fa60();
  func_0x00010c1364a0(dVar4 - param_1,lVar1);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x78;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfef360(dVar4 - param_1);
  _objc_release(lVar1);
  if ((param_4 == 0) || (param_5 != 0)) {
    if (param_9 != 0) {
      (**(code **)(param_9 + 0x10))(param_9,0,param_6,0);
    }
  }
  else {
    puVar2 = PTR_PTR_1126d14a8;
    func_0x00010c0f40e0(PTR_PTR_1126d14a8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2 + 0x78;
    _objc_loadWeakRetained(lVar1);
    puVar3 = puVar2;
    func_0x00010bf6e340(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a89e0(lVar1);
    _objc_release(puVar3);
    _objc_release(lVar1);
    func_0x00010be2acc0(param_2);
    _objc_release(puVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106bf84f4; end: 106bf867f; -[SCAdInitializer _reInitialize:] */

void FUN_106bf84f4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  if (*(long *)(param_2 + 0xa8) != 0) {
    dVar8 = param_1;
    func_0x00010bf885a0();
    lVar1 = param_2 + 0x68;
    dVar9 = dVar8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2be7c0();
    _objc_release(lVar1);
    if (param_1 < dVar8 + dVar9) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,0,0,0);
      }
      goto LAB_106bf8660;
    }
  }
  puVar2 = PTR_PTR_1126d14a0;
  _objc_alloc(PTR_PTR_1126d14a0);
  lVar1 = param_2 + 0x88;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c13e1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2 + 0x60;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfc9be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2740(0,puVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  func_0x00010be3ad80(param_2);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined **)(param_2 + 0xa8) = puVar6;
  _objc_release(uVar7);
  param_2 = param_2 + 0x78;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0adf80();
  _objc_release(param_2);
  _objc_release(puVar2);
LAB_106bf8660:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bf8680; end: 106bf877f; -[SCAdInitializer _handleInitResponse:completion:] */

void FUN_106bf8680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bf8780; end: 106bf8817;  */

void FUN_106bf8780(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be98a60();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e3780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2d320(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bf8818; end: 106bf88bf; -[SCAdInitializer _handleOnDeviceResponse:onDeviceProfileURL:] */

void FUN_106bf8818(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (*(char *)(param_1 + 0x30) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1f480(uVar1,param_2,&PTR____CFConstantStringClassReference_110e788f8);
    if (((int)uVar1 != 0) && (lVar2 = param_3, func_0x00010bf8fa00(), (int)lVar2 != 0)) {
      lVar2 = param_1 + 0x98;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c071540();
      _objc_release(lVar2);
      if ((int)lVar3 != 0) {
        func_0x00010bfa4e60(*(undefined8 *)(param_1 + 0x58));
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bf88c0; end: 106bf8c2f; -[SCAdInitializer _saveAndPersistAdSourceConfig:completion:] */

void FUN_106bf88c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010848db8c(param_3);
  lVar2 = param_3;
  func_0x00010848dac0(param_3);
  lVar3 = param_1;
  func_0x00010bef55e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf51e00();
  lVar5 = lVar4;
  func_0x000108488240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c1648e0(param_1);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar3 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1648e0();
    _objc_release(lVar3);
    lVar3 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1645c0();
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf93c80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      lVar4 = param_1 + 0x78;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c0a8a00();
    }
    else {
      lVar4 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c195bc0();
    }
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c0fcdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c08fa60();
    if (lVar6 == 0) {
      lVar6 = param_1 + 0x78;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0a8a00();
    }
    else {
      lVar6 = lVar4;
      func_0x00010bf15dc0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1 + 0x60;
      _objc_loadWeakRetained(lVar7);
      func_0x00010c21ee40();
      _objc_release(lVar7);
      func_0x00010c2887a0(*(undefined8 *)(param_1 + 0x50));
    }
    _objc_release(lVar6);
    lVar6 = lVar5;
    func_0x00010c1192a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      lVar6 = param_1 + 0x78;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c0a8a00();
      _objc_release(lVar6);
    }
    lVar6 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar6);
    lVar7 = param_3;
    func_0x00010befe280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164500(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar6);
    lVar7 = param_3;
    func_0x00010c15f2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164520(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar6);
    lVar7 = param_3;
    func_0x00010c15f2c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164540(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar6 = param_1 + 0x60;
    _objc_loadWeakRetained(lVar6);
    lVar7 = param_3;
    func_0x00010befe2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164560(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010c233060(param_3);
  func_0x00010c200fa0(param_1);
  _objc_release(param_1);
  if (param_4 != 0) {
    puVar8 = PTR_PTR_1126b9200;
    func_0x00010c261840(PTR_PTR_1126b9200);
    (**(code **)(param_4 + 0x10))(param_4,1,puVar8,lVar5);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bf8c30; end: 106bf8ce7; -[SCAdInitializer _updateLastInitRequestTimestamp:] */

void FUN_106bf8c30(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106bf8ce8; end: 106bf8d1b;  */

void FUN_106bf8ce8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beda3a0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bf8d1c; end: 106bf8da3; -[SCAdInitializer _updateLastInitRequestTimestampHelper:] */

void FUN_106bf8d1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined **)(param_2 + 0xa0) = puVar1;
  _objc_release(uVar2);
  param_2 = param_2 + 0x60;
  _objc_loadWeakRetained(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7e80(param_2,param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bf8da4; end: 106bf8dab; -[SCAdInitializer adSourceConfig] */

undefined8 FUN_106bf8da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106bf8dac; end: 106bf8ddb; -[SCAdInitializer setAdSourceConfig:] */

void FUN_106bf8dac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106bf8ddc; end: 106bf8de3; -[SCAdInitializer requestInfoProvider] */

undefined8 FUN_106bf8ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106bf8de4; end: 106bf8deb; -[SCAdInitializer networkManager] */

undefined8 FUN_106bf8de4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106bf8dec; end: 106bf8df3; -[SCAdInitializer pixelTrackingCookieManager] */

undefined8 FUN_106bf8dec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106bf8df4; end: 106bf8dfb; -[SCAdInitializer appInstalledInfoProvider] */

undefined8 FUN_106bf8df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106bf8dfc; end: 106bf8e13; -[SCAdInitializer persistedDataAdapter] */

void FUN_106bf8dfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf8e14; end: 106bf8e2b; -[SCAdInitializer configAdapter] */

void FUN_106bf8e14(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf8e2c; end: 106bf8e43; -[SCAdInitializer commonMetricsManager] */

void FUN_106bf8e2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf8e44; end: 106bf8e77; -[SCAdInitializer initMetricsManager] */

long FUN_106bf8e44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106bf8e78; end: 106bf8e8f; -[SCAdInitializer snapTokenAdapter] */

void FUN_106bf8e78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf8e90; end: 106bf8ea7; -[SCAdInitializer adsPreferencesProvider] */

void FUN_106bf8e90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf8ea8; end: 106bf8ebf; -[SCAdInitializer adsCircumstanceEngineAdapter] */

void FUN_106bf8ea8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf8ec0; end: 106bf8ed7; -[SCAdInitializer onDeviceFeatureGatingProvider] */

void FUN_106bf8ec0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bf8ed8; end: 106bf8edf; -[SCAdInitializer lastInitUpdateTimestampInSec] */

undefined8 FUN_106bf8ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106bf8ee0; end: 106bf8f0f; -[SCAdInitializer setLastInitUpdateTimestampInSec:] */

void FUN_106bf8ee0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106bf8f10; end: 106bf8f17; -[SCAdInitializer lastReinitTimestampInSec] */

undefined8 FUN_106bf8f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106bf8f18; end: 106bf8f47; -[SCAdInitializer setLastReinitTimestampInSec:] */

void FUN_106bf8f18(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106bf8f48; end: 106bf8f4f; -[SCAdInitializer isPrimary] */

undefined1 FUN_106bf8f48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 106bf8f50; end: 106bf9037; -[SCAdInitializer .cxx_destruct] */

void FUN_106bf8f50(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf9038; end: 106bf920f; -[SCAppInstalledInfoProvider initWithAdConfigProvider:metricsManager:commonMetricsManager:persistedDataAdapter:canOpenUrlProvider:requestInfoProvider:] */

undefined1 *
FUN_106bf9038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f5ac8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar5);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bf9210; end: 106bf9463; -[SCAppInstalledInfoProvider fetchAppInstalledInfoAndLogBlizzard] */

void FUN_106bf9210(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  dVar9 = param_1;
  if (*(long *)(param_2 + 0x48) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010bfc6c40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = uVar2;
    _objc_release(uVar8);
    if (*(long *)(param_2 + 0x48) == 0) goto LAB_106bf92c0;
  }
  func_0x00010bf885a0();
  puVar1 = PTR_PTR_1126afec0;
  lVar3 = *(long *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e3700();
  dVar10 = (double)lVar4;
  func_0x00010c0ce8e0(puVar1);
  _objc_release(lVar3);
  if (param_1 - dVar9 < dVar10) {
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  _objc_release(uVar2);
LAB_106bf92c0:
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf125e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bfc9be0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf6fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bfe5f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c292860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bfcbcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_initWeak(auStack_58,param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106bf9464;
  puStack_88 = &UNK_11085ae98;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar2);
  uStack_80 = uVar2;
  _objc_retain(uVar5);
  uStack_78 = uVar5;
  _objc_retain(uVar7);
  uStack_70 = uVar7;
  _objc_retain(uVar8);
  uStack_68 = uVar8;
  func_0x000100162d98("APPSTORE",&puStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar2);
  return;
}



/* Entry: 106bf9464; end: 106bf94cf;  */

void FUN_106bf9464(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bfc2500(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be50300(lVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bf94d0; end: 106bf96db; -[SCAppInstalledInfoProvider getAppInstallInfoWithAppURLSchemaList:] */

void FUN_106bf94d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 unaff_x24;
  long lVar12;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  lStack_138 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e3720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = lVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_130;
  puVar8 = auStack_f0;
  uVar9 = 0x10;
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        lVar5 = param_3;
        func_0x00010bf4b900();
        if ((int)lVar5 != 0) {
          uVar9 = *(undefined8 *)(lStack_138 + 0x10);
          func_0x00010c269d40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2cee0();
          _objc_release(uVar9);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar2;
          func_0x00010c0e00e0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar3);
          _objc_release(lVar5);
          _objc_release(puVar6);
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      puVar7 = &uStack_130;
      puVar8 = auStack_f0;
      uVar9 = 0x10;
      lVar4 = lVar1;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  puVar6 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106bf96dc;
  uStack_180 = unaff_x24;
  lStack_178 = lVar1;
  puStack_170 = puVar3;
  lStack_168 = lVar2;
  puStack_160 = puVar6;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  _objc_retain(param_6);
  _objc_initWeak(auStack_188,lVar4);
  uVar11 = *(undefined8 *)(lVar4 + 8);
  _objc_copyWeak(auStack_190,auStack_188);
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar11);
  _objc_release(param_6);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(param_6);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}


