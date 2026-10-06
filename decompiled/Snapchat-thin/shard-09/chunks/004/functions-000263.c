/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cc1058; end: 106cc1063; -[SCJobSchedulerJobInfoDataSource .cxx_destruct] */

void FUN_106cc1058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc1064; end: 106cc126f;  */

void FUN_106cc1064(double param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  double dVar7;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 uStack_70;
  double dStack_68;
  double dStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  puVar3 = auStack_90;
  puVar6 = auStack_90;
  _objc_retain();
  _objc_retain(param_3);
  FUN_106cc2d10(auStack_90,0);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar1 = puStack_88;
  auStack_90[0] = 0;
  puStack_88 = puVar3;
  _objc_release(puVar1);
  _objc_release(puVar3);
  lVar4 = param_2;
  func_0x00010c085940();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar5 = lStack_80;
  auStack_90[0] = 0;
  lStack_80 = lVar4;
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar5 = param_2;
  func_0x00010c085840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar4 != 0) {
    lVar4 = param_2;
    func_0x00010c085840();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar5 = lStack_78;
    auStack_90[0] = 0;
    lStack_78 = lVar4;
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  auStack_90[0] = 0;
  uStack_70 = 0;
  _CFAbsoluteTimeGetCurrent();
  auStack_90[0] = 0;
  dVar7 = param_1;
  dStack_68 = param_1;
  FUN_106cbf6a4(param_2);
  dStack_60 = param_1 + dVar7;
  auStack_90[0] = 0;
  lVar4 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar5 = lStack_58;
  auStack_90[0] = 0;
  lStack_58 = lVar4;
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_retain(param_3);
  uVar2 = uStack_50;
  auStack_90[0] = 0;
  uStack_50 = param_3;
  _objc_release(uVar2);
  FUN_106cc2e50(auStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(lStack_58);
  _objc_release(lStack_78);
  _objc_release(lStack_80);
  _objc_release(puStack_88);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106cc1270; end: 106cc12b7;  */

long FUN_106cc1270(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 106cc12b8; end: 106cc1353;  */

void FUN_106cc12b8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = auStack_80;
  FUN_106cc2d10(auStack_80,param_2);
  auStack_80[0] = 0;
  uStack_50 = param_1;
  uStack_38 = param_3;
  FUN_106cc2e50(auStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cc1354; end: 106cc148f;  */

void FUN_106cc1354(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  double dVar4;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_68;
  double dStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar3 = auStack_90;
  dVar4 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_106cc2d10(auStack_90,param_2);
  auStack_90[0] = 0;
  dStack_68 = param_1;
  FUN_106cbf6a4(param_3);
  dStack_60 = param_1 + dVar4;
  auStack_90[0] = 0;
  uVar2 = param_3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar1 = uStack_58;
  auStack_90[0] = 0;
  uStack_58 = uVar2;
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_retain(param_4);
  uVar1 = uStack_50;
  auStack_90[0] = 0;
  uStack_50 = param_4;
  _objc_release(uVar1);
  FUN_106cc2e50(auStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106cc1490; end: 106cc14bb; +[SCGrapheneJobSchedulerMetric jobEnqueued] */

void FUN_106cc1490(void)

{
  _objc_alloc(PTR_PTR_1126d20a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc14bc; end: 106cc14e7; +[SCGrapheneJobSchedulerMetric jobScheduled] */

void FUN_106cc14bc(void)

{
  _objc_alloc(PTR_PTR_1126d20a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc14e8; end: 106cc1513; +[SCGrapheneJobSchedulerMetric jobExecuted] */

void FUN_106cc14e8(void)

{
  _objc_alloc(PTR_PTR_1126d20a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc1514; end: 106cc153f; +[SCGrapheneJobSchedulerMetric jobStatus] */

void FUN_106cc1514(void)

{
  _objc_alloc(PTR_PTR_1126d20a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc1540; end: 106cc156b; +[SCGrapheneJobSchedulerMetric jobBackgroundTask] */

void FUN_106cc1540(void)

{
  _objc_alloc(PTR_PTR_1126d20a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc156c; end: 106cc1597; +[SCGrapheneJobSchedulerMetric jobBackgroundWakeupFinished] */

void FUN_106cc156c(void)

{
  _objc_alloc(PTR_PTR_1126d20a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc1598; end: 106cc15c3; +[SCGrapheneJobSchedulerMetric jobBackgroundTaskExpired] */

void FUN_106cc1598(void)

{
  _objc_alloc(PTR_PTR_1126d20a8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc15c4; end: 106cc1663; -[SCGrapheneJobSchedulerMetric description] */

void FUN_106cc15c4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e82538;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e82538,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f6298;
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



/* Entry: 106cc1664; end: 106cc1743; -[SCComposerModuleJobProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cc1664(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c7530;
  _objc_alloc(PTR_PTR_1126c7530);
  func_0x00010c011000();
  func_0x00010c181180();
  puVar2 = PTR_PTR_1126c7540;
  _objc_alloc(PTR_PTR_1126c7540);
  func_0x00010c0207e0();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_11275bf90;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010bf44bc0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1502c0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cc1744; end: 106cc177b; -[SCComposerModuleJobProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cc1744(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275bf94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275bf90);
  return;
}



/* Entry: 106cc177c; end: 106cc177f;  */

void FUN_106cc177c(void)

{
  return;
}



/* Entry: 106cc1780; end: 106cc17f3; -[SCComposerJobSchedulerImpl cancelWithJobIdentifier:subIdentifier:] */

void FUN_106cc1780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2e5c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cc17f4; end: 106cc17ff; -[SCComposerJobSchedulerImpl pushToValdiMarshaller:] */

undefined8 FUN_106cc17f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b10;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 106cc1800; end: 106cc1813; -[SCComposerJobSchedulerImpl .cxx_destruct] */

void FUN_106cc1800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106cc1814; end: 106cc1863;  */

void FUN_106cc1814(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e82618;
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110e82618);
  uVar2 = param_1;
  func_0x00010c260c00(param_1,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106cc1864; end: 106cc190b; -[SCComposerModuleJobProcessorImpl initWithValdiRuntimeProvider:] */

undefined1 * FUN_106cc1864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f62a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc190c; end: 106cc1aef; -[SCComposerModuleJobProcessorImpl processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106cc190c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_6;
  _objc_retain();
  func_0x00010b89eb28();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c085940(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfecde0();
  _objc_release(lVar2);
  _objc_release();
  if (lVar3 == 0x7fffffffffffffff) {
    (**(code **)(param_6 + 0x10))(param_6,2,0);
  }
  else {
    func_0x00010b89eb28();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c085840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    if ((lVar1 != 0) && (lVar4 = lVar1, func_0x000106cc1808(), (int)lVar4 != 0)) {
      FUN_106cc1814();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(lVar3);
    func_0x00010bfc9d00(uVar5);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106cc1af0; end: 106cc1c5b;  */

void FUN_106cc1af0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d20c0;
  func_0x00010bfbc0e0(PTR_PTR_1126d20c0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  func_0x00010c0e3040(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106cc1c5c; end: 106cc1c8b; -[SCComposerModuleJobProcessorImpl .cxx_destruct] */

void FUN_106cc1c5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc1c8c; end: 106cc1c97; +[SCCJobProcessorComposerJobProcessor modulePath] */

undefined ** FUN_106cc1c8c(void)

{
  return &PTR____CFConstantStringClassReference_110e82658;
}



/* Entry: 106cc1c98; end: 106cc1c9f; +[SCCJobProcessorComposerJobProcessor asyncStrictMode] */

undefined8 FUN_106cc1c98(void)

{
  return 0;
}



/* Entry: 106cc1ca0; end: 106cc1d37; -[SCCJobProcessorComposerJobProcessor composerJobProcessorWithJobProcessorId:subIdentifier:payload:] */

void FUN_106cc1ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x000106cc1f1c();
  func_0x000106cc1f0c();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x000106cc1f14();
  func_0x000106cc1f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106cc1d38; end: 106cc1e57; +[SCCJobProcessorComposerJobProcessor invokeWithJSRuntimeProvider:jobProcessorId:subIdentifier:payload:completionHandler:] */

void FUN_106cc1d38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x000106cc1f1c();
  func_0x000106cc1f0c();
  _objc_retain(param_7);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106cc1e58;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_7;
  _objc_retain(param_7);
  func_0x000106cc1f0c();
  func_0x000106cc1f1c();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  func_0x000106cc1f04();
  func_0x000106cc1f14();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cc1e58; end: 106cc1edf;  */

void FUN_106cc1e58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d20c0;
  func_0x00010bfbc0e0(PTR_PTR_1126d20c0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar2);
  func_0x000106cc1f04();
  func_0x000106cc1f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cc1ee0; end: 106cc1f23; +[SCCJobProcessorComposerJobProcessor valdiMarshallableObjectDescriptor] */

void FUN_106cc1ee0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11096f9e0;
  param_1[1] = &PTR_DAT_11096fa10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106cc1f24; end: 106cc1f2b; -[SCCJobProcessorComposerCompletionResult__Enum init] */

void FUN_106cc1f24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 106cc1f2c; end: 106cc1f9f; -[SCBasicDataSyncerJobProcessor initWithDataSyncer:] */

undefined1 * FUN_106cc1f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f62b0;
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



/* Entry: 106cc1fa0; end: 106cc1ff3; -[SCBasicDataSyncerJobProcessor jobConfig] */

void FUN_106cc1fa0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_jobConfig_1125fef60);
  if ((uVar1 & 1) == 0) {
    FUN_106cc2650(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c085540();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc1ff4; end: 106cc2127; -[SCBasicDataSyncerJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106cc1ff4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_x5;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(in_x5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf647a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106cc20a4;
  puStack_48 = &UNK_11096f2f0;
  uStack_40 = uVar1;
  uStack_38 = in_x5;
  _objc_retain(in_x5);
  func_0x00010c0e6e20(uVar2,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(in_x5);
  _objc_release(uVar1);
  return 0;
}



/* Entry: 106cc2128; end: 106cc214f; -[SCBasicDataSyncerJobProcessor dataSyncer] */

void FUN_106cc2128(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cc2150; end: 106cc215b; -[SCBasicDataSyncerJobProcessor .cxx_destruct] */

void FUN_106cc2150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc215c; end: 106cc21f7; -[SCDataSyncerDeltaSyncJobProcessor initWithDataSyncer:deltaSyncServices:] */

undefined1 *
FUN_106cc215c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f62b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc21f8; end: 106cc2407; -[SCDataSyncerDeltaSyncJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106cc21f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_onPreSync_1126170f0);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0e5b60(*(undefined8 *)(param_1 + 8));
  }
  lVar2 = param_1;
  func_0x00010bdfab80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6d500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6d480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c266040(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_onSyncWithFuture__1126175c0);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0e6ea0(*(undefined8 *)(param_1 + 8));
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_6);
  _objc_retain(uVar3);
  func_0x00010c297260(lVar5);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106cc2408; end: 106cc249b;  */

void FUN_106cc2408(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  if (param_3 == 0) {
    func_0x00010be76980();
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = 0;
  }
  else {
    func_0x00010be76980();
    _objc_release(lVar2);
    lVar1 = *(long *)(param_1 + 0x28);
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar1,param_3 != 0,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cc249c; end: 106cc24f7; -[SCDataSyncerDeltaSyncJobProcessor _postSync:error:] */

void FUN_106cc249c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_onPostSync_error__1126170d8);
  if ((uVar1 & 1) != 0) {
    func_0x00010c0e5b00(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cc24f8; end: 106cc258f; -[SCDataSyncerDeltaSyncJobProcessor _deltaSyncService] */

void FUN_106cc24f8(long param_1)

{
  long lVar1;
  long unaff_x21;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf6d600();
  if (lVar1 == 2) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c248100();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 != 1) goto LAB_106cc257c;
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf6d580();
    _objc_retainAutoreleasedReturnValue();
  }
  unaff_x21 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
LAB_106cc257c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 106cc2590; end: 106cc2597; -[SCDataSyncerDeltaSyncJobProcessor canProcessDeltaSyncWithGroupKey:] */

undefined8 FUN_106cc2590(void)

{
  return 0;
}



/* Entry: 106cc2598; end: 106cc259f; -[SCDataSyncerDeltaSyncJobProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_106cc2598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onDeltaSync_isFullSync_updates_d_112616778);
  return;
}



/* Entry: 106cc25a0; end: 106cc25a7; -[SCDataSyncerDeltaSyncJobProcessor type] */

void FUN_106cc25a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_deltaSyncClientType_1125b8ec8);
  return;
}



/* Entry: 106cc25a8; end: 106cc25fb; -[SCDataSyncerDeltaSyncJobProcessor jobConfig] */

void FUN_106cc25a8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_jobConfig_1125fef60);
  if ((uVar1 & 1) == 0) {
    FUN_106cc2650(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c085540();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc25fc; end: 106cc2623; -[SCDataSyncerDeltaSyncJobProcessor dataSyncer] */

void FUN_106cc25fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cc2624; end: 106cc264f; -[SCDataSyncerDeltaSyncJobProcessor .cxx_destruct] */

void FUN_106cc2624(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc2650; end: 106cc2783;  */

void FUN_106cc2650(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c1b6740();
  puVar2 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1ed860(puVar1,param_2,puVar2);
  func_0x00010c1b6780(puVar1,param_2,0);
  uVar3 = param_1;
  func_0x00010bf647a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1b6840(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  func_0x00010c1b67e0(puVar1,param_2,puVar4);
  puVar5 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar6 = puVar5;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar6);
  func_0x00010c1b66e0(puVar1,param_2,puVar5);
  func_0x00010c198180(puVar1,param_2,2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cc2784; end: 106cc291f; -[SCJobSchedulerJobInfo initWithUuid:type:identifier:state:submittedTimestamp:scheduledTimestamp:config:input:attemptCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106cc2784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126f62c0;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfb0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfb0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfb4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfb4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfb8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfb8) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275bfbc) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfc0) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfc4) = param_2;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfc8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfc8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfcc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275bfcc) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11275bfd0) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc2920; end: 106cc2943; -[SCJobSchedulerJobInfo copyWithZone:] */

undefined8 FUN_106cc2920(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc2944; end: 106cc2a4f; -[SCJobSchedulerJobInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106cc2944(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275bfb0);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275bfb4);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275bfb8);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(uint *)(param_1 + _DAT_11275bfbc);
  uVar7 = ~*(ulong *)(param_1 + _DAT_11275bfc0) + *(ulong *)(param_1 + _DAT_11275bfc0) * 0x40000;
  uVar8 = ~*(ulong *)(param_1 + _DAT_11275bfc4) + *(ulong *)(param_1 + _DAT_11275bfc4) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275bfc8);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275bfcc);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + _DAT_11275bfd0);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_106cc2be8:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106cc2bf4;
    puVar9 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(int *)((long)puVar4 + (long)_DAT_11275bfbc) == *(int *)(param_3 + _DAT_11275bfbc) &&
        (*(int *)((long)puVar4 + (long)_DAT_11275bfd0) == *(int *)(param_3 + _DAT_11275bfd0))))) {
      dVar11 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275bfc0) -
                   *(double *)(param_3 + _DAT_11275bfc0));
      dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275bfc0) +
                   *(double *)(param_3 + _DAT_11275bfc0)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if (bVar1) {
        dVar11 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275bfc4) -
                     *(double *)(param_3 + _DAT_11275bfc4));
        dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_11275bfc4) +
                     *(double *)(param_3 + _DAT_11275bfc4)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar1 = dVar11 < dVar10;
        }
        if ((((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11275bfb0),
              lVar6 == *(long *)(param_3 + _DAT_11275bfb0) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11275bfb4),
             lVar6 == *(long *)(param_3 + _DAT_11275bfb4) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           (((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11275bfb8),
             lVar6 == *(long *)(param_3 + _DAT_11275bfb8) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11275bfc8),
             lVar6 == *(long *)(param_3 + _DAT_11275bfc8) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
          puVar9 = *(undefined1 **)((long)puVar4 + (long)_DAT_11275bfcc);
          if (puVar9 != *(undefined1 **)(param_3 + _DAT_11275bfcc)) {
            func_0x00010c071ae0();
            goto LAB_106cc2bf4;
          }
          goto LAB_106cc2be8;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_106cc2bf4:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 106cc2a50; end: 106cc2c0f; -[SCJobSchedulerJobInfo isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106cc2a50(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106cc2be8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc2bf4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(int *)(param_1 + (long)_DAT_11275bfbc) == *(int *)(param_3 + (long)_DAT_11275bfbc) &&
        (*(int *)(param_1 + (long)_DAT_11275bfd0) == *(int *)(param_3 + (long)_DAT_11275bfd0))))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11275bfc0);
      dVar6 = *(double *)(param_3 + (long)_DAT_11275bfc0);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_11275bfc4);
        dVar6 = *(double *)(param_3 + (long)_DAT_11275bfc4);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if ((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_11275bfb0),
              lVar4 == *(long *)(param_3 + (long)_DAT_11275bfb0) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11275bfb4),
             lVar4 == *(long *)(param_3 + (long)_DAT_11275bfb4) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           (((lVar4 = *(long *)(param_1 + (long)_DAT_11275bfb8),
             lVar4 == *(long *)(param_3 + (long)_DAT_11275bfb8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11275bfc8),
             lVar4 == *(long *)(param_3 + (long)_DAT_11275bfc8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_11275bfcc);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_11275bfcc)) {
            func_0x00010c071ae0();
            goto LAB_106cc2bf4;
          }
          goto LAB_106cc2be8;
        }
      }
    }
    lVar4 = 0;
  }
LAB_106cc2bf4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106cc2c10; end: 106cc2c1f; -[SCJobSchedulerJobInfo uuid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cc2c10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bfb0);
}



/* Entry: 106cc2c20; end: 106cc2c2f; -[SCJobSchedulerJobInfo type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cc2c20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bfb4);
}



/* Entry: 106cc2c30; end: 106cc2c3f; -[SCJobSchedulerJobInfo identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cc2c30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bfb8);
}



/* Entry: 106cc2c40; end: 106cc2c4f; -[SCJobSchedulerJobInfo state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106cc2c40(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275bfbc);
}



/* Entry: 106cc2c50; end: 106cc2c5f; -[SCJobSchedulerJobInfo submittedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cc2c50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bfc0);
}



/* Entry: 106cc2c60; end: 106cc2c6f; -[SCJobSchedulerJobInfo scheduledTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cc2c60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bfc4);
}



/* Entry: 106cc2c70; end: 106cc2c7f; -[SCJobSchedulerJobInfo config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cc2c70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bfc8);
}



/* Entry: 106cc2c80; end: 106cc2c8f; -[SCJobSchedulerJobInfo input] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106cc2c80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275bfcc);
}



/* Entry: 106cc2c90; end: 106cc2c9f; -[SCJobSchedulerJobInfo attemptCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106cc2c90(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11275bfd0);
}



/* Entry: 106cc2ca0; end: 106cc2d0f; -[SCJobSchedulerJobInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106cc2ca0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275bfcc,0);
  _objc_storeStrong(param_1 + _DAT_11275bfc8,0);
  _objc_storeStrong(param_1 + _DAT_11275bfb8,0);
  _objc_storeStrong(param_1 + _DAT_11275bfb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275bfb0,0);
  return;
}



/* Entry: 106cc2d10; end: 106cc2e4f;  */

long FUN_106cc2d10(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  *(bool *)param_2 = param_3 == 0;
  lVar1 = param_3;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 8) = lVar1;
  lVar1 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x10) = lVar1;
  lVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x18) = lVar1;
  lVar1 = param_3;
  func_0x00010c252440();
  *(int *)(param_2 + 0x20) = (int)lVar1;
  func_0x00010c25fa00(param_3);
  *(undefined8 *)(param_2 + 0x28) = param_1;
  func_0x00010c1503e0(param_3);
  *(undefined8 *)(param_2 + 0x30) = param_1;
  lVar1 = param_3;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x38) = lVar1;
  lVar1 = param_3;
  func_0x00010c065640();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 0x40) = lVar1;
  lVar1 = param_3;
  func_0x00010bf0d8c0();
  *(int *)(param_2 + 0x48) = (int)lVar1;
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106cc2e50; end: 106cc2eaf;  */

void FUN_106cc2e50(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    _objc_alloc(PTR_PTR_1126d20b0);
    func_0x00010c05f9e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc2eb0; end: 106cc2f13;  */

undefined ** FUN_106cc2eb0(void)

{
  int iVar1;
  
  if ((bRam000000011381e930 & 1) == 0) {
    iVar1 = 0x1381e930;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113184488,0x100000000);
      ___cxa_guard_release(0x11381e930);
    }
  }
  return &PTR_PTR_113184488;
}



/* Entry: 106cc2f14; end: 106cc2f9b;  */

void FUN_106cc2f14(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc2f9c; end: 106cc3027;  */

void FUN_106cc2f9c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c294d60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106cc3028; end: 106cc308b;  */

undefined ** FUN_106cc3028(void)

{
  int iVar1;
  
  if ((bRam000000011381e938 & 1) == 0) {
    iVar1 = 0x1381e938;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_1131844f8,0x100000000);
      ___cxa_guard_release(0x11381e938);
    }
  }
  return &PTR_PTR_1131844f8;
}



/* Entry: 106cc308c; end: 106cc3113;  */

void FUN_106cc308c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc3114; end: 106cc319f;  */

void FUN_106cc3114(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c27dd80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106cc31a0; end: 106cc3203;  */

undefined ** FUN_106cc31a0(void)

{
  int iVar1;
  
  if ((bRam000000011381e940 & 1) == 0) {
    iVar1 = 0x1381e940;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113184568,0x100000000);
      ___cxa_guard_release(0x11381e940);
    }
  }
  return &PTR_PTR_113184568;
}



/* Entry: 106cc3204; end: 106cc328b;  */

void FUN_106cc3204(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 9) || (puVar1[4] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc328c; end: 106cc3317;  */

void FUN_106cc328c(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106cc3318; end: 106cc3323; +[SCJobSchedulerJobInfo table] */

undefined * FUN_106cc3318(void)

{
  return &UNK_10f3cdc08;
}



/* Entry: 106cc3324; end: 106cc3683; +[SCJobSchedulerJobInfo immutableObjectParse:bufferSize:] */

void FUN_106cc3324(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ushort uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126d20b0;
  _objc_alloc(PTR_PTR_1126d20b0);
  lVar5 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar6 < 5) {
    puVar8 = (undefined *)0x0;
LAB_106cc3418:
    puVar9 = (undefined *)0x0;
LAB_106cc341c:
    puVar10 = (undefined *)0x0;
    uVar11 = 0;
LAB_106cc3428:
    uVar14 = 0;
    uVar15 = 0;
LAB_106cc342c:
    puVar12 = (undefined *)0x0;
LAB_106cc3430:
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar6 < 7) goto LAB_106cc3418;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
    if (uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 9) goto LAB_106cc341c;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8);
    if (uVar7 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    uVar14 = 0;
    if (uVar6 < 0xb) {
      uVar11 = 0;
      goto LAB_106cc3428;
    }
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 10);
    if (uVar7 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)((long)piVar1 + uVar7);
    }
    if (uVar6 < 0xd) goto LAB_106cc3428;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xc);
    uVar16 = 0;
    if (uVar7 != 0) {
      uVar14 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    uVar15 = 0;
    if (uVar6 < 0xf) goto LAB_106cc342c;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0xe);
    if (uVar7 != 0) {
      uVar16 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    uVar15 = uVar16;
    if (uVar6 < 0x11) goto LAB_106cc342c;
    if (*(short *)((long)piVar1 + lVar5 + 0x10) == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar5 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar6 < 0x13) goto LAB_106cc3430;
    if (*(short *)((long)piVar1 + lVar5 + 0x12) == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar5 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (0x14 < uVar6) {
      uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x14);
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = *(undefined4 *)((long)piVar1 + uVar7);
      }
      goto LAB_106cc3438;
    }
  }
  uVar4 = 0;
LAB_106cc3438:
  func_0x00010c05f9e0(uVar14,uVar15,puVar3,param_2,puVar8,puVar9,puVar10,uVar11,puVar12,puVar13,
                      uVar4);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106cc3684; end: 106cc3697; +[SCJobSchedulerJobInfo objectClassFunctionPointer] */

undefined1  [16] FUN_106cc3684(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_106cc3738;
  auVar1._0_8_ = FUN_106cc3698;
  return auVar1;
}



/* Entry: 106cc3698; end: 106cc3737;  */

void FUN_106cc3698(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf6389e8;
  _strcmp(&DAT_10f6389e8,param_1);
  if (iVar1 != 0) {
    iVar1 = 0xf21bcc0;
    _strcmp("identifier",param_1);
    if (iVar1 != 0) {
      iVar1 = 0xf6856fe;
      _strcmp(&DAT_10f6856fe,param_1);
      if (iVar1 != 0) {
        iVar1 = 0xf3cdc1e;
        _strcmp(&DAT_10f3cdc1e,param_1);
        if (iVar1 != 0) {
          _strcmp(&DAT_10f3cdc31,param_1);
        }
      }
    }
  }
  return;
}



/* Entry: 106cc3738; end: 106cc3957;  */

bool FUN_106cc3738(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (1 < param_1) {
    if (param_1 == 2) {
      func_0x0001001b9e08(param_2,&UNK_10f3cdce4);
      _sqlite3_bind_int64();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
         (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar6 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)((long)piVar1 + uVar6);
      }
      _sqlite3_bind_int64(param_2,2,uVar5);
      goto LAB_106cc3938;
    }
    if (param_1 == 3) {
      func_0x0001001b9e08(param_2,&UNK_10f3cdd30);
      _sqlite3_bind_int64();
      uVar7 = 0;
      if (0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar4 = ((ushort *)((long)piVar1 - (long)*piVar1))[6];
        goto joined_r0x000106cc389c;
      }
    }
    else {
      if (param_1 != 4) {
        return false;
      }
      func_0x0001001b9e08(param_2,&UNK_10f3cdd96);
      _sqlite3_bind_int64();
      uVar7 = 0;
      if (0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar4 = ((ushort *)((long)piVar1 - (long)*piVar1))[7];
joined_r0x000106cc389c:
        uVar7 = 0;
        if ((ulong)uVar4 != 0) {
          uVar7 = *(undefined8 *)((long)piVar1 + (ulong)uVar4);
        }
      }
    }
    _sqlite3_bind_double(uVar7,param_2,2);
    goto LAB_106cc3938;
  }
  if (param_1 == 0) {
    func_0x0001001b9e08(param_2,&UNK_10f3cdc44);
    _sqlite3_bind_int64();
    if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar4 = ((ushort *)((long)piVar1 - (long)*piVar1))[3];
      goto joined_r0x000106cc38f0;
    }
  }
  else {
    if (param_1 != 1) {
      return false;
    }
    func_0x0001001b9e08(param_2,&UNK_10f3cdc8e);
    _sqlite3_bind_int64();
    if (8 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
      uVar4 = ((ushort *)((long)piVar1 - (long)*piVar1))[4];
joined_r0x000106cc38f0:
      if ((ulong)uVar4 != 0) {
        puVar2 = (uint *)((long)piVar1 + (ulong)uVar4);
        puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
        _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
        goto LAB_106cc3938;
      }
    }
  }
  _sqlite3_bind_null(param_2,2);
LAB_106cc3938:
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 106cc3958; end: 106cc3aef;  */

undefined1 *
FUN_106cc3958(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puStack_78 = PTR_PTR_1126f62c8;
    lStack_80 = param_3;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x14) = param_8;
      *(undefined8 *)((long)plVar1 + 0x38) = param_1;
      *(undefined8 *)((long)plVar1 + 0x40) = param_2;
      _objc_retain(param_9);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = param_9;
      _objc_release(uVar2);
      _objc_retain(param_10);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x50);
      *(undefined8 *)((long)plVar1 + 0x50) = param_10;
      _objc_release(uVar2);
      *(undefined4 *)((long)plVar1 + 0x18) = param_11;
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar3;
}



/* Entry: 106cc3af0; end: 106cc3fc3;  */

void FUN_106cc3af0(undefined8 param_1,undefined *param_2)

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
  undefined8 uVar11;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar10,&UNK_10f3cddfc);
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c294d60(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar10,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar10;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar10;
            _sqlite3_column_int64(puVar10,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d20b0);
            _sqlite3_column_blob(puVar10,1);
            _sqlite3_column_bytes(puVar10,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_106cc3ec8;
            puVar10 = PTR_PTR_1126d20b8;
            _objc_alloc(PTR_PTR_1126d20b8);
            puVar2 = puVar3;
            func_0x00010c294d60(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c27dd80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bfe5ec0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c252440(puVar3);
            func_0x00010c25fa00(puVar3);
            uVar11 = param_1;
            func_0x00010c1503e0(puVar3);
            puVar7 = puVar3;
            func_0x00010bf45e20(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010c065640(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar3;
            func_0x00010bf0d8c0();
            FUN_106cc3958(param_1,uVar11,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,
                          (int)puVar9);
            goto LAB_106cc3c6c;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d20b0);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126d20b8;
        _objc_alloc(PTR_PTR_1126d20b8);
        puVar2 = puVar3;
        func_0x00010c294d60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c27dd80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bfe5ec0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c252440(puVar3);
        func_0x00010c25fa00(puVar3);
        uVar11 = param_1;
        func_0x00010c1503e0(puVar3);
        puVar7 = puVar3;
        func_0x00010bf45e20(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c065640(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010bf0d8c0();
        FUN_106cc3958(param_1,uVar11,puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,
                      (int)puVar9);
LAB_106cc3c6c:
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        param_2 = puVar3;
        goto LAB_106cc3ed0;
      }
LAB_106cc3ec8:
      param_2 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_106cc3ed0:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106cc3fc4; end: 106cc4037;  */

void FUN_106cc3fc4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106cc3af0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106cc4038; end: 106cc43f7;  */

void FUN_106cc4038(undefined8 param_1,undefined *param_2,undefined1 *param_3)

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
  undefined8 uVar10;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d20b8;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_106cc3af0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar9 = PTR_PTR_1126d20b8;
    _objc_retain(param_2);
    _objc_opt_self(puVar9);
    puVar9 = PTR_PTR_1126d20b8;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010c294d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010c27dd80(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010bfe5ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c252440(param_2);
      func_0x00010c25fa00(param_2);
      uVar10 = param_1;
      func_0x00010c1503e0(param_2);
      puVar6 = param_2;
      func_0x00010bf45e20(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c065640(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010bf0d8c0();
      FUN_106cc3958(param_1,uVar10,puVar9,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,
                    puVar7,(int)puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar9 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar9 = param_2;
    func_0x00010c294d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    puVar9 = param_2;
    func_0x00010c27dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    puVar9 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    puVar9 = param_2;
    func_0x00010c252440();
    *(int *)(puVar1 + 0x14) = (int)puVar9;
    func_0x00010c25fa00(param_2);
    *(undefined8 *)(puVar1 + 0x38) = param_1;
    func_0x00010c1503e0(param_2);
    *(undefined8 *)(puVar1 + 0x40) = param_1;
    puVar9 = param_2;
    func_0x00010bf45e20(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    puVar9 = param_2;
    func_0x00010c065640(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar9);
    puVar9 = param_2;
    func_0x00010bf0d8c0();
    *(int *)(puVar1 + 0x18) = (int)puVar9;
    _objc_retain(puVar1);
    puVar9 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106cc43f8; end: 106cc4473;  */

void FUN_106cc43f8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d20b0;
    _objc_alloc(PTR_PTR_1126d20b0);
    func_0x00010c05f9e0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106cc4474; end: 106cc44c7; -[SCJobSchedulerJobInfoChangeRequest .cxx_destruct] */

void FUN_106cc4474(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106cc44c8; end: 106cc44d3; -[SCJobSchedulerJobInfoChangeRequest table] */

undefined * FUN_106cc44c8(void)

{
  return &UNK_10f3cdc08;
}



/* Entry: 106cc44d4; end: 106cc4707; -[SCJobSchedulerJobInfoChangeRequest createTableWithSQLite:] */

void FUN_106cc44d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dded7da,0x7f,&uStack_28,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_28);
    _sqlite3_finalize(uStack_28);
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dded859,100,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10dded8bd,0x72,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10dded92f,0x70,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10dded99f,0x84,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddeda23,0x67,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10ddeda8a,0x75,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddedaff,0x7e,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    uVar1 = param_3;
    _sqlite3_prepare_v2(param_3,&UNK_10ddedb7d,0x9c,&uStack_38,0);
    if ((int)uVar1 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  uVar1 = param_3;
  _sqlite3_prepare_v2(param_3,&UNK_10ddedc19,0x7e,&uStack_30,0);
  if ((int)uVar1 == 0) {
    _sqlite3_step(uStack_30);
    _sqlite3_finalize(uStack_30);
    _sqlite3_prepare_v2(param_3,&UNK_10ddedc97,0x9c,&uStack_38,0);
    if ((int)param_3 == 0) {
      _sqlite3_step(uStack_38);
      _sqlite3_finalize(uStack_38);
    }
  }
  return;
}



/* Entry: 106cc4708; end: 106cc55bf; -[SCJobSchedulerJobInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106cc4708(double param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char ***pppcVar10;
  char ****ppppcVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  uint *puVar16;
  long lVar17;
  char ****ppppcVar18;
  uint uVar19;
  undefined8 uVar20;
  char ***pppcVar21;
  char ****ppppcVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  char **ppcStack_d0;
  char *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  char ***pppcStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_81;
  char ***apppcStack_80 [2];
  
  iVar3 = *(int *)(param_2 + 0x10);
  puVar6 = param_2;
  if (iVar3 == 1) {
    FUN_106cc43f8();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_5;
    FUN_106cc55c0(param_5);
    func_0x0001001ce6fc(param_5,lVar17,0,0);
    puVar16 = *(uint **)(param_5 + 0x30);
    uVar19 = *puVar16;
    puVar15 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar15;
    func_0x00010bf636c0();
    pcStack_c8 = "identifier";
    ppcStack_d0 = (char **)&DAT_10f6389e8;
    puStack_b8 = &DAT_10f3cdc1e;
    puStack_c0 = &DAT_10f6856fe;
    puStack_b0 = &DAT_10f3cdc31;
    uStack_84 = 0;
    uStack_88 = 0;
    if (puVar7 == (undefined *)0x0) {
      uVar14 = 0;
    }
    else {
      pppuStack_a0 = (undefined8 ****)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      pppcStack_a8 = (char ***)&UNK_10f3cdc08;
      apppcStack_80[0] = (char ***)&pppcStack_a8;
      puVar8 = puVar7 + 0x60;
      func_0x0001000e9dd8(puVar8,&pppcStack_a8,&UNK_10dd5b8f9,apppcStack_80,&uStack_81);
      lVar17 = 0;
      ppppcVar18 = (char ****)0xffffffffffffffff;
      ppppcVar22 = (char ****)&ppcStack_d0;
      do {
        puVar9 = puVar8 + 0x18;
        func_0x00010055a52c(puVar9,ppppcVar22);
        if (puVar9 == (undefined *)0x0) {
          if ((long)ppppcVar18 < 0) {
            func_0x000100042ef0(&pppuStack_a0,"SELECT MAX(rowid) FROM ");
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppuStack_a0,&UNK_10f3cdc08,0x15);
            iVar3 = (int)uStack_98;
            ppppuVar4 = (undefined8 ****)pppuStack_a0;
            if (-1 < uStack_90._7_1_) {
              iVar3 = (int)uStack_90._7_1_;
              ppppuVar4 = &pppuStack_a0;
            }
            _sqlite3_prepare_v2(*(undefined8 *)(puVar7 + 0x58),ppppuVar4,iVar3,apppcStack_80,0);
            ppppcVar18 = (char ****)apppcStack_80[0];
            _sqlite3_step();
            if ((int)ppppcVar18 == 100) {
              ppppcVar18 = (char ****)apppcStack_80[0];
              _sqlite3_column_int64(apppcStack_80[0],0);
            }
            else {
              ppppcVar18 = (char ****)0x0;
            }
            _sqlite3_finalize(apppcStack_80[0]);
          }
          if ((long)uStack_90 < 0) {
            *(undefined1 *)pppuStack_a0 = 0;
            uStack_98 = 0;
          }
          else {
            pppuStack_a0 = (undefined8 ***)((ulong)pppuStack_a0 & 0xffffffffffffff00);
            uStack_90 = uStack_90 & 0xffffffffffffff;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_a0,"SELECT MAX(rowid) FROM index_",0x1d);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_a0,&UNK_10f3cdc08,0x15);
          pppcVar21 = *ppppcVar22;
          pppcVar10 = pppcVar21;
          _strlen(pppcVar21);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppuStack_a0,pppcVar21,pppcVar10);
          uVar20 = *(undefined8 *)(puVar7 + 0x58);
          iVar3 = (int)uStack_98;
          ppppuVar4 = (undefined8 ****)pppuStack_a0;
          if (-1 < uStack_90._7_1_) {
            iVar3 = (int)uStack_90._7_1_;
            ppppuVar4 = &pppuStack_a0;
          }
          _sqlite3_prepare_v2(uVar20,ppppuVar4,iVar3,&pppcStack_a8,0);
          if ((int)uVar20 == 0) {
            if ((char ****)pppcStack_a8 != (char ****)0x0) {
              ppppcVar11 = (char ****)pppcStack_a8;
              _sqlite3_step();
              if ((int)ppppcVar11 == 100) {
                ppppcVar11 = (char ****)pppcStack_a8;
                _sqlite3_column_int64(pppcStack_a8,0);
                bVar5 = ppppcVar11 == ppppcVar18;
              }
              else {
                bVar5 = ppppcVar18 == (char ****)0x0;
              }
              *(bool *)((long)&uStack_88 + lVar17) = bVar5;
              _sqlite3_finalize(pppcStack_a8);
              puVar9 = puVar8 + 0x18;
              apppcStack_80[0] = (char ***)ppppcVar22;
              func_0x00010507ce00(puVar9,ppppcVar22,&UNK_10dd5b8f9,apppcStack_80,&uStack_81);
              uVar12 = 1;
              if (bVar5) {
                uVar12 = 2;
              }
              *(undefined4 *)(puVar9 + 0x18) = uVar12;
              goto LAB_106cc4d64;
            }
          }
          else {
            pppcStack_a8 = (char ***)0x0;
          }
          *(undefined1 *)((long)&uStack_88 + lVar17) = 0;
          puVar9 = puVar8 + 0x18;
          apppcStack_80[0] = (char ***)ppppcVar22;
          func_0x00010507ce00(puVar9,ppppcVar22,&UNK_10dd5b8f9,apppcStack_80,&uStack_81);
          *(undefined4 *)(puVar9 + 0x18) = 0;
        }
        else {
          *(bool *)((long)&uStack_88 + lVar17) = *(int *)(puVar9 + 0x18) == 2;
        }
LAB_106cc4d64:
        lVar17 = lVar17 + 1;
        ppppcVar22 = ppppcVar22 + 1;
      } while (lVar17 != 5);
      if ((long)uStack_90 < 0) {
        __ZdlPv(pppuStack_a0);
      }
      uVar14 = (ulong)CONCAT14(uStack_84,uStack_88);
    }
    _objc_release(puVar15);
    lVar17 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f3cdfb8);
    if (lVar17 != 0) {
      _sqlite3_bind_blob(lVar17,1,*(undefined8 *)(param_5 + 0x30),
                         (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                         *(int *)(param_5 + 0x28),0);
      piVar1 = (int *)((long)puVar16 + (ulong)uVar19);
      puVar16 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar16 + (ulong)*puVar16);
      _sqlite3_bind_text(lVar17,2,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar17 == 0x65) {
        uVar20 = *(undefined8 *)(param_4 + 0x58);
        _sqlite3_last_insert_rowid();
        uVar19 = (uint)uVar14;
        if ((uVar14 & 1) != 0) {
          lVar17 = param_4;
          func_0x0001001b9e08(param_4,&UNK_10f3cdc44);
          _sqlite3_bind_int64();
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar13 == 0)) {
            _sqlite3_bind_null(lVar17,2);
          }
          else {
            puVar16 = (uint *)((long)piVar1 + uVar13);
            puVar2 = (undefined4 *)((long)puVar16 + (ulong)*puVar16);
            _sqlite3_bind_text(lVar17,2,puVar2 + 1,*puVar2,0);
          }
          _sqlite3_step();
          if ((int)lVar17 != 0x65) goto LAB_106cc5480;
        }
        if ((uVar19 >> 8 & 1) != 0) {
          lVar17 = param_4;
          func_0x0001001b9e08(param_4,&UNK_10f3cdc8e);
          _sqlite3_bind_int64();
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
             (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar13 == 0)) {
            _sqlite3_bind_null(lVar17,2);
          }
          else {
            puVar16 = (uint *)((long)piVar1 + uVar13);
            puVar2 = (undefined4 *)((long)puVar16 + (ulong)*puVar16);
            _sqlite3_bind_text(lVar17,2,puVar2 + 1,*puVar2,0);
          }
          _sqlite3_step();
          if ((int)lVar17 != 0x65) goto LAB_106cc5480;
        }
        if ((uVar19 >> 0x10 & 1) != 0) {
          lVar17 = param_4;
          func_0x0001001b9e08(param_4,&UNK_10f3cdce4);
          _sqlite3_bind_int64();
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
             (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar13 == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined4 *)((long)piVar1 + uVar13);
          }
          _sqlite3_bind_int64(lVar17,2,uVar12);
          _sqlite3_step();
          if ((int)lVar17 != 0x65) goto LAB_106cc5480;
        }
        if ((uVar19 >> 0x18 & 1) != 0) {
          lVar17 = param_4;
          func_0x0001001b9e08(param_4,&UNK_10f3cdd30);
          _sqlite3_bind_int64();
          uVar25 = 0;
          if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
             (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar13 != 0)) {
            uVar25 = *(undefined8 *)((long)piVar1 + uVar13);
          }
          _sqlite3_bind_double(uVar25,lVar17,2);
          _sqlite3_step();
          if ((int)lVar17 != 0x65) goto LAB_106cc5480;
        }
        if ((uVar14 >> 0x20 & 1) != 0) {
          func_0x0001001b9e08(param_4,&UNK_10f3cdd96);
          _sqlite3_bind_int64();
          uVar25 = 0;
          if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
             (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar14 != 0)) {
            uVar25 = *(undefined8 *)((long)piVar1 + uVar14);
          }
          _sqlite3_bind_double(uVar25,param_4,2);
          _sqlite3_step();
          if ((int)param_4 != 0x65) goto LAB_106cc5480;
        }
        *(undefined8 *)(param_2 + 8) = uVar20;
        func_0x00010c1eeb60(puVar6);
        puVar15 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d20b0);
        func_0x00010c21c9a0(puVar15);
        _objc_release(puVar15);
        _objc_retain(puVar6);
        puVar15 = puVar6;
        goto LAB_106cc5488;
      }
    }
LAB_106cc5480:
    puVar15 = (undefined *)0x0;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        lVar17 = param_4;
        func_0x0001001b9e08(param_4,&UNK_10f3cde3d);
        if (lVar17 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)lVar17 == 0x65) {
            lVar17 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f3cde6e);
            if (lVar17 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar17 != 0x65) goto LAB_106cc490c;
            }
            lVar17 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f3cdea9);
            if (lVar17 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar17 != 0x65) goto LAB_106cc490c;
            }
            lVar17 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f3cdeea);
            if (lVar17 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar17 != 0x65) goto LAB_106cc490c;
            }
            lVar17 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f3cdf26);
            if (lVar17 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)lVar17 != 0x65) goto LAB_106cc490c;
            }
            func_0x0001001b9e08(param_4,&UNK_10f3cdf6f);
            if (param_4 != 0) {
              _sqlite3_bind_int64();
              _sqlite3_step();
              if ((int)param_4 != 0x65) goto LAB_106cc490c;
            }
            puVar6 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d20b0);
            func_0x00010c21c9a0(puVar6);
            _objc_release(puVar15);
            _objc_release(puVar6);
            puVar15 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106cc548c;
          }
        }
      }
LAB_106cc490c:
      puVar15 = (undefined *)0x0;
      goto LAB_106cc548c;
    }
    FUN_106cc43f8();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_5;
    FUN_106cc55c0(param_5,puVar6);
    func_0x0001001ce6fc(param_5,lVar17,0,0);
    puVar16 = *(uint **)(param_5 + 0x30);
    uVar19 = *puVar16;
    uVar20 = *(undefined8 *)(param_2 + 8);
    _objc_retain(puVar6);
    lVar17 = param_4;
    func_0x0001001b9e08(param_4,&UNK_10f3cdff4);
    if (lVar17 != 0) {
      _sqlite3_bind_blob(lVar17,1,*(undefined8 *)(param_5 + 0x30),
                         (*(int *)(param_5 + 0x20) - (int)*(undefined8 *)(param_5 + 0x30)) +
                         *(int *)(param_5 + 0x28),0);
      _sqlite3_bind_int64(lVar17,2,uVar20);
      piVar1 = (int *)((long)puVar16 + (ulong)uVar19);
      puVar16 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar16 + (ulong)*puVar16);
      _sqlite3_bind_text(lVar17,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)lVar17 == 0x65) {
        puVar15 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d20b0);
        puVar7 = puVar15;
        func_0x00010c0dfea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        puVar15 = puVar7;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar15);
        _objc_retain(puVar8);
        if (puVar15 == (undefined *)0x0 && puVar8 == (undefined *)0x0) {
LAB_106cc5018:
          puVar15 = puVar7;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar15);
          _objc_retain(puVar8);
          if (puVar15 != (undefined *)0x0 || puVar8 != (undefined *)0x0) {
            if ((puVar15 == (undefined *)0x0) || (puVar8 == (undefined *)0x0)) {
              _objc_release(puVar8);
              _objc_release(puVar15);
              _objc_release(puVar8);
              _objc_release(puVar15);
            }
            else {
              puVar9 = puVar15;
              func_0x00010c0720c0();
              _objc_release(puVar8);
              _objc_release(puVar15);
              _objc_release(puVar8);
              _objc_release(puVar15);
              if (((ulong)puVar9 & 1) != 0) goto LAB_106cc5138;
            }
            lVar17 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f3ce084);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
               (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar14 == 0)) {
              _sqlite3_bind_null(lVar17,1);
            }
            else {
              puVar16 = (uint *)((long)piVar1 + uVar14);
              puVar2 = (undefined4 *)((long)puVar16 + (ulong)*puVar16);
              _sqlite3_bind_text(lVar17,1,puVar2 + 1,*puVar2,0);
            }
            _sqlite3_bind_int64(lVar17,2,uVar20);
            _sqlite3_step();
            if ((int)lVar17 != 0x65) goto LAB_106cc5318;
          }
LAB_106cc5138:
          puVar15 = puVar7;
          func_0x00010c252440();
          puVar8 = puVar6;
          func_0x00010c252440();
          if ((int)puVar15 != (int)puVar8) {
            lVar17 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f3ce0da);
            if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
               (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar14 == 0)) {
              uVar12 = 0;
            }
            else {
              uVar12 = *(undefined4 *)((long)piVar1 + uVar14);
            }
            _sqlite3_bind_int64(lVar17,1,uVar12);
            _sqlite3_bind_int64(lVar17,2,uVar20);
            _sqlite3_step();
            if ((int)lVar17 != 0x65) goto LAB_106cc5318;
          }
          func_0x00010c25fa00(puVar7);
          dVar23 = param_1;
          func_0x00010c25fa00(puVar6);
          if (param_1 != dVar23) {
            lVar17 = param_4;
            func_0x0001001b9e08(param_4,&UNK_10f3ce126);
            dVar23 = 0.0;
            if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar14 != 0)) {
              dVar23 = *(double *)((long)piVar1 + uVar14);
            }
            _sqlite3_bind_double(lVar17,1);
            _sqlite3_bind_int64(lVar17,2,uVar20);
            _sqlite3_step();
            if ((int)lVar17 != 0x65) goto LAB_106cc5318;
          }
          func_0x00010c1503e0(puVar7);
          dVar24 = dVar23;
          func_0x00010c1503e0(puVar6);
          if (dVar23 != dVar24) {
            func_0x0001001b9e08(param_4,&UNK_10f3ce18c);
            uVar25 = 0;
            if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar14 != 0)) {
              uVar25 = *(undefined8 *)((long)piVar1 + uVar14);
            }
            _sqlite3_bind_double(uVar25,param_4,1);
            _sqlite3_bind_int64(param_4,2,uVar20);
            _sqlite3_step();
            if ((int)param_4 != 0x65) goto LAB_106cc5318;
          }
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar15 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0(PTR_PTR_1126b04a8);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126d20b0);
          func_0x00010c21c9a0(puVar15);
          _objc_release(puVar15);
          _objc_retain(puVar6);
          puVar15 = puVar6;
          goto LAB_106cc5488;
        }
        if ((puVar15 == (undefined *)0x0) || (puVar8 == (undefined *)0x0)) {
          _objc_release(puVar8);
          _objc_release(puVar15);
          _objc_release(puVar8);
          _objc_release(puVar15);
        }
        else {
          puVar9 = puVar15;
          func_0x00010c0720c0();
          _objc_release(puVar8);
          _objc_release(puVar15);
          _objc_release(puVar8);
          _objc_release(puVar15);
          if (((ulong)puVar9 & 1) != 0) goto LAB_106cc5018;
        }
        lVar17 = param_4;
        func_0x0001001b9e08(param_4,&UNK_10f3ce03a);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar14 == 0)) {
          _sqlite3_bind_null(lVar17,1);
        }
        else {
          puVar16 = (uint *)((long)piVar1 + uVar14);
          puVar2 = (undefined4 *)((long)puVar16 + (ulong)*puVar16);
          _sqlite3_bind_text(lVar17,1,puVar2 + 1,*puVar2,0);
        }
        _sqlite3_bind_int64(lVar17,2,uVar20);
        _sqlite3_step();
        if ((int)lVar17 == 0x65) goto LAB_106cc5018;
LAB_106cc5318:
        _objc_release(puVar7);
      }
    }
    _objc_release(puVar6);
    puVar15 = (undefined *)0x0;
  }
LAB_106cc5488:
  _objc_release(puVar6);
LAB_106cc548c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106cc55c0; end: 106cc58ff;  */

ulong FUN_106cc55c0(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_106cc5900(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_106cc5900(param_2,uVar6);
  uVar8 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_106cc5900(param_2,uVar8);
  uVar10 = param_3;
  func_0x00010c252440();
  func_0x00010c25fa00(param_3);
  uVar17 = param_1;
  func_0x00010c1503e0(param_3);
  uVar11 = param_3;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar11 == 0) {
    uVar15 = 0;
  }
  else {
    uVar12 = uVar11;
    _objc_retainAutorelease(uVar11);
    func_0x00010bf25f00();
    uVar16 = uVar11;
    func_0x00010c08fa60(uVar11);
    uVar15 = param_2;
    func_0x0001001d1030(param_2,uVar12,uVar16);
  }
  _objc_release(uVar11);
  uVar12 = param_3;
  func_0x00010c065640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar12 == 0) {
    uVar16 = 0;
  }
  else {
    uVar13 = uVar12;
    _objc_retainAutorelease(uVar12);
    func_0x00010bf25f00();
    uVar14 = uVar12;
    func_0x00010c08fa60(uVar12);
    uVar16 = param_2;
    func_0x0001001d1030(param_2,uVar13,uVar14);
  }
  _objc_release(uVar12);
  uVar13 = param_3;
  func_0x00010bf0d8c0(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(uVar17,0,param_2,0xe);
  func_0x0001001ce11c(param_1,0,param_2,0xc);
  func_0x000100c3b024(param_2,0x14,uVar13,0);
  func_0x0001001ce220(param_2,0x12,uVar16 & 0xffffffff);
  func_0x0001001ce220(param_2,0x10,uVar15 & 0xffffffff);
  func_0x0001001ce354(param_2,10,uVar10 & 0xffffffff,0);
  func_0x0001001ce2e4(param_2,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_2,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106cc5900; end: 106cc5a2f;  */

undefined8 FUN_106cc5900(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_106cc59e0;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_106cc59e0;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_106cc59a0;
    param_1 = 0;
  }
  else {
LAB_106cc59a0:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_106cc59e0:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106cc5a30; end: 106cc5b33;  */

void FUN_106cc5a30(undefined *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined2 auStack_80 [8];
  long lStack_70;
  undefined **ppuStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined4 auStack_50 [3];
  undefined2 uStack_44;
  undefined *puStack_42;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = &PTR___tlv_bootstrap_11340d4f8;
  lVar5 = param_2;
  if ((param_3 - 1U < 0xfffffffffffffffe) &&
     (lVar2 = param_2, _os_signpost_enabled(), unaff_x20 = param_3, (int)lVar2 != 0)) {
    puVar1 = &UNK_10f3ce1f2;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    ppuVar3 = ppuVar4;
    (*(code *)PTR___tlv_bootstrap_11340d4f8)(puVar1);
    puStack_42 = *ppuVar3;
    auStack_50[0] = 0x8220202;
    uStack_44 = 0x800;
    __os_signpost_emit_with_name_impl
              (0x100000000,param_2,1,param_3,"Sync Span","%{public}s;layout:%llu",auStack_50,0x16);
    lVar5 = param_2;
  }
  (*(code *)PTR___tlv_bootstrap_11340d4f8)();
  *ppuVar4 = *ppuVar4 + 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_68 = &PTR___tlv_bootstrap_11340d4f8;
  pcStack_58 = FUN_106cc5b34;
  lStack_70 = unaff_x20;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((lVar5 - 1U < 0xfffffffffffffffe) &&
     (ppuVar3 = ppuVar4, _os_signpost_enabled(), (int)ppuVar3 != 0)) {
    auStack_80[0] = 0;
    __os_signpost_emit_with_name_impl(0x100000000,ppuVar4,2,lVar5,"Sync Span","",auStack_80,2);
  }
  ppuVar4 = &PTR___tlv_bootstrap_11340d4f8;
  (*(code *)PTR___tlv_bootstrap_11340d4f8)();
  *ppuVar4 = *ppuVar4 + -1;
  return;
}



/* Entry: 106cc5b34; end: 106cc5c8b;  */

void FUN_106cc5b34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined2 auStack_30 [8];
  
  if ((param_2 - 1U < 0xfffffffffffffffe) &&
     (uVar1 = param_1, _os_signpost_enabled(), (int)uVar1 != 0)) {
    auStack_30[0] = 0;
    __os_signpost_emit_with_name_impl(0x100000000,param_1,2,param_2,"Sync Span","",auStack_30,2);
  }
  ppuVar2 = &PTR___tlv_bootstrap_11340d4f8;
  (*(code *)PTR___tlv_bootstrap_11340d4f8)();
  *ppuVar2 = *ppuVar2 + -1;
  return;
}



/* Entry: 106cc5c8c; end: 106cc5d53;  */

void FUN_106cc5c8c(undefined *param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x19;
  undefined *unaff_x20;
  undefined2 auStack_80 [8];
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined4 uStack_50;
  undefined *puStack_4c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  puVar3 = param_2;
  if ((param_3 - 1U < 0xfffffffffffffffe) &&
     (puVar1 = param_2, _os_signpost_enabled(), unaff_x19 = param_3, unaff_x20 = param_2,
     (int)puVar1 != 0)) {
    puStack_4c = &UNK_10f3ce1f2;
    if (param_1 != (undefined *)0x0) {
      puStack_4c = param_1;
    }
    uStack_50 = 0x8220102;
    puVar1 = (undefined *)0x100000000;
    puVar3 = param_2;
    __os_signpost_emit_with_name_impl
              (0x100000000,param_2,1,param_3,"Async Span","%{public}s",&uStack_50,0xc);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (puVar3 + -1 < (undefined *)0xfffffffffffffffe) {
      pcStack_58 = FUN_106cc5d54;
      puVar2 = puVar1;
      puStack_70 = unaff_x20;
      lStack_68 = unaff_x19;
      puStack_60 = &stack0xfffffffffffffff0;
      _os_signpost_enabled();
      if ((int)puVar2 != 0) {
        auStack_80[0] = 0;
        __os_signpost_emit_with_name_impl(0x100000000,puVar1,2,puVar3,"Async Span","",auStack_80,2);
      }
    }
    return;
  }
  return;
}



/* Entry: 106cc5d54; end: 106cc5e73;  */

void FUN_106cc5d54(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined2 auStack_30 [8];
  
  if (param_2 - 1U < 0xfffffffffffffffe) {
    uVar1 = param_1;
    _os_signpost_enabled();
    if ((int)uVar1 != 0) {
      auStack_30[0] = 0;
      __os_signpost_emit_with_name_impl(0x100000000,param_1,2,param_2,"Async Span","",auStack_30,2);
    }
  }
  return;
}



/* Entry: 106cc5e74; end: 106cc5f43;  */

void FUN_106cc5e74(undefined8 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined4 uStack_190;
  undefined *puStack_18c;
  undefined2 uStack_184;
  undefined *puStack_182;
  undefined2 uStack_17a;
  undefined8 uStack_178;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 **ppuStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined2 uStack_124;
  undefined *puStack_122;
  undefined2 uStack_11a;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined *puStack_10e;
  long lStack_f8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined4 uStack_c0;
  undefined *puStack_bc;
  undefined2 uStack_b4;
  undefined *puStack_b2;
  undefined2 uStack_aa;
  undefined8 uStack_a8;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined4 uStack_50;
  undefined *puStack_4c;
  undefined2 uStack_44;
  undefined *puStack_42;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_4;
  puVar5 = param_3;
  puVar7 = param_4;
  _os_signpost_enabled();
  if ((int)puVar1 != 0) {
    param_1 = 0x8220202;
    puStack_4c = &UNK_10f3ce201;
    if (param_2 != (undefined *)0x0) {
      puStack_4c = param_2;
    }
    uStack_50 = 0x8220202;
    uStack_44 = 0x800;
    puVar1 = (undefined *)0x100000000;
    param_5 = 0xeeeeb0b5b2b2eeee;
    puVar7 = (undefined *)0x0;
    puStack_42 = param_3;
    __os_signpost_emit_with_name_impl();
    puVar5 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106cc5f44;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar6 = puVar5;
  puVar8 = puVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  _os_signpost_enabled();
  if ((int)puVar2 != 0) {
    puStack_bc = &UNK_10f3ce213;
    if (puVar1 != (undefined *)0x0) {
      puStack_bc = puVar1;
    }
    uStack_c0 = 0x8220302;
    puStack_b2 = &UNK_10f3ce223;
    if (puVar5 != (undefined *)0x0) {
      puStack_b2 = puVar5;
    }
    uStack_b4 = 0x822;
    uStack_aa = 0x800;
    puVar2 = (undefined *)0x100000000;
    param_5 = 0xeeeeb0b5b2b2eeee;
    puVar8 = (undefined *)0x0;
    uStack_a8 = param_1;
    __os_signpost_emit_with_name_impl();
    puVar6 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_106cc603c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar6;
  puVar5 = puVar6;
  puVar7 = puVar8;
  uVar9 = param_5;
  ppuStack_d0 = &puStack_60;
  _os_signpost_enabled();
  if ((int)puVar1 != 0) {
    puVar1 = &UNK_10f3ce237;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    ppuVar3 = &PTR___tlv_bootstrap_11340d4f8;
    (*(code *)PTR___tlv_bootstrap_11340d4f8)(puVar1);
    puStack_10e = *ppuVar3;
    uStack_130 = 0x8220402;
    uStack_124 = 0x800;
    uStack_11a = 0x800;
    uStack_110 = 0x800;
    puVar1 = (undefined *)0x100000000;
    uVar9 = 0xeeeeb0b5b2b2eeee;
    puVar7 = (undefined *)0x0;
    puVar5 = puVar6;
    puStack_122 = puVar8;
    uStack_118 = param_5;
    __os_signpost_emit_with_name_impl();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  uStack_138 = 0x106cc6134;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  puStack_160 = puVar2;
  puStack_158 = puVar8;
  uStack_150 = param_5;
  puStack_148 = puVar6;
  ppuStack_140 = &ppuStack_d0;
  _os_signpost_enabled();
  if ((int)puVar4 != 0) {
    uStack_190 = 0x8220302;
    puStack_18c = &UNK_10f3ce237;
    if (puVar1 != (undefined *)0x0) {
      puStack_18c = puVar1;
    }
    uStack_184 = 0x800;
    uStack_17a = 0x800;
    puStack_182 = puVar7;
    uStack_178 = uVar9;
    __os_signpost_emit_with_name_impl
              (0x100000000,puVar5,0,0xeeeeb0b5b2b2eeee,"Async Span",
               "Retro:%{public}s;agoUs:%llu;durationUs:%llu",&uStack_190,0x20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c7d60 != -1) {
    func_0x00010002a2fc(0x1136c7d60,&PTR___NSConcreteGlobalBlock_11096fa80);
  }
  uVar9 = uRam00000001136c7d58;
  _objc_retain(uRam00000001136c7d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 106cc5f44; end: 106cc603b;  */

void FUN_106cc5f44(undefined8 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined4 uStack_140;
  undefined *puStack_13c;
  undefined2 uStack_134;
  undefined *puStack_132;
  undefined2 uStack_12a;
  undefined8 uStack_128;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined2 uStack_d4;
  undefined *puStack_d2;
  undefined2 uStack_ca;
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  undefined *puStack_be;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined4 uStack_70;
  undefined *puStack_6c;
  undefined2 uStack_64;
  undefined *puStack_62;
  undefined2 uStack_5a;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_4;
  puVar5 = param_3;
  puVar7 = param_4;
  _os_signpost_enabled();
  if ((int)puVar1 != 0) {
    puStack_6c = &UNK_10f3ce213;
    if (param_2 != (undefined *)0x0) {
      puStack_6c = param_2;
    }
    uStack_70 = 0x8220302;
    puStack_62 = &UNK_10f3ce223;
    if (param_3 != (undefined *)0x0) {
      puStack_62 = param_3;
    }
    uStack_64 = 0x822;
    uStack_5a = 0x800;
    puVar1 = (undefined *)0x100000000;
    param_5 = 0xeeeeb0b5b2b2eeee;
    puVar7 = (undefined *)0x0;
    uStack_58 = param_1;
    __os_signpost_emit_with_name_impl();
    puVar5 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_106cc603c;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar6 = puVar5;
  puVar8 = puVar7;
  uVar9 = param_5;
  puStack_80 = &stack0xfffffffffffffff0;
  _os_signpost_enabled();
  if ((int)puVar2 != 0) {
    puVar2 = &UNK_10f3ce237;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
    }
    ppuVar3 = &PTR___tlv_bootstrap_11340d4f8;
    (*(code *)PTR___tlv_bootstrap_11340d4f8)(puVar2);
    puStack_be = *ppuVar3;
    uStack_e0 = 0x8220402;
    uStack_d4 = 0x800;
    uStack_ca = 0x800;
    uStack_c0 = 0x800;
    puVar2 = (undefined *)0x100000000;
    uVar9 = 0xeeeeb0b5b2b2eeee;
    puVar8 = (undefined *)0x0;
    puVar6 = puVar5;
    puStack_d2 = puVar7;
    uStack_c8 = param_5;
    __os_signpost_emit_with_name_impl();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_e8 = 0x106cc6134;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puStack_110 = puVar1;
  puStack_108 = puVar7;
  uStack_100 = param_5;
  puStack_f8 = puVar5;
  ppuStack_f0 = &puStack_80;
  _os_signpost_enabled();
  if ((int)puVar4 != 0) {
    uStack_140 = 0x8220302;
    puStack_13c = &UNK_10f3ce237;
    if (puVar2 != (undefined *)0x0) {
      puStack_13c = puVar2;
    }
    uStack_134 = 0x800;
    uStack_12a = 0x800;
    puStack_132 = puVar8;
    uStack_128 = uVar9;
    __os_signpost_emit_with_name_impl
              (0x100000000,puVar6,0,0xeeeeb0b5b2b2eeee,"Async Span",
               "Retro:%{public}s;agoUs:%llu;durationUs:%llu",&uStack_140,0x20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c7d60 != -1) {
    func_0x00010002a2fc(0x1136c7d60,&PTR___NSConcreteGlobalBlock_11096fa80);
  }
  uVar9 = uRam00000001136c7d58;
  _objc_retain(uRam00000001136c7d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 106cc603c; end: 106cc620f;  */

void FUN_106cc603c(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_d0;
  undefined *puStack_cc;
  undefined2 uStack_c4;
  undefined8 uStack_c2;
  undefined2 uStack_ba;
  undefined8 uStack_b8;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined2 uStack_64;
  undefined8 uStack_62;
  undefined2 uStack_5a;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined *puStack_4e;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_2;
  uVar5 = param_3;
  uVar6 = param_4;
  _os_signpost_enabled();
  if ((int)puVar1 != 0) {
    puVar1 = &UNK_10f3ce237;
    if (param_1 != (undefined *)0x0) {
      puVar1 = param_1;
    }
    ppuVar2 = &PTR___tlv_bootstrap_11340d4f8;
    (*(code *)PTR___tlv_bootstrap_11340d4f8)(puVar1);
    puStack_4e = *ppuVar2;
    uStack_70 = 0x8220402;
    uStack_64 = 0x800;
    uStack_5a = 0x800;
    uStack_50 = 0x800;
    puVar1 = (undefined *)0x100000000;
    uVar6 = 0xeeeeb0b5b2b2eeee;
    uVar5 = 0;
    puVar4 = param_2;
    uStack_62 = param_3;
    uStack_58 = param_4;
    __os_signpost_emit_with_name_impl();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_78 = 0x106cc6134;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = param_4;
  puStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  _os_signpost_enabled();
  if ((int)puVar3 != 0) {
    uStack_d0 = 0x8220302;
    puStack_cc = &UNK_10f3ce237;
    if (puVar1 != (undefined *)0x0) {
      puStack_cc = puVar1;
    }
    uStack_c4 = 0x800;
    uStack_ba = 0x800;
    uStack_c2 = uVar5;
    uStack_b8 = uVar6;
    __os_signpost_emit_with_name_impl
              (0x100000000,puVar4,0,0xeeeeb0b5b2b2eeee,"Async Span",
               "Retro:%{public}s;agoUs:%llu;durationUs:%llu",&uStack_d0,0x20);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  if (lRam00000001136c7d60 != -1) {
    func_0x00010002a2fc(0x1136c7d60,&PTR___NSConcreteGlobalBlock_11096fa80);
  }
  uVar5 = uRam00000001136c7d58;
  _objc_retain(uRam00000001136c7d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106cc6210; end: 106cc6263; +[SCTracingServicesCLIManager shared] */

void FUN_106cc6210(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c7d60 != -1) {
    func_0x00010002a2fc(0x1136c7d60,&PTR___NSConcreteGlobalBlock_11096fa80);
  }
  uVar1 = uRam00000001136c7d58;
  _objc_retain(uRam00000001136c7d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cc6264; end: 106cc628f;  */

void FUN_106cc6264(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d20c8;
  _objc_alloc_init();
  uVar1 = puRam00000001136c7d58;
  puRam00000001136c7d58 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106cc6290; end: 106cc64ab; -[SCTracingServicesCLIManager init] */

undefined8 * FUN_106cc6290(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f62d0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar2 = &UNK_10f3ce241;
  _dispatch_queue_create(&UNK_10f3ce241,0);
  uVar7 = puVar1[1];
  puVar1[1] = puVar2;
  _objc_release(uVar7);
  lVar3 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar4 == 0) {
    puVar8 = (undefined *)0x0;
    goto LAB_106cc6414;
  }
  lVar4 = lVar3;
  func_0x00010bfb1920(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(puVar2);
  func_0x00010c25da80(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bdc2c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar8);
  if (puVar5 == (undefined *)0x0) {
LAB_106cc63f8:
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar8;
    func_0x00010bf55da0();
    _objc_release(puVar8);
    if ((int)puVar6 == 0) goto LAB_106cc63f8;
    _objc_retain(puVar5);
    puVar8 = puVar5;
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
LAB_106cc6414:
  _objc_release(lVar3);
  uVar7 = puVar1[2];
  puVar1[2] = puVar8;
  _objc_release(uVar7);
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((long)puVar1 + 0x19) = 0;
  uVar7 = puVar1[1];
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106cc64ac;
  puStack_60 = &UNK_1108c9a88;
  _objc_retain(puVar1);
  puStack_58 = puVar1;
  _notify_register_dispatch(&UNK_10f3ce2d6,(long)puVar1 + 0x1c,uVar7,&puStack_78);
  _objc_release(puStack_58);
  return puVar1;
}



/* Entry: 106cc64ac; end: 106cc64bb;  */

void FUN_106cc64ac(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x19) = 1;
  return;
}


