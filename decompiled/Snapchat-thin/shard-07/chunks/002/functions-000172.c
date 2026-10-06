/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105325270; end: 1053252d7; +[SCCOREStorySubtype descriptor] */

void FUN_105325270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb4a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2aed0,
                        &PTR____CFConstantStringClassReference_110dd2138,&PTR_s_feed_core_1130cf388,
                        0,0,4,0x1c);
    puRam00000001136bb4a8 = puVar1;
  }
  return;
}



/* Entry: 1053252d8; end: 1053253b7; -[SCApplicationInstallLoggerImpl initWithUserNotTrackedLogger:grapheneRegistry:] */

undefined1 *
FUN_1053252d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e78c0;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010bfef240();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053253b8; end: 10532546f; -[SCApplicationInstallLoggerImpl logApplicationInstallWithAdServicesToken:appleSearchDictionaryString:] */

void FUN_1053253b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105325470;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_4;
  lStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105325470; end: 1053254c7;  */

void FUN_105325470(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1645a0();
  func_0x00010c1697e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010be50420(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053254c8; end: 105325563; -[SCApplicationInstallLoggerImpl _logApplicationInstall:] */

void FUN_1053254c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  lVar1 = lRam00000001136bb4b0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105325564;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  uVar2 = param_3;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136bb4b0,&puStack_50);
    uVar2 = uStack_30;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105325564; end: 10532579b;  */

void FUN_105325564(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b7798;
  _objc_opt_new(PTR_PTR_1126b7798);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = PTR_PTR_1126af390;
  func_0x00010bfbb8a0(PTR_PTR_1126af390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a95a0(uVar7,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c1ada20(puVar1,param_3,*(undefined8 *)(param_2 + 0x20));
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc34e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c0f5800(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf0e880(puVar2,param_3,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010c0dff20(puVar5,param_3,*(undefined8 *)PTR__NSFileCreationDate_110345410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  puVar3 = puVar2;
  if (param_1 == 0.0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010c26f320(puVar3);
  func_0x00010c1ada60(puVar1,param_3,(long)(param_1 * 1000.0));
  uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b77a0;
  func_0x00010c0677c0(PTR_PTR_1126b77a0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf07980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10532579c; end: 1053257d7; -[SCApplicationInstallLoggerImpl .cxx_destruct] */

void FUN_10532579c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053257d8; end: 1053258bb; -[SCApplicationInstallLoggerServiceProvider provide] */

void FUN_1053257d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b77a8;
  _objc_alloc(PTR_PTR_1126b77a8);
  func_0x00010bff3a20();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053258bc; end: 1053258fb;  */

void FUN_1053258bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdead20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053258fc; end: 1053259b7; -[SCApplicationInstallLoggerServiceProvider _createApplicationInstallLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053258fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b77b0;
  _objc_alloc(PTR_PTR_1126b77b0);
  lVar2 = param_1 + _DAT_112721840;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112721844;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c8a0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053259b8; end: 1053259fb; -[SCApplicationInstallLoggerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053259b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721840);
  _objc_destroyWeak(param_1 + _DAT_112721844);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721848);
  return;
}



/* Entry: 1053259fc; end: 105325a27; +[SCGrapheneApplicationInstallMetric install] */

void FUN_1053259fc(void)

{
  _objc_alloc(PTR_PTR_1126b77a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105325a28; end: 105325ac7; -[SCGrapheneApplicationInstallMetric description] */

void FUN_105325a28(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2198;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd2198,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e78c8;
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



/* Entry: 105325ac8; end: 105325c5f; -[SCGrapheneRegistry applicationInstallGraphene] */

void FUN_105325ac8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105325b50;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb4c0 != -1) {
    func_0x00010002a2fc(0x1136bb4c0,&puStack_48);
  }
  uVar1 = uRam00000001136bb4b8;
  _objc_retain(uRam00000001136bb4b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105325c60; end: 105325ca7; -[SCRetryJobProviderServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105325c60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721850,0);
  _objc_destroyWeak(param_1 + _DAT_11272184c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721854);
  return;
}



/* Entry: 105325ca8; end: 105325d4b; -[SCRetryFlowCanceling initWithRetryFlowIdentifier:retryJobProvider:cancelWhenDealloc:] */

undefined1 *
FUN_105325ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e78d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    *(undefined1 *)((long)puVar1 + 0x10) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105325d4c; end: 105325d9f; -[SCRetryFlowCanceling dealloc] */

void FUN_105325d4c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010bf2dba0(param_1);
  }
  puStack_28 = PTR_PTR_1126e78d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105325da0; end: 105325dd3; -[SCRetryFlowCanceling cancel] */

void FUN_105325da0(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2ef60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105325dd4; end: 105325ddb; -[SCRetryFlowCanceling retryFlowIdentifier] */

undefined8 FUN_105325dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105325ddc; end: 105325e07; -[SCRetryFlowCanceling .cxx_destruct] */

void FUN_105325ddc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105325e08; end: 105325e77;  */

void FUN_105325e08(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  _objc_retain(param_2);
  func_0x00010c1b6780(param_1);
  func_0x00010c1b6840(param_1);
  func_0x00010c1b67a0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105325e78; end: 105325f4f; -[SCRetryJobProviderImpl initWithSystemJobScheduler:] */

undefined8 * FUN_105325e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_3);
  puStack_30 = PTR_PTR_1126e78d8;
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_28;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    pcVar3 = "retryjob.sync.queue";
    _dispatch_queue_create("retryjob.sync.queue",0);
    uVar5 = puVar1[2];
    puVar1[2] = pcVar3;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar5);
  }
  _objc_destroyWeak(auStack_28);
  return puVar1;
}



/* Entry: 105325f50; end: 1053260cf; -[SCRetryJobProviderImpl processJobWithJobConfig:input:context:onComplete:] */

void FUN_105325f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1053260d0;
  uStack_50 = 0x1053260e0;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1053260e8;
  puStack_90 = &UNK_11084fa08;
  lStack_88 = param_1;
  puStack_68 = puStack_78;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010006eaa4(uVar2,&puStack_a8);
  lVar1 = puStack_68[5];
  if (lVar1 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,2,0);
    lVar1 = 0;
  }
  else {
    func_0x00010c114dc0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uStack_80);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053260d0; end: 1053260e7;  */

void FUN_1053260d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053260e8; end: 105326153;  */

void FUN_1053260e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c085840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105326154; end: 10532636f; -[SCRetryJobProviderImpl submitJob:jobProcessor:jobConfig:autoCancel:retryJobType:] */

void FUN_105326154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  uVar5 = param_3;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b77c8;
  _objc_alloc(PTR_PTR_1126b77c8);
  func_0x00010c03ff60();
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  FUN_105325e08(param_5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar5 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105326370;
  puStack_80 = &UNK_110849810;
  _objc_retain(puVar2);
  puStack_78 = puVar2;
  func_0x00010c25f200(lVar4);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105326374;
  puStack_b8 = &UNK_110848ba8;
  lStack_b0 = param_1;
  uStack_a8 = param_4;
  puStack_a0 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(param_4);
  func_0x00010006eaa4(uVar5,&puStack_d0);
  _objc_release(puStack_a0);
  _objc_release(uStack_a8);
  _objc_release(puStack_78);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105326370; end: 105326387;  */

void FUN_105326370(void)

{
  return;
}



/* Entry: 105326388; end: 1053264cb; -[SCRetryJobProviderImpl deleteJobWithJobConfig:jobData:jobDeletionReason:] */

void FUN_105326388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == 1) {
    puStack_68 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1053260d0;
    uStack_40 = 0x1053260e0;
    uStack_38 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1053264cc;
    puStack_80 = &UNK_11084fa08;
    lStack_78 = param_1;
    puStack_58 = puStack_68;
    _objc_retain(param_3);
    uStack_70 = param_3;
    func_0x00010006eaa4(uVar2,&puStack_98);
    uVar1 = puStack_58[5];
    if ((uVar1 != 0) &&
       (_objc_opt_respondsToSelector(uVar1,PTR_s_deleteJobWithJobConfig_jobData_j_1125b8a08),
       (uVar1 & 1) != 0)) {
      func_0x00010bf6c180(puStack_58[5]);
    }
    _objc_release(uStack_70);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053264cc; end: 105326537;  */

void FUN_1053264cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c085840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105326538; end: 1053265ff; -[SCRetryJobProviderImpl cancelRetryJob:] */

void FUN_105326538(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf2e5c0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105326600;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010006eaa4(uVar2,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105326600; end: 10532660b;  */

void FUN_105326600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10532660c; end: 105326613; -[SCRetryJobProviderImpl retryJobProcessors] */

undefined8 FUN_10532660c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105326614; end: 105326643; -[SCRetryJobProviderImpl setRetryJobProcessors:] */

void FUN_105326614(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105326644; end: 10532667b; -[SCRetryJobProviderImpl .cxx_destruct] */

void FUN_105326644(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10532667c; end: 1053266e3; +[ThrottlingRules descriptor] */

void FUN_10532667c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb4c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2b150,
                        &PTR____CFConstantStringClassReference_110dd2258,
                        &PTR_s_snapchat_appinsights_errorcode_1130cf4d0,
                        &PTR_s_throttlingRulesArray_1130cf4e8,3,0x18,0x1c);
    puRam00000001136bb4c8 = puVar1;
  }
  return;
}



/* Entry: 1053266e4; end: 10532674b; +[ThrottlingRule descriptor] */

void FUN_1053266e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb4d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2b1a0,
                        &PTR____CFConstantStringClassReference_110dd2278,
                        &PTR_s_snapchat_appinsights_errorcode_1130cf4d0,&PTR_s_errorCode_1130cf548,6
                        ,0x20,0x1c);
    puRam00000001136bb4d0 = puVar1;
  }
  return;
}



/* Entry: 10532674c; end: 1053267b3; +[SCCofCofGrapheneContext descriptor] */

void FUN_10532674c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb4d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a2b240,
                        &PTR____CFConstantStringClassReference_110dd2298,
                        &PTR_s_snapchat_cdp_cof_1130cf608,&PTR_s_cofGradualRolloutsArray_1130cf620,1
                        ,0x10,0x1c);
    puRam00000001136bb4d8 = puVar1;
  }
  return;
}



/* Entry: 1053267b4; end: 1053267bb; -[SCConfigLensCoreVersionProvider lensCoreVersion] */

undefined8 FUN_1053267b4(void)

{
  return 0x17d;
}



/* Entry: 1053267bc; end: 1053267c3; -[SCConfigMetricGraphene2 init] */

void FUN_1053267bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c018090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithGraphene__1125e3a00,0);
  return;
}



/* Entry: 1053267c4; end: 10532685b; -[SCConfigMetricGraphene2 cofRecoveryStage:recoveryType:durationMs:] */

void FUN_1053267c4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_10532cd20(*(undefined8 *)(param_2 + 0x18),param_5,param_4,1);
  FUN_10532cf50(*(undefined8 *)(param_2 + 0x18),param_5,param_4,(long)param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10532685c; end: 1053268db; -[SCConfigMetricGraphene2 cofRecoveryWait:recoveryType:durationMs:] */

void FUN_10532685c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  FUN_10532cb38(*(undefined8 *)(param_2 + 0x18),param_5,param_4,1);
  FUN_10532c950(*(undefined8 *)(param_2 + 0x18),param_5,param_4,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1053268dc; end: 1053268eb; -[SCConfigMetricGraphene2 cofHeuristicRecoveryStatus:errorName:] */

/* WARNING: Removing unreachable block (ram,0x00010532d954) */

void FUN_1053268dc(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_548;
  long *plStack_540;
  long *plStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 auStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  long alStack_480 [3];
  undefined1 *puStack_468;
  long alStack_460 [2];
  char cStack_449;
  long lStack_448;
  long *plStack_440;
  long *plStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  long alStack_400 [3];
  undefined1 *puStack_3e8;
  long alStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  long alStack_380 [3];
  undefined1 *puStack_368;
  long alStack_360 [2];
  char cStack_349;
  long lStack_348;
  long *plStack_340;
  long *plStack_338;
  long *plStack_330;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  long alStack_300 [3];
  undefined1 *puStack_2e8;
  long alStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  long alStack_280 [3];
  undefined1 *puStack_268;
  long alStack_260 [3];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  long alStack_1b8 [3];
  long *plStack_1a0;
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  long *plStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long alStack_120 [3];
  undefined1 *puStack_108;
  long alStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long alStack_98 [3];
  long *plStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x18);
  plVar8 = (long *)0x1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_4;
  plVar12 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  plVar14 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar14 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    alStack_98[2] = 0;
    func_0x00010007e1e8(alStack_98,auStack_78,&lStack_48,2);
    plVar10 = (long *)&UNK_11087acc8;
    unaff_x23 = (char *)alStack_98;
    plVar12 = alStack_98;
    plVar8 = (long *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plStack_80 = (long *)unaff_x23;
    func_0x00010007e5dc(&plStack_80);
    lVar1 = 0;
    plVar14 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_3);
  plVar9 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  plVar5 = plVar9;
  __Unwind_Resume();
  plVar3 = alStack_120;
  pcStack_a8 = FUN_10532d3b0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar10;
  plVar13 = plVar12;
  puStack_e0 = unaff_x24;
  plStack_d8 = (long *)unaff_x23;
  puStack_d0 = plVar14;
  plStack_c8 = plVar9;
  plStack_c0 = param_3;
  plStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar10);
  plVar9 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar9 = (long *)plVar5[1];
    _objc_retain(plVar10);
    if (plVar10 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar10;
      _objc_retainAutorelease(plVar10);
      func_0x00010bdc3520();
    }
    _objc_release(plVar10);
    unaff_x23 = (char *)alStack_100;
    func_0x00010002b838(alStack_100,pcVar2);
    alStack_120[0] = 0;
    alStack_120[1] = 0;
    alStack_120[2] = 0;
    func_0x00010007e1e8(alStack_120,alStack_100,&lStack_e8,1);
    plVar11 = (long *)&UNK_11087ad18;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_108 = (undefined1 *)alStack_120;
    func_0x00010007e5dc(&puStack_108);
    plVar13 = plVar3;
    plVar8 = plVar12;
    plVar14 = alStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(alStack_100[0]);
      plVar13 = plVar3;
      plVar8 = plVar12;
      plVar14 = alStack_120;
    }
  }
  plVar12 = plVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar10);
  _objc_release(plVar10);
  plVar3 = plVar12;
  __Unwind_Resume();
  pcStack_128 = FUN_10532d524;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar11;
  pcVar2 = (char *)plVar13;
  plVar6 = plVar8;
  puStack_160 = unaff_x24;
  plStack_158 = (long *)unaff_x23;
  puStack_150 = plVar14;
  plStack_148 = plVar9;
  plStack_140 = plVar12;
  plStack_138 = plVar10;
  ppuStack_130 = &puStack_b0;
  _objc_retain(plVar11);
  if (plVar3 != (long *)0x0) {
    plVar10 = (long *)plVar3[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar11;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_198,unaff_x23);
    pcVar2 = "true";
    if ((int)plVar13 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_180,pcVar2);
    alStack_1b8[0] = 0;
    alStack_1b8[1] = 0;
    alStack_1b8[2] = 0;
    func_0x00010007e1e8(alStack_1b8,auStack_198,&lStack_168,2);
    plVar5 = (long *)&UNK_11087ad68;
    pcVar2 = (char *)alStack_1b8;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    plStack_1a0 = alStack_1b8;
    func_0x00010007e5dc(&plStack_1a0);
    lVar1 = 0;
    plVar6 = plVar8;
    do {
      if ((&cStack_169)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar10 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  plVar9 = alStack_280;
  pcStack_1c8 = FUN_10532d70c;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  plVar14 = (long *)pcVar2;
  plVar8 = plVar6;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(plVar5);
  _objc_retain(plVar6);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)plVar10[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    func_0x00010002b838(alStack_260,pcVar4);
    pcVar4 = "true";
    if ((int)pcVar2 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(auStack_248,pcVar4);
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar6);
      pcVar2 = (char *)plVar6;
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    func_0x00010002b838(auStack_230,pcVar2);
    alStack_280[0] = 0;
    alStack_280[1] = 0;
    alStack_280[2] = 0;
    func_0x00010007e1e8(alStack_280,alStack_260,&lStack_218,3);
    plVar12 = (long *)&UNK_11087adb8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11087adb8,alStack_280,param_5);
    puStack_268 = (undefined1 *)alStack_280;
    func_0x00010007e5dc(&puStack_268);
    lVar1 = 0;
    plVar14 = plVar9;
    plVar8 = param_5;
    do {
      if ((&cStack_219)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x23 = (char *)alStack_280;
    } while (lVar1 != -0x48);
  }
  _objc_release(plVar6);
  plVar10 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while ((long *)unaff_x23 != alStack_260);
  _objc_release(plVar6);
  _objc_release(plVar5);
  plVar11 = plVar10;
  __Unwind_Resume();
  plVar3 = alStack_300;
  pcStack_288 = FUN_10532d984;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar12;
  plVar13 = plVar14;
  plStack_2c0 = (long *)pcVar2;
  plStack_2b8 = (long *)unaff_x23;
  plStack_2b0 = alStack_260;
  plStack_2a8 = plVar10;
  plStack_2a0 = plVar6;
  plStack_298 = plVar5;
  pppuStack_290 = &pppuStack_1d0;
  _objc_retain(plVar12);
  plVar10 = alStack_260;
  if (plVar11 != (long *)0x0) {
    plVar5 = (long *)plVar11[1];
    plVar9 = (long *)&UNK_11087b298;
    (**(code **)(*plVar5 + 0x28))();
    if ((int)plVar5 != 0) {
      plVar11 = (long *)plVar11[1];
      _objc_retain(plVar12);
      if (plVar12 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar12;
        _objc_retainAutorelease(plVar12);
        func_0x00010bdc3520();
      }
      _objc_release(plVar12);
      unaff_x23 = (char *)alStack_2e0;
      func_0x00010002b838(alStack_2e0,pcVar4);
      alStack_300[0] = 0;
      alStack_300[1] = 0;
      alStack_300[2] = 0;
      func_0x00010007e1e8(alStack_300,alStack_2e0,&lStack_2c8,1);
      plVar8 = (long *)((long)plVar14 * 10);
      plVar9 = (long *)&UNK_11087b298;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11087b298,alStack_300,plVar8);
      puStack_2e8 = (undefined1 *)alStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      plVar13 = plVar3;
      plVar10 = alStack_300;
      if (cStack_2c9 < '\0') {
        __ZdlPv(alStack_2e0[0]);
        plVar13 = plVar3;
        plVar10 = alStack_300;
      }
    }
  }
  plVar14 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar3 = plVar14;
  __Unwind_Resume();
  plVar7 = alStack_380;
  pcStack_308 = FUN_10532db1c;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar9;
  plVar6 = plVar13;
  plStack_340 = (long *)pcVar2;
  plStack_338 = (long *)unaff_x23;
  plStack_330 = plVar10;
  plStack_328 = plVar11;
  plStack_320 = plVar14;
  plStack_318 = plVar12;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(plVar9);
  plVar12 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar12 = (long *)plVar3[1];
    _objc_retain(plVar9);
    if (plVar9 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)plVar9;
      _objc_retainAutorelease(plVar9);
      func_0x00010bdc3520();
    }
    _objc_release(plVar9);
    unaff_x23 = (char *)alStack_360;
    func_0x00010002b838(alStack_360,pcVar4);
    alStack_380[0] = 0;
    alStack_380[1] = 0;
    alStack_380[2] = 0;
    func_0x00010007e1e8(alStack_380,alStack_360,&lStack_348,1);
    plVar5 = (long *)&UNK_11087b2e8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11087b2e8,alStack_380,plVar13);
    puStack_368 = (undefined1 *)alStack_380;
    func_0x00010007e5dc(&puStack_368);
    plVar6 = plVar7;
    plVar8 = plVar13;
    plVar10 = alStack_380;
    if (cStack_349 < '\0') {
      __ZdlPv(alStack_360[0]);
      plVar6 = plVar7;
      plVar8 = plVar13;
      plVar10 = alStack_380;
    }
  }
  plVar14 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar9);
  _objc_release(plVar9);
  plVar13 = plVar14;
  __Unwind_Resume();
  plVar7 = alStack_400;
  pcStack_388 = FUN_10532dc90;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar5;
  plVar3 = plVar6;
  plStack_3c0 = (long *)pcVar2;
  plStack_3b8 = (long *)unaff_x23;
  plStack_3b0 = plVar10;
  plStack_3a8 = plVar12;
  plStack_3a0 = plVar14;
  plStack_398 = plVar9;
  pppuStack_390 = &pppuStack_310;
  _objc_retain(plVar5);
  plVar12 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)plVar13[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)alStack_3e0;
    func_0x00010002b838(alStack_3e0,pcVar4);
    alStack_400[0] = 0;
    alStack_400[1] = 0;
    alStack_400[2] = 0;
    func_0x00010007e1e8(alStack_400,alStack_3e0,&lStack_3c8,1);
    plVar11 = (long *)&UNK_11087b338;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11087b338,alStack_400,plVar6);
    puStack_3e8 = (undefined1 *)alStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    plVar3 = plVar7;
    plVar8 = plVar6;
    plVar10 = alStack_400;
    if (cStack_3c9 < '\0') {
      __ZdlPv(alStack_3e0[0]);
      plVar3 = plVar7;
      plVar8 = plVar6;
      plVar10 = alStack_400;
    }
  }
  plVar14 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar5);
  _objc_release(plVar5);
  plVar13 = plVar14;
  __Unwind_Resume();
  plVar7 = alStack_480;
  pcStack_408 = FUN_10532de04;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar11;
  plVar6 = plVar3;
  plStack_440 = (long *)pcVar2;
  plStack_438 = (long *)unaff_x23;
  plStack_430 = plVar10;
  plStack_428 = plVar12;
  plStack_420 = plVar14;
  plStack_418 = plVar5;
  pppuStack_410 = &pppuStack_390;
  _objc_retain(plVar11);
  if (plVar13 != (long *)0x0) {
    plVar12 = (long *)plVar13[1];
    plVar9 = (long *)&UNK_11087b388;
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      plVar13 = (long *)plVar13[1];
      _objc_retain(plVar11);
      if (plVar11 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar11;
        _objc_retainAutorelease(plVar11);
        func_0x00010bdc3520();
      }
      _objc_release(plVar11);
      unaff_x23 = (char *)alStack_460;
      func_0x00010002b838(alStack_460,pcVar4);
      alStack_480[0] = 0;
      alStack_480[1] = 0;
      alStack_480[2] = 0;
      func_0x00010007e1e8(alStack_480,alStack_460,&lStack_448,1);
      plVar8 = (long *)((long)plVar3 * 10);
      plVar9 = (long *)&UNK_11087b388;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b388,alStack_480,plVar8);
      puStack_468 = (undefined1 *)alStack_480;
      func_0x00010007e5dc(&puStack_468);
      plVar6 = plVar7;
      plVar10 = alStack_480;
      if (cStack_449 < '\0') {
        __ZdlPv(alStack_460[0]);
        plVar6 = plVar7;
        plVar10 = alStack_480;
      }
    }
  }
  plVar12 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar5 = plVar12;
  __Unwind_Resume();
  pcStack_488 = FUN_10532df9c;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar9;
  plStack_4c0 = (long *)pcVar2;
  plStack_4b8 = (long *)unaff_x23;
  plStack_4b0 = plVar10;
  plStack_4a8 = plVar13;
  plStack_4a0 = plVar12;
  plStack_498 = plVar11;
  pppuStack_490 = &pppuStack_410;
  _objc_retain(plVar9);
  _objc_retain(plVar6);
  if (plVar5 != (long *)0x0) {
    plVar10 = (long *)plVar5[1];
    _objc_retain(plVar9);
    if (plVar9 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar9;
      _objc_retainAutorelease(plVar9);
      func_0x00010bdc3520();
    }
    _objc_release(plVar9);
    func_0x00010002b838(auStack_4f8,pcVar2);
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar6);
      pcVar2 = (char *)plVar6;
      func_0x00010bdc3520(plVar6);
    }
    _objc_release(plVar6);
    func_0x00010002b838(auStack_4e0,pcVar2);
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    func_0x00010007e1e8(&uStack_518,auStack_4f8,&lStack_4c8,2);
    plVar14 = (long *)&UNK_11087b428;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11087b428,&uStack_518,plVar8);
    puStack_500 = &uStack_518;
    func_0x00010007e5dc(&puStack_500);
    lVar1 = 0;
    do {
      if ((&cStack_4c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar6);
  plVar10 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4c8) {
    ___stack_chk_fail();
    _objc_release(plVar6);
    if (cStack_4e1 < '\0') {
      __ZdlPv(auStack_4f8[0]);
    }
    _objc_release(plVar6);
    _objc_release(plVar9);
    __Unwind_Resume();
    pcStack_528 = FUN_10532e1cc;
    if (plVar10 != (long *)0x0) {
      plVar12 = (long *)plVar10[1];
      plStack_540 = plVar6;
      plStack_538 = plVar9;
      pppuStack_530 = &pppuStack_490;
      (**(code **)(*plVar12 + 0x28))(plVar12,&UNK_11087b478);
      if ((int)plVar12 != 0) {
        uStack_560 = 0;
        uStack_558 = 0;
        uStack_550 = 0;
        (**(code **)(*(long *)plVar10[1] + 0x18))
                  ((long *)plVar10[1],&UNK_11087b478,&uStack_560,(long)plVar14 * 10);
        puStack_548 = (undefined1 *)&uStack_560;
        func_0x00010007e5dc(&puStack_548);
      }
    }
    return;
  }
  return;
}



/* Entry: 1053268ec; end: 1053268fb; -[SCConfigMetricGraphene2 cofRecoveryNetworkMonitorEvent:] */

/* WARNING: Removing unreachable block (ram,0x00010532d954) */

void FUN_1053268ec(long param_1,undefined8 param_2,long *param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  char *unaff_x23;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  char *pcStack_4a0;
  long *plStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_460;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  char *pcStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  long alStack_3e0 [3];
  undefined1 *puStack_3c8;
  long alStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  char *pcStack_3a0;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  long alStack_360 [3];
  undefined1 *puStack_348;
  long alStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  long alStack_2e0 [3];
  undefined1 *puStack_2c8;
  long alStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  char *pcStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  long alStack_260 [3];
  undefined1 *puStack_248;
  long alStack_240 [2];
  char cStack_229;
  long lStack_228;
  char *pcStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  char *pcStack_200;
  long *plStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  long alStack_1e0 [3];
  undefined1 *puStack_1c8;
  long alStack_1c0 [3];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x18);
  pcVar7 = (char *)0x1;
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar11 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = (char *)alStack_60;
    func_0x00010002b838(alStack_60,pcVar7);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,alStack_60,&lStack_48,1);
    plVar13 = (long *)&UNK_11087ad18;
    param_4 = (char *)0x1;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar7 = pcVar2;
    if (cStack_49 < '\0') {
      __ZdlPv(alStack_60[0]);
      pcVar7 = pcVar2;
    }
  }
  plVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_10532d524;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = plVar13;
  pcVar2 = pcVar7;
  pcVar4 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar13;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_f8,unaff_x23);
    pcVar2 = "true";
    if ((int)pcVar7 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    plVar3 = (long *)&UNK_11087ad68;
    pcVar2 = acStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar1 = 0;
    pcVar4 = param_4;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  __Unwind_Resume();
  plVar6 = alStack_1e0;
  pcStack_128 = FUN_10532d70c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar3;
  pcVar7 = pcVar2;
  pcVar10 = pcVar4;
  ppuStack_130 = &puStack_90;
  _objc_retain(plVar3);
  _objc_retain(pcVar4);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)plVar3;
      _objc_retainAutorelease(plVar3);
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    func_0x00010002b838(alStack_1c0,pcVar7);
    pcVar7 = "true";
    if ((int)pcVar2 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_1a8,pcVar7);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_190,pcVar2);
    alStack_1e0[0] = 0;
    alStack_1e0[1] = 0;
    alStack_1e0[2] = 0;
    func_0x00010007e1e8(alStack_1e0,alStack_1c0,&lStack_178,3);
    plVar13 = (long *)&UNK_11087adb8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11087adb8,alStack_1e0,param_5);
    puStack_1c8 = (undefined1 *)alStack_1e0;
    func_0x00010007e5dc(&puStack_1c8);
    lVar1 = 0;
    pcVar7 = (char *)plVar6;
    pcVar10 = param_5;
    do {
      if ((&cStack_179)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x23 = (char *)alStack_1e0;
    } while (lVar1 != -0x48);
  }
  _objc_release(pcVar4);
  plVar11 = plVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while ((long *)unaff_x23 != alStack_1c0);
  _objc_release(pcVar4);
  _objc_release(plVar3);
  plVar12 = plVar11;
  __Unwind_Resume();
  plVar5 = alStack_260;
  pcStack_1e8 = FUN_10532d984;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar13;
  pcVar8 = pcVar7;
  pcStack_220 = pcVar2;
  plStack_218 = (long *)unaff_x23;
  plStack_210 = alStack_1c0;
  plStack_208 = plVar11;
  pcStack_200 = pcVar4;
  plStack_1f8 = plVar3;
  pppuStack_1f0 = &ppuStack_130;
  _objc_retain(plVar13);
  plVar11 = alStack_1c0;
  if (plVar12 != (long *)0x0) {
    plVar3 = (long *)plVar12[1];
    plVar6 = (long *)&UNK_11087b298;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar13);
      if (plVar13 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar13;
        _objc_retainAutorelease(plVar13);
        func_0x00010bdc3520();
      }
      _objc_release(plVar13);
      unaff_x23 = (char *)alStack_240;
      func_0x00010002b838(alStack_240,pcVar4);
      alStack_260[0] = 0;
      alStack_260[1] = 0;
      alStack_260[2] = 0;
      func_0x00010007e1e8(alStack_260,alStack_240,&lStack_228,1);
      pcVar10 = (char *)((long)pcVar7 * 10);
      plVar6 = (long *)&UNK_11087b298;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11087b298,alStack_260,pcVar10);
      puStack_248 = (undefined1 *)alStack_260;
      func_0x00010007e5dc(&puStack_248);
      pcVar8 = (char *)plVar5;
      plVar11 = alStack_260;
      if (cStack_229 < '\0') {
        __ZdlPv(alStack_240[0]);
        pcVar8 = (char *)plVar5;
        plVar11 = alStack_260;
      }
    }
  }
  plVar3 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  _objc_release(plVar13);
  plVar14 = plVar3;
  __Unwind_Resume();
  plVar9 = alStack_2e0;
  pcStack_268 = FUN_10532db1c;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar6;
  pcVar7 = pcVar8;
  pcStack_2a0 = pcVar2;
  plStack_298 = (long *)unaff_x23;
  plStack_290 = plVar11;
  plStack_288 = plVar12;
  plStack_280 = plVar3;
  plStack_278 = plVar13;
  pppuStack_270 = &pppuStack_1f0;
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar13 = (long *)plVar14[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    unaff_x23 = (char *)alStack_2c0;
    func_0x00010002b838(alStack_2c0,pcVar7);
    alStack_2e0[0] = 0;
    alStack_2e0[1] = 0;
    alStack_2e0[2] = 0;
    func_0x00010007e1e8(alStack_2e0,alStack_2c0,&lStack_2a8,1);
    plVar5 = (long *)&UNK_11087b2e8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b2e8,alStack_2e0,pcVar8);
    puStack_2c8 = (undefined1 *)alStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    pcVar7 = (char *)plVar9;
    pcVar10 = pcVar8;
    plVar11 = alStack_2e0;
    if (cStack_2a9 < '\0') {
      __ZdlPv(alStack_2c0[0]);
      pcVar7 = (char *)plVar9;
      pcVar10 = pcVar8;
      plVar11 = alStack_2e0;
    }
  }
  plVar3 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
    ___stack_chk_fail();
    _objc_release(plVar6);
    _objc_release(plVar6);
    plVar14 = plVar3;
    __Unwind_Resume();
    plVar9 = alStack_360;
    pcStack_2e8 = FUN_10532dc90;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar12 = plVar5;
    pcVar4 = pcVar7;
    pcStack_320 = pcVar2;
    plStack_318 = (long *)unaff_x23;
    plStack_310 = plVar11;
    plStack_308 = plVar13;
    plStack_300 = plVar3;
    plStack_2f8 = plVar6;
    pppuStack_2f0 = &pppuStack_270;
    _objc_retain(plVar5);
    plVar13 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      plVar13 = (long *)plVar14[1];
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar5;
        _objc_retainAutorelease(plVar5);
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      unaff_x23 = (char *)alStack_340;
      func_0x00010002b838(alStack_340,pcVar4);
      alStack_360[0] = 0;
      alStack_360[1] = 0;
      alStack_360[2] = 0;
      func_0x00010007e1e8(alStack_360,alStack_340,&lStack_328,1);
      plVar12 = (long *)&UNK_11087b338;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b338,alStack_360,pcVar7);
      puStack_348 = (undefined1 *)alStack_360;
      func_0x00010007e5dc(&puStack_348);
      pcVar4 = (char *)plVar9;
      pcVar10 = pcVar7;
      plVar11 = alStack_360;
      if (cStack_329 < '\0') {
        __ZdlPv(alStack_340[0]);
        pcVar4 = (char *)plVar9;
        pcVar10 = pcVar7;
        plVar11 = alStack_360;
      }
    }
    plVar3 = plVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar5);
    _objc_release(plVar5);
    plVar14 = plVar3;
    __Unwind_Resume();
    plVar9 = alStack_3e0;
    pcStack_368 = FUN_10532de04;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = plVar12;
    pcVar7 = pcVar4;
    pcStack_3a0 = pcVar2;
    plStack_398 = (long *)unaff_x23;
    plStack_390 = plVar11;
    plStack_388 = plVar13;
    plStack_380 = plVar3;
    plStack_378 = plVar5;
    pppuStack_370 = &pppuStack_2f0;
    _objc_retain(plVar12);
    if (plVar14 != (long *)0x0) {
      plVar13 = (long *)plVar14[1];
      plVar6 = (long *)&UNK_11087b388;
      (**(code **)(*plVar13 + 0x28))();
      if ((int)plVar13 != 0) {
        plVar14 = (long *)plVar14[1];
        _objc_retain(plVar12);
        if (plVar12 == (long *)0x0) {
          pcVar7 = "";
        }
        else {
          pcVar7 = (char *)plVar12;
          _objc_retainAutorelease(plVar12);
          func_0x00010bdc3520();
        }
        _objc_release(plVar12);
        unaff_x23 = (char *)alStack_3c0;
        func_0x00010002b838(alStack_3c0,pcVar7);
        alStack_3e0[0] = 0;
        alStack_3e0[1] = 0;
        alStack_3e0[2] = 0;
        func_0x00010007e1e8(alStack_3e0,alStack_3c0,&lStack_3a8,1);
        pcVar10 = (char *)((long)pcVar4 * 10);
        plVar6 = (long *)&UNK_11087b388;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11087b388,alStack_3e0,pcVar10);
        puStack_3c8 = (undefined1 *)alStack_3e0;
        func_0x00010007e5dc(&puStack_3c8);
        pcVar7 = (char *)plVar9;
        plVar11 = alStack_3e0;
        if (cStack_3a9 < '\0') {
          __ZdlPv(alStack_3c0[0]);
          pcVar7 = (char *)plVar9;
          plVar11 = alStack_3e0;
        }
      }
    }
    plVar13 = plVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(plVar12);
      _objc_release(plVar12);
      plVar5 = plVar13;
      __Unwind_Resume();
      pcStack_3e8 = FUN_10532df9c;
      lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar3 = plVar6;
      pcStack_420 = pcVar2;
      plStack_418 = (long *)unaff_x23;
      plStack_410 = plVar11;
      plStack_408 = plVar14;
      plStack_400 = plVar13;
      plStack_3f8 = plVar12;
      pppuStack_3f0 = &pppuStack_370;
      _objc_retain(plVar6);
      _objc_retain(pcVar7);
      if (plVar5 != (long *)0x0) {
        plVar13 = (long *)plVar5[1];
        _objc_retain(plVar6);
        if (plVar6 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar6;
          _objc_retainAutorelease(plVar6);
          func_0x00010bdc3520();
        }
        _objc_release(plVar6);
        func_0x00010002b838(auStack_458,pcVar2);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar2 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_440,pcVar2);
        uStack_478 = 0;
        uStack_470 = 0;
        uStack_468 = 0;
        func_0x00010007e1e8(&uStack_478,auStack_458,&lStack_428,2);
        plVar3 = (long *)&UNK_11087b428;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b428,&uStack_478,pcVar10);
        puStack_460 = &uStack_478;
        func_0x00010007e5dc(&puStack_460);
        lVar1 = 0;
        do {
          if ((&cStack_429)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
      _objc_release(pcVar7);
      plVar13 = plVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_428) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        if (cStack_441 < '\0') {
          __ZdlPv(auStack_458[0]);
        }
        _objc_release(pcVar7);
        _objc_release(plVar6);
        __Unwind_Resume();
        pcStack_488 = FUN_10532e1cc;
        if (plVar13 != (long *)0x0) {
          plVar11 = (long *)plVar13[1];
          pcStack_4a0 = pcVar7;
          plStack_498 = plVar6;
          pppuStack_490 = &pppuStack_3f0;
          (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_11087b478);
          if ((int)plVar11 != 0) {
            uStack_4c0 = 0;
            uStack_4b8 = 0;
            uStack_4b0 = 0;
            (**(code **)(*(long *)plVar13[1] + 0x18))
                      ((long *)plVar13[1],&UNK_11087b478,&uStack_4c0,(long)plVar3 * 10);
            puStack_4a8 = (undefined1 *)&uStack_4c0;
            func_0x00010007e5dc(&puStack_4a8);
          }
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1053268fc; end: 10532690f; -[SCConfigMetricGraphene2 cofForegroundPushRecovery:success:] */

/* WARNING: Removing unreachable block (ram,0x00010532d954) */

void FUN_1053268fc(long param_1,undefined8 param_2,long *param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  char *unaff_x23;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  char *pcStack_420;
  long *plStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  char *pcStack_3a0;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  long alStack_360 [3];
  undefined1 *puStack_348;
  long alStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  long alStack_2e0 [3];
  undefined1 *puStack_2c8;
  long alStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  char *pcStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  long alStack_260 [3];
  undefined1 *puStack_248;
  long alStack_240 [2];
  char cStack_229;
  long lStack_228;
  char *pcStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  long alStack_1e0 [3];
  undefined1 *puStack_1c8;
  long alStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  char *pcStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long alStack_160 [3];
  undefined1 *puStack_148;
  long alStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x18);
  pcVar9 = (char *)0x1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar11 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,unaff_x23);
    pcVar3 = "true";
    if ((int)param_4 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar3);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    plVar14 = (long *)&UNK_11087ad68;
    pcVar3 = acStack_98;
    pcVar9 = (char *)0x1;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  plVar6 = alStack_160;
  pcStack_a8 = FUN_10532d70c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = plVar14;
  pcVar2 = pcVar3;
  pcVar10 = pcVar9;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar14);
  _objc_retain(pcVar9);
  if (plVar11 != (long *)0x0) {
    plVar11 = (long *)plVar11[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    func_0x00010002b838(alStack_140,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar3 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_110,pcVar3);
    alStack_160[0] = 0;
    alStack_160[1] = 0;
    alStack_160[2] = 0;
    func_0x00010007e1e8(alStack_160,alStack_140,&lStack_f8,3);
    plVar4 = (long *)&UNK_11087adb8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11087adb8,alStack_160,param_5);
    puStack_148 = (undefined1 *)alStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar1 = 0;
    pcVar2 = (char *)plVar6;
    pcVar10 = param_5;
    do {
      if ((&cStack_f9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x23 = (char *)alStack_160;
    } while (lVar1 != -0x48);
  }
  _objc_release(pcVar9);
  plVar11 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while ((long *)unaff_x23 != alStack_140);
  _objc_release(pcVar9);
  _objc_release(plVar14);
  plVar12 = plVar11;
  __Unwind_Resume();
  plVar5 = alStack_1e0;
  pcStack_168 = FUN_10532d984;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  pcVar7 = pcVar2;
  pcStack_1a0 = pcVar3;
  plStack_198 = (long *)unaff_x23;
  plStack_190 = alStack_140;
  plStack_188 = plVar11;
  pcStack_180 = pcVar9;
  plStack_178 = plVar14;
  ppuStack_170 = &puStack_b0;
  _objc_retain(plVar4);
  plVar14 = alStack_140;
  if (plVar12 != (long *)0x0) {
    plVar11 = (long *)plVar12[1];
    plVar6 = (long *)&UNK_11087b298;
    (**(code **)(*plVar11 + 0x28))();
    if ((int)plVar11 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)plVar4;
        _objc_retainAutorelease(plVar4);
        func_0x00010bdc3520();
      }
      _objc_release(plVar4);
      unaff_x23 = (char *)alStack_1c0;
      func_0x00010002b838(alStack_1c0,pcVar9);
      alStack_1e0[0] = 0;
      alStack_1e0[1] = 0;
      alStack_1e0[2] = 0;
      func_0x00010007e1e8(alStack_1e0,alStack_1c0,&lStack_1a8,1);
      pcVar10 = (char *)((long)pcVar2 * 10);
      plVar6 = (long *)&UNK_11087b298;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11087b298,alStack_1e0,pcVar10);
      puStack_1c8 = (undefined1 *)alStack_1e0;
      func_0x00010007e5dc(&puStack_1c8);
      pcVar7 = (char *)plVar5;
      plVar14 = alStack_1e0;
      if (cStack_1a9 < '\0') {
        __ZdlPv(alStack_1c0[0]);
        pcVar7 = (char *)plVar5;
        plVar14 = alStack_1e0;
      }
    }
  }
  plVar11 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  plVar13 = plVar11;
  __Unwind_Resume();
  plVar8 = alStack_260;
  pcStack_1e8 = FUN_10532db1c;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar6;
  pcVar9 = pcVar7;
  pcStack_220 = pcVar3;
  plStack_218 = (long *)unaff_x23;
  plStack_210 = plVar14;
  plStack_208 = plVar12;
  plStack_200 = plVar11;
  plStack_1f8 = plVar4;
  pppuStack_1f0 = &ppuStack_170;
  _objc_retain(plVar6);
  plVar11 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar11 = (long *)plVar13[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = (char *)plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    unaff_x23 = (char *)alStack_240;
    func_0x00010002b838(alStack_240,pcVar9);
    alStack_260[0] = 0;
    alStack_260[1] = 0;
    alStack_260[2] = 0;
    func_0x00010007e1e8(alStack_260,alStack_240,&lStack_228,1);
    plVar5 = (long *)&UNK_11087b2e8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11087b2e8,alStack_260,pcVar7);
    puStack_248 = (undefined1 *)alStack_260;
    func_0x00010007e5dc(&puStack_248);
    pcVar9 = (char *)plVar8;
    pcVar10 = pcVar7;
    plVar14 = alStack_260;
    if (cStack_229 < '\0') {
      __ZdlPv(alStack_240[0]);
      pcVar9 = (char *)plVar8;
      pcVar10 = pcVar7;
      plVar14 = alStack_260;
    }
  }
  plVar4 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  _objc_release(plVar6);
  plVar13 = plVar4;
  __Unwind_Resume();
  plVar8 = alStack_2e0;
  pcStack_268 = FUN_10532dc90;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar5;
  pcVar2 = pcVar9;
  pcStack_2a0 = pcVar3;
  plStack_298 = (long *)unaff_x23;
  plStack_290 = plVar14;
  plStack_288 = plVar11;
  plStack_280 = plVar4;
  plStack_278 = plVar6;
  pppuStack_270 = &pppuStack_1f0;
  _objc_retain(plVar5);
  plVar11 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar11 = (long *)plVar13[1];
    _objc_retain(plVar5);
    if (plVar5 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar5;
      _objc_retainAutorelease(plVar5);
      func_0x00010bdc3520();
    }
    _objc_release(plVar5);
    unaff_x23 = (char *)alStack_2c0;
    func_0x00010002b838(alStack_2c0,pcVar2);
    alStack_2e0[0] = 0;
    alStack_2e0[1] = 0;
    alStack_2e0[2] = 0;
    func_0x00010007e1e8(alStack_2e0,alStack_2c0,&lStack_2a8,1);
    plVar12 = (long *)&UNK_11087b338;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11087b338,alStack_2e0,pcVar9);
    puStack_2c8 = (undefined1 *)alStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    pcVar2 = (char *)plVar8;
    pcVar10 = pcVar9;
    plVar14 = alStack_2e0;
    if (cStack_2a9 < '\0') {
      __ZdlPv(alStack_2c0[0]);
      pcVar2 = (char *)plVar8;
      pcVar10 = pcVar9;
      plVar14 = alStack_2e0;
    }
  }
  plVar4 = plVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
    ___stack_chk_fail();
    _objc_release(plVar5);
    _objc_release(plVar5);
    plVar13 = plVar4;
    __Unwind_Resume();
    plVar8 = alStack_360;
    pcStack_2e8 = FUN_10532de04;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = plVar12;
    pcVar9 = pcVar2;
    pcStack_320 = pcVar3;
    plStack_318 = (long *)unaff_x23;
    plStack_310 = plVar14;
    plStack_308 = plVar11;
    plStack_300 = plVar4;
    plStack_2f8 = plVar5;
    pppuStack_2f0 = &pppuStack_270;
    _objc_retain(plVar12);
    if (plVar13 != (long *)0x0) {
      plVar11 = (long *)plVar13[1];
      plVar6 = (long *)&UNK_11087b388;
      (**(code **)(*plVar11 + 0x28))();
      if ((int)plVar11 != 0) {
        plVar13 = (long *)plVar13[1];
        _objc_retain(plVar12);
        if (plVar12 == (long *)0x0) {
          pcVar9 = "";
        }
        else {
          pcVar9 = (char *)plVar12;
          _objc_retainAutorelease(plVar12);
          func_0x00010bdc3520();
        }
        _objc_release(plVar12);
        unaff_x23 = (char *)alStack_340;
        func_0x00010002b838(alStack_340,pcVar9);
        alStack_360[0] = 0;
        alStack_360[1] = 0;
        alStack_360[2] = 0;
        func_0x00010007e1e8(alStack_360,alStack_340,&lStack_328,1);
        pcVar10 = (char *)((long)pcVar2 * 10);
        plVar6 = (long *)&UNK_11087b388;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b388,alStack_360,pcVar10);
        puStack_348 = (undefined1 *)alStack_360;
        func_0x00010007e5dc(&puStack_348);
        pcVar9 = (char *)plVar8;
        plVar14 = alStack_360;
        if (cStack_329 < '\0') {
          __ZdlPv(alStack_340[0]);
          pcVar9 = (char *)plVar8;
          plVar14 = alStack_360;
        }
      }
    }
    plVar11 = plVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar12);
    _objc_release(plVar12);
    plVar5 = plVar11;
    __Unwind_Resume();
    pcStack_368 = FUN_10532df9c;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = plVar6;
    pcStack_3a0 = pcVar3;
    plStack_398 = (long *)unaff_x23;
    plStack_390 = plVar14;
    plStack_388 = plVar13;
    plStack_380 = plVar11;
    plStack_378 = plVar12;
    pppuStack_370 = &pppuStack_2f0;
    _objc_retain(plVar6);
    _objc_retain(pcVar9);
    if (plVar5 != (long *)0x0) {
      plVar14 = (long *)plVar5[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      func_0x00010002b838(auStack_3d8,pcVar3);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar3 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_3c0,pcVar3);
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
      plVar4 = (long *)&UNK_11087b428;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11087b428,&uStack_3f8,pcVar10);
      puStack_3e0 = &uStack_3f8;
      func_0x00010007e5dc(&puStack_3e0);
      lVar1 = 0;
      do {
        if ((&cStack_3a9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(pcVar9);
    plVar14 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      if (cStack_3c1 < '\0') {
        __ZdlPv(auStack_3d8[0]);
      }
      _objc_release(pcVar9);
      _objc_release(plVar6);
      __Unwind_Resume();
      pcStack_408 = FUN_10532e1cc;
      if (plVar14 != (long *)0x0) {
        plVar11 = (long *)plVar14[1];
        pcStack_420 = pcVar9;
        plStack_418 = plVar6;
        pppuStack_410 = &pppuStack_370;
        (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_11087b478);
        if ((int)plVar11 != 0) {
          uStack_440 = 0;
          uStack_438 = 0;
          uStack_430 = 0;
          (**(code **)(*(long *)plVar14[1] + 0x18))
                    ((long *)plVar14[1],&UNK_11087b478,&uStack_440,(long)plVar4 * 10);
          puStack_428 = (undefined1 *)&uStack_440;
          func_0x00010007e5dc(&puStack_428);
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105326910; end: 1053269a3; -[SCConfigMetricGraphene2 cofRecoveryConfigsAppliedWithSource:applied:rejected:protectedWrite:] */

void FUN_105326910(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  _objc_retain(param_3);
  FUN_10532d70c(*(undefined8 *)(param_1 + 0x18),&PTR____CFConstantStringClassReference_110dd22b8,
                param_6,param_3,(long)param_4);
  FUN_10532d70c(*(undefined8 *)(param_1 + 0x18),&PTR____CFConstantStringClassReference_110dd22d8,
                param_6,param_3,(long)param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053269a4; end: 1053269b7; -[SCConfigMetricGraphene2 cofRetrieveRuleIsValid:ruleId:validity:] */

/* WARNING: Removing unreachable block (ram,0x00010532c918) */
/* WARNING: Removing unreachable block (ram,0x00010532d954) */

void FUN_1053269a4(long param_1,undefined8 param_2,long *param_3,long *param_4,char *param_5)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  char *unaff_x23;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined1 *puStack_888;
  long *plStack_880;
  long *plStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 *puStack_840;
  undefined8 auStack_838 [2];
  char cStack_821;
  undefined8 auStack_820 [2];
  char cStack_809;
  long lStack_808;
  long *plStack_800;
  long *plStack_7f8;
  long *plStack_7f0;
  long *plStack_7e8;
  long *plStack_7e0;
  long *plStack_7d8;
  undefined8 ***pppuStack_7d0;
  code *pcStack_7c8;
  long alStack_7c0 [3];
  undefined1 *puStack_7a8;
  long alStack_7a0 [2];
  char cStack_789;
  long lStack_788;
  long *plStack_780;
  long *plStack_778;
  long *plStack_770;
  long *plStack_768;
  long *plStack_760;
  long *plStack_758;
  undefined8 ***pppuStack_750;
  code *pcStack_748;
  long alStack_740 [3];
  undefined1 *puStack_728;
  long alStack_720 [2];
  char cStack_709;
  long lStack_708;
  long *plStack_700;
  long *plStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  long alStack_6c0 [3];
  undefined1 *puStack_6a8;
  long alStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  long *plStack_680;
  long *plStack_678;
  long *plStack_670;
  long *plStack_668;
  long *plStack_660;
  long *plStack_658;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  long alStack_640 [3];
  undefined1 *puStack_628;
  long alStack_620 [2];
  char cStack_609;
  long lStack_608;
  long *plStack_600;
  long *plStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  long alStack_5c0 [3];
  undefined1 *puStack_5a8;
  long alStack_5a0 [3];
  undefined1 auStack_588 [24];
  undefined8 auStack_570 [2];
  char cStack_559;
  long lStack_558;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  long alStack_4f8 [3];
  long *plStack_4e0;
  undefined1 auStack_4d8 [24];
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  long *plStack_490;
  long *plStack_488;
  long *plStack_480;
  long *plStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  long alStack_460 [3];
  undefined1 *puStack_448;
  long alStack_440 [2];
  char cStack_429;
  long lStack_428;
  long *plStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  long alStack_3d8 [3];
  long *plStack_3c0;
  long alStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  long alStack_338 [3];
  long *plStack_320;
  long alStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  long alStack_298 [3];
  long *plStack_280;
  long alStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  long alStack_1f8 [3];
  long *plStack_1e0;
  long alStack_1d8 [3];
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long alStack_158 [3];
  long *plStack_140;
  long alStack_138 [3];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_c0 [3];
  undefined1 *puStack_a8;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plVar10 = (long *)0x1;
  plVar11 = alStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_3;
  plVar15 = (long *)param_5;
  plVar9 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    plVar12 = (long *)&UNK_11087aa38;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar15 = *(long **)(lVar1 + 8);
      _objc_retain(param_3);
      if (param_3 == (long *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(alStack_a0,pcVar3);
      pcVar3 = "true";
      if ((int)param_5 == 0) {
        pcVar3 = "false";
      }
      func_0x00010002b838(auStack_88,pcVar3);
      _objc_retain(param_4);
      if (param_4 == (long *)0x0) {
        param_5 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        param_5 = (char *)param_4;
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_70,param_5);
      alStack_c0[0] = 0;
      alStack_c0[1] = 0;
      alStack_c0[2] = 0;
      func_0x00010007e1e8(alStack_c0,alStack_a0,&lStack_58,3);
      plVar9 = (long *)0x3e8;
      plVar12 = (long *)&UNK_11087aa38;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_a8 = (undefined1 *)alStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar1 = 0;
      plVar15 = plVar11;
      do {
        if ((&cStack_59)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x23 = (char *)alStack_c0;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(param_4);
  plVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  plStack_f0 = alStack_a0;
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while ((long *)unaff_x23 != plStack_f0);
  _objc_release(param_4);
  _objc_release(param_3);
  plVar14 = plVar11;
  __Unwind_Resume();
  pcStack_c8 = FUN_10532c950;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar12;
  plVar13 = plVar15;
  plVar5 = plVar9;
  plStack_100 = (long *)param_5;
  plStack_f8 = (long *)unaff_x23;
  plStack_e8 = plVar11;
  plStack_e0 = param_4;
  plStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar12);
  plVar11 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar11 = (long *)plVar14[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar12;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    param_5 = (char *)alStack_138;
    func_0x00010002b838(alStack_138,unaff_x23);
    pcVar3 = "true";
    if ((int)plVar15 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_120,pcVar3);
    alStack_158[0] = 0;
    alStack_158[1] = 0;
    alStack_158[2] = 0;
    func_0x00010007e1e8(alStack_158,alStack_138,&lStack_108,2);
    plVar2 = (long *)&UNK_11087ab88;
    plVar15 = alStack_158;
    plVar13 = alStack_158;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    plStack_140 = plVar15;
    func_0x00010007e5dc(&plStack_140);
    lVar1 = 0;
    plVar11 = alStack_138;
    plVar5 = plVar9;
    do {
      if ((&cStack_109)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar9 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar4 = plVar9;
  __Unwind_Resume();
  pcStack_168 = FUN_10532cb38;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar2;
  plVar6 = plVar13;
  plVar8 = plVar5;
  plStack_1a0 = (long *)param_5;
  plStack_198 = (long *)unaff_x23;
  plStack_190 = plVar15;
  plStack_188 = plVar11;
  plStack_180 = plVar9;
  plStack_178 = plVar12;
  ppuStack_170 = &puStack_d0;
  _objc_retain(plVar2);
  plVar12 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar12 = (long *)plVar4[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    param_5 = (char *)alStack_1d8;
    func_0x00010002b838(alStack_1d8,unaff_x23);
    pcVar3 = "true";
    if ((int)plVar13 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_1c0,pcVar3);
    alStack_1f8[0] = 0;
    alStack_1f8[1] = 0;
    alStack_1f8[2] = 0;
    func_0x00010007e1e8(alStack_1f8,alStack_1d8,&lStack_1a8,2);
    plVar14 = (long *)&UNK_11087abd8;
    plVar13 = alStack_1f8;
    plVar6 = alStack_1f8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plStack_1e0 = plVar13;
    func_0x00010007e5dc(&plStack_1e0);
    lVar1 = 0;
    plVar12 = alStack_1d8;
    plVar8 = plVar5;
    do {
      if ((&cStack_1a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar15 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(plVar2);
  plVar5 = plVar15;
  __Unwind_Resume();
  pcStack_208 = FUN_10532cd20;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar14;
  plVar11 = plVar6;
  plVar4 = plVar8;
  plStack_240 = (long *)param_5;
  plStack_238 = (long *)unaff_x23;
  plStack_230 = plVar13;
  plStack_228 = plVar12;
  plStack_220 = plVar15;
  plStack_218 = plVar2;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(plVar14);
  _objc_retain(plVar6);
  plVar12 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar12 = (long *)plVar5[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    param_5 = (char *)alStack_278;
    func_0x00010002b838(alStack_278,pcVar3);
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(plVar6);
      pcVar3 = (char *)plVar6;
      func_0x00010bdc3520(plVar6);
    }
    _objc_release(plVar6);
    func_0x00010002b838(auStack_260,pcVar3);
    alStack_298[0] = 0;
    alStack_298[1] = 0;
    alStack_298[2] = 0;
    func_0x00010007e1e8(alStack_298,alStack_278,&lStack_248,2);
    plVar9 = (long *)&UNK_11087ac28;
    unaff_x23 = (char *)alStack_298;
    plVar11 = alStack_298;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plStack_280 = (long *)unaff_x23;
    func_0x00010007e5dc(&plStack_280);
    lVar1 = 0;
    plVar12 = alStack_278;
    plVar4 = plVar8;
    do {
      if ((&cStack_249)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar6);
  plVar15 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  if (cStack_261 < '\0') {
    __ZdlPv(alStack_278[0]);
  }
  _objc_release(plVar6);
  _objc_release(plVar14);
  plVar5 = plVar15;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10532cf50;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar9;
  plVar13 = plVar11;
  plVar8 = plVar4;
  plStack_2e0 = (long *)param_5;
  plStack_2d8 = (long *)unaff_x23;
  plStack_2d0 = plVar12;
  plStack_2c8 = plVar15;
  plStack_2c0 = plVar6;
  plStack_2b8 = plVar14;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(plVar9);
  _objc_retain(plVar11);
  plVar12 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar12 = (long *)plVar5[1];
    _objc_retain(plVar9);
    if (plVar9 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)plVar9;
      _objc_retainAutorelease(plVar9);
      func_0x00010bdc3520();
    }
    _objc_release(plVar9);
    param_5 = (char *)alStack_318;
    func_0x00010002b838(alStack_318,pcVar3);
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(plVar11);
      pcVar3 = (char *)plVar11;
      func_0x00010bdc3520(plVar11);
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_300,pcVar3);
    alStack_338[0] = 0;
    alStack_338[1] = 0;
    alStack_338[2] = 0;
    func_0x00010007e1e8(alStack_338,alStack_318,&lStack_2e8,2);
    plVar2 = (long *)&UNK_11087ac78;
    unaff_x23 = (char *)alStack_338;
    plVar13 = alStack_338;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plStack_320 = (long *)unaff_x23;
    func_0x00010007e5dc(&plStack_320);
    lVar1 = 0;
    plVar12 = alStack_318;
    plVar8 = plVar4;
    do {
      if ((&cStack_2e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar11);
  plVar15 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  if (cStack_301 < '\0') {
    __ZdlPv(alStack_318[0]);
  }
  _objc_release(plVar11);
  _objc_release(plVar9);
  plVar6 = plVar15;
  __Unwind_Resume();
  pcStack_348 = FUN_10532d180;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar2;
  plVar5 = plVar13;
  plVar4 = plVar8;
  plStack_380 = (long *)param_5;
  plStack_378 = (long *)unaff_x23;
  plStack_370 = plVar12;
  plStack_368 = plVar15;
  plStack_360 = plVar11;
  plStack_358 = plVar9;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(plVar2);
  _objc_retain(plVar13);
  plVar12 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar12 = (long *)plVar6[1];
    _objc_retain(plVar2);
    if (plVar2 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)plVar2;
      _objc_retainAutorelease(plVar2);
      func_0x00010bdc3520();
    }
    _objc_release(plVar2);
    param_5 = (char *)alStack_3b8;
    func_0x00010002b838(alStack_3b8,pcVar3);
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(plVar13);
      pcVar3 = (char *)plVar13;
      func_0x00010bdc3520(plVar13);
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_3a0,pcVar3);
    alStack_3d8[0] = 0;
    alStack_3d8[1] = 0;
    alStack_3d8[2] = 0;
    func_0x00010007e1e8(alStack_3d8,alStack_3b8,&lStack_388,2);
    plVar14 = (long *)&UNK_11087acc8;
    unaff_x23 = (char *)alStack_3d8;
    plVar5 = alStack_3d8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plStack_3c0 = (long *)unaff_x23;
    func_0x00010007e5dc(&plStack_3c0);
    lVar1 = 0;
    plVar12 = alStack_3b8;
    plVar4 = plVar8;
    do {
      if ((&cStack_389)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar13);
  plVar15 = plVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_388) {
    ___stack_chk_fail();
    _objc_release(plVar13);
    if (cStack_3a1 < '\0') {
      __ZdlPv(alStack_3b8[0]);
    }
    _objc_release(plVar13);
    _objc_release(plVar2);
    plVar11 = plVar15;
    __Unwind_Resume();
    plVar8 = alStack_460;
    pcStack_3e8 = FUN_10532d3b0;
    lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9 = plVar14;
    plVar6 = plVar5;
    plStack_420 = (long *)param_5;
    plStack_418 = (long *)unaff_x23;
    plStack_410 = plVar12;
    plStack_408 = plVar15;
    plStack_400 = plVar13;
    plStack_3f8 = plVar2;
    pppuStack_3f0 = &pppuStack_350;
    _objc_retain(plVar14);
    plVar15 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      plVar15 = (long *)plVar11[1];
      _objc_retain(plVar14);
      if (plVar14 == (long *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)plVar14;
        _objc_retainAutorelease(plVar14);
        func_0x00010bdc3520();
      }
      _objc_release(plVar14);
      unaff_x23 = (char *)alStack_440;
      func_0x00010002b838(alStack_440,pcVar3);
      alStack_460[0] = 0;
      alStack_460[1] = 0;
      alStack_460[2] = 0;
      func_0x00010007e1e8(alStack_460,alStack_440,&lStack_428,1);
      plVar9 = (long *)&UNK_11087ad18;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_448 = (undefined1 *)alStack_460;
      func_0x00010007e5dc(&puStack_448);
      plVar6 = plVar8;
      plVar4 = plVar5;
      plVar12 = alStack_460;
      if (cStack_429 < '\0') {
        __ZdlPv(alStack_440[0]);
        plVar6 = plVar8;
        plVar4 = plVar5;
        plVar12 = alStack_460;
      }
    }
    plVar11 = plVar14;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar14);
    _objc_release(plVar14);
    plVar13 = plVar11;
    __Unwind_Resume();
    pcStack_468 = FUN_10532d524;
    lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar2 = plVar9;
    pcVar3 = (char *)plVar6;
    plVar5 = plVar4;
    plStack_4a0 = (long *)param_5;
    plStack_498 = (long *)unaff_x23;
    plStack_490 = plVar12;
    plStack_488 = plVar15;
    plStack_480 = plVar11;
    plStack_478 = plVar14;
    pppuStack_470 = &pppuStack_3f0;
    _objc_retain(plVar9);
    if (plVar13 != (long *)0x0) {
      plVar12 = (long *)plVar13[1];
      _objc_retain(plVar9);
      if (plVar9 == (long *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = (char *)plVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(plVar9);
      func_0x00010002b838(auStack_4d8,unaff_x23);
      pcVar3 = "true";
      if ((int)plVar6 == 0) {
        pcVar3 = "false";
      }
      func_0x00010002b838(auStack_4c0,pcVar3);
      alStack_4f8[0] = 0;
      alStack_4f8[1] = 0;
      alStack_4f8[2] = 0;
      func_0x00010007e1e8(alStack_4f8,auStack_4d8,&lStack_4a8,2);
      plVar2 = (long *)&UNK_11087ad68;
      pcVar3 = (char *)alStack_4f8;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      plStack_4e0 = alStack_4f8;
      func_0x00010007e5dc(&plStack_4e0);
      lVar1 = 0;
      plVar5 = plVar4;
      do {
        if ((&cStack_4a9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    plVar12 = plVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar9);
    _objc_release(plVar9);
    __Unwind_Resume();
    plVar13 = alStack_5c0;
    pcStack_508 = FUN_10532d70c;
    lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar15 = plVar2;
    plVar9 = (long *)pcVar3;
    plVar11 = plVar5;
    pppuStack_510 = &pppuStack_470;
    _objc_retain(plVar2);
    _objc_retain(plVar5);
    if (plVar12 != (long *)0x0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar2);
      if (plVar2 == (long *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)plVar2;
        _objc_retainAutorelease(plVar2);
        func_0x00010bdc3520();
      }
      _objc_release(plVar2);
      func_0x00010002b838(alStack_5a0,pcVar7);
      pcVar7 = "true";
      if ((int)pcVar3 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(auStack_588,pcVar7);
      _objc_retain(plVar5);
      if (plVar5 == (long *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(plVar5);
        pcVar3 = (char *)plVar5;
        func_0x00010bdc3520();
      }
      _objc_release(plVar5);
      func_0x00010002b838(auStack_570,pcVar3);
      alStack_5c0[0] = 0;
      alStack_5c0[1] = 0;
      alStack_5c0[2] = 0;
      func_0x00010007e1e8(alStack_5c0,alStack_5a0,&lStack_558,3);
      plVar15 = (long *)&UNK_11087adb8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11087adb8,alStack_5c0,plVar10);
      puStack_5a8 = (undefined1 *)alStack_5c0;
      func_0x00010007e5dc(&puStack_5a8);
      lVar1 = 0;
      plVar9 = plVar13;
      plVar11 = plVar10;
      do {
        if ((&cStack_559)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_570 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x23 = (char *)alStack_5c0;
      } while (lVar1 != -0x48);
    }
    _objc_release(plVar5);
    plVar12 = plVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_558) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar5);
    do {
      unaff_x23 = (char *)((long)unaff_x23 + -0x18);
    } while ((long *)unaff_x23 != alStack_5a0);
    _objc_release(plVar5);
    _objc_release(plVar2);
    plVar13 = plVar12;
    __Unwind_Resume();
    plVar6 = alStack_640;
    pcStack_5c8 = FUN_10532d984;
    lStack_608 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = plVar15;
    plVar14 = plVar9;
    plStack_600 = (long *)pcVar3;
    plStack_5f8 = (long *)unaff_x23;
    plStack_5f0 = alStack_5a0;
    plStack_5e8 = plVar12;
    plStack_5e0 = plVar5;
    plStack_5d8 = plVar2;
    pppuStack_5d0 = &pppuStack_510;
    _objc_retain(plVar15);
    plVar12 = alStack_5a0;
    if (plVar13 != (long *)0x0) {
      plVar2 = (long *)plVar13[1];
      plVar10 = (long *)&UNK_11087b298;
      (**(code **)(*plVar2 + 0x28))();
      if ((int)plVar2 != 0) {
        plVar13 = (long *)plVar13[1];
        _objc_retain(plVar15);
        if (plVar15 == (long *)0x0) {
          pcVar7 = "";
        }
        else {
          pcVar7 = (char *)plVar15;
          _objc_retainAutorelease(plVar15);
          func_0x00010bdc3520();
        }
        _objc_release(plVar15);
        unaff_x23 = (char *)alStack_620;
        func_0x00010002b838(alStack_620,pcVar7);
        alStack_640[0] = 0;
        alStack_640[1] = 0;
        alStack_640[2] = 0;
        func_0x00010007e1e8(alStack_640,alStack_620,&lStack_608,1);
        plVar11 = (long *)((long)plVar9 * 10);
        plVar10 = (long *)&UNK_11087b298;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b298,alStack_640,plVar11);
        puStack_628 = (undefined1 *)alStack_640;
        func_0x00010007e5dc(&puStack_628);
        plVar14 = plVar6;
        plVar12 = alStack_640;
        if (cStack_609 < '\0') {
          __ZdlPv(alStack_620[0]);
          plVar14 = plVar6;
          plVar12 = alStack_640;
        }
      }
    }
    plVar9 = plVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_608) {
      ___stack_chk_fail();
      _objc_release(plVar15);
      _objc_release(plVar15);
      plVar5 = plVar9;
      __Unwind_Resume();
      plVar4 = alStack_6c0;
      pcStack_648 = FUN_10532db1c;
      lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar2 = plVar10;
      plVar6 = plVar14;
      plStack_680 = (long *)pcVar3;
      plStack_678 = (long *)unaff_x23;
      plStack_670 = plVar12;
      plStack_668 = plVar13;
      plStack_660 = plVar9;
      plStack_658 = plVar15;
      pppuStack_650 = &pppuStack_5d0;
      _objc_retain(plVar10);
      plVar15 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        plVar15 = (long *)plVar5[1];
        _objc_retain(plVar10);
        if (plVar10 == (long *)0x0) {
          pcVar7 = "";
        }
        else {
          pcVar7 = (char *)plVar10;
          _objc_retainAutorelease(plVar10);
          func_0x00010bdc3520();
        }
        _objc_release(plVar10);
        unaff_x23 = (char *)alStack_6a0;
        func_0x00010002b838(alStack_6a0,pcVar7);
        alStack_6c0[0] = 0;
        alStack_6c0[1] = 0;
        alStack_6c0[2] = 0;
        func_0x00010007e1e8(alStack_6c0,alStack_6a0,&lStack_688,1);
        plVar2 = (long *)&UNK_11087b2e8;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11087b2e8,alStack_6c0,plVar14);
        puStack_6a8 = (undefined1 *)alStack_6c0;
        func_0x00010007e5dc(&puStack_6a8);
        plVar6 = plVar4;
        plVar11 = plVar14;
        plVar12 = alStack_6c0;
        if (cStack_689 < '\0') {
          __ZdlPv(alStack_6a0[0]);
          plVar6 = plVar4;
          plVar11 = plVar14;
          plVar12 = alStack_6c0;
        }
      }
      plVar9 = plVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_688) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar10);
      _objc_release(plVar10);
      plVar14 = plVar9;
      __Unwind_Resume();
      plVar4 = alStack_740;
      pcStack_6c8 = FUN_10532dc90;
      lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar13 = plVar2;
      plVar5 = plVar6;
      plStack_700 = (long *)pcVar3;
      plStack_6f8 = (long *)unaff_x23;
      plStack_6f0 = plVar12;
      plStack_6e8 = plVar15;
      plStack_6e0 = plVar9;
      plStack_6d8 = plVar10;
      pppuStack_6d0 = &pppuStack_650;
      _objc_retain(plVar2);
      plVar15 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        plVar15 = (long *)plVar14[1];
        _objc_retain(plVar2);
        if (plVar2 == (long *)0x0) {
          pcVar7 = "";
        }
        else {
          pcVar7 = (char *)plVar2;
          _objc_retainAutorelease(plVar2);
          func_0x00010bdc3520();
        }
        _objc_release(plVar2);
        unaff_x23 = (char *)alStack_720;
        func_0x00010002b838(alStack_720,pcVar7);
        alStack_740[0] = 0;
        alStack_740[1] = 0;
        alStack_740[2] = 0;
        func_0x00010007e1e8(alStack_740,alStack_720,&lStack_708,1);
        plVar13 = (long *)&UNK_11087b338;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11087b338,alStack_740,plVar6);
        puStack_728 = (undefined1 *)alStack_740;
        func_0x00010007e5dc(&puStack_728);
        plVar5 = plVar4;
        plVar11 = plVar6;
        plVar12 = alStack_740;
        if (cStack_709 < '\0') {
          __ZdlPv(alStack_720[0]);
          plVar5 = plVar4;
          plVar11 = plVar6;
          plVar12 = alStack_740;
        }
      }
      plVar9 = plVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar2);
      _objc_release(plVar2);
      plVar14 = plVar9;
      __Unwind_Resume();
      plVar4 = alStack_7c0;
      pcStack_748 = FUN_10532de04;
      lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar10 = plVar13;
      plVar6 = plVar5;
      plStack_780 = (long *)pcVar3;
      plStack_778 = (long *)unaff_x23;
      plStack_770 = plVar12;
      plStack_768 = plVar15;
      plStack_760 = plVar9;
      plStack_758 = plVar2;
      pppuStack_750 = &pppuStack_6d0;
      _objc_retain(plVar13);
      if (plVar14 != (long *)0x0) {
        plVar15 = (long *)plVar14[1];
        plVar10 = (long *)&UNK_11087b388;
        (**(code **)(*plVar15 + 0x28))();
        if ((int)plVar15 != 0) {
          plVar14 = (long *)plVar14[1];
          _objc_retain(plVar13);
          if (plVar13 == (long *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = (char *)plVar13;
            _objc_retainAutorelease(plVar13);
            func_0x00010bdc3520();
          }
          _objc_release(plVar13);
          unaff_x23 = (char *)alStack_7a0;
          func_0x00010002b838(alStack_7a0,pcVar7);
          alStack_7c0[0] = 0;
          alStack_7c0[1] = 0;
          alStack_7c0[2] = 0;
          func_0x00010007e1e8(alStack_7c0,alStack_7a0,&lStack_788,1);
          plVar11 = (long *)((long)plVar5 * 10);
          plVar10 = (long *)&UNK_11087b388;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11087b388,alStack_7c0,plVar11);
          puStack_7a8 = (undefined1 *)alStack_7c0;
          func_0x00010007e5dc(&puStack_7a8);
          plVar6 = plVar4;
          plVar12 = alStack_7c0;
          if (cStack_789 < '\0') {
            __ZdlPv(alStack_7a0[0]);
            plVar6 = plVar4;
            plVar12 = alStack_7c0;
          }
        }
      }
      plVar15 = plVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar13);
      _objc_release(plVar13);
      plVar2 = plVar15;
      __Unwind_Resume();
      pcStack_7c8 = FUN_10532df9c;
      lStack_808 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar9 = plVar10;
      plStack_800 = (long *)pcVar3;
      plStack_7f8 = (long *)unaff_x23;
      plStack_7f0 = plVar12;
      plStack_7e8 = plVar14;
      plStack_7e0 = plVar15;
      plStack_7d8 = plVar13;
      pppuStack_7d0 = &pppuStack_750;
      _objc_retain(plVar10);
      _objc_retain(plVar6);
      if (plVar2 != (long *)0x0) {
        plVar12 = (long *)plVar2[1];
        _objc_retain(plVar10);
        if (plVar10 == (long *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)plVar10;
          _objc_retainAutorelease(plVar10);
          func_0x00010bdc3520();
        }
        _objc_release(plVar10);
        func_0x00010002b838(auStack_838,pcVar3);
        _objc_retain(plVar6);
        if (plVar6 == (long *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(plVar6);
          pcVar3 = (char *)plVar6;
          func_0x00010bdc3520(plVar6);
        }
        _objc_release(plVar6);
        func_0x00010002b838(auStack_820,pcVar3);
        uStack_858 = 0;
        uStack_850 = 0;
        uStack_848 = 0;
        func_0x00010007e1e8(&uStack_858,auStack_838,&lStack_808,2);
        plVar9 = (long *)&UNK_11087b428;
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11087b428,&uStack_858,plVar11);
        puStack_840 = &uStack_858;
        func_0x00010007e5dc(&puStack_840);
        lVar1 = 0;
        do {
          if ((&cStack_809)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_820 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
      _objc_release(plVar6);
      plVar12 = plVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_808) {
        ___stack_chk_fail();
        _objc_release(plVar6);
        if (cStack_821 < '\0') {
          __ZdlPv(auStack_838[0]);
        }
        _objc_release(plVar6);
        _objc_release(plVar10);
        __Unwind_Resume();
        pcStack_868 = FUN_10532e1cc;
        if (plVar12 != (long *)0x0) {
          plVar15 = (long *)plVar12[1];
          plStack_880 = plVar6;
          plStack_878 = plVar10;
          pppuStack_870 = &pppuStack_7d0;
          (**(code **)(*plVar15 + 0x28))(plVar15,&UNK_11087b478);
          if ((int)plVar15 != 0) {
            uStack_8a0 = 0;
            uStack_898 = 0;
            uStack_890 = 0;
            (**(code **)(*(long *)plVar12[1] + 0x18))
                      ((long *)plVar12[1],&UNK_11087b478,&uStack_8a0,(long)plVar9 * 10);
            puStack_888 = (undefined1 *)&uStack_8a0;
            func_0x00010007e5dc(&puStack_888);
          }
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1053269b8; end: 1053269c7; -[SCConfigMetricGraphene2 cofProtoParseFailure:] */

/* WARNING: Removing unreachable block (ram,0x000105329b14) */
/* WARNING: Removing unreachable block (ram,0x000105329da8) */

void FUN_1053269b8(double param_1,long param_2,undefined8 param_3,long *param_4,char *param_5,
                  char *param_6)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  long *plVar15;
  char *unaff_x22;
  undefined8 *unaff_x24;
  char acStack_2e0 [24];
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  long alStack_160 [3];
  long *plStack_148;
  long **applStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined1 *puStack_120;
  long *plStack_118;
  long *plStack_110;
  long **pplStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 8);
  pcVar8 = (char *)0x1;
  pcVar5 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_4;
  _objc_retain(param_4);
  plVar15 = (long *)0x0;
  if (lVar1 != 0) {
    plVar15 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (long *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = (char *)param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar8);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    plVar7 = (long *)&UNK_1108798b8;
    param_5 = (char *)0x1;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar8 = pcVar5;
    unaff_x22 = acStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar8 = pcVar5;
      unaff_x22 = acStack_80;
    }
  }
  plVar14 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  plVar2 = plVar14;
  __Unwind_Resume();
  plVar9 = alStack_f0;
  pcStack_88 = FUN_105329638;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = (long **)0x0;
  plVar6 = plVar7;
  pcVar5 = pcVar8;
  puStack_b0 = unaff_x22;
  plStack_a8 = plVar15;
  plStack_a0 = plVar14;
  plStack_98 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  if (plVar2 != (long *)0x0) {
    pplVar3 = (long **)plVar2[1];
    plVar6 = (long *)&UNK_110879908;
    (*(code *)(*pplVar3)[5])();
    plVar14 = plVar2;
    plVar15 = plVar7;
    if ((int)pplVar3 != 0) {
      plVar14 = (long *)plVar2[1];
      pcVar5 = "true";
      if ((int)plVar7 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(applStack_d0,pcVar5);
      alStack_f0[0] = 0;
      alStack_f0[1] = 0;
      alStack_f0[2] = 0;
      func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
      param_5 = (char *)((long)pcVar8 * 10);
      plVar6 = (long *)&UNK_110879908;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      pplVar3 = &plStack_d8;
      plStack_d8 = alStack_f0;
      func_0x00010007e5dc();
      pcVar5 = (char *)plVar9;
      plVar15 = alStack_f0;
      if (cStack_b9 < '\0') {
        pplVar3 = applStack_d0[0];
        __ZdlPv();
        pcVar5 = (char *)plVar9;
        plVar15 = alStack_f0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar15;
  func_0x00010007e5dc(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  pplVar4 = pplVar3;
  __Unwind_Resume();
  plVar2 = alStack_160;
  puStack_120 = unaff_x22;
  plStack_118 = plVar15;
  plStack_110 = plVar14;
  pplStack_108 = pplVar3;
  ppuStack_100 = &puStack_90;
  pcStack_f8 = FUN_105329778;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = (long **)0x0;
  plVar7 = plVar6;
  pcVar8 = pcVar5;
  if (pplVar4 != (long **)0x0) {
    pplVar3 = (long **)pplVar4[1];
    plVar7 = (long *)&UNK_110879958;
    (*(code *)(*pplVar3)[5])();
    plVar15 = plVar6;
    if ((int)pplVar3 != 0) {
      plVar15 = pplVar4[1];
      pcVar8 = "true";
      if ((int)plVar6 == 0) {
        pcVar8 = "false";
      }
      func_0x00010002b838(applStack_140,pcVar8);
      alStack_160[0] = 0;
      alStack_160[1] = 0;
      alStack_160[2] = 0;
      func_0x00010007e1e8(alStack_160,applStack_140,&lStack_128,1);
      plVar7 = (long *)&UNK_110879958;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      pplVar3 = &plStack_148;
      plStack_148 = alStack_160;
      func_0x00010007e5dc();
      pcVar8 = (char *)plVar2;
      param_5 = pcVar5;
      plVar15 = alStack_160;
      if (cStack_129 < '\0') {
        pplVar3 = applStack_140[0];
        __ZdlPv();
        pcVar8 = (char *)plVar2;
        param_5 = pcVar5;
        plVar15 = alStack_160;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  plStack_148 = plVar15;
  func_0x00010007e5dc(&plStack_148);
  if (cStack_129 < '\0') {
    __ZdlPv(applStack_140[0]);
  }
  __Unwind_Resume();
  pcVar10 = acStack_220;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar7;
  pcVar5 = pcVar8;
  pcVar12 = param_5;
  pcVar13 = param_6;
  _objc_retain(plVar7);
  _objc_retain(pcVar8);
  if (pplVar3 != (long **)0x0) {
    plVar14 = pplVar3[1];
    plVar15 = (long *)&UNK_1108799a8;
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar14 = pplVar3[1];
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)plVar7;
        _objc_retainAutorelease(plVar7);
        func_0x00010bdc3520();
      }
      _objc_release(plVar7);
      func_0x00010002b838(auStack_200,pcVar5);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar5 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1e8,pcVar5);
      unaff_x24 = auStack_1d0;
      pcVar5 = "true";
      if ((int)param_5 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(unaff_x24,pcVar5);
      acStack_220[0] = '\0';
      acStack_220[1] = '\0';
      acStack_220[2] = '\0';
      acStack_220[3] = '\0';
      acStack_220[4] = '\0';
      acStack_220[5] = '\0';
      acStack_220[6] = '\0';
      acStack_220[7] = '\0';
      acStack_220[8] = '\0';
      acStack_220[9] = '\0';
      acStack_220[10] = '\0';
      acStack_220[0xb] = '\0';
      acStack_220[0xc] = '\0';
      acStack_220[0xd] = '\0';
      acStack_220[0xe] = '\0';
      acStack_220[0xf] = '\0';
      acStack_220[0x10] = '\0';
      acStack_220[0x11] = '\0';
      acStack_220[0x12] = '\0';
      acStack_220[0x13] = '\0';
      acStack_220[0x14] = '\0';
      acStack_220[0x15] = '\0';
      acStack_220[0x16] = '\0';
      acStack_220[0x17] = '\0';
      func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1b8,3);
      pcVar12 = (char *)((long)param_6 * 10);
      plVar15 = (long *)&UNK_1108799a8;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_208 = acStack_220;
      func_0x00010007e5dc(&puStack_208);
      lVar1 = 0;
      pcVar5 = pcVar10;
      do {
        if ((&cStack_1b9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(pcVar8);
  plVar14 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_200);
    _objc_release(pcVar8);
    _objc_release(plVar7);
    __Unwind_Resume();
    pcVar11 = acStack_2e0;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar7 = plVar15;
    pcVar8 = pcVar5;
    pcVar10 = pcVar12;
    _objc_retain(plVar15);
    _objc_retain(pcVar5);
    if (plVar14 != (long *)0x0) {
      plVar6 = (long *)plVar14[1];
      plVar7 = (long *)&UNK_1108799f8;
      (**(code **)(*plVar6 + 0x28))(plVar6,&UNK_1108799f8);
      if ((int)plVar6 != 0) {
        plVar14 = (long *)plVar14[1];
        _objc_retain(plVar15);
        if (plVar15 == (long *)0x0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = (char *)plVar15;
          _objc_retainAutorelease(plVar15);
          func_0x00010bdc3520();
        }
        _objc_release(plVar15);
        func_0x00010002b838(auStack_2c0,pcVar8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar8 = "";
        }
        else {
          _objc_retainAutorelease(pcVar5);
          pcVar8 = pcVar5;
          func_0x00010bdc3520(pcVar5);
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_2a8,pcVar8);
        unaff_x24 = auStack_290;
        pcVar8 = "true";
        if ((int)pcVar12 == 0) {
          pcVar8 = "false";
        }
        func_0x00010002b838(unaff_x24,pcVar8);
        acStack_2e0[0] = '\0';
        acStack_2e0[1] = '\0';
        acStack_2e0[2] = '\0';
        acStack_2e0[3] = '\0';
        acStack_2e0[4] = '\0';
        acStack_2e0[5] = '\0';
        acStack_2e0[6] = '\0';
        acStack_2e0[7] = '\0';
        acStack_2e0[8] = '\0';
        acStack_2e0[9] = '\0';
        acStack_2e0[10] = '\0';
        acStack_2e0[0xb] = '\0';
        acStack_2e0[0xc] = '\0';
        acStack_2e0[0xd] = '\0';
        acStack_2e0[0xe] = '\0';
        acStack_2e0[0xf] = '\0';
        acStack_2e0[0x10] = '\0';
        acStack_2e0[0x11] = '\0';
        acStack_2e0[0x12] = '\0';
        acStack_2e0[0x13] = '\0';
        acStack_2e0[0x14] = '\0';
        acStack_2e0[0x15] = '\0';
        acStack_2e0[0x16] = '\0';
        acStack_2e0[0x17] = '\0';
        func_0x00010007e1e8(acStack_2e0,auStack_2c0,&lStack_278,3);
        plVar7 = (long *)&UNK_1108799f8;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108799f8,acStack_2e0,pcVar13);
        puStack_2c8 = acStack_2e0;
        func_0x00010007e5dc(&puStack_2c8);
        lVar1 = 0;
        pcVar8 = pcVar11;
        pcVar10 = pcVar13;
        do {
          if ((&cStack_279)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x48);
      }
    }
    _objc_release(pcVar5);
    plVar14 = plVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_2c0);
      _objc_release(pcVar5);
      _objc_release(plVar15);
      __Unwind_Resume();
      _objc_retain(plVar7);
      _objc_retain(pcVar8);
      if (plVar14 != (long *)0x0) {
        FUN_105329b4c(plVar14,plVar7,pcVar8,pcVar10,(long)(param_1 * 1000.0));
      }
      _objc_release(pcVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(plVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1053269c8; end: 1053269d7; -[SCConfigMetricGraphene2 dbWrite:succeeded:] */

void FUN_1053269c8(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char **ppcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  long lVar12;
  char *unaff_x23;
  char *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  long lStack_200;
  char **ppcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined1 auStack_1b8 [24];
  long alStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  char acStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar12 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_4;
  pcVar11 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    pcVar3 = "";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      pcVar3 = "true";
      if ((int)param_4 == 0) {
        pcVar3 = "false";
      }
      unaff_x23 = (char *)auStack_78;
      func_0x00010002b838(auStack_78,pcVar3);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_3);
        pcVar3 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,pcVar3);
      acStack_98[0] = '\0';
      acStack_98[1] = '\0';
      acStack_98[2] = '\0';
      acStack_98[3] = '\0';
      acStack_98[4] = '\0';
      acStack_98[5] = '\0';
      acStack_98[6] = '\0';
      acStack_98[7] = '\0';
      acStack_98[8] = '\0';
      acStack_98[9] = '\0';
      acStack_98[10] = '\0';
      acStack_98[0xb] = '\0';
      acStack_98[0xc] = '\0';
      acStack_98[0xd] = '\0';
      acStack_98[0xe] = '\0';
      acStack_98[0xf] = '\0';
      acStack_98[0x10] = '\0';
      acStack_98[0x11] = '\0';
      acStack_98[0x12] = '\0';
      acStack_98[0x13] = '\0';
      acStack_98[0x14] = '\0';
      acStack_98[0x15] = '\0';
      acStack_98[0x16] = '\0';
      acStack_98[0x17] = '\0';
      func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
      lVar12 = 100;
      pcVar3 = "";
      pcVar11 = acStack_98;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110879c28,pcVar11,100);
      pcStack_80 = acStack_98;
      func_0x00010007e5dc(&pcStack_80);
      lVar1 = 0;
      do {
        if ((&cStack_49)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
  }
  pcVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_10532a3f8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar3;
  pcVar5 = pcVar11;
  lVar1 = lVar12;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar3);
  iVar10 = (int)pcVar5;
  if (pcVar4 != (char *)0x0) {
    plVar2 = *(long **)(pcVar4 + 8);
    pcVar9 = "";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = pcVar3;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      unaff_x24 = acStack_118;
      func_0x00010002b838(acStack_118,unaff_x23);
      pcVar4 = "true";
      if ((int)pcVar11 == 0) {
        pcVar4 = "false";
      }
      func_0x00010002b838(auStack_100,pcVar4);
      acStack_138[0] = '\0';
      acStack_138[1] = '\0';
      acStack_138[2] = '\0';
      acStack_138[3] = '\0';
      acStack_138[4] = '\0';
      acStack_138[5] = '\0';
      acStack_138[6] = '\0';
      acStack_138[7] = '\0';
      acStack_138[8] = '\0';
      acStack_138[9] = '\0';
      acStack_138[10] = '\0';
      acStack_138[0xb] = '\0';
      acStack_138[0xc] = '\0';
      acStack_138[0xd] = '\0';
      acStack_138[0xe] = '\0';
      acStack_138[0xf] = '\0';
      acStack_138[0x10] = '\0';
      acStack_138[0x11] = '\0';
      acStack_138[0x12] = '\0';
      acStack_138[0x13] = '\0';
      acStack_138[0x14] = '\0';
      acStack_138[0x15] = '\0';
      acStack_138[0x16] = '\0';
      acStack_138[0x17] = '\0';
      func_0x00010007e1e8(acStack_138,acStack_118,&lStack_e8,2);
      lVar1 = lVar12 * 100;
      pcVar9 = "";
      pcVar11 = acStack_138;
      pcVar5 = acStack_138;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110879c78,pcVar5,lVar1);
      pcStack_120 = pcVar11;
      func_0x00010007e5dc(&pcStack_120);
      lVar12 = 0;
      pcVar4 = acStack_118;
      do {
        if ((&cStack_e9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
        }
        iVar10 = (int)pcVar5;
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x30);
    }
  }
  pcVar5 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_10532a604;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar7 = (char **)0x0;
  pcStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  pcStack_170 = pcVar11;
  pcStack_168 = pcVar4;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar3;
  ppuStack_150 = &puStack_b0;
  if (pcVar6 != (char *)0x0) {
    plVar2 = *(long **)(pcVar6 + 8);
    pcVar3 = "true";
    if ((int)pcVar9 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_1b8,pcVar3);
    pcVar3 = "true";
    if (iVar10 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(alStack_1a0,pcVar3);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar9 = "\x01";
    pcVar4 = acStack_1d8;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110879cc8,acStack_1d8,lVar1);
    ppcVar7 = &pcStack_1c0;
    pcStack_1c0 = pcVar4;
    func_0x00010007e5dc();
    lVar1 = 0;
    do {
      if ((&cStack_189)[lVar1] < '\0') {
        ppcVar7 = *(char ***)((long)alStack_1a0 + lVar1);
        __ZdlPv();
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c0 = pcVar4;
  func_0x00010007e5dc(&pcStack_1c0);
  lVar1 = -0x30;
  pcVar3 = &cStack_189;
  do {
    if (*pcVar3 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar3 = pcVar3 + -0x18;
  } while (lVar1 != 0);
  ppcVar8 = ppcVar7;
  __Unwind_Resume();
  puStack_208 = (undefined1 *)&uStack_220;
  pcStack_1e8 = FUN_10532a788;
  if (ppcVar8 != (char **)0x0) {
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    lStack_200 = lVar1;
    ppcStack_1f8 = ppcVar7;
    pppuStack_1f0 = &ppuStack_150;
    (**(code **)(*(long *)ppcVar8[1] + 0x18))(ppcVar8[1],&UNK_110879d18,&uStack_220,pcVar9);
    func_0x00010007e5dc(&puStack_208);
  }
  return;
}



/* Entry: 1053269d8; end: 1053269e3; -[SCConfigMetricGraphene2 cofCacheUpdate:] */

/* WARNING: Removing unreachable block (ram,0x000105329ee4) */

void FUN_1053269d8(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  char *pcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  char *unaff_x21;
  char *unaff_x23;
  char *unaff_x24;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 *puStack_358;
  long lStack_350;
  char **ppcStack_348;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  char acStack_328 [24];
  char *pcStack_310;
  undefined1 auStack_308 [24];
  long alStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  char *pcStack_2b0;
  char *pcStack_2a8;
  undefined8 ***pppuStack_2a0;
  code *pcStack_298;
  char acStack_288 [24];
  char *pcStack_270;
  char acStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 ***pppuStack_200;
  code *pcStack_1f8;
  char acStack_1e8 [24];
  char *pcStack_1d0;
  undefined8 auStack_1c8 [2];
  char cStack_1b1;
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  char acStack_150 [24];
  undefined1 *puStack_138;
  undefined1 **appuStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  char acStack_e0 [24];
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  pcVar7 = (char *)0x1;
  pcVar8 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  pcVar9 = param_3;
  if (lVar1 != 0) {
    ppuVar2 = *(undefined1 ***)(lVar1 + 8);
    pcVar7 = "\x02";
    (**(code **)(*ppuVar2 + 0x28))();
    unaff_x21 = (undefined1 *)0x1;
    if ((int)ppuVar2 != 0) {
      plVar14 = *(long **)(lVar1 + 8);
      func_0x00010002b838(appuStack_50,"true");
      acStack_70[0] = '\0';
      acStack_70[1] = '\0';
      acStack_70[2] = '\0';
      acStack_70[3] = '\0';
      acStack_70[4] = '\0';
      acStack_70[5] = '\0';
      acStack_70[6] = '\0';
      acStack_70[7] = '\0';
      acStack_70[8] = '\0';
      acStack_70[9] = '\0';
      acStack_70[10] = '\0';
      acStack_70[0xb] = '\0';
      acStack_70[0xc] = '\0';
      acStack_70[0xd] = '\0';
      acStack_70[0xe] = '\0';
      acStack_70[0xf] = '\0';
      acStack_70[0x10] = '\0';
      acStack_70[0x11] = '\0';
      acStack_70[0x12] = '\0';
      acStack_70[0x13] = '\0';
      acStack_70[0x14] = '\0';
      acStack_70[0x15] = '\0';
      acStack_70[0x16] = '\0';
      acStack_70[0x17] = '\0';
      func_0x00010007e1e8(acStack_70,appuStack_50,&lStack_38,1);
      pcVar7 = "\x02";
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110879ae8,acStack_70,param_3);
      ppuVar2 = &puStack_58;
      puStack_58 = acStack_70;
      func_0x00010007e5dc();
      pcVar9 = pcVar8;
      param_4 = param_3;
      unaff_x21 = acStack_70;
      if (cStack_39 < '\0') {
        ppuVar2 = appuStack_50[0];
        __ZdlPv();
        pcVar9 = pcVar8;
        param_4 = param_3;
        unaff_x21 = acStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcVar11 = acStack_e0;
  puStack_80 = &stack0xfffffffffffffff0;
  pcStack_78 = FUN_105329fb8;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  pcVar8 = pcVar9;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar14 = (long *)ppuVar2[1];
    pcVar8 = "true";
    if ((int)pcVar7 == 0) {
      pcVar8 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar8);
    acStack_e0[0] = '\0';
    acStack_e0[1] = '\0';
    acStack_e0[2] = '\0';
    acStack_e0[3] = '\0';
    acStack_e0[4] = '\0';
    acStack_e0[5] = '\0';
    acStack_e0[6] = '\0';
    acStack_e0[7] = '\0';
    acStack_e0[8] = '\0';
    acStack_e0[9] = '\0';
    acStack_e0[10] = '\0';
    acStack_e0[0xb] = '\0';
    acStack_e0[0xc] = '\0';
    acStack_e0[0xd] = '\0';
    acStack_e0[0xe] = '\0';
    acStack_e0[0xf] = '\0';
    acStack_e0[0x10] = '\0';
    acStack_e0[0x11] = '\0';
    acStack_e0[0x12] = '\0';
    acStack_e0[0x13] = '\0';
    acStack_e0[0x14] = '\0';
    acStack_e0[0x15] = '\0';
    acStack_e0[0x16] = '\0';
    acStack_e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_e0,appuStack_c0,&lStack_a8,1);
    pcVar7 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110879b88,acStack_e0,pcVar9);
    ppuVar3 = &puStack_c8;
    puStack_c8 = acStack_e0;
    func_0x00010007e5dc();
    pcVar8 = pcVar11;
    param_4 = pcVar9;
    unaff_x21 = acStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      pcVar8 = pcVar11;
      param_4 = pcVar9;
      unaff_x21 = acStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  pcVar11 = acStack_150;
  ppuStack_f0 = &puStack_80;
  pcStack_e8 = FUN_10532a0d0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  pcVar9 = pcVar8;
  if (ppuVar3 != (undefined1 **)0x0) {
    plVar14 = (long *)ppuVar3[1];
    pcVar9 = "true";
    if ((int)pcVar7 == 0) {
      pcVar9 = "false";
    }
    func_0x00010002b838(appuStack_130,pcVar9);
    acStack_150[0] = '\0';
    acStack_150[1] = '\0';
    acStack_150[2] = '\0';
    acStack_150[3] = '\0';
    acStack_150[4] = '\0';
    acStack_150[5] = '\0';
    acStack_150[6] = '\0';
    acStack_150[7] = '\0';
    acStack_150[8] = '\0';
    acStack_150[9] = '\0';
    acStack_150[10] = '\0';
    acStack_150[0xb] = '\0';
    acStack_150[0xc] = '\0';
    acStack_150[0xd] = '\0';
    acStack_150[0xe] = '\0';
    acStack_150[0xf] = '\0';
    acStack_150[0x10] = '\0';
    acStack_150[0x11] = '\0';
    acStack_150[0x12] = '\0';
    acStack_150[0x13] = '\0';
    acStack_150[0x14] = '\0';
    acStack_150[0x15] = '\0';
    acStack_150[0x16] = '\0';
    acStack_150[0x17] = '\0';
    func_0x00010007e1e8(acStack_150,appuStack_130,&lStack_118,1);
    pcVar7 = "\x02";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110879bd8,acStack_150,pcVar8);
    ppuVar2 = &puStack_138;
    puStack_138 = acStack_150;
    func_0x00010007e5dc();
    pcVar9 = pcVar11;
    param_4 = pcVar8;
    unaff_x21 = acStack_150;
    if (cStack_119 < '\0') {
      ppuVar2 = appuStack_130[0];
      __ZdlPv();
      pcVar9 = pcVar11;
      param_4 = pcVar8;
      unaff_x21 = acStack_150;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  puStack_138 = unaff_x21;
  func_0x00010007e5dc(&puStack_138);
  if (cStack_119 < '\0') {
    __ZdlPv(appuStack_130[0]);
  }
  __Unwind_Resume();
  pcStack_158 = FUN_10532a1e8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  pcVar11 = pcVar9;
  pcVar12 = param_4;
  pppuStack_160 = &ppuStack_f0;
  _objc_retain(pcVar9);
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar14 = (long *)ppuVar2[1];
    pcVar8 = "";
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar14 = (long *)ppuVar2[1];
      pcVar8 = "true";
      if ((int)pcVar7 == 0) {
        pcVar8 = "false";
      }
      unaff_x23 = (char *)auStack_1c8;
      func_0x00010002b838(auStack_1c8,pcVar8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar7 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar7 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_1b0,pcVar7);
      acStack_1e8[0] = '\0';
      acStack_1e8[1] = '\0';
      acStack_1e8[2] = '\0';
      acStack_1e8[3] = '\0';
      acStack_1e8[4] = '\0';
      acStack_1e8[5] = '\0';
      acStack_1e8[6] = '\0';
      acStack_1e8[7] = '\0';
      acStack_1e8[8] = '\0';
      acStack_1e8[9] = '\0';
      acStack_1e8[10] = '\0';
      acStack_1e8[0xb] = '\0';
      acStack_1e8[0xc] = '\0';
      acStack_1e8[0xd] = '\0';
      acStack_1e8[0xe] = '\0';
      acStack_1e8[0xf] = '\0';
      acStack_1e8[0x10] = '\0';
      acStack_1e8[0x11] = '\0';
      acStack_1e8[0x12] = '\0';
      acStack_1e8[0x13] = '\0';
      acStack_1e8[0x14] = '\0';
      acStack_1e8[0x15] = '\0';
      acStack_1e8[0x16] = '\0';
      acStack_1e8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1e8,auStack_1c8,&lStack_198,2);
      pcVar12 = (char *)((long)param_4 * 100);
      pcVar8 = "";
      pcVar11 = acStack_1e8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110879c28,pcVar11,pcVar12);
      pcStack_1d0 = acStack_1e8;
      func_0x00010007e5dc(&pcStack_1d0);
      lVar1 = 0;
      do {
        if ((&cStack_199)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
  }
  pcVar7 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_1b1 < '\0') {
    __ZdlPv(auStack_1c8[0]);
  }
  _objc_release(pcVar9);
  __Unwind_Resume();
  pcStack_1f8 = FUN_10532a3f8;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar8;
  pcVar4 = pcVar11;
  pcVar13 = pcVar12;
  pppuStack_200 = &pppuStack_160;
  _objc_retain(pcVar8);
  iVar10 = (int)pcVar4;
  if (pcVar7 != (char *)0x0) {
    plVar14 = *(long **)(pcVar7 + 8);
    pcVar9 = "";
    (**(code **)(*plVar14 + 0x28))();
    if ((int)plVar14 != 0) {
      plVar14 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = pcVar8;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      unaff_x24 = acStack_268;
      func_0x00010002b838(acStack_268,unaff_x23);
      pcVar7 = "true";
      if ((int)pcVar11 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(auStack_250,pcVar7);
      acStack_288[0] = '\0';
      acStack_288[1] = '\0';
      acStack_288[2] = '\0';
      acStack_288[3] = '\0';
      acStack_288[4] = '\0';
      acStack_288[5] = '\0';
      acStack_288[6] = '\0';
      acStack_288[7] = '\0';
      acStack_288[8] = '\0';
      acStack_288[9] = '\0';
      acStack_288[10] = '\0';
      acStack_288[0xb] = '\0';
      acStack_288[0xc] = '\0';
      acStack_288[0xd] = '\0';
      acStack_288[0xe] = '\0';
      acStack_288[0xf] = '\0';
      acStack_288[0x10] = '\0';
      acStack_288[0x11] = '\0';
      acStack_288[0x12] = '\0';
      acStack_288[0x13] = '\0';
      acStack_288[0x14] = '\0';
      acStack_288[0x15] = '\0';
      acStack_288[0x16] = '\0';
      acStack_288[0x17] = '\0';
      func_0x00010007e1e8(acStack_288,acStack_268,&lStack_238,2);
      pcVar13 = (char *)((long)pcVar12 * 100);
      pcVar9 = "";
      pcVar11 = acStack_288;
      pcVar12 = acStack_288;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110879c78,pcVar12,pcVar13);
      pcStack_270 = pcVar11;
      func_0x00010007e5dc(&pcStack_270);
      lVar1 = 0;
      pcVar7 = acStack_268;
      do {
        if ((&cStack_239)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar1));
        }
        iVar10 = (int)pcVar12;
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
  }
  pcVar12 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  _objc_release(pcVar8);
  pcVar4 = pcVar12;
  __Unwind_Resume();
  pcStack_298 = FUN_10532a604;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar5 = (char **)0x0;
  pcStack_2d0 = unaff_x24;
  pcStack_2c8 = unaff_x23;
  pcStack_2c0 = pcVar11;
  pcStack_2b8 = pcVar7;
  pcStack_2b0 = pcVar12;
  pcStack_2a8 = pcVar8;
  pppuStack_2a0 = &pppuStack_200;
  if (pcVar4 != (char *)0x0) {
    plVar14 = *(long **)(pcVar4 + 8);
    pcVar7 = "true";
    if ((int)pcVar9 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_308,pcVar7);
    pcVar7 = "true";
    if (iVar10 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(alStack_2f0,pcVar7);
    acStack_328[0] = '\0';
    acStack_328[1] = '\0';
    acStack_328[2] = '\0';
    acStack_328[3] = '\0';
    acStack_328[4] = '\0';
    acStack_328[5] = '\0';
    acStack_328[6] = '\0';
    acStack_328[7] = '\0';
    acStack_328[8] = '\0';
    acStack_328[9] = '\0';
    acStack_328[10] = '\0';
    acStack_328[0xb] = '\0';
    acStack_328[0xc] = '\0';
    acStack_328[0xd] = '\0';
    acStack_328[0xe] = '\0';
    acStack_328[0xf] = '\0';
    acStack_328[0x10] = '\0';
    acStack_328[0x11] = '\0';
    acStack_328[0x12] = '\0';
    acStack_328[0x13] = '\0';
    acStack_328[0x14] = '\0';
    acStack_328[0x15] = '\0';
    acStack_328[0x16] = '\0';
    acStack_328[0x17] = '\0';
    func_0x00010007e1e8(acStack_328,auStack_308,&lStack_2d8,2);
    pcVar9 = "\x01";
    pcVar7 = acStack_328;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110879cc8,acStack_328,pcVar13);
    ppcVar5 = &pcStack_310;
    pcStack_310 = pcVar7;
    func_0x00010007e5dc();
    lVar1 = 0;
    do {
      if ((&cStack_2d9)[lVar1] < '\0') {
        ppcVar5 = *(char ***)((long)alStack_2f0 + lVar1);
        __ZdlPv();
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
    ___stack_chk_fail();
    pcStack_310 = pcVar7;
    func_0x00010007e5dc(&pcStack_310);
    lVar1 = -0x30;
    pcVar7 = &cStack_2d9;
    do {
      if (*pcVar7 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar7 + -0x17));
      }
      lVar1 = lVar1 + 0x18;
      pcVar7 = pcVar7 + -0x18;
    } while (lVar1 != 0);
    ppcVar6 = ppcVar5;
    __Unwind_Resume();
    puStack_358 = (undefined1 *)&uStack_370;
    pcStack_338 = FUN_10532a788;
    if (ppcVar6 != (char **)0x0) {
      uStack_370 = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      lStack_350 = lVar1;
      ppcStack_348 = ppcVar5;
      pppuStack_340 = &pppuStack_2a0;
      (**(code **)(*(long *)ppcVar6[1] + 0x18))(ppcVar6[1],&UNK_110879d18,&uStack_370,pcVar9);
      func_0x00010007e5dc(&puStack_358);
    }
    return;
  }
  return;
}



/* Entry: 1053269e4; end: 1053269f3; -[SCConfigMetricGraphene2 loginResponse:] */

void FUN_1053269e4(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  char *unaff_x21;
  char *unaff_x23;
  char *unaff_x24;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  long lStack_2e0;
  char **ppcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined1 auStack_298 [24];
  long alStack_280 [2];
  char cStack_269;
  long lStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  char acStack_1f8 [24];
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_178 [24];
  char *pcStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  char acStack_e0 [24];
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  pcVar8 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  pcVar3 = (char *)0x1;
  if (*(long *)(param_1 + 8) != 0) {
    plVar13 = *(long **)(*(long *)(param_1 + 8) + 8);
    pcVar3 = "true";
    if ((int)param_3 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar3);
    acStack_70[0] = '\0';
    acStack_70[1] = '\0';
    acStack_70[2] = '\0';
    acStack_70[3] = '\0';
    acStack_70[4] = '\0';
    acStack_70[5] = '\0';
    acStack_70[6] = '\0';
    acStack_70[7] = '\0';
    acStack_70[8] = '\0';
    acStack_70[9] = '\0';
    acStack_70[10] = '\0';
    acStack_70[0xb] = '\0';
    acStack_70[0xc] = '\0';
    acStack_70[0xd] = '\0';
    acStack_70[0xe] = '\0';
    acStack_70[0xf] = '\0';
    acStack_70[0x10] = '\0';
    acStack_70[0x11] = '\0';
    acStack_70[0x12] = '\0';
    acStack_70[0x13] = '\0';
    acStack_70[0x14] = '\0';
    acStack_70[0x15] = '\0';
    acStack_70[0x16] = '\0';
    acStack_70[0x17] = '\0';
    func_0x00010007e1e8(acStack_70,appuStack_50,&lStack_38,1);
    param_3 = "";
    param_4 = (char *)0x1;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110879b88,acStack_70,1);
    ppuVar1 = &puStack_58;
    puStack_58 = acStack_70;
    func_0x00010007e5dc();
    pcVar3 = pcVar8;
    unaff_x21 = acStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      pcVar3 = pcVar8;
      unaff_x21 = acStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcVar10 = acStack_e0;
  puStack_80 = &stack0xfffffffffffffff0;
  pcStack_78 = FUN_10532a0d0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  pcVar8 = pcVar3;
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar13 = (long *)ppuVar1[1];
    pcVar8 = "true";
    if ((int)param_3 == 0) {
      pcVar8 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar8);
    acStack_e0[0] = '\0';
    acStack_e0[1] = '\0';
    acStack_e0[2] = '\0';
    acStack_e0[3] = '\0';
    acStack_e0[4] = '\0';
    acStack_e0[5] = '\0';
    acStack_e0[6] = '\0';
    acStack_e0[7] = '\0';
    acStack_e0[8] = '\0';
    acStack_e0[9] = '\0';
    acStack_e0[10] = '\0';
    acStack_e0[0xb] = '\0';
    acStack_e0[0xc] = '\0';
    acStack_e0[0xd] = '\0';
    acStack_e0[0xe] = '\0';
    acStack_e0[0xf] = '\0';
    acStack_e0[0x10] = '\0';
    acStack_e0[0x11] = '\0';
    acStack_e0[0x12] = '\0';
    acStack_e0[0x13] = '\0';
    acStack_e0[0x14] = '\0';
    acStack_e0[0x15] = '\0';
    acStack_e0[0x16] = '\0';
    acStack_e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_e0,appuStack_c0,&lStack_a8,1);
    param_3 = "\x02";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110879bd8,acStack_e0,pcVar3);
    ppuVar2 = &puStack_c8;
    puStack_c8 = acStack_e0;
    func_0x00010007e5dc();
    pcVar8 = pcVar10;
    param_4 = pcVar3;
    unaff_x21 = acStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar2 = appuStack_c0[0];
      __ZdlPv();
      pcVar8 = pcVar10;
      param_4 = pcVar3;
      unaff_x21 = acStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  pcStack_e8 = FUN_10532a1e8;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  pcVar10 = pcVar8;
  pcVar11 = param_4;
  ppuStack_f0 = &puStack_80;
  _objc_retain(pcVar8);
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar13 = (long *)ppuVar2[1];
    pcVar3 = "";
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar13 = (long *)ppuVar2[1];
      pcVar3 = "true";
      if ((int)param_3 == 0) {
        pcVar3 = "false";
      }
      unaff_x23 = (char *)auStack_158;
      func_0x00010002b838(auStack_158,pcVar3);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar3 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_140,pcVar3);
      acStack_178[0] = '\0';
      acStack_178[1] = '\0';
      acStack_178[2] = '\0';
      acStack_178[3] = '\0';
      acStack_178[4] = '\0';
      acStack_178[5] = '\0';
      acStack_178[6] = '\0';
      acStack_178[7] = '\0';
      acStack_178[8] = '\0';
      acStack_178[9] = '\0';
      acStack_178[10] = '\0';
      acStack_178[0xb] = '\0';
      acStack_178[0xc] = '\0';
      acStack_178[0xd] = '\0';
      acStack_178[0xe] = '\0';
      acStack_178[0xf] = '\0';
      acStack_178[0x10] = '\0';
      acStack_178[0x11] = '\0';
      acStack_178[0x12] = '\0';
      acStack_178[0x13] = '\0';
      acStack_178[0x14] = '\0';
      acStack_178[0x15] = '\0';
      acStack_178[0x16] = '\0';
      acStack_178[0x17] = '\0';
      func_0x00010007e1e8(acStack_178,auStack_158,&lStack_128,2);
      pcVar11 = (char *)((long)param_4 * 100);
      pcVar3 = "";
      pcVar10 = acStack_178;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110879c28,pcVar10,pcVar11);
      pcStack_160 = acStack_178;
      func_0x00010007e5dc(&pcStack_160);
      lVar14 = 0;
      do {
        if ((&cStack_129)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  pcVar4 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_141 < '\0') {
    __ZdlPv(auStack_158[0]);
  }
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcStack_188 = FUN_10532a3f8;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar3;
  pcVar5 = pcVar10;
  pcVar12 = pcVar11;
  pppuStack_190 = &ppuStack_f0;
  _objc_retain(pcVar3);
  iVar9 = (int)pcVar5;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    pcVar8 = "";
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar13 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = pcVar3;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      unaff_x24 = acStack_1f8;
      func_0x00010002b838(acStack_1f8,unaff_x23);
      pcVar8 = "true";
      if ((int)pcVar10 == 0) {
        pcVar8 = "false";
      }
      func_0x00010002b838(auStack_1e0,pcVar8);
      acStack_218[0] = '\0';
      acStack_218[1] = '\0';
      acStack_218[2] = '\0';
      acStack_218[3] = '\0';
      acStack_218[4] = '\0';
      acStack_218[5] = '\0';
      acStack_218[6] = '\0';
      acStack_218[7] = '\0';
      acStack_218[8] = '\0';
      acStack_218[9] = '\0';
      acStack_218[10] = '\0';
      acStack_218[0xb] = '\0';
      acStack_218[0xc] = '\0';
      acStack_218[0xd] = '\0';
      acStack_218[0xe] = '\0';
      acStack_218[0xf] = '\0';
      acStack_218[0x10] = '\0';
      acStack_218[0x11] = '\0';
      acStack_218[0x12] = '\0';
      acStack_218[0x13] = '\0';
      acStack_218[0x14] = '\0';
      acStack_218[0x15] = '\0';
      acStack_218[0x16] = '\0';
      acStack_218[0x17] = '\0';
      func_0x00010007e1e8(acStack_218,acStack_1f8,&lStack_1c8,2);
      pcVar12 = (char *)((long)pcVar11 * 100);
      pcVar8 = "";
      pcVar10 = acStack_218;
      pcVar11 = acStack_218;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110879c78,pcVar11,pcVar12);
      pcStack_200 = pcVar10;
      func_0x00010007e5dc(&pcStack_200);
      lVar14 = 0;
      pcVar4 = acStack_1f8;
      do {
        if ((&cStack_1c9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
        }
        iVar9 = (int)pcVar11;
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
  }
  pcVar11 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar5 = pcVar11;
  __Unwind_Resume();
  pcStack_228 = FUN_10532a604;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar6 = (char **)0x0;
  pcStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  pcStack_250 = pcVar10;
  pcStack_248 = pcVar4;
  pcStack_240 = pcVar11;
  pcStack_238 = pcVar3;
  pppuStack_230 = &pppuStack_190;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    pcVar3 = "true";
    if ((int)pcVar8 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_298,pcVar3);
    pcVar3 = "true";
    if (iVar9 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(alStack_280,pcVar3);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    pcVar8 = "\x01";
    pcVar4 = acStack_2b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110879cc8,acStack_2b8,pcVar12);
    ppcVar6 = &pcStack_2a0;
    pcStack_2a0 = pcVar4;
    func_0x00010007e5dc();
    lVar14 = 0;
    do {
      if ((&cStack_269)[lVar14] < '\0') {
        ppcVar6 = *(char ***)((long)alStack_280 + lVar14);
        __ZdlPv();
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2a0 = pcVar4;
  func_0x00010007e5dc(&pcStack_2a0);
  lVar14 = -0x30;
  pcVar3 = &cStack_269;
  do {
    if (*pcVar3 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
    }
    lVar14 = lVar14 + 0x18;
    pcVar3 = pcVar3 + -0x18;
  } while (lVar14 != 0);
  ppcVar7 = ppcVar6;
  __Unwind_Resume();
  puStack_2e8 = (undefined1 *)&uStack_300;
  pcStack_2c8 = FUN_10532a788;
  if (ppcVar7 != (char **)0x0) {
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    lStack_2e0 = lVar14;
    ppcStack_2d8 = ppcVar6;
    pppuStack_2d0 = &pppuStack_230;
    (**(code **)(*(long *)ppcVar7[1] + 0x18))(ppcVar7[1],&UNK_110879d18,&uStack_300,pcVar8);
    func_0x00010007e5dc(&puStack_2e8);
  }
  return;
}



/* Entry: 1053269f4; end: 1053269ff; -[SCConfigMetricGraphene2 loginResponseHistogram:] */

/* WARNING: Removing unreachable block (ram,0x00010532a114) */

void FUN_1053269f4(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  char **ppcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  char *unaff_x21;
  char *unaff_x23;
  char *unaff_x24;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 *puStack_278;
  long lStack_270;
  char **ppcStack_268;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  char acStack_248 [24];
  char *pcStack_230;
  undefined1 auStack_228 [24];
  long alStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  char acStack_1a8 [24];
  char *pcStack_190;
  char acStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_108 [24];
  char *pcStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  pcVar5 = (char *)0x1;
  pcVar6 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  pcVar7 = param_3;
  if (*(long *)(param_1 + 8) != 0) {
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 8);
    func_0x00010002b838(appuStack_50,"true");
    acStack_70[0] = '\0';
    acStack_70[1] = '\0';
    acStack_70[2] = '\0';
    acStack_70[3] = '\0';
    acStack_70[4] = '\0';
    acStack_70[5] = '\0';
    acStack_70[6] = '\0';
    acStack_70[7] = '\0';
    acStack_70[8] = '\0';
    acStack_70[9] = '\0';
    acStack_70[10] = '\0';
    acStack_70[0xb] = '\0';
    acStack_70[0xc] = '\0';
    acStack_70[0xd] = '\0';
    acStack_70[0xe] = '\0';
    acStack_70[0xf] = '\0';
    acStack_70[0x10] = '\0';
    acStack_70[0x11] = '\0';
    acStack_70[0x12] = '\0';
    acStack_70[0x13] = '\0';
    acStack_70[0x14] = '\0';
    acStack_70[0x15] = '\0';
    acStack_70[0x16] = '\0';
    acStack_70[0x17] = '\0';
    func_0x00010007e1e8(acStack_70,appuStack_50,&lStack_38,1);
    pcVar5 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110879bd8,acStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = acStack_70;
    func_0x00010007e5dc();
    pcVar7 = pcVar6;
    param_4 = param_3;
    unaff_x21 = acStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      pcVar7 = pcVar6;
      param_4 = param_3;
      unaff_x21 = acStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_10532a1e8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar5;
  pcVar9 = pcVar7;
  pcVar10 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar7);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar1[1];
    pcVar6 = "";
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      plVar12 = (long *)ppuVar1[1];
      pcVar6 = "true";
      if ((int)pcVar5 == 0) {
        pcVar6 = "false";
      }
      unaff_x23 = (char *)auStack_e8;
      func_0x00010002b838(auStack_e8,pcVar6);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar5 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_d0,pcVar5);
      acStack_108[0] = '\0';
      acStack_108[1] = '\0';
      acStack_108[2] = '\0';
      acStack_108[3] = '\0';
      acStack_108[4] = '\0';
      acStack_108[5] = '\0';
      acStack_108[6] = '\0';
      acStack_108[7] = '\0';
      acStack_108[8] = '\0';
      acStack_108[9] = '\0';
      acStack_108[10] = '\0';
      acStack_108[0xb] = '\0';
      acStack_108[0xc] = '\0';
      acStack_108[0xd] = '\0';
      acStack_108[0xe] = '\0';
      acStack_108[0xf] = '\0';
      acStack_108[0x10] = '\0';
      acStack_108[0x11] = '\0';
      acStack_108[0x12] = '\0';
      acStack_108[0x13] = '\0';
      acStack_108[0x14] = '\0';
      acStack_108[0x15] = '\0';
      acStack_108[0x16] = '\0';
      acStack_108[0x17] = '\0';
      func_0x00010007e1e8(acStack_108,auStack_e8,&lStack_b8,2);
      pcVar10 = (char *)((long)param_4 * 100);
      pcVar6 = "";
      pcVar9 = acStack_108;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110879c28,pcVar9,pcVar10);
      pcStack_f0 = acStack_108;
      func_0x00010007e5dc(&pcStack_f0);
      lVar13 = 0;
      do {
        if ((&cStack_b9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  pcVar5 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcStack_118 = FUN_10532a3f8;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar2 = pcVar9;
  pcVar11 = pcVar10;
  ppuStack_120 = &puStack_80;
  _objc_retain(pcVar6);
  iVar8 = (int)pcVar2;
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    pcVar7 = "";
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      plVar12 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = pcVar6;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      unaff_x24 = acStack_188;
      func_0x00010002b838(acStack_188,unaff_x23);
      pcVar5 = "true";
      if ((int)pcVar9 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_170,pcVar5);
      acStack_1a8[0] = '\0';
      acStack_1a8[1] = '\0';
      acStack_1a8[2] = '\0';
      acStack_1a8[3] = '\0';
      acStack_1a8[4] = '\0';
      acStack_1a8[5] = '\0';
      acStack_1a8[6] = '\0';
      acStack_1a8[7] = '\0';
      acStack_1a8[8] = '\0';
      acStack_1a8[9] = '\0';
      acStack_1a8[10] = '\0';
      acStack_1a8[0xb] = '\0';
      acStack_1a8[0xc] = '\0';
      acStack_1a8[0xd] = '\0';
      acStack_1a8[0xe] = '\0';
      acStack_1a8[0xf] = '\0';
      acStack_1a8[0x10] = '\0';
      acStack_1a8[0x11] = '\0';
      acStack_1a8[0x12] = '\0';
      acStack_1a8[0x13] = '\0';
      acStack_1a8[0x14] = '\0';
      acStack_1a8[0x15] = '\0';
      acStack_1a8[0x16] = '\0';
      acStack_1a8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1a8,acStack_188,&lStack_158,2);
      pcVar11 = (char *)((long)pcVar10 * 100);
      pcVar7 = "";
      pcVar9 = acStack_1a8;
      pcVar10 = acStack_1a8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110879c78,pcVar10,pcVar11);
      pcStack_190 = pcVar9;
      func_0x00010007e5dc(&pcStack_190);
      lVar13 = 0;
      pcVar5 = acStack_188;
      do {
        if ((&cStack_159)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar13));
        }
        iVar8 = (int)pcVar10;
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  pcVar10 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar2 = pcVar10;
  __Unwind_Resume();
  pcStack_1b8 = FUN_10532a604;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar3 = (char **)0x0;
  pcStack_1f0 = unaff_x24;
  pcStack_1e8 = unaff_x23;
  pcStack_1e0 = pcVar9;
  pcStack_1d8 = pcVar5;
  pcStack_1d0 = pcVar10;
  pcStack_1c8 = pcVar6;
  pppuStack_1c0 = &ppuStack_120;
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    pcVar5 = "true";
    if ((int)pcVar7 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_228,pcVar5);
    pcVar5 = "true";
    if (iVar8 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(alStack_210,pcVar5);
    acStack_248[0] = '\0';
    acStack_248[1] = '\0';
    acStack_248[2] = '\0';
    acStack_248[3] = '\0';
    acStack_248[4] = '\0';
    acStack_248[5] = '\0';
    acStack_248[6] = '\0';
    acStack_248[7] = '\0';
    acStack_248[8] = '\0';
    acStack_248[9] = '\0';
    acStack_248[10] = '\0';
    acStack_248[0xb] = '\0';
    acStack_248[0xc] = '\0';
    acStack_248[0xd] = '\0';
    acStack_248[0xe] = '\0';
    acStack_248[0xf] = '\0';
    acStack_248[0x10] = '\0';
    acStack_248[0x11] = '\0';
    acStack_248[0x12] = '\0';
    acStack_248[0x13] = '\0';
    acStack_248[0x14] = '\0';
    acStack_248[0x15] = '\0';
    acStack_248[0x16] = '\0';
    acStack_248[0x17] = '\0';
    func_0x00010007e1e8(acStack_248,auStack_228,&lStack_1f8,2);
    pcVar7 = "\x01";
    pcVar5 = acStack_248;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110879cc8,acStack_248,pcVar11);
    ppcVar3 = &pcStack_230;
    pcStack_230 = pcVar5;
    func_0x00010007e5dc();
    lVar13 = 0;
    do {
      if ((&cStack_1f9)[lVar13] < '\0') {
        ppcVar3 = *(char ***)((long)alStack_210 + lVar13);
        __ZdlPv();
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
    ___stack_chk_fail();
    pcStack_230 = pcVar5;
    func_0x00010007e5dc(&pcStack_230);
    lVar13 = -0x30;
    pcVar5 = &cStack_1f9;
    do {
      if (*pcVar5 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar5 + -0x17));
      }
      lVar13 = lVar13 + 0x18;
      pcVar5 = pcVar5 + -0x18;
    } while (lVar13 != 0);
    ppcVar4 = ppcVar3;
    __Unwind_Resume();
    puStack_278 = (undefined1 *)&uStack_290;
    pcStack_258 = FUN_10532a788;
    if (ppcVar4 != (char **)0x0) {
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_280 = 0;
      lStack_270 = lVar13;
      ppcStack_268 = ppcVar3;
      pppuStack_260 = &pppuStack_1c0;
      (**(code **)(*(long *)ppcVar4[1] + 0x18))(ppcVar4[1],&UNK_110879d18,&uStack_290,pcVar7);
      func_0x00010007e5dc(&puStack_278);
    }
    return;
  }
  return;
}



/* Entry: 105326a00; end: 105326a87; -[SCConfigMetricGraphene2 cofSyncRequestFullSync:success:isPrelogin:duration:] */

/* WARNING: Removing unreachable block (ram,0x000105329b14) */
/* WARNING: Removing unreachable block (ram,0x000105328ab0) */
/* WARNING: Removing unreachable block (ram,0x000105328d24) */
/* WARNING: Removing unreachable block (ram,0x000105329da8) */

void FUN_105326a00(double param_1,long param_2,undefined8 param_3,long *****param_4,
                  long *****param_5,long *****param_6,long *****param_7)

{
  long lVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  char *pcVar5;
  long *****ppppplVar6;
  char *pcVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long *plVar17;
  long ****pppplVar18;
  long *****unaff_x21;
  char *pcVar19;
  char *pcVar20;
  long *****ppppplVar21;
  long *****unaff_x22;
  long *****unaff_x23;
  char *unaff_x24;
  char *pcVar22;
  char *unaff_x25;
  char *unaff_x26;
  long ***ppplStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined1 *puStack_a28;
  long ***appplStack_a20 [3];
  undefined1 auStack_a08 [24];
  long ***appplStack_9f0 [2];
  char cStack_9d9;
  long lStack_9d8;
  char *pcStack_9d0;
  long ***ppplStack_9c8;
  long ****pppplStack_9c0;
  long ****pppplStack_9b8;
  long ****pppplStack_9b0;
  long ****pppplStack_9a8;
  long ****pppplStack_9a0;
  long ****pppplStack_998;
  undefined8 ****ppppuStack_990;
  code *pcStack_988;
  long ***ppplStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined1 *puStack_968;
  long ***appplStack_960 [3];
  undefined1 auStack_948 [24];
  long ***appplStack_930 [2];
  char cStack_919;
  long lStack_918;
  char *pcStack_910;
  long ***ppplStack_908;
  long ****pppplStack_900;
  long ****pppplStack_8f8;
  long ****pppplStack_8f0;
  long ****pppplStack_8e8;
  long ****pppplStack_8e0;
  long ****pppplStack_8d8;
  undefined8 ****ppppuStack_8d0;
  code *pcStack_8c8;
  long ***ppplStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  long ****pppplStack_8a8;
  long ****apppplStack_8a0 [2];
  char cStack_889;
  long lStack_888;
  long ****pppplStack_880;
  long ****pppplStack_878;
  long ****pppplStack_870;
  long ****pppplStack_868;
  undefined8 ****ppppuStack_860;
  code *pcStack_858;
  long ***ppplStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  long ****pppplStack_838;
  long ****apppplStack_830 [2];
  char cStack_819;
  long lStack_818;
  long ****pppplStack_810;
  long ****pppplStack_808;
  long ****pppplStack_800;
  long ****pppplStack_7f8;
  undefined8 ****ppppuStack_7f0;
  code *pcStack_7e8;
  long ***ppplStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 *puStack_7c8;
  long ***appplStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  long ****pppplStack_7a0;
  long ****pppplStack_798;
  long ****pppplStack_790;
  long ***ppplStack_788;
  long ****pppplStack_780;
  long ****pppplStack_778;
  undefined8 ****ppppuStack_770;
  code *pcStack_768;
  long ***ppplStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long ****pppplStack_740;
  long ***appplStack_738 [3];
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  long ****pppplStack_700;
  long ****pppplStack_6f8;
  long ****pppplStack_6f0;
  long ***ppplStack_6e8;
  long ****pppplStack_6e0;
  long ****pppplStack_6d8;
  undefined8 ****ppppuStack_6d0;
  code *pcStack_6c8;
  long ***ppplStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  long ****pppplStack_6a0;
  long ***appplStack_698 [3];
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  long ****pppplStack_660;
  long ****pppplStack_658;
  long ****pppplStack_650;
  long ***ppplStack_648;
  long ****pppplStack_640;
  long ****pppplStack_638;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  long ***ppplStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  long ****pppplStack_600;
  long ***appplStack_5f8 [3];
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  long ****pppplStack_5c0;
  long ****pppplStack_5b8;
  long ****pppplStack_5b0;
  char *pcStack_5a8;
  long lStack_5a0;
  long ****pppplStack_598;
  undefined8 ****ppppuStack_590;
  code *pcStack_588;
  long ***ppplStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long ****pppplStack_568;
  long ***appplStack_560 [3];
  undefined1 auStack_548 [24];
  long alStack_530 [2];
  char cStack_519;
  long lStack_518;
  char *pcStack_510;
  long ***ppplStack_508;
  long ****pppplStack_500;
  long ****pppplStack_4f8;
  long ****pppplStack_4f0;
  long ****pppplStack_4e8;
  long ****pppplStack_4e0;
  long ****pppplStack_4d8;
  undefined8 ****ppppuStack_4d0;
  code *pcStack_4c8;
  long ***ppplStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  long ***appplStack_4a0 [3];
  undefined1 auStack_488 [24];
  long ***appplStack_470 [2];
  char cStack_459;
  long lStack_458;
  char *pcStack_450;
  long ***ppplStack_448;
  long ****pppplStack_440;
  long ****pppplStack_438;
  long ****pppplStack_430;
  long ****pppplStack_428;
  long ****pppplStack_420;
  long ****pppplStack_418;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  long ***ppplStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  long ***appplStack_3e0 [3];
  undefined1 auStack_3c8 [24];
  long ***appplStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  char *pcStack_390;
  long ***ppplStack_388;
  long ****pppplStack_380;
  long ****pppplStack_378;
  long ****pppplStack_370;
  char *pcStack_368;
  long lStack_360;
  long ****pppplStack_358;
  undefined1 ****ppppuStack_350;
  code *pcStack_348;
  long ***ppplStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long ****pppplStack_320;
  long ***appplStack_318 [3];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  long ***appplStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  char *pcStack_2b0;
  long ***ppplStack_2a8;
  long ****pppplStack_2a0;
  long ****pppplStack_298;
  long ****pppplStack_290;
  long ****pppplStack_288;
  long lStack_280;
  long ****pppplStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  long ***ppplStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long ****pppplStack_240;
  long ***appplStack_238 [3];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  long ***appplStack_1f0 [2];
  undefined1 uStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  long ***ppplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long ****pppplStack_168;
  long ***appplStack_160 [3];
  undefined1 auStack_148 [24];
  long ***appplStack_130 [2];
  undefined1 uStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long ***ppplStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long ****pppplStack_a8;
  long ***appplStack_a0 [3];
  undefined1 auStack_88 [24];
  long ***appplStack_70 [2];
  undefined1 uStack_59;
  long lStack_58;
  
  FUN_105327edc(*(undefined8 *)(param_2 + 8),param_4,param_6,param_5,1);
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    return;
  }
  param_1 = param_1 * 1000.0;
  ppppplVar16 = (long *****)(long)param_1;
  ppppplVar8 = (long *****)&ppplStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar2 = (long *****)0x0;
  ppppplVar21 = param_4;
  ppppplVar6 = param_6;
  ppppplVar4 = param_5;
  ppppplVar13 = ppppplVar16;
  if (lVar1 != 0) {
    ppppplVar2 = *(long ******)(lVar1 + 8);
    ppppplVar21 = (long *****)&UNK_110879598;
    (*(code *)(*ppppplVar2)[5])();
    unaff_x21 = param_5;
    unaff_x22 = param_4;
    unaff_x23 = param_6;
    if ((int)ppppplVar2 != 0) {
      plVar17 = *(long **)(lVar1 + 8);
      unaff_x24 = "false";
      unaff_x25 = "true";
      pcVar5 = unaff_x25;
      if ((int)param_4 == 0) {
        pcVar5 = unaff_x24;
      }
      func_0x00010002b838(appplStack_a0,pcVar5);
      pcVar5 = unaff_x25;
      if ((int)param_6 == 0) {
        pcVar5 = unaff_x24;
      }
      func_0x00010002b838(auStack_88,pcVar5);
      unaff_x23 = (long *****)appplStack_a0;
      unaff_x22 = (long *****)appplStack_70;
      pcVar5 = unaff_x25;
      if ((int)param_5 == 0) {
        pcVar5 = unaff_x24;
      }
      func_0x00010002b838(unaff_x22,pcVar5);
      ppplStack_c0 = (long ***)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x00010007e1e8(&ppplStack_c0,appplStack_a0,&lStack_58,3);
      ppppplVar21 = (long *****)&UNK_110879598;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      ppppplVar2 = &pppplStack_a8;
      pppplStack_a8 = &ppplStack_c0;
      func_0x00010007e5dc();
      lVar1 = 0;
      ppppplVar6 = ppppplVar8;
      ppppplVar4 = ppppplVar16;
      do {
        if ((char)(&uStack_59)[lVar1] < '\0') {
          ppppplVar2 = *(long ******)((long)appplStack_70 + lVar1);
          __ZdlPv();
        }
        lVar1 = lVar1 + -0x18;
        unaff_x21 = (long *****)&ppplStack_c0;
      } while (lVar1 != -0x48);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_a8 = (long ****)unaff_x21;
  func_0x00010007e5dc(&pppplStack_a8);
  lVar1 = -0x48;
  ppppplVar8 = (long *****)&uStack_59;
  do {
    ppppplVar16 = ppppplVar8 + -3;
    if (*(char *)ppppplVar8 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppplVar8 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    ppppplVar8 = ppppplVar16;
  } while (lVar1 != 0);
  __Unwind_Resume();
  ppppplVar9 = (long *****)&ppplStack_180;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_105328298;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar3 = (long *****)0x0;
  ppppplVar8 = ppppplVar21;
  ppppplVar14 = ppppplVar6;
  ppppplVar12 = ppppplVar4;
  ppppplVar15 = ppppplVar13;
  if (ppppplVar2 != (long *****)0x0) {
    ppppplVar3 = (long *****)ppppplVar2[1];
    ppppplVar8 = (long *****)&UNK_1108795e8;
    (*(code *)(*ppppplVar3)[5])();
    ppppplVar16 = ppppplVar4;
    unaff_x22 = ppppplVar21;
    unaff_x23 = ppppplVar6;
    if ((int)ppppplVar3 != 0) {
      pppplVar18 = ppppplVar2[1];
      unaff_x24 = "false";
      unaff_x25 = "true";
      pcVar5 = unaff_x25;
      if ((int)ppppplVar21 == 0) {
        pcVar5 = unaff_x24;
      }
      func_0x00010002b838(appplStack_160,pcVar5);
      pcVar5 = unaff_x25;
      if ((int)ppppplVar6 == 0) {
        pcVar5 = unaff_x24;
      }
      func_0x00010002b838(auStack_148,pcVar5);
      unaff_x23 = (long *****)appplStack_160;
      unaff_x22 = (long *****)appplStack_130;
      pcVar5 = unaff_x25;
      if ((int)ppppplVar4 == 0) {
        pcVar5 = unaff_x24;
      }
      func_0x00010002b838(unaff_x22,pcVar5);
      ppplStack_180 = (long ***)0x0;
      uStack_178 = 0;
      uStack_170 = 0;
      func_0x00010007e1e8(&ppplStack_180,appplStack_160,&lStack_118,3);
      ppppplVar12 = (long *****)((long)ppppplVar13 * 10);
      ppppplVar8 = (long *****)&UNK_1108795e8;
      (*(code *)(*pppplVar18)[3])(pppplVar18);
      ppppplVar3 = &pppplStack_168;
      pppplStack_168 = &ppplStack_180;
      func_0x00010007e5dc();
      lVar1 = 0;
      ppppplVar14 = ppppplVar9;
      do {
        if ((char)(&uStack_119)[lVar1] < '\0') {
          ppppplVar3 = *(long ******)((long)appplStack_130 + lVar1);
          __ZdlPv();
        }
        lVar1 = lVar1 + -0x18;
        ppppplVar16 = (long *****)&ppplStack_180;
      } while (lVar1 != -0x48);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_168 = (long ****)ppppplVar16;
  func_0x00010007e5dc(&pppplStack_168);
  lVar1 = -0x48;
  ppppplVar21 = (long *****)&uStack_119;
  do {
    ppppplVar2 = ppppplVar21 + -3;
    if (*(char *)ppppplVar21 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppplVar21 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    ppppplVar21 = ppppplVar2;
  } while (lVar1 != 0);
  __Unwind_Resume();
  ppuStack_190 = &puStack_d0;
  pcStack_188 = FUN_105328478;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar4 = (long *****)0x0;
  ppppplVar21 = ppppplVar8;
  ppppplVar6 = ppppplVar14;
  ppppplVar13 = ppppplVar12;
  ppppplVar16 = ppppplVar15;
  ppppplVar9 = param_7;
  if (ppppplVar3 != (long *****)0x0) {
    ppppplVar4 = (long *****)ppppplVar3[1];
    ppppplVar21 = (long *****)&UNK_110879638;
    (*(code *)(*ppppplVar4)[5])();
    ppppplVar2 = ppppplVar15;
    unaff_x22 = ppppplVar8;
    unaff_x23 = ppppplVar12;
    unaff_x24 = (char *)ppppplVar14;
    if ((int)ppppplVar4 != 0) {
      pppplVar18 = ppppplVar3[1];
      unaff_x25 = "false";
      unaff_x26 = "true";
      pcVar5 = unaff_x26;
      if ((int)ppppplVar8 == 0) {
        pcVar5 = unaff_x25;
      }
      func_0x00010002b838(appplStack_238,pcVar5);
      pcVar5 = unaff_x26;
      if ((int)ppppplVar14 == 0) {
        pcVar5 = unaff_x25;
      }
      func_0x00010002b838(auStack_220,pcVar5);
      unaff_x24 = (char *)appplStack_238;
      pcVar5 = unaff_x26;
      if ((int)ppppplVar12 == 0) {
        pcVar5 = unaff_x25;
      }
      func_0x00010002b838(auStack_208,pcVar5);
      unaff_x22 = (long *****)appplStack_1f0;
      pcVar5 = unaff_x26;
      if ((int)ppppplVar15 == 0) {
        pcVar5 = unaff_x25;
      }
      func_0x00010002b838(unaff_x22,pcVar5);
      ppplStack_258 = (long ***)0x0;
      uStack_250 = 0;
      uStack_248 = 0;
      func_0x00010007e1e8(&ppplStack_258,appplStack_238,&lStack_1d8,4);
      ppppplVar13 = (long *****)((long)param_7 * 10);
      ppppplVar21 = (long *****)&UNK_110879638;
      ppppplVar2 = (long *****)&ppplStack_258;
      ppppplVar6 = (long *****)&ppplStack_258;
      (*(code *)(*pppplVar18)[3])(pppplVar18);
      ppppplVar4 = &pppplStack_240;
      pppplStack_240 = (long ****)ppppplVar2;
      func_0x00010007e5dc();
      lVar1 = 0;
      do {
        if ((char)(&uStack_1d9)[lVar1] < '\0') {
          ppppplVar4 = *(long ******)((long)appplStack_1f0 + lVar1);
          __ZdlPv();
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_240 = (long ****)ppppplVar2;
  func_0x00010007e5dc(&pppplStack_240);
  lVar1 = -0x60;
  ppppplVar2 = (long *****)&uStack_1d9;
  do {
    ppppplVar8 = ppppplVar2 + -3;
    if (*(char *)ppppplVar2 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppplVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    ppppplVar2 = ppppplVar8;
  } while (lVar1 != 0);
  ppppplVar14 = ppppplVar4;
  __Unwind_Resume();
  pcStack_2b0 = unaff_x26;
  ppplStack_2a8 = (long ***)unaff_x25;
  pppplStack_2a0 = (long ****)unaff_x24;
  pppplStack_298 = (long ****)unaff_x23;
  pppplStack_290 = (long ****)unaff_x22;
  pppplStack_288 = (long ****)ppppplVar8;
  lStack_280 = lVar1;
  pppplStack_278 = (long ****)ppppplVar4;
  pppuStack_270 = &ppuStack_190;
  pcStack_268 = FUN_105328674;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar3 = (long *****)0x0;
  ppppplVar2 = ppppplVar21;
  ppppplVar4 = ppppplVar6;
  ppppplVar12 = ppppplVar13;
  ppppplVar15 = ppppplVar16;
  if (ppppplVar14 != (long *****)0x0) {
    ppppplVar3 = (long *****)ppppplVar14[1];
    ppppplVar2 = (long *****)&UNK_110879688;
    (*(code *)(*ppppplVar3)[5])();
    ppppplVar8 = ppppplVar16;
    unaff_x22 = ppppplVar21;
    unaff_x23 = ppppplVar13;
    unaff_x24 = (char *)ppppplVar6;
    if ((int)ppppplVar3 != 0) {
      pppplVar18 = ppppplVar14[1];
      unaff_x25 = "false";
      unaff_x26 = "true";
      pcVar5 = unaff_x26;
      if ((int)ppppplVar21 == 0) {
        pcVar5 = unaff_x25;
      }
      func_0x00010002b838(appplStack_318,pcVar5);
      pcVar5 = unaff_x26;
      if ((int)ppppplVar6 == 0) {
        pcVar5 = unaff_x25;
      }
      func_0x00010002b838(auStack_300,pcVar5);
      unaff_x24 = (char *)appplStack_318;
      pcVar5 = unaff_x26;
      if ((int)ppppplVar13 == 0) {
        pcVar5 = unaff_x25;
      }
      func_0x00010002b838(auStack_2e8,pcVar5);
      unaff_x22 = (long *****)appplStack_2d0;
      pcVar5 = unaff_x26;
      if ((int)ppppplVar16 == 0) {
        pcVar5 = unaff_x25;
      }
      func_0x00010002b838(unaff_x22,pcVar5);
      ppplStack_338 = (long ***)0x0;
      uStack_330 = 0;
      uStack_328 = 0;
      func_0x00010007e1e8(&ppplStack_338,appplStack_318,&lStack_2b8,4);
      ppppplVar2 = (long *****)&UNK_110879688;
      ppppplVar8 = (long *****)&ppplStack_338;
      ppppplVar4 = (long *****)&ppplStack_338;
      (*(code *)(*pppplVar18)[3])(pppplVar18);
      ppppplVar3 = &pppplStack_320;
      pppplStack_320 = (long ****)ppppplVar8;
      func_0x00010007e5dc();
      lVar1 = 0;
      ppppplVar12 = ppppplVar9;
      do {
        if ((&cStack_2b9)[lVar1] < '\0') {
          ppppplVar3 = *(long ******)((long)appplStack_2d0 + lVar1);
          __ZdlPv();
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_320 = (long ****)ppppplVar8;
  func_0x00010007e5dc(&pppplStack_320);
  lVar1 = -0x60;
  pcVar5 = &cStack_2b9;
  do {
    pcVar19 = pcVar5 + -0x18;
    if (*pcVar5 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar5 = pcVar19;
  } while (lVar1 != 0);
  ppppplVar6 = ppppplVar3;
  __Unwind_Resume();
  ppppplVar16 = (long *****)&ppplStack_400;
  pcStack_348 = FUN_10532886c;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar21 = ppppplVar2;
  ppppplVar13 = ppppplVar4;
  pcVar5 = (char *)ppppplVar12;
  ppppplVar8 = ppppplVar15;
  pcStack_390 = unaff_x26;
  ppplStack_388 = (long ***)unaff_x25;
  pppplStack_380 = (long ****)unaff_x24;
  pppplStack_378 = (long ****)unaff_x23;
  pppplStack_370 = (long ****)unaff_x22;
  pcStack_368 = pcVar19;
  lStack_360 = lVar1;
  pppplStack_358 = (long ****)ppppplVar3;
  ppppuStack_350 = &pppuStack_270;
  _objc_retain(ppppplVar2);
  _objc_retain(ppppplVar4);
  if (ppppplVar6 != (long *****)0x0) {
    pppplVar18 = ppppplVar6[1];
    _objc_retain(ppppplVar2);
    if (ppppplVar2 == (long *****)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)ppppplVar2;
      _objc_retainAutorelease(ppppplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar2);
    func_0x00010002b838(appplStack_3e0,pcVar5);
    _objc_retain(ppppplVar4);
    if (ppppplVar4 == (long *****)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(ppppplVar4);
      pcVar5 = (char *)ppppplVar4;
      func_0x00010bdc3520(ppppplVar4);
    }
    _objc_release(ppppplVar4);
    func_0x00010002b838(auStack_3c8,pcVar5);
    unaff_x25 = (char *)appplStack_3e0;
    unaff_x24 = (char *)appplStack_3b0;
    pcVar5 = "true";
    if ((int)ppppplVar12 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar5);
    ppplStack_400 = (long ***)0x0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&ppplStack_400,appplStack_3e0,&lStack_398,3);
    ppppplVar21 = (long *****)&UNK_1108796d8;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    puStack_3e8 = (undefined1 *)&ppplStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    lVar1 = 0;
    ppppplVar13 = ppppplVar16;
    pcVar5 = (char *)ppppplVar15;
    do {
      if ((&cStack_399)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)appplStack_3b0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      ppppplVar12 = (long *****)&ppplStack_400;
    } while (lVar1 != -0x48);
  }
  _objc_release(ppppplVar4);
  ppppplVar6 = ppppplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar4);
  pppplStack_430 = appplStack_3e0;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while ((long ****)unaff_x24 != pppplStack_430);
  _objc_release(ppppplVar4);
  _objc_release(ppppplVar2);
  ppppplVar14 = ppppplVar6;
  __Unwind_Resume();
  ppppplVar10 = (long *****)&ppplStack_4c0;
  pcStack_408 = FUN_105328ae0;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar16 = ppppplVar21;
  ppppplVar3 = ppppplVar13;
  ppppplVar15 = (long *****)pcVar5;
  ppppplVar9 = ppppplVar8;
  pcStack_450 = unaff_x26;
  ppplStack_448 = (long ***)unaff_x25;
  pppplStack_440 = (long ****)unaff_x24;
  pppplStack_438 = (long ****)ppppplVar12;
  pppplStack_428 = (long ****)ppppplVar6;
  pppplStack_420 = (long ****)ppppplVar4;
  pppplStack_418 = (long ****)ppppplVar2;
  ppppuStack_410 = &ppppuStack_350;
  _objc_retain(ppppplVar21);
  _objc_retain(ppppplVar13);
  if (ppppplVar14 != (long *****)0x0) {
    pppplVar18 = ppppplVar14[1];
    _objc_retain(ppppplVar21);
    if (ppppplVar21 == (long *****)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = (char *)ppppplVar21;
      _objc_retainAutorelease(ppppplVar21);
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar21);
    func_0x00010002b838(appplStack_4a0,pcVar19);
    _objc_retain(ppppplVar13);
    if (ppppplVar13 == (long *****)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(ppppplVar13);
      pcVar19 = (char *)ppppplVar13;
      func_0x00010bdc3520(ppppplVar13);
    }
    _objc_release(ppppplVar13);
    func_0x00010002b838(auStack_488,pcVar19);
    unaff_x25 = (char *)appplStack_4a0;
    unaff_x24 = (char *)appplStack_470;
    pcVar19 = "true";
    if ((int)pcVar5 == 0) {
      pcVar19 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar19);
    ppplStack_4c0 = (long ***)0x0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&ppplStack_4c0,appplStack_4a0,&lStack_458,3);
    ppppplVar16 = (long *****)&UNK_110879728;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    puStack_4a8 = (undefined1 *)&ppplStack_4c0;
    func_0x00010007e5dc(&puStack_4a8);
    lVar1 = 0;
    ppppplVar3 = ppppplVar10;
    ppppplVar15 = ppppplVar8;
    do {
      if ((&cStack_459)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)appplStack_470 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      pcVar5 = (char *)&ppplStack_4c0;
    } while (lVar1 != -0x48);
  }
  _objc_release(ppppplVar13);
  ppppplVar2 = ppppplVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar13);
  pppplStack_4f0 = appplStack_4a0;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while ((long ****)unaff_x24 != pppplStack_4f0);
  _objc_release(ppppplVar13);
  _objc_release(ppppplVar21);
  ppppplVar4 = ppppplVar2;
  __Unwind_Resume();
  ppppplVar12 = (long *****)&ppplStack_580;
  pcStack_4c8 = FUN_105328d54;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar6 = (long *****)0x0;
  ppppplVar8 = ppppplVar15;
  ppppplVar14 = (long *****)pppplStack_4f0;
  pcVar22 = unaff_x24;
  pcVar19 = unaff_x25;
  pcStack_510 = unaff_x26;
  ppplStack_508 = (long ***)unaff_x25;
  pppplStack_500 = (long ****)unaff_x24;
  pppplStack_4f8 = (long ****)pcVar5;
  pppplStack_4e8 = (long ****)ppppplVar2;
  pppplStack_4e0 = (long ****)ppppplVar13;
  pppplStack_4d8 = (long ****)ppppplVar21;
  ppppuStack_4d0 = &ppppuStack_410;
  if (ppppplVar4 != (long *****)0x0) {
    pppplVar18 = ppppplVar4[1];
    pcVar22 = "false";
    pcVar19 = "true";
    pcVar5 = pcVar19;
    if ((int)ppppplVar16 == 0) {
      pcVar5 = pcVar22;
    }
    ppppplVar21 = ppppplVar9;
    func_0x00010002b838(appplStack_560,pcVar5);
    pcVar5 = pcVar19;
    if ((int)ppppplVar3 == 0) {
      pcVar5 = pcVar22;
    }
    func_0x00010002b838(auStack_548,pcVar5);
    pcVar5 = (char *)appplStack_560;
    pcVar7 = pcVar19;
    if ((int)ppppplVar15 == 0) {
      pcVar7 = pcVar22;
    }
    func_0x00010002b838(alStack_530,pcVar7);
    ppplStack_580 = (long ***)0x0;
    uStack_578 = 0;
    uStack_570 = 0;
    func_0x00010007e1e8(&ppplStack_580,appplStack_560,&lStack_518,3);
    ppppplVar16 = (long *****)&UNK_110879778;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    ppppplVar6 = &pppplStack_568;
    pppplStack_568 = &ppplStack_580;
    func_0x00010007e5dc();
    lVar1 = 0;
    ppppplVar3 = ppppplVar12;
    ppppplVar8 = ppppplVar9;
    ppppplVar9 = ppppplVar21;
    do {
      if ((&cStack_519)[lVar1] < '\0') {
        ppppplVar6 = *(long ******)((long)alStack_530 + lVar1);
        __ZdlPv();
      }
      lVar1 = lVar1 + -0x18;
      ppppplVar2 = (long *****)&ppplStack_580;
      ppppplVar14 = ppppplVar15;
    } while (lVar1 != -0x48);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_568 = (long ****)ppppplVar2;
  func_0x00010007e5dc(&pppplStack_568);
  lVar1 = -0x48;
  pcVar7 = &cStack_519;
  do {
    pcVar20 = pcVar7 + -0x18;
    if (*pcVar7 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar7 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar7 = pcVar20;
  } while (lVar1 != 0);
  ppppplVar4 = ppppplVar6;
  __Unwind_Resume();
  pcStack_588 = FUN_105328f0c;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar21 = ppppplVar16;
  ppppplVar2 = ppppplVar3;
  ppppplVar13 = ppppplVar8;
  pppplStack_5c0 = (long ****)pcVar22;
  pppplStack_5b8 = (long ****)pcVar5;
  pppplStack_5b0 = (long ****)ppppplVar14;
  pcStack_5a8 = pcVar20;
  lStack_5a0 = lVar1;
  pppplStack_598 = (long ****)ppppplVar6;
  ppppuStack_590 = &ppppuStack_4d0;
  _objc_retain(ppppplVar16);
  pppplVar18 = (long ****)0x0;
  if (ppppplVar4 != (long *****)0x0) {
    pppplVar18 = ppppplVar4[1];
    _objc_retain(ppppplVar16);
    if (ppppplVar16 == (long *****)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)ppppplVar16;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar16);
    pcVar22 = (char *)appplStack_5f8;
    func_0x00010002b838(appplStack_5f8,pcVar5);
    pcVar7 = "true";
    if ((int)ppppplVar3 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_5e0,pcVar7);
    ppplStack_618 = (long ***)0x0;
    uStack_610 = 0;
    uStack_608 = 0;
    func_0x00010007e1e8(&ppplStack_618,appplStack_5f8,&lStack_5c8,2);
    ppppplVar21 = (long *****)&UNK_1108797c8;
    ppppplVar3 = (long *****)&ppplStack_618;
    ppppplVar2 = (long *****)&ppplStack_618;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    pppplStack_600 = (long ****)ppppplVar3;
    func_0x00010007e5dc(&pppplStack_600);
    lVar1 = 0;
    pppplVar18 = appplStack_5f8;
    ppppplVar13 = ppppplVar8;
    do {
      if ((&cStack_5c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppppplVar6 = ppppplVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar16);
  _objc_release(ppppplVar16);
  ppppplVar14 = ppppplVar6;
  __Unwind_Resume();
  pcStack_628 = FUN_1053290f4;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar4 = ppppplVar21;
  ppppplVar8 = ppppplVar2;
  ppppplVar12 = ppppplVar13;
  pppplStack_660 = (long ****)pcVar22;
  pppplStack_658 = (long ****)pcVar5;
  pppplStack_650 = (long ****)ppppplVar3;
  ppplStack_648 = (long ***)pppplVar18;
  pppplStack_640 = (long ****)ppppplVar6;
  pppplStack_638 = (long ****)ppppplVar16;
  ppppuStack_630 = &ppppuStack_590;
  _objc_retain(ppppplVar21);
  pppplVar18 = (long ****)0x0;
  if (ppppplVar14 != (long *****)0x0) {
    pppplVar18 = ppppplVar14[1];
    _objc_retain(ppppplVar21);
    if (ppppplVar21 == (long *****)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)ppppplVar21;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar21);
    pcVar22 = (char *)appplStack_698;
    func_0x00010002b838(appplStack_698,pcVar5);
    pcVar7 = "true";
    if ((int)ppppplVar2 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_680,pcVar7);
    ppplStack_6b8 = (long ***)0x0;
    uStack_6b0 = 0;
    uStack_6a8 = 0;
    func_0x00010007e1e8(&ppplStack_6b8,appplStack_698,&lStack_668,2);
    ppppplVar4 = (long *****)&UNK_110879818;
    ppppplVar2 = (long *****)&ppplStack_6b8;
    ppppplVar8 = (long *****)&ppplStack_6b8;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    pppplStack_6a0 = (long ****)ppppplVar2;
    func_0x00010007e5dc(&pppplStack_6a0);
    lVar1 = 0;
    pppplVar18 = appplStack_698;
    ppppplVar12 = ppppplVar13;
    do {
      if ((&cStack_669)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_680 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppppplVar6 = ppppplVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar21);
  _objc_release(ppppplVar21);
  ppppplVar3 = ppppplVar6;
  __Unwind_Resume();
  pcStack_6c8 = FUN_1053292dc;
  lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar13 = ppppplVar4;
  ppppplVar16 = ppppplVar8;
  ppppplVar14 = ppppplVar12;
  pppplStack_700 = (long ****)pcVar22;
  pppplStack_6f8 = (long ****)pcVar5;
  pppplStack_6f0 = (long ****)ppppplVar2;
  ppplStack_6e8 = (long ***)pppplVar18;
  pppplStack_6e0 = (long ****)ppppplVar6;
  pppplStack_6d8 = (long ****)ppppplVar21;
  ppppuStack_6d0 = &ppppuStack_630;
  _objc_retain(ppppplVar4);
  pppplVar18 = (long ****)0x0;
  if (ppppplVar3 != (long *****)0x0) {
    pppplVar18 = ppppplVar3[1];
    _objc_retain(ppppplVar4);
    if (ppppplVar4 == (long *****)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)ppppplVar4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar4);
    pcVar22 = (char *)appplStack_738;
    func_0x00010002b838(appplStack_738,pcVar5);
    pcVar7 = "true";
    if ((int)ppppplVar8 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_720,pcVar7);
    ppplStack_758 = (long ***)0x0;
    uStack_750 = 0;
    uStack_748 = 0;
    func_0x00010007e1e8(&ppplStack_758,appplStack_738,&lStack_708,2);
    ppppplVar13 = (long *****)&UNK_110879868;
    ppppplVar8 = (long *****)&ppplStack_758;
    ppppplVar16 = (long *****)&ppplStack_758;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    pppplStack_740 = (long ****)ppppplVar8;
    func_0x00010007e5dc(&pppplStack_740);
    lVar1 = 0;
    pppplVar18 = appplStack_738;
    ppppplVar14 = ppppplVar12;
    do {
      if ((&cStack_709)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_720 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppppplVar21 = ppppplVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar4);
  _objc_release(ppppplVar4);
  ppppplVar6 = ppppplVar21;
  __Unwind_Resume();
  ppppplVar12 = (long *****)&ppplStack_7e0;
  pcStack_768 = FUN_1053294c4;
  lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar2 = ppppplVar13;
  ppppplVar3 = ppppplVar16;
  pppplStack_7a0 = (long ****)pcVar22;
  pppplStack_798 = (long ****)pcVar5;
  pppplStack_790 = (long ****)ppppplVar8;
  ppplStack_788 = (long ***)pppplVar18;
  pppplStack_780 = (long ****)ppppplVar21;
  pppplStack_778 = (long ****)ppppplVar4;
  ppppuStack_770 = &ppppuStack_6d0;
  _objc_retain(ppppplVar13);
  ppppplVar21 = (long *****)0x0;
  if (ppppplVar6 != (long *****)0x0) {
    ppppplVar21 = (long *****)ppppplVar6[1];
    _objc_retain(ppppplVar13);
    if (ppppplVar13 == (long *****)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)ppppplVar13;
      _objc_retainAutorelease(ppppplVar13);
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar13);
    pcVar5 = (char *)appplStack_7c0;
    func_0x00010002b838(appplStack_7c0,pcVar7);
    ppplStack_7e0 = (long ***)0x0;
    uStack_7d8 = 0;
    uStack_7d0 = 0;
    func_0x00010007e1e8(&ppplStack_7e0,appplStack_7c0,&lStack_7a8,1);
    ppppplVar2 = (long *****)&UNK_1108798b8;
    (*(code *)(*ppppplVar21)[3])(ppppplVar21);
    puStack_7c8 = (undefined1 *)&ppplStack_7e0;
    func_0x00010007e5dc(&puStack_7c8);
    ppppplVar3 = ppppplVar12;
    ppppplVar14 = ppppplVar16;
    ppppplVar8 = (long *****)&ppplStack_7e0;
    if (cStack_7a9 < '\0') {
      __ZdlPv(appplStack_7c0[0]);
      ppppplVar3 = ppppplVar12;
      ppppplVar14 = ppppplVar16;
      ppppplVar8 = (long *****)&ppplStack_7e0;
    }
  }
  ppppplVar6 = ppppplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7a8) {
    ___stack_chk_fail();
    _objc_release(ppppplVar13);
    _objc_release(ppppplVar13);
    ppppplVar12 = ppppplVar6;
    __Unwind_Resume();
    ppppplVar10 = (long *****)&ppplStack_850;
    pcStack_7e8 = FUN_105329638;
    lStack_818 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppplVar16 = ppppplVar12;
    ppppplVar4 = ppppplVar2;
    ppppplVar15 = ppppplVar3;
    pppplStack_810 = (long ****)ppppplVar8;
    pppplStack_808 = (long ****)ppppplVar21;
    pppplStack_800 = (long ****)ppppplVar6;
    pppplStack_7f8 = (long ****)ppppplVar13;
    ppppuStack_7f0 = &ppppuStack_770;
    if (ppppplVar12 != (long *****)0x0) {
      ppppplVar16 = (long *****)ppppplVar12[1];
      ppppplVar4 = (long *****)&UNK_110879908;
      (*(code *)(*ppppplVar16)[5])();
      ppppplVar6 = ppppplVar12;
      ppppplVar21 = ppppplVar2;
      if ((int)ppppplVar16 != 0) {
        ppppplVar6 = (long *****)ppppplVar12[1];
        pcVar7 = "true";
        if ((int)ppppplVar2 == 0) {
          pcVar7 = "false";
        }
        func_0x00010002b838(apppplStack_830,pcVar7);
        ppplStack_850 = (long ***)0x0;
        uStack_848 = 0;
        uStack_840 = 0;
        func_0x00010007e1e8(&ppplStack_850,apppplStack_830,&lStack_818,1);
        ppppplVar14 = (long *****)((long)ppppplVar3 * 10);
        ppppplVar4 = (long *****)&UNK_110879908;
        (*(code *)(*ppppplVar6)[3])(ppppplVar6);
        ppppplVar16 = &pppplStack_838;
        pppplStack_838 = &ppplStack_850;
        func_0x00010007e5dc();
        ppppplVar15 = ppppplVar10;
        ppppplVar21 = (long *****)&ppplStack_850;
        if (cStack_819 < '\0') {
          ppppplVar16 = (long *****)apppplStack_830[0];
          __ZdlPv();
          ppppplVar15 = ppppplVar10;
          ppppplVar21 = (long *****)&ppplStack_850;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_818) {
      return;
    }
    ___stack_chk_fail();
    pppplStack_838 = (long ****)ppppplVar21;
    func_0x00010007e5dc(&pppplStack_838);
    if (cStack_819 < '\0') {
      __ZdlPv(apppplStack_830[0]);
    }
    ppppplVar3 = ppppplVar16;
    __Unwind_Resume();
    ppppplVar10 = (long *****)&ppplStack_8c0;
    pcStack_858 = FUN_105329778;
    lStack_888 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppplVar13 = (long *****)0x0;
    ppppplVar2 = ppppplVar4;
    ppppplVar12 = ppppplVar15;
    pppplStack_880 = (long ****)ppppplVar8;
    pppplStack_878 = (long ****)ppppplVar21;
    pppplStack_870 = (long ****)ppppplVar6;
    pppplStack_868 = (long ****)ppppplVar16;
    ppppuStack_860 = &ppppuStack_7f0;
    if (ppppplVar3 != (long *****)0x0) {
      ppppplVar13 = (long *****)ppppplVar3[1];
      ppppplVar2 = (long *****)&UNK_110879958;
      (*(code *)(*ppppplVar13)[5])();
      ppppplVar6 = ppppplVar3;
      ppppplVar21 = ppppplVar4;
      if ((int)ppppplVar13 != 0) {
        ppppplVar6 = (long *****)ppppplVar3[1];
        pcVar7 = "true";
        if ((int)ppppplVar4 == 0) {
          pcVar7 = "false";
        }
        func_0x00010002b838(apppplStack_8a0,pcVar7);
        ppplStack_8c0 = (long ***)0x0;
        uStack_8b8 = 0;
        uStack_8b0 = 0;
        func_0x00010007e1e8(&ppplStack_8c0,apppplStack_8a0,&lStack_888,1);
        ppppplVar2 = (long *****)&UNK_110879958;
        (*(code *)(*ppppplVar6)[3])(ppppplVar6);
        ppppplVar13 = &pppplStack_8a8;
        pppplStack_8a8 = &ppplStack_8c0;
        func_0x00010007e5dc();
        ppppplVar12 = ppppplVar10;
        ppppplVar14 = ppppplVar15;
        ppppplVar21 = (long *****)&ppplStack_8c0;
        if (cStack_889 < '\0') {
          ppppplVar13 = (long *****)apppplStack_8a0[0];
          __ZdlPv();
          ppppplVar12 = ppppplVar10;
          ppppplVar14 = ppppplVar15;
          ppppplVar21 = (long *****)&ppplStack_8c0;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_888) {
      return;
    }
    ___stack_chk_fail();
    pppplStack_8a8 = (long ****)ppppplVar21;
    func_0x00010007e5dc(&pppplStack_8a8);
    if (cStack_889 < '\0') {
      __ZdlPv(apppplStack_8a0[0]);
    }
    ppppplVar16 = ppppplVar13;
    __Unwind_Resume();
    ppppplVar11 = (long *****)&ppplStack_980;
    pcStack_8c8 = FUN_1053298b4;
    lStack_918 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppplVar4 = ppppplVar2;
    ppppplVar3 = ppppplVar12;
    ppppplVar15 = ppppplVar14;
    ppppplVar10 = ppppplVar9;
    pcStack_910 = unaff_x26;
    ppplStack_908 = (long ***)pcVar19;
    pppplStack_900 = (long ****)pcVar22;
    pppplStack_8f8 = (long ****)pcVar5;
    pppplStack_8f0 = (long ****)ppppplVar8;
    pppplStack_8e8 = (long ****)ppppplVar21;
    pppplStack_8e0 = (long ****)ppppplVar6;
    pppplStack_8d8 = (long ****)ppppplVar13;
    ppppuStack_8d0 = &ppppuStack_860;
    _objc_retain(ppppplVar2);
    _objc_retain(ppppplVar12);
    if (ppppplVar16 != (long *****)0x0) {
      pppplVar18 = ppppplVar16[1];
      ppppplVar4 = (long *****)&UNK_1108799a8;
      (*(code *)(*pppplVar18)[5])();
      if ((int)pppplVar18 != 0) {
        pppplVar18 = ppppplVar16[1];
        _objc_retain(ppppplVar2);
        if (ppppplVar2 == (long *****)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)ppppplVar2;
          _objc_retainAutorelease(ppppplVar2);
          func_0x00010bdc3520();
        }
        _objc_release(ppppplVar2);
        func_0x00010002b838(appplStack_960,pcVar5);
        _objc_retain(ppppplVar12);
        if (ppppplVar12 == (long *****)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(ppppplVar12);
          pcVar5 = (char *)ppppplVar12;
          func_0x00010bdc3520(ppppplVar12);
        }
        _objc_release(ppppplVar12);
        func_0x00010002b838(auStack_948,pcVar5);
        pcVar19 = (char *)appplStack_960;
        pcVar22 = (char *)appplStack_930;
        pcVar5 = "true";
        if ((int)ppppplVar14 == 0) {
          pcVar5 = "false";
        }
        func_0x00010002b838(pcVar22,pcVar5);
        ppplStack_980 = (long ***)0x0;
        uStack_978 = 0;
        uStack_970 = 0;
        func_0x00010007e1e8(&ppplStack_980,appplStack_960,&lStack_918,3);
        ppppplVar15 = (long *****)((long)ppppplVar9 * 10);
        ppppplVar4 = (long *****)&UNK_1108799a8;
        (*(code *)(*pppplVar18)[3])(pppplVar18);
        puStack_968 = (undefined1 *)&ppplStack_980;
        func_0x00010007e5dc(&puStack_968);
        lVar1 = 0;
        ppppplVar3 = ppppplVar11;
        do {
          if ((&cStack_919)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)appplStack_930 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
          ppppplVar14 = (long *****)&ppplStack_980;
        } while (lVar1 != -0x48);
      }
    }
    _objc_release(ppppplVar12);
    ppppplVar21 = ppppplVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_918) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppppplVar12);
    pppplStack_9b0 = appplStack_960;
    do {
      pcVar22 = (char *)((long)pcVar22 + -0x18);
    } while ((long ****)pcVar22 != pppplStack_9b0);
    _objc_release(ppppplVar12);
    _objc_release(ppppplVar2);
    ppppplVar13 = ppppplVar21;
    __Unwind_Resume();
    ppppplVar9 = (long *****)&ppplStack_a40;
    pcStack_988 = FUN_105329b4c;
    lStack_9d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppplVar6 = ppppplVar4;
    ppppplVar8 = ppppplVar3;
    ppppplVar16 = ppppplVar15;
    pcStack_9d0 = unaff_x26;
    ppplStack_9c8 = (long ***)pcVar19;
    pppplStack_9c0 = (long ****)pcVar22;
    pppplStack_9b8 = (long ****)ppppplVar14;
    pppplStack_9a8 = (long ****)ppppplVar21;
    pppplStack_9a0 = (long ****)ppppplVar12;
    pppplStack_998 = (long ****)ppppplVar2;
    ppppuStack_990 = &ppppuStack_8d0;
    _objc_retain(ppppplVar4);
    _objc_retain(ppppplVar3);
    if (ppppplVar13 != (long *****)0x0) {
      pppplVar18 = ppppplVar13[1];
      ppppplVar6 = (long *****)&UNK_1108799f8;
      (*(code *)(*pppplVar18)[5])(pppplVar18,&UNK_1108799f8);
      if ((int)pppplVar18 != 0) {
        pppplVar18 = ppppplVar13[1];
        _objc_retain(ppppplVar4);
        if (ppppplVar4 == (long *****)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)ppppplVar4;
          _objc_retainAutorelease(ppppplVar4);
          func_0x00010bdc3520();
        }
        _objc_release(ppppplVar4);
        func_0x00010002b838(appplStack_a20,pcVar5);
        _objc_retain(ppppplVar3);
        if (ppppplVar3 == (long *****)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(ppppplVar3);
          pcVar5 = (char *)ppppplVar3;
          func_0x00010bdc3520(ppppplVar3);
        }
        _objc_release(ppppplVar3);
        func_0x00010002b838(auStack_a08,pcVar5);
        pcVar22 = (char *)appplStack_9f0;
        pcVar5 = "true";
        if ((int)ppppplVar15 == 0) {
          pcVar5 = "false";
        }
        func_0x00010002b838(pcVar22,pcVar5);
        ppplStack_a40 = (long ***)0x0;
        uStack_a38 = 0;
        uStack_a30 = 0;
        func_0x00010007e1e8(&ppplStack_a40,appplStack_a20,&lStack_9d8,3);
        ppppplVar6 = (long *****)&UNK_1108799f8;
        (*(code *)(*pppplVar18)[3])(pppplVar18,&UNK_1108799f8,&ppplStack_a40,ppppplVar10);
        puStack_a28 = (undefined1 *)&ppplStack_a40;
        func_0x00010007e5dc(&puStack_a28);
        lVar1 = 0;
        ppppplVar8 = ppppplVar9;
        ppppplVar16 = ppppplVar10;
        do {
          if ((&cStack_9d9)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)appplStack_9f0 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x48);
      }
    }
    _objc_release(ppppplVar3);
    ppppplVar21 = ppppplVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_9d8) {
      ___stack_chk_fail();
      _objc_release(ppppplVar3);
      do {
        pcVar22 = (char *)((long)pcVar22 + -0x18);
      } while ((long ****)pcVar22 != appplStack_a20);
      _objc_release(ppppplVar3);
      _objc_release(ppppplVar4);
      __Unwind_Resume();
      _objc_retain(ppppplVar6);
      _objc_retain(ppppplVar8);
      if (ppppplVar21 != (long *****)0x0) {
        FUN_105329b4c(ppppplVar21,ppppplVar6,ppppplVar8,ppppplVar16,(long)(param_1 * 1000.0));
      }
      _objc_release(ppppplVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppppplVar6);
      return;
    }
    return;
  }
  return;
}



/* Entry: 105326a88; end: 105326a9f; -[SCConfigMetricGraphene2 cofSyncRequestServerErrorCode:isFullSync:] */

/* WARNING: Removing unreachable block (ram,0x000105329b14) */
/* WARNING: Removing unreachable block (ram,0x000105328ab0) */
/* WARNING: Removing unreachable block (ram,0x00010532892c) */
/* WARNING: Removing unreachable block (ram,0x000105328d24) */
/* WARNING: Removing unreachable block (ram,0x000105329da8) */

void FUN_105326a88(double param_1,long param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5)

{
  long lVar1;
  char *pcVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  char *pcVar18;
  undefined **ppuVar19;
  long *plVar20;
  char *unaff_x24;
  undefined *puStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined *apuStack_6e0 [3];
  undefined1 auStack_6c8 [24];
  undefined *apuStack_6b0 [2];
  char cStack_699;
  long lStack_698;
  undefined *puStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 *puStack_628;
  undefined *apuStack_620 [3];
  undefined1 auStack_608 [24];
  undefined *apuStack_5f0 [2];
  char cStack_5d9;
  long lStack_5d8;
  undefined *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined **ppuStack_568;
  undefined ***apppuStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined ***pppuStack_528;
  undefined8 ****ppppuStack_520;
  code *pcStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined **ppuStack_4f8;
  undefined ***apppuStack_4f0 [2];
  char cStack_4d9;
  long lStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined8 ****ppppuStack_4b0;
  code *pcStack_4a8;
  undefined *puStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined8 ****ppppuStack_430;
  code *pcStack_428;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined **ppuStack_400;
  undefined *apuStack_3f8 [3];
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined **ppuStack_360;
  undefined *apuStack_358 [3];
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined1 ****ppppuStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined *apuStack_2b8 [3];
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  char *pcStack_268;
  long lStack_260;
  undefined ***pppuStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined **ppuStack_228;
  undefined *apuStack_220 [3];
  undefined1 auStack_208 [24];
  long alStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined *apuStack_160 [3];
  undefined1 auStack_148 [24];
  undefined *apuStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined *apuStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar19 = &PTR____CFConstantStringClassReference_110dab258;
  lVar1 = *(long *)(param_2 + 8);
  ppuVar16 = (undefined **)0x1;
  ppuVar15 = &puStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar17 = param_4;
  ppuVar4 = ppuVar19;
  pcVar12 = (char *)param_5;
  _objc_retain(param_4);
  _objc_retain(&PTR____CFConstantStringClassReference_110dab258);
  if (lVar1 != 0) {
    plVar20 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (undefined **)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(apuStack_a0,pcVar12);
    _objc_retain(&PTR____CFConstantStringClassReference_110dab258);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dab258);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110dab258);
    _objc_release(&PTR____CFConstantStringClassReference_110dab258);
    func_0x00010002b838(auStack_88,ppuVar19);
    unaff_x24 = (char *)apuStack_70;
    pcVar12 = "true";
    if ((int)param_5 == 0) {
      pcVar12 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar12);
    puStack_c0 = (undefined *)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&puStack_c0,apuStack_a0,&lStack_58,3);
    ppuVar17 = (undefined **)&UNK_1108796d8;
    pcVar12 = (char *)0x1;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_a8 = (undefined1 *)&puStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar1 = 0;
    ppuVar4 = ppuVar15;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)apuStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x48);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dab258);
  ppuVar19 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dab258);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while ((undefined **)unaff_x24 != apuStack_a0);
  _objc_release(&PTR____CFConstantStringClassReference_110dab258);
  _objc_release(param_4);
  __Unwind_Resume();
  ppuVar9 = &puStack_180;
  pcStack_c8 = FUN_105328ae0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = ppuVar17;
  ppuVar6 = ppuVar4;
  ppuVar5 = (undefined **)pcVar12;
  ppuVar13 = ppuVar16;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  _objc_retain(ppuVar4);
  if (ppuVar19 != (undefined **)0x0) {
    plVar20 = (long *)ppuVar19[1];
    _objc_retain(ppuVar17);
    if (ppuVar17 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar17;
      _objc_retainAutorelease(ppuVar17);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar17);
    func_0x00010002b838(apuStack_160,pcVar2);
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar4);
      pcVar2 = (char *)ppuVar4;
      func_0x00010bdc3520(ppuVar4);
    }
    _objc_release(ppuVar4);
    func_0x00010002b838(auStack_148,pcVar2);
    unaff_x24 = (char *)apuStack_130;
    pcVar2 = "true";
    if ((int)pcVar12 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&puStack_180,apuStack_160,&lStack_118,3);
    ppuVar15 = (undefined **)&UNK_110879728;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    puStack_168 = (undefined1 *)&puStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar1 = 0;
    ppuVar6 = ppuVar9;
    ppuVar5 = ppuVar16;
    do {
      if ((&cStack_119)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)apuStack_130 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      pcVar12 = (char *)&puStack_180;
    } while (lVar1 != -0x48);
  }
  _objc_release(ppuVar4);
  ppuVar19 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while ((undefined **)unaff_x24 != apuStack_160);
  _objc_release(ppuVar4);
  _objc_release(ppuVar17);
  ppuVar17 = ppuVar19;
  __Unwind_Resume();
  ppuVar9 = &puStack_240;
  pcStack_188 = FUN_105328d54;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)0x0;
  ppuVar4 = ppuVar5;
  ppuVar16 = apuStack_160;
  ppuStack_190 = &puStack_d0;
  if (ppuVar17 != (undefined **)0x0) {
    plVar20 = (long *)ppuVar17[1];
    unaff_x24 = "false";
    pcVar2 = "true";
    pcVar12 = pcVar2;
    if ((int)ppuVar15 == 0) {
      pcVar12 = unaff_x24;
    }
    ppuVar19 = ppuVar13;
    func_0x00010002b838(apuStack_220,pcVar12);
    pcVar12 = pcVar2;
    if ((int)ppuVar6 == 0) {
      pcVar12 = unaff_x24;
    }
    func_0x00010002b838(auStack_208,pcVar12);
    pcVar12 = (char *)apuStack_220;
    if ((int)ppuVar5 == 0) {
      pcVar2 = unaff_x24;
    }
    func_0x00010002b838(alStack_1f0,pcVar2);
    puStack_240 = (undefined *)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&puStack_240,apuStack_220,&lStack_1d8,3);
    ppuVar15 = (undefined **)&UNK_110879778;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    pppuVar3 = &ppuStack_228;
    ppuStack_228 = &puStack_240;
    func_0x00010007e5dc();
    lVar1 = 0;
    ppuVar6 = ppuVar9;
    ppuVar4 = ppuVar13;
    ppuVar13 = ppuVar19;
    do {
      if ((&cStack_1d9)[lVar1] < '\0') {
        pppuVar3 = *(undefined ****)((long)alStack_1f0 + lVar1);
        __ZdlPv();
      }
      lVar1 = lVar1 + -0x18;
      ppuVar19 = &puStack_240;
      ppuVar16 = ppuVar5;
    } while (lVar1 != -0x48);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_228 = ppuVar19;
  func_0x00010007e5dc(&ppuStack_228);
  lVar1 = -0x48;
  pcVar2 = &cStack_1d9;
  do {
    pcVar18 = pcVar2 + -0x18;
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar2 = pcVar18;
  } while (lVar1 != 0);
  pppuVar8 = pppuVar3;
  __Unwind_Resume();
  pcStack_248 = FUN_105328f0c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = ppuVar15;
  ppuVar17 = ppuVar6;
  ppuVar5 = ppuVar4;
  ppuStack_280 = (undefined **)unaff_x24;
  ppuStack_278 = (undefined **)pcVar12;
  ppuStack_270 = ppuVar16;
  pcStack_268 = pcVar18;
  lStack_260 = lVar1;
  pppuStack_258 = pppuVar3;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(ppuVar15);
  ppuVar16 = (undefined **)0x0;
  if (pppuVar8 != (undefined ***)0x0) {
    ppuVar16 = pppuVar8[1];
    _objc_retain(ppuVar15);
    if (ppuVar15 == (undefined **)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)ppuVar15;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar15);
    unaff_x24 = (char *)apuStack_2b8;
    func_0x00010002b838(apuStack_2b8,pcVar12);
    pcVar2 = "true";
    if ((int)ppuVar6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_2a0,pcVar2);
    puStack_2d8 = (undefined *)0x0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&puStack_2d8,apuStack_2b8,&lStack_288,2);
    ppuVar19 = (undefined **)&UNK_1108797c8;
    ppuVar6 = &puStack_2d8;
    ppuVar17 = &puStack_2d8;
    (**(code **)(*ppuVar16 + 0x18))(ppuVar16);
    ppuStack_2c0 = ppuVar6;
    func_0x00010007e5dc(&ppuStack_2c0);
    lVar1 = 0;
    ppuVar16 = apuStack_2b8;
    ppuVar5 = ppuVar4;
    do {
      if ((&cStack_289)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppuVar4 = ppuVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar15);
  _objc_release(ppuVar15);
  ppuVar14 = ppuVar4;
  __Unwind_Resume();
  pcStack_2e8 = FUN_1053290f4;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar19;
  ppuVar10 = ppuVar17;
  ppuVar11 = ppuVar5;
  ppuStack_320 = (undefined **)unaff_x24;
  ppuStack_318 = (undefined **)pcVar12;
  ppuStack_310 = ppuVar6;
  ppuStack_308 = ppuVar16;
  ppuStack_300 = ppuVar4;
  ppuStack_2f8 = ppuVar15;
  ppppuStack_2f0 = &pppuStack_250;
  _objc_retain(ppuVar19);
  ppuVar4 = (undefined **)0x0;
  if (ppuVar14 != (undefined **)0x0) {
    plVar20 = (long *)ppuVar14[1];
    _objc_retain(ppuVar19);
    if (ppuVar19 == (undefined **)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)ppuVar19;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar19);
    unaff_x24 = (char *)apuStack_358;
    func_0x00010002b838(apuStack_358,pcVar12);
    pcVar2 = "true";
    if ((int)ppuVar17 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_340,pcVar2);
    puStack_378 = (undefined *)0x0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&puStack_378,apuStack_358,&lStack_328,2);
    ppuVar9 = (undefined **)&UNK_110879818;
    ppuVar17 = &puStack_378;
    ppuVar10 = &puStack_378;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    ppuStack_360 = ppuVar17;
    func_0x00010007e5dc(&ppuStack_360);
    lVar1 = 0;
    ppuVar4 = apuStack_358;
    ppuVar11 = ppuVar5;
    do {
      if ((&cStack_329)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppuVar15 = ppuVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar19);
  _objc_release(ppuVar19);
  ppuVar5 = ppuVar15;
  __Unwind_Resume();
  pcStack_388 = FUN_1053292dc;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = ppuVar9;
  ppuVar6 = ppuVar10;
  ppuVar14 = ppuVar11;
  ppuStack_3c0 = (undefined **)unaff_x24;
  ppuStack_3b8 = (undefined **)pcVar12;
  ppuStack_3b0 = ppuVar17;
  ppuStack_3a8 = ppuVar4;
  ppuStack_3a0 = ppuVar15;
  ppuStack_398 = ppuVar19;
  ppppuStack_390 = &ppppuStack_2f0;
  _objc_retain(ppuVar9);
  ppuVar19 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    plVar20 = (long *)ppuVar5[1];
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)ppuVar9;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar9);
    unaff_x24 = (char *)apuStack_3f8;
    func_0x00010002b838(apuStack_3f8,pcVar12);
    pcVar2 = "true";
    if ((int)ppuVar10 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_3e0,pcVar2);
    puStack_418 = (undefined *)0x0;
    uStack_410 = 0;
    uStack_408 = 0;
    func_0x00010007e1e8(&puStack_418,apuStack_3f8,&lStack_3c8,2);
    ppuVar16 = (undefined **)&UNK_110879868;
    ppuVar10 = &puStack_418;
    ppuVar6 = &puStack_418;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    ppuStack_400 = ppuVar10;
    func_0x00010007e5dc(&ppuStack_400);
    lVar1 = 0;
    ppuVar19 = apuStack_3f8;
    ppuVar14 = ppuVar11;
    do {
      if ((&cStack_3c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppuVar17 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar9);
  _objc_release(ppuVar9);
  ppuVar15 = ppuVar17;
  __Unwind_Resume();
  ppuVar11 = &puStack_4a0;
  pcStack_428 = FUN_1053294c4;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar16;
  ppuVar5 = ppuVar6;
  ppuStack_460 = (undefined **)unaff_x24;
  ppuStack_458 = (undefined **)pcVar12;
  ppuStack_450 = ppuVar10;
  ppuStack_448 = ppuVar19;
  ppuStack_440 = ppuVar17;
  ppuStack_438 = ppuVar9;
  ppppuStack_430 = &ppppuStack_390;
  _objc_retain(ppuVar16);
  ppuVar19 = (undefined **)0x0;
  if (ppuVar15 != (undefined **)0x0) {
    ppuVar19 = (undefined **)ppuVar15[1];
    _objc_retain(ppuVar16);
    if (ppuVar16 == (undefined **)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = (char *)ppuVar16;
      _objc_retainAutorelease(ppuVar16);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar16);
    func_0x00010002b838(auStack_480,pcVar12);
    puStack_4a0 = (undefined *)0x0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x00010007e1e8(&puStack_4a0,auStack_480,&lStack_468,1);
    ppuVar4 = (undefined **)&UNK_1108798b8;
    (**(code **)(*ppuVar19 + 0x18))(ppuVar19);
    puStack_488 = (undefined1 *)&puStack_4a0;
    func_0x00010007e5dc(&puStack_488);
    ppuVar5 = ppuVar11;
    ppuVar14 = ppuVar6;
    ppuVar10 = &puStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      ppuVar5 = ppuVar11;
      ppuVar14 = ppuVar6;
      ppuVar10 = &puStack_4a0;
    }
  }
  ppuVar17 = ppuVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar16);
  _objc_release(ppuVar16);
  ppuVar6 = ppuVar17;
  __Unwind_Resume();
  ppuVar11 = &puStack_510;
  pcStack_4a8 = FUN_105329638;
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)0x0;
  ppuVar15 = ppuVar4;
  ppuVar9 = ppuVar5;
  ppuStack_4d0 = ppuVar10;
  ppuStack_4c8 = ppuVar19;
  ppuStack_4c0 = ppuVar17;
  ppuStack_4b8 = ppuVar16;
  ppppuStack_4b0 = &ppppuStack_430;
  if (ppuVar6 != (undefined **)0x0) {
    pppuVar3 = (undefined ***)ppuVar6[1];
    ppuVar15 = (undefined **)&UNK_110879908;
    (*(code *)(*pppuVar3)[5])();
    ppuVar17 = ppuVar6;
    ppuVar19 = ppuVar4;
    if ((int)pppuVar3 != 0) {
      ppuVar17 = (undefined **)ppuVar6[1];
      pcVar12 = "true";
      if ((int)ppuVar4 == 0) {
        pcVar12 = "false";
      }
      func_0x00010002b838(apppuStack_4f0,pcVar12);
      puStack_510 = (undefined *)0x0;
      uStack_508 = 0;
      uStack_500 = 0;
      func_0x00010007e1e8(&puStack_510,apppuStack_4f0,&lStack_4d8,1);
      ppuVar14 = (undefined **)((long)ppuVar5 * 10);
      ppuVar15 = (undefined **)&UNK_110879908;
      (**(code **)(*ppuVar17 + 0x18))(ppuVar17);
      pppuVar3 = &ppuStack_4f8;
      ppuStack_4f8 = &puStack_510;
      func_0x00010007e5dc();
      ppuVar9 = ppuVar11;
      ppuVar19 = &puStack_510;
      if (cStack_4d9 < '\0') {
        pppuVar3 = apppuStack_4f0[0];
        __ZdlPv();
        ppuVar9 = ppuVar11;
        ppuVar19 = &puStack_510;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_4f8 = ppuVar19;
  func_0x00010007e5dc(&ppuStack_4f8);
  if (cStack_4d9 < '\0') {
    __ZdlPv(apppuStack_4f0[0]);
  }
  pppuVar7 = pppuVar3;
  __Unwind_Resume();
  ppuVar6 = &puStack_580;
  pcStack_518 = FUN_105329778;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = (undefined ***)0x0;
  ppuVar4 = ppuVar15;
  ppuVar16 = ppuVar9;
  ppuStack_540 = ppuVar10;
  ppuStack_538 = ppuVar19;
  ppuStack_530 = ppuVar17;
  pppuStack_528 = pppuVar3;
  ppppuStack_520 = &ppppuStack_4b0;
  if (pppuVar7 != (undefined ***)0x0) {
    pppuVar8 = (undefined ***)pppuVar7[1];
    ppuVar4 = (undefined **)&UNK_110879958;
    (*(code *)(*pppuVar8)[5])();
    ppuVar19 = ppuVar15;
    if ((int)pppuVar8 != 0) {
      ppuVar19 = pppuVar7[1];
      pcVar12 = "true";
      if ((int)ppuVar15 == 0) {
        pcVar12 = "false";
      }
      func_0x00010002b838(apppuStack_560,pcVar12);
      puStack_580 = (undefined *)0x0;
      uStack_578 = 0;
      uStack_570 = 0;
      func_0x00010007e1e8(&puStack_580,apppuStack_560,&lStack_548,1);
      ppuVar4 = (undefined **)&UNK_110879958;
      (**(code **)(*ppuVar19 + 0x18))(ppuVar19);
      pppuVar8 = &ppuStack_568;
      ppuStack_568 = &puStack_580;
      func_0x00010007e5dc();
      ppuVar16 = ppuVar6;
      ppuVar14 = ppuVar9;
      ppuVar19 = &puStack_580;
      if (cStack_549 < '\0') {
        pppuVar8 = apppuStack_560[0];
        __ZdlPv();
        ppuVar16 = ppuVar6;
        ppuVar14 = ppuVar9;
        ppuVar19 = &puStack_580;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_568 = ppuVar19;
  func_0x00010007e5dc(&ppuStack_568);
  if (cStack_549 < '\0') {
    __ZdlPv(apppuStack_560[0]);
  }
  __Unwind_Resume();
  ppuVar5 = &puStack_640;
  lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar19 = ppuVar4;
  ppuVar17 = ppuVar16;
  ppuVar15 = ppuVar14;
  ppuVar6 = ppuVar13;
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar16);
  if (pppuVar8 != (undefined ***)0x0) {
    ppuVar9 = pppuVar8[1];
    ppuVar19 = (undefined **)&UNK_1108799a8;
    (**(code **)(*ppuVar9 + 0x28))();
    if ((int)ppuVar9 != 0) {
      ppuVar17 = pppuVar8[1];
      _objc_retain(ppuVar4);
      if (ppuVar4 == (undefined **)0x0) {
        pcVar12 = "";
      }
      else {
        pcVar12 = (char *)ppuVar4;
        _objc_retainAutorelease(ppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar4);
      func_0x00010002b838(apuStack_620,pcVar12);
      _objc_retain(ppuVar16);
      if (ppuVar16 == (undefined **)0x0) {
        pcVar12 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar16);
        pcVar12 = (char *)ppuVar16;
        func_0x00010bdc3520(ppuVar16);
      }
      _objc_release(ppuVar16);
      func_0x00010002b838(auStack_608,pcVar12);
      unaff_x24 = (char *)apuStack_5f0;
      pcVar12 = "true";
      if ((int)ppuVar14 == 0) {
        pcVar12 = "false";
      }
      func_0x00010002b838(unaff_x24,pcVar12);
      puStack_640 = (undefined *)0x0;
      uStack_638 = 0;
      uStack_630 = 0;
      func_0x00010007e1e8(&puStack_640,apuStack_620,&lStack_5d8,3);
      ppuVar15 = (undefined **)((long)ppuVar13 * 10);
      ppuVar19 = (undefined **)&UNK_1108799a8;
      (**(code **)(*ppuVar17 + 0x18))(ppuVar17);
      puStack_628 = (undefined1 *)&puStack_640;
      func_0x00010007e5dc(&puStack_628);
      lVar1 = 0;
      ppuVar17 = ppuVar5;
      do {
        if ((&cStack_5d9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)apuStack_5f0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(ppuVar16);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5d8) {
    ___stack_chk_fail();
    _objc_release(ppuVar16);
    do {
      unaff_x24 = (char *)((long)unaff_x24 + -0x18);
    } while ((undefined **)unaff_x24 != apuStack_620);
    _objc_release(ppuVar16);
    _objc_release(ppuVar4);
    __Unwind_Resume();
    ppuVar9 = &puStack_700;
    lStack_698 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar4 = ppuVar19;
    ppuVar16 = ppuVar17;
    ppuVar13 = ppuVar15;
    _objc_retain(ppuVar19);
    _objc_retain(ppuVar17);
    if (ppuVar5 != (undefined **)0x0) {
      plVar20 = (long *)ppuVar5[1];
      ppuVar4 = (undefined **)&UNK_1108799f8;
      (**(code **)(*plVar20 + 0x28))(plVar20,&UNK_1108799f8);
      if ((int)plVar20 != 0) {
        plVar20 = (long *)ppuVar5[1];
        _objc_retain(ppuVar19);
        if (ppuVar19 == (undefined **)0x0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = (char *)ppuVar19;
          _objc_retainAutorelease(ppuVar19);
          func_0x00010bdc3520();
        }
        _objc_release(ppuVar19);
        func_0x00010002b838(apuStack_6e0,pcVar12);
        _objc_retain(ppuVar17);
        if (ppuVar17 == (undefined **)0x0) {
          pcVar12 = "";
        }
        else {
          _objc_retainAutorelease(ppuVar17);
          pcVar12 = (char *)ppuVar17;
          func_0x00010bdc3520(ppuVar17);
        }
        _objc_release(ppuVar17);
        func_0x00010002b838(auStack_6c8,pcVar12);
        unaff_x24 = (char *)apuStack_6b0;
        pcVar12 = "true";
        if ((int)ppuVar15 == 0) {
          pcVar12 = "false";
        }
        func_0x00010002b838(unaff_x24,pcVar12);
        puStack_700 = (undefined *)0x0;
        uStack_6f8 = 0;
        uStack_6f0 = 0;
        func_0x00010007e1e8(&puStack_700,apuStack_6e0,&lStack_698,3);
        ppuVar4 = (undefined **)&UNK_1108799f8;
        (**(code **)(*plVar20 + 0x18))(plVar20,&UNK_1108799f8,&puStack_700,ppuVar6);
        puStack_6e8 = (undefined1 *)&puStack_700;
        func_0x00010007e5dc(&puStack_6e8);
        lVar1 = 0;
        ppuVar16 = ppuVar9;
        ppuVar13 = ppuVar6;
        do {
          if ((&cStack_699)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)apuStack_6b0 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x48);
      }
    }
    _objc_release(ppuVar17);
    ppuVar15 = ppuVar19;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_698) {
      ___stack_chk_fail();
      _objc_release(ppuVar17);
      do {
        unaff_x24 = (char *)((long)unaff_x24 + -0x18);
      } while ((undefined **)unaff_x24 != apuStack_6e0);
      _objc_release(ppuVar17);
      _objc_release(ppuVar19);
      __Unwind_Resume();
      _objc_retain(ppuVar4);
      _objc_retain(ppuVar16);
      if (ppuVar15 != (undefined **)0x0) {
        FUN_105329b4c(ppuVar15,ppuVar4,ppuVar16,ppuVar13,(long)(param_1 * 1000.0));
      }
      _objc_release(ppuVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 105326aa0; end: 105326ab3; -[SCConfigMetricGraphene2 dbWriteConfigFailed:] */

void FUN_105326aa0(long param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  undefined8 **ppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [24];
  long alStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [3];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  iVar8 = 0;
  uVar10 = 1;
  puVar12 = (undefined8 *)0x0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = param_3;
  _objc_retain(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar1[1];
    pcVar7 = "";
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = (long *)puVar1[1];
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = param_3;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      unaff_x24 = auStack_78;
      func_0x00010002b838(auStack_78,unaff_x23);
      func_0x00010002b838(auStack_60,"false");
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      uVar10 = 100;
      pcVar7 = "";
      puVar12 = &uStack_98;
      puVar9 = &uStack_98;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110879c78,puVar9,100);
      puStack_80 = puVar12;
      func_0x00010007e5dc(&puStack_80);
      lVar11 = 0;
      puVar1 = auStack_78;
      do {
        if ((&cStack_49)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
        }
        iVar8 = (int)puVar9;
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_a8 = FUN_10532a604;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar5 = (undefined8 **)0x0;
    puStack_e0 = unaff_x24;
    pcStack_d8 = unaff_x23;
    puStack_d0 = puVar12;
    puStack_c8 = puVar1;
    pcStack_c0 = pcVar3;
    pcStack_b8 = param_3;
    puStack_b0 = &stack0xfffffffffffffff0;
    if (pcVar4 != (char *)0x0) {
      plVar2 = *(long **)(pcVar4 + 8);
      pcVar3 = "true";
      if ((int)pcVar7 == 0) {
        pcVar3 = "false";
      }
      func_0x00010002b838(auStack_118,pcVar3);
      pcVar7 = "true";
      if (iVar8 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(alStack_100,pcVar7);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
      pcVar7 = "\x01";
      puVar1 = &uStack_138;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110879cc8,&uStack_138,uVar10);
      ppuVar5 = &puStack_120;
      puStack_120 = puVar1;
      func_0x00010007e5dc();
      lVar11 = 0;
      do {
        if ((&cStack_e9)[lVar11] < '\0') {
          ppuVar5 = *(undefined8 ***)((long)alStack_100 + lVar11);
          __ZdlPv();
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      puStack_120 = puVar1;
      func_0x00010007e5dc(&puStack_120);
      lVar11 = -0x30;
      pcVar3 = &cStack_e9;
      do {
        if (*pcVar3 < '\0') {
          __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
        }
        lVar11 = lVar11 + 0x18;
        pcVar3 = pcVar3 + -0x18;
      } while (lVar11 != 0);
      ppuVar6 = ppuVar5;
      __Unwind_Resume();
      puStack_168 = (undefined1 *)&uStack_180;
      pcStack_148 = FUN_10532a788;
      if (ppuVar6 != (undefined8 **)0x0) {
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        lStack_160 = lVar11;
        ppuStack_158 = ppuVar5;
        ppuStack_150 = &puStack_b0;
        (**(code **)(*ppuVar6[1] + 0x18))(ppuVar6[1],&UNK_110879d18,&uStack_180,pcVar7);
        func_0x00010007e5dc(&puStack_168);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105326ab4; end: 105326ae3; -[SCConfigMetricGraphene2 cofSyncWriteFullSync:isLoginSync:success:duration:] */

/* WARNING: Removing unreachable block (ram,0x000105329b14) */
/* WARNING: Removing unreachable block (ram,0x000105329da8) */

void FUN_105326ab4(double param_1,long param_2,undefined8 param_3,long *param_4,char *param_5,
                  char *param_6)

{
  long lVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long *plVar17;
  long *plVar18;
  char *unaff_x21;
  char *pcVar19;
  long *plVar20;
  char *unaff_x22;
  char *unaff_x23;
  char *unaff_x24;
  char acStack_580 [24];
  undefined1 *puStack_568;
  char acStack_560 [24];
  undefined1 auStack_548 [24];
  char acStack_530 [23];
  char cStack_519;
  long lStack_518;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  char acStack_4a0 [24];
  undefined1 auStack_488 [24];
  char acStack_470 [23];
  char cStack_459;
  long lStack_458;
  long alStack_400 [3];
  long *plStack_3e8;
  long **applStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  char *pcStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  long **pplStack_3a8;
  undefined8 ****ppppuStack_3a0;
  code *pcStack_398;
  long alStack_390 [3];
  long *plStack_378;
  long **applStack_370 [2];
  char cStack_359;
  long lStack_358;
  char *pcStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 ****ppppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  long *plStack_2d8;
  char *pcStack_2d0;
  char *pcStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  char acStack_278 [24];
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  long *plStack_238;
  char *pcStack_230;
  char *pcStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  char acStack_1d8 [24];
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  long *plStack_198;
  char *pcStack_190;
  char *pcStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  char acStack_138 [24];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  long *plStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  long lStack_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  long alStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    return;
  }
  param_1 = param_1 * 1000.0;
  pcVar16 = (char *)(long)param_1;
  pcVar15 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  pcVar5 = param_6;
  if (lVar1 != 0) {
    plVar17 = *(long **)(lVar1 + 8);
    unaff_x24 = "false";
    pcVar5 = "true";
    pcVar19 = pcVar5;
    if ((int)param_4 == 0) {
      pcVar19 = unaff_x24;
    }
    pcVar11 = pcVar16;
    func_0x00010002b838(alStack_a0,pcVar19);
    pcVar19 = pcVar5;
    if ((int)param_5 == 0) {
      pcVar19 = unaff_x24;
    }
    func_0x00010002b838(auStack_88,pcVar19);
    unaff_x23 = (char *)alStack_a0;
    if ((int)param_6 == 0) {
      pcVar5 = unaff_x24;
    }
    func_0x00010002b838(alStack_70,pcVar5);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,alStack_a0,&lStack_58,3);
    param_4 = (long *)&UNK_110879778;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    ppuVar2 = &puStack_a8;
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc();
    lVar1 = 0;
    param_5 = pcVar15;
    pcVar5 = pcVar16;
    pcVar16 = pcVar11;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        ppuVar2 = *(undefined1 ***)((long)alStack_70 + lVar1);
        __ZdlPv();
      }
      lVar1 = lVar1 + -0x18;
      unaff_x21 = acStack_c0;
      unaff_x22 = param_6;
    } while (lVar1 != -0x48);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puStack_a8 = unaff_x21;
  func_0x00010007e5dc(&puStack_a8);
  lVar1 = -0x48;
  pcVar15 = &cStack_59;
  do {
    pcVar19 = pcVar15 + -0x18;
    if (*pcVar15 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar15 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar15 = pcVar19;
  } while (lVar1 != 0);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_105328f0c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = param_4;
  pcVar15 = param_5;
  pcVar11 = pcVar5;
  pcStack_100 = unaff_x24;
  plStack_f8 = (long *)unaff_x23;
  pcStack_f0 = unaff_x22;
  pcStack_e8 = pcVar19;
  lStack_e0 = lVar1;
  ppuStack_d8 = ppuVar2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  pcVar19 = (char *)0x0;
  if (ppuVar3 != (undefined1 **)0x0) {
    plVar20 = (long *)ppuVar3[1];
    _objc_retain(param_4);
    if (param_4 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)param_4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x24 = acStack_138;
    func_0x00010002b838(acStack_138,unaff_x23);
    pcVar15 = "true";
    if ((int)param_5 == 0) {
      pcVar15 = "false";
    }
    func_0x00010002b838(auStack_120,pcVar15);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,acStack_138,&lStack_108,2);
    plVar17 = (long *)&UNK_1108797c8;
    param_5 = acStack_158;
    pcVar15 = acStack_158;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    pcStack_140 = param_5;
    func_0x00010007e5dc(&pcStack_140);
    lVar1 = 0;
    pcVar19 = acStack_138;
    pcVar11 = pcVar5;
    do {
      if ((&cStack_109)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar20 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  plVar10 = plVar20;
  __Unwind_Resume();
  pcStack_168 = FUN_1053290f4;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = plVar17;
  pcVar5 = pcVar15;
  pcVar12 = pcVar11;
  pcStack_1a0 = unaff_x24;
  plStack_198 = (long *)unaff_x23;
  pcStack_190 = param_5;
  pcStack_188 = pcVar19;
  plStack_180 = plVar20;
  plStack_178 = param_4;
  ppuStack_170 = &puStack_d0;
  _objc_retain(plVar17);
  pcVar19 = (char *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar20 = (long *)plVar10[1];
    _objc_retain(plVar17);
    if (plVar17 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar17;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar17);
    unaff_x24 = acStack_1d8;
    func_0x00010002b838(acStack_1d8,unaff_x23);
    pcVar5 = "true";
    if ((int)pcVar15 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_1c0,pcVar5);
    acStack_1f8[0] = '\0';
    acStack_1f8[1] = '\0';
    acStack_1f8[2] = '\0';
    acStack_1f8[3] = '\0';
    acStack_1f8[4] = '\0';
    acStack_1f8[5] = '\0';
    acStack_1f8[6] = '\0';
    acStack_1f8[7] = '\0';
    acStack_1f8[8] = '\0';
    acStack_1f8[9] = '\0';
    acStack_1f8[10] = '\0';
    acStack_1f8[0xb] = '\0';
    acStack_1f8[0xc] = '\0';
    acStack_1f8[0xd] = '\0';
    acStack_1f8[0xe] = '\0';
    acStack_1f8[0xf] = '\0';
    acStack_1f8[0x10] = '\0';
    acStack_1f8[0x11] = '\0';
    acStack_1f8[0x12] = '\0';
    acStack_1f8[0x13] = '\0';
    acStack_1f8[0x14] = '\0';
    acStack_1f8[0x15] = '\0';
    acStack_1f8[0x16] = '\0';
    acStack_1f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1f8,acStack_1d8,&lStack_1a8,2);
    plVar18 = (long *)&UNK_110879818;
    pcVar15 = acStack_1f8;
    pcVar5 = acStack_1f8;
    (**(code **)(*plVar20 + 0x18))(plVar20);
    pcStack_1e0 = pcVar15;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar1 = 0;
    pcVar19 = acStack_1d8;
    pcVar12 = pcVar11;
    do {
      if ((&cStack_1a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar20 = plVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
    ___stack_chk_fail();
    _objc_release(plVar17);
    _objc_release(plVar17);
    plVar4 = plVar20;
    __Unwind_Resume();
    pcStack_208 = FUN_1053292dc;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = plVar18;
    pcVar11 = pcVar5;
    pcVar14 = pcVar12;
    pcStack_240 = unaff_x24;
    plStack_238 = (long *)unaff_x23;
    pcStack_230 = pcVar15;
    pcStack_228 = pcVar19;
    plStack_220 = plVar20;
    plStack_218 = plVar17;
    pppuStack_210 = &ppuStack_170;
    _objc_retain(plVar18);
    pcVar15 = (char *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar17 = (long *)plVar4[1];
      _objc_retain(plVar18);
      if (plVar18 == (long *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = (char *)plVar18;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(plVar18);
      unaff_x24 = acStack_278;
      func_0x00010002b838(acStack_278,unaff_x23);
      pcVar15 = "true";
      if ((int)pcVar5 == 0) {
        pcVar15 = "false";
      }
      func_0x00010002b838(auStack_260,pcVar15);
      acStack_298[0] = '\0';
      acStack_298[1] = '\0';
      acStack_298[2] = '\0';
      acStack_298[3] = '\0';
      acStack_298[4] = '\0';
      acStack_298[5] = '\0';
      acStack_298[6] = '\0';
      acStack_298[7] = '\0';
      acStack_298[8] = '\0';
      acStack_298[9] = '\0';
      acStack_298[10] = '\0';
      acStack_298[0xb] = '\0';
      acStack_298[0xc] = '\0';
      acStack_298[0xd] = '\0';
      acStack_298[0xe] = '\0';
      acStack_298[0xf] = '\0';
      acStack_298[0x10] = '\0';
      acStack_298[0x11] = '\0';
      acStack_298[0x12] = '\0';
      acStack_298[0x13] = '\0';
      acStack_298[0x14] = '\0';
      acStack_298[0x15] = '\0';
      acStack_298[0x16] = '\0';
      acStack_298[0x17] = '\0';
      func_0x00010007e1e8(acStack_298,acStack_278,&lStack_248,2);
      plVar10 = (long *)&UNK_110879868;
      pcVar5 = acStack_298;
      pcVar11 = acStack_298;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      pcStack_280 = pcVar5;
      func_0x00010007e5dc(&pcStack_280);
      lVar1 = 0;
      pcVar15 = acStack_278;
      pcVar14 = pcVar12;
      do {
        if ((&cStack_249)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    plVar17 = plVar18;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar18);
    _objc_release(plVar18);
    plVar4 = plVar17;
    __Unwind_Resume();
    pcVar12 = acStack_320;
    pcStack_2a8 = FUN_1053294c4;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar20 = plVar10;
    pcVar19 = pcVar11;
    pcStack_2e0 = unaff_x24;
    plStack_2d8 = (long *)unaff_x23;
    pcStack_2d0 = pcVar5;
    pcStack_2c8 = pcVar15;
    plStack_2c0 = plVar17;
    plStack_2b8 = plVar18;
    ppppuStack_2b0 = &pppuStack_210;
    _objc_retain(plVar10);
    plVar17 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar17 = (long *)plVar4[1];
      _objc_retain(plVar10);
      if (plVar10 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)plVar10;
        _objc_retainAutorelease(plVar10);
        func_0x00010bdc3520();
      }
      _objc_release(plVar10);
      func_0x00010002b838(auStack_300,pcVar5);
      acStack_320[0] = '\0';
      acStack_320[1] = '\0';
      acStack_320[2] = '\0';
      acStack_320[3] = '\0';
      acStack_320[4] = '\0';
      acStack_320[5] = '\0';
      acStack_320[6] = '\0';
      acStack_320[7] = '\0';
      acStack_320[8] = '\0';
      acStack_320[9] = '\0';
      acStack_320[10] = '\0';
      acStack_320[0xb] = '\0';
      acStack_320[0xc] = '\0';
      acStack_320[0xd] = '\0';
      acStack_320[0xe] = '\0';
      acStack_320[0xf] = '\0';
      acStack_320[0x10] = '\0';
      acStack_320[0x11] = '\0';
      acStack_320[0x12] = '\0';
      acStack_320[0x13] = '\0';
      acStack_320[0x14] = '\0';
      acStack_320[0x15] = '\0';
      acStack_320[0x16] = '\0';
      acStack_320[0x17] = '\0';
      func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
      plVar20 = (long *)&UNK_1108798b8;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_308 = acStack_320;
      func_0x00010007e5dc(&puStack_308);
      pcVar19 = pcVar12;
      pcVar14 = pcVar11;
      pcVar5 = acStack_320;
      if (cStack_2e9 < '\0') {
        __ZdlPv(auStack_300[0]);
        pcVar19 = pcVar12;
        pcVar14 = pcVar11;
        pcVar5 = acStack_320;
      }
    }
    plVar18 = plVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar10);
    _objc_release(plVar10);
    plVar6 = plVar18;
    __Unwind_Resume();
    plVar13 = alStack_390;
    pcStack_328 = FUN_105329638;
    lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar7 = (long **)0x0;
    plVar4 = plVar20;
    pcVar15 = pcVar19;
    pcStack_350 = pcVar5;
    plStack_348 = plVar17;
    plStack_340 = plVar18;
    plStack_338 = plVar10;
    ppppuStack_330 = &ppppuStack_2b0;
    if (plVar6 != (long *)0x0) {
      pplVar7 = (long **)plVar6[1];
      plVar4 = (long *)&UNK_110879908;
      (*(code *)(*pplVar7)[5])();
      plVar18 = plVar6;
      plVar17 = plVar20;
      if ((int)pplVar7 != 0) {
        plVar18 = (long *)plVar6[1];
        pcVar15 = "true";
        if ((int)plVar20 == 0) {
          pcVar15 = "false";
        }
        func_0x00010002b838(applStack_370,pcVar15);
        alStack_390[0] = 0;
        alStack_390[1] = 0;
        alStack_390[2] = 0;
        func_0x00010007e1e8(alStack_390,applStack_370,&lStack_358,1);
        pcVar14 = (char *)((long)pcVar19 * 10);
        plVar4 = (long *)&UNK_110879908;
        (**(code **)(*plVar18 + 0x18))(plVar18);
        pplVar7 = &plStack_378;
        plStack_378 = alStack_390;
        func_0x00010007e5dc();
        pcVar15 = (char *)plVar13;
        plVar17 = alStack_390;
        if (cStack_359 < '\0') {
          pplVar7 = applStack_370[0];
          __ZdlPv();
          pcVar15 = (char *)plVar13;
          plVar17 = alStack_390;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
      return;
    }
    ___stack_chk_fail();
    plStack_378 = plVar17;
    func_0x00010007e5dc(&plStack_378);
    if (cStack_359 < '\0') {
      __ZdlPv(applStack_370[0]);
    }
    pplVar8 = pplVar7;
    __Unwind_Resume();
    plVar10 = alStack_400;
    pcStack_398 = FUN_105329778;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar9 = (long **)0x0;
    plVar20 = plVar4;
    pcVar19 = pcVar15;
    pcStack_3c0 = pcVar5;
    plStack_3b8 = plVar17;
    plStack_3b0 = plVar18;
    pplStack_3a8 = pplVar7;
    ppppuStack_3a0 = &ppppuStack_330;
    if (pplVar8 != (long **)0x0) {
      pplVar9 = (long **)pplVar8[1];
      plVar20 = (long *)&UNK_110879958;
      (*(code *)(*pplVar9)[5])();
      plVar17 = plVar4;
      if ((int)pplVar9 != 0) {
        plVar17 = pplVar8[1];
        pcVar5 = "true";
        if ((int)plVar4 == 0) {
          pcVar5 = "false";
        }
        func_0x00010002b838(applStack_3e0,pcVar5);
        alStack_400[0] = 0;
        alStack_400[1] = 0;
        alStack_400[2] = 0;
        func_0x00010007e1e8(alStack_400,applStack_3e0,&lStack_3c8,1);
        plVar20 = (long *)&UNK_110879958;
        (**(code **)(*plVar17 + 0x18))(plVar17);
        pplVar9 = &plStack_3e8;
        plStack_3e8 = alStack_400;
        func_0x00010007e5dc();
        pcVar19 = (char *)plVar10;
        pcVar14 = pcVar15;
        plVar17 = alStack_400;
        if (cStack_3c9 < '\0') {
          pplVar9 = applStack_3e0[0];
          __ZdlPv();
          pcVar19 = (char *)plVar10;
          pcVar14 = pcVar15;
          plVar17 = alStack_400;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
      ___stack_chk_fail();
      plStack_3e8 = plVar17;
      func_0x00010007e5dc(&plStack_3e8);
      if (cStack_3c9 < '\0') {
        __ZdlPv(applStack_3e0[0]);
      }
      __Unwind_Resume();
      pcVar12 = acStack_4c0;
      lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar17 = plVar20;
      pcVar5 = pcVar19;
      pcVar15 = pcVar14;
      pcVar11 = pcVar16;
      _objc_retain(plVar20);
      _objc_retain(pcVar19);
      if (pplVar9 != (long **)0x0) {
        plVar18 = pplVar9[1];
        plVar17 = (long *)&UNK_1108799a8;
        (**(code **)(*plVar18 + 0x28))();
        if ((int)plVar18 != 0) {
          plVar18 = pplVar9[1];
          _objc_retain(plVar20);
          if (plVar20 == (long *)0x0) {
            pcVar5 = "";
          }
          else {
            pcVar5 = (char *)plVar20;
            _objc_retainAutorelease(plVar20);
            func_0x00010bdc3520();
          }
          _objc_release(plVar20);
          func_0x00010002b838(acStack_4a0,pcVar5);
          _objc_retain(pcVar19);
          if (pcVar19 == (char *)0x0) {
            pcVar5 = "";
          }
          else {
            _objc_retainAutorelease(pcVar19);
            pcVar5 = pcVar19;
            func_0x00010bdc3520(pcVar19);
          }
          _objc_release(pcVar19);
          func_0x00010002b838(auStack_488,pcVar5);
          unaff_x24 = acStack_470;
          pcVar5 = "true";
          if ((int)pcVar14 == 0) {
            pcVar5 = "false";
          }
          func_0x00010002b838(unaff_x24,pcVar5);
          acStack_4c0[0] = '\0';
          acStack_4c0[1] = '\0';
          acStack_4c0[2] = '\0';
          acStack_4c0[3] = '\0';
          acStack_4c0[4] = '\0';
          acStack_4c0[5] = '\0';
          acStack_4c0[6] = '\0';
          acStack_4c0[7] = '\0';
          acStack_4c0[8] = '\0';
          acStack_4c0[9] = '\0';
          acStack_4c0[10] = '\0';
          acStack_4c0[0xb] = '\0';
          acStack_4c0[0xc] = '\0';
          acStack_4c0[0xd] = '\0';
          acStack_4c0[0xe] = '\0';
          acStack_4c0[0xf] = '\0';
          acStack_4c0[0x10] = '\0';
          acStack_4c0[0x11] = '\0';
          acStack_4c0[0x12] = '\0';
          acStack_4c0[0x13] = '\0';
          acStack_4c0[0x14] = '\0';
          acStack_4c0[0x15] = '\0';
          acStack_4c0[0x16] = '\0';
          acStack_4c0[0x17] = '\0';
          func_0x00010007e1e8(acStack_4c0,acStack_4a0,&lStack_458,3);
          pcVar15 = (char *)((long)pcVar16 * 10);
          plVar17 = (long *)&UNK_1108799a8;
          (**(code **)(*plVar18 + 0x18))(plVar18);
          puStack_4a8 = acStack_4c0;
          func_0x00010007e5dc(&puStack_4a8);
          lVar1 = 0;
          pcVar5 = pcVar12;
          do {
            if ((&cStack_459)[lVar1] < '\0') {
              __ZdlPv(*(undefined8 *)(acStack_470 + lVar1));
            }
            lVar1 = lVar1 + -0x18;
          } while (lVar1 != -0x48);
        }
      }
      _objc_release(pcVar19);
      plVar18 = plVar20;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
        ___stack_chk_fail();
        _objc_release(pcVar19);
        do {
          unaff_x24 = unaff_x24 + -0x18;
        } while (unaff_x24 != acStack_4a0);
        _objc_release(pcVar19);
        _objc_release(plVar20);
        __Unwind_Resume();
        pcVar12 = acStack_580;
        lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar20 = plVar17;
        pcVar16 = pcVar5;
        pcVar19 = pcVar15;
        _objc_retain(plVar17);
        _objc_retain(pcVar5);
        if (plVar18 != (long *)0x0) {
          plVar10 = (long *)plVar18[1];
          plVar20 = (long *)&UNK_1108799f8;
          (**(code **)(*plVar10 + 0x28))(plVar10,&UNK_1108799f8);
          if ((int)plVar10 != 0) {
            plVar18 = (long *)plVar18[1];
            _objc_retain(plVar17);
            if (plVar17 == (long *)0x0) {
              pcVar16 = "";
            }
            else {
              pcVar16 = (char *)plVar17;
              _objc_retainAutorelease(plVar17);
              func_0x00010bdc3520();
            }
            _objc_release(plVar17);
            func_0x00010002b838(acStack_560,pcVar16);
            _objc_retain(pcVar5);
            if (pcVar5 == (char *)0x0) {
              pcVar16 = "";
            }
            else {
              _objc_retainAutorelease(pcVar5);
              pcVar16 = pcVar5;
              func_0x00010bdc3520(pcVar5);
            }
            _objc_release(pcVar5);
            func_0x00010002b838(auStack_548,pcVar16);
            unaff_x24 = acStack_530;
            pcVar16 = "true";
            if ((int)pcVar15 == 0) {
              pcVar16 = "false";
            }
            func_0x00010002b838(unaff_x24,pcVar16);
            acStack_580[0] = '\0';
            acStack_580[1] = '\0';
            acStack_580[2] = '\0';
            acStack_580[3] = '\0';
            acStack_580[4] = '\0';
            acStack_580[5] = '\0';
            acStack_580[6] = '\0';
            acStack_580[7] = '\0';
            acStack_580[8] = '\0';
            acStack_580[9] = '\0';
            acStack_580[10] = '\0';
            acStack_580[0xb] = '\0';
            acStack_580[0xc] = '\0';
            acStack_580[0xd] = '\0';
            acStack_580[0xe] = '\0';
            acStack_580[0xf] = '\0';
            acStack_580[0x10] = '\0';
            acStack_580[0x11] = '\0';
            acStack_580[0x12] = '\0';
            acStack_580[0x13] = '\0';
            acStack_580[0x14] = '\0';
            acStack_580[0x15] = '\0';
            acStack_580[0x16] = '\0';
            acStack_580[0x17] = '\0';
            func_0x00010007e1e8(acStack_580,acStack_560,&lStack_518,3);
            plVar20 = (long *)&UNK_1108799f8;
            (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_1108799f8,acStack_580,pcVar11);
            puStack_568 = acStack_580;
            func_0x00010007e5dc(&puStack_568);
            lVar1 = 0;
            pcVar16 = pcVar12;
            pcVar19 = pcVar11;
            do {
              if ((&cStack_519)[lVar1] < '\0') {
                __ZdlPv(*(undefined8 *)(acStack_530 + lVar1));
              }
              lVar1 = lVar1 + -0x18;
            } while (lVar1 != -0x48);
          }
        }
        _objc_release(pcVar5);
        plVar18 = plVar17;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_518) {
          ___stack_chk_fail();
          _objc_release(pcVar5);
          do {
            unaff_x24 = unaff_x24 + -0x18;
          } while (unaff_x24 != acStack_560);
          _objc_release(pcVar5);
          _objc_release(plVar17);
          __Unwind_Resume();
          _objc_retain(plVar20);
          _objc_retain(pcVar16);
          if (plVar18 != (long *)0x0) {
            FUN_105329b4c(plVar18,plVar20,pcVar16,pcVar19,(long)(param_1 * 1000.0));
          }
          _objc_release(pcVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(plVar20);
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105326ae4; end: 105326ba3; -[SCConfigMetricGraphene2 cofDatabaseUpdate:deletedRows:syncStrategy:duration:] */

void FUN_105326ae4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_105326ba4(param_6);
  _objc_retainAutoreleasedReturnValue();
  FUN_105328f0c(*(undefined8 *)(param_2 + 8),param_6,0,1);
  FUN_1053290f4(*(undefined8 *)(param_2 + 8),param_6,0,(long)(param_1 * 1000.0));
  FUN_1053292dc(*(undefined8 *)(param_2 + 8),param_6,0,param_4);
  FUN_1053292dc(*(undefined8 *)(param_2 + 8),param_6,0,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105326ba4; end: 105326bf7;  */

void FUN_105326ba4(ulong param_1,undefined8 param_2)

{
  if (2 < param_1) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dd23d8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105326bf8; end: 105326c0b; -[SCConfigMetricGraphene2 syncRequestSentInForeground:isPrelogin:isFullSync:] */

/* WARNING: Removing unreachable block (ram,0x000105329b14) */
/* WARNING: Removing unreachable block (ram,0x000105328ab0) */
/* WARNING: Removing unreachable block (ram,0x000105328d24) */
/* WARNING: Removing unreachable block (ram,0x000105329da8) */

void FUN_105326bf8(double param_1,long param_2,undefined8 param_3,long *****param_4,
                  long *****param_5,long *****param_6,long *****param_7)

{
  long lVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  char *pcVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  char *pcVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  long *plVar17;
  long ****pppplVar18;
  long *****unaff_x21;
  char *pcVar19;
  char *pcVar20;
  long *****ppppplVar21;
  long *****unaff_x22;
  long *****unaff_x23;
  char *unaff_x24;
  char *pcVar22;
  char *unaff_x25;
  char *unaff_x26;
  long ***ppplStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined1 *puStack_968;
  long ***appplStack_960 [3];
  undefined1 auStack_948 [24];
  long ***appplStack_930 [2];
  char cStack_919;
  long lStack_918;
  char *pcStack_910;
  long ***ppplStack_908;
  long ****pppplStack_900;
  long ****pppplStack_8f8;
  long ****pppplStack_8f0;
  long ****pppplStack_8e8;
  long ****pppplStack_8e0;
  long ****pppplStack_8d8;
  undefined8 ****ppppuStack_8d0;
  code *pcStack_8c8;
  long ***ppplStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined1 *puStack_8a8;
  long ***appplStack_8a0 [3];
  undefined1 auStack_888 [24];
  long ***appplStack_870 [2];
  char cStack_859;
  long lStack_858;
  char *pcStack_850;
  long ***ppplStack_848;
  long ****pppplStack_840;
  long ****pppplStack_838;
  long ****pppplStack_830;
  long ****pppplStack_828;
  long ****pppplStack_820;
  long ****pppplStack_818;
  undefined8 ****ppppuStack_810;
  code *pcStack_808;
  long ***ppplStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  long ****pppplStack_7e8;
  long ****apppplStack_7e0 [2];
  char cStack_7c9;
  long lStack_7c8;
  long ****pppplStack_7c0;
  long ****pppplStack_7b8;
  long ****pppplStack_7b0;
  long ****pppplStack_7a8;
  undefined8 ****ppppuStack_7a0;
  code *pcStack_798;
  long ***ppplStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  long ****pppplStack_778;
  long ****apppplStack_770 [2];
  char cStack_759;
  long lStack_758;
  long ****pppplStack_750;
  long ****pppplStack_748;
  long ****pppplStack_740;
  long ****pppplStack_738;
  undefined8 ****ppppuStack_730;
  code *pcStack_728;
  long ***ppplStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  long ***appplStack_700 [2];
  char cStack_6e9;
  long lStack_6e8;
  long ****pppplStack_6e0;
  long ****pppplStack_6d8;
  long ****pppplStack_6d0;
  long ***ppplStack_6c8;
  long ****pppplStack_6c0;
  long ****pppplStack_6b8;
  undefined8 ****ppppuStack_6b0;
  code *pcStack_6a8;
  long ***ppplStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long ****pppplStack_680;
  long ***appplStack_678 [3];
  undefined8 auStack_660 [2];
  char cStack_649;
  long lStack_648;
  long ****pppplStack_640;
  long ****pppplStack_638;
  long ****pppplStack_630;
  long ***ppplStack_628;
  long ****pppplStack_620;
  long ****pppplStack_618;
  undefined8 ****ppppuStack_610;
  code *pcStack_608;
  long ***ppplStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long ****pppplStack_5e0;
  long ***appplStack_5d8 [3];
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  long ****pppplStack_5a0;
  long ****pppplStack_598;
  long ****pppplStack_590;
  long ***ppplStack_588;
  long ****pppplStack_580;
  long ****pppplStack_578;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  long ***ppplStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long ****pppplStack_540;
  long ***appplStack_538 [3];
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  long ****pppplStack_500;
  long ****pppplStack_4f8;
  long ****pppplStack_4f0;
  char *pcStack_4e8;
  long lStack_4e0;
  long ****pppplStack_4d8;
  undefined8 ****ppppuStack_4d0;
  code *pcStack_4c8;
  long ***ppplStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long ****pppplStack_4a8;
  long ***appplStack_4a0 [3];
  undefined1 auStack_488 [24];
  long alStack_470 [2];
  char cStack_459;
  long lStack_458;
  char *pcStack_450;
  long ***ppplStack_448;
  long ****pppplStack_440;
  long ****pppplStack_438;
  long ****pppplStack_430;
  long ****pppplStack_428;
  long ****pppplStack_420;
  long ****pppplStack_418;
  undefined8 ****ppppuStack_410;
  code *pcStack_408;
  long ***ppplStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  long ***appplStack_3e0 [3];
  undefined1 auStack_3c8 [24];
  long ***appplStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  char *pcStack_390;
  long ***ppplStack_388;
  long ****pppplStack_380;
  long ****pppplStack_378;
  long ****pppplStack_370;
  long ****pppplStack_368;
  long ****pppplStack_360;
  long ****pppplStack_358;
  undefined1 ****ppppuStack_350;
  code *pcStack_348;
  long ***ppplStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  long ***appplStack_320 [3];
  undefined1 auStack_308 [24];
  long ***appplStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  char *pcStack_2d0;
  long ***ppplStack_2c8;
  long ****pppplStack_2c0;
  long ****pppplStack_2b8;
  long ****pppplStack_2b0;
  char *pcStack_2a8;
  long lStack_2a0;
  long ****pppplStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  long ***ppplStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long ****pppplStack_260;
  long ***appplStack_258 [3];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  long ***appplStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  char *pcStack_1f0;
  long ***ppplStack_1e8;
  long ****pppplStack_1e0;
  long ****pppplStack_1d8;
  long ****pppplStack_1d0;
  long ****pppplStack_1c8;
  long lStack_1c0;
  long ****pppplStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  long ***ppplStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long ****pppplStack_180;
  long ***appplStack_178 [3];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  long ***appplStack_130 [2];
  undefined1 uStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long ***ppplStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long ****pppplStack_a8;
  long ***appplStack_a0 [3];
  undefined1 auStack_88 [24];
  long ***appplStack_70 [2];
  undefined1 uStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_2 + 8);
  ppppplVar16 = (long *****)0x1;
  ppppplVar8 = (long *****)&ppplStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar2 = (long *****)0x0;
  ppppplVar21 = param_4;
  ppppplVar5 = param_6;
  ppppplVar13 = param_5;
  if (lVar1 != 0) {
    ppppplVar2 = *(long ******)(lVar1 + 8);
    ppppplVar21 = (long *****)&UNK_1108795e8;
    (*(code *)(*ppppplVar2)[5])();
    unaff_x21 = param_5;
    unaff_x22 = param_4;
    unaff_x23 = param_6;
    if ((int)ppppplVar2 != 0) {
      plVar17 = *(long **)(lVar1 + 8);
      unaff_x24 = "false";
      unaff_x25 = "true";
      pcVar4 = unaff_x25;
      if ((int)param_4 == 0) {
        pcVar4 = unaff_x24;
      }
      func_0x00010002b838(appplStack_a0,pcVar4);
      pcVar4 = unaff_x25;
      if ((int)param_6 == 0) {
        pcVar4 = unaff_x24;
      }
      func_0x00010002b838(auStack_88,pcVar4);
      unaff_x23 = (long *****)appplStack_a0;
      unaff_x22 = (long *****)appplStack_70;
      pcVar4 = unaff_x25;
      if ((int)param_5 == 0) {
        pcVar4 = unaff_x24;
      }
      func_0x00010002b838(unaff_x22,pcVar4);
      ppplStack_c0 = (long ***)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x00010007e1e8(&ppplStack_c0,appplStack_a0,&lStack_58,3);
      ppppplVar13 = (long *****)0xa;
      ppppplVar21 = (long *****)&UNK_1108795e8;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      ppppplVar2 = &pppplStack_a8;
      pppplStack_a8 = &ppplStack_c0;
      func_0x00010007e5dc();
      lVar1 = 0;
      ppppplVar5 = ppppplVar8;
      do {
        if ((char)(&uStack_59)[lVar1] < '\0') {
          ppppplVar2 = *(long ******)((long)appplStack_70 + lVar1);
          __ZdlPv();
        }
        lVar1 = lVar1 + -0x18;
        unaff_x21 = (long *****)&ppplStack_c0;
      } while (lVar1 != -0x48);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_a8 = (long ****)unaff_x21;
  func_0x00010007e5dc(&pppplStack_a8);
  lVar1 = -0x48;
  ppppplVar8 = (long *****)&uStack_59;
  do {
    ppppplVar10 = ppppplVar8 + -3;
    if (*(char *)ppppplVar8 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppplVar8 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    ppppplVar8 = ppppplVar10;
  } while (lVar1 != 0);
  __Unwind_Resume();
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_105328478;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar3 = (long *****)0x0;
  ppppplVar8 = ppppplVar21;
  ppppplVar6 = ppppplVar5;
  ppppplVar14 = ppppplVar13;
  ppppplVar15 = ppppplVar16;
  ppppplVar12 = param_7;
  if (ppppplVar2 != (long *****)0x0) {
    ppppplVar3 = (long *****)ppppplVar2[1];
    ppppplVar8 = (long *****)&UNK_110879638;
    (*(code *)(*ppppplVar3)[5])();
    ppppplVar10 = ppppplVar16;
    unaff_x22 = ppppplVar21;
    unaff_x23 = ppppplVar13;
    unaff_x24 = (char *)ppppplVar5;
    if ((int)ppppplVar3 != 0) {
      pppplVar18 = ppppplVar2[1];
      unaff_x25 = "false";
      unaff_x26 = "true";
      pcVar4 = unaff_x26;
      if ((int)ppppplVar21 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(appplStack_178,pcVar4);
      pcVar4 = unaff_x26;
      if ((int)ppppplVar5 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(auStack_160,pcVar4);
      unaff_x24 = (char *)appplStack_178;
      pcVar4 = unaff_x26;
      if ((int)ppppplVar13 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(auStack_148,pcVar4);
      unaff_x22 = (long *****)appplStack_130;
      pcVar4 = unaff_x26;
      if ((int)ppppplVar16 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(unaff_x22,pcVar4);
      ppplStack_198 = (long ***)0x0;
      uStack_190 = 0;
      uStack_188 = 0;
      func_0x00010007e1e8(&ppplStack_198,appplStack_178,&lStack_118,4);
      ppppplVar14 = (long *****)((long)param_7 * 10);
      ppppplVar8 = (long *****)&UNK_110879638;
      ppppplVar10 = (long *****)&ppplStack_198;
      ppppplVar6 = (long *****)&ppplStack_198;
      (*(code *)(*pppplVar18)[3])(pppplVar18);
      ppppplVar3 = &pppplStack_180;
      pppplStack_180 = (long ****)ppppplVar10;
      func_0x00010007e5dc();
      lVar1 = 0;
      do {
        if ((char)(&uStack_119)[lVar1] < '\0') {
          ppppplVar3 = *(long ******)((long)appplStack_130 + lVar1);
          __ZdlPv();
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_180 = (long ****)ppppplVar10;
  func_0x00010007e5dc(&pppplStack_180);
  lVar1 = -0x60;
  ppppplVar21 = (long *****)&uStack_119;
  do {
    ppppplVar2 = ppppplVar21 + -3;
    if (*(char *)ppppplVar21 < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppppplVar21 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    ppppplVar21 = ppppplVar2;
  } while (lVar1 != 0);
  ppppplVar16 = ppppplVar3;
  __Unwind_Resume();
  pcStack_1f0 = unaff_x26;
  ppplStack_1e8 = (long ***)unaff_x25;
  pppplStack_1e0 = (long ****)unaff_x24;
  pppplStack_1d8 = (long ****)unaff_x23;
  pppplStack_1d0 = (long ****)unaff_x22;
  pppplStack_1c8 = (long ****)ppppplVar2;
  lStack_1c0 = lVar1;
  pppplStack_1b8 = (long ****)ppppplVar3;
  ppuStack_1b0 = &puStack_d0;
  pcStack_1a8 = FUN_105328674;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar13 = (long *****)0x0;
  ppppplVar21 = ppppplVar8;
  ppppplVar5 = ppppplVar6;
  ppppplVar10 = ppppplVar14;
  ppppplVar3 = ppppplVar15;
  if (ppppplVar16 != (long *****)0x0) {
    ppppplVar13 = (long *****)ppppplVar16[1];
    ppppplVar21 = (long *****)&UNK_110879688;
    (*(code *)(*ppppplVar13)[5])();
    ppppplVar2 = ppppplVar15;
    unaff_x22 = ppppplVar8;
    unaff_x23 = ppppplVar14;
    unaff_x24 = (char *)ppppplVar6;
    if ((int)ppppplVar13 != 0) {
      pppplVar18 = ppppplVar16[1];
      unaff_x25 = "false";
      unaff_x26 = "true";
      pcVar4 = unaff_x26;
      if ((int)ppppplVar8 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(appplStack_258,pcVar4);
      pcVar4 = unaff_x26;
      if ((int)ppppplVar6 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(auStack_240,pcVar4);
      unaff_x24 = (char *)appplStack_258;
      pcVar4 = unaff_x26;
      if ((int)ppppplVar14 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(auStack_228,pcVar4);
      unaff_x22 = (long *****)appplStack_210;
      pcVar4 = unaff_x26;
      if ((int)ppppplVar15 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(unaff_x22,pcVar4);
      ppplStack_278 = (long ***)0x0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&ppplStack_278,appplStack_258,&lStack_1f8,4);
      ppppplVar21 = (long *****)&UNK_110879688;
      ppppplVar2 = (long *****)&ppplStack_278;
      ppppplVar5 = (long *****)&ppplStack_278;
      (*(code *)(*pppplVar18)[3])(pppplVar18);
      ppppplVar13 = &pppplStack_260;
      pppplStack_260 = (long ****)ppppplVar2;
      func_0x00010007e5dc();
      lVar1 = 0;
      ppppplVar10 = ppppplVar12;
      do {
        if ((&cStack_1f9)[lVar1] < '\0') {
          ppppplVar13 = *(long ******)((long)appplStack_210 + lVar1);
          __ZdlPv();
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_260 = (long ****)ppppplVar2;
  func_0x00010007e5dc(&pppplStack_260);
  lVar1 = -0x60;
  pcVar4 = &cStack_1f9;
  do {
    pcVar19 = pcVar4 + -0x18;
    if (*pcVar4 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar4 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar4 = pcVar19;
  } while (lVar1 != 0);
  ppppplVar8 = ppppplVar13;
  __Unwind_Resume();
  ppppplVar14 = (long *****)&ppplStack_340;
  pcStack_288 = FUN_10532886c;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar2 = ppppplVar21;
  ppppplVar16 = ppppplVar5;
  pcVar4 = (char *)ppppplVar10;
  ppppplVar6 = ppppplVar3;
  pcStack_2d0 = unaff_x26;
  ppplStack_2c8 = (long ***)unaff_x25;
  pppplStack_2c0 = (long ****)unaff_x24;
  pppplStack_2b8 = (long ****)unaff_x23;
  pppplStack_2b0 = (long ****)unaff_x22;
  pcStack_2a8 = pcVar19;
  lStack_2a0 = lVar1;
  pppplStack_298 = (long ****)ppppplVar13;
  pppuStack_290 = &ppuStack_1b0;
  _objc_retain(ppppplVar21);
  _objc_retain(ppppplVar5);
  if (ppppplVar8 != (long *****)0x0) {
    pppplVar18 = ppppplVar8[1];
    _objc_retain(ppppplVar21);
    if (ppppplVar21 == (long *****)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)ppppplVar21;
      _objc_retainAutorelease(ppppplVar21);
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar21);
    func_0x00010002b838(appplStack_320,pcVar4);
    _objc_retain(ppppplVar5);
    if (ppppplVar5 == (long *****)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(ppppplVar5);
      pcVar4 = (char *)ppppplVar5;
      func_0x00010bdc3520(ppppplVar5);
    }
    _objc_release(ppppplVar5);
    func_0x00010002b838(auStack_308,pcVar4);
    unaff_x25 = (char *)appplStack_320;
    unaff_x24 = (char *)appplStack_2f0;
    pcVar4 = "true";
    if ((int)ppppplVar10 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar4);
    ppplStack_340 = (long ***)0x0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&ppplStack_340,appplStack_320,&lStack_2d8,3);
    ppppplVar2 = (long *****)&UNK_1108796d8;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    puStack_328 = (undefined1 *)&ppplStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar1 = 0;
    ppppplVar16 = ppppplVar14;
    pcVar4 = (char *)ppppplVar3;
    do {
      if ((&cStack_2d9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)appplStack_2f0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      ppppplVar10 = (long *****)&ppplStack_340;
    } while (lVar1 != -0x48);
  }
  _objc_release(ppppplVar5);
  ppppplVar13 = ppppplVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar5);
  pppplStack_370 = appplStack_320;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while ((long ****)unaff_x24 != pppplStack_370);
  _objc_release(ppppplVar5);
  _objc_release(ppppplVar21);
  ppppplVar14 = ppppplVar13;
  __Unwind_Resume();
  ppppplVar9 = (long *****)&ppplStack_400;
  pcStack_348 = FUN_105328ae0;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar8 = ppppplVar2;
  ppppplVar3 = ppppplVar16;
  ppppplVar15 = (long *****)pcVar4;
  ppppplVar12 = ppppplVar6;
  pcStack_390 = unaff_x26;
  ppplStack_388 = (long ***)unaff_x25;
  pppplStack_380 = (long ****)unaff_x24;
  pppplStack_378 = (long ****)ppppplVar10;
  pppplStack_368 = (long ****)ppppplVar13;
  pppplStack_360 = (long ****)ppppplVar5;
  pppplStack_358 = (long ****)ppppplVar21;
  ppppuStack_350 = &pppuStack_290;
  _objc_retain(ppppplVar2);
  _objc_retain(ppppplVar16);
  if (ppppplVar14 != (long *****)0x0) {
    pppplVar18 = ppppplVar14[1];
    _objc_retain(ppppplVar2);
    if (ppppplVar2 == (long *****)0x0) {
      pcVar19 = "";
    }
    else {
      pcVar19 = (char *)ppppplVar2;
      _objc_retainAutorelease(ppppplVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar2);
    func_0x00010002b838(appplStack_3e0,pcVar19);
    _objc_retain(ppppplVar16);
    if (ppppplVar16 == (long *****)0x0) {
      pcVar19 = "";
    }
    else {
      _objc_retainAutorelease(ppppplVar16);
      pcVar19 = (char *)ppppplVar16;
      func_0x00010bdc3520(ppppplVar16);
    }
    _objc_release(ppppplVar16);
    func_0x00010002b838(auStack_3c8,pcVar19);
    unaff_x25 = (char *)appplStack_3e0;
    unaff_x24 = (char *)appplStack_3b0;
    pcVar19 = "true";
    if ((int)pcVar4 == 0) {
      pcVar19 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar19);
    ppplStack_400 = (long ***)0x0;
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    func_0x00010007e1e8(&ppplStack_400,appplStack_3e0,&lStack_398,3);
    ppppplVar8 = (long *****)&UNK_110879728;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    puStack_3e8 = (undefined1 *)&ppplStack_400;
    func_0x00010007e5dc(&puStack_3e8);
    lVar1 = 0;
    ppppplVar3 = ppppplVar9;
    ppppplVar15 = ppppplVar6;
    do {
      if ((&cStack_399)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)appplStack_3b0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      pcVar4 = (char *)&ppplStack_400;
    } while (lVar1 != -0x48);
  }
  _objc_release(ppppplVar16);
  ppppplVar21 = ppppplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar16);
  pppplStack_430 = appplStack_3e0;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while ((long ****)unaff_x24 != pppplStack_430);
  _objc_release(ppppplVar16);
  _objc_release(ppppplVar2);
  ppppplVar13 = ppppplVar21;
  __Unwind_Resume();
  ppppplVar14 = (long *****)&ppplStack_4c0;
  pcStack_408 = FUN_105328d54;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar5 = (long *****)0x0;
  ppppplVar10 = ppppplVar15;
  ppppplVar6 = (long *****)pppplStack_430;
  pcVar22 = unaff_x24;
  pcVar19 = unaff_x25;
  pcStack_450 = unaff_x26;
  ppplStack_448 = (long ***)unaff_x25;
  pppplStack_440 = (long ****)unaff_x24;
  pppplStack_438 = (long ****)pcVar4;
  pppplStack_428 = (long ****)ppppplVar21;
  pppplStack_420 = (long ****)ppppplVar16;
  pppplStack_418 = (long ****)ppppplVar2;
  ppppuStack_410 = &ppppuStack_350;
  if (ppppplVar13 != (long *****)0x0) {
    pppplVar18 = ppppplVar13[1];
    pcVar22 = "false";
    pcVar19 = "true";
    pcVar4 = pcVar19;
    if ((int)ppppplVar8 == 0) {
      pcVar4 = pcVar22;
    }
    ppppplVar21 = ppppplVar12;
    func_0x00010002b838(appplStack_4a0,pcVar4);
    pcVar4 = pcVar19;
    if ((int)ppppplVar3 == 0) {
      pcVar4 = pcVar22;
    }
    func_0x00010002b838(auStack_488,pcVar4);
    pcVar4 = (char *)appplStack_4a0;
    pcVar7 = pcVar19;
    if ((int)ppppplVar15 == 0) {
      pcVar7 = pcVar22;
    }
    func_0x00010002b838(alStack_470,pcVar7);
    ppplStack_4c0 = (long ***)0x0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    func_0x00010007e1e8(&ppplStack_4c0,appplStack_4a0,&lStack_458,3);
    ppppplVar8 = (long *****)&UNK_110879778;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    ppppplVar5 = &pppplStack_4a8;
    pppplStack_4a8 = &ppplStack_4c0;
    func_0x00010007e5dc();
    lVar1 = 0;
    ppppplVar3 = ppppplVar14;
    ppppplVar10 = ppppplVar12;
    ppppplVar12 = ppppplVar21;
    do {
      if ((&cStack_459)[lVar1] < '\0') {
        ppppplVar5 = *(long ******)((long)alStack_470 + lVar1);
        __ZdlPv();
      }
      lVar1 = lVar1 + -0x18;
      ppppplVar21 = (long *****)&ppplStack_4c0;
      ppppplVar6 = ppppplVar15;
    } while (lVar1 != -0x48);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_4a8 = (long ****)ppppplVar21;
  func_0x00010007e5dc(&pppplStack_4a8);
  lVar1 = -0x48;
  pcVar7 = &cStack_459;
  do {
    pcVar20 = pcVar7 + -0x18;
    if (*pcVar7 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar7 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar7 = pcVar20;
  } while (lVar1 != 0);
  ppppplVar13 = ppppplVar5;
  __Unwind_Resume();
  pcStack_4c8 = FUN_105328f0c;
  lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar21 = ppppplVar8;
  ppppplVar2 = ppppplVar3;
  ppppplVar16 = ppppplVar10;
  pppplStack_500 = (long ****)pcVar22;
  pppplStack_4f8 = (long ****)pcVar4;
  pppplStack_4f0 = (long ****)ppppplVar6;
  pcStack_4e8 = pcVar20;
  lStack_4e0 = lVar1;
  pppplStack_4d8 = (long ****)ppppplVar5;
  ppppuStack_4d0 = &ppppuStack_410;
  _objc_retain(ppppplVar8);
  pppplVar18 = (long ****)0x0;
  if (ppppplVar13 != (long *****)0x0) {
    pppplVar18 = ppppplVar13[1];
    _objc_retain(ppppplVar8);
    if (ppppplVar8 == (long *****)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)ppppplVar8;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar8);
    pcVar22 = (char *)appplStack_538;
    func_0x00010002b838(appplStack_538,pcVar4);
    pcVar7 = "true";
    if ((int)ppppplVar3 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_520,pcVar7);
    ppplStack_558 = (long ***)0x0;
    uStack_550 = 0;
    uStack_548 = 0;
    func_0x00010007e1e8(&ppplStack_558,appplStack_538,&lStack_508,2);
    ppppplVar21 = (long *****)&UNK_1108797c8;
    ppppplVar3 = (long *****)&ppplStack_558;
    ppppplVar2 = (long *****)&ppplStack_558;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    pppplStack_540 = (long ****)ppppplVar3;
    func_0x00010007e5dc(&pppplStack_540);
    lVar1 = 0;
    pppplVar18 = appplStack_538;
    ppppplVar16 = ppppplVar10;
    do {
      if ((&cStack_509)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_520 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppppplVar5 = ppppplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_508) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar8);
  _objc_release(ppppplVar8);
  ppppplVar6 = ppppplVar5;
  __Unwind_Resume();
  pcStack_568 = FUN_1053290f4;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar13 = ppppplVar21;
  ppppplVar10 = ppppplVar2;
  ppppplVar14 = ppppplVar16;
  pppplStack_5a0 = (long ****)pcVar22;
  pppplStack_598 = (long ****)pcVar4;
  pppplStack_590 = (long ****)ppppplVar3;
  ppplStack_588 = (long ***)pppplVar18;
  pppplStack_580 = (long ****)ppppplVar5;
  pppplStack_578 = (long ****)ppppplVar8;
  ppppuStack_570 = &ppppuStack_4d0;
  _objc_retain(ppppplVar21);
  pppplVar18 = (long ****)0x0;
  if (ppppplVar6 != (long *****)0x0) {
    pppplVar18 = ppppplVar6[1];
    _objc_retain(ppppplVar21);
    if (ppppplVar21 == (long *****)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)ppppplVar21;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar21);
    pcVar22 = (char *)appplStack_5d8;
    func_0x00010002b838(appplStack_5d8,pcVar4);
    pcVar7 = "true";
    if ((int)ppppplVar2 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_5c0,pcVar7);
    ppplStack_5f8 = (long ***)0x0;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    func_0x00010007e1e8(&ppplStack_5f8,appplStack_5d8,&lStack_5a8,2);
    ppppplVar13 = (long *****)&UNK_110879818;
    ppppplVar2 = (long *****)&ppplStack_5f8;
    ppppplVar10 = (long *****)&ppplStack_5f8;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    pppplStack_5e0 = (long ****)ppppplVar2;
    func_0x00010007e5dc(&pppplStack_5e0);
    lVar1 = 0;
    pppplVar18 = appplStack_5d8;
    ppppplVar14 = ppppplVar16;
    do {
      if ((&cStack_5a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppppplVar5 = ppppplVar21;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar21);
  _objc_release(ppppplVar21);
  ppppplVar6 = ppppplVar5;
  __Unwind_Resume();
  pcStack_608 = FUN_1053292dc;
  lStack_648 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar8 = ppppplVar13;
  ppppplVar16 = ppppplVar10;
  ppppplVar3 = ppppplVar14;
  pppplStack_640 = (long ****)pcVar22;
  pppplStack_638 = (long ****)pcVar4;
  pppplStack_630 = (long ****)ppppplVar2;
  ppplStack_628 = (long ***)pppplVar18;
  pppplStack_620 = (long ****)ppppplVar5;
  pppplStack_618 = (long ****)ppppplVar21;
  ppppuStack_610 = &ppppuStack_570;
  _objc_retain(ppppplVar13);
  pppplVar18 = (long ****)0x0;
  if (ppppplVar6 != (long *****)0x0) {
    pppplVar18 = ppppplVar6[1];
    _objc_retain(ppppplVar13);
    if (ppppplVar13 == (long *****)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)ppppplVar13;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar13);
    pcVar22 = (char *)appplStack_678;
    func_0x00010002b838(appplStack_678,pcVar4);
    pcVar7 = "true";
    if ((int)ppppplVar10 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_660,pcVar7);
    ppplStack_698 = (long ***)0x0;
    uStack_690 = 0;
    uStack_688 = 0;
    func_0x00010007e1e8(&ppplStack_698,appplStack_678,&lStack_648,2);
    ppppplVar8 = (long *****)&UNK_110879868;
    ppppplVar10 = (long *****)&ppplStack_698;
    ppppplVar16 = (long *****)&ppplStack_698;
    (*(code *)(*pppplVar18)[3])(pppplVar18);
    pppplStack_680 = (long ****)ppppplVar10;
    func_0x00010007e5dc(&pppplStack_680);
    lVar1 = 0;
    pppplVar18 = appplStack_678;
    ppppplVar3 = ppppplVar14;
    do {
      if ((&cStack_649)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_660 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppppplVar21 = ppppplVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_648) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar13);
  _objc_release(ppppplVar13);
  ppppplVar5 = ppppplVar21;
  __Unwind_Resume();
  ppppplVar14 = (long *****)&ppplStack_720;
  pcStack_6a8 = FUN_1053294c4;
  lStack_6e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar2 = ppppplVar8;
  ppppplVar6 = ppppplVar16;
  pppplStack_6e0 = (long ****)pcVar22;
  pppplStack_6d8 = (long ****)pcVar4;
  pppplStack_6d0 = (long ****)ppppplVar10;
  ppplStack_6c8 = (long ***)pppplVar18;
  pppplStack_6c0 = (long ****)ppppplVar21;
  pppplStack_6b8 = (long ****)ppppplVar13;
  ppppuStack_6b0 = &ppppuStack_610;
  _objc_retain(ppppplVar8);
  ppppplVar21 = (long *****)0x0;
  if (ppppplVar5 != (long *****)0x0) {
    ppppplVar21 = (long *****)ppppplVar5[1];
    _objc_retain(ppppplVar8);
    if (ppppplVar8 == (long *****)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)ppppplVar8;
      _objc_retainAutorelease(ppppplVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppppplVar8);
    pcVar4 = (char *)appplStack_700;
    func_0x00010002b838(appplStack_700,pcVar7);
    ppplStack_720 = (long ***)0x0;
    uStack_718 = 0;
    uStack_710 = 0;
    func_0x00010007e1e8(&ppplStack_720,appplStack_700,&lStack_6e8,1);
    ppppplVar2 = (long *****)&UNK_1108798b8;
    (*(code *)(*ppppplVar21)[3])(ppppplVar21);
    puStack_708 = (undefined1 *)&ppplStack_720;
    func_0x00010007e5dc(&puStack_708);
    ppppplVar6 = ppppplVar14;
    ppppplVar3 = ppppplVar16;
    ppppplVar10 = (long *****)&ppplStack_720;
    if (cStack_6e9 < '\0') {
      __ZdlPv(appplStack_700[0]);
      ppppplVar6 = ppppplVar14;
      ppppplVar3 = ppppplVar16;
      ppppplVar10 = (long *****)&ppplStack_720;
    }
  }
  ppppplVar5 = ppppplVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppppplVar8);
  _objc_release(ppppplVar8);
  ppppplVar14 = ppppplVar5;
  __Unwind_Resume();
  ppppplVar9 = (long *****)&ppplStack_790;
  pcStack_728 = FUN_105329638;
  lStack_758 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar16 = ppppplVar14;
  ppppplVar13 = ppppplVar2;
  ppppplVar15 = ppppplVar6;
  pppplStack_750 = (long ****)ppppplVar10;
  pppplStack_748 = (long ****)ppppplVar21;
  pppplStack_740 = (long ****)ppppplVar5;
  pppplStack_738 = (long ****)ppppplVar8;
  ppppuStack_730 = &ppppuStack_6b0;
  if (ppppplVar14 != (long *****)0x0) {
    ppppplVar16 = (long *****)ppppplVar14[1];
    ppppplVar13 = (long *****)&UNK_110879908;
    (*(code *)(*ppppplVar16)[5])();
    ppppplVar5 = ppppplVar14;
    ppppplVar21 = ppppplVar2;
    if ((int)ppppplVar16 != 0) {
      ppppplVar5 = (long *****)ppppplVar14[1];
      pcVar7 = "true";
      if ((int)ppppplVar2 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(apppplStack_770,pcVar7);
      ppplStack_790 = (long ***)0x0;
      uStack_788 = 0;
      uStack_780 = 0;
      func_0x00010007e1e8(&ppplStack_790,apppplStack_770,&lStack_758,1);
      ppppplVar3 = (long *****)((long)ppppplVar6 * 10);
      ppppplVar13 = (long *****)&UNK_110879908;
      (*(code *)(*ppppplVar5)[3])(ppppplVar5);
      ppppplVar16 = &pppplStack_778;
      pppplStack_778 = &ppplStack_790;
      func_0x00010007e5dc();
      ppppplVar15 = ppppplVar9;
      ppppplVar21 = (long *****)&ppplStack_790;
      if (cStack_759 < '\0') {
        ppppplVar16 = (long *****)apppplStack_770[0];
        __ZdlPv();
        ppppplVar15 = ppppplVar9;
        ppppplVar21 = (long *****)&ppplStack_790;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_758) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_778 = (long ****)ppppplVar21;
  func_0x00010007e5dc(&pppplStack_778);
  if (cStack_759 < '\0') {
    __ZdlPv(apppplStack_770[0]);
  }
  ppppplVar6 = ppppplVar16;
  __Unwind_Resume();
  ppppplVar9 = (long *****)&ppplStack_800;
  pcStack_798 = FUN_105329778;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar8 = (long *****)0x0;
  ppppplVar2 = ppppplVar13;
  ppppplVar14 = ppppplVar15;
  pppplStack_7c0 = (long ****)ppppplVar10;
  pppplStack_7b8 = (long ****)ppppplVar21;
  pppplStack_7b0 = (long ****)ppppplVar5;
  pppplStack_7a8 = (long ****)ppppplVar16;
  ppppuStack_7a0 = &ppppuStack_730;
  if (ppppplVar6 != (long *****)0x0) {
    ppppplVar8 = (long *****)ppppplVar6[1];
    ppppplVar2 = (long *****)&UNK_110879958;
    (*(code *)(*ppppplVar8)[5])();
    ppppplVar5 = ppppplVar6;
    ppppplVar21 = ppppplVar13;
    if ((int)ppppplVar8 != 0) {
      ppppplVar5 = (long *****)ppppplVar6[1];
      pcVar7 = "true";
      if ((int)ppppplVar13 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(apppplStack_7e0,pcVar7);
      ppplStack_800 = (long ***)0x0;
      uStack_7f8 = 0;
      uStack_7f0 = 0;
      func_0x00010007e1e8(&ppplStack_800,apppplStack_7e0,&lStack_7c8,1);
      ppppplVar2 = (long *****)&UNK_110879958;
      (*(code *)(*ppppplVar5)[3])(ppppplVar5);
      ppppplVar8 = &pppplStack_7e8;
      pppplStack_7e8 = &ppplStack_800;
      func_0x00010007e5dc();
      ppppplVar14 = ppppplVar9;
      ppppplVar3 = ppppplVar15;
      ppppplVar21 = (long *****)&ppplStack_800;
      if (cStack_7c9 < '\0') {
        ppppplVar8 = (long *****)apppplStack_7e0[0];
        __ZdlPv();
        ppppplVar14 = ppppplVar9;
        ppppplVar3 = ppppplVar15;
        ppppplVar21 = (long *****)&ppplStack_800;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_7e8 = (long ****)ppppplVar21;
  func_0x00010007e5dc(&pppplStack_7e8);
  if (cStack_7c9 < '\0') {
    __ZdlPv(apppplStack_7e0[0]);
  }
  ppppplVar16 = ppppplVar8;
  __Unwind_Resume();
  ppppplVar11 = (long *****)&ppplStack_8c0;
  pcStack_808 = FUN_1053298b4;
  lStack_858 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar13 = ppppplVar2;
  ppppplVar6 = ppppplVar14;
  ppppplVar15 = ppppplVar3;
  ppppplVar9 = ppppplVar12;
  pcStack_850 = unaff_x26;
  ppplStack_848 = (long ***)pcVar19;
  pppplStack_840 = (long ****)pcVar22;
  pppplStack_838 = (long ****)pcVar4;
  pppplStack_830 = (long ****)ppppplVar10;
  pppplStack_828 = (long ****)ppppplVar21;
  pppplStack_820 = (long ****)ppppplVar5;
  pppplStack_818 = (long ****)ppppplVar8;
  ppppuStack_810 = &ppppuStack_7a0;
  _objc_retain(ppppplVar2);
  _objc_retain(ppppplVar14);
  if (ppppplVar16 != (long *****)0x0) {
    pppplVar18 = ppppplVar16[1];
    ppppplVar13 = (long *****)&UNK_1108799a8;
    (*(code *)(*pppplVar18)[5])();
    if ((int)pppplVar18 != 0) {
      pppplVar18 = ppppplVar16[1];
      _objc_retain(ppppplVar2);
      if (ppppplVar2 == (long *****)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)ppppplVar2;
        _objc_retainAutorelease(ppppplVar2);
        func_0x00010bdc3520();
      }
      _objc_release(ppppplVar2);
      func_0x00010002b838(appplStack_8a0,pcVar4);
      _objc_retain(ppppplVar14);
      if (ppppplVar14 == (long *****)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(ppppplVar14);
        pcVar4 = (char *)ppppplVar14;
        func_0x00010bdc3520(ppppplVar14);
      }
      _objc_release(ppppplVar14);
      func_0x00010002b838(auStack_888,pcVar4);
      pcVar19 = (char *)appplStack_8a0;
      pcVar22 = (char *)appplStack_870;
      pcVar4 = "true";
      if ((int)ppppplVar3 == 0) {
        pcVar4 = "false";
      }
      func_0x00010002b838(pcVar22,pcVar4);
      ppplStack_8c0 = (long ***)0x0;
      uStack_8b8 = 0;
      uStack_8b0 = 0;
      func_0x00010007e1e8(&ppplStack_8c0,appplStack_8a0,&lStack_858,3);
      ppppplVar15 = (long *****)((long)ppppplVar12 * 10);
      ppppplVar13 = (long *****)&UNK_1108799a8;
      (*(code *)(*pppplVar18)[3])(pppplVar18);
      puStack_8a8 = (undefined1 *)&ppplStack_8c0;
      func_0x00010007e5dc(&puStack_8a8);
      lVar1 = 0;
      ppppplVar6 = ppppplVar11;
      do {
        if ((&cStack_859)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)appplStack_870 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        ppppplVar3 = (long *****)&ppplStack_8c0;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(ppppplVar14);
  ppppplVar21 = ppppplVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_858) {
    ___stack_chk_fail();
    _objc_release(ppppplVar14);
    pppplStack_8f0 = appplStack_8a0;
    do {
      pcVar22 = (char *)((long)pcVar22 + -0x18);
    } while ((long ****)pcVar22 != pppplStack_8f0);
    _objc_release(ppppplVar14);
    _objc_release(ppppplVar2);
    ppppplVar8 = ppppplVar21;
    __Unwind_Resume();
    ppppplVar12 = (long *****)&ppplStack_980;
    pcStack_8c8 = FUN_105329b4c;
    lStack_918 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppplVar5 = ppppplVar13;
    ppppplVar16 = ppppplVar6;
    ppppplVar10 = ppppplVar15;
    pcStack_910 = unaff_x26;
    ppplStack_908 = (long ***)pcVar19;
    pppplStack_900 = (long ****)pcVar22;
    pppplStack_8f8 = (long ****)ppppplVar3;
    pppplStack_8e8 = (long ****)ppppplVar21;
    pppplStack_8e0 = (long ****)ppppplVar14;
    pppplStack_8d8 = (long ****)ppppplVar2;
    ppppuStack_8d0 = &ppppuStack_810;
    _objc_retain(ppppplVar13);
    _objc_retain(ppppplVar6);
    if (ppppplVar8 != (long *****)0x0) {
      pppplVar18 = ppppplVar8[1];
      ppppplVar5 = (long *****)&UNK_1108799f8;
      (*(code *)(*pppplVar18)[5])(pppplVar18,&UNK_1108799f8);
      if ((int)pppplVar18 != 0) {
        pppplVar18 = ppppplVar8[1];
        _objc_retain(ppppplVar13);
        if (ppppplVar13 == (long *****)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)ppppplVar13;
          _objc_retainAutorelease(ppppplVar13);
          func_0x00010bdc3520();
        }
        _objc_release(ppppplVar13);
        func_0x00010002b838(appplStack_960,pcVar4);
        _objc_retain(ppppplVar6);
        if (ppppplVar6 == (long *****)0x0) {
          pcVar4 = "";
        }
        else {
          _objc_retainAutorelease(ppppplVar6);
          pcVar4 = (char *)ppppplVar6;
          func_0x00010bdc3520(ppppplVar6);
        }
        _objc_release(ppppplVar6);
        func_0x00010002b838(auStack_948,pcVar4);
        pcVar22 = (char *)appplStack_930;
        pcVar4 = "true";
        if ((int)ppppplVar15 == 0) {
          pcVar4 = "false";
        }
        func_0x00010002b838(pcVar22,pcVar4);
        ppplStack_980 = (long ***)0x0;
        uStack_978 = 0;
        uStack_970 = 0;
        func_0x00010007e1e8(&ppplStack_980,appplStack_960,&lStack_918,3);
        ppppplVar5 = (long *****)&UNK_1108799f8;
        (*(code *)(*pppplVar18)[3])(pppplVar18,&UNK_1108799f8,&ppplStack_980,ppppplVar9);
        puStack_968 = (undefined1 *)&ppplStack_980;
        func_0x00010007e5dc(&puStack_968);
        lVar1 = 0;
        ppppplVar16 = ppppplVar12;
        ppppplVar10 = ppppplVar9;
        do {
          if ((&cStack_919)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)appplStack_930 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x48);
      }
    }
    _objc_release(ppppplVar6);
    ppppplVar21 = ppppplVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_918) {
      ___stack_chk_fail();
      _objc_release(ppppplVar6);
      do {
        pcVar22 = (char *)((long)pcVar22 + -0x18);
      } while ((long ****)pcVar22 != appplStack_960);
      _objc_release(ppppplVar6);
      _objc_release(ppppplVar13);
      __Unwind_Resume();
      _objc_retain(ppppplVar5);
      _objc_retain(ppppplVar16);
      if (ppppplVar21 != (long *****)0x0) {
        FUN_105329b4c(ppppplVar21,ppppplVar5,ppppplVar16,ppppplVar10,(long)(param_1 * 1000.0));
      }
      _objc_release(ppppplVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppppplVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 105326c0c; end: 105326c5b; -[SCConfigMetricGraphene2 cofFetchSnapToken:duration:] */

/* WARNING: Removing unreachable block (ram,0x000105329b14) */
/* WARNING: Removing unreachable block (ram,0x0001053297e0) */
/* WARNING: Removing unreachable block (ram,0x000105329da8) */

void FUN_105326c0c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,char *param_5,
                  char *param_6)

{
  long lVar1;
  undefined1 **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  char *unaff_x21;
  undefined8 *unaff_x24;
  char acStack_1f0 [24];
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [3];
  undefined1 auStack_1b8 [24];
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  char acStack_130 [24];
  undefined1 *puStack_118;
  undefined8 auStack_110 [3];
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  FUN_105329638(*(undefined8 *)(param_2 + 8),1,1);
  lVar1 = *(long *)(param_2 + 8);
  param_1 = param_1 * 1000.0;
  pcVar6 = (char *)(long)param_1;
  pcVar5 = (char *)0x1;
  pcVar3 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  pcVar7 = pcVar6;
  if (lVar1 != 0) {
    ppuVar2 = *(undefined1 ***)(lVar1 + 8);
    pcVar5 = "\x01";
    (**(code **)(*ppuVar2 + 0x28))();
    unaff_x21 = (undefined1 *)0x1;
    if ((int)ppuVar2 != 0) {
      plVar12 = *(long **)(lVar1 + 8);
      func_0x00010002b838(appuStack_50,"true");
      acStack_70[0] = '\0';
      acStack_70[1] = '\0';
      acStack_70[2] = '\0';
      acStack_70[3] = '\0';
      acStack_70[4] = '\0';
      acStack_70[5] = '\0';
      acStack_70[6] = '\0';
      acStack_70[7] = '\0';
      acStack_70[8] = '\0';
      acStack_70[9] = '\0';
      acStack_70[10] = '\0';
      acStack_70[0xb] = '\0';
      acStack_70[0xc] = '\0';
      acStack_70[0xd] = '\0';
      acStack_70[0xe] = '\0';
      acStack_70[0xf] = '\0';
      acStack_70[0x10] = '\0';
      acStack_70[0x11] = '\0';
      acStack_70[0x12] = '\0';
      acStack_70[0x13] = '\0';
      acStack_70[0x14] = '\0';
      acStack_70[0x15] = '\0';
      acStack_70[0x16] = '\0';
      acStack_70[0x17] = '\0';
      func_0x00010007e1e8(acStack_70,appuStack_50,&lStack_38,1);
      pcVar5 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12);
      ppuVar2 = &puStack_58;
      puStack_58 = acStack_70;
      func_0x00010007e5dc();
      pcVar7 = pcVar3;
      param_5 = pcVar6;
      unaff_x21 = acStack_70;
      if (cStack_39 < '\0') {
        ppuVar2 = appuStack_50[0];
        __ZdlPv();
        pcVar7 = pcVar3;
        param_5 = pcVar6;
        unaff_x21 = acStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcVar4 = acStack_130;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  pcVar6 = pcVar7;
  pcVar9 = param_5;
  pcVar11 = param_6;
  _objc_retain(pcVar5);
  _objc_retain(pcVar7);
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar2[1];
    pcVar3 = "";
    (**(code **)(*plVar12 + 0x28))();
    if ((int)plVar12 != 0) {
      plVar12 = (long *)ppuVar2[1];
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_110,pcVar3);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar3 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_f8,pcVar3);
      unaff_x24 = auStack_e0;
      pcVar3 = "true";
      if ((int)param_5 == 0) {
        pcVar3 = "false";
      }
      func_0x00010002b838(unaff_x24,pcVar3);
      acStack_130[0] = '\0';
      acStack_130[1] = '\0';
      acStack_130[2] = '\0';
      acStack_130[3] = '\0';
      acStack_130[4] = '\0';
      acStack_130[5] = '\0';
      acStack_130[6] = '\0';
      acStack_130[7] = '\0';
      acStack_130[8] = '\0';
      acStack_130[9] = '\0';
      acStack_130[10] = '\0';
      acStack_130[0xb] = '\0';
      acStack_130[0xc] = '\0';
      acStack_130[0xd] = '\0';
      acStack_130[0xe] = '\0';
      acStack_130[0xf] = '\0';
      acStack_130[0x10] = '\0';
      acStack_130[0x11] = '\0';
      acStack_130[0x12] = '\0';
      acStack_130[0x13] = '\0';
      acStack_130[0x14] = '\0';
      acStack_130[0x15] = '\0';
      acStack_130[0x16] = '\0';
      acStack_130[0x17] = '\0';
      func_0x00010007e1e8(acStack_130,auStack_110,&lStack_c8,3);
      pcVar9 = (char *)((long)param_6 * 10);
      pcVar3 = "";
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_118 = acStack_130;
      func_0x00010007e5dc(&puStack_118);
      lVar1 = 0;
      pcVar6 = pcVar4;
      do {
        if ((&cStack_c9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_110);
  _objc_release(pcVar7);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcVar8 = acStack_1f0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar3;
  pcVar7 = pcVar6;
  pcVar10 = pcVar9;
  _objc_retain(pcVar3);
  _objc_retain(pcVar6);
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    pcVar5 = "\x01";
    (**(code **)(*plVar12 + 0x28))(plVar12,&UNK_1108799f8);
    if ((int)plVar12 != 0) {
      plVar12 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_1d0,pcVar5);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar5 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_1b8,pcVar5);
      unaff_x24 = auStack_1a0;
      pcVar5 = "true";
      if ((int)pcVar9 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(unaff_x24,pcVar5);
      acStack_1f0[0] = '\0';
      acStack_1f0[1] = '\0';
      acStack_1f0[2] = '\0';
      acStack_1f0[3] = '\0';
      acStack_1f0[4] = '\0';
      acStack_1f0[5] = '\0';
      acStack_1f0[6] = '\0';
      acStack_1f0[7] = '\0';
      acStack_1f0[8] = '\0';
      acStack_1f0[9] = '\0';
      acStack_1f0[10] = '\0';
      acStack_1f0[0xb] = '\0';
      acStack_1f0[0xc] = '\0';
      acStack_1f0[0xd] = '\0';
      acStack_1f0[0xe] = '\0';
      acStack_1f0[0xf] = '\0';
      acStack_1f0[0x10] = '\0';
      acStack_1f0[0x11] = '\0';
      acStack_1f0[0x12] = '\0';
      acStack_1f0[0x13] = '\0';
      acStack_1f0[0x14] = '\0';
      acStack_1f0[0x15] = '\0';
      acStack_1f0[0x16] = '\0';
      acStack_1f0[0x17] = '\0';
      func_0x00010007e1e8(acStack_1f0,auStack_1d0,&lStack_188,3);
      pcVar5 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108799f8,acStack_1f0,pcVar11);
      puStack_1d8 = acStack_1f0;
      func_0x00010007e5dc(&puStack_1d8);
      lVar1 = 0;
      pcVar7 = pcVar8;
      pcVar10 = pcVar11;
      do {
        if ((&cStack_189)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(pcVar6);
  pcVar9 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_1d0);
    _objc_release(pcVar6);
    _objc_release(pcVar3);
    __Unwind_Resume();
    _objc_retain(pcVar5);
    _objc_retain(pcVar7);
    if (pcVar9 != (char *)0x0) {
      FUN_105329b4c(pcVar9,pcVar5,pcVar7,pcVar10,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
    return;
  }
  return;
}



/* Entry: 105326c5c; end: 105326d6b; -[SCConfigMetricGraphene2 cofFetchSnapTokenError:errorCode:duration:] */

void FUN_105326c5c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053298b4(uVar2,puVar1,param_4,0,1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_105329de0(param_1,uVar2,puVar1,param_4,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105326d6c; end: 105326dff; -[SCConfigMetricGraphene2 cofSyncRequestHasUpdatedConfigs:isForeground:isFullSync:duration:] */

/* WARNING: Removing unreachable block (ram,0x000105329b14) */
/* WARNING: Removing unreachable block (ram,0x000105328ab0) */
/* WARNING: Removing unreachable block (ram,0x000105328734) */
/* WARNING: Removing unreachable block (ram,0x000105328d24) */
/* WARNING: Removing unreachable block (ram,0x000105329da8) */

void FUN_105326d6c(double param_1,long param_2,undefined8 param_3,long ******param_4,
                  long ******param_5,long ******param_6)

{
  long lVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  char *pcVar4;
  long ******pppppplVar5;
  long ******pppppplVar6;
  long ******pppppplVar7;
  char *pcVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long ******pppppplVar13;
  long ******pppppplVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  long ******pppppplVar17;
  long *plVar18;
  long ******pppppplVar19;
  long *****unaff_x21;
  char *pcVar20;
  char *pcVar21;
  long ******pppppplVar22;
  long ******unaff_x22;
  long ****pppplVar23;
  long ******unaff_x23;
  long ******unaff_x24;
  char *pcVar24;
  char *unaff_x25;
  char *unaff_x26;
  long ****pppplStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 *puStack_7c8;
  long ****apppplStack_7c0 [3];
  undefined1 auStack_7a8 [24];
  long ****apppplStack_790 [2];
  char cStack_779;
  long lStack_778;
  char *pcStack_770;
  long ****pppplStack_768;
  long *****ppppplStack_760;
  long *****ppppplStack_758;
  long *****ppppplStack_750;
  long *****ppppplStack_748;
  long *****ppppplStack_740;
  long *****ppppplStack_738;
  undefined8 *****pppppuStack_730;
  code *pcStack_728;
  long ****pppplStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  long ****apppplStack_700 [3];
  undefined1 auStack_6e8 [24];
  long ****apppplStack_6d0 [2];
  char cStack_6b9;
  long lStack_6b8;
  char *pcStack_6b0;
  long ****pppplStack_6a8;
  long *****ppppplStack_6a0;
  long *****ppppplStack_698;
  long *****ppppplStack_690;
  long *****ppppplStack_688;
  long *****ppppplStack_680;
  long *****ppppplStack_678;
  undefined8 *****pppppuStack_670;
  code *pcStack_668;
  long ****pppplStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  long *****ppppplStack_648;
  long *****appppplStack_640 [2];
  char cStack_629;
  long lStack_628;
  long *****ppppplStack_620;
  long *****ppppplStack_618;
  long *****ppppplStack_610;
  long *****ppppplStack_608;
  undefined8 *****pppppuStack_600;
  code *pcStack_5f8;
  long ****pppplStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long *****ppppplStack_5d8;
  long *****appppplStack_5d0 [2];
  char cStack_5b9;
  long lStack_5b8;
  long *****ppppplStack_5b0;
  long *****ppppplStack_5a8;
  long *****ppppplStack_5a0;
  long *****ppppplStack_598;
  undefined8 *****pppppuStack_590;
  code *pcStack_588;
  long ****pppplStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  long ****apppplStack_560 [2];
  char cStack_549;
  long lStack_548;
  long *****ppppplStack_540;
  long *****ppppplStack_538;
  long *****ppppplStack_530;
  long ****pppplStack_528;
  long *****ppppplStack_520;
  long *****ppppplStack_518;
  undefined8 *****pppppuStack_510;
  code *pcStack_508;
  long ****pppplStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long *****ppppplStack_4e0;
  long ****apppplStack_4d8 [3];
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  long *****ppppplStack_4a0;
  long *****ppppplStack_498;
  long *****ppppplStack_490;
  long ****pppplStack_488;
  long *****ppppplStack_480;
  long *****ppppplStack_478;
  undefined8 *****pppppuStack_470;
  code *pcStack_468;
  long ****pppplStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long *****ppppplStack_440;
  long ****apppplStack_438 [3];
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  long *****ppppplStack_400;
  long *****ppppplStack_3f8;
  long *****ppppplStack_3f0;
  long ****pppplStack_3e8;
  long *****ppppplStack_3e0;
  long *****ppppplStack_3d8;
  undefined1 *****pppppuStack_3d0;
  code *pcStack_3c8;
  long ****pppplStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *****ppppplStack_3a0;
  long ****apppplStack_398 [3];
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  long *****ppppplStack_360;
  long *****ppppplStack_358;
  long *****ppppplStack_350;
  char *pcStack_348;
  long lStack_340;
  long *****ppppplStack_338;
  undefined1 ****ppppuStack_330;
  code *pcStack_328;
  long ****pppplStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long *****ppppplStack_308;
  long ****apppplStack_300 [3];
  undefined1 auStack_2e8 [24];
  long alStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  char *pcStack_2b0;
  long ****pppplStack_2a8;
  long *****ppppplStack_2a0;
  long *****ppppplStack_298;
  long *****ppppplStack_290;
  long *****ppppplStack_288;
  long *****ppppplStack_280;
  long *****ppppplStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  long ****pppplStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  long ****apppplStack_240 [3];
  undefined1 auStack_228 [24];
  long ****apppplStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  char *pcStack_1f0;
  long ****pppplStack_1e8;
  long *****ppppplStack_1e0;
  long *****ppppplStack_1d8;
  long *****ppppplStack_1d0;
  long *****ppppplStack_1c8;
  long *****ppppplStack_1c0;
  long *****ppppplStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  long ****pppplStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  long ****apppplStack_180 [3];
  undefined1 auStack_168 [24];
  long ****apppplStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  long ****pppplStack_128;
  long *****ppppplStack_120;
  long *****ppppplStack_118;
  long *****ppppplStack_110;
  char *pcStack_108;
  long lStack_100;
  long ****pppplStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long ****pppplStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long ****pppplStack_c0;
  long ****apppplStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long ****apppplStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  FUN_105328478(*(undefined8 *)(param_2 + 8),param_4,param_5,param_6,1,1);
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    return;
  }
  param_1 = param_1 * 1000.0;
  pppppplVar17 = (long ******)(long)param_1;
  pppppplVar16 = (long ******)0x1;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar2 = (long *****)0x0;
  pppppplVar22 = param_4;
  pppppplVar6 = param_5;
  pppppplVar19 = param_6;
  if (lVar1 != 0) {
    unaff_x21 = (long *****)0x1;
    ppppplVar2 = *(long ******)(lVar1 + 8);
    pppppplVar22 = (long ******)&UNK_110879688;
    (*(code *)(*ppppplVar2)[5])();
    unaff_x22 = param_4;
    unaff_x23 = param_6;
    unaff_x24 = param_5;
    if ((int)ppppplVar2 != 0) {
      plVar18 = *(long **)(lVar1 + 8);
      unaff_x25 = "false";
      unaff_x26 = "true";
      pcVar4 = unaff_x26;
      if ((int)param_4 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(apppplStack_b8,pcVar4);
      pcVar4 = unaff_x26;
      if ((int)param_5 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(auStack_a0,pcVar4);
      unaff_x24 = (long ******)apppplStack_b8;
      pcVar4 = unaff_x26;
      if ((int)param_6 == 0) {
        pcVar4 = unaff_x25;
      }
      func_0x00010002b838(auStack_88,pcVar4);
      unaff_x22 = (long ******)apppplStack_70;
      func_0x00010002b838(unaff_x22,"true");
      pppplStack_d8 = (long ****)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      func_0x00010007e1e8(&pppplStack_d8,apppplStack_b8,&lStack_58,4);
      pppppplVar22 = (long ******)&UNK_110879688;
      unaff_x21 = &pppplStack_d8;
      pppppplVar6 = (long ******)&pppplStack_d8;
      (**(code **)(*plVar18 + 0x18))(plVar18);
      ppppplVar2 = &pppplStack_c0;
      pppplStack_c0 = (long ****)unaff_x21;
      func_0x00010007e5dc();
      lVar1 = 0;
      pppppplVar19 = pppppplVar17;
      do {
        if ((&cStack_59)[lVar1] < '\0') {
          ppppplVar2 = *(long ******)((long)apppplStack_70 + lVar1);
          __ZdlPv();
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pppplStack_c0 = (long ****)unaff_x21;
  func_0x00010007e5dc(&pppplStack_c0);
  lVar1 = -0x60;
  pcVar4 = &cStack_59;
  do {
    pcVar20 = pcVar4 + -0x18;
    if (*pcVar4 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar4 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar4 = pcVar20;
  } while (lVar1 != 0);
  ppppplVar3 = ppppplVar2;
  __Unwind_Resume();
  pppppplVar7 = (long ******)&pppplStack_1a0;
  pcStack_e8 = FUN_10532886c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar17 = pppppplVar22;
  pppppplVar10 = pppppplVar6;
  pcVar4 = (char *)pppppplVar19;
  pppppplVar9 = pppppplVar16;
  pcStack_130 = unaff_x26;
  pppplStack_128 = (long ****)unaff_x25;
  ppppplStack_120 = (long *****)unaff_x24;
  ppppplStack_118 = (long *****)unaff_x23;
  ppppplStack_110 = (long *****)unaff_x22;
  pcStack_108 = pcVar20;
  lStack_100 = lVar1;
  pppplStack_f8 = (long ****)ppppplVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppplVar22);
  _objc_retain(pppppplVar6);
  if (ppppplVar3 != (long *****)0x0) {
    pppplVar23 = ppppplVar3[1];
    _objc_retain(pppppplVar22);
    if (pppppplVar22 == (long ******)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)pppppplVar22;
      _objc_retainAutorelease(pppppplVar22);
      func_0x00010bdc3520();
    }
    _objc_release(pppppplVar22);
    func_0x00010002b838(apppplStack_180,pcVar4);
    _objc_retain(pppppplVar6);
    if (pppppplVar6 == (long ******)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pppppplVar6);
      pcVar4 = (char *)pppppplVar6;
      func_0x00010bdc3520(pppppplVar6);
    }
    _objc_release(pppppplVar6);
    func_0x00010002b838(auStack_168,pcVar4);
    unaff_x25 = (char *)apppplStack_180;
    unaff_x24 = (long ******)apppplStack_150;
    pcVar4 = "true";
    if ((int)pppppplVar19 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar4);
    pppplStack_1a0 = (long ****)0x0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&pppplStack_1a0,apppplStack_180,&lStack_138,3);
    pppppplVar17 = (long ******)&UNK_1108796d8;
    (*(code *)(*pppplVar23)[3])(pppplVar23);
    puStack_188 = (undefined1 *)&pppplStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    lVar1 = 0;
    pppppplVar10 = pppppplVar7;
    pcVar4 = (char *)pppppplVar16;
    do {
      if ((&cStack_139)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)apppplStack_150 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      pppppplVar19 = (long ******)&pppplStack_1a0;
    } while (lVar1 != -0x48);
  }
  _objc_release(pppppplVar6);
  pppppplVar16 = pppppplVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppppplVar6);
  ppppplStack_1d0 = apppplStack_180;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != (long ******)ppppplStack_1d0);
  _objc_release(pppppplVar6);
  _objc_release(pppppplVar22);
  pppppplVar5 = pppppplVar16;
  __Unwind_Resume();
  pppppplVar11 = (long ******)&pppplStack_260;
  pcStack_1a8 = FUN_105328ae0;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar7 = pppppplVar17;
  pppppplVar14 = pppppplVar10;
  pppppplVar15 = (long ******)pcVar4;
  pppppplVar13 = pppppplVar9;
  pcStack_1f0 = unaff_x26;
  pppplStack_1e8 = (long ****)unaff_x25;
  ppppplStack_1e0 = (long *****)unaff_x24;
  ppppplStack_1d8 = (long *****)pppppplVar19;
  ppppplStack_1c8 = (long *****)pppppplVar16;
  ppppplStack_1c0 = (long *****)pppppplVar6;
  ppppplStack_1b8 = (long *****)pppppplVar22;
  ppuStack_1b0 = &puStack_f0;
  _objc_retain(pppppplVar17);
  _objc_retain(pppppplVar10);
  if (pppppplVar5 != (long ******)0x0) {
    ppppplVar2 = pppppplVar5[1];
    _objc_retain(pppppplVar17);
    if (pppppplVar17 == (long ******)0x0) {
      pcVar20 = "";
    }
    else {
      pcVar20 = (char *)pppppplVar17;
      _objc_retainAutorelease(pppppplVar17);
      func_0x00010bdc3520();
    }
    _objc_release(pppppplVar17);
    func_0x00010002b838(apppplStack_240,pcVar20);
    _objc_retain(pppppplVar10);
    if (pppppplVar10 == (long ******)0x0) {
      pcVar20 = "";
    }
    else {
      _objc_retainAutorelease(pppppplVar10);
      pcVar20 = (char *)pppppplVar10;
      func_0x00010bdc3520(pppppplVar10);
    }
    _objc_release(pppppplVar10);
    func_0x00010002b838(auStack_228,pcVar20);
    unaff_x25 = (char *)apppplStack_240;
    unaff_x24 = (long ******)apppplStack_210;
    pcVar20 = "true";
    if ((int)pcVar4 == 0) {
      pcVar20 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar20);
    pppplStack_260 = (long ****)0x0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&pppplStack_260,apppplStack_240,&lStack_1f8,3);
    pppppplVar7 = (long ******)&UNK_110879728;
    (*(code *)(*ppppplVar2)[3])(ppppplVar2);
    puStack_248 = (undefined1 *)&pppplStack_260;
    func_0x00010007e5dc(&puStack_248);
    lVar1 = 0;
    pppppplVar14 = pppppplVar11;
    pppppplVar15 = pppppplVar9;
    do {
      if ((&cStack_1f9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)apppplStack_210 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      pcVar4 = (char *)&pppplStack_260;
    } while (lVar1 != -0x48);
  }
  _objc_release(pppppplVar10);
  pppppplVar22 = pppppplVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppppplVar10);
  ppppplStack_290 = apppplStack_240;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != (long ******)ppppplStack_290);
  _objc_release(pppppplVar10);
  _objc_release(pppppplVar17);
  pppppplVar19 = pppppplVar22;
  __Unwind_Resume();
  pppppplVar5 = (long ******)&pppplStack_320;
  pcStack_268 = FUN_105328d54;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar6 = (long ******)0x0;
  pppppplVar16 = pppppplVar15;
  pppppplVar9 = (long ******)ppppplStack_290;
  pcVar24 = (char *)unaff_x24;
  pcVar20 = unaff_x25;
  pcStack_2b0 = unaff_x26;
  pppplStack_2a8 = (long ****)unaff_x25;
  ppppplStack_2a0 = (long *****)unaff_x24;
  ppppplStack_298 = (long *****)pcVar4;
  ppppplStack_288 = (long *****)pppppplVar22;
  ppppplStack_280 = (long *****)pppppplVar10;
  ppppplStack_278 = (long *****)pppppplVar17;
  pppuStack_270 = &ppuStack_1b0;
  if (pppppplVar19 != (long ******)0x0) {
    ppppplVar2 = pppppplVar19[1];
    pcVar24 = "false";
    pcVar20 = "true";
    pcVar4 = pcVar20;
    if ((int)pppppplVar7 == 0) {
      pcVar4 = pcVar24;
    }
    pppppplVar22 = pppppplVar13;
    func_0x00010002b838(apppplStack_300,pcVar4);
    pcVar4 = pcVar20;
    if ((int)pppppplVar14 == 0) {
      pcVar4 = pcVar24;
    }
    func_0x00010002b838(auStack_2e8,pcVar4);
    pcVar4 = (char *)apppplStack_300;
    pcVar8 = pcVar20;
    if ((int)pppppplVar15 == 0) {
      pcVar8 = pcVar24;
    }
    func_0x00010002b838(alStack_2d0,pcVar8);
    pppplStack_320 = (long ****)0x0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x00010007e1e8(&pppplStack_320,apppplStack_300,&lStack_2b8,3);
    pppppplVar7 = (long ******)&UNK_110879778;
    (*(code *)(*ppppplVar2)[3])(ppppplVar2);
    pppppplVar6 = &ppppplStack_308;
    ppppplStack_308 = &pppplStack_320;
    func_0x00010007e5dc();
    lVar1 = 0;
    pppppplVar14 = pppppplVar5;
    pppppplVar16 = pppppplVar13;
    pppppplVar13 = pppppplVar22;
    do {
      if ((&cStack_2b9)[lVar1] < '\0') {
        pppppplVar6 = *(long *******)((long)alStack_2d0 + lVar1);
        __ZdlPv();
      }
      lVar1 = lVar1 + -0x18;
      pppppplVar22 = (long ******)&pppplStack_320;
      pppppplVar9 = pppppplVar15;
    } while (lVar1 != -0x48);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  ppppplStack_308 = (long *****)pppppplVar22;
  func_0x00010007e5dc(&ppppplStack_308);
  lVar1 = -0x48;
  pcVar8 = &cStack_2b9;
  do {
    pcVar21 = pcVar8 + -0x18;
    if (*pcVar8 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar8 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar8 = pcVar21;
  } while (lVar1 != 0);
  pppppplVar17 = pppppplVar6;
  __Unwind_Resume();
  pcStack_328 = FUN_105328f0c;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar22 = pppppplVar7;
  pppppplVar19 = pppppplVar14;
  pppppplVar10 = pppppplVar16;
  ppppplStack_360 = (long *****)pcVar24;
  ppppplStack_358 = (long *****)pcVar4;
  ppppplStack_350 = (long *****)pppppplVar9;
  pcStack_348 = pcVar21;
  lStack_340 = lVar1;
  ppppplStack_338 = (long *****)pppppplVar6;
  ppppuStack_330 = &pppuStack_270;
  _objc_retain(pppppplVar7);
  ppppplVar2 = (long *****)0x0;
  if (pppppplVar17 != (long ******)0x0) {
    ppppplVar2 = pppppplVar17[1];
    _objc_retain(pppppplVar7);
    if (pppppplVar7 == (long ******)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)pppppplVar7;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pppppplVar7);
    pcVar24 = (char *)apppplStack_398;
    func_0x00010002b838(apppplStack_398,pcVar4);
    pcVar8 = "true";
    if ((int)pppppplVar14 == 0) {
      pcVar8 = "false";
    }
    func_0x00010002b838(auStack_380,pcVar8);
    pppplStack_3b8 = (long ****)0x0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    func_0x00010007e1e8(&pppplStack_3b8,apppplStack_398,&lStack_368,2);
    pppppplVar22 = (long ******)&UNK_1108797c8;
    pppppplVar14 = (long ******)&pppplStack_3b8;
    pppppplVar19 = (long ******)&pppplStack_3b8;
    (*(code *)(*ppppplVar2)[3])(ppppplVar2);
    ppppplStack_3a0 = (long *****)pppppplVar14;
    func_0x00010007e5dc(&ppppplStack_3a0);
    lVar1 = 0;
    ppppplVar2 = apppplStack_398;
    pppppplVar10 = pppppplVar16;
    do {
      if ((&cStack_369)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  pppppplVar6 = pppppplVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppppplVar7);
  _objc_release(pppppplVar7);
  pppppplVar9 = pppppplVar6;
  __Unwind_Resume();
  pcStack_3c8 = FUN_1053290f4;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar17 = pppppplVar22;
  pppppplVar16 = pppppplVar19;
  pppppplVar5 = pppppplVar10;
  ppppplStack_400 = (long *****)pcVar24;
  ppppplStack_3f8 = (long *****)pcVar4;
  ppppplStack_3f0 = (long *****)pppppplVar14;
  pppplStack_3e8 = (long ****)ppppplVar2;
  ppppplStack_3e0 = (long *****)pppppplVar6;
  ppppplStack_3d8 = (long *****)pppppplVar7;
  pppppuStack_3d0 = &ppppuStack_330;
  _objc_retain(pppppplVar22);
  ppppplVar2 = (long *****)0x0;
  if (pppppplVar9 != (long ******)0x0) {
    ppppplVar2 = pppppplVar9[1];
    _objc_retain(pppppplVar22);
    if (pppppplVar22 == (long ******)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)pppppplVar22;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pppppplVar22);
    pcVar24 = (char *)apppplStack_438;
    func_0x00010002b838(apppplStack_438,pcVar4);
    pcVar8 = "true";
    if ((int)pppppplVar19 == 0) {
      pcVar8 = "false";
    }
    func_0x00010002b838(auStack_420,pcVar8);
    pppplStack_458 = (long ****)0x0;
    uStack_450 = 0;
    uStack_448 = 0;
    func_0x00010007e1e8(&pppplStack_458,apppplStack_438,&lStack_408,2);
    pppppplVar17 = (long ******)&UNK_110879818;
    pppppplVar19 = (long ******)&pppplStack_458;
    pppppplVar16 = (long ******)&pppplStack_458;
    (*(code *)(*ppppplVar2)[3])(ppppplVar2);
    ppppplStack_440 = (long *****)pppppplVar19;
    func_0x00010007e5dc(&ppppplStack_440);
    lVar1 = 0;
    ppppplVar2 = apppplStack_438;
    pppppplVar5 = pppppplVar10;
    do {
      if ((&cStack_409)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  pppppplVar6 = pppppplVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppppplVar22);
  _objc_release(pppppplVar22);
  pppppplVar7 = pppppplVar6;
  __Unwind_Resume();
  pcStack_468 = FUN_1053292dc;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar10 = pppppplVar17;
  pppppplVar9 = pppppplVar16;
  pppppplVar14 = pppppplVar5;
  ppppplStack_4a0 = (long *****)pcVar24;
  ppppplStack_498 = (long *****)pcVar4;
  ppppplStack_490 = (long *****)pppppplVar19;
  pppplStack_488 = (long ****)ppppplVar2;
  ppppplStack_480 = (long *****)pppppplVar6;
  ppppplStack_478 = (long *****)pppppplVar22;
  pppppuStack_470 = &pppppuStack_3d0;
  _objc_retain(pppppplVar17);
  ppppplVar2 = (long *****)0x0;
  if (pppppplVar7 != (long ******)0x0) {
    ppppplVar2 = pppppplVar7[1];
    _objc_retain(pppppplVar17);
    if (pppppplVar17 == (long ******)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)pppppplVar17;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pppppplVar17);
    pcVar24 = (char *)apppplStack_4d8;
    func_0x00010002b838(apppplStack_4d8,pcVar4);
    pcVar8 = "true";
    if ((int)pppppplVar16 == 0) {
      pcVar8 = "false";
    }
    func_0x00010002b838(auStack_4c0,pcVar8);
    pppplStack_4f8 = (long ****)0x0;
    uStack_4f0 = 0;
    uStack_4e8 = 0;
    func_0x00010007e1e8(&pppplStack_4f8,apppplStack_4d8,&lStack_4a8,2);
    pppppplVar10 = (long ******)&UNK_110879868;
    pppppplVar16 = (long ******)&pppplStack_4f8;
    pppppplVar9 = (long ******)&pppplStack_4f8;
    (*(code *)(*ppppplVar2)[3])(ppppplVar2);
    ppppplStack_4e0 = (long *****)pppppplVar16;
    func_0x00010007e5dc(&ppppplStack_4e0);
    lVar1 = 0;
    ppppplVar2 = apppplStack_4d8;
    pppppplVar14 = pppppplVar5;
    do {
      if ((&cStack_4a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  pppppplVar22 = pppppplVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a8) {
    ___stack_chk_fail();
    _objc_release(pppppplVar17);
    _objc_release(pppppplVar17);
    pppppplVar19 = pppppplVar22;
    __Unwind_Resume();
    pppppplVar5 = (long ******)&pppplStack_580;
    pcStack_508 = FUN_1053294c4;
    lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppplVar6 = pppppplVar10;
    pppppplVar7 = pppppplVar9;
    ppppplStack_540 = (long *****)pcVar24;
    ppppplStack_538 = (long *****)pcVar4;
    ppppplStack_530 = (long *****)pppppplVar16;
    pppplStack_528 = (long ****)ppppplVar2;
    ppppplStack_520 = (long *****)pppppplVar22;
    ppppplStack_518 = (long *****)pppppplVar17;
    pppppuStack_510 = &pppppuStack_470;
    _objc_retain(pppppplVar10);
    pppppplVar22 = (long ******)0x0;
    if (pppppplVar19 != (long ******)0x0) {
      pppppplVar22 = (long ******)pppppplVar19[1];
      _objc_retain(pppppplVar10);
      if (pppppplVar10 == (long ******)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = (char *)pppppplVar10;
        _objc_retainAutorelease(pppppplVar10);
        func_0x00010bdc3520();
      }
      _objc_release(pppppplVar10);
      pcVar4 = (char *)apppplStack_560;
      func_0x00010002b838(apppplStack_560,pcVar8);
      pppplStack_580 = (long ****)0x0;
      uStack_578 = 0;
      uStack_570 = 0;
      func_0x00010007e1e8(&pppplStack_580,apppplStack_560,&lStack_548,1);
      pppppplVar6 = (long ******)&UNK_1108798b8;
      (*(code *)(*pppppplVar22)[3])(pppppplVar22);
      puStack_568 = (undefined1 *)&pppplStack_580;
      func_0x00010007e5dc(&puStack_568);
      pppppplVar7 = pppppplVar5;
      pppppplVar14 = pppppplVar9;
      pppppplVar16 = (long ******)&pppplStack_580;
      if (cStack_549 < '\0') {
        __ZdlPv(apppplStack_560[0]);
        pppppplVar7 = pppppplVar5;
        pppppplVar14 = pppppplVar9;
        pppppplVar16 = (long ******)&pppplStack_580;
      }
    }
    pppppplVar19 = pppppplVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pppppplVar10);
    _objc_release(pppppplVar10);
    pppppplVar5 = pppppplVar19;
    __Unwind_Resume();
    pppppplVar11 = (long ******)&pppplStack_5f0;
    pcStack_588 = FUN_105329638;
    lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppplVar9 = pppppplVar5;
    pppppplVar17 = pppppplVar6;
    pppppplVar15 = pppppplVar7;
    ppppplStack_5b0 = (long *****)pppppplVar16;
    ppppplStack_5a8 = (long *****)pppppplVar22;
    ppppplStack_5a0 = (long *****)pppppplVar19;
    ppppplStack_598 = (long *****)pppppplVar10;
    pppppuStack_590 = &pppppuStack_510;
    if (pppppplVar5 != (long ******)0x0) {
      pppppplVar9 = (long ******)pppppplVar5[1];
      pppppplVar17 = (long ******)&UNK_110879908;
      (*(code *)(*pppppplVar9)[5])();
      pppppplVar19 = pppppplVar5;
      pppppplVar22 = pppppplVar6;
      if ((int)pppppplVar9 != 0) {
        pppppplVar19 = (long ******)pppppplVar5[1];
        pcVar8 = "true";
        if ((int)pppppplVar6 == 0) {
          pcVar8 = "false";
        }
        func_0x00010002b838(appppplStack_5d0,pcVar8);
        pppplStack_5f0 = (long ****)0x0;
        uStack_5e8 = 0;
        uStack_5e0 = 0;
        func_0x00010007e1e8(&pppplStack_5f0,appppplStack_5d0,&lStack_5b8,1);
        pppppplVar14 = (long ******)((long)pppppplVar7 * 10);
        pppppplVar17 = (long ******)&UNK_110879908;
        (*(code *)(*pppppplVar19)[3])(pppppplVar19);
        pppppplVar9 = &ppppplStack_5d8;
        ppppplStack_5d8 = &pppplStack_5f0;
        func_0x00010007e5dc();
        pppppplVar15 = pppppplVar11;
        pppppplVar22 = (long ******)&pppplStack_5f0;
        if (cStack_5b9 < '\0') {
          pppppplVar9 = (long ******)appppplStack_5d0[0];
          __ZdlPv();
          pppppplVar15 = pppppplVar11;
          pppppplVar22 = (long ******)&pppplStack_5f0;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
      return;
    }
    ___stack_chk_fail();
    ppppplStack_5d8 = (long *****)pppppplVar22;
    func_0x00010007e5dc(&ppppplStack_5d8);
    if (cStack_5b9 < '\0') {
      __ZdlPv(appppplStack_5d0[0]);
    }
    pppppplVar7 = pppppplVar9;
    __Unwind_Resume();
    pppppplVar11 = (long ******)&pppplStack_660;
    pcStack_5f8 = FUN_105329778;
    lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppplVar10 = (long ******)0x0;
    pppppplVar6 = pppppplVar17;
    pppppplVar5 = pppppplVar15;
    ppppplStack_620 = (long *****)pppppplVar16;
    ppppplStack_618 = (long *****)pppppplVar22;
    ppppplStack_610 = (long *****)pppppplVar19;
    ppppplStack_608 = (long *****)pppppplVar9;
    pppppuStack_600 = &pppppuStack_590;
    if (pppppplVar7 != (long ******)0x0) {
      pppppplVar10 = (long ******)pppppplVar7[1];
      pppppplVar6 = (long ******)&UNK_110879958;
      (*(code *)(*pppppplVar10)[5])();
      pppppplVar19 = pppppplVar7;
      pppppplVar22 = pppppplVar17;
      if ((int)pppppplVar10 != 0) {
        pppppplVar19 = (long ******)pppppplVar7[1];
        pcVar8 = "true";
        if ((int)pppppplVar17 == 0) {
          pcVar8 = "false";
        }
        func_0x00010002b838(appppplStack_640,pcVar8);
        pppplStack_660 = (long ****)0x0;
        uStack_658 = 0;
        uStack_650 = 0;
        func_0x00010007e1e8(&pppplStack_660,appppplStack_640,&lStack_628,1);
        pppppplVar6 = (long ******)&UNK_110879958;
        (*(code *)(*pppppplVar19)[3])(pppppplVar19);
        pppppplVar10 = &ppppplStack_648;
        ppppplStack_648 = &pppplStack_660;
        func_0x00010007e5dc();
        pppppplVar5 = pppppplVar11;
        pppppplVar14 = pppppplVar15;
        pppppplVar22 = (long ******)&pppplStack_660;
        if (cStack_629 < '\0') {
          pppppplVar10 = (long ******)appppplStack_640[0];
          __ZdlPv();
          pppppplVar5 = pppppplVar11;
          pppppplVar14 = pppppplVar15;
          pppppplVar22 = (long ******)&pppplStack_660;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
      return;
    }
    ___stack_chk_fail();
    ppppplStack_648 = (long *****)pppppplVar22;
    func_0x00010007e5dc(&ppppplStack_648);
    if (cStack_629 < '\0') {
      __ZdlPv(appppplStack_640[0]);
    }
    pppppplVar9 = pppppplVar10;
    __Unwind_Resume();
    pppppplVar12 = (long ******)&pppplStack_720;
    pcStack_668 = FUN_1053298b4;
    lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppplVar17 = pppppplVar6;
    pppppplVar7 = pppppplVar5;
    pppppplVar15 = pppppplVar14;
    pppppplVar11 = pppppplVar13;
    pcStack_6b0 = unaff_x26;
    pppplStack_6a8 = (long ****)pcVar20;
    ppppplStack_6a0 = (long *****)pcVar24;
    ppppplStack_698 = (long *****)pcVar4;
    ppppplStack_690 = (long *****)pppppplVar16;
    ppppplStack_688 = (long *****)pppppplVar22;
    ppppplStack_680 = (long *****)pppppplVar19;
    ppppplStack_678 = (long *****)pppppplVar10;
    pppppuStack_670 = &pppppuStack_600;
    _objc_retain(pppppplVar6);
    _objc_retain(pppppplVar5);
    if (pppppplVar9 != (long ******)0x0) {
      ppppplVar2 = pppppplVar9[1];
      pppppplVar17 = (long ******)&UNK_1108799a8;
      (*(code *)(*ppppplVar2)[5])();
      if ((int)ppppplVar2 != 0) {
        ppppplVar2 = pppppplVar9[1];
        _objc_retain(pppppplVar6);
        if (pppppplVar6 == (long ******)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = (char *)pppppplVar6;
          _objc_retainAutorelease(pppppplVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pppppplVar6);
        func_0x00010002b838(apppplStack_700,pcVar4);
        _objc_retain(pppppplVar5);
        if (pppppplVar5 == (long ******)0x0) {
          pcVar4 = "";
        }
        else {
          _objc_retainAutorelease(pppppplVar5);
          pcVar4 = (char *)pppppplVar5;
          func_0x00010bdc3520(pppppplVar5);
        }
        _objc_release(pppppplVar5);
        func_0x00010002b838(auStack_6e8,pcVar4);
        pcVar20 = (char *)apppplStack_700;
        pcVar24 = (char *)apppplStack_6d0;
        pcVar4 = "true";
        if ((int)pppppplVar14 == 0) {
          pcVar4 = "false";
        }
        func_0x00010002b838(pcVar24,pcVar4);
        pppplStack_720 = (long ****)0x0;
        uStack_718 = 0;
        uStack_710 = 0;
        func_0x00010007e1e8(&pppplStack_720,apppplStack_700,&lStack_6b8,3);
        pppppplVar15 = (long ******)((long)pppppplVar13 * 10);
        pppppplVar17 = (long ******)&UNK_1108799a8;
        (*(code *)(*ppppplVar2)[3])(ppppplVar2);
        puStack_708 = (undefined1 *)&pppplStack_720;
        func_0x00010007e5dc(&puStack_708);
        lVar1 = 0;
        pppppplVar7 = pppppplVar12;
        do {
          if ((&cStack_6b9)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)apppplStack_6d0 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
          pppppplVar14 = (long ******)&pppplStack_720;
        } while (lVar1 != -0x48);
      }
    }
    _objc_release(pppppplVar5);
    pppppplVar22 = pppppplVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6b8) {
      ___stack_chk_fail();
      _objc_release(pppppplVar5);
      ppppplStack_750 = apppplStack_700;
      do {
        pcVar24 = (char *)((long)pcVar24 + -0x18);
      } while ((long *****)pcVar24 != ppppplStack_750);
      _objc_release(pppppplVar5);
      _objc_release(pppppplVar6);
      pppppplVar16 = pppppplVar22;
      __Unwind_Resume();
      pppppplVar13 = (long ******)&pppplStack_7e0;
      pcStack_728 = FUN_105329b4c;
      lStack_778 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppppplVar19 = pppppplVar17;
      pppppplVar10 = pppppplVar7;
      pppppplVar9 = pppppplVar15;
      pcStack_770 = unaff_x26;
      pppplStack_768 = (long ****)pcVar20;
      ppppplStack_760 = (long *****)pcVar24;
      ppppplStack_758 = (long *****)pppppplVar14;
      ppppplStack_748 = (long *****)pppppplVar22;
      ppppplStack_740 = (long *****)pppppplVar5;
      ppppplStack_738 = (long *****)pppppplVar6;
      pppppuStack_730 = &pppppuStack_670;
      _objc_retain(pppppplVar17);
      _objc_retain(pppppplVar7);
      if (pppppplVar16 != (long ******)0x0) {
        ppppplVar2 = pppppplVar16[1];
        pppppplVar19 = (long ******)&UNK_1108799f8;
        (*(code *)(*ppppplVar2)[5])(ppppplVar2,&UNK_1108799f8);
        if ((int)ppppplVar2 != 0) {
          ppppplVar2 = pppppplVar16[1];
          _objc_retain(pppppplVar17);
          if (pppppplVar17 == (long ******)0x0) {
            pcVar4 = "";
          }
          else {
            pcVar4 = (char *)pppppplVar17;
            _objc_retainAutorelease(pppppplVar17);
            func_0x00010bdc3520();
          }
          _objc_release(pppppplVar17);
          func_0x00010002b838(apppplStack_7c0,pcVar4);
          _objc_retain(pppppplVar7);
          if (pppppplVar7 == (long ******)0x0) {
            pcVar4 = "";
          }
          else {
            _objc_retainAutorelease(pppppplVar7);
            pcVar4 = (char *)pppppplVar7;
            func_0x00010bdc3520(pppppplVar7);
          }
          _objc_release(pppppplVar7);
          func_0x00010002b838(auStack_7a8,pcVar4);
          pcVar24 = (char *)apppplStack_790;
          pcVar4 = "true";
          if ((int)pppppplVar15 == 0) {
            pcVar4 = "false";
          }
          func_0x00010002b838(pcVar24,pcVar4);
          pppplStack_7e0 = (long ****)0x0;
          uStack_7d8 = 0;
          uStack_7d0 = 0;
          func_0x00010007e1e8(&pppplStack_7e0,apppplStack_7c0,&lStack_778,3);
          pppppplVar19 = (long ******)&UNK_1108799f8;
          (*(code *)(*ppppplVar2)[3])(ppppplVar2,&UNK_1108799f8,&pppplStack_7e0,pppppplVar11);
          puStack_7c8 = (undefined1 *)&pppplStack_7e0;
          func_0x00010007e5dc(&puStack_7c8);
          lVar1 = 0;
          pppppplVar10 = pppppplVar13;
          pppppplVar9 = pppppplVar11;
          do {
            if ((&cStack_779)[lVar1] < '\0') {
              __ZdlPv(*(undefined8 *)((long)apppplStack_790 + lVar1));
            }
            lVar1 = lVar1 + -0x18;
          } while (lVar1 != -0x48);
        }
      }
      _objc_release(pppppplVar7);
      pppppplVar22 = pppppplVar17;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_778) {
        ___stack_chk_fail();
        _objc_release(pppppplVar7);
        do {
          pcVar24 = (char *)((long)pcVar24 + -0x18);
        } while ((long *****)pcVar24 != apppplStack_7c0);
        _objc_release(pppppplVar7);
        _objc_release(pppppplVar17);
        __Unwind_Resume();
        _objc_retain(pppppplVar19);
        _objc_retain(pppppplVar10);
        if (pppppplVar22 != (long ******)0x0) {
          FUN_105329b4c(pppppplVar22,pppppplVar19,pppppplVar10,pppppplVar9,(long)(param_1 * 1000.0))
          ;
        }
        _objc_release(pppppplVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pppppplVar19);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105326e00; end: 105326e1b; -[SCConfigMetricGraphene2 cofSyncRequestClientErrorCode:errorCode:isFullSync:] */

/* WARNING: Removing unreachable block (ram,0x000105329b14) */
/* WARNING: Removing unreachable block (ram,0x000105328ba0) */
/* WARNING: Removing unreachable block (ram,0x000105328d24) */
/* WARNING: Removing unreachable block (ram,0x000105329da8) */

void FUN_105326e00(double param_1,long param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,char *param_6)

{
  long lVar1;
  char *pcVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  char *pcVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long *plVar19;
  char *unaff_x24;
  undefined *puStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 *puStack_628;
  undefined *apuStack_620 [3];
  undefined1 auStack_608 [24];
  undefined *apuStack_5f0 [2];
  char cStack_5d9;
  long lStack_5d8;
  undefined *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined *apuStack_560 [3];
  undefined1 auStack_548 [24];
  undefined *apuStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined **ppuStack_4a8;
  undefined ***apppuStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined ***pppuStack_468;
  undefined8 ****ppppuStack_460;
  code *pcStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined **ppuStack_438;
  undefined ***apppuStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined8 ****ppppuStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined *apuStack_338 [3];
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_2a0;
  undefined *apuStack_298 [3];
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined **ppuStack_200;
  undefined *apuStack_1f8 [3];
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  char *pcStack_1a8;
  long lStack_1a0;
  undefined ***pppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined *apuStack_160 [3];
  undefined1 auStack_148 [24];
  long alStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined *apuStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar18 = &PTR____CFConstantStringClassReference_110dab238;
  lVar1 = *(long *)(param_2 + 8);
  ppuVar14 = (undefined **)0x1;
  ppuVar17 = &puStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = param_4;
  ppuVar5 = ppuVar18;
  ppuVar12 = (undefined **)param_6;
  _objc_retain(param_4);
  _objc_retain(&PTR____CFConstantStringClassReference_110dab238);
  if (lVar1 != 0) {
    plVar19 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(apuStack_a0,pcVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110dab238);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dab238);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110dab238);
    _objc_release(&PTR____CFConstantStringClassReference_110dab238);
    func_0x00010002b838(auStack_88,ppuVar18);
    unaff_x24 = (char *)apuStack_70;
    pcVar2 = "true";
    if ((int)param_6 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    puStack_c0 = (undefined *)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&puStack_c0,apuStack_a0,&lStack_58,3);
    ppuVar15 = (undefined **)&UNK_110879728;
    ppuVar12 = (undefined **)0x1;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_a8 = (undefined1 *)&puStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar1 = 0;
    ppuVar5 = ppuVar17;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)apuStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      param_6 = (char *)&puStack_c0;
    } while (lVar1 != -0x48);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dab238);
  ppuVar18 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dab238);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while ((undefined **)unaff_x24 != apuStack_a0);
  _objc_release(&PTR____CFConstantStringClassReference_110dab238);
  _objc_release(param_4);
  ppuVar17 = ppuVar18;
  __Unwind_Resume();
  ppuVar8 = &puStack_180;
  pcStack_c8 = FUN_105328d54;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)0x0;
  ppuVar4 = ppuVar12;
  ppuVar9 = apuStack_a0;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (ppuVar17 != (undefined **)0x0) {
    plVar19 = (long *)ppuVar17[1];
    unaff_x24 = "false";
    pcVar2 = "true";
    pcVar16 = pcVar2;
    if ((int)ppuVar15 == 0) {
      pcVar16 = unaff_x24;
    }
    ppuVar18 = ppuVar14;
    func_0x00010002b838(apuStack_160,pcVar16);
    pcVar16 = pcVar2;
    if ((int)ppuVar5 == 0) {
      pcVar16 = unaff_x24;
    }
    func_0x00010002b838(auStack_148,pcVar16);
    param_6 = (char *)apuStack_160;
    if ((int)ppuVar12 == 0) {
      pcVar2 = unaff_x24;
    }
    func_0x00010002b838(alStack_130,pcVar2);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&puStack_180,apuStack_160,&lStack_118,3);
    ppuVar15 = (undefined **)&UNK_110879778;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pppuVar3 = &ppuStack_168;
    ppuStack_168 = &puStack_180;
    func_0x00010007e5dc();
    lVar1 = 0;
    ppuVar5 = ppuVar8;
    ppuVar4 = ppuVar14;
    ppuVar14 = ppuVar18;
    do {
      if ((&cStack_119)[lVar1] < '\0') {
        pppuVar3 = *(undefined ****)((long)alStack_130 + lVar1);
        __ZdlPv();
      }
      lVar1 = lVar1 + -0x18;
      ppuVar18 = &puStack_180;
      ppuVar9 = ppuVar12;
    } while (lVar1 != -0x48);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_168 = ppuVar18;
  func_0x00010007e5dc(&ppuStack_168);
  lVar1 = -0x48;
  pcVar2 = &cStack_119;
  do {
    pcVar16 = pcVar2 + -0x18;
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar2 = pcVar16;
  } while (lVar1 != 0);
  pppuVar7 = pppuVar3;
  __Unwind_Resume();
  pcStack_188 = FUN_105328f0c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = ppuVar15;
  ppuVar12 = ppuVar5;
  ppuVar8 = ppuVar4;
  ppuStack_1c0 = (undefined **)unaff_x24;
  ppuStack_1b8 = (undefined **)param_6;
  ppuStack_1b0 = ppuVar9;
  pcStack_1a8 = pcVar16;
  lStack_1a0 = lVar1;
  pppuStack_198 = pppuVar3;
  ppuStack_190 = &puStack_d0;
  _objc_retain(ppuVar15);
  ppuVar17 = (undefined **)0x0;
  if (pppuVar7 != (undefined ***)0x0) {
    ppuVar17 = pppuVar7[1];
    _objc_retain(ppuVar15);
    if (ppuVar15 == (undefined **)0x0) {
      param_6 = "";
    }
    else {
      param_6 = (char *)ppuVar15;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar15);
    unaff_x24 = (char *)apuStack_1f8;
    func_0x00010002b838(apuStack_1f8,param_6);
    pcVar2 = "true";
    if ((int)ppuVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_1e0,pcVar2);
    puStack_218 = (undefined *)0x0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&puStack_218,apuStack_1f8,&lStack_1c8,2);
    ppuVar18 = (undefined **)&UNK_1108797c8;
    ppuVar5 = &puStack_218;
    ppuVar12 = &puStack_218;
    (**(code **)(*ppuVar17 + 0x18))(ppuVar17);
    ppuStack_200 = ppuVar5;
    func_0x00010007e5dc(&ppuStack_200);
    lVar1 = 0;
    ppuVar17 = apuStack_1f8;
    ppuVar8 = ppuVar4;
    do {
      if ((&cStack_1c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppuVar4 = ppuVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar15);
  _objc_release(ppuVar15);
  ppuVar13 = ppuVar4;
  __Unwind_Resume();
  pcStack_228 = FUN_1053290f4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar18;
  ppuVar10 = ppuVar12;
  ppuVar11 = ppuVar8;
  ppuStack_260 = (undefined **)unaff_x24;
  ppuStack_258 = (undefined **)param_6;
  ppuStack_250 = ppuVar5;
  ppuStack_248 = ppuVar17;
  ppuStack_240 = ppuVar4;
  ppuStack_238 = ppuVar15;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(ppuVar18);
  ppuVar15 = (undefined **)0x0;
  if (ppuVar13 != (undefined **)0x0) {
    plVar19 = (long *)ppuVar13[1];
    _objc_retain(ppuVar18);
    if (ppuVar18 == (undefined **)0x0) {
      param_6 = "";
    }
    else {
      param_6 = (char *)ppuVar18;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar18);
    unaff_x24 = (char *)apuStack_298;
    func_0x00010002b838(apuStack_298,param_6);
    pcVar2 = "true";
    if ((int)ppuVar12 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_280,pcVar2);
    puStack_2b8 = (undefined *)0x0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    func_0x00010007e1e8(&puStack_2b8,apuStack_298,&lStack_268,2);
    ppuVar9 = (undefined **)&UNK_110879818;
    ppuVar12 = &puStack_2b8;
    ppuVar10 = &puStack_2b8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    ppuStack_2a0 = ppuVar12;
    func_0x00010007e5dc(&ppuStack_2a0);
    lVar1 = 0;
    ppuVar15 = apuStack_298;
    ppuVar11 = ppuVar8;
    do {
      if ((&cStack_269)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppuVar5 = ppuVar18;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar18);
  _objc_release(ppuVar18);
  ppuVar8 = ppuVar5;
  __Unwind_Resume();
  pcStack_2c8 = FUN_1053292dc;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar17 = ppuVar9;
  ppuVar4 = ppuVar10;
  ppuVar13 = ppuVar11;
  ppuStack_300 = (undefined **)unaff_x24;
  ppuStack_2f8 = (undefined **)param_6;
  ppuStack_2f0 = ppuVar12;
  ppuStack_2e8 = ppuVar15;
  ppuStack_2e0 = ppuVar5;
  ppuStack_2d8 = ppuVar18;
  ppppuStack_2d0 = &pppuStack_230;
  _objc_retain(ppuVar9);
  ppuVar18 = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    plVar19 = (long *)ppuVar8[1];
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      param_6 = "";
    }
    else {
      param_6 = (char *)ppuVar9;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar9);
    unaff_x24 = (char *)apuStack_338;
    func_0x00010002b838(apuStack_338,param_6);
    pcVar2 = "true";
    if ((int)ppuVar10 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_320,pcVar2);
    puStack_358 = (undefined *)0x0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&puStack_358,apuStack_338,&lStack_308,2);
    ppuVar17 = (undefined **)&UNK_110879868;
    ppuVar10 = &puStack_358;
    ppuVar4 = &puStack_358;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    ppuStack_340 = ppuVar10;
    func_0x00010007e5dc(&ppuStack_340);
    lVar1 = 0;
    ppuVar18 = apuStack_338;
    ppuVar13 = ppuVar11;
    do {
      if ((&cStack_309)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  ppuVar15 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar9);
  _objc_release(ppuVar9);
  ppuVar12 = ppuVar15;
  __Unwind_Resume();
  ppuVar11 = &puStack_3e0;
  pcStack_368 = FUN_1053294c4;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar17;
  ppuVar8 = ppuVar4;
  ppuStack_3a0 = (undefined **)unaff_x24;
  ppuStack_398 = (undefined **)param_6;
  ppuStack_390 = ppuVar10;
  ppuStack_388 = ppuVar18;
  ppuStack_380 = ppuVar15;
  ppuStack_378 = ppuVar9;
  ppppuStack_370 = &ppppuStack_2d0;
  _objc_retain(ppuVar17);
  ppuVar18 = (undefined **)0x0;
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar18 = (undefined **)ppuVar12[1];
    _objc_retain(ppuVar17);
    if (ppuVar17 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar17;
      _objc_retainAutorelease(ppuVar17);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar17);
    func_0x00010002b838(auStack_3c0,pcVar2);
    puStack_3e0 = (undefined *)0x0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x00010007e1e8(&puStack_3e0,auStack_3c0,&lStack_3a8,1);
    ppuVar5 = (undefined **)&UNK_1108798b8;
    (**(code **)(*ppuVar18 + 0x18))(ppuVar18);
    puStack_3c8 = (undefined1 *)&puStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    ppuVar8 = ppuVar11;
    ppuVar13 = ppuVar4;
    ppuVar10 = &puStack_3e0;
    if (cStack_3a9 < '\0') {
      __ZdlPv(auStack_3c0[0]);
      ppuVar8 = ppuVar11;
      ppuVar13 = ppuVar4;
      ppuVar10 = &puStack_3e0;
    }
  }
  ppuVar15 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar17);
  _objc_release(ppuVar17);
  ppuVar4 = ppuVar15;
  __Unwind_Resume();
  ppuVar11 = &puStack_450;
  pcStack_3e8 = FUN_105329638;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)0x0;
  ppuVar12 = ppuVar5;
  ppuVar9 = ppuVar8;
  ppuStack_410 = ppuVar10;
  ppuStack_408 = ppuVar18;
  ppuStack_400 = ppuVar15;
  ppuStack_3f8 = ppuVar17;
  ppppuStack_3f0 = &ppppuStack_370;
  if (ppuVar4 != (undefined **)0x0) {
    pppuVar3 = (undefined ***)ppuVar4[1];
    ppuVar12 = (undefined **)&UNK_110879908;
    (*(code *)(*pppuVar3)[5])();
    ppuVar15 = ppuVar4;
    ppuVar18 = ppuVar5;
    if ((int)pppuVar3 != 0) {
      ppuVar15 = (undefined **)ppuVar4[1];
      pcVar2 = "true";
      if ((int)ppuVar5 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(apppuStack_430,pcVar2);
      puStack_450 = (undefined *)0x0;
      uStack_448 = 0;
      uStack_440 = 0;
      func_0x00010007e1e8(&puStack_450,apppuStack_430,&lStack_418,1);
      ppuVar13 = (undefined **)((long)ppuVar8 * 10);
      ppuVar12 = (undefined **)&UNK_110879908;
      (**(code **)(*ppuVar15 + 0x18))(ppuVar15);
      pppuVar3 = &ppuStack_438;
      ppuStack_438 = &puStack_450;
      func_0x00010007e5dc();
      ppuVar9 = ppuVar11;
      ppuVar18 = &puStack_450;
      if (cStack_419 < '\0') {
        pppuVar3 = apppuStack_430[0];
        __ZdlPv();
        ppuVar9 = ppuVar11;
        ppuVar18 = &puStack_450;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_438 = ppuVar18;
  func_0x00010007e5dc(&ppuStack_438);
  if (cStack_419 < '\0') {
    __ZdlPv(apppuStack_430[0]);
  }
  pppuVar6 = pppuVar3;
  __Unwind_Resume();
  ppuVar4 = &puStack_4c0;
  pcStack_458 = FUN_105329778;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = (undefined ***)0x0;
  ppuVar5 = ppuVar12;
  ppuVar17 = ppuVar9;
  ppuStack_480 = ppuVar10;
  ppuStack_478 = ppuVar18;
  ppuStack_470 = ppuVar15;
  pppuStack_468 = pppuVar3;
  ppppuStack_460 = &ppppuStack_3f0;
  if (pppuVar6 != (undefined ***)0x0) {
    pppuVar7 = (undefined ***)pppuVar6[1];
    ppuVar5 = (undefined **)&UNK_110879958;
    (*(code *)(*pppuVar7)[5])();
    ppuVar18 = ppuVar12;
    if ((int)pppuVar7 != 0) {
      ppuVar18 = pppuVar6[1];
      pcVar2 = "true";
      if ((int)ppuVar12 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(apppuStack_4a0,pcVar2);
      puStack_4c0 = (undefined *)0x0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      func_0x00010007e1e8(&puStack_4c0,apppuStack_4a0,&lStack_488,1);
      ppuVar5 = (undefined **)&UNK_110879958;
      (**(code **)(*ppuVar18 + 0x18))(ppuVar18);
      pppuVar7 = &ppuStack_4a8;
      ppuStack_4a8 = &puStack_4c0;
      func_0x00010007e5dc();
      ppuVar17 = ppuVar4;
      ppuVar13 = ppuVar9;
      ppuVar18 = &puStack_4c0;
      if (cStack_489 < '\0') {
        pppuVar7 = apppuStack_4a0[0];
        __ZdlPv();
        ppuVar17 = ppuVar4;
        ppuVar13 = ppuVar9;
        ppuVar18 = &puStack_4c0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_4a8 = ppuVar18;
  func_0x00010007e5dc(&ppuStack_4a8);
  if (cStack_489 < '\0') {
    __ZdlPv(apppuStack_4a0[0]);
  }
  __Unwind_Resume();
  ppuVar9 = &puStack_580;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar18 = ppuVar5;
  ppuVar15 = ppuVar17;
  ppuVar12 = ppuVar13;
  ppuVar4 = ppuVar14;
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar17);
  if (pppuVar7 != (undefined ***)0x0) {
    ppuVar8 = pppuVar7[1];
    ppuVar18 = (undefined **)&UNK_1108799a8;
    (**(code **)(*ppuVar8 + 0x28))();
    if ((int)ppuVar8 != 0) {
      ppuVar15 = pppuVar7[1];
      _objc_retain(ppuVar5);
      if (ppuVar5 == (undefined **)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)ppuVar5;
        _objc_retainAutorelease(ppuVar5);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar5);
      func_0x00010002b838(apuStack_560,pcVar2);
      _objc_retain(ppuVar17);
      if (ppuVar17 == (undefined **)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar17);
        pcVar2 = (char *)ppuVar17;
        func_0x00010bdc3520(ppuVar17);
      }
      _objc_release(ppuVar17);
      func_0x00010002b838(auStack_548,pcVar2);
      unaff_x24 = (char *)apuStack_530;
      pcVar2 = "true";
      if ((int)ppuVar13 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(unaff_x24,pcVar2);
      puStack_580 = (undefined *)0x0;
      uStack_578 = 0;
      uStack_570 = 0;
      func_0x00010007e1e8(&puStack_580,apuStack_560,&lStack_518,3);
      ppuVar12 = (undefined **)((long)ppuVar14 * 10);
      ppuVar18 = (undefined **)&UNK_1108799a8;
      (**(code **)(*ppuVar15 + 0x18))(ppuVar15);
      puStack_568 = (undefined1 *)&puStack_580;
      func_0x00010007e5dc(&puStack_568);
      lVar1 = 0;
      ppuVar15 = ppuVar9;
      do {
        if ((&cStack_519)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)apuStack_530 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(ppuVar17);
  ppuVar14 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_518) {
    ___stack_chk_fail();
    _objc_release(ppuVar17);
    do {
      unaff_x24 = (char *)((long)unaff_x24 + -0x18);
    } while ((undefined **)unaff_x24 != apuStack_560);
    _objc_release(ppuVar17);
    _objc_release(ppuVar5);
    __Unwind_Resume();
    ppuVar8 = &puStack_640;
    lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar5 = ppuVar18;
    ppuVar17 = ppuVar15;
    ppuVar9 = ppuVar12;
    _objc_retain(ppuVar18);
    _objc_retain(ppuVar15);
    if (ppuVar14 != (undefined **)0x0) {
      plVar19 = (long *)ppuVar14[1];
      ppuVar5 = (undefined **)&UNK_1108799f8;
      (**(code **)(*plVar19 + 0x28))(plVar19,&UNK_1108799f8);
      if ((int)plVar19 != 0) {
        plVar19 = (long *)ppuVar14[1];
        _objc_retain(ppuVar18);
        if (ppuVar18 == (undefined **)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)ppuVar18;
          _objc_retainAutorelease(ppuVar18);
          func_0x00010bdc3520();
        }
        _objc_release(ppuVar18);
        func_0x00010002b838(apuStack_620,pcVar2);
        _objc_retain(ppuVar15);
        if (ppuVar15 == (undefined **)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(ppuVar15);
          pcVar2 = (char *)ppuVar15;
          func_0x00010bdc3520(ppuVar15);
        }
        _objc_release(ppuVar15);
        func_0x00010002b838(auStack_608,pcVar2);
        unaff_x24 = (char *)apuStack_5f0;
        pcVar2 = "true";
        if ((int)ppuVar12 == 0) {
          pcVar2 = "false";
        }
        func_0x00010002b838(unaff_x24,pcVar2);
        puStack_640 = (undefined *)0x0;
        uStack_638 = 0;
        uStack_630 = 0;
        func_0x00010007e1e8(&puStack_640,apuStack_620,&lStack_5d8,3);
        ppuVar5 = (undefined **)&UNK_1108799f8;
        (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_1108799f8,&puStack_640,ppuVar4);
        puStack_628 = (undefined1 *)&puStack_640;
        func_0x00010007e5dc(&puStack_628);
        lVar1 = 0;
        ppuVar17 = ppuVar8;
        ppuVar9 = ppuVar4;
        do {
          if ((&cStack_5d9)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)apuStack_5f0 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x48);
      }
    }
    _objc_release(ppuVar15);
    ppuVar12 = ppuVar18;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5d8) {
      ___stack_chk_fail();
      _objc_release(ppuVar15);
      do {
        unaff_x24 = (char *)((long)unaff_x24 + -0x18);
      } while ((undefined **)unaff_x24 != apuStack_620);
      _objc_release(ppuVar15);
      _objc_release(ppuVar18);
      __Unwind_Resume();
      _objc_retain(ppuVar5);
      _objc_retain(ppuVar17);
      if (ppuVar12 != (undefined **)0x0) {
        FUN_105329b4c(ppuVar12,ppuVar5,ppuVar17,ppuVar9,(long)(param_1 * 1000.0));
      }
      _objc_release(ppuVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 105326e1c; end: 105326e27; -[SCConfigMetricGraphene2 experimentInitSuccess] */

void FUN_105326e1c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_11087b478);
    if ((int)plVar2 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_11087b478,&uStack_40,10);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
  }
  return;
}



/* Entry: 105326e28; end: 105326e97; -[SCConfigMetricGraphene2 experimentExposureAttempt:] */

void FUN_105326e28(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  ppuVar2 = param_3;
  func_0x00010c0720c0();
  ppuVar1 = param_3;
  if ((int)ppuVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2318;
  }
  FUN_10532de04(uVar3,ppuVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105326e98; end: 105326ea7; -[SCConfigMetricGraphene2 experimentSyncProcessingLatency:interval:] */

void FUN_105326e98(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x28);
  _objc_retain(&PTR____CFConstantStringClassReference_110dd2338);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    FUN_10532e8a8(lVar1,&PTR____CFConstantStringClassReference_110dd2338,param_4,
                  (long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(&PTR____CFConstantStringClassReference_110dd2338);
  return;
}



/* Entry: 105326ea8; end: 105326ebb; -[SCConfigMetricGraphene2 experimentFailedToParseVariable:] */

/* WARNING: Removing unreachable block (ram,0x00010532e00c) */

void FUN_105326ea8(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x28);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dd2338;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar4;
  _objc_retain(&PTR____CFConstantStringClassReference_110dd2338);
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110dd2338);
    ppuVar2 = ppuVar4;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dd2338);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110dd2338);
    func_0x00010002b838(auStack_78,ppuVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar3 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    ppuVar2 = (undefined **)&UNK_11087b428;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11087b428,&uStack_98,1);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(&PTR____CFConstantStringClassReference_110dd2338);
    __Unwind_Resume();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110dd2338;
    pcStack_a8 = FUN_10532e1cc;
    if (ppuVar4 != (undefined **)0x0) {
      plVar5 = (long *)ppuVar4[1];
      pcStack_c0 = param_3;
      puStack_b0 = &stack0xfffffffffffffff0;
      (**(code **)(*plVar5 + 0x28))(plVar5,&UNK_11087b478);
      if ((int)plVar5 != 0) {
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        (**(code **)(*(long *)ppuVar4[1] + 0x18))
                  (ppuVar4[1],&UNK_11087b478,&uStack_e0,(long)ppuVar2 * 10);
        puStack_c8 = (undefined1 *)&uStack_e0;
        func_0x00010007e5dc(&puStack_c8);
      }
    }
    return;
  }
  return;
}



/* Entry: 105326ebc; end: 105326fb7; -[SCConfigMetricGraphene2 experimentMissingVariable:studyName:variable:] */

void FUN_105326ebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_5;
  func_0x00010c08fa60();
  if (uVar1 < 0xb) {
    func_0x00010c08fa60(param_5);
  }
  uVar1 = param_5;
  func_0x00010c260c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532e3dc(uVar2,&PTR____CFConstantStringClassReference_110dd2338,param_4,param_3,uVar1,1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105326fb8; end: 105326fcb; -[SCConfigMetricGraphene2 experimentMissingStudy] */

/* WARNING: Removing unreachable block (ram,0x00010532e2cc) */
/* WARNING: Removing unreachable block (ram,0x00010532e6f4) */

void FUN_105326fb8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,char *param_5,
                  char *param_6,long param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  char *unaff_x25;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  char *pcStack_220;
  undefined **ppuStack_218;
  char *pcStack_210;
  long *plStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1e0 [24];
  undefined1 *puStack_1c8;
  undefined *apuStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  undefined **ppuStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  undefined **ppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  char acStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x28);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd2338;
  pcVar9 = (char *)0x1;
  pcVar4 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar3;
  _objc_retain(&PTR____CFConstantStringClassReference_110dd2338);
  if (lVar1 != 0) {
    plVar13 = *(long **)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110dd2338);
    ppuVar2 = ppuVar3;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dd2338);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110dd2338);
    func_0x00010002b838(auStack_60,ppuVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_11087b4c8;
    param_5 = (char *)0x1;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar9 = pcVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar9 = pcVar4;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110dd2338);
  _objc_release(&PTR____CFConstantStringClassReference_110dd2338);
  __Unwind_Resume();
  pcStack_88 = FUN_10532e3dc;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar2;
  pcVar4 = pcVar9;
  pcVar12 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  _objc_retain(pcVar9);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (ppuVar3 != (undefined **)0x0) {
    plVar13 = (long *)ppuVar3[1];
    ppuVar7 = (undefined **)&UNK_11087b518;
    (**(code **)(*plVar13 + 0x28))();
    if ((int)plVar13 != 0) {
      plVar13 = (long *)ppuVar3[1];
      _objc_retain(ppuVar2);
      if (ppuVar2 == (undefined **)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)ppuVar2;
        _objc_retainAutorelease(ppuVar2);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar2);
      func_0x00010002b838(acStack_138,pcVar4);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar4 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_120,pcVar4);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar4 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_108,pcVar4);
      _objc_retain(param_6);
      if (param_6 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(param_6);
        pcVar4 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_f0,pcVar4);
      acStack_158[0] = '\0';
      acStack_158[1] = '\0';
      acStack_158[2] = '\0';
      acStack_158[3] = '\0';
      acStack_158[4] = '\0';
      acStack_158[5] = '\0';
      acStack_158[6] = '\0';
      acStack_158[7] = '\0';
      acStack_158[8] = '\0';
      acStack_158[9] = '\0';
      acStack_158[10] = '\0';
      acStack_158[0xb] = '\0';
      acStack_158[0xc] = '\0';
      acStack_158[0xd] = '\0';
      acStack_158[0xe] = '\0';
      acStack_158[0xf] = '\0';
      acStack_158[0x10] = '\0';
      acStack_158[0x11] = '\0';
      acStack_158[0x12] = '\0';
      acStack_158[0x13] = '\0';
      acStack_158[0x14] = '\0';
      acStack_158[0x15] = '\0';
      acStack_158[0x16] = '\0';
      acStack_158[0x17] = '\0';
      func_0x00010007e1e8(acStack_158,acStack_138,&lStack_d8,4);
      pcVar12 = (char *)(param_7 * 10);
      ppuVar7 = (undefined **)&UNK_11087b518;
      unaff_x25 = acStack_158;
      pcVar4 = acStack_158;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b518,pcVar4,pcVar12);
      pcStack_140 = unaff_x25;
      func_0x00010007e5dc(&pcStack_140);
      lVar1 = 0;
      do {
        if ((&cStack_d9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x60);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(pcVar9);
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_6);
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != acStack_138);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(pcVar9);
    _objc_release(ppuVar2);
    ppuVar5 = ppuVar3;
    __Unwind_Resume();
    pcVar11 = acStack_1e0;
    pcStack_168 = FUN_10532e734;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar8 = ppuVar7;
    pcVar10 = pcVar4;
    pcStack_1a0 = acStack_138;
    ppuStack_198 = ppuVar3;
    pcStack_190 = param_6;
    pcStack_188 = param_5;
    pcStack_180 = pcVar9;
    ppuStack_178 = ppuVar2;
    ppuStack_170 = &puStack_90;
    _objc_retain(ppuVar7);
    plVar13 = (long *)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      plVar13 = (long *)ppuVar5[1];
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)ppuVar7;
        _objc_retainAutorelease(ppuVar7);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      ppuVar3 = apuStack_1c0;
      func_0x00010002b838(apuStack_1c0,pcVar9);
      acStack_1e0[0] = '\0';
      acStack_1e0[1] = '\0';
      acStack_1e0[2] = '\0';
      acStack_1e0[3] = '\0';
      acStack_1e0[4] = '\0';
      acStack_1e0[5] = '\0';
      acStack_1e0[6] = '\0';
      acStack_1e0[7] = '\0';
      acStack_1e0[8] = '\0';
      acStack_1e0[9] = '\0';
      acStack_1e0[10] = '\0';
      acStack_1e0[0xb] = '\0';
      acStack_1e0[0xc] = '\0';
      acStack_1e0[0xd] = '\0';
      acStack_1e0[0xe] = '\0';
      acStack_1e0[0xf] = '\0';
      acStack_1e0[0x10] = '\0';
      acStack_1e0[0x11] = '\0';
      acStack_1e0[0x12] = '\0';
      acStack_1e0[0x13] = '\0';
      acStack_1e0[0x14] = '\0';
      acStack_1e0[0x15] = '\0';
      acStack_1e0[0x16] = '\0';
      acStack_1e0[0x17] = '\0';
      func_0x00010007e1e8(acStack_1e0,apuStack_1c0,&lStack_1a8,1);
      ppuVar8 = (undefined **)&UNK_11087b568;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b568,acStack_1e0,pcVar4);
      puStack_1c8 = acStack_1e0;
      func_0x00010007e5dc(&puStack_1c8);
      pcVar10 = pcVar11;
      pcVar12 = pcVar4;
      param_6 = acStack_1e0;
      if (cStack_1a9 < '\0') {
        __ZdlPv(apuStack_1c0[0]);
        pcVar10 = pcVar11;
        pcVar12 = pcVar4;
        param_6 = acStack_1e0;
      }
    }
    ppuVar2 = ppuVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar7);
    _objc_release(ppuVar7);
    ppuVar6 = ppuVar2;
    __Unwind_Resume();
    pcStack_1e8 = FUN_10532e8a8;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar5 = ppuVar8;
    pcVar9 = pcVar10;
    pcStack_220 = acStack_138;
    ppuStack_218 = ppuVar3;
    pcStack_210 = param_6;
    plStack_208 = plVar13;
    ppuStack_200 = ppuVar2;
    ppuStack_1f8 = ppuVar7;
    pppuStack_1f0 = &ppuStack_170;
    _objc_retain(ppuVar8);
    _objc_retain(pcVar10);
    if (ppuVar6 != (undefined **)0x0) {
      plVar13 = (long *)ppuVar6[1];
      _objc_retain(ppuVar8);
      if (ppuVar8 == (undefined **)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = (char *)ppuVar8;
        _objc_retainAutorelease(ppuVar8);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar8);
      func_0x00010002b838(auStack_258,pcVar9);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar9 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar9 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_240,pcVar9);
      acStack_278[0] = '\0';
      acStack_278[1] = '\0';
      acStack_278[2] = '\0';
      acStack_278[3] = '\0';
      acStack_278[4] = '\0';
      acStack_278[5] = '\0';
      acStack_278[6] = '\0';
      acStack_278[7] = '\0';
      acStack_278[8] = '\0';
      acStack_278[9] = '\0';
      acStack_278[10] = '\0';
      acStack_278[0xb] = '\0';
      acStack_278[0xc] = '\0';
      acStack_278[0xd] = '\0';
      acStack_278[0xe] = '\0';
      acStack_278[0xf] = '\0';
      acStack_278[0x10] = '\0';
      acStack_278[0x11] = '\0';
      acStack_278[0x12] = '\0';
      acStack_278[0x13] = '\0';
      acStack_278[0x14] = '\0';
      acStack_278[0x15] = '\0';
      acStack_278[0x16] = '\0';
      acStack_278[0x17] = '\0';
      func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
      ppuVar5 = (undefined **)&UNK_11087b5b8;
      pcVar9 = acStack_278;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b5b8,pcVar9,pcVar12);
      pcStack_260 = acStack_278;
      func_0x00010007e5dc(&pcStack_260);
      lVar1 = 0;
      do {
        if ((&cStack_229)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(pcVar10);
    ppuVar3 = ppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      if (cStack_241 < '\0') {
        __ZdlPv(auStack_258[0]);
      }
      _objc_release(pcVar10);
      _objc_release(ppuVar8);
      __Unwind_Resume();
      _objc_retain(ppuVar5);
      _objc_retain(pcVar9);
      if (ppuVar3 != (undefined **)0x0) {
        FUN_10532e8a8(ppuVar3,ppuVar5,pcVar9,(long)(param_1 * 1000.0));
      }
      _objc_release(pcVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 105326fcc; end: 105326fdb; -[SCConfigMetricGraphene2 experimentEmptyStudySettings:] */

void FUN_105326fcc(long param_1,undefined8 param_2,char *param_3,long param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x28);
  pcVar5 = (char *)0x1;
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    param_4 = 1;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11087b338,acStack_80,1);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar5 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar5 = pcVar3;
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  pcStack_88 = FUN_10532de04;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  pcVar6 = pcVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x28))();
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_e0,pcVar3);
      acStack_100[0] = '\0';
      acStack_100[1] = '\0';
      acStack_100[2] = '\0';
      acStack_100[3] = '\0';
      acStack_100[4] = '\0';
      acStack_100[5] = '\0';
      acStack_100[6] = '\0';
      acStack_100[7] = '\0';
      acStack_100[8] = '\0';
      acStack_100[9] = '\0';
      acStack_100[10] = '\0';
      acStack_100[0xb] = '\0';
      acStack_100[0xc] = '\0';
      acStack_100[0xd] = '\0';
      acStack_100[0xe] = '\0';
      acStack_100[0xf] = '\0';
      acStack_100[0x10] = '\0';
      acStack_100[0x11] = '\0';
      acStack_100[0x12] = '\0';
      acStack_100[0x13] = '\0';
      acStack_100[0x14] = '\0';
      acStack_100[0x15] = '\0';
      acStack_100[0x16] = '\0';
      acStack_100[0x17] = '\0';
      func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
      param_4 = (long)pcVar5 * 10;
      pcVar4 = "";
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11087b388,acStack_100,param_4);
      puStack_e8 = acStack_100;
      func_0x00010007e5dc(&puStack_e8);
      pcVar6 = pcVar7;
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
        pcVar6 = pcVar7;
      }
    }
  }
  pcVar5 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcStack_108 = FUN_10532df9c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
  if (pcVar5 != (char *)0x0) {
    plVar8 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_178,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_160,pcVar2);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&uStack_198,auStack_178,&lStack_148,2);
    pcVar2 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11087b428,&uStack_198,param_4);
    puStack_180 = &uStack_198;
    func_0x00010007e5dc(&puStack_180);
    lVar1 = 0;
    do {
      if ((&cStack_149)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar5 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar4);
  __Unwind_Resume();
  pcStack_1a8 = FUN_10532e1cc;
  if (pcVar5 != (char *)0x0) {
    plVar8 = *(long **)(pcVar5 + 8);
    pcStack_1c0 = pcVar6;
    pcStack_1b8 = pcVar4;
    pppuStack_1b0 = &ppuStack_110;
    (**(code **)(*plVar8 + 0x28))(plVar8,&UNK_11087b478);
    if ((int)plVar8 != 0) {
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
                (*(long **)(pcVar5 + 8),&UNK_11087b478,&uStack_1e0,(long)pcVar2 * 10);
      puStack_1c8 = (undefined1 *)&uStack_1e0;
      func_0x00010007e5dc(&puStack_1c8);
    }
  }
  return;
}



/* Entry: 105326fdc; end: 105326fe7; -[SCConfigMetricGraphene2 experimentSyncSuccess] */

void FUN_105326fdc(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11087b608,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105326fe8; end: 105326ff7; -[SCConfigMetricGraphene2 experimentStudiesInSync:count:] */

void FUN_105326fe8(double param_1,long param_2,undefined8 param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x28);
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  pcVar6 = param_5;
  pcVar4 = param_5;
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "\x02";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11087b568,acStack_80,param_5);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar6 = pcVar3;
    pcVar4 = param_5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar6 = pcVar3;
      pcVar4 = param_5;
    }
  }
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar7 = pcVar6;
  _objc_retain(pcVar2);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_f8,pcVar3);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar3 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_e0,pcVar3);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar5 = "\x01";
    pcVar7 = acStack_118;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11087b5b8,pcVar7,pcVar4);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar1 = 0;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar2);
  __Unwind_Resume();
  _objc_retain(pcVar5);
  _objc_retain(pcVar7);
  if (pcVar4 != (char *)0x0) {
    FUN_10532e8a8(pcVar4,pcVar5,pcVar7,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return;
}



/* Entry: 105326ff8; end: 105327007; -[SCConfigMetricGraphene2 experimentChangedStudiesInSync:count:] */

void FUN_105326ff8(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x28);
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar4 = param_4;
  pcVar8 = param_4;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "\x02";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087b2e8,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar3;
    pcVar8 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar3;
      pcVar8 = param_4;
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  pcStack_88 = FUN_10532dc90;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar6 = pcVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      pcVar8 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_e0,pcVar8);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087b338,acStack_100,pcVar4);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar7;
    pcVar8 = pcVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar7;
      pcVar8 = pcVar4;
    }
  }
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcVar7 = acStack_180;
  pcStack_108 = FUN_10532de04;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar5;
  pcVar3 = pcVar6;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  if (pcVar4 != (char *)0x0) {
    plVar9 = *(long **)(pcVar4 + 8);
    pcVar2 = "";
    (**(code **)(*plVar9 + 0x28))();
    if ((int)plVar9 != 0) {
      plVar9 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_160,pcVar2);
      acStack_180[0] = '\0';
      acStack_180[1] = '\0';
      acStack_180[2] = '\0';
      acStack_180[3] = '\0';
      acStack_180[4] = '\0';
      acStack_180[5] = '\0';
      acStack_180[6] = '\0';
      acStack_180[7] = '\0';
      acStack_180[8] = '\0';
      acStack_180[9] = '\0';
      acStack_180[10] = '\0';
      acStack_180[0xb] = '\0';
      acStack_180[0xc] = '\0';
      acStack_180[0xd] = '\0';
      acStack_180[0xe] = '\0';
      acStack_180[0xf] = '\0';
      acStack_180[0x10] = '\0';
      acStack_180[0x11] = '\0';
      acStack_180[0x12] = '\0';
      acStack_180[0x13] = '\0';
      acStack_180[0x14] = '\0';
      acStack_180[0x15] = '\0';
      acStack_180[0x16] = '\0';
      acStack_180[0x17] = '\0';
      func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
      pcVar8 = (char *)((long)pcVar6 * 10);
      pcVar2 = "";
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087b388,acStack_180,pcVar8);
      puStack_168 = acStack_180;
      func_0x00010007e5dc(&puStack_168);
      pcVar3 = pcVar7;
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
        pcVar3 = pcVar7;
      }
    }
  }
  pcVar4 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcStack_188 = FUN_10532df9c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  if (pcVar4 != (char *)0x0) {
    plVar9 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_1f8,pcVar4);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar4 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_1e0,pcVar4);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar5 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087b428,&uStack_218,pcVar8);
    puStack_200 = &uStack_218;
    func_0x00010007e5dc(&puStack_200);
    lVar1 = 0;
    do {
      if ((&cStack_1c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcStack_228 = FUN_10532e1cc;
  if (pcVar4 != (char *)0x0) {
    plVar9 = *(long **)(pcVar4 + 8);
    pcStack_240 = pcVar3;
    pcStack_238 = pcVar2;
    pppuStack_230 = &pppuStack_190;
    (**(code **)(*plVar9 + 0x28))(plVar9,&UNK_11087b478);
    if ((int)plVar9 != 0) {
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
                (*(long **)(pcVar4 + 8),&UNK_11087b478,&uStack_260,(long)pcVar5 * 10);
      puStack_248 = (undefined1 *)&uStack_260;
      func_0x00010007e5dc(&puStack_248);
    }
  }
  return;
}



/* Entry: 105327008; end: 1053270d3; -[SCConfigMetricGraphene2 experimentAccessedStudy:] */

void FUN_105327008(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  ppuVar1 = param_3;
  func_0x00010c0720c0();
  ppuVar2 = param_3;
  if ((int)ppuVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dd2318;
  }
  FUN_10532d984(uVar3,ppuVar2,1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc1338;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc1338);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100111044(uVar3,ppuVar2,1,&PTR____CFConstantStringClassReference_110dd2358,1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053270d4; end: 1053270df; -[SCConfigMetricGraphene2 appStartExperimentReaderDecodeFailureCount:] */

void FUN_1053270d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110879d18,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1053270e0; end: 1053270eb; -[SCConfigMetricGraphene2 appStartExperimentReaderRetrieveFailureCount:] */

void FUN_1053270e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110879d68,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1053270ec; end: 1053270f7; -[SCConfigMetricGraphene2 appStartExperimentReaderSaveFailureCount:] */

void FUN_1053270ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110879db8,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1053270f8; end: 105327107; -[SCConfigMetricGraphene2 appStartExperimentReaderConfigSyncError:] */

void FUN_1053270f8(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110879ea8,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10532abd8;
  if (pcVar4 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar3;
    pcStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
              (*(long **)(pcVar4 + 8),&UNK_110879ef8,&uStack_c0,pcVar2);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105327108; end: 105327113; -[SCConfigMetricGraphene2 appStartExperimentReaderConfigSyncAttempt] */

void FUN_105327108(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110879ef8,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105327114; end: 10532713f; -[SCConfigMetricGraphene2 appStartExperimentReaderSyncWithFullSync:success:interval:] */

void FUN_105327114(double param_1,long param_2,undefined8 param_3,undefined *param_4,int param_5)

{
  long lVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined8 *unaff_x21;
  char *pcVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    return;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined8 **)0x0;
  if (lVar1 != 0) {
    plVar4 = *(long **)(lVar1 + 8);
    pcVar5 = "true";
    if ((int)param_4 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar5);
    pcVar5 = "true";
    if (param_5 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(alStack_60,pcVar5);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    param_4 = &UNK_110879cc8;
    unaff_x21 = &uStack_98;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110879cc8,&uStack_98,(long)(param_1 * 1000.0));
    ppuVar2 = &puStack_80;
    puStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        ppuVar2 = *(undefined8 ***)((long)alStack_60 + lVar1);
        __ZdlPv();
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puStack_80 = unaff_x21;
  func_0x00010007e5dc(&puStack_80);
  lVar1 = -0x30;
  pcVar5 = &cStack_49;
  do {
    if (*pcVar5 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar5 = pcVar5 + -0x18;
  } while (lVar1 != 0);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_10532a788;
  if (ppuVar3 != (undefined8 **)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    lStack_c0 = lVar1;
    ppuStack_b8 = ppuVar2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(*ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_110879d18,&uStack_e0,param_4);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 105327140; end: 10532714f; -[SCConfigMetricGraphene2 appStartExperimentReaderUnsupportedTypeForConfigId:count:] */

void FUN_105327140(long param_1,undefined8 param_2,char *param_3,undefined1 *param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110879e08,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_10532aa64;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_e0,pcVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110879ea8,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_10532abd8;
  if (pcVar4 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar3;
    pcStack_118 = pcVar2;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
              (*(long **)(pcVar4 + 8),&UNK_110879ef8,&uStack_140,pcVar5);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 105327150; end: 10532716b; -[SCConfigMetricGraphene2 aserStartupDurationMs:isMainThread:] */

void FUN_105327150(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined *puVar5;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  plVar2 = *(long **)(param_2 + 0x30);
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puVar5 = param_4;
  if (plVar2 != (long *)0x0) {
    ppuVar3 = (undefined1 **)plVar2[1];
    puVar5 = &UNK_1108793a8;
    (**(code **)(*ppuVar3 + 0x28))(ppuVar3,&UNK_1108793a8);
    unaff_x20 = plVar2;
    unaff_x21 = (undefined8 *)param_4;
    if ((int)ppuVar3 != 0) {
      unaff_x20 = (long *)plVar2[1];
      pcVar1 = "true";
      if ((int)param_4 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(appuStack_50,pcVar1);
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
      puVar5 = &UNK_1108793a8;
      (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1108793a8,&uStack_70,(long)(param_1 * 1000.0))
      ;
      ppuVar3 = &puStack_58;
      puStack_58 = (undefined1 *)&uStack_70;
      func_0x00010007e5dc();
      unaff_x21 = &uStack_70;
      if (cStack_39 < '\0') {
        ppuVar3 = appuStack_50[0];
        __ZdlPv();
        unaff_x21 = &uStack_70;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_78 = FUN_105327e44;
  if (ppuVar4 != (undefined1 **)0x0) {
    plVar2 = (long *)ppuVar4[1];
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar3;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_1108793f8);
    if ((int)plVar2 != 0) {
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_1108793f8,&uStack_b0,puVar5);
      puStack_98 = (undefined1 *)&uStack_b0;
      func_0x00010007e5dc(&puStack_98);
    }
  }
  return;
}



/* Entry: 10532716c; end: 105327177; -[SCConfigMetricGraphene2 aserFileSize:] */

void FUN_10532716c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_1108793f8);
    if ((int)plVar2 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_1108793f8,&uStack_40,param_3);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
  }
  return;
}



/* Entry: 105327178; end: 105327187; -[SCConfigMetricGraphene2 cofPostLoginCorrectnessWithResult:] */

/* WARNING: Removing unreachable block (ram,0x00010532c918) */
/* WARNING: Removing unreachable block (ram,0x00010532be10) */
/* WARNING: Removing unreachable block (ram,0x00010532d954) */

void FUN_105327178(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *unaff_x23;
  char *unaff_x24;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined1 *puStack_1088;
  long *plStack_1080;
  long *plStack_1078;
  undefined8 ***pppuStack_1070;
  code *pcStack_1068;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 *puStack_1040;
  undefined8 auStack_1038 [2];
  char cStack_1021;
  undefined8 auStack_1020 [2];
  char cStack_1009;
  long lStack_1008;
  long *plStack_1000;
  long *plStack_ff8;
  long *plStack_ff0;
  long *plStack_fe8;
  long *plStack_fe0;
  long *plStack_fd8;
  undefined8 ***pppuStack_fd0;
  code *pcStack_fc8;
  long alStack_fc0 [3];
  undefined1 *puStack_fa8;
  long alStack_fa0 [2];
  char cStack_f89;
  long lStack_f88;
  long *plStack_f80;
  long *plStack_f78;
  long *plStack_f70;
  long *plStack_f68;
  long *plStack_f60;
  long *plStack_f58;
  undefined8 ***pppuStack_f50;
  code *pcStack_f48;
  long alStack_f40 [3];
  undefined1 *puStack_f28;
  long alStack_f20 [2];
  char cStack_f09;
  long lStack_f08;
  long *plStack_f00;
  long *plStack_ef8;
  long *plStack_ef0;
  long *plStack_ee8;
  long *plStack_ee0;
  long *plStack_ed8;
  undefined8 ***pppuStack_ed0;
  code *pcStack_ec8;
  long alStack_ec0 [3];
  undefined1 *puStack_ea8;
  long alStack_ea0 [2];
  char cStack_e89;
  long lStack_e88;
  long *plStack_e80;
  long *plStack_e78;
  long *plStack_e70;
  long *plStack_e68;
  long *plStack_e60;
  long *plStack_e58;
  undefined8 ***pppuStack_e50;
  code *pcStack_e48;
  long alStack_e40 [3];
  undefined1 *puStack_e28;
  long alStack_e20 [2];
  char cStack_e09;
  long lStack_e08;
  long *plStack_e00;
  long *plStack_df8;
  long *plStack_df0;
  long *plStack_de8;
  long *plStack_de0;
  long *plStack_dd8;
  undefined8 ***pppuStack_dd0;
  code *pcStack_dc8;
  long alStack_dc0 [3];
  undefined1 *puStack_da8;
  long alStack_da0 [3];
  undefined1 auStack_d88 [24];
  undefined8 auStack_d70 [2];
  char cStack_d59;
  long lStack_d58;
  undefined8 ***pppuStack_d10;
  code *pcStack_d08;
  long alStack_cf8 [3];
  long *plStack_ce0;
  undefined1 auStack_cd8 [24];
  undefined8 auStack_cc0 [2];
  char cStack_ca9;
  long lStack_ca8;
  long *plStack_ca0;
  long *plStack_c98;
  long *plStack_c90;
  long *plStack_c88;
  long *plStack_c80;
  long *plStack_c78;
  undefined8 ***pppuStack_c70;
  code *pcStack_c68;
  long alStack_c60 [3];
  undefined1 *puStack_c48;
  long alStack_c40 [2];
  char cStack_c29;
  long lStack_c28;
  long *plStack_c20;
  long *plStack_c18;
  long *plStack_c10;
  long *plStack_c08;
  long *plStack_c00;
  long *plStack_bf8;
  undefined8 ***pppuStack_bf0;
  code *pcStack_be8;
  long alStack_bd8 [3];
  long *plStack_bc0;
  long alStack_bb8 [2];
  char cStack_ba1;
  undefined8 auStack_ba0 [2];
  char cStack_b89;
  long lStack_b88;
  long *plStack_b80;
  long *plStack_b78;
  long *plStack_b70;
  long *plStack_b68;
  long *plStack_b60;
  long *plStack_b58;
  undefined8 ***pppuStack_b50;
  code *pcStack_b48;
  long alStack_b38 [3];
  long *plStack_b20;
  long alStack_b18 [2];
  char cStack_b01;
  undefined8 auStack_b00 [2];
  char cStack_ae9;
  long lStack_ae8;
  long *plStack_ae0;
  long *plStack_ad8;
  long *plStack_ad0;
  long *plStack_ac8;
  long *plStack_ac0;
  long *plStack_ab8;
  undefined8 ***pppuStack_ab0;
  code *pcStack_aa8;
  long alStack_a98 [3];
  long *plStack_a80;
  long alStack_a78 [2];
  char cStack_a61;
  undefined8 auStack_a60 [2];
  char cStack_a49;
  long lStack_a48;
  long *plStack_a40;
  long *plStack_a38;
  long *plStack_a30;
  long *plStack_a28;
  long *plStack_a20;
  long *plStack_a18;
  undefined8 ***pppuStack_a10;
  code *pcStack_a08;
  long alStack_9f8 [3];
  long *plStack_9e0;
  long alStack_9d8 [3];
  undefined8 auStack_9c0 [2];
  char cStack_9a9;
  long lStack_9a8;
  long *plStack_9a0;
  long *plStack_998;
  long *plStack_990;
  long *plStack_988;
  long *plStack_980;
  long *plStack_978;
  undefined8 ***pppuStack_970;
  code *pcStack_968;
  long alStack_958 [3];
  long *plStack_940;
  long alStack_938 [3];
  undefined8 auStack_920 [2];
  char cStack_909;
  long lStack_908;
  long *plStack_900;
  long *plStack_8f8;
  long *plStack_8f0;
  long *plStack_8e8;
  long *plStack_8e0;
  long *plStack_8d8;
  undefined8 ***pppuStack_8d0;
  code *pcStack_8c8;
  long alStack_8c0 [3];
  undefined1 *puStack_8a8;
  long alStack_8a0 [3];
  undefined1 auStack_888 [24];
  undefined8 auStack_870 [2];
  char cStack_859;
  long lStack_858;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  long alStack_7f8 [3];
  long *plStack_7e0;
  long alStack_7d8 [2];
  char cStack_7c1;
  undefined8 auStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  char *pcStack_7a0;
  long *plStack_798;
  undefined8 *puStack_790;
  long *plStack_788;
  long *plStack_780;
  long *plStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  long alStack_758 [3];
  long *plStack_740;
  undefined8 auStack_738 [2];
  char cStack_721;
  undefined8 auStack_720 [2];
  char cStack_709;
  long lStack_708;
  char *pcStack_700;
  long *plStack_6f8;
  undefined8 *puStack_6f0;
  long *plStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  undefined8 ***pppuStack_6d0;
  code *pcStack_6c8;
  long alStack_6b8 [3];
  long *plStack_6a0;
  undefined8 auStack_698 [2];
  char cStack_681;
  undefined8 auStack_680 [2];
  char cStack_669;
  long lStack_668;
  char *pcStack_660;
  long *plStack_658;
  undefined8 *puStack_650;
  long *plStack_648;
  long *plStack_640;
  long *plStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  long alStack_618 [3];
  long *plStack_600;
  undefined8 auStack_5f8 [2];
  char cStack_5e1;
  undefined8 auStack_5e0 [2];
  char cStack_5c9;
  long lStack_5c8;
  char *pcStack_5c0;
  long *plStack_5b8;
  long *plStack_5b0;
  long *plStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  long alStack_580 [3];
  undefined1 *puStack_568;
  long alStack_560 [3];
  undefined1 auStack_548 [24];
  undefined8 auStack_530 [2];
  char cStack_519;
  long lStack_518;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  long alStack_4b8 [3];
  long *plStack_4a0;
  undefined8 auStack_498 [2];
  char cStack_481;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  char *pcStack_460;
  long *plStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  long alStack_418 [3];
  long *plStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  char *pcStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  long alStack_378 [3];
  long *plStack_360;
  long alStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  long *plStack_318;
  undefined8 *puStack_310;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  long alStack_2d8 [3];
  long *plStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  char *pcStack_280;
  long *plStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  long alStack_238 [3];
  long *plStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  char *pcStack_1e0;
  long *plStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  long alStack_198 [3];
  long *plStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long alStack_100 [3];
  undefined1 *puStack_e8;
  long alStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_80 [3];
  undefined1 *puStack_68;
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  plVar9 = (long *)0x1;
  plVar13 = alStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = alStack_60;
    func_0x00010002b838(alStack_60,pcVar2);
    alStack_80[0] = 0;
    alStack_80[1] = 0;
    alStack_80[2] = 0;
    func_0x00010007e1e8(alStack_80,alStack_60,&lStack_48,1);
    plVar16 = (long *)&UNK_110879f98;
    param_4 = (long *)0x1;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)alStack_80;
    func_0x00010007e5dc(&puStack_68);
    plVar9 = plVar13;
    if (cStack_49 < '\0') {
      __ZdlPv(alStack_60[0]);
      plVar9 = plVar13;
    }
  }
  plVar13 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  plVar14 = alStack_100;
  pcStack_88 = FUN_10532adc4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar16;
  plVar4 = plVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(plVar16);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar16);
    if (plVar16 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar16;
      _objc_retainAutorelease(plVar16);
      func_0x00010bdc3520();
    }
    _objc_release(plVar16);
    unaff_x23 = alStack_e0;
    func_0x00010002b838(alStack_e0,pcVar2);
    alStack_100[0] = 0;
    alStack_100[1] = 0;
    alStack_100[2] = 0;
    func_0x00010007e1e8(alStack_100,alStack_e0,&lStack_c8,1);
    plVar12 = (long *)&UNK_110879fe8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_e8 = (undefined1 *)alStack_100;
    func_0x00010007e5dc(&puStack_e8);
    plVar4 = plVar14;
    param_4 = plVar9;
    if (cStack_c9 < '\0') {
      __ZdlPv(alStack_e0[0]);
      plVar4 = plVar14;
      param_4 = plVar9;
    }
  }
  plVar9 = plVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar16);
  _objc_release(plVar16);
  __Unwind_Resume();
  pcStack_108 = FUN_10532af38;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = plVar12;
  plVar13 = plVar4;
  plVar14 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(plVar12);
  _objc_retain(plVar4);
  puVar17 = (undefined8 *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar9 = (long *)plVar9[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x24 = (char *)auStack_178;
    func_0x00010002b838(auStack_178,pcVar2);
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar4);
      pcVar2 = (char *)plVar4;
      func_0x00010bdc3520(plVar4);
    }
    _objc_release(plVar4);
    func_0x00010002b838(auStack_160,pcVar2);
    alStack_198[0] = 0;
    alStack_198[1] = 0;
    alStack_198[2] = 0;
    func_0x00010007e1e8(alStack_198,auStack_178,&lStack_148,2);
    plVar16 = (long *)&UNK_11087a038;
    unaff_x23 = alStack_198;
    plVar13 = alStack_198;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plStack_180 = unaff_x23;
    func_0x00010007e5dc(&plStack_180);
    lVar1 = 0;
    puVar17 = auStack_178;
    plVar14 = param_4;
    do {
      if ((&cStack_149)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar4);
  plVar9 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(plVar4);
  _objc_release(plVar12);
  plVar3 = plVar9;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10532b168;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar16;
  plVar15 = plVar13;
  plVar6 = plVar14;
  pcStack_1e0 = unaff_x24;
  plStack_1d8 = unaff_x23;
  puStack_1d0 = puVar17;
  plStack_1c8 = plVar9;
  plStack_1c0 = plVar4;
  plStack_1b8 = plVar12;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(plVar16);
  _objc_retain(plVar13);
  puVar17 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar9 = (long *)plVar3[1];
    _objc_retain(plVar16);
    if (plVar16 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar16;
      _objc_retainAutorelease(plVar16);
      func_0x00010bdc3520();
    }
    _objc_release(plVar16);
    unaff_x24 = (char *)auStack_218;
    func_0x00010002b838(auStack_218,pcVar2);
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar13);
      pcVar2 = (char *)plVar13;
      func_0x00010bdc3520(plVar13);
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_200,pcVar2);
    alStack_238[0] = 0;
    alStack_238[1] = 0;
    alStack_238[2] = 0;
    func_0x00010007e1e8(alStack_238,auStack_218,&lStack_1e8,2);
    plVar8 = (long *)&UNK_11087a088;
    unaff_x23 = alStack_238;
    plVar15 = alStack_238;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    plStack_220 = unaff_x23;
    func_0x00010007e5dc(&plStack_220);
    lVar1 = 0;
    puVar17 = auStack_218;
    plVar6 = plVar14;
    do {
      if ((&cStack_1e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar13);
  plVar9 = plVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(plVar13);
  _objc_release(plVar16);
  plVar14 = plVar9;
  __Unwind_Resume();
  pcStack_248 = FUN_10532b398;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar8;
  plVar4 = plVar15;
  plVar3 = plVar6;
  pcStack_280 = unaff_x24;
  plStack_278 = unaff_x23;
  puStack_270 = puVar17;
  plStack_268 = plVar9;
  plStack_260 = plVar13;
  plStack_258 = plVar16;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(plVar8);
  _objc_retain(plVar15);
  puVar17 = (undefined8 *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar16 = (long *)plVar14[1];
    _objc_retain(plVar8);
    if (plVar8 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar8;
      _objc_retainAutorelease(plVar8);
      func_0x00010bdc3520();
    }
    _objc_release(plVar8);
    unaff_x24 = (char *)auStack_2b8;
    func_0x00010002b838(auStack_2b8,pcVar2);
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar15);
      pcVar2 = (char *)plVar15;
      func_0x00010bdc3520(plVar15);
    }
    _objc_release(plVar15);
    func_0x00010002b838(auStack_2a0,pcVar2);
    alStack_2d8[0] = 0;
    alStack_2d8[1] = 0;
    alStack_2d8[2] = 0;
    func_0x00010007e1e8(alStack_2d8,auStack_2b8,&lStack_288,2);
    plVar12 = (long *)&UNK_11087a0d8;
    unaff_x23 = alStack_2d8;
    plVar4 = alStack_2d8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plStack_2c0 = unaff_x23;
    func_0x00010007e5dc(&plStack_2c0);
    lVar1 = 0;
    puVar17 = auStack_2b8;
    plVar3 = plVar6;
    do {
      if ((&cStack_289)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar15);
  plVar16 = plVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(plVar15);
  _objc_release(plVar8);
  plVar14 = plVar16;
  __Unwind_Resume();
  pcStack_2e8 = FUN_10532b5c8;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar12;
  plVar13 = plVar4;
  plVar6 = plVar3;
  pcStack_320 = unaff_x24;
  plStack_318 = unaff_x23;
  puStack_310 = puVar17;
  plStack_308 = plVar16;
  plStack_300 = plVar15;
  plStack_2f8 = plVar8;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(plVar4);
  plVar16 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar16 = (long *)plVar14[1];
    pcVar2 = "true";
    if ((int)plVar12 == 0) {
      pcVar2 = "false";
    }
    unaff_x23 = alStack_358;
    func_0x00010002b838(alStack_358,pcVar2);
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar4);
      pcVar2 = (char *)plVar4;
      func_0x00010bdc3520(plVar4);
    }
    _objc_release(plVar4);
    func_0x00010002b838(auStack_340,pcVar2);
    alStack_378[0] = 0;
    alStack_378[1] = 0;
    alStack_378[2] = 0;
    func_0x00010007e1e8(alStack_378,alStack_358,&lStack_328,2);
    plVar9 = (long *)&UNK_11087a128;
    plVar12 = alStack_378;
    plVar13 = alStack_378;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plStack_360 = plVar12;
    func_0x00010007e5dc(&plStack_360);
    lVar1 = 0;
    plVar16 = alStack_358;
    plVar6 = plVar3;
    do {
      if ((&cStack_329)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar14 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  if (cStack_341 < '\0') {
    __ZdlPv(alStack_358[0]);
  }
  _objc_release(plVar4);
  plVar3 = plVar14;
  __Unwind_Resume();
  pcStack_388 = FUN_10532b7b4;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar9;
  plVar15 = plVar13;
  plVar11 = plVar6;
  pcStack_3c0 = unaff_x24;
  plStack_3b8 = unaff_x23;
  plStack_3b0 = plVar12;
  plStack_3a8 = plVar16;
  plStack_3a0 = plVar14;
  plStack_398 = plVar4;
  pppuStack_390 = &pppuStack_2f0;
  _objc_retain(plVar9);
  _objc_retain(plVar13);
  puVar17 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar16 = (long *)plVar3[1];
    _objc_retain(plVar9);
    if (plVar9 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar9;
      _objc_retainAutorelease(plVar9);
      func_0x00010bdc3520();
    }
    _objc_release(plVar9);
    unaff_x24 = (char *)auStack_3f8;
    func_0x00010002b838(auStack_3f8,pcVar2);
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar13);
      pcVar2 = (char *)plVar13;
      func_0x00010bdc3520(plVar13);
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_3e0,pcVar2);
    alStack_418[0] = 0;
    alStack_418[1] = 0;
    alStack_418[2] = 0;
    func_0x00010007e1e8(alStack_418,auStack_3f8,&lStack_3c8,2);
    plVar8 = (long *)&UNK_11087a178;
    unaff_x23 = alStack_418;
    plVar15 = alStack_418;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plStack_400 = unaff_x23;
    func_0x00010007e5dc(&plStack_400);
    lVar1 = 0;
    puVar17 = auStack_3f8;
    plVar11 = plVar6;
    do {
      if ((&cStack_3c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar13);
  plVar16 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  if (cStack_3e1 < '\0') {
    __ZdlPv(auStack_3f8[0]);
  }
  _objc_release(plVar13);
  _objc_release(plVar9);
  plVar4 = plVar16;
  __Unwind_Resume();
  pcStack_428 = FUN_10532b9e4;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar8;
  pcVar2 = (char *)plVar15;
  plVar14 = plVar11;
  pcStack_460 = unaff_x24;
  plStack_458 = unaff_x23;
  puStack_450 = puVar17;
  plStack_448 = plVar16;
  plStack_440 = plVar13;
  plStack_438 = plVar9;
  pppuStack_430 = &pppuStack_390;
  _objc_retain(plVar8);
  _objc_retain(plVar15);
  if (plVar4 != (long *)0x0) {
    plVar16 = (long *)plVar4[1];
    _objc_retain(plVar8);
    if (plVar8 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar8;
      _objc_retainAutorelease(plVar8);
      func_0x00010bdc3520();
    }
    _objc_release(plVar8);
    unaff_x24 = (char *)auStack_498;
    func_0x00010002b838(auStack_498,pcVar2);
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar15);
      pcVar2 = (char *)plVar15;
      func_0x00010bdc3520(plVar15);
    }
    _objc_release(plVar15);
    func_0x00010002b838(auStack_480,pcVar2);
    alStack_4b8[0] = 0;
    alStack_4b8[1] = 0;
    alStack_4b8[2] = 0;
    func_0x00010007e1e8(alStack_4b8,auStack_498,&lStack_468,2);
    plVar12 = (long *)&UNK_11087a1c8;
    pcVar2 = (char *)alStack_4b8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plStack_4a0 = alStack_4b8;
    func_0x00010007e5dc(&plStack_4a0);
    lVar1 = 0;
    plVar14 = plVar11;
    do {
      if ((&cStack_469)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_480 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar15);
  plVar16 = plVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  if (cStack_481 < '\0') {
    __ZdlPv(auStack_498[0]);
  }
  _objc_release(plVar15);
  _objc_release(plVar8);
  __Unwind_Resume();
  plVar15 = alStack_580;
  pcStack_4c8 = FUN_10532bc14;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar12;
  plVar13 = (long *)pcVar2;
  plVar4 = plVar14;
  plVar8 = param_5;
  pppuStack_4d0 = &pppuStack_430;
  _objc_retain(plVar14);
  if (plVar16 != (long *)0x0) {
    plVar16 = (long *)plVar16[1];
    unaff_x24 = "false";
    pcVar5 = "true";
    if ((int)plVar12 == 0) {
      pcVar5 = unaff_x24;
    }
    func_0x00010002b838(alStack_560,pcVar5);
    pcVar5 = "true";
    if ((int)pcVar2 == 0) {
      pcVar5 = unaff_x24;
    }
    func_0x00010002b838(auStack_548,pcVar5);
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar14);
      pcVar2 = (char *)plVar14;
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    func_0x00010002b838(auStack_530,pcVar2);
    alStack_580[0] = 0;
    alStack_580[1] = 0;
    alStack_580[2] = 0;
    func_0x00010007e1e8(alStack_580,alStack_560,&lStack_518,3);
    plVar9 = (long *)&UNK_11087a218;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_568 = (undefined1 *)alStack_580;
    func_0x00010007e5dc(&puStack_568);
    lVar1 = 0;
    plVar13 = plVar15;
    plVar4 = param_5;
    do {
      if ((&cStack_519)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_530 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      plVar12 = alStack_580;
    } while (lVar1 != -0x48);
  }
  plVar16 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  plStack_5a8 = alStack_560;
  do {
    plVar12 = plVar12 + -3;
  } while (plVar12 != plStack_5a8);
  _objc_release(plVar14);
  plVar6 = plVar16;
  __Unwind_Resume();
  pcStack_588 = FUN_10532be38;
  lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar9;
  plVar3 = plVar13;
  plVar11 = plVar4;
  pcStack_5c0 = unaff_x24;
  plStack_5b8 = (long *)pcVar2;
  plStack_5b0 = plVar12;
  plStack_5a0 = plVar16;
  plStack_598 = plVar14;
  pppuStack_590 = &pppuStack_4d0;
  _objc_retain(plVar9);
  _objc_retain(plVar13);
  puVar17 = (undefined8 *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar16 = (long *)plVar6[1];
    _objc_retain(plVar9);
    if (plVar9 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar9;
      _objc_retainAutorelease(plVar9);
      func_0x00010bdc3520();
    }
    _objc_release(plVar9);
    unaff_x24 = (char *)auStack_5f8;
    func_0x00010002b838(auStack_5f8,pcVar2);
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar13);
      pcVar2 = (char *)plVar13;
      func_0x00010bdc3520(plVar13);
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_5e0,pcVar2);
    alStack_618[0] = 0;
    alStack_618[1] = 0;
    alStack_618[2] = 0;
    func_0x00010007e1e8(alStack_618,auStack_5f8,&lStack_5c8,2);
    plVar15 = (long *)&UNK_11087a268;
    pcVar2 = (char *)alStack_618;
    plVar3 = alStack_618;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plStack_600 = (long *)pcVar2;
    func_0x00010007e5dc(&plStack_600);
    lVar1 = 0;
    puVar17 = auStack_5f8;
    plVar11 = plVar4;
    do {
      if ((&cStack_5c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar13);
  plVar16 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  if (cStack_5e1 < '\0') {
    __ZdlPv(auStack_5f8[0]);
  }
  _objc_release(plVar13);
  _objc_release(plVar9);
  plVar14 = plVar16;
  __Unwind_Resume();
  pcStack_628 = FUN_10532c068;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar15;
  plVar4 = plVar3;
  plVar6 = plVar11;
  pcStack_660 = unaff_x24;
  plStack_658 = (long *)pcVar2;
  puStack_650 = puVar17;
  plStack_648 = plVar16;
  plStack_640 = plVar13;
  plStack_638 = plVar9;
  pppuStack_630 = &pppuStack_590;
  _objc_retain(plVar15);
  _objc_retain(plVar3);
  puVar17 = (undefined8 *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar16 = (long *)plVar14[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = (char *)auStack_698;
    func_0x00010002b838(auStack_698,pcVar2);
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar3);
      pcVar2 = (char *)plVar3;
      func_0x00010bdc3520(plVar3);
    }
    _objc_release(plVar3);
    func_0x00010002b838(auStack_680,pcVar2);
    alStack_6b8[0] = 0;
    alStack_6b8[1] = 0;
    alStack_6b8[2] = 0;
    func_0x00010007e1e8(alStack_6b8,auStack_698,&lStack_668,2);
    plVar12 = (long *)&UNK_11087a2b8;
    pcVar2 = (char *)alStack_6b8;
    plVar4 = alStack_6b8;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plStack_6a0 = (long *)pcVar2;
    func_0x00010007e5dc(&plStack_6a0);
    lVar1 = 0;
    puVar17 = auStack_698;
    plVar6 = plVar11;
    do {
      if ((&cStack_669)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_680 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar3);
  plVar16 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_668) {
    ___stack_chk_fail();
    _objc_release(plVar3);
    if (cStack_681 < '\0') {
      __ZdlPv(auStack_698[0]);
    }
    _objc_release(plVar3);
    _objc_release(plVar15);
    plVar14 = plVar16;
    __Unwind_Resume();
    pcStack_6c8 = FUN_10532c298;
    lStack_708 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9 = plVar12;
    plVar13 = plVar4;
    plVar11 = plVar6;
    pcStack_700 = unaff_x24;
    plStack_6f8 = (long *)pcVar2;
    puStack_6f0 = puVar17;
    plStack_6e8 = plVar16;
    plStack_6e0 = plVar3;
    plStack_6d8 = plVar15;
    pppuStack_6d0 = &pppuStack_630;
    _objc_retain(plVar12);
    _objc_retain(plVar4);
    puVar17 = (undefined8 *)0x0;
    if (plVar14 != (long *)0x0) {
      plVar16 = (long *)plVar14[1];
      _objc_retain(plVar12);
      if (plVar12 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar12;
        _objc_retainAutorelease(plVar12);
        func_0x00010bdc3520();
      }
      _objc_release(plVar12);
      unaff_x24 = (char *)auStack_738;
      func_0x00010002b838(auStack_738,pcVar2);
      _objc_retain(plVar4);
      if (plVar4 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar4);
        pcVar2 = (char *)plVar4;
        func_0x00010bdc3520(plVar4);
      }
      _objc_release(plVar4);
      func_0x00010002b838(auStack_720,pcVar2);
      alStack_758[0] = 0;
      alStack_758[1] = 0;
      alStack_758[2] = 0;
      func_0x00010007e1e8(alStack_758,auStack_738,&lStack_708,2);
      plVar9 = (long *)&UNK_11087a308;
      pcVar2 = (char *)alStack_758;
      plVar13 = alStack_758;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_740 = (long *)pcVar2;
      func_0x00010007e5dc(&plStack_740);
      lVar1 = 0;
      puVar17 = auStack_738;
      plVar11 = plVar6;
      do {
        if ((&cStack_709)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_720 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(plVar4);
    plVar16 = plVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_708) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar4);
    if (cStack_721 < '\0') {
      __ZdlPv(auStack_738[0]);
    }
    _objc_release(plVar4);
    _objc_release(plVar12);
    plVar15 = plVar16;
    __Unwind_Resume();
    pcStack_768 = FUN_10532c4c8;
    lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = plVar9;
    pcVar5 = (char *)plVar13;
    plVar3 = plVar11;
    pcStack_7a0 = unaff_x24;
    plStack_798 = (long *)pcVar2;
    puStack_790 = puVar17;
    plStack_788 = plVar16;
    plStack_780 = plVar4;
    plStack_778 = plVar12;
    pppuStack_770 = &pppuStack_6d0;
    _objc_retain(plVar13);
    if (plVar15 != (long *)0x0) {
      plVar16 = (long *)plVar15[1];
      pcVar5 = "true";
      if ((int)plVar9 == 0) {
        pcVar5 = "false";
      }
      pcVar2 = (char *)alStack_7d8;
      func_0x00010002b838(alStack_7d8,pcVar5);
      _objc_retain(plVar13);
      if (plVar13 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(plVar13);
        pcVar5 = (char *)plVar13;
        func_0x00010bdc3520(plVar13);
      }
      _objc_release(plVar13);
      func_0x00010002b838(auStack_7c0,pcVar5);
      alStack_7f8[0] = 0;
      alStack_7f8[1] = 0;
      alStack_7f8[2] = 0;
      func_0x00010007e1e8(alStack_7f8,alStack_7d8,&lStack_7a8,2);
      plVar14 = (long *)&UNK_11087a358;
      pcVar5 = (char *)alStack_7f8;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_7e0 = alStack_7f8;
      func_0x00010007e5dc(&plStack_7e0);
      lVar1 = 0;
      plVar3 = plVar11;
      do {
        if ((&cStack_7a9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_7c0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    plVar16 = plVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar13);
    if (cStack_7c1 < '\0') {
      __ZdlPv(alStack_7d8[0]);
    }
    _objc_release(plVar13);
    __Unwind_Resume();
    plVar15 = alStack_8c0;
    pcStack_808 = FUN_10532c6b4;
    lStack_858 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9 = plVar14;
    plVar13 = (long *)pcVar5;
    plVar12 = plVar3;
    plVar4 = plVar8;
    pppuStack_810 = &pppuStack_770;
    _objc_retain(plVar14);
    _objc_retain(plVar3);
    if (plVar16 != (long *)0x0) {
      plVar6 = (long *)plVar16[1];
      plVar9 = (long *)&UNK_11087aa38;
      (**(code **)(*plVar6 + 0x28))();
      if ((int)plVar6 != 0) {
        plVar16 = (long *)plVar16[1];
        _objc_retain(plVar14);
        if (plVar14 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar14;
          _objc_retainAutorelease(plVar14);
          func_0x00010bdc3520();
        }
        _objc_release(plVar14);
        func_0x00010002b838(alStack_8a0,pcVar2);
        pcVar2 = "true";
        if ((int)pcVar5 == 0) {
          pcVar2 = "false";
        }
        func_0x00010002b838(auStack_888,pcVar2);
        _objc_retain(plVar3);
        if (plVar3 == (long *)0x0) {
          pcVar5 = "";
        }
        else {
          _objc_retainAutorelease(plVar3);
          pcVar5 = (char *)plVar3;
          func_0x00010bdc3520();
        }
        _objc_release(plVar3);
        func_0x00010002b838(auStack_870,pcVar5);
        alStack_8c0[0] = 0;
        alStack_8c0[1] = 0;
        alStack_8c0[2] = 0;
        func_0x00010007e1e8(alStack_8c0,alStack_8a0,&lStack_858,3);
        plVar12 = (long *)((long)plVar8 * 1000);
        plVar9 = (long *)&UNK_11087aa38;
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_8a8 = (undefined1 *)alStack_8c0;
        func_0x00010007e5dc(&puStack_8a8);
        lVar1 = 0;
        plVar13 = plVar15;
        do {
          if ((&cStack_859)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_870 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
          pcVar2 = (char *)alStack_8c0;
        } while (lVar1 != -0x48);
      }
    }
    _objc_release(plVar3);
    plVar16 = plVar14;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_858) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar3);
    plStack_8f0 = alStack_8a0;
    do {
      pcVar2 = (char *)((long)pcVar2 + -0x18);
    } while ((long *)pcVar2 != plStack_8f0);
    _objc_release(plVar3);
    _objc_release(plVar14);
    plVar6 = plVar16;
    __Unwind_Resume();
    pcStack_8c8 = FUN_10532c950;
    lStack_908 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar8 = plVar9;
    plVar15 = plVar13;
    plVar11 = plVar12;
    plStack_900 = (long *)pcVar5;
    plStack_8f8 = (long *)pcVar2;
    plStack_8e8 = plVar16;
    plStack_8e0 = plVar3;
    plStack_8d8 = plVar14;
    pppuStack_8d0 = &pppuStack_810;
    _objc_retain(plVar9);
    plVar16 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar16 = (long *)plVar6[1];
      _objc_retain(plVar9);
      if (plVar9 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(plVar9);
      pcVar5 = (char *)alStack_938;
      func_0x00010002b838(alStack_938,pcVar2);
      pcVar7 = "true";
      if ((int)plVar13 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(auStack_920,pcVar7);
      alStack_958[0] = 0;
      alStack_958[1] = 0;
      alStack_958[2] = 0;
      func_0x00010007e1e8(alStack_958,alStack_938,&lStack_908,2);
      plVar8 = (long *)&UNK_11087ab88;
      plVar13 = alStack_958;
      plVar15 = alStack_958;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_940 = plVar13;
      func_0x00010007e5dc(&plStack_940);
      lVar1 = 0;
      plVar16 = alStack_938;
      plVar11 = plVar12;
      do {
        if ((&cStack_909)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_920 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    plVar12 = plVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_908) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar9);
    _objc_release(plVar9);
    plVar6 = plVar12;
    __Unwind_Resume();
    pcStack_968 = FUN_10532cb38;
    lStack_9a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = plVar8;
    plVar3 = plVar15;
    plVar10 = plVar11;
    plStack_9a0 = (long *)pcVar5;
    plStack_998 = (long *)pcVar2;
    plStack_990 = plVar13;
    plStack_988 = plVar16;
    plStack_980 = plVar12;
    plStack_978 = plVar9;
    pppuStack_970 = &pppuStack_8d0;
    _objc_retain(plVar8);
    plVar16 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar16 = (long *)plVar6[1];
      _objc_retain(plVar8);
      if (plVar8 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar8;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(plVar8);
      pcVar5 = (char *)alStack_9d8;
      func_0x00010002b838(alStack_9d8,pcVar2);
      pcVar7 = "true";
      if ((int)plVar15 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(auStack_9c0,pcVar7);
      alStack_9f8[0] = 0;
      alStack_9f8[1] = 0;
      alStack_9f8[2] = 0;
      func_0x00010007e1e8(alStack_9f8,alStack_9d8,&lStack_9a8,2);
      plVar14 = (long *)&UNK_11087abd8;
      plVar15 = alStack_9f8;
      plVar3 = alStack_9f8;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_9e0 = plVar15;
      func_0x00010007e5dc(&plStack_9e0);
      lVar1 = 0;
      plVar16 = alStack_9d8;
      plVar10 = plVar11;
      do {
        if ((&cStack_9a9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_9c0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    plVar9 = plVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar8);
    _objc_release(plVar8);
    plVar6 = plVar9;
    __Unwind_Resume();
    pcStack_a08 = FUN_10532cd20;
    lStack_a48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar13 = plVar14;
    plVar12 = plVar3;
    plVar11 = plVar10;
    plStack_a40 = (long *)pcVar5;
    plStack_a38 = (long *)pcVar2;
    plStack_a30 = plVar15;
    plStack_a28 = plVar16;
    plStack_a20 = plVar9;
    plStack_a18 = plVar8;
    pppuStack_a10 = &pppuStack_970;
    _objc_retain(plVar14);
    _objc_retain(plVar3);
    plVar16 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar16 = (long *)plVar6[1];
      _objc_retain(plVar14);
      if (plVar14 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar14;
        _objc_retainAutorelease(plVar14);
        func_0x00010bdc3520();
      }
      _objc_release(plVar14);
      pcVar5 = (char *)alStack_a78;
      func_0x00010002b838(alStack_a78,pcVar2);
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar3);
        pcVar2 = (char *)plVar3;
        func_0x00010bdc3520(plVar3);
      }
      _objc_release(plVar3);
      func_0x00010002b838(auStack_a60,pcVar2);
      alStack_a98[0] = 0;
      alStack_a98[1] = 0;
      alStack_a98[2] = 0;
      func_0x00010007e1e8(alStack_a98,alStack_a78,&lStack_a48,2);
      plVar13 = (long *)&UNK_11087ac28;
      pcVar2 = (char *)alStack_a98;
      plVar12 = alStack_a98;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_a80 = (long *)pcVar2;
      func_0x00010007e5dc(&plStack_a80);
      lVar1 = 0;
      plVar16 = alStack_a78;
      plVar11 = plVar10;
      do {
        if ((&cStack_a49)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_a60 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(plVar3);
    plVar9 = plVar14;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a48) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar3);
    if (cStack_a61 < '\0') {
      __ZdlPv(alStack_a78[0]);
    }
    _objc_release(plVar3);
    _objc_release(plVar14);
    plVar6 = plVar9;
    __Unwind_Resume();
    pcStack_aa8 = FUN_10532cf50;
    lStack_ae8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar8 = plVar13;
    plVar15 = plVar12;
    plVar10 = plVar11;
    plStack_ae0 = (long *)pcVar5;
    plStack_ad8 = (long *)pcVar2;
    plStack_ad0 = plVar16;
    plStack_ac8 = plVar9;
    plStack_ac0 = plVar3;
    plStack_ab8 = plVar14;
    pppuStack_ab0 = &pppuStack_a10;
    _objc_retain(plVar13);
    _objc_retain(plVar12);
    plVar16 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar16 = (long *)plVar6[1];
      _objc_retain(plVar13);
      if (plVar13 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar13;
        _objc_retainAutorelease(plVar13);
        func_0x00010bdc3520();
      }
      _objc_release(plVar13);
      pcVar5 = (char *)alStack_b18;
      func_0x00010002b838(alStack_b18,pcVar2);
      _objc_retain(plVar12);
      if (plVar12 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar12);
        pcVar2 = (char *)plVar12;
        func_0x00010bdc3520(plVar12);
      }
      _objc_release(plVar12);
      func_0x00010002b838(auStack_b00,pcVar2);
      alStack_b38[0] = 0;
      alStack_b38[1] = 0;
      alStack_b38[2] = 0;
      func_0x00010007e1e8(alStack_b38,alStack_b18,&lStack_ae8,2);
      plVar8 = (long *)&UNK_11087ac78;
      pcVar2 = (char *)alStack_b38;
      plVar15 = alStack_b38;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_b20 = (long *)pcVar2;
      func_0x00010007e5dc(&plStack_b20);
      lVar1 = 0;
      plVar16 = alStack_b18;
      plVar10 = plVar11;
      do {
        if ((&cStack_ae9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_b00 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(plVar12);
    plVar9 = plVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ae8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar12);
    if (cStack_b01 < '\0') {
      __ZdlPv(alStack_b18[0]);
    }
    _objc_release(plVar12);
    _objc_release(plVar13);
    plVar6 = plVar9;
    __Unwind_Resume();
    pcStack_b48 = FUN_10532d180;
    lStack_b88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = plVar8;
    plVar3 = plVar15;
    plVar11 = plVar10;
    plStack_b80 = (long *)pcVar5;
    plStack_b78 = (long *)pcVar2;
    plStack_b70 = plVar16;
    plStack_b68 = plVar9;
    plStack_b60 = plVar12;
    plStack_b58 = plVar13;
    pppuStack_b50 = &pppuStack_ab0;
    _objc_retain(plVar8);
    _objc_retain(plVar15);
    plVar16 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar16 = (long *)plVar6[1];
      _objc_retain(plVar8);
      if (plVar8 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar8;
        _objc_retainAutorelease(plVar8);
        func_0x00010bdc3520();
      }
      _objc_release(plVar8);
      pcVar5 = (char *)alStack_bb8;
      func_0x00010002b838(alStack_bb8,pcVar2);
      _objc_retain(plVar15);
      if (plVar15 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar15);
        pcVar2 = (char *)plVar15;
        func_0x00010bdc3520(plVar15);
      }
      _objc_release(plVar15);
      func_0x00010002b838(auStack_ba0,pcVar2);
      alStack_bd8[0] = 0;
      alStack_bd8[1] = 0;
      alStack_bd8[2] = 0;
      func_0x00010007e1e8(alStack_bd8,alStack_bb8,&lStack_b88,2);
      plVar14 = (long *)&UNK_11087acc8;
      pcVar2 = (char *)alStack_bd8;
      plVar3 = alStack_bd8;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_bc0 = (long *)pcVar2;
      func_0x00010007e5dc(&plStack_bc0);
      lVar1 = 0;
      plVar16 = alStack_bb8;
      plVar11 = plVar10;
      do {
        if ((&cStack_b89)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_ba0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(plVar15);
    plVar9 = plVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b88) {
      ___stack_chk_fail();
      _objc_release(plVar15);
      if (cStack_ba1 < '\0') {
        __ZdlPv(alStack_bb8[0]);
      }
      _objc_release(plVar15);
      _objc_release(plVar8);
      plVar12 = plVar9;
      __Unwind_Resume();
      plVar10 = alStack_c60;
      pcStack_be8 = FUN_10532d3b0;
      lStack_c28 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar13 = plVar14;
      plVar6 = plVar3;
      plStack_c20 = (long *)pcVar5;
      plStack_c18 = (long *)pcVar2;
      plStack_c10 = plVar16;
      plStack_c08 = plVar9;
      plStack_c00 = plVar15;
      plStack_bf8 = plVar8;
      pppuStack_bf0 = &pppuStack_b50;
      _objc_retain(plVar14);
      plVar9 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        plVar9 = (long *)plVar12[1];
        _objc_retain(plVar14);
        if (plVar14 == (long *)0x0) {
          pcVar7 = "";
        }
        else {
          pcVar7 = (char *)plVar14;
          _objc_retainAutorelease(plVar14);
          func_0x00010bdc3520();
        }
        _objc_release(plVar14);
        pcVar2 = (char *)alStack_c40;
        func_0x00010002b838(alStack_c40,pcVar7);
        alStack_c60[0] = 0;
        alStack_c60[1] = 0;
        alStack_c60[2] = 0;
        func_0x00010007e1e8(alStack_c60,alStack_c40,&lStack_c28,1);
        plVar13 = (long *)&UNK_11087ad18;
        (**(code **)(*plVar9 + 0x18))(plVar9);
        puStack_c48 = (undefined1 *)alStack_c60;
        func_0x00010007e5dc(&puStack_c48);
        plVar6 = plVar10;
        plVar11 = plVar3;
        plVar16 = alStack_c60;
        if (cStack_c29 < '\0') {
          __ZdlPv(alStack_c40[0]);
          plVar6 = plVar10;
          plVar11 = plVar3;
          plVar16 = alStack_c60;
        }
      }
      plVar12 = plVar14;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c28) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar14);
      _objc_release(plVar14);
      plVar15 = plVar12;
      __Unwind_Resume();
      pcStack_c68 = FUN_10532d524;
      lStack_ca8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar8 = plVar13;
      pcVar7 = (char *)plVar6;
      plVar3 = plVar11;
      plStack_ca0 = (long *)pcVar5;
      plStack_c98 = (long *)pcVar2;
      plStack_c90 = plVar16;
      plStack_c88 = plVar9;
      plStack_c80 = plVar12;
      plStack_c78 = plVar14;
      pppuStack_c70 = &pppuStack_bf0;
      _objc_retain(plVar13);
      if (plVar15 != (long *)0x0) {
        plVar16 = (long *)plVar15[1];
        _objc_retain(plVar13);
        if (plVar13 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar13;
          _objc_retainAutorelease();
          func_0x00010bdc3520();
        }
        _objc_release(plVar13);
        func_0x00010002b838(auStack_cd8,pcVar2);
        pcVar5 = "true";
        if ((int)plVar6 == 0) {
          pcVar5 = "false";
        }
        func_0x00010002b838(auStack_cc0,pcVar5);
        alStack_cf8[0] = 0;
        alStack_cf8[1] = 0;
        alStack_cf8[2] = 0;
        func_0x00010007e1e8(alStack_cf8,auStack_cd8,&lStack_ca8,2);
        plVar8 = (long *)&UNK_11087ad68;
        pcVar7 = (char *)alStack_cf8;
        (**(code **)(*plVar16 + 0x18))(plVar16);
        plStack_ce0 = alStack_cf8;
        func_0x00010007e5dc(&plStack_ce0);
        lVar1 = 0;
        plVar3 = plVar11;
        do {
          if ((&cStack_ca9)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_cc0 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
      plVar16 = plVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ca8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar13);
      _objc_release(plVar13);
      __Unwind_Resume();
      plVar14 = alStack_dc0;
      pcStack_d08 = FUN_10532d70c;
      lStack_d58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar9 = plVar8;
      plVar13 = (long *)pcVar7;
      plVar12 = plVar3;
      pppuStack_d10 = &pppuStack_c70;
      _objc_retain(plVar8);
      _objc_retain(plVar3);
      if (plVar16 != (long *)0x0) {
        plVar16 = (long *)plVar16[1];
        _objc_retain(plVar8);
        if (plVar8 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar8;
          _objc_retainAutorelease(plVar8);
          func_0x00010bdc3520();
        }
        _objc_release(plVar8);
        func_0x00010002b838(alStack_da0,pcVar2);
        pcVar2 = "true";
        if ((int)pcVar7 == 0) {
          pcVar2 = "false";
        }
        func_0x00010002b838(auStack_d88,pcVar2);
        _objc_retain(plVar3);
        if (plVar3 == (long *)0x0) {
          pcVar7 = "";
        }
        else {
          _objc_retainAutorelease(plVar3);
          pcVar7 = (char *)plVar3;
          func_0x00010bdc3520();
        }
        _objc_release(plVar3);
        func_0x00010002b838(auStack_d70,pcVar7);
        alStack_dc0[0] = 0;
        alStack_dc0[1] = 0;
        alStack_dc0[2] = 0;
        func_0x00010007e1e8(alStack_dc0,alStack_da0,&lStack_d58,3);
        plVar9 = (long *)&UNK_11087adb8;
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11087adb8,alStack_dc0,plVar4);
        puStack_da8 = (undefined1 *)alStack_dc0;
        func_0x00010007e5dc(&puStack_da8);
        lVar1 = 0;
        plVar13 = plVar14;
        plVar12 = plVar4;
        do {
          if ((&cStack_d59)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_d70 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
          pcVar2 = (char *)alStack_dc0;
        } while (lVar1 != -0x48);
      }
      _objc_release(plVar3);
      plVar16 = plVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d58) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar3);
      do {
        pcVar2 = (char *)((long)pcVar2 + -0x18);
      } while ((long *)pcVar2 != alStack_da0);
      _objc_release(plVar3);
      _objc_release(plVar8);
      plVar14 = plVar16;
      __Unwind_Resume();
      plVar6 = alStack_e40;
      pcStack_dc8 = FUN_10532d984;
      lStack_e08 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar4 = plVar9;
      plVar15 = plVar13;
      plStack_e00 = (long *)pcVar7;
      plStack_df8 = (long *)pcVar2;
      plStack_df0 = alStack_da0;
      plStack_de8 = plVar16;
      plStack_de0 = plVar3;
      plStack_dd8 = plVar8;
      pppuStack_dd0 = &pppuStack_d10;
      _objc_retain(plVar9);
      plVar16 = alStack_da0;
      if (plVar14 != (long *)0x0) {
        plVar8 = (long *)plVar14[1];
        plVar4 = (long *)&UNK_11087b298;
        (**(code **)(*plVar8 + 0x28))();
        if ((int)plVar8 != 0) {
          plVar14 = (long *)plVar14[1];
          _objc_retain(plVar9);
          if (plVar9 == (long *)0x0) {
            pcVar5 = "";
          }
          else {
            pcVar5 = (char *)plVar9;
            _objc_retainAutorelease(plVar9);
            func_0x00010bdc3520();
          }
          _objc_release(plVar9);
          pcVar2 = (char *)alStack_e20;
          func_0x00010002b838(alStack_e20,pcVar5);
          alStack_e40[0] = 0;
          alStack_e40[1] = 0;
          alStack_e40[2] = 0;
          func_0x00010007e1e8(alStack_e40,alStack_e20,&lStack_e08,1);
          plVar12 = (long *)((long)plVar13 * 10);
          plVar4 = (long *)&UNK_11087b298;
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11087b298,alStack_e40,plVar12);
          puStack_e28 = (undefined1 *)alStack_e40;
          func_0x00010007e5dc(&puStack_e28);
          plVar15 = plVar6;
          plVar16 = alStack_e40;
          if (cStack_e09 < '\0') {
            __ZdlPv(alStack_e20[0]);
            plVar15 = plVar6;
            plVar16 = alStack_e40;
          }
        }
      }
      plVar13 = plVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e08) {
        ___stack_chk_fail();
        _objc_release(plVar9);
        _objc_release(plVar9);
        plVar3 = plVar13;
        __Unwind_Resume();
        plVar11 = alStack_ec0;
        pcStack_e48 = FUN_10532db1c;
        lStack_e88 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar8 = plVar4;
        plVar6 = plVar15;
        plStack_e80 = (long *)pcVar7;
        plStack_e78 = (long *)pcVar2;
        plStack_e70 = plVar16;
        plStack_e68 = plVar14;
        plStack_e60 = plVar13;
        plStack_e58 = plVar9;
        pppuStack_e50 = &pppuStack_dd0;
        _objc_retain(plVar4);
        plVar9 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          plVar9 = (long *)plVar3[1];
          _objc_retain(plVar4);
          if (plVar4 == (long *)0x0) {
            pcVar5 = "";
          }
          else {
            pcVar5 = (char *)plVar4;
            _objc_retainAutorelease(plVar4);
            func_0x00010bdc3520();
          }
          _objc_release(plVar4);
          pcVar2 = (char *)alStack_ea0;
          func_0x00010002b838(alStack_ea0,pcVar5);
          alStack_ec0[0] = 0;
          alStack_ec0[1] = 0;
          alStack_ec0[2] = 0;
          func_0x00010007e1e8(alStack_ec0,alStack_ea0,&lStack_e88,1);
          plVar8 = (long *)&UNK_11087b2e8;
          (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087b2e8,alStack_ec0,plVar15);
          puStack_ea8 = (undefined1 *)alStack_ec0;
          func_0x00010007e5dc(&puStack_ea8);
          plVar6 = plVar11;
          plVar12 = plVar15;
          plVar16 = alStack_ec0;
          if (cStack_e89 < '\0') {
            __ZdlPv(alStack_ea0[0]);
            plVar6 = plVar11;
            plVar12 = plVar15;
            plVar16 = alStack_ec0;
          }
        }
        plVar13 = plVar4;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e88) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(plVar4);
        _objc_release(plVar4);
        plVar15 = plVar13;
        __Unwind_Resume();
        plVar11 = alStack_f40;
        pcStack_ec8 = FUN_10532dc90;
        lStack_f08 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar14 = plVar8;
        plVar3 = plVar6;
        plStack_f00 = (long *)pcVar7;
        plStack_ef8 = (long *)pcVar2;
        plStack_ef0 = plVar16;
        plStack_ee8 = plVar9;
        plStack_ee0 = plVar13;
        plStack_ed8 = plVar4;
        pppuStack_ed0 = &pppuStack_e50;
        _objc_retain(plVar8);
        plVar9 = (long *)0x0;
        if (plVar15 != (long *)0x0) {
          plVar9 = (long *)plVar15[1];
          _objc_retain(plVar8);
          if (plVar8 == (long *)0x0) {
            pcVar5 = "";
          }
          else {
            pcVar5 = (char *)plVar8;
            _objc_retainAutorelease(plVar8);
            func_0x00010bdc3520();
          }
          _objc_release(plVar8);
          pcVar2 = (char *)alStack_f20;
          func_0x00010002b838(alStack_f20,pcVar5);
          alStack_f40[0] = 0;
          alStack_f40[1] = 0;
          alStack_f40[2] = 0;
          func_0x00010007e1e8(alStack_f40,alStack_f20,&lStack_f08,1);
          plVar14 = (long *)&UNK_11087b338;
          (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087b338,alStack_f40,plVar6);
          puStack_f28 = (undefined1 *)alStack_f40;
          func_0x00010007e5dc(&puStack_f28);
          plVar3 = plVar11;
          plVar12 = plVar6;
          plVar16 = alStack_f40;
          if (cStack_f09 < '\0') {
            __ZdlPv(alStack_f20[0]);
            plVar3 = plVar11;
            plVar12 = plVar6;
            plVar16 = alStack_f40;
          }
        }
        plVar13 = plVar8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f08) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(plVar8);
        _objc_release(plVar8);
        plVar15 = plVar13;
        __Unwind_Resume();
        plVar11 = alStack_fc0;
        pcStack_f48 = FUN_10532de04;
        lStack_f88 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar4 = plVar14;
        plVar6 = plVar3;
        plStack_f80 = (long *)pcVar7;
        plStack_f78 = (long *)pcVar2;
        plStack_f70 = plVar16;
        plStack_f68 = plVar9;
        plStack_f60 = plVar13;
        plStack_f58 = plVar8;
        pppuStack_f50 = &pppuStack_ed0;
        _objc_retain(plVar14);
        if (plVar15 != (long *)0x0) {
          plVar9 = (long *)plVar15[1];
          plVar4 = (long *)&UNK_11087b388;
          (**(code **)(*plVar9 + 0x28))();
          if ((int)plVar9 != 0) {
            plVar15 = (long *)plVar15[1];
            _objc_retain(plVar14);
            if (plVar14 == (long *)0x0) {
              pcVar5 = "";
            }
            else {
              pcVar5 = (char *)plVar14;
              _objc_retainAutorelease(plVar14);
              func_0x00010bdc3520();
            }
            _objc_release(plVar14);
            pcVar2 = (char *)alStack_fa0;
            func_0x00010002b838(alStack_fa0,pcVar5);
            alStack_fc0[0] = 0;
            alStack_fc0[1] = 0;
            alStack_fc0[2] = 0;
            func_0x00010007e1e8(alStack_fc0,alStack_fa0,&lStack_f88,1);
            plVar12 = (long *)((long)plVar3 * 10);
            plVar4 = (long *)&UNK_11087b388;
            (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11087b388,alStack_fc0,plVar12);
            puStack_fa8 = (undefined1 *)alStack_fc0;
            func_0x00010007e5dc(&puStack_fa8);
            plVar6 = plVar11;
            plVar16 = alStack_fc0;
            if (cStack_f89 < '\0') {
              __ZdlPv(alStack_fa0[0]);
              plVar6 = plVar11;
              plVar16 = alStack_fc0;
            }
          }
        }
        plVar9 = plVar14;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f88) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(plVar14);
        _objc_release(plVar14);
        plVar8 = plVar9;
        __Unwind_Resume();
        pcStack_fc8 = FUN_10532df9c;
        lStack_1008 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar13 = plVar4;
        plStack_1000 = (long *)pcVar7;
        plStack_ff8 = (long *)pcVar2;
        plStack_ff0 = plVar16;
        plStack_fe8 = plVar15;
        plStack_fe0 = plVar9;
        plStack_fd8 = plVar14;
        pppuStack_fd0 = &pppuStack_f50;
        _objc_retain(plVar4);
        _objc_retain(plVar6);
        if (plVar8 != (long *)0x0) {
          plVar16 = (long *)plVar8[1];
          _objc_retain(plVar4);
          if (plVar4 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar4;
            _objc_retainAutorelease(plVar4);
            func_0x00010bdc3520();
          }
          _objc_release(plVar4);
          func_0x00010002b838(auStack_1038,pcVar2);
          _objc_retain(plVar6);
          if (plVar6 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            _objc_retainAutorelease(plVar6);
            pcVar2 = (char *)plVar6;
            func_0x00010bdc3520(plVar6);
          }
          _objc_release(plVar6);
          func_0x00010002b838(auStack_1020,pcVar2);
          uStack_1058 = 0;
          uStack_1050 = 0;
          uStack_1048 = 0;
          func_0x00010007e1e8(&uStack_1058,auStack_1038,&lStack_1008,2);
          plVar13 = (long *)&UNK_11087b428;
          (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11087b428,&uStack_1058,plVar12);
          puStack_1040 = &uStack_1058;
          func_0x00010007e5dc(&puStack_1040);
          lVar1 = 0;
          do {
            if ((&cStack_1009)[lVar1] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_1020 + lVar1));
            }
            lVar1 = lVar1 + -0x18;
          } while (lVar1 != -0x30);
        }
        _objc_release(plVar6);
        plVar16 = plVar4;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1008) {
          ___stack_chk_fail();
          _objc_release(plVar6);
          if (cStack_1021 < '\0') {
            __ZdlPv(auStack_1038[0]);
          }
          _objc_release(plVar6);
          _objc_release(plVar4);
          __Unwind_Resume();
          pcStack_1068 = FUN_10532e1cc;
          if (plVar16 != (long *)0x0) {
            plVar9 = (long *)plVar16[1];
            plStack_1080 = plVar6;
            plStack_1078 = plVar4;
            pppuStack_1070 = &pppuStack_fd0;
            (**(code **)(*plVar9 + 0x28))(plVar9,&UNK_11087b478);
            if ((int)plVar9 != 0) {
              uStack_10a0 = 0;
              uStack_1098 = 0;
              uStack_1090 = 0;
              (**(code **)(*(long *)plVar16[1] + 0x18))
                        ((long *)plVar16[1],&UNK_11087b478,&uStack_10a0,(long)plVar13 * 10);
              puStack_1088 = (undefined1 *)&uStack_10a0;
              func_0x00010007e5dc(&puStack_1088);
            }
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105327188; end: 1053271f7; -[SCConfigMetricGraphene2 cofFileSystemStrategyConfigUnknown:] */

void FUN_105327188(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532adc4(uVar2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053271f8; end: 105327287; -[SCConfigMetricGraphene2 cofFileSystemStrategyFallback:fileSystemStrategy:] */

void FUN_1053271f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_105327288(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532af38(uVar1,param_4,param_3,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105327288; end: 1053272df;  */

void FUN_105327288(long param_1,undefined8 param_2)

{
  if (4 < param_1 + 1U) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dd23d8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053272e0; end: 10532736f; -[SCConfigMetricGraphene2 cofFileSystemEtagValidation:fileSystemStrategy:] */

void FUN_1053272e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_105327288(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532b168(uVar1,param_4,param_3,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105327370; end: 1053273ff; -[SCConfigMetricGraphene2 cofFileSystemEtagComparison:fileSystemStrategy:] */

void FUN_105327370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_105327288(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532b398(uVar1,param_4,param_3,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105327400; end: 105327467; -[SCConfigMetricGraphene2 cofFileSystemCleanup:syncingStrategy:] */

void FUN_105327400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_105326ba4(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532b5c8(uVar1,param_3,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105327468; end: 1053274f7; -[SCConfigMetricGraphene2 cofReadingStrategyFallback:readingStrategy:] */

void FUN_105327468(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_1053274f8(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532b7b4(uVar1,param_3,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053274f8; end: 10532754b;  */

void FUN_1053274f8(ulong param_1,undefined8 param_2)

{
  if (2 < param_1) {
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dd23d8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10532754c; end: 1053275db; -[SCConfigMetricGraphene2 cofSyncingStrategyFallback:syncingStrategy:] */

void FUN_10532754c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_105326ba4(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532b9e4(uVar1,param_3,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053275dc; end: 1053275f3; -[SCConfigMetricGraphene2 cofDualSyncResult:docObjectSuccess:fileSystemSuccess:] */

/* WARNING: Removing unreachable block (ram,0x00010532c918) */
/* WARNING: Removing unreachable block (ram,0x00010532be10) */
/* WARNING: Removing unreachable block (ram,0x00010532d954) */

void FUN_1053275dc(long param_1,undefined8 param_2,long *param_3,long *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *unaff_x24;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined1 *puStack_bc8;
  long *plStack_bc0;
  long *plStack_bb8;
  undefined8 ***pppuStack_bb0;
  code *pcStack_ba8;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 *puStack_b80;
  undefined8 auStack_b78 [2];
  char cStack_b61;
  undefined8 auStack_b60 [2];
  char cStack_b49;
  long lStack_b48;
  long *plStack_b40;
  long *plStack_b38;
  long *plStack_b30;
  long *plStack_b28;
  long *plStack_b20;
  long *plStack_b18;
  undefined8 ***pppuStack_b10;
  code *pcStack_b08;
  long alStack_b00 [3];
  undefined1 *puStack_ae8;
  long alStack_ae0 [2];
  char cStack_ac9;
  long lStack_ac8;
  long *plStack_ac0;
  long *plStack_ab8;
  long *plStack_ab0;
  long *plStack_aa8;
  long *plStack_aa0;
  long *plStack_a98;
  undefined8 ***pppuStack_a90;
  code *pcStack_a88;
  long alStack_a80 [3];
  undefined1 *puStack_a68;
  long alStack_a60 [2];
  char cStack_a49;
  long lStack_a48;
  long *plStack_a40;
  long *plStack_a38;
  long *plStack_a30;
  long *plStack_a28;
  long *plStack_a20;
  long *plStack_a18;
  undefined8 ***pppuStack_a10;
  code *pcStack_a08;
  long alStack_a00 [3];
  undefined1 *puStack_9e8;
  long alStack_9e0 [2];
  char cStack_9c9;
  long lStack_9c8;
  long *plStack_9c0;
  long *plStack_9b8;
  long *plStack_9b0;
  long *plStack_9a8;
  long *plStack_9a0;
  long *plStack_998;
  undefined8 ***pppuStack_990;
  code *pcStack_988;
  long alStack_980 [3];
  undefined1 *puStack_968;
  long alStack_960 [2];
  char cStack_949;
  long lStack_948;
  long *plStack_940;
  long *plStack_938;
  long *plStack_930;
  long *plStack_928;
  long *plStack_920;
  long *plStack_918;
  undefined8 ***pppuStack_910;
  code *pcStack_908;
  long alStack_900 [3];
  undefined1 *puStack_8e8;
  long alStack_8e0 [3];
  undefined1 auStack_8c8 [24];
  undefined8 auStack_8b0 [2];
  char cStack_899;
  long lStack_898;
  undefined8 ***pppuStack_850;
  code *pcStack_848;
  long alStack_838 [3];
  long *plStack_820;
  undefined1 auStack_818 [24];
  undefined8 auStack_800 [2];
  char cStack_7e9;
  long lStack_7e8;
  long *plStack_7e0;
  long *plStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  long *plStack_7c0;
  long *plStack_7b8;
  undefined8 ***pppuStack_7b0;
  code *pcStack_7a8;
  long alStack_7a0 [3];
  undefined1 *puStack_788;
  long alStack_780 [2];
  char cStack_769;
  long lStack_768;
  long *plStack_760;
  long *plStack_758;
  long *plStack_750;
  long *plStack_748;
  long *plStack_740;
  long *plStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  long alStack_718 [3];
  long *plStack_700;
  long alStack_6f8 [2];
  char cStack_6e1;
  undefined8 auStack_6e0 [2];
  char cStack_6c9;
  long lStack_6c8;
  long *plStack_6c0;
  long *plStack_6b8;
  long *plStack_6b0;
  long *plStack_6a8;
  long *plStack_6a0;
  long *plStack_698;
  undefined8 ***pppuStack_690;
  code *pcStack_688;
  long alStack_678 [3];
  long *plStack_660;
  long alStack_658 [2];
  char cStack_641;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  long *plStack_620;
  long *plStack_618;
  long *plStack_610;
  long *plStack_608;
  long *plStack_600;
  long *plStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  long alStack_5d8 [3];
  long *plStack_5c0;
  long alStack_5b8 [2];
  char cStack_5a1;
  undefined8 auStack_5a0 [2];
  char cStack_589;
  long lStack_588;
  long *plStack_580;
  long *plStack_578;
  long *plStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  long alStack_538 [3];
  long *plStack_520;
  long alStack_518 [3];
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  long *plStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  long alStack_498 [3];
  long *plStack_480;
  long alStack_478 [3];
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  long *plStack_440;
  long *plStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  long alStack_400 [3];
  undefined1 *puStack_3e8;
  long alStack_3e0 [3];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  long alStack_338 [3];
  long *plStack_320;
  long alStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  long *plStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  long alStack_298 [3];
  long *plStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  long *plStack_238;
  undefined8 *puStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  long alStack_1f8 [3];
  long *plStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long alStack_158 [3];
  long *plStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_c0 [3];
  undefined1 *puStack_a8;
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 8);
  plVar10 = (long *)0x1;
  plVar14 = alStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = param_4;
  plVar11 = (long *)param_5;
  plVar9 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar11 = *(long **)(lVar1 + 8);
    unaff_x24 = "false";
    pcVar2 = "true";
    if ((int)param_4 == 0) {
      pcVar2 = unaff_x24;
    }
    func_0x00010002b838(alStack_a0,pcVar2);
    pcVar2 = "true";
    if ((int)param_5 == 0) {
      pcVar2 = unaff_x24;
    }
    func_0x00010002b838(auStack_88,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      param_5 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      param_5 = (char *)param_3;
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_70,param_5);
    alStack_c0[0] = 0;
    alStack_c0[1] = 0;
    alStack_c0[2] = 0;
    func_0x00010007e1e8(alStack_c0,alStack_a0,&lStack_58,3);
    plVar15 = (long *)&UNK_11087a218;
    plVar9 = (long *)0x1;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = (undefined1 *)alStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar1 = 0;
    plVar11 = plVar14;
    do {
      if ((&cStack_59)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      param_4 = alStack_c0;
    } while (lVar1 != -0x48);
  }
  plVar14 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  plStack_e8 = alStack_a0;
  do {
    param_4 = param_4 + -3;
  } while (param_4 != plStack_e8);
  _objc_release(param_3);
  plVar13 = plVar14;
  __Unwind_Resume();
  pcStack_c8 = FUN_10532be38;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar15;
  plVar12 = plVar11;
  plVar3 = plVar9;
  pcStack_100 = unaff_x24;
  plStack_f8 = (long *)param_5;
  plStack_f0 = param_4;
  plStack_e0 = plVar14;
  plStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar15);
  _objc_retain(plVar11);
  puVar16 = (undefined8 *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar14 = (long *)plVar13[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar11);
      pcVar2 = (char *)plVar11;
      func_0x00010bdc3520(plVar11);
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_120,pcVar2);
    alStack_158[0] = 0;
    alStack_158[1] = 0;
    alStack_158[2] = 0;
    func_0x00010007e1e8(alStack_158,auStack_138,&lStack_108,2);
    plVar6 = (long *)&UNK_11087a268;
    param_5 = (char *)alStack_158;
    plVar12 = alStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plStack_140 = (long *)param_5;
    func_0x00010007e5dc(&plStack_140);
    lVar1 = 0;
    puVar16 = auStack_138;
    plVar3 = plVar9;
    do {
      if ((&cStack_109)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar11);
  plVar9 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(plVar11);
  _objc_release(plVar15);
  plVar4 = plVar9;
  __Unwind_Resume();
  pcStack_168 = FUN_10532c068;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar6;
  plVar13 = plVar12;
  plVar8 = plVar3;
  pcStack_1a0 = unaff_x24;
  plStack_198 = (long *)param_5;
  puStack_190 = puVar16;
  plStack_188 = plVar9;
  plStack_180 = plVar11;
  plStack_178 = plVar15;
  ppuStack_170 = &puStack_d0;
  _objc_retain(plVar6);
  _objc_retain(plVar12);
  puVar16 = (undefined8 *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar2);
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar12);
      pcVar2 = (char *)plVar12;
      func_0x00010bdc3520(plVar12);
    }
    _objc_release(plVar12);
    func_0x00010002b838(auStack_1c0,pcVar2);
    alStack_1f8[0] = 0;
    alStack_1f8[1] = 0;
    alStack_1f8[2] = 0;
    func_0x00010007e1e8(alStack_1f8,auStack_1d8,&lStack_1a8,2);
    plVar14 = (long *)&UNK_11087a2b8;
    param_5 = (char *)alStack_1f8;
    plVar13 = alStack_1f8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plStack_1e0 = (long *)param_5;
    func_0x00010007e5dc(&plStack_1e0);
    lVar1 = 0;
    puVar16 = auStack_1d8;
    plVar8 = plVar3;
    do {
      if ((&cStack_1a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar12);
  plVar15 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(plVar12);
  _objc_release(plVar6);
  plVar3 = plVar15;
  __Unwind_Resume();
  pcStack_208 = FUN_10532c298;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar14;
  plVar9 = plVar13;
  plVar4 = plVar8;
  pcStack_240 = unaff_x24;
  plStack_238 = (long *)param_5;
  puStack_230 = puVar16;
  plStack_228 = plVar15;
  plStack_220 = plVar12;
  plStack_218 = plVar6;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(plVar14);
  _objc_retain(plVar13);
  puVar16 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar15 = (long *)plVar3[1];
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar14;
      _objc_retainAutorelease(plVar14);
      func_0x00010bdc3520();
    }
    _objc_release(plVar14);
    unaff_x24 = (char *)auStack_278;
    func_0x00010002b838(auStack_278,pcVar2);
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar13);
      pcVar2 = (char *)plVar13;
      func_0x00010bdc3520(plVar13);
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_260,pcVar2);
    alStack_298[0] = 0;
    alStack_298[1] = 0;
    alStack_298[2] = 0;
    func_0x00010007e1e8(alStack_298,auStack_278,&lStack_248,2);
    plVar11 = (long *)&UNK_11087a308;
    param_5 = (char *)alStack_298;
    plVar9 = alStack_298;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plStack_280 = (long *)param_5;
    func_0x00010007e5dc(&plStack_280);
    lVar1 = 0;
    puVar16 = auStack_278;
    plVar4 = plVar8;
    do {
      if ((&cStack_249)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar13);
  plVar15 = plVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar13);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(plVar13);
  _objc_release(plVar14);
  plVar12 = plVar15;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10532c4c8;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar11;
  pcVar2 = (char *)plVar9;
  plVar3 = plVar4;
  pcStack_2e0 = unaff_x24;
  plStack_2d8 = (long *)param_5;
  puStack_2d0 = puVar16;
  plStack_2c8 = plVar15;
  plStack_2c0 = plVar13;
  plStack_2b8 = plVar14;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(plVar9);
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)plVar12[1];
    pcVar2 = "true";
    if ((int)plVar11 == 0) {
      pcVar2 = "false";
    }
    param_5 = (char *)alStack_318;
    func_0x00010002b838(alStack_318,pcVar2);
    _objc_retain(plVar9);
    if (plVar9 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar9);
      pcVar2 = (char *)plVar9;
      func_0x00010bdc3520(plVar9);
    }
    _objc_release(plVar9);
    func_0x00010002b838(auStack_300,pcVar2);
    alStack_338[0] = 0;
    alStack_338[1] = 0;
    alStack_338[2] = 0;
    func_0x00010007e1e8(alStack_338,alStack_318,&lStack_2e8,2);
    plVar6 = (long *)&UNK_11087a358;
    pcVar2 = (char *)alStack_338;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plStack_320 = alStack_338;
    func_0x00010007e5dc(&plStack_320);
    lVar1 = 0;
    plVar3 = plVar4;
    do {
      if ((&cStack_2e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar15 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar9);
  if (cStack_301 < '\0') {
    __ZdlPv(alStack_318[0]);
  }
  _objc_release(plVar9);
  __Unwind_Resume();
  plVar13 = alStack_400;
  pcStack_348 = FUN_10532c6b4;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar6;
  plVar9 = (long *)pcVar2;
  plVar14 = plVar3;
  plVar12 = plVar10;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(plVar6);
  _objc_retain(plVar3);
  if (plVar15 != (long *)0x0) {
    plVar4 = (long *)plVar15[1];
    plVar11 = (long *)&UNK_11087aa38;
    (**(code **)(*plVar4 + 0x28))();
    if ((int)plVar4 != 0) {
      plVar15 = (long *)plVar15[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      func_0x00010002b838(alStack_3e0,pcVar5);
      pcVar5 = "true";
      if ((int)pcVar2 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_3c8,pcVar5);
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar3);
        pcVar2 = (char *)plVar3;
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      func_0x00010002b838(auStack_3b0,pcVar2);
      alStack_400[0] = 0;
      alStack_400[1] = 0;
      alStack_400[2] = 0;
      func_0x00010007e1e8(alStack_400,alStack_3e0,&lStack_398,3);
      plVar14 = (long *)((long)plVar10 * 1000);
      plVar11 = (long *)&UNK_11087aa38;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_3e8 = (undefined1 *)alStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      lVar1 = 0;
      plVar9 = plVar13;
      do {
        if ((&cStack_399)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        param_5 = (char *)alStack_400;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(plVar3);
  plVar15 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  plStack_430 = alStack_3e0;
  do {
    param_5 = (char *)((long)param_5 + -0x18);
  } while ((long *)param_5 != plStack_430);
  _objc_release(plVar3);
  _objc_release(plVar6);
  plVar4 = plVar15;
  __Unwind_Resume();
  pcStack_408 = FUN_10532c950;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar11;
  plVar13 = plVar9;
  plVar8 = plVar14;
  plStack_440 = (long *)pcVar2;
  plStack_438 = (long *)param_5;
  plStack_428 = plVar15;
  plStack_420 = plVar3;
  plStack_418 = plVar6;
  pppuStack_410 = &pppuStack_350;
  _objc_retain(plVar11);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      param_5 = "";
    }
    else {
      param_5 = (char *)plVar11;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    pcVar2 = (char *)alStack_478;
    func_0x00010002b838(alStack_478,param_5);
    pcVar5 = "true";
    if ((int)plVar9 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_460,pcVar5);
    alStack_498[0] = 0;
    alStack_498[1] = 0;
    alStack_498[2] = 0;
    func_0x00010007e1e8(alStack_498,alStack_478,&lStack_448,2);
    plVar10 = (long *)&UNK_11087ab88;
    plVar9 = alStack_498;
    plVar13 = alStack_498;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plStack_480 = plVar9;
    func_0x00010007e5dc(&plStack_480);
    lVar1 = 0;
    plVar15 = alStack_478;
    plVar8 = plVar14;
    do {
      if ((&cStack_449)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar14 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar4 = plVar14;
  __Unwind_Resume();
  pcStack_4a8 = FUN_10532cb38;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar10;
  plVar3 = plVar13;
  plVar7 = plVar8;
  plStack_4e0 = (long *)pcVar2;
  plStack_4d8 = (long *)param_5;
  plStack_4d0 = plVar9;
  plStack_4c8 = plVar15;
  plStack_4c0 = plVar14;
  plStack_4b8 = plVar11;
  pppuStack_4b0 = &pppuStack_410;
  _objc_retain(plVar10);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar10);
    if (plVar10 == (long *)0x0) {
      param_5 = "";
    }
    else {
      param_5 = (char *)plVar10;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar10);
    pcVar2 = (char *)alStack_518;
    func_0x00010002b838(alStack_518,param_5);
    pcVar5 = "true";
    if ((int)plVar13 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_500,pcVar5);
    alStack_538[0] = 0;
    alStack_538[1] = 0;
    alStack_538[2] = 0;
    func_0x00010007e1e8(alStack_538,alStack_518,&lStack_4e8,2);
    plVar6 = (long *)&UNK_11087abd8;
    plVar13 = alStack_538;
    plVar3 = alStack_538;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plStack_520 = plVar13;
    func_0x00010007e5dc(&plStack_520);
    lVar1 = 0;
    plVar15 = alStack_518;
    plVar7 = plVar8;
    do {
      if ((&cStack_4e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_500 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar11 = plVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar10);
  _objc_release(plVar10);
  plVar4 = plVar11;
  __Unwind_Resume();
  pcStack_548 = FUN_10532cd20;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar6;
  plVar14 = plVar3;
  plVar8 = plVar7;
  plStack_580 = (long *)pcVar2;
  plStack_578 = (long *)param_5;
  plStack_570 = plVar13;
  plStack_568 = plVar15;
  plStack_560 = plVar11;
  plStack_558 = plVar10;
  pppuStack_550 = &pppuStack_4b0;
  _objc_retain(plVar6);
  _objc_retain(plVar3);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)plVar6;
      _objc_retainAutorelease(plVar6);
      func_0x00010bdc3520();
    }
    _objc_release(plVar6);
    pcVar2 = (char *)alStack_5b8;
    func_0x00010002b838(alStack_5b8,pcVar5);
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(plVar3);
      pcVar5 = (char *)plVar3;
      func_0x00010bdc3520(plVar3);
    }
    _objc_release(plVar3);
    func_0x00010002b838(auStack_5a0,pcVar5);
    alStack_5d8[0] = 0;
    alStack_5d8[1] = 0;
    alStack_5d8[2] = 0;
    func_0x00010007e1e8(alStack_5d8,alStack_5b8,&lStack_588,2);
    plVar9 = (long *)&UNK_11087ac28;
    param_5 = (char *)alStack_5d8;
    plVar14 = alStack_5d8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plStack_5c0 = (long *)param_5;
    func_0x00010007e5dc(&plStack_5c0);
    lVar1 = 0;
    plVar15 = alStack_5b8;
    plVar8 = plVar7;
    do {
      if ((&cStack_589)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_5a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar3);
  plVar11 = plVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  if (cStack_5a1 < '\0') {
    __ZdlPv(alStack_5b8[0]);
  }
  _objc_release(plVar3);
  _objc_release(plVar6);
  plVar4 = plVar11;
  __Unwind_Resume();
  pcStack_5e8 = FUN_10532cf50;
  lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar9;
  plVar13 = plVar14;
  plVar7 = plVar8;
  plStack_620 = (long *)pcVar2;
  plStack_618 = (long *)param_5;
  plStack_610 = plVar15;
  plStack_608 = plVar11;
  plStack_600 = plVar3;
  plStack_5f8 = plVar6;
  pppuStack_5f0 = &pppuStack_550;
  _objc_retain(plVar9);
  _objc_retain(plVar14);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar9);
    if (plVar9 == (long *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)plVar9;
      _objc_retainAutorelease(plVar9);
      func_0x00010bdc3520();
    }
    _objc_release(plVar9);
    pcVar2 = (char *)alStack_658;
    func_0x00010002b838(alStack_658,pcVar5);
    _objc_retain(plVar14);
    if (plVar14 == (long *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(plVar14);
      pcVar5 = (char *)plVar14;
      func_0x00010bdc3520(plVar14);
    }
    _objc_release(plVar14);
    func_0x00010002b838(auStack_640,pcVar5);
    alStack_678[0] = 0;
    alStack_678[1] = 0;
    alStack_678[2] = 0;
    func_0x00010007e1e8(alStack_678,alStack_658,&lStack_628,2);
    plVar10 = (long *)&UNK_11087ac78;
    param_5 = (char *)alStack_678;
    plVar13 = alStack_678;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plStack_660 = (long *)param_5;
    func_0x00010007e5dc(&plStack_660);
    lVar1 = 0;
    plVar15 = alStack_658;
    plVar7 = plVar8;
    do {
      if ((&cStack_629)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_640 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar14);
  plVar11 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar14);
  if (cStack_641 < '\0') {
    __ZdlPv(alStack_658[0]);
  }
  _objc_release(plVar14);
  _objc_release(plVar9);
  plVar4 = plVar11;
  __Unwind_Resume();
  pcStack_688 = FUN_10532d180;
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar10;
  plVar3 = plVar13;
  plVar8 = plVar7;
  plStack_6c0 = (long *)pcVar2;
  plStack_6b8 = (long *)param_5;
  plStack_6b0 = plVar15;
  plStack_6a8 = plVar11;
  plStack_6a0 = plVar14;
  plStack_698 = plVar9;
  pppuStack_690 = &pppuStack_5f0;
  _objc_retain(plVar10);
  _objc_retain(plVar13);
  plVar15 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar15 = (long *)plVar4[1];
    _objc_retain(plVar10);
    if (plVar10 == (long *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)plVar10;
      _objc_retainAutorelease(plVar10);
      func_0x00010bdc3520();
    }
    _objc_release(plVar10);
    pcVar2 = (char *)alStack_6f8;
    func_0x00010002b838(alStack_6f8,pcVar5);
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(plVar13);
      pcVar5 = (char *)plVar13;
      func_0x00010bdc3520(plVar13);
    }
    _objc_release(plVar13);
    func_0x00010002b838(auStack_6e0,pcVar5);
    alStack_718[0] = 0;
    alStack_718[1] = 0;
    alStack_718[2] = 0;
    func_0x00010007e1e8(alStack_718,alStack_6f8,&lStack_6c8,2);
    plVar6 = (long *)&UNK_11087acc8;
    param_5 = (char *)alStack_718;
    plVar3 = alStack_718;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    plStack_700 = (long *)param_5;
    func_0x00010007e5dc(&plStack_700);
    lVar1 = 0;
    plVar15 = alStack_6f8;
    plVar8 = plVar7;
    do {
      if ((&cStack_6c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_6e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar13);
  plVar11 = plVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6c8) {
    ___stack_chk_fail();
    _objc_release(plVar13);
    if (cStack_6e1 < '\0') {
      __ZdlPv(alStack_6f8[0]);
    }
    _objc_release(plVar13);
    _objc_release(plVar10);
    plVar14 = plVar11;
    __Unwind_Resume();
    plVar7 = alStack_7a0;
    pcStack_728 = FUN_10532d3b0;
    lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar9 = plVar6;
    plVar4 = plVar3;
    plStack_760 = (long *)pcVar2;
    plStack_758 = (long *)param_5;
    plStack_750 = plVar15;
    plStack_748 = plVar11;
    plStack_740 = plVar13;
    plStack_738 = plVar10;
    pppuStack_730 = &pppuStack_690;
    _objc_retain(plVar6);
    plVar11 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      plVar11 = (long *)plVar14[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      param_5 = (char *)alStack_780;
      func_0x00010002b838(alStack_780,pcVar5);
      alStack_7a0[0] = 0;
      alStack_7a0[1] = 0;
      alStack_7a0[2] = 0;
      func_0x00010007e1e8(alStack_7a0,alStack_780,&lStack_768,1);
      plVar9 = (long *)&UNK_11087ad18;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_788 = (undefined1 *)alStack_7a0;
      func_0x00010007e5dc(&puStack_788);
      plVar4 = plVar7;
      plVar8 = plVar3;
      plVar15 = alStack_7a0;
      if (cStack_769 < '\0') {
        __ZdlPv(alStack_780[0]);
        plVar4 = plVar7;
        plVar8 = plVar3;
        plVar15 = alStack_7a0;
      }
    }
    plVar14 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_768) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar6);
    _objc_release(plVar6);
    plVar13 = plVar14;
    __Unwind_Resume();
    pcStack_7a8 = FUN_10532d524;
    lStack_7e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = plVar9;
    pcVar5 = (char *)plVar4;
    plVar3 = plVar8;
    plStack_7e0 = (long *)pcVar2;
    plStack_7d8 = (long *)param_5;
    plStack_7d0 = plVar15;
    plStack_7c8 = plVar11;
    plStack_7c0 = plVar14;
    plStack_7b8 = plVar6;
    pppuStack_7b0 = &pppuStack_730;
    _objc_retain(plVar9);
    if (plVar13 != (long *)0x0) {
      plVar15 = (long *)plVar13[1];
      _objc_retain(plVar9);
      if (plVar9 == (long *)0x0) {
        param_5 = "";
      }
      else {
        param_5 = (char *)plVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(plVar9);
      func_0x00010002b838(auStack_818,param_5);
      pcVar2 = "true";
      if ((int)plVar4 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_800,pcVar2);
      alStack_838[0] = 0;
      alStack_838[1] = 0;
      alStack_838[2] = 0;
      func_0x00010007e1e8(alStack_838,auStack_818,&lStack_7e8,2);
      plVar10 = (long *)&UNK_11087ad68;
      pcVar5 = (char *)alStack_838;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      plStack_820 = alStack_838;
      func_0x00010007e5dc(&plStack_820);
      lVar1 = 0;
      plVar3 = plVar8;
      do {
        if ((&cStack_7e9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_800 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    plVar15 = plVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar9);
    _objc_release(plVar9);
    __Unwind_Resume();
    plVar6 = alStack_900;
    pcStack_848 = FUN_10532d70c;
    lStack_898 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = plVar10;
    plVar9 = (long *)pcVar5;
    plVar14 = plVar3;
    pppuStack_850 = &pppuStack_7b0;
    _objc_retain(plVar10);
    _objc_retain(plVar3);
    if (plVar15 != (long *)0x0) {
      plVar15 = (long *)plVar15[1];
      _objc_retain(plVar10);
      if (plVar10 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar10;
        _objc_retainAutorelease(plVar10);
        func_0x00010bdc3520();
      }
      _objc_release(plVar10);
      func_0x00010002b838(alStack_8e0,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar5 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_8c8,pcVar2);
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(plVar3);
        pcVar5 = (char *)plVar3;
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      func_0x00010002b838(auStack_8b0,pcVar5);
      alStack_900[0] = 0;
      alStack_900[1] = 0;
      alStack_900[2] = 0;
      func_0x00010007e1e8(alStack_900,alStack_8e0,&lStack_898,3);
      plVar11 = (long *)&UNK_11087adb8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11087adb8,alStack_900,plVar12);
      puStack_8e8 = (undefined1 *)alStack_900;
      func_0x00010007e5dc(&puStack_8e8);
      lVar1 = 0;
      plVar9 = plVar6;
      plVar14 = plVar12;
      do {
        if ((&cStack_899)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_8b0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        param_5 = (char *)alStack_900;
      } while (lVar1 != -0x48);
    }
    _objc_release(plVar3);
    plVar15 = plVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_898) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar3);
    do {
      param_5 = (char *)((long)param_5 + -0x18);
    } while ((long *)param_5 != alStack_8e0);
    _objc_release(plVar3);
    _objc_release(plVar10);
    plVar12 = plVar15;
    __Unwind_Resume();
    plVar4 = alStack_980;
    pcStack_908 = FUN_10532d984;
    lStack_948 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = plVar11;
    plVar13 = plVar9;
    plStack_940 = (long *)pcVar5;
    plStack_938 = (long *)param_5;
    plStack_930 = alStack_8e0;
    plStack_928 = plVar15;
    plStack_920 = plVar3;
    plStack_918 = plVar10;
    pppuStack_910 = &pppuStack_850;
    _objc_retain(plVar11);
    plVar15 = alStack_8e0;
    if (plVar12 != (long *)0x0) {
      plVar10 = (long *)plVar12[1];
      plVar6 = (long *)&UNK_11087b298;
      (**(code **)(*plVar10 + 0x28))();
      if ((int)plVar10 != 0) {
        plVar12 = (long *)plVar12[1];
        _objc_retain(plVar11);
        if (plVar11 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar11;
          _objc_retainAutorelease(plVar11);
          func_0x00010bdc3520();
        }
        _objc_release(plVar11);
        param_5 = (char *)alStack_960;
        func_0x00010002b838(alStack_960,pcVar2);
        alStack_980[0] = 0;
        alStack_980[1] = 0;
        alStack_980[2] = 0;
        func_0x00010007e1e8(alStack_980,alStack_960,&lStack_948,1);
        plVar14 = (long *)((long)plVar9 * 10);
        plVar6 = (long *)&UNK_11087b298;
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11087b298,alStack_980,plVar14);
        puStack_968 = (undefined1 *)alStack_980;
        func_0x00010007e5dc(&puStack_968);
        plVar13 = plVar4;
        plVar15 = alStack_980;
        if (cStack_949 < '\0') {
          __ZdlPv(alStack_960[0]);
          plVar13 = plVar4;
          plVar15 = alStack_980;
        }
      }
    }
    plVar9 = plVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_948) {
      ___stack_chk_fail();
      _objc_release(plVar11);
      _objc_release(plVar11);
      plVar3 = plVar9;
      __Unwind_Resume();
      plVar8 = alStack_a00;
      pcStack_988 = FUN_10532db1c;
      lStack_9c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar10 = plVar6;
      plVar4 = plVar13;
      plStack_9c0 = (long *)pcVar5;
      plStack_9b8 = (long *)param_5;
      plStack_9b0 = plVar15;
      plStack_9a8 = plVar12;
      plStack_9a0 = plVar9;
      plStack_998 = plVar11;
      pppuStack_990 = &pppuStack_910;
      _objc_retain(plVar6);
      plVar11 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        plVar11 = (long *)plVar3[1];
        _objc_retain(plVar6);
        if (plVar6 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar6;
          _objc_retainAutorelease(plVar6);
          func_0x00010bdc3520();
        }
        _objc_release(plVar6);
        param_5 = (char *)alStack_9e0;
        func_0x00010002b838(alStack_9e0,pcVar2);
        alStack_a00[0] = 0;
        alStack_a00[1] = 0;
        alStack_a00[2] = 0;
        func_0x00010007e1e8(alStack_a00,alStack_9e0,&lStack_9c8,1);
        plVar10 = (long *)&UNK_11087b2e8;
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11087b2e8,alStack_a00,plVar13);
        puStack_9e8 = (undefined1 *)alStack_a00;
        func_0x00010007e5dc(&puStack_9e8);
        plVar4 = plVar8;
        plVar14 = plVar13;
        plVar15 = alStack_a00;
        if (cStack_9c9 < '\0') {
          __ZdlPv(alStack_9e0[0]);
          plVar4 = plVar8;
          plVar14 = plVar13;
          plVar15 = alStack_a00;
        }
      }
      plVar9 = plVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar6);
      _objc_release(plVar6);
      plVar13 = plVar9;
      __Unwind_Resume();
      plVar8 = alStack_a80;
      pcStack_a08 = FUN_10532dc90;
      lStack_a48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar12 = plVar10;
      plVar3 = plVar4;
      plStack_a40 = (long *)pcVar5;
      plStack_a38 = (long *)param_5;
      plStack_a30 = plVar15;
      plStack_a28 = plVar11;
      plStack_a20 = plVar9;
      plStack_a18 = plVar6;
      pppuStack_a10 = &pppuStack_990;
      _objc_retain(plVar10);
      plVar11 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        plVar11 = (long *)plVar13[1];
        _objc_retain(plVar10);
        if (plVar10 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar10;
          _objc_retainAutorelease(plVar10);
          func_0x00010bdc3520();
        }
        _objc_release(plVar10);
        param_5 = (char *)alStack_a60;
        func_0x00010002b838(alStack_a60,pcVar2);
        alStack_a80[0] = 0;
        alStack_a80[1] = 0;
        alStack_a80[2] = 0;
        func_0x00010007e1e8(alStack_a80,alStack_a60,&lStack_a48,1);
        plVar12 = (long *)&UNK_11087b338;
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11087b338,alStack_a80,plVar4);
        puStack_a68 = (undefined1 *)alStack_a80;
        func_0x00010007e5dc(&puStack_a68);
        plVar3 = plVar8;
        plVar14 = plVar4;
        plVar15 = alStack_a80;
        if (cStack_a49 < '\0') {
          __ZdlPv(alStack_a60[0]);
          plVar3 = plVar8;
          plVar14 = plVar4;
          plVar15 = alStack_a80;
        }
      }
      plVar9 = plVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a48) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar10);
      _objc_release(plVar10);
      plVar13 = plVar9;
      __Unwind_Resume();
      plVar8 = alStack_b00;
      pcStack_a88 = FUN_10532de04;
      lStack_ac8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar6 = plVar12;
      plVar4 = plVar3;
      plStack_ac0 = (long *)pcVar5;
      plStack_ab8 = (long *)param_5;
      plStack_ab0 = plVar15;
      plStack_aa8 = plVar11;
      plStack_aa0 = plVar9;
      plStack_a98 = plVar10;
      pppuStack_a90 = &pppuStack_a10;
      _objc_retain(plVar12);
      if (plVar13 != (long *)0x0) {
        plVar11 = (long *)plVar13[1];
        plVar6 = (long *)&UNK_11087b388;
        (**(code **)(*plVar11 + 0x28))();
        if ((int)plVar11 != 0) {
          plVar13 = (long *)plVar13[1];
          _objc_retain(plVar12);
          if (plVar12 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar12;
            _objc_retainAutorelease(plVar12);
            func_0x00010bdc3520();
          }
          _objc_release(plVar12);
          param_5 = (char *)alStack_ae0;
          func_0x00010002b838(alStack_ae0,pcVar2);
          alStack_b00[0] = 0;
          alStack_b00[1] = 0;
          alStack_b00[2] = 0;
          func_0x00010007e1e8(alStack_b00,alStack_ae0,&lStack_ac8,1);
          plVar14 = (long *)((long)plVar3 * 10);
          plVar6 = (long *)&UNK_11087b388;
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b388,alStack_b00,plVar14);
          puStack_ae8 = (undefined1 *)alStack_b00;
          func_0x00010007e5dc(&puStack_ae8);
          plVar4 = plVar8;
          plVar15 = alStack_b00;
          if (cStack_ac9 < '\0') {
            __ZdlPv(alStack_ae0[0]);
            plVar4 = plVar8;
            plVar15 = alStack_b00;
          }
        }
      }
      plVar11 = plVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ac8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar12);
      _objc_release(plVar12);
      plVar10 = plVar11;
      __Unwind_Resume();
      pcStack_b08 = FUN_10532df9c;
      lStack_b48 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar9 = plVar6;
      plStack_b40 = (long *)pcVar5;
      plStack_b38 = (long *)param_5;
      plStack_b30 = plVar15;
      plStack_b28 = plVar13;
      plStack_b20 = plVar11;
      plStack_b18 = plVar12;
      pppuStack_b10 = &pppuStack_a90;
      _objc_retain(plVar6);
      _objc_retain(plVar4);
      if (plVar10 != (long *)0x0) {
        plVar15 = (long *)plVar10[1];
        _objc_retain(plVar6);
        if (plVar6 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar6;
          _objc_retainAutorelease(plVar6);
          func_0x00010bdc3520();
        }
        _objc_release(plVar6);
        func_0x00010002b838(auStack_b78,pcVar2);
        _objc_retain(plVar4);
        if (plVar4 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(plVar4);
          pcVar2 = (char *)plVar4;
          func_0x00010bdc3520(plVar4);
        }
        _objc_release(plVar4);
        func_0x00010002b838(auStack_b60,pcVar2);
        uStack_b98 = 0;
        uStack_b90 = 0;
        uStack_b88 = 0;
        func_0x00010007e1e8(&uStack_b98,auStack_b78,&lStack_b48,2);
        plVar9 = (long *)&UNK_11087b428;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11087b428,&uStack_b98,plVar14);
        puStack_b80 = &uStack_b98;
        func_0x00010007e5dc(&puStack_b80);
        lVar1 = 0;
        do {
          if ((&cStack_b49)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_b60 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
      _objc_release(plVar4);
      plVar15 = plVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b48) {
        ___stack_chk_fail();
        _objc_release(plVar4);
        if (cStack_b61 < '\0') {
          __ZdlPv(auStack_b78[0]);
        }
        _objc_release(plVar4);
        _objc_release(plVar6);
        __Unwind_Resume();
        pcStack_ba8 = FUN_10532e1cc;
        if (plVar15 != (long *)0x0) {
          plVar11 = (long *)plVar15[1];
          plStack_bc0 = plVar4;
          plStack_bb8 = plVar6;
          pppuStack_bb0 = &pppuStack_b10;
          (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_11087b478);
          if ((int)plVar11 != 0) {
            uStack_be0 = 0;
            uStack_bd8 = 0;
            uStack_bd0 = 0;
            (**(code **)(*(long *)plVar15[1] + 0x18))
                      ((long *)plVar15[1],&UNK_11087b478,&uStack_be0,(long)plVar9 * 10);
            puStack_bc8 = (undefined1 *)&uStack_be0;
            func_0x00010007e5dc(&puStack_bc8);
          }
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1053275f4; end: 10532769b; -[SCConfigMetricGraphene2 cofFileSystemUpdateFailed:resultCode:] */

void FUN_1053275f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532be38(uVar2,param_3,puVar1,1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10532769c; end: 10532772b; -[SCConfigMetricGraphene2 cofFileSystemUnexpectedlyNull:readingStrategy:] */

void FUN_10532769c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_1053274f8(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10532c068(uVar1,param_3,param_4,1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10532772c; end: 10532773f; -[SCConfigMetricGraphene2 cofFileSystemCppException:operation:] */

/* WARNING: Removing unreachable block (ram,0x00010532c918) */
/* WARNING: Removing unreachable block (ram,0x00010532d954) */

void FUN_10532772c(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined1 *puStack_9c8;
  long *plStack_9c0;
  long *plStack_9b8;
  undefined8 ***pppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 *puStack_980;
  undefined8 auStack_978 [2];
  char cStack_961;
  undefined8 auStack_960 [2];
  char cStack_949;
  long lStack_948;
  long *plStack_940;
  long *plStack_938;
  long *plStack_930;
  long *plStack_928;
  long *plStack_920;
  long *plStack_918;
  undefined8 ***pppuStack_910;
  code *pcStack_908;
  long alStack_900 [3];
  undefined1 *puStack_8e8;
  long alStack_8e0 [2];
  char cStack_8c9;
  long lStack_8c8;
  long *plStack_8c0;
  long *plStack_8b8;
  long *plStack_8b0;
  long *plStack_8a8;
  long *plStack_8a0;
  long *plStack_898;
  undefined8 ***pppuStack_890;
  code *pcStack_888;
  long alStack_880 [3];
  undefined1 *puStack_868;
  long alStack_860 [2];
  char cStack_849;
  long lStack_848;
  long *plStack_840;
  long *plStack_838;
  long *plStack_830;
  long *plStack_828;
  long *plStack_820;
  long *plStack_818;
  undefined8 ***pppuStack_810;
  code *pcStack_808;
  long alStack_800 [3];
  undefined1 *puStack_7e8;
  long alStack_7e0 [2];
  char cStack_7c9;
  long lStack_7c8;
  long *plStack_7c0;
  long *plStack_7b8;
  long *plStack_7b0;
  long *plStack_7a8;
  long *plStack_7a0;
  long *plStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  long alStack_780 [3];
  undefined1 *puStack_768;
  long alStack_760 [2];
  char cStack_749;
  long lStack_748;
  long *plStack_740;
  long *plStack_738;
  long *plStack_730;
  long *plStack_728;
  long *plStack_720;
  long *plStack_718;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  long alStack_700 [3];
  undefined1 *puStack_6e8;
  long alStack_6e0 [3];
  undefined1 auStack_6c8 [24];
  undefined8 auStack_6b0 [2];
  char cStack_699;
  long lStack_698;
  undefined8 ***pppuStack_650;
  code *pcStack_648;
  long alStack_638 [3];
  long *plStack_620;
  undefined1 auStack_618 [24];
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  long *plStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  long *plStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  long alStack_5a0 [3];
  undefined1 *puStack_588;
  long alStack_580 [2];
  char cStack_569;
  long lStack_568;
  long *plStack_560;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  long *plStack_540;
  long *plStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  long alStack_518 [3];
  long *plStack_500;
  long alStack_4f8 [2];
  char cStack_4e1;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  long alStack_478 [3];
  long *plStack_460;
  long alStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  long *plStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  long alStack_3d8 [3];
  long *plStack_3c0;
  long alStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  long alStack_338 [3];
  long *plStack_320;
  long alStack_318 [3];
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  long alStack_298 [3];
  long *plStack_280;
  long alStack_278 [3];
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  long alStack_200 [3];
  undefined1 *puStack_1e8;
  long alStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  long alStack_138 [3];
  long *plStack_120;
  long alStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long alStack_98 [3];
  long *plStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  plVar10 = (long *)0x1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = param_3;
  plVar11 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar15 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar14 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = (char *)param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar2);
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    alStack_98[2] = 0;
    func_0x00010007e1e8(alStack_98,auStack_78,&lStack_48,2);
    plVar16 = (long *)&UNK_11087a308;
    unaff_x23 = (char *)alStack_98;
    plVar11 = alStack_98;
    plVar10 = (long *)0x1;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plStack_80 = (long *)unaff_x23;
    func_0x00010007e5dc(&plStack_80);
    lVar1 = 0;
    puVar15 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  plVar14 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  plVar12 = plVar14;
  __Unwind_Resume();
  pcStack_a8 = FUN_10532c4c8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar16;
  pcVar2 = (char *)plVar11;
  plVar6 = plVar10;
  puStack_e0 = unaff_x24;
  plStack_d8 = (long *)unaff_x23;
  puStack_d0 = puVar15;
  plStack_c8 = plVar14;
  plStack_c0 = param_4;
  plStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar11);
  if (plVar12 != (long *)0x0) {
    plVar14 = (long *)plVar12[1];
    pcVar2 = "true";
    if ((int)plVar16 == 0) {
      pcVar2 = "false";
    }
    unaff_x23 = (char *)alStack_118;
    func_0x00010002b838(alStack_118,pcVar2);
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(plVar11);
      pcVar2 = (char *)plVar11;
      func_0x00010bdc3520(plVar11);
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_100,pcVar2);
    alStack_138[0] = 0;
    alStack_138[1] = 0;
    alStack_138[2] = 0;
    func_0x00010007e1e8(alStack_138,alStack_118,&lStack_e8,2);
    plVar7 = (long *)&UNK_11087a358;
    pcVar2 = (char *)alStack_138;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plStack_120 = alStack_138;
    func_0x00010007e5dc(&plStack_120);
    lVar1 = 0;
    plVar6 = plVar10;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar16 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  if (cStack_101 < '\0') {
    __ZdlPv(alStack_118[0]);
  }
  _objc_release(plVar11);
  __Unwind_Resume();
  plVar13 = alStack_200;
  pcStack_148 = FUN_10532c6b4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar7;
  plVar10 = (long *)pcVar2;
  plVar14 = plVar6;
  plVar12 = param_5;
  ppuStack_150 = &puStack_b0;
  _objc_retain(plVar7);
  _objc_retain(plVar6);
  if (plVar16 != (long *)0x0) {
    plVar3 = (long *)plVar16[1];
    plVar11 = (long *)&UNK_11087aa38;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar16 = (long *)plVar16[1];
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar7;
        _objc_retainAutorelease(plVar7);
        func_0x00010bdc3520();
      }
      _objc_release(plVar7);
      func_0x00010002b838(alStack_1e0,pcVar4);
      pcVar4 = "true";
      if ((int)pcVar2 == 0) {
        pcVar4 = "false";
      }
      func_0x00010002b838(auStack_1c8,pcVar4);
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar6);
        pcVar2 = (char *)plVar6;
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      func_0x00010002b838(auStack_1b0,pcVar2);
      alStack_200[0] = 0;
      alStack_200[1] = 0;
      alStack_200[2] = 0;
      func_0x00010007e1e8(alStack_200,alStack_1e0,&lStack_198,3);
      plVar14 = (long *)((long)param_5 * 1000);
      plVar11 = (long *)&UNK_11087aa38;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_1e8 = (undefined1 *)alStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      lVar1 = 0;
      plVar10 = plVar13;
      do {
        if ((&cStack_199)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x23 = (char *)alStack_200;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(plVar6);
  plVar16 = plVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  plStack_230 = alStack_1e0;
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while ((long *)unaff_x23 != plStack_230);
  _objc_release(plVar6);
  _objc_release(plVar7);
  plVar5 = plVar16;
  __Unwind_Resume();
  pcStack_208 = FUN_10532c950;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = plVar11;
  plVar3 = plVar10;
  plVar9 = plVar14;
  plStack_240 = (long *)pcVar2;
  plStack_238 = (long *)unaff_x23;
  plStack_228 = plVar16;
  plStack_220 = plVar6;
  plStack_218 = plVar7;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(plVar11);
  plVar16 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar16 = (long *)plVar5[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar11;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    pcVar2 = (char *)alStack_278;
    func_0x00010002b838(alStack_278,unaff_x23);
    pcVar4 = "true";
    if ((int)plVar10 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(auStack_260,pcVar4);
    alStack_298[0] = 0;
    alStack_298[1] = 0;
    alStack_298[2] = 0;
    func_0x00010007e1e8(alStack_298,alStack_278,&lStack_248,2);
    plVar13 = (long *)&UNK_11087ab88;
    plVar10 = alStack_298;
    plVar3 = alStack_298;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plStack_280 = plVar10;
    func_0x00010007e5dc(&plStack_280);
    lVar1 = 0;
    plVar16 = alStack_278;
    plVar9 = plVar14;
    do {
      if ((&cStack_249)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar14 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar5 = plVar14;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10532cb38;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = plVar13;
  plVar6 = plVar3;
  plVar8 = plVar9;
  plStack_2e0 = (long *)pcVar2;
  plStack_2d8 = (long *)unaff_x23;
  plStack_2d0 = plVar10;
  plStack_2c8 = plVar16;
  plStack_2c0 = plVar14;
  plStack_2b8 = plVar11;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(plVar13);
  plVar16 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar16 = (long *)plVar5[1];
    _objc_retain(plVar13);
    if (plVar13 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar13;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar13);
    pcVar2 = (char *)alStack_318;
    func_0x00010002b838(alStack_318,unaff_x23);
    pcVar4 = "true";
    if ((int)plVar3 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(auStack_300,pcVar4);
    alStack_338[0] = 0;
    alStack_338[1] = 0;
    alStack_338[2] = 0;
    func_0x00010007e1e8(alStack_338,alStack_318,&lStack_2e8,2);
    plVar7 = (long *)&UNK_11087abd8;
    plVar3 = alStack_338;
    plVar6 = alStack_338;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plStack_320 = plVar3;
    func_0x00010007e5dc(&plStack_320);
    lVar1 = 0;
    plVar16 = alStack_318;
    plVar8 = plVar9;
    do {
      if ((&cStack_2e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar11 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(plVar13);
    _objc_release(plVar13);
    plVar5 = plVar11;
    __Unwind_Resume();
    pcStack_348 = FUN_10532cd20;
    lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = plVar7;
    plVar14 = plVar6;
    plVar9 = plVar8;
    plStack_380 = (long *)pcVar2;
    plStack_378 = (long *)unaff_x23;
    plStack_370 = plVar3;
    plStack_368 = plVar16;
    plStack_360 = plVar11;
    plStack_358 = plVar13;
    pppuStack_350 = &pppuStack_2b0;
    _objc_retain(plVar7);
    _objc_retain(plVar6);
    plVar16 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      plVar16 = (long *)plVar5[1];
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar7;
        _objc_retainAutorelease(plVar7);
        func_0x00010bdc3520();
      }
      _objc_release(plVar7);
      pcVar2 = (char *)alStack_3b8;
      func_0x00010002b838(alStack_3b8,pcVar4);
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(plVar6);
        pcVar4 = (char *)plVar6;
        func_0x00010bdc3520(plVar6);
      }
      _objc_release(plVar6);
      func_0x00010002b838(auStack_3a0,pcVar4);
      alStack_3d8[0] = 0;
      alStack_3d8[1] = 0;
      alStack_3d8[2] = 0;
      func_0x00010007e1e8(alStack_3d8,alStack_3b8,&lStack_388,2);
      plVar10 = (long *)&UNK_11087ac28;
      unaff_x23 = (char *)alStack_3d8;
      plVar14 = alStack_3d8;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_3c0 = (long *)unaff_x23;
      func_0x00010007e5dc(&plStack_3c0);
      lVar1 = 0;
      plVar16 = alStack_3b8;
      plVar9 = plVar8;
      do {
        if ((&cStack_389)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(plVar6);
    plVar11 = plVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar6);
    if (cStack_3a1 < '\0') {
      __ZdlPv(alStack_3b8[0]);
    }
    _objc_release(plVar6);
    _objc_release(plVar7);
    plVar5 = plVar11;
    __Unwind_Resume();
    pcStack_3e8 = FUN_10532cf50;
    lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar13 = plVar10;
    plVar3 = plVar14;
    plVar8 = plVar9;
    plStack_420 = (long *)pcVar2;
    plStack_418 = (long *)unaff_x23;
    plStack_410 = plVar16;
    plStack_408 = plVar11;
    plStack_400 = plVar6;
    plStack_3f8 = plVar7;
    pppuStack_3f0 = &pppuStack_350;
    _objc_retain(plVar10);
    _objc_retain(plVar14);
    plVar16 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      plVar16 = (long *)plVar5[1];
      _objc_retain(plVar10);
      if (plVar10 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar10;
        _objc_retainAutorelease(plVar10);
        func_0x00010bdc3520();
      }
      _objc_release(plVar10);
      pcVar2 = (char *)alStack_458;
      func_0x00010002b838(alStack_458,pcVar4);
      _objc_retain(plVar14);
      if (plVar14 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(plVar14);
        pcVar4 = (char *)plVar14;
        func_0x00010bdc3520(plVar14);
      }
      _objc_release(plVar14);
      func_0x00010002b838(auStack_440,pcVar4);
      alStack_478[0] = 0;
      alStack_478[1] = 0;
      alStack_478[2] = 0;
      func_0x00010007e1e8(alStack_478,alStack_458,&lStack_428,2);
      plVar13 = (long *)&UNK_11087ac78;
      unaff_x23 = (char *)alStack_478;
      plVar3 = alStack_478;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_460 = (long *)unaff_x23;
      func_0x00010007e5dc(&plStack_460);
      lVar1 = 0;
      plVar16 = alStack_458;
      plVar8 = plVar9;
      do {
        if ((&cStack_429)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(plVar14);
    plVar11 = plVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar14);
    if (cStack_441 < '\0') {
      __ZdlPv(alStack_458[0]);
    }
    _objc_release(plVar14);
    _objc_release(plVar10);
    plVar5 = plVar11;
    __Unwind_Resume();
    pcStack_488 = FUN_10532d180;
    lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar7 = plVar13;
    plVar6 = plVar3;
    plVar9 = plVar8;
    plStack_4c0 = (long *)pcVar2;
    plStack_4b8 = (long *)unaff_x23;
    plStack_4b0 = plVar16;
    plStack_4a8 = plVar11;
    plStack_4a0 = plVar14;
    plStack_498 = plVar10;
    pppuStack_490 = &pppuStack_3f0;
    _objc_retain(plVar13);
    _objc_retain(plVar3);
    plVar16 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      plVar16 = (long *)plVar5[1];
      _objc_retain(plVar13);
      if (plVar13 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar13;
        _objc_retainAutorelease(plVar13);
        func_0x00010bdc3520();
      }
      _objc_release(plVar13);
      pcVar2 = (char *)alStack_4f8;
      func_0x00010002b838(alStack_4f8,pcVar4);
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(plVar3);
        pcVar4 = (char *)plVar3;
        func_0x00010bdc3520(plVar3);
      }
      _objc_release(plVar3);
      func_0x00010002b838(auStack_4e0,pcVar4);
      alStack_518[0] = 0;
      alStack_518[1] = 0;
      alStack_518[2] = 0;
      func_0x00010007e1e8(alStack_518,alStack_4f8,&lStack_4c8,2);
      plVar7 = (long *)&UNK_11087acc8;
      unaff_x23 = (char *)alStack_518;
      plVar6 = alStack_518;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_500 = (long *)unaff_x23;
      func_0x00010007e5dc(&plStack_500);
      lVar1 = 0;
      plVar16 = alStack_4f8;
      plVar9 = plVar8;
      do {
        if ((&cStack_4c9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    _objc_release(plVar3);
    plVar11 = plVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar3);
    if (cStack_4e1 < '\0') {
      __ZdlPv(alStack_4f8[0]);
    }
    _objc_release(plVar3);
    _objc_release(plVar13);
    plVar14 = plVar11;
    __Unwind_Resume();
    plVar8 = alStack_5a0;
    pcStack_528 = FUN_10532d3b0;
    lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = plVar7;
    plVar5 = plVar6;
    plStack_560 = (long *)pcVar2;
    plStack_558 = (long *)unaff_x23;
    plStack_550 = plVar16;
    plStack_548 = plVar11;
    plStack_540 = plVar3;
    plStack_538 = plVar13;
    pppuStack_530 = &pppuStack_490;
    _objc_retain(plVar7);
    plVar11 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      plVar11 = (long *)plVar14[1];
      _objc_retain(plVar7);
      if (plVar7 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar7;
        _objc_retainAutorelease(plVar7);
        func_0x00010bdc3520();
      }
      _objc_release(plVar7);
      unaff_x23 = (char *)alStack_580;
      func_0x00010002b838(alStack_580,pcVar4);
      alStack_5a0[0] = 0;
      alStack_5a0[1] = 0;
      alStack_5a0[2] = 0;
      func_0x00010007e1e8(alStack_5a0,alStack_580,&lStack_568,1);
      plVar10 = (long *)&UNK_11087ad18;
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puStack_588 = (undefined1 *)alStack_5a0;
      func_0x00010007e5dc(&puStack_588);
      plVar5 = plVar8;
      plVar9 = plVar6;
      plVar16 = alStack_5a0;
      if (cStack_569 < '\0') {
        __ZdlPv(alStack_580[0]);
        plVar5 = plVar8;
        plVar9 = plVar6;
        plVar16 = alStack_5a0;
      }
    }
    plVar14 = plVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar7);
    _objc_release(plVar7);
    plVar13 = plVar14;
    __Unwind_Resume();
    pcStack_5a8 = FUN_10532d524;
    lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar6 = plVar10;
    pcVar4 = (char *)plVar5;
    plVar3 = plVar9;
    plStack_5e0 = (long *)pcVar2;
    plStack_5d8 = (long *)unaff_x23;
    plStack_5d0 = plVar16;
    plStack_5c8 = plVar11;
    plStack_5c0 = plVar14;
    plStack_5b8 = plVar7;
    pppuStack_5b0 = &pppuStack_530;
    _objc_retain(plVar10);
    if (plVar13 != (long *)0x0) {
      plVar16 = (long *)plVar13[1];
      _objc_retain(plVar10);
      if (plVar10 == (long *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = (char *)plVar10;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(plVar10);
      func_0x00010002b838(auStack_618,unaff_x23);
      pcVar2 = "true";
      if ((int)plVar5 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_600,pcVar2);
      alStack_638[0] = 0;
      alStack_638[1] = 0;
      alStack_638[2] = 0;
      func_0x00010007e1e8(alStack_638,auStack_618,&lStack_5e8,2);
      plVar6 = (long *)&UNK_11087ad68;
      pcVar4 = (char *)alStack_638;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      plStack_620 = alStack_638;
      func_0x00010007e5dc(&plStack_620);
      lVar1 = 0;
      plVar3 = plVar9;
      do {
        if ((&cStack_5e9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_600 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x30);
    }
    plVar16 = plVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar10);
    _objc_release(plVar10);
    __Unwind_Resume();
    plVar7 = alStack_700;
    pcStack_648 = FUN_10532d70c;
    lStack_698 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = plVar6;
    plVar10 = (long *)pcVar4;
    plVar14 = plVar3;
    pppuStack_650 = &pppuStack_5b0;
    _objc_retain(plVar6);
    _objc_retain(plVar3);
    if (plVar16 != (long *)0x0) {
      plVar16 = (long *)plVar16[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      func_0x00010002b838(alStack_6e0,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar4 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_6c8,pcVar2);
      _objc_retain(plVar3);
      if (plVar3 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(plVar3);
        pcVar4 = (char *)plVar3;
        func_0x00010bdc3520();
      }
      _objc_release(plVar3);
      func_0x00010002b838(auStack_6b0,pcVar4);
      alStack_700[0] = 0;
      alStack_700[1] = 0;
      alStack_700[2] = 0;
      func_0x00010007e1e8(alStack_700,alStack_6e0,&lStack_698,3);
      plVar11 = (long *)&UNK_11087adb8;
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11087adb8,alStack_700,plVar12);
      puStack_6e8 = (undefined1 *)alStack_700;
      func_0x00010007e5dc(&puStack_6e8);
      lVar1 = 0;
      plVar10 = plVar7;
      plVar14 = plVar12;
      do {
        if ((&cStack_699)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_6b0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x23 = (char *)alStack_700;
      } while (lVar1 != -0x48);
    }
    _objc_release(plVar3);
    plVar16 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_698) {
      ___stack_chk_fail();
      _objc_release(plVar3);
      do {
        unaff_x23 = (char *)((long)unaff_x23 + -0x18);
      } while ((long *)unaff_x23 != alStack_6e0);
      _objc_release(plVar3);
      _objc_release(plVar6);
      plVar12 = plVar16;
      __Unwind_Resume();
      plVar5 = alStack_780;
      pcStack_708 = FUN_10532d984;
      lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar7 = plVar11;
      plVar13 = plVar10;
      plStack_740 = (long *)pcVar4;
      plStack_738 = (long *)unaff_x23;
      plStack_730 = alStack_6e0;
      plStack_728 = plVar16;
      plStack_720 = plVar3;
      plStack_718 = plVar6;
      pppuStack_710 = &pppuStack_650;
      _objc_retain(plVar11);
      plVar16 = alStack_6e0;
      if (plVar12 != (long *)0x0) {
        plVar6 = (long *)plVar12[1];
        plVar7 = (long *)&UNK_11087b298;
        (**(code **)(*plVar6 + 0x28))();
        if ((int)plVar6 != 0) {
          plVar12 = (long *)plVar12[1];
          _objc_retain(plVar11);
          if (plVar11 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar11;
            _objc_retainAutorelease(plVar11);
            func_0x00010bdc3520();
          }
          _objc_release(plVar11);
          unaff_x23 = (char *)alStack_760;
          func_0x00010002b838(alStack_760,pcVar2);
          alStack_780[0] = 0;
          alStack_780[1] = 0;
          alStack_780[2] = 0;
          func_0x00010007e1e8(alStack_780,alStack_760,&lStack_748,1);
          plVar14 = (long *)((long)plVar10 * 10);
          plVar7 = (long *)&UNK_11087b298;
          (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11087b298,alStack_780,plVar14);
          puStack_768 = (undefined1 *)alStack_780;
          func_0x00010007e5dc(&puStack_768);
          plVar13 = plVar5;
          plVar16 = alStack_780;
          if (cStack_749 < '\0') {
            __ZdlPv(alStack_760[0]);
            plVar13 = plVar5;
            plVar16 = alStack_780;
          }
        }
      }
      plVar10 = plVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_748) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar11);
      _objc_release(plVar11);
      plVar3 = plVar10;
      __Unwind_Resume();
      plVar9 = alStack_800;
      pcStack_788 = FUN_10532db1c;
      lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar6 = plVar7;
      plVar5 = plVar13;
      plStack_7c0 = (long *)pcVar4;
      plStack_7b8 = (long *)unaff_x23;
      plStack_7b0 = plVar16;
      plStack_7a8 = plVar12;
      plStack_7a0 = plVar10;
      plStack_798 = plVar11;
      pppuStack_790 = &pppuStack_710;
      _objc_retain(plVar7);
      plVar11 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        plVar11 = (long *)plVar3[1];
        _objc_retain(plVar7);
        if (plVar7 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar7;
          _objc_retainAutorelease(plVar7);
          func_0x00010bdc3520();
        }
        _objc_release(plVar7);
        unaff_x23 = (char *)alStack_7e0;
        func_0x00010002b838(alStack_7e0,pcVar2);
        alStack_800[0] = 0;
        alStack_800[1] = 0;
        alStack_800[2] = 0;
        func_0x00010007e1e8(alStack_800,alStack_7e0,&lStack_7c8,1);
        plVar6 = (long *)&UNK_11087b2e8;
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11087b2e8,alStack_800,plVar13);
        puStack_7e8 = (undefined1 *)alStack_800;
        func_0x00010007e5dc(&puStack_7e8);
        plVar5 = plVar9;
        plVar14 = plVar13;
        plVar16 = alStack_800;
        if (cStack_7c9 < '\0') {
          __ZdlPv(alStack_7e0[0]);
          plVar5 = plVar9;
          plVar14 = plVar13;
          plVar16 = alStack_800;
        }
      }
      plVar10 = plVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar7);
      _objc_release(plVar7);
      plVar13 = plVar10;
      __Unwind_Resume();
      plVar9 = alStack_880;
      pcStack_808 = FUN_10532dc90;
      lStack_848 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar12 = plVar6;
      plVar3 = plVar5;
      plStack_840 = (long *)pcVar4;
      plStack_838 = (long *)unaff_x23;
      plStack_830 = plVar16;
      plStack_828 = plVar11;
      plStack_820 = plVar10;
      plStack_818 = plVar7;
      pppuStack_810 = &pppuStack_790;
      _objc_retain(plVar6);
      plVar11 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        plVar11 = (long *)plVar13[1];
        _objc_retain(plVar6);
        if (plVar6 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar6;
          _objc_retainAutorelease(plVar6);
          func_0x00010bdc3520();
        }
        _objc_release(plVar6);
        unaff_x23 = (char *)alStack_860;
        func_0x00010002b838(alStack_860,pcVar2);
        alStack_880[0] = 0;
        alStack_880[1] = 0;
        alStack_880[2] = 0;
        func_0x00010007e1e8(alStack_880,alStack_860,&lStack_848,1);
        plVar12 = (long *)&UNK_11087b338;
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11087b338,alStack_880,plVar5);
        puStack_868 = (undefined1 *)alStack_880;
        func_0x00010007e5dc(&puStack_868);
        plVar3 = plVar9;
        plVar14 = plVar5;
        plVar16 = alStack_880;
        if (cStack_849 < '\0') {
          __ZdlPv(alStack_860[0]);
          plVar3 = plVar9;
          plVar14 = plVar5;
          plVar16 = alStack_880;
        }
      }
      plVar10 = plVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_848) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar6);
      _objc_release(plVar6);
      plVar13 = plVar10;
      __Unwind_Resume();
      plVar9 = alStack_900;
      pcStack_888 = FUN_10532de04;
      lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar7 = plVar12;
      plVar5 = plVar3;
      plStack_8c0 = (long *)pcVar4;
      plStack_8b8 = (long *)unaff_x23;
      plStack_8b0 = plVar16;
      plStack_8a8 = plVar11;
      plStack_8a0 = plVar10;
      plStack_898 = plVar6;
      pppuStack_890 = &pppuStack_810;
      _objc_retain(plVar12);
      if (plVar13 != (long *)0x0) {
        plVar11 = (long *)plVar13[1];
        plVar7 = (long *)&UNK_11087b388;
        (**(code **)(*plVar11 + 0x28))();
        if ((int)plVar11 != 0) {
          plVar13 = (long *)plVar13[1];
          _objc_retain(plVar12);
          if (plVar12 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar12;
            _objc_retainAutorelease(plVar12);
            func_0x00010bdc3520();
          }
          _objc_release(plVar12);
          unaff_x23 = (char *)alStack_8e0;
          func_0x00010002b838(alStack_8e0,pcVar2);
          alStack_900[0] = 0;
          alStack_900[1] = 0;
          alStack_900[2] = 0;
          func_0x00010007e1e8(alStack_900,alStack_8e0,&lStack_8c8,1);
          plVar14 = (long *)((long)plVar3 * 10);
          plVar7 = (long *)&UNK_11087b388;
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b388,alStack_900,plVar14);
          puStack_8e8 = (undefined1 *)alStack_900;
          func_0x00010007e5dc(&puStack_8e8);
          plVar5 = plVar9;
          plVar16 = alStack_900;
          if (cStack_8c9 < '\0') {
            __ZdlPv(alStack_8e0[0]);
            plVar5 = plVar9;
            plVar16 = alStack_900;
          }
        }
      }
      plVar11 = plVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(plVar12);
      _objc_release(plVar12);
      plVar6 = plVar11;
      __Unwind_Resume();
      pcStack_908 = FUN_10532df9c;
      lStack_948 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar10 = plVar7;
      plStack_940 = (long *)pcVar4;
      plStack_938 = (long *)unaff_x23;
      plStack_930 = plVar16;
      plStack_928 = plVar13;
      plStack_920 = plVar11;
      plStack_918 = plVar12;
      pppuStack_910 = &pppuStack_890;
      _objc_retain(plVar7);
      _objc_retain(plVar5);
      if (plVar6 != (long *)0x0) {
        plVar16 = (long *)plVar6[1];
        _objc_retain(plVar7);
        if (plVar7 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = (char *)plVar7;
          _objc_retainAutorelease(plVar7);
          func_0x00010bdc3520();
        }
        _objc_release(plVar7);
        func_0x00010002b838(auStack_978,pcVar2);
        _objc_retain(plVar5);
        if (plVar5 == (long *)0x0) {
          pcVar2 = "";
        }
        else {
          _objc_retainAutorelease(plVar5);
          pcVar2 = (char *)plVar5;
          func_0x00010bdc3520(plVar5);
        }
        _objc_release(plVar5);
        func_0x00010002b838(auStack_960,pcVar2);
        uStack_998 = 0;
        uStack_990 = 0;
        uStack_988 = 0;
        func_0x00010007e1e8(&uStack_998,auStack_978,&lStack_948,2);
        plVar10 = (long *)&UNK_11087b428;
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_11087b428,&uStack_998,plVar14);
        puStack_980 = &uStack_998;
        func_0x00010007e5dc(&puStack_980);
        lVar1 = 0;
        do {
          if ((&cStack_949)[lVar1] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_960 + lVar1));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
      _objc_release(plVar5);
      plVar16 = plVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_948) {
        ___stack_chk_fail();
        _objc_release(plVar5);
        if (cStack_961 < '\0') {
          __ZdlPv(auStack_978[0]);
        }
        _objc_release(plVar5);
        _objc_release(plVar7);
        __Unwind_Resume();
        pcStack_9a8 = FUN_10532e1cc;
        if (plVar16 != (long *)0x0) {
          plVar11 = (long *)plVar16[1];
          plStack_9c0 = plVar5;
          plStack_9b8 = plVar7;
          pppuStack_9b0 = &pppuStack_910;
          (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_11087b478);
          if ((int)plVar11 != 0) {
            uStack_9e0 = 0;
            uStack_9d8 = 0;
            uStack_9d0 = 0;
            (**(code **)(*(long *)plVar16[1] + 0x18))
                      ((long *)plVar16[1],&UNK_11087b478,&uStack_9e0,(long)plVar10 * 10);
            puStack_9c8 = (undefined1 *)&uStack_9e0;
            func_0x00010007e5dc(&puStack_9c8);
          }
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105327740; end: 10532774f; -[SCConfigMetricGraphene2 cofShadowReadMismatch:isCurrentlySyncing:] */

/* WARNING: Removing unreachable block (ram,0x00010532c918) */
/* WARNING: Removing unreachable block (ram,0x00010532d954) */

void FUN_105327740(long param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  char *unaff_x23;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined1 *puStack_928;
  long *plStack_920;
  long *plStack_918;
  undefined8 ***pppuStack_910;
  code *pcStack_908;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 *puStack_8e0;
  undefined8 auStack_8d8 [2];
  char cStack_8c1;
  undefined8 auStack_8c0 [2];
  char cStack_8a9;
  long lStack_8a8;
  long *plStack_8a0;
  long *plStack_898;
  long *plStack_890;
  long *plStack_888;
  long *plStack_880;
  long *plStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  long alStack_860 [3];
  undefined1 *puStack_848;
  long alStack_840 [2];
  char cStack_829;
  long lStack_828;
  long *plStack_820;
  long *plStack_818;
  long *plStack_810;
  long *plStack_808;
  long *plStack_800;
  long *plStack_7f8;
  undefined8 ***pppuStack_7f0;
  code *pcStack_7e8;
  long alStack_7e0 [3];
  undefined1 *puStack_7c8;
  long alStack_7c0 [2];
  char cStack_7a9;
  long lStack_7a8;
  long *plStack_7a0;
  long *plStack_798;
  long *plStack_790;
  long *plStack_788;
  long *plStack_780;
  long *plStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  long alStack_760 [3];
  undefined1 *puStack_748;
  long alStack_740 [2];
  char cStack_729;
  long lStack_728;
  long *plStack_720;
  long *plStack_718;
  long *plStack_710;
  long *plStack_708;
  long *plStack_700;
  long *plStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  long alStack_6e0 [3];
  undefined1 *puStack_6c8;
  long alStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  long *plStack_6a0;
  long *plStack_698;
  long *plStack_690;
  long *plStack_688;
  long *plStack_680;
  long *plStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  long alStack_660 [3];
  undefined1 *puStack_648;
  long alStack_640 [3];
  undefined1 auStack_628 [24];
  undefined8 auStack_610 [2];
  char cStack_5f9;
  long lStack_5f8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  long alStack_598 [3];
  long *plStack_580;
  undefined1 auStack_578 [24];
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  long *plStack_540;
  long *plStack_538;
  long *plStack_530;
  long *plStack_528;
  long *plStack_520;
  long *plStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  long alStack_500 [3];
  undefined1 *puStack_4e8;
  long alStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  long alStack_478 [3];
  long *plStack_460;
  long alStack_458 [2];
  char cStack_441;
  undefined8 auStack_440 [2];
  char cStack_429;
  long lStack_428;
  long *plStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  long alStack_3d8 [3];
  long *plStack_3c0;
  long alStack_3b8 [2];
  char cStack_3a1;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  long alStack_338 [3];
  long *plStack_320;
  long alStack_318 [2];
  char cStack_301;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  long alStack_298 [3];
  long *plStack_280;
  long alStack_278 [3];
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  long alStack_1f8 [3];
  long *plStack_1e0;
  long alStack_1d8 [3];
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long alStack_160 [3];
  undefined1 *puStack_148;
  long alStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long alStack_98 [3];
  long *plStack_80;
  long alStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  plVar9 = (long *)0x1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_4;
  pcVar2 = (char *)param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar12 = *(long **)(lVar1 + 8);
    pcVar2 = "true";
    if ((int)param_4 == 0) {
      pcVar2 = "false";
    }
    unaff_x23 = (char *)alStack_78;
    func_0x00010002b838(alStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    alStack_98[2] = 0;
    func_0x00010007e1e8(alStack_98,alStack_78,&lStack_48,2);
    plVar13 = (long *)&UNK_11087a358;
    pcVar2 = (char *)alStack_98;
    plVar9 = (long *)0x1;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    plStack_80 = alStack_98;
    func_0x00010007e5dc(&plStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(alStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume();
  plVar15 = alStack_160;
  pcStack_a8 = FUN_10532c6b4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar13;
  plVar6 = (long *)pcVar2;
  plVar10 = plVar9;
  plVar14 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar13);
  _objc_retain(plVar9);
  if (plVar12 != (long *)0x0) {
    plVar3 = (long *)plVar12[1];
    plVar11 = (long *)&UNK_11087aa38;
    (**(code **)(*plVar3 + 0x28))();
    if ((int)plVar3 != 0) {
      plVar12 = (long *)plVar12[1];
      _objc_retain(plVar13);
      if (plVar13 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)plVar13;
        _objc_retainAutorelease(plVar13);
        func_0x00010bdc3520();
      }
      _objc_release(plVar13);
      func_0x00010002b838(alStack_140,pcVar4);
      pcVar4 = "true";
      if ((int)pcVar2 == 0) {
        pcVar4 = "false";
      }
      func_0x00010002b838(auStack_128,pcVar4);
      _objc_retain(plVar9);
      if (plVar9 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(plVar9);
        pcVar2 = (char *)plVar9;
        func_0x00010bdc3520();
      }
      _objc_release(plVar9);
      func_0x00010002b838(auStack_110,pcVar2);
      alStack_160[0] = 0;
      alStack_160[1] = 0;
      alStack_160[2] = 0;
      func_0x00010007e1e8(alStack_160,alStack_140,&lStack_f8,3);
      plVar10 = (long *)((long)param_5 * 1000);
      plVar11 = (long *)&UNK_11087aa38;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      puStack_148 = (undefined1 *)alStack_160;
      func_0x00010007e5dc(&puStack_148);
      lVar1 = 0;
      plVar6 = plVar15;
      do {
        if ((&cStack_f9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x23 = (char *)alStack_160;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(plVar9);
  plVar12 = plVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar9);
  plStack_190 = alStack_140;
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while ((long *)unaff_x23 != plStack_190);
  _objc_release(plVar9);
  _objc_release(plVar13);
  plVar5 = plVar12;
  __Unwind_Resume();
  pcStack_168 = FUN_10532c950;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar11;
  plVar3 = plVar6;
  plVar8 = plVar10;
  plStack_1a0 = (long *)pcVar2;
  plStack_198 = (long *)unaff_x23;
  plStack_188 = plVar12;
  plStack_180 = plVar9;
  plStack_178 = plVar13;
  ppuStack_170 = &puStack_b0;
  _objc_retain(plVar11);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar11;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    pcVar2 = (char *)alStack_1d8;
    func_0x00010002b838(alStack_1d8,unaff_x23);
    pcVar4 = "true";
    if ((int)plVar6 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(auStack_1c0,pcVar4);
    alStack_1f8[0] = 0;
    alStack_1f8[1] = 0;
    alStack_1f8[2] = 0;
    func_0x00010007e1e8(alStack_1f8,alStack_1d8,&lStack_1a8,2);
    plVar15 = (long *)&UNK_11087ab88;
    plVar6 = alStack_1f8;
    plVar3 = alStack_1f8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plStack_1e0 = plVar6;
    func_0x00010007e5dc(&plStack_1e0);
    lVar1 = 0;
    plVar13 = alStack_1d8;
    plVar8 = plVar10;
    do {
      if ((&cStack_1a9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar9 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  plVar5 = plVar9;
  __Unwind_Resume();
  pcStack_208 = FUN_10532cb38;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar15;
  plVar10 = plVar3;
  plVar7 = plVar8;
  plStack_240 = (long *)pcVar2;
  plStack_238 = (long *)unaff_x23;
  plStack_230 = plVar6;
  plStack_228 = plVar13;
  plStack_220 = plVar9;
  plStack_218 = plVar11;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(plVar15);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar15;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    pcVar2 = (char *)alStack_278;
    func_0x00010002b838(alStack_278,unaff_x23);
    pcVar4 = "true";
    if ((int)plVar3 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(auStack_260,pcVar4);
    alStack_298[0] = 0;
    alStack_298[1] = 0;
    alStack_298[2] = 0;
    func_0x00010007e1e8(alStack_298,alStack_278,&lStack_248,2);
    plVar12 = (long *)&UNK_11087abd8;
    plVar3 = alStack_298;
    plVar10 = alStack_298;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plStack_280 = plVar3;
    func_0x00010007e5dc(&plStack_280);
    lVar1 = 0;
    plVar13 = alStack_278;
    plVar7 = plVar8;
    do {
      if ((&cStack_249)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar9 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar15);
  _objc_release(plVar15);
  plVar5 = plVar9;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10532cd20;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar12;
  plVar6 = plVar10;
  plVar8 = plVar7;
  plStack_2e0 = (long *)pcVar2;
  plStack_2d8 = (long *)unaff_x23;
  plStack_2d0 = plVar3;
  plStack_2c8 = plVar13;
  plStack_2c0 = plVar9;
  plStack_2b8 = plVar15;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(plVar12);
  _objc_retain(plVar10);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    pcVar2 = (char *)alStack_318;
    func_0x00010002b838(alStack_318,pcVar4);
    _objc_retain(plVar10);
    if (plVar10 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(plVar10);
      pcVar4 = (char *)plVar10;
      func_0x00010bdc3520(plVar10);
    }
    _objc_release(plVar10);
    func_0x00010002b838(auStack_300,pcVar4);
    alStack_338[0] = 0;
    alStack_338[1] = 0;
    alStack_338[2] = 0;
    func_0x00010007e1e8(alStack_338,alStack_318,&lStack_2e8,2);
    plVar11 = (long *)&UNK_11087ac28;
    unaff_x23 = (char *)alStack_338;
    plVar6 = alStack_338;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plStack_320 = (long *)unaff_x23;
    func_0x00010007e5dc(&plStack_320);
    lVar1 = 0;
    plVar13 = alStack_318;
    plVar8 = plVar7;
    do {
      if ((&cStack_2e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_300 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar10);
  plVar9 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar10);
  if (cStack_301 < '\0') {
    __ZdlPv(alStack_318[0]);
  }
  _objc_release(plVar10);
  _objc_release(plVar12);
  plVar5 = plVar9;
  __Unwind_Resume();
  pcStack_348 = FUN_10532cf50;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = plVar11;
  plVar3 = plVar6;
  plVar7 = plVar8;
  plStack_380 = (long *)pcVar2;
  plStack_378 = (long *)unaff_x23;
  plStack_370 = plVar13;
  plStack_368 = plVar9;
  plStack_360 = plVar10;
  plStack_358 = plVar12;
  pppuStack_350 = &pppuStack_2b0;
  _objc_retain(plVar11);
  _objc_retain(plVar6);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)plVar11;
      _objc_retainAutorelease(plVar11);
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    pcVar2 = (char *)alStack_3b8;
    func_0x00010002b838(alStack_3b8,pcVar4);
    _objc_retain(plVar6);
    if (plVar6 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(plVar6);
      pcVar4 = (char *)plVar6;
      func_0x00010bdc3520(plVar6);
    }
    _objc_release(plVar6);
    func_0x00010002b838(auStack_3a0,pcVar4);
    alStack_3d8[0] = 0;
    alStack_3d8[1] = 0;
    alStack_3d8[2] = 0;
    func_0x00010007e1e8(alStack_3d8,alStack_3b8,&lStack_388,2);
    plVar15 = (long *)&UNK_11087ac78;
    unaff_x23 = (char *)alStack_3d8;
    plVar3 = alStack_3d8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plStack_3c0 = (long *)unaff_x23;
    func_0x00010007e5dc(&plStack_3c0);
    lVar1 = 0;
    plVar13 = alStack_3b8;
    plVar7 = plVar8;
    do {
      if ((&cStack_389)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar6);
  plVar9 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar6);
  if (cStack_3a1 < '\0') {
    __ZdlPv(alStack_3b8[0]);
  }
  _objc_release(plVar6);
  _objc_release(plVar11);
  plVar5 = plVar9;
  __Unwind_Resume();
  pcStack_3e8 = FUN_10532d180;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = plVar15;
  plVar10 = plVar3;
  plVar8 = plVar7;
  plStack_420 = (long *)pcVar2;
  plStack_418 = (long *)unaff_x23;
  plStack_410 = plVar13;
  plStack_408 = plVar9;
  plStack_400 = plVar6;
  plStack_3f8 = plVar11;
  pppuStack_3f0 = &pppuStack_350;
  _objc_retain(plVar15);
  _objc_retain(plVar3);
  plVar13 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar13 = (long *)plVar5[1];
    _objc_retain(plVar15);
    if (plVar15 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)plVar15;
      _objc_retainAutorelease(plVar15);
      func_0x00010bdc3520();
    }
    _objc_release(plVar15);
    pcVar2 = (char *)alStack_458;
    func_0x00010002b838(alStack_458,pcVar4);
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(plVar3);
      pcVar4 = (char *)plVar3;
      func_0x00010bdc3520(plVar3);
    }
    _objc_release(plVar3);
    func_0x00010002b838(auStack_440,pcVar4);
    alStack_478[0] = 0;
    alStack_478[1] = 0;
    alStack_478[2] = 0;
    func_0x00010007e1e8(alStack_478,alStack_458,&lStack_428,2);
    plVar12 = (long *)&UNK_11087acc8;
    unaff_x23 = (char *)alStack_478;
    plVar10 = alStack_478;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plStack_460 = (long *)unaff_x23;
    func_0x00010007e5dc(&plStack_460);
    lVar1 = 0;
    plVar13 = alStack_458;
    plVar8 = plVar7;
    do {
      if ((&cStack_429)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_440 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(plVar3);
  plVar9 = plVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  if (cStack_441 < '\0') {
    __ZdlPv(alStack_458[0]);
  }
  _objc_release(plVar3);
  _objc_release(plVar15);
  plVar6 = plVar9;
  __Unwind_Resume();
  plVar7 = alStack_500;
  pcStack_488 = FUN_10532d3b0;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = plVar12;
  plVar5 = plVar10;
  plStack_4c0 = (long *)pcVar2;
  plStack_4b8 = (long *)unaff_x23;
  plStack_4b0 = plVar13;
  plStack_4a8 = plVar9;
  plStack_4a0 = plVar3;
  plStack_498 = plVar15;
  pppuStack_490 = &pppuStack_3f0;
  _objc_retain(plVar12);
  plVar9 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar9 = (long *)plVar6[1];
    _objc_retain(plVar12);
    if (plVar12 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)plVar12;
      _objc_retainAutorelease(plVar12);
      func_0x00010bdc3520();
    }
    _objc_release(plVar12);
    unaff_x23 = (char *)alStack_4e0;
    func_0x00010002b838(alStack_4e0,pcVar4);
    alStack_500[0] = 0;
    alStack_500[1] = 0;
    alStack_500[2] = 0;
    func_0x00010007e1e8(alStack_500,alStack_4e0,&lStack_4c8,1);
    plVar11 = (long *)&UNK_11087ad18;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_4e8 = (undefined1 *)alStack_500;
    func_0x00010007e5dc(&puStack_4e8);
    plVar5 = plVar7;
    plVar8 = plVar10;
    plVar13 = alStack_500;
    if (cStack_4c9 < '\0') {
      __ZdlPv(alStack_4e0[0]);
      plVar5 = plVar7;
      plVar8 = plVar10;
      plVar13 = alStack_500;
    }
  }
  plVar6 = plVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar12);
  _objc_release(plVar12);
  plVar15 = plVar6;
  __Unwind_Resume();
  pcStack_508 = FUN_10532d524;
  lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = plVar11;
  pcVar4 = (char *)plVar5;
  plVar3 = plVar8;
  plStack_540 = (long *)pcVar2;
  plStack_538 = (long *)unaff_x23;
  plStack_530 = plVar13;
  plStack_528 = plVar9;
  plStack_520 = plVar6;
  plStack_518 = plVar12;
  pppuStack_510 = &pppuStack_490;
  _objc_retain(plVar11);
  if (plVar15 != (long *)0x0) {
    plVar13 = (long *)plVar15[1];
    _objc_retain(plVar11);
    if (plVar11 == (long *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = (char *)plVar11;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(plVar11);
    func_0x00010002b838(auStack_578,unaff_x23);
    pcVar2 = "true";
    if ((int)plVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_560,pcVar2);
    alStack_598[0] = 0;
    alStack_598[1] = 0;
    alStack_598[2] = 0;
    func_0x00010007e1e8(alStack_598,auStack_578,&lStack_548,2);
    plVar10 = (long *)&UNK_11087ad68;
    pcVar4 = (char *)alStack_598;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plStack_580 = alStack_598;
    func_0x00010007e5dc(&plStack_580);
    lVar1 = 0;
    plVar3 = plVar8;
    do {
      if ((&cStack_549)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_560 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  plVar13 = plVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_548) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar11);
  _objc_release(plVar11);
  __Unwind_Resume();
  plVar6 = alStack_660;
  pcStack_5a8 = FUN_10532d70c;
  lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = plVar10;
  plVar12 = (long *)pcVar4;
  plVar11 = plVar3;
  pppuStack_5b0 = &pppuStack_510;
  _objc_retain(plVar10);
  _objc_retain(plVar3);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)plVar13[1];
    _objc_retain(plVar10);
    if (plVar10 == (long *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)plVar10;
      _objc_retainAutorelease(plVar10);
      func_0x00010bdc3520();
    }
    _objc_release(plVar10);
    func_0x00010002b838(alStack_640,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar4 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_628,pcVar2);
    _objc_retain(plVar3);
    if (plVar3 == (long *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(plVar3);
      pcVar4 = (char *)plVar3;
      func_0x00010bdc3520();
    }
    _objc_release(plVar3);
    func_0x00010002b838(auStack_610,pcVar4);
    alStack_660[0] = 0;
    alStack_660[1] = 0;
    alStack_660[2] = 0;
    func_0x00010007e1e8(alStack_660,alStack_640,&lStack_5f8,3);
    plVar9 = (long *)&UNK_11087adb8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087adb8,alStack_660,plVar14);
    puStack_648 = (undefined1 *)alStack_660;
    func_0x00010007e5dc(&puStack_648);
    lVar1 = 0;
    plVar12 = plVar6;
    plVar11 = plVar14;
    do {
      if ((&cStack_5f9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_610 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
      unaff_x23 = (char *)alStack_660;
    } while (lVar1 != -0x48);
  }
  _objc_release(plVar3);
  plVar13 = plVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar3);
  do {
    unaff_x23 = (char *)((long)unaff_x23 + -0x18);
  } while ((long *)unaff_x23 != alStack_640);
  _objc_release(plVar3);
  _objc_release(plVar10);
  plVar14 = plVar13;
  __Unwind_Resume();
  plVar5 = alStack_6e0;
  pcStack_668 = FUN_10532d984;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar9;
  plVar15 = plVar12;
  plStack_6a0 = (long *)pcVar4;
  plStack_698 = (long *)unaff_x23;
  plStack_690 = alStack_640;
  plStack_688 = plVar13;
  plStack_680 = plVar3;
  plStack_678 = plVar10;
  pppuStack_670 = &pppuStack_5b0;
  _objc_retain(plVar9);
  plVar13 = alStack_640;
  if (plVar14 != (long *)0x0) {
    plVar10 = (long *)plVar14[1];
    plVar6 = (long *)&UNK_11087b298;
    (**(code **)(*plVar10 + 0x28))();
    if ((int)plVar10 != 0) {
      plVar14 = (long *)plVar14[1];
      _objc_retain(plVar9);
      if (plVar9 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar9;
        _objc_retainAutorelease(plVar9);
        func_0x00010bdc3520();
      }
      _objc_release(plVar9);
      unaff_x23 = (char *)alStack_6c0;
      func_0x00010002b838(alStack_6c0,pcVar2);
      alStack_6e0[0] = 0;
      alStack_6e0[1] = 0;
      alStack_6e0[2] = 0;
      func_0x00010007e1e8(alStack_6e0,alStack_6c0,&lStack_6a8,1);
      plVar11 = (long *)((long)plVar12 * 10);
      plVar6 = (long *)&UNK_11087b298;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11087b298,alStack_6e0,plVar11);
      puStack_6c8 = (undefined1 *)alStack_6e0;
      func_0x00010007e5dc(&puStack_6c8);
      plVar15 = plVar5;
      plVar13 = alStack_6e0;
      if (cStack_6a9 < '\0') {
        __ZdlPv(alStack_6c0[0]);
        plVar15 = plVar5;
        plVar13 = alStack_6e0;
      }
    }
  }
  plVar12 = plVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
    ___stack_chk_fail();
    _objc_release(plVar9);
    _objc_release(plVar9);
    plVar3 = plVar12;
    __Unwind_Resume();
    plVar8 = alStack_760;
    pcStack_6e8 = FUN_10532db1c;
    lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = plVar6;
    plVar5 = plVar15;
    plStack_720 = (long *)pcVar4;
    plStack_718 = (long *)unaff_x23;
    plStack_710 = plVar13;
    plStack_708 = plVar14;
    plStack_700 = plVar12;
    plStack_6f8 = plVar9;
    pppuStack_6f0 = &pppuStack_670;
    _objc_retain(plVar6);
    plVar9 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar9 = (long *)plVar3[1];
      _objc_retain(plVar6);
      if (plVar6 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar6;
        _objc_retainAutorelease(plVar6);
        func_0x00010bdc3520();
      }
      _objc_release(plVar6);
      unaff_x23 = (char *)alStack_740;
      func_0x00010002b838(alStack_740,pcVar2);
      alStack_760[0] = 0;
      alStack_760[1] = 0;
      alStack_760[2] = 0;
      func_0x00010007e1e8(alStack_760,alStack_740,&lStack_728,1);
      plVar10 = (long *)&UNK_11087b2e8;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087b2e8,alStack_760,plVar15);
      puStack_748 = (undefined1 *)alStack_760;
      func_0x00010007e5dc(&puStack_748);
      plVar5 = plVar8;
      plVar11 = plVar15;
      plVar13 = alStack_760;
      if (cStack_729 < '\0') {
        __ZdlPv(alStack_740[0]);
        plVar5 = plVar8;
        plVar11 = plVar15;
        plVar13 = alStack_760;
      }
    }
    plVar12 = plVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_728) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(plVar6);
    _objc_release(plVar6);
    plVar15 = plVar12;
    __Unwind_Resume();
    plVar8 = alStack_7e0;
    pcStack_768 = FUN_10532dc90;
    lStack_7a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar14 = plVar10;
    plVar3 = plVar5;
    plStack_7a0 = (long *)pcVar4;
    plStack_798 = (long *)unaff_x23;
    plStack_790 = plVar13;
    plStack_788 = plVar9;
    plStack_780 = plVar12;
    plStack_778 = plVar6;
    pppuStack_770 = &pppuStack_6f0;
    _objc_retain(plVar10);
    plVar9 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      plVar9 = (long *)plVar15[1];
      _objc_retain(plVar10);
      if (plVar10 == (long *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = (char *)plVar10;
        _objc_retainAutorelease(plVar10);
        func_0x00010bdc3520();
      }
      _objc_release(plVar10);
      unaff_x23 = (char *)alStack_7c0;
      func_0x00010002b838(alStack_7c0,pcVar2);
      alStack_7e0[0] = 0;
      alStack_7e0[1] = 0;
      alStack_7e0[2] = 0;
      func_0x00010007e1e8(alStack_7e0,alStack_7c0,&lStack_7a8,1);
      plVar14 = (long *)&UNK_11087b338;
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11087b338,alStack_7e0,plVar5);
      puStack_7c8 = (undefined1 *)alStack_7e0;
      func_0x00010007e5dc(&puStack_7c8);
      plVar3 = plVar8;
      plVar11 = plVar5;
      plVar13 = alStack_7e0;
      if (cStack_7a9 < '\0') {
        __ZdlPv(alStack_7c0[0]);
        plVar3 = plVar8;
        plVar11 = plVar5;
        plVar13 = alStack_7e0;
      }
    }
    plVar12 = plVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7a8) {
      ___stack_chk_fail();
      _objc_release(plVar10);
      _objc_release(plVar10);
      plVar15 = plVar12;
      __Unwind_Resume();
      plVar8 = alStack_860;
      pcStack_7e8 = FUN_10532de04;
      lStack_828 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar6 = plVar14;
      plVar5 = plVar3;
      plStack_820 = (long *)pcVar4;
      plStack_818 = (long *)unaff_x23;
      plStack_810 = plVar13;
      plStack_808 = plVar9;
      plStack_800 = plVar12;
      plStack_7f8 = plVar10;
      pppuStack_7f0 = &pppuStack_770;
      _objc_retain(plVar14);
      if (plVar15 != (long *)0x0) {
        plVar9 = (long *)plVar15[1];
        plVar6 = (long *)&UNK_11087b388;
        (**(code **)(*plVar9 + 0x28))();
        if ((int)plVar9 != 0) {
          plVar15 = (long *)plVar15[1];
          _objc_retain(plVar14);
          if (plVar14 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar14;
            _objc_retainAutorelease(plVar14);
            func_0x00010bdc3520();
          }
          _objc_release(plVar14);
          unaff_x23 = (char *)alStack_840;
          func_0x00010002b838(alStack_840,pcVar2);
          alStack_860[0] = 0;
          alStack_860[1] = 0;
          alStack_860[2] = 0;
          func_0x00010007e1e8(alStack_860,alStack_840,&lStack_828,1);
          plVar11 = (long *)((long)plVar3 * 10);
          plVar6 = (long *)&UNK_11087b388;
          (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11087b388,alStack_860,plVar11);
          puStack_848 = (undefined1 *)alStack_860;
          func_0x00010007e5dc(&puStack_848);
          plVar5 = plVar8;
          plVar13 = alStack_860;
          if (cStack_829 < '\0') {
            __ZdlPv(alStack_840[0]);
            plVar5 = plVar8;
            plVar13 = alStack_860;
          }
        }
      }
      plVar9 = plVar14;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_828) {
        ___stack_chk_fail();
        _objc_release(plVar14);
        _objc_release(plVar14);
        plVar10 = plVar9;
        __Unwind_Resume();
        pcStack_868 = FUN_10532df9c;
        lStack_8a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar12 = plVar6;
        plStack_8a0 = (long *)pcVar4;
        plStack_898 = (long *)unaff_x23;
        plStack_890 = plVar13;
        plStack_888 = plVar15;
        plStack_880 = plVar9;
        plStack_878 = plVar14;
        pppuStack_870 = &pppuStack_7f0;
        _objc_retain(plVar6);
        _objc_retain(plVar5);
        if (plVar10 != (long *)0x0) {
          plVar13 = (long *)plVar10[1];
          _objc_retain(plVar6);
          if (plVar6 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            pcVar2 = (char *)plVar6;
            _objc_retainAutorelease(plVar6);
            func_0x00010bdc3520();
          }
          _objc_release(plVar6);
          func_0x00010002b838(auStack_8d8,pcVar2);
          _objc_retain(plVar5);
          if (plVar5 == (long *)0x0) {
            pcVar2 = "";
          }
          else {
            _objc_retainAutorelease(plVar5);
            pcVar2 = (char *)plVar5;
            func_0x00010bdc3520(plVar5);
          }
          _objc_release(plVar5);
          func_0x00010002b838(auStack_8c0,pcVar2);
          uStack_8f8 = 0;
          uStack_8f0 = 0;
          uStack_8e8 = 0;
          func_0x00010007e1e8(&uStack_8f8,auStack_8d8,&lStack_8a8,2);
          plVar12 = (long *)&UNK_11087b428;
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11087b428,&uStack_8f8,plVar11);
          puStack_8e0 = &uStack_8f8;
          func_0x00010007e5dc(&puStack_8e0);
          lVar1 = 0;
          do {
            if ((&cStack_8a9)[lVar1] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_8c0 + lVar1));
            }
            lVar1 = lVar1 + -0x18;
          } while (lVar1 != -0x30);
        }
        _objc_release(plVar5);
        plVar13 = plVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_8a8) {
          ___stack_chk_fail();
          _objc_release(plVar5);
          if (cStack_8c1 < '\0') {
            __ZdlPv(auStack_8d8[0]);
          }
          _objc_release(plVar5);
          _objc_release(plVar6);
          __Unwind_Resume();
          pcStack_908 = FUN_10532e1cc;
          if (plVar13 != (long *)0x0) {
            plVar9 = (long *)plVar13[1];
            plStack_920 = plVar5;
            plStack_918 = plVar6;
            pppuStack_910 = &pppuStack_870;
            (**(code **)(*plVar9 + 0x28))(plVar9,&UNK_11087b478);
            if ((int)plVar9 != 0) {
              uStack_940 = 0;
              uStack_938 = 0;
              uStack_930 = 0;
              (**(code **)(*(long *)plVar13[1] + 0x18))
                        ((long *)plVar13[1],&UNK_11087b478,&uStack_940,(long)plVar12 * 10);
              puStack_928 = (undefined1 *)&uStack_940;
              func_0x00010007e5dc(&puStack_928);
            }
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105327750; end: 1053277af; -[SCConfigMetricGraphene2 .cxx_destruct] */

void FUN_105327750(long param_1)

{
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



/* Entry: 1053277b0; end: 105327833; -[SCConfigMetricLoggerImpl logRecoveryWait:timedOut:durationMs:] */

void FUN_1053277b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd24d8;
  if (param_4 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd24f8;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  _objc_retain(ppuVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f600(param_1);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105327834; end: 105327a03; -[SCConfigMetricLoggerImpl logRecoveryFinished:recoveryOutcome:durationMs:] */

void FUN_105327834(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd24d8;
  if (param_4 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd24f8;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  _objc_retain(ppuVar1);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3f5e0(param_1);
  _objc_release(ppuVar1);
  _objc_release(uVar2);
  if (param_4 != 1) {
    return;
  }
  if (param_5 < 3) {
    if (param_5 == 1) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_5 != 2) {
        return;
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_5 == 3) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_5 == 4) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_5 != 5) {
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf3f460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


