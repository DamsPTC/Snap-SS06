/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10546f3ac; end: 10546f3b3; -[SCAdSKOverlayLifecycleTracker adSKOverlayEventObservable] */

undefined8 FUN_10546f3ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10546f3b4; end: 10546f443; -[SCAdSKOverlayLifecycleTracker .cxx_destruct] */

void FUN_10546f3b4(long param_1)

{
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



/* Entry: 10546f444; end: 10546f4d3; -[SCAdWebviewLifecycleTracer initWithAdWebviewLifecyleTracker:] */

undefined1 * FUN_10546f444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e85a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10546f4d4; end: 10546f5bf; -[SCAdWebviewLifecycleTracer beginTracing] */

void FUN_10546f4d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef6540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10546f5c0; end: 10546f607;  */

void FUN_10546f5c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10546f608; end: 10546f773; -[SCAdWebviewLifecycleTracer _onNextLifecycleEvent:] */

void FUN_10546f608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10546f774;
  puStack_30 = &UNK_11088b498;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10546f7e8;
  puStack_58 = &UNK_11088b498;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10546f870;
  puStack_80 = &UNK_11088b498;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10546f8fc;
  puStack_a8 = &UNK_11088b498;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x10546f9d8;
  puStack_d0 = &UNK_11088b498;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_10546fab4;
  puStack_f8 = &UNK_11088b498;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_10546fb3c;
  puStack_120 = &UNK_11088b498;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x10546fb50;
  puStack_148 = &UNK_11088b498;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x10546fb64;
  puStack_170 = &UNK_11088b498;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x10546fb84;
  puStack_198 = &UNK_11088b498;
  uStack_190 = param_1;
  uStack_168 = param_1;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c14e0(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,
                      &PTR___NSConcreteGlobalBlock_11088b4e8,&puStack_c0,&puStack_e8,&puStack_110,
                      &puStack_138,&puStack_160,&puStack_188,&PTR___NSConcreteGlobalBlock_11088b508,
                      &PTR___NSConcreteGlobalBlock_11088b528,&PTR___NSConcreteGlobalBlock_11088b568,
                      &puStack_1b0);
  return;
}



/* Entry: 10546f774; end: 10546f8f7;  */

void FUN_10546f774(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17be0();
  func_0x00010c0df7c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x18) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10546f8f8; end: 10546f8fb;  */

void FUN_10546f8f8(void)

{
  return;
}



/* Entry: 10546f8fc; end: 10546fab3;  */

void FUN_10546f8fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010be09f00(*(long *)(param_1 + 0x20),param_2,*(long *)(param_1 + 0x20) + 0x28,
                      &PTR____CFConstantStringClassReference_110ddf998);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17be0();
  func_0x00010c0df7c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17be0();
  func_0x00010c0df7c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x30) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10546fab4; end: 10546fb3b;  */

void FUN_10546fab4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010be09f00(*(long *)(param_1 + 0x20),param_2,*(long *)(param_1 + 0x20) + 0x40,
                      &PTR____CFConstantStringClassReference_110ddf9d8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17be0();
  func_0x00010c0df7c0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10546fb3c; end: 10546fb8b;  */

void FUN_10546fb3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__endTraceWithTokenRef_name__112560160,
             *(long *)(param_1 + 0x20) + 0x50,&PTR____CFConstantStringClassReference_110ddf9f8);
  return;
}



/* Entry: 10546fb8c; end: 10546fc0b; -[SCAdWebviewLifecycleTracer _endTraceWithTokenRef:name:] */

void FUN_10546fb8c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  if ((param_3 != (long *)0x0) && (*param_3 != 0)) {
    func_0x00010c282800();
    lVar1 = *param_3;
    *param_3 = 0;
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94200();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10546fc0c; end: 10546fcbf; -[SCAdWebviewLifecycleTracer _cleanupOpenTraces] */

/* WARNING: Possible PIC construction at 0x00010546fc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010546fc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010546fc78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010546fca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010546fc7c) */
/* WARNING: Removing unreachable block (ram,0x00010546fc54) */
/* WARNING: Removing unreachable block (ram,0x00010546fc2c) */
/* WARNING: Removing unreachable block (ram,0x00010546fca4) */

void FUN_10546fc0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__endTraceWithTokenRef_name__112560160,param_1 + 0x18,
             &PTR____CFConstantStringClassReference_110ddfa58);
  return;
}



/* Entry: 10546fcc0; end: 10546fd4f; -[SCAdWebviewLifecycleTracer .cxx_destruct] */

void FUN_10546fcc0(long param_1)

{
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



/* Entry: 10546fd50; end: 10546fd87;  */

void FUN_10546fd50(void)

{
  _objc_opt_new(PTR_PTR_1126b93f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10546fd88; end: 10546fe0f;  */

void FUN_10546fd88(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc5560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10546fe10; end: 10546fe7f; -[SCAdsInteractionServiceProvider _adLifecycleTimestampsTracker:] */

void FUN_10546fe10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeea8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b9410;
  _objc_alloc(PTR_PTR_1126b9410);
  func_0x00010bff1300();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10546fe80; end: 10547011b; -[SCAdsInteractionServiceProvider _skOverlayLifecycleTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10546fe80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112723b20;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar13;
  func_0x00010c108d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0efc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar13);
  puVar4 = PTR_PTR_1126b9418;
  _objc_alloc();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112723b24;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar13;
  func_0x00010c23d860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_10547011c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bef5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000105470140();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000105470140(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112723b18;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar14;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  func_0x00010c0329a0(puVar4,param_2,lVar3,lVar1,lVar5,lVar7,lVar9,lVar10,lVar11,puVar12);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar13);
  FUN_10547011c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bef5d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18580();
  _objc_release(lVar1);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10547011c; end: 105470163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10547011c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112723b1c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105470164; end: 1054701e7; -[SCAdsInteractionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105470164(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112723b24);
  _objc_destroyWeak(param_1 + _DAT_112723b20);
  _objc_destroyWeak(param_1 + _DAT_112723b1c);
  _objc_destroyWeak(param_1 + _DAT_112723b18);
  _objc_destroyWeak(param_1 + _DAT_112723b14);
  _objc_destroyWeak(param_1 + _DAT_112723b10);
  _objc_destroyWeak(param_1 + _DAT_112723b0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112723b08,0);
  return;
}



/* Entry: 1054701e8; end: 105470213; +[SCGrapheneAdAppInstallValidationMetric topsnapFullyPresent] */

void FUN_1054701e8(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105470214; end: 10547023f; +[SCGrapheneAdAppInstallValidationMetric topsnapDismiss] */

void FUN_105470214(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105470240; end: 10547026b; +[SCGrapheneAdAppInstallValidationMetric topsnapViewTime] */

void FUN_105470240(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547026c; end: 105470297; +[SCGrapheneAdAppInstallValidationMetric freeDiskSpace] */

void FUN_10547026c(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105470298; end: 1054702c3; +[SCGrapheneAdAppInstallValidationMetric totalDiskSpace] */

void FUN_105470298(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054702c4; end: 1054702ef; +[SCGrapheneAdAppInstallValidationMetric swipedNotSet] */

void FUN_1054702c4(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054702f0; end: 10547031b; +[SCGrapheneAdAppInstallValidationMetric swipeCount] */

void FUN_1054702f0(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547031c; end: 105470347; +[SCGrapheneAdAppInstallValidationMetric attachmentTriggeredTs] */

void FUN_10547031c(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105470348; end: 105470373; +[SCGrapheneAdAppInstallValidationMetric attachmentTriggerType] */

void FUN_105470348(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105470374; end: 10547039f; +[SCGrapheneAdAppInstallValidationMetric preferredAttachmentType] */

void FUN_105470374(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054703a0; end: 1054703cb; +[SCGrapheneAdAppInstallValidationMetric actualAttachmentType] */

void FUN_1054703a0(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054703cc; end: 1054703f7; +[SCGrapheneAdAppInstallValidationMetric skOverlayMetricsAbsent] */

void FUN_1054703cc(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054703f8; end: 105470423; +[SCGrapheneAdAppInstallValidationMetric skOverlayTriggered] */

void FUN_1054703f8(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105470424; end: 10547044f; +[SCGrapheneAdAppInstallValidationMetric skOverlayPresented] */

void FUN_105470424(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105470450; end: 10547047b; +[SCGrapheneAdAppInstallValidationMetric longformTimeViewed] */

void FUN_105470450(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10547047c; end: 1054704a7; +[SCGrapheneAdAppInstallValidationMetric loadedOnEntry] */

void FUN_10547047c(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054704a8; end: 1054704d3; +[SCGrapheneAdAppInstallValidationMetric loadedOnExit] */

void FUN_1054704a8(void)

{
  _objc_alloc(PTR_PTR_1126b9420);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054704d4; end: 105470573; -[SCGrapheneAdAppInstallValidationMetric description] */

void FUN_1054704d4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddfb58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ddfb58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e85b0;
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



/* Entry: 105470574; end: 105470797; -[SCGrapheneRegistry adAppInstallValidationGraphene] */

void FUN_105470574(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1054705fc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bbf48 != -1) {
    func_0x00010002a2fc(0x1136bbf48,&puStack_48);
  }
  uVar1 = uRam00000001136bbf40;
  _objc_retain(uRam00000001136bbf40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105470798; end: 105470a33; -[SCAdWebviewMetricsValidationServiceProvider _webviewMetricsValidatorWithGraphene] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105470798(long param_1,undefined8 param_2)

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
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126b8cf0;
  func_0x00010c0ccf00();
  if (((ulong)puVar1 & 1) == 0) {
    if (param_1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = param_1 + _DAT_112723b3c;
      _objc_loadWeakRetained();
    }
    lVar2 = lVar7;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = lVar8;
    func_0x00010c067f60();
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(lVar7);
  }
  else {
    uStack_68 = 2;
  }
  lVar7 = param_1;
  FUN_105470a34(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bef6580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  lVar7 = param_1;
  FUN_105470a34(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010bef65a0();
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  puVar1 = PTR_PTR_1126b9430;
  _objc_alloc(PTR_PTR_1126b9430);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112723b40;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010c0f98e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112723b44;
    _objc_loadWeakRetained(lVar8);
  }
  lVar5 = lVar8;
  func_0x00010bfcdfa0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112723b48;
    _objc_loadWeakRetained(lVar9);
  }
  lVar6 = lVar9;
  func_0x00010bef25c0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035300(puVar1,param_2,lVar2,lVar5,uStack_68,lVar3,lVar4,lVar6,
                      *(undefined8 *)(param_1 + _DAT_112723b30));
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105470a34; end: 105470a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105470a34(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112723b38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105470a58; end: 105470ae7; -[SCAdWebviewMetricsValidationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105470a58(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112723b28);
  _objc_destroyWeak(param_1 + _DAT_112723b2c);
  _objc_destroyWeak(param_1 + _DAT_112723b48);
  _objc_destroyWeak(param_1 + _DAT_112723b44);
  _objc_destroyWeak(param_1 + _DAT_112723b40);
  _objc_destroyWeak(param_1 + _DAT_112723b3c);
  _objc_destroyWeak(param_1 + _DAT_112723b38);
  _objc_destroyWeak(param_1 + _DAT_112723b34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112723b30,0);
  return;
}



/* Entry: 105470ae8; end: 105470c7f; -[SCAdWebviewMetricsValidator initWithPerformerProvider:graphene:metricsValidationType:suppurtedAdTypes:webviewOnly:adCrashLogger:debugViewer:] */

undefined1 *
FUN_105470ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e85b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar4);
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
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105470c80; end: 105470d3b; -[SCAdWebviewMetricsValidator setMetricsValidatingModel:] */

void FUN_105470c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105470d3c;
  puStack_20 = &UNK_11088b698;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105470dc8;
  puStack_48 = &UNK_11088b6c8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105470e3c;
  puStack_70 = &UNK_11088b6f8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105470e50;
  puStack_98 = &UNK_110881940;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c0de0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 105470d3c; end: 105470e3b;  */

void FUN_105470d3c(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b9438;
  _objc_opt_class(PTR_PTR_1126b9438);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010be6c0e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105470e3c; end: 105470e63;  */

void FUN_105470e3c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be69d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__onLifecycleTimestamps__1125780f8,param_2);
    return;
  }
  return;
}



/* Entry: 105470e64; end: 105470f3b; -[SCAdWebviewMetricsValidator startValidationWithCompletion:] */

void FUN_105470e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105470f3c; end: 105470f6f;  */

void FUN_105470f3c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec2080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105470f70; end: 10547106f; -[SCAdWebviewMetricsValidator _onTrackRequest:adIdentifier:] */

void FUN_105470f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
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



/* Entry: 105471070; end: 1054710af;  */

void FUN_105471070(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2190a0();
  func_0x00010c163760(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054710b0; end: 105471187; -[SCAdWebviewMetricsValidator _onMirrorRequest:] */

void FUN_1054710b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105471188; end: 1054711bb;  */

void FUN_105471188(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1c85a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054711bc; end: 105471293; -[SCAdWebviewMetricsValidator _onLifecycleTimestamps:] */

void FUN_1054711bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105471294; end: 1054712c7;  */

void FUN_105471294(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1bd980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054712c8; end: 10547139f; -[SCAdWebviewMetricsValidator _onRawTimingPayload:] */

void FUN_1054712c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054713a0; end: 1054713d3;  */

void FUN_1054713a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e7940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054713d4; end: 105471423; -[SCAdWebviewMetricsValidator setTrackRequest:] */

void FUN_1054713d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x40) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105471424; end: 105471473; -[SCAdWebviewMetricsValidator setLifecycleTimestamps:] */

void FUN_105471424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x50) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105471474; end: 105471543; -[SCAdWebviewMetricsValidator setTrackEventSymbols:] */

void FUN_105471474(long param_1,undefined **param_2,undefined **param_3)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puStack_2b0;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined *puStack_230;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_3;
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (ppuVar15 = param_3, func_0x00010c08fa60(), ppuVar15 != (undefined **)0x0)) {
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110ddfdd8;
    func_0x00010bf06b40(uVar12);
    _objc_release(puVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar7);
  func_0x00010bf0ae40(param_3[2]);
  puVar11 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0();
  if (param_3[8] != (undefined *)0x0) {
    puVar14 = param_3[4];
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    if (((ulong)puVar14 & 1) == 0) {
      _objc_release(puVar16);
    }
    else {
      puVar3 = param_3[8];
      func_0x00010bfb1ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar3;
      func_0x00010c075be0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar14;
      func_0x00010c296d80();
      _objc_release(puVar14);
      _objc_release(puVar3);
      _objc_release(puVar16);
      if ((int)puVar4 == 0) {
        ppuVar15 = param_3;
        func_0x00010bee77c0();
        puVar14 = param_3[8];
        func_0x00010c296c40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_3[0xb];
        _objc_retain();
        puVar3 = param_3[0xc];
        _objc_retain(puVar3);
        puVar16 = puVar14;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (puVar16 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(puVar14);
            }
            func_0x00010bee7ca0(param_3);
            if (((ulong)ppuVar15 & 1) == 0) {
              ppuVar15 = (undefined **)0x0;
            }
            else {
              ppuVar15 = param_3;
              func_0x00010bee7aa0();
            }
            puVar10 = puVar10 + 1;
          } while (puVar16 != puVar10);
          puVar16 = puVar14;
          func_0x00010bf52a60();
        }
        if (param_3[0xb] == (undefined *)0x0) {
          func_0x00010be94560(param_3);
          if (((ulong)ppuVar15 & 1) == 0) goto LAB_1054717f4;
        }
        else {
          if ((int)ppuVar15 == 0) {
            func_0x00010be94560();
          }
          else {
            ppuVar15 = param_3;
            func_0x00010bee7ba0();
            func_0x00010be94560(param_3);
            if (((ulong)ppuVar15 & 1) != 0) goto LAB_1054718d0;
          }
LAB_1054717f4:
          param_2 = &PTR___NSConcreteGlobalBlock_11088b748;
          puVar16 = puVar14;
          func_0x000100504554();
          if (param_3[1] == (undefined *)0x2) {
            puVar5 = param_3[6];
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR_PTR_1126b3e90;
            func_0x00010befdee0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0ada0(puVar5);
            _objc_release(puVar6);
            _objc_release(puVar10);
            _objc_release(puVar5);
          }
          else if (param_3[1] == (undefined *)0x1) {
            func_0x00010be15a00(param_3);
          }
          _objc_release(puVar16);
        }
LAB_1054718d0:
        _objc_release(puVar3);
        _objc_release(puVar4);
        _objc_release(puVar14);
        goto LAB_105471780;
      }
    }
  }
  func_0x00010be94560(param_3);
LAB_105471780:
  _objc_release(puVar11);
  _objc_release(ppuVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_230 = PTR_PTR_1126b9458;
  if (param_2 == (undefined **)0x0) {
    _objc_alloc();
    _objc_retain(0);
    _objc_retain(0);
    puVar16 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    lStack_290 = 0;
    lStack_280 = 0;
    lStack_270 = 0;
    lStack_268 = 0;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_278 = 0;
    lStack_288 = 0;
    lStack_298 = 0;
    bVar1 = 0;
    puStack_2b0 = (undefined *)0x0;
    uVar13 = 0;
    bVar9 = 0;
  }
  else {
    puVar11 = param_2[6];
    _objc_alloc();
    lStack_238 = (long)param_2[4] - (long)puVar11;
    lStack_240 = (long)param_2[5] - (long)puVar11;
    lStack_248 = (long)param_2[7] - (long)puVar11;
    lStack_258 = (long)param_2[8] - (long)puVar11;
    lStack_250 = (long)param_2[9] - (long)puVar11;
    lStack_260 = (long)param_2[10] - (long)puVar11;
    lStack_268 = (long)param_2[0xb] - (long)puVar11;
    lStack_278 = (long)param_2[0xc] - (long)puVar11;
    lStack_270 = (long)param_2[0xd] - (long)puVar11;
    lStack_288 = (long)param_2[0xe] - (long)puVar11;
    lStack_280 = (long)param_2[0xf] - (long)puVar11;
    lStack_298 = (long)param_2[0x10] - (long)puVar11;
    puStack_2b0 = param_2[0x12];
    lStack_290 = (long)param_2[0x11] - (long)puVar11;
    bVar1 = *(byte *)(param_2 + 1);
    uStack_29c = *(undefined4 *)(param_2 + 2);
    uStack_2a0 = *(undefined4 *)((long)param_2 + 0x14);
    uVar13 = *(undefined4 *)(param_2 + 3);
    puVar11 = param_2[0x13];
    _objc_retain(puVar11);
    bVar9 = *(byte *)((long)param_2 + 9);
    puVar16 = param_2[0x14];
    _objc_retain(puVar16);
  }
  _objc_release(param_2);
  FUN_105477ae0(puStack_230,lStack_238,lStack_240,0,lStack_248,lStack_258,lStack_250,lStack_260,
                lStack_268,lStack_278,lStack_270,lStack_288,lStack_280,lStack_298,lStack_290,
                bVar1 & 1,uStack_29c,puStack_2b0,uStack_2a0,uVar13,puVar11,bVar9 & 1);
  _objc_release(puVar16);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_230);
  return;
}



/* Entry: 105471544; end: 1054718ef; -[SCAdWebviewMetricsValidator _startValidationWithCompletion:] */

void FUN_105471544(ulong param_1,undefined **param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puStack_260;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  puVar11 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0();
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar13 = *(ulong *)(param_1 + 0x20);
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    if ((uVar13 & 1) == 0) {
      _objc_release(puVar15);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bfb1ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c075be0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010c296d80();
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(puVar15);
      if ((int)uVar14 == 0) {
        uVar13 = param_1;
        func_0x00010bee77c0();
        lVar4 = *(long *)(param_1 + 0x40);
        func_0x00010c296c40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x58);
        _objc_retain();
        uVar14 = *(undefined8 *)(param_1 + 0x60);
        _objc_retain(uVar14);
        lVar6 = lVar4;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar4);
            }
            func_0x00010bee7ca0(param_1);
            if ((uVar13 & 1) == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = param_1;
              func_0x00010bee7aa0();
            }
            lVar10 = lVar10 + 1;
          } while (lVar6 != lVar10);
          lVar6 = lVar4;
          func_0x00010bf52a60();
        }
        if (*(long *)(param_1 + 0x58) == 0) {
          func_0x00010be94560(param_1);
          if ((uVar13 & 1) == 0) goto LAB_1054717f4;
        }
        else {
          if ((int)uVar13 == 0) {
            func_0x00010be94560();
          }
          else {
            uVar13 = param_1;
            func_0x00010bee7ba0();
            func_0x00010be94560(param_1);
            if ((uVar13 & 1) != 0) goto LAB_1054718d0;
          }
LAB_1054717f4:
          param_2 = &PTR___NSConcreteGlobalBlock_11088b748;
          lVar6 = lVar4;
          func_0x000100504554();
          if (*(long *)(param_1 + 8) == 2) {
            uVar3 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR_PTR_1126b3e90;
            func_0x00010befdee0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0ada0(uVar3);
            _objc_release(puVar7);
            _objc_release(puVar15);
            _objc_release(uVar3);
          }
          else if (*(long *)(param_1 + 8) == 1) {
            func_0x00010be15a00(param_1);
          }
          _objc_release(lVar6);
        }
LAB_1054718d0:
        _objc_release(uVar14);
        _objc_release(uVar5);
        _objc_release(lVar4);
        goto LAB_105471780;
      }
    }
  }
  func_0x00010be94560(param_1);
LAB_105471780:
  _objc_release(puVar11);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_1e0 = PTR_PTR_1126b9458;
  if (param_2 == (undefined **)0x0) {
    _objc_alloc();
    _objc_retain(0);
    _objc_retain(0);
    puVar15 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
    uStack_250 = 0;
    uStack_24c = 0;
    lStack_240 = 0;
    lStack_230 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    lStack_200 = 0;
    lStack_1f8 = 0;
    lStack_1f0 = 0;
    lStack_1e8 = 0;
    lStack_210 = 0;
    lStack_208 = 0;
    lStack_228 = 0;
    lStack_238 = 0;
    lStack_248 = 0;
    bVar1 = 0;
    puStack_260 = (undefined *)0x0;
    uVar12 = 0;
    bVar9 = 0;
  }
  else {
    puVar11 = param_2[6];
    _objc_alloc();
    lStack_1e8 = (long)param_2[4] - (long)puVar11;
    lStack_1f0 = (long)param_2[5] - (long)puVar11;
    lStack_1f8 = (long)param_2[7] - (long)puVar11;
    lStack_208 = (long)param_2[8] - (long)puVar11;
    lStack_200 = (long)param_2[9] - (long)puVar11;
    lStack_210 = (long)param_2[10] - (long)puVar11;
    lStack_218 = (long)param_2[0xb] - (long)puVar11;
    lStack_228 = (long)param_2[0xc] - (long)puVar11;
    lStack_220 = (long)param_2[0xd] - (long)puVar11;
    lStack_238 = (long)param_2[0xe] - (long)puVar11;
    lStack_230 = (long)param_2[0xf] - (long)puVar11;
    lStack_248 = (long)param_2[0x10] - (long)puVar11;
    puStack_260 = param_2[0x12];
    lStack_240 = (long)param_2[0x11] - (long)puVar11;
    bVar1 = *(byte *)(param_2 + 1);
    uStack_24c = *(undefined4 *)(param_2 + 2);
    uStack_250 = *(undefined4 *)((long)param_2 + 0x14);
    uVar12 = *(undefined4 *)(param_2 + 3);
    puVar11 = param_2[0x13];
    _objc_retain(puVar11);
    bVar9 = *(byte *)((long)param_2 + 9);
    puVar15 = param_2[0x14];
    _objc_retain(puVar15);
  }
  _objc_release(param_2);
  FUN_105477ae0(puStack_1e0,lStack_1e8,lStack_1f0,0,lStack_1f8,lStack_208,lStack_200,lStack_210,
                lStack_218,lStack_228,lStack_220,lStack_238,lStack_230,lStack_248,lStack_240,
                bVar1 & 1,uStack_24c,puStack_260,uStack_250,uVar12,puVar11,bVar9 & 1);
  _objc_release(puVar15);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_1e0);
  return;
}



/* Entry: 1054718f0; end: 1054718f7;  */

void FUN_1054718f0(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  uStack_70 = PTR_PTR_1126b9458;
  if (param_2 == 0) {
    _objc_alloc();
    _objc_retain(0);
    _objc_retain(0);
    uVar5 = 0;
    uVar4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d0 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    bVar1 = 0;
    uStack_f0 = 0;
    uVar3 = 0;
    bVar2 = 0;
  }
  else {
    uStack_d0 = *(long *)(param_2 + 0x30);
    _objc_alloc();
    uStack_78 = *(long *)(param_2 + 0x20) - uStack_d0;
    uStack_80 = *(long *)(param_2 + 0x28) - uStack_d0;
    uStack_88 = *(long *)(param_2 + 0x38) - uStack_d0;
    uStack_98 = *(long *)(param_2 + 0x40) - uStack_d0;
    uStack_90 = *(long *)(param_2 + 0x48) - uStack_d0;
    uStack_a0 = *(long *)(param_2 + 0x50) - uStack_d0;
    uStack_a8 = *(long *)(param_2 + 0x58) - uStack_d0;
    uStack_b8 = *(long *)(param_2 + 0x60) - uStack_d0;
    uStack_b0 = *(long *)(param_2 + 0x68) - uStack_d0;
    uStack_c8 = *(long *)(param_2 + 0x70) - uStack_d0;
    uStack_c0 = *(long *)(param_2 + 0x78) - uStack_d0;
    uStack_d8 = *(long *)(param_2 + 0x80) - uStack_d0;
    uStack_f0 = *(undefined8 *)(param_2 + 0x90);
    uStack_d0 = *(long *)(param_2 + 0x88) - uStack_d0;
    bVar1 = *(byte *)(param_2 + 8);
    uStack_dc = *(undefined4 *)(param_2 + 0x10);
    uStack_e0 = *(undefined4 *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(param_2 + 0x98);
    _objc_retain(uVar4);
    bVar2 = *(byte *)(param_2 + 9);
    uVar5 = *(undefined8 *)(param_2 + 0xa0);
    _objc_retain(uVar5);
  }
  _objc_release(param_2);
  FUN_105477ae0(uStack_70,uStack_78,uStack_80,0,uStack_88,uStack_98,uStack_90,uStack_a0,uStack_a8,
                uStack_b8,uStack_b0,uStack_c8,uStack_c0,uStack_d8,uStack_d0,bVar1 & 1,uStack_dc,
                uStack_f0,uStack_e0,uVar3,uVar4,bVar2 & 1);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_70);
  return;
}



/* Entry: 1054718f8; end: 105471b4f;  */

void FUN_1054718f8(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  uStack_70 = PTR_PTR_1126b9458;
  if (param_1 == 0) {
    _objc_alloc();
    _objc_retain(0);
    _objc_retain(0);
    uVar5 = 0;
    uVar4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d0 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    bVar1 = 0;
    uStack_f0 = 0;
    uVar3 = 0;
    bVar2 = 0;
  }
  else {
    uStack_d0 = *(long *)(param_1 + 0x30);
    _objc_alloc();
    uStack_78 = *(long *)(param_1 + 0x20) - uStack_d0;
    uStack_80 = *(long *)(param_1 + 0x28) - uStack_d0;
    uStack_88 = *(long *)(param_1 + 0x38) - uStack_d0;
    uStack_98 = *(long *)(param_1 + 0x40) - uStack_d0;
    uStack_90 = *(long *)(param_1 + 0x48) - uStack_d0;
    uStack_a0 = *(long *)(param_1 + 0x50) - uStack_d0;
    uStack_a8 = *(long *)(param_1 + 0x58) - uStack_d0;
    uStack_b8 = *(long *)(param_1 + 0x60) - uStack_d0;
    uStack_b0 = *(long *)(param_1 + 0x68) - uStack_d0;
    uStack_c8 = *(long *)(param_1 + 0x70) - uStack_d0;
    uStack_c0 = *(long *)(param_1 + 0x78) - uStack_d0;
    uStack_d8 = *(long *)(param_1 + 0x80) - uStack_d0;
    uStack_f0 = *(undefined8 *)(param_1 + 0x90);
    uStack_d0 = *(long *)(param_1 + 0x88) - uStack_d0;
    bVar1 = *(byte *)(param_1 + 8);
    uStack_dc = *(undefined4 *)(param_1 + 0x10);
    uStack_e0 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    _objc_retain(uVar4);
    bVar2 = *(byte *)(param_1 + 9);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(uVar5);
  }
  _objc_release(param_1);
  FUN_105477ae0(uStack_70,uStack_78,uStack_80,0,uStack_88,uStack_98,uStack_90,uStack_a0,uStack_a8,
                uStack_b8,uStack_b0,uStack_c8,uStack_c0,uStack_d8,uStack_d0,bVar1 & 1,uStack_dc,
                uStack_f0,uStack_e0,uVar3,uVar4,bVar2 & 1);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_70);
  return;
}



/* Entry: 105471b50; end: 105471bcf; -[SCAdWebviewMetricsValidator _validateAdTrackRequest:errorMsg:] */

undefined8
FUN_105471b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bee7d00(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bee7ce0(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105471bd0; end: 105471d53; -[SCAdWebviewMetricsValidator _validateTrackRequestIntermediateTrack:errorMsg:] */

undefined8 FUN_105471bd0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bfb1ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c296d80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_3;
    func_0x00010bfb1ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf3ff60();
    if ((uVar4 == 0) &&
       (uVar7 = param_1, func_0x00010bee7cc0(param_1,param_2,param_3), (int)uVar7 == 0)) {
      uVar4 = param_3;
      func_0x00010bf42b40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c265420();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c296d80();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar6 & 1) == 0) {
        func_0x00010be540c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddfe58,param_4
                           );
        uVar7 = 0;
        goto LAB_105471cb0;
      }
    }
    else {
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  uVar7 = 1;
LAB_105471cb0:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105471d54; end: 10547202f; -[SCAdWebviewMetricsValidator _validateTrackRequestForStoryIntermediateTrack:] */

undefined *
FUN_105471d54(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x23;
  long lVar17;
  undefined8 *unaff_x24;
  undefined8 *puVar18;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined *puVar19;
  long unaff_x28;
  undefined8 *puStack_350;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [128];
  undefined1 auStack_230 [128];
  long lStack_1b0;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
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
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar14 = param_3;
  func_0x00010bfb1ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bfea8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar16;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar16);
  _objc_release(puVar14);
  if (puVar1 == (undefined8 *)0x0) {
    puVar19 = (undefined *)0x1;
    puVar16 = (undefined8 *)0x0;
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
    puVar2 = param_3;
    func_0x00010bfb1ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010bfea8e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar16;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = unaff_x23;
    func_0x00010c241580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    _objc_release(puVar16);
    _objc_release(puVar2);
    puVar2 = &uStack_130;
    param_4 = auStack_f0;
    puVar1 = puVar14;
    func_0x00010bf52a60();
    puVar19 = (undefined *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      unaff_x28 = *plStack_120;
      puStack_138 = param_3;
      do {
        puVar13 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(puVar14);
          }
          puVar16 = *(undefined8 **)(lStack_128 + (long)puVar13 * 8);
          puVar3 = puVar16;
          func_0x00010bef60a0();
          puVar18 = unaff_x24;
          if ((int)puVar3 == 3) {
            unaff_x23 = puVar16;
            func_0x00010bf054e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x23;
            func_0x00010bf42b40();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010c265420();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c296d80();
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
            puVar18 = unaff_x24;
            if (((ulong)unaff_x26 & 1) == 0) goto LAB_105471ef8;
LAB_105471fd0:
            puVar19 = (undefined *)0x1;
            param_3 = puStack_138;
            goto LAB_105471fd8;
          }
LAB_105471ef8:
          puVar3 = puVar16;
          func_0x00010bef60a0();
          unaff_x24 = puVar18;
          if ((int)puVar3 == 10) {
            unaff_x23 = puVar16;
            func_0x00010bf67c00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x23;
            func_0x00010bf68440();
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x24 == (undefined8 *)0x0) {
              _objc_release(unaff_x23);
              unaff_x24 = puVar18;
            }
            else {
              func_0x00010bf67c00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = puVar16;
              func_0x00010bf42b40();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = unaff_x25;
              func_0x00010c265420();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = unaff_x26;
              func_0x00010c296d80();
              _objc_release(unaff_x26);
              _objc_release(unaff_x25);
              _objc_release(puVar16);
              _objc_release(unaff_x24);
              _objc_release(unaff_x23);
              if (((ulong)unaff_x27 & 1) != 0) goto LAB_105471fd0;
            }
          }
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar1 != puVar13);
        puVar2 = &uStack_130;
        param_4 = auStack_f0;
        puVar1 = puVar14;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
      puVar19 = (undefined *)0x0;
      param_3 = puStack_138;
    }
LAB_105471fd8:
    _objc_release(puVar14);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar19;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105472030;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar16;
  puStack_168 = puVar19;
  puStack_160 = puVar14;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(param_4);
  puVar14 = puVar2;
  func_0x00010bf93ca0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar14 != (undefined8 *)0x0) {
    puVar16 = puVar2;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar16;
    func_0x00010c08fa60();
    _objc_release(puVar16);
    _objc_release(puVar14);
    if (puVar13 != (undefined8 *)0x0) {
      puVar19 = (undefined *)0x1;
      goto LAB_1054720ec;
    }
  }
  func_0x00010be540c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddfe78,param_4);
  puVar19 = (undefined *)0x0;
LAB_1054720ec:
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  puVar16 = puVar2;
  func_0x00010c06a480();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = &uStack_2f0;
  puVar10 = auStack_230;
  puStack_350 = puVar16;
  func_0x00010bf52a60();
  if (puStack_350 != (undefined8 *)0x0) {
    lVar11 = *plStack_2e0;
    do {
      puVar14 = (undefined8 *)0x0;
      do {
        if (*plStack_2e0 != lVar11) {
          _objc_enumerationMutation(puVar16);
        }
        lVar4 = *(long *)(lStack_2e8 + (long)puVar14 * 8);
        lStack_328 = 0;
        uStack_330 = 0;
        uStack_318 = 0;
        plStack_320 = (long *)0x0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        uStack_300 = 0;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar12 = *plStack_320;
          do {
            lVar15 = 0;
            do {
              if (*plStack_320 != lVar12) {
                _objc_enumerationMutation(lVar4);
              }
              lVar17 = *(long *)(lStack_328 + lVar15 * 8);
              lVar6 = lVar17;
              func_0x00010bf939a0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar6 == 0) {
LAB_10547220c:
                func_0x00010be540c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddfe98,
                                    param_4);
                puVar19 = (undefined *)0x0;
              }
              else {
                lVar7 = lVar17;
                func_0x00010bf939a0();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c08fa60();
                _objc_release(lVar7);
                _objc_release(lVar6);
                if (lVar8 == 0) goto LAB_10547220c;
              }
              lVar6 = lVar17;
              func_0x00010bfd7e40();
              if ((int)lVar6 == 0) {
LAB_10547224c:
                func_0x00010be540c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddfeb8,
                                    param_4);
                puVar19 = (undefined *)0x0;
              }
              else {
                lVar6 = lVar17;
                func_0x00010bfea8e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar6 == 0) goto LAB_10547224c;
              }
              lVar6 = lVar17;
              func_0x00010bfdbee0();
              if ((int)lVar6 == 0) {
LAB_1054722d0:
                func_0x00010be540c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddfed8,
                                    param_4);
                puVar19 = (undefined *)0x0;
              }
              else {
                lVar6 = lVar17;
                func_0x00010c15ffa0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar6 == 0) goto LAB_1054722d0;
                lVar7 = lVar17;
                func_0x00010c15ffa0();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c296d80();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar8;
                func_0x00010c08fa60();
                _objc_release(lVar8);
                _objc_release(lVar7);
                _objc_release(lVar6);
                if (lVar9 == 0) goto LAB_1054722d0;
              }
              lVar6 = lVar17;
              func_0x00010bfdd8a0();
              if ((int)lVar6 == 0) {
LAB_10547233c:
                func_0x00010be540c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddfef8,
                                    param_4);
                puVar19 = (undefined *)0x0;
              }
              else {
                lVar6 = lVar17;
                func_0x00010c278820();
                _objc_retainAutoreleasedReturnValue();
                if (lVar6 == 0) goto LAB_10547233c;
                lVar7 = lVar17;
                func_0x00010c278820();
                _objc_retainAutoreleasedReturnValue();
                lVar8 = lVar7;
                func_0x00010c296d80();
                _objc_release(lVar7);
                _objc_release(lVar6);
                if ((int)lVar8 < 0) goto LAB_10547233c;
              }
              lVar6 = lVar17;
              func_0x00010c15ed20();
              _objc_retainAutoreleasedReturnValue();
              if (lVar6 == 0) {
LAB_10547239c:
                func_0x00010be540c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddff18,
                                    param_4);
                puVar19 = (undefined *)0x0;
              }
              else {
                func_0x00010c15ed20();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar17;
                func_0x00010c08fa60();
                _objc_release(lVar17);
                _objc_release(lVar6);
                if (lVar7 == 0) goto LAB_10547239c;
              }
              lVar15 = lVar15 + 1;
            } while (lVar5 != lVar15);
            lVar5 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_330,auStack_2b0,0x10);
          } while (lVar5 != 0);
        }
        _objc_release(lVar4);
        puVar14 = (undefined8 *)((long)puVar14 + 1);
      } while (puVar14 != puStack_350);
      puVar14 = &uStack_2f0;
      puVar10 = auStack_230;
      puStack_350 = puVar16;
      func_0x00010bf52a60();
    } while (puStack_350 != (undefined8 *)0x0);
  }
  _objc_release(puVar16);
  _objc_release(param_4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    _objc_retain(puVar14);
    func_0x00010be59e20(puVar2,param_2,puVar14);
    puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ddff38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    func_0x00010bf070e0(puVar10,param_2,puVar19);
    _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar19);
    return puVar19;
  }
  return puVar19;
}



/* Entry: 105472030; end: 105472467; -[SCAdWebviewMetricsValidator _validateTrackRequestP0Fields:errorMsg:] */

undefined * FUN_105472030(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lStack_210;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf93ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar10 = param_3;
    func_0x00010bf93ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010c08fa60();
    _objc_release(lVar10);
    _objc_release(lVar1);
    if (lVar12 != 0) {
      puVar15 = (undefined *)0x1;
      goto LAB_1054720ec;
    }
  }
  func_0x00010be540c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddfe78,param_4);
  puVar15 = (undefined *)0x0;
LAB_1054720ec:
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar1 = param_3;
  func_0x00010c06a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_1b0;
  puVar9 = auStack_f0;
  lStack_210 = lVar1;
  func_0x00010bf52a60();
  if (lStack_210 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar12 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar11 = *plStack_1e0;
          do {
            lVar13 = 0;
            do {
              if (*plStack_1e0 != lVar11) {
                _objc_enumerationMutation(lVar2);
              }
              lVar14 = *(long *)(lStack_1e8 + lVar13 * 8);
              lVar4 = lVar14;
              func_0x00010bf939a0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar4 == 0) {
LAB_10547220c:
                func_0x00010be540c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddfe98
                                    ,param_4);
                puVar15 = (undefined *)0x0;
              }
              else {
                lVar5 = lVar14;
                func_0x00010bf939a0();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x00010c08fa60();
                _objc_release(lVar5);
                _objc_release(lVar4);
                if (lVar6 == 0) goto LAB_10547220c;
              }
              lVar4 = lVar14;
              func_0x00010bfd7e40();
              if ((int)lVar4 == 0) {
LAB_10547224c:
                func_0x00010be540c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddfeb8
                                    ,param_4);
                puVar15 = (undefined *)0x0;
              }
              else {
                lVar4 = lVar14;
                func_0x00010bfea8e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar4 == 0) goto LAB_10547224c;
              }
              lVar4 = lVar14;
              func_0x00010bfdbee0();
              if ((int)lVar4 == 0) {
LAB_1054722d0:
                func_0x00010be540c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddfed8
                                    ,param_4);
                puVar15 = (undefined *)0x0;
              }
              else {
                lVar4 = lVar14;
                func_0x00010c15ffa0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar4 == 0) goto LAB_1054722d0;
                lVar5 = lVar14;
                func_0x00010c15ffa0();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x00010c296d80();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010c08fa60();
                _objc_release(lVar6);
                _objc_release(lVar5);
                _objc_release(lVar4);
                if (lVar7 == 0) goto LAB_1054722d0;
              }
              lVar4 = lVar14;
              func_0x00010bfdd8a0();
              if ((int)lVar4 == 0) {
LAB_10547233c:
                func_0x00010be540c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddfef8
                                    ,param_4);
                puVar15 = (undefined *)0x0;
              }
              else {
                lVar4 = lVar14;
                func_0x00010c278820();
                _objc_retainAutoreleasedReturnValue();
                if (lVar4 == 0) goto LAB_10547233c;
                lVar5 = lVar14;
                func_0x00010c278820();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x00010c296d80();
                _objc_release(lVar5);
                _objc_release(lVar4);
                if ((int)lVar6 < 0) goto LAB_10547233c;
              }
              lVar4 = lVar14;
              func_0x00010c15ed20();
              _objc_retainAutoreleasedReturnValue();
              if (lVar4 == 0) {
LAB_10547239c:
                func_0x00010be540c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddff18
                                    ,param_4);
                puVar15 = (undefined *)0x0;
              }
              else {
                func_0x00010c15ed20();
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar14;
                func_0x00010c08fa60();
                _objc_release(lVar14);
                _objc_release(lVar4);
                if (lVar5 == 0) goto LAB_10547239c;
              }
              lVar13 = lVar13 + 1;
            } while (lVar3 != lVar13);
            lVar3 = lVar2;
            func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar12 = lVar12 + 1;
      } while (lVar12 != lStack_210);
      puVar8 = &uStack_1b0;
      puVar9 = auStack_f0;
      lStack_210 = lVar1;
      func_0x00010bf52a60();
    } while (lStack_210 != 0);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar15;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar8);
  func_0x00010be59e20(param_3,param_2,puVar8);
  puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ddff38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010bf070e0(puVar9,param_2,puVar15);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return puVar15;
}



/* Entry: 105472468; end: 1054724fb; -[SCAdWebviewMetricsValidator _logGrapheneAndUpdateErrMsg:errorMsg:] */

void FUN_105472468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be59e20(param_1,param_2,param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ddff38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf070e0(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054724fc; end: 105472583; -[SCAdWebviewMetricsValidator _logTrackRequestNullFieldMetric:] */

void FUN_1054724fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9448;
  _objc_retain(param_3);
  func_0x00010c278620(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105472584; end: 10547297f; -[SCAdWebviewMetricsValidator _validateSwipeUp:adIdentifier:adType:] */

undefined **
FUN_105472584(undefined *param_1,undefined8 param_2,undefined **param_3,undefined *param_4,
             undefined *param_5)

{
  uint uVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined *puVar30;
  uint uVar31;
  undefined *puVar32;
  bool bVar33;
  ulong uVar34;
  uint uVar35;
  uint uVar36;
  undefined *unaff_x23;
  undefined **ppuVar37;
  uint uVar38;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_288;
  undefined *puStack_278;
  undefined *puStack_268;
  uint uStack_254;
  undefined *puStack_248;
  undefined *puStack_240;
  uint uStack_224;
  undefined *puStack_220;
  uint uStack_218;
  uint uStack_214;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  uint uStack_1f8;
  uint uStack_1ec;
  uint uStack_1e8;
  undefined *puStack_1e0;
  long alStack_1c0 [2];
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar28 = param_3;
  puVar9 = param_4;
  puVar17 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar30 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((((param_3 != (undefined **)0x0) && ((int)param_5 == 4)) && (((ulong)param_3[1] & 1) == 0)) &&
     (((((0 < (long)param_3[8] || (0 < (long)param_3[0xf])) ||
        ((0 < (long)param_3[0x10] ||
         ((0 < (long)param_3[9] || ((*(byte *)((long)param_3 + 10) & 1) != 0)))))) ||
       ((*(byte *)((long)param_3 + 0xb) & 1) != 0)) ||
      (((*(byte *)((long)param_3 + 0xc) & 1) != 0 || (*(char *)((long)param_3 + 0xd) == '\x01'))))))
  {
    ppuVar28 = param_3;
    FUN_1054718f8();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = param_4;
    ppuStack_148 = ppuVar28;
    func_0x00010c14de00(puVar30,param_2,&PTR____CFConstantStringClassReference_110ddff58);
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar30;
    _objc_release(ppuVar28);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b3e90;
    func_0x00010befdee0(PTR_PTR_1126b3e90,param_2,0xf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(uVar8,param_2,0,puVar9,puVar30,
                        &PTR____CFConstantStringClassReference_110ddff78);
    _objc_release(puVar9);
    _objc_release(uVar8);
    uStack_138 = *(undefined8 *)(param_1 + 0x38);
    ppuStack_110 = &PTR____CFConstantStringClassReference_110ddffb8;
    puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_3 + 1));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_108 = &PTR____CFConstantStringClassReference_110ddffd8;
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_120 = puVar30;
    puStack_c0 = puVar30;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3[8]);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_100 = &PTR____CFConstantStringClassReference_110ddfff8;
    puVar30 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_128 = puVar9;
    puStack_b8 = puVar9;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3[0xf]);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110de0018;
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_130 = puVar30;
    puStack_b0 = puVar30;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3[0x10]);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110de0038;
    unaff_x27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_140 = puVar9;
    puStack_a8 = puVar9;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3[9]);
    _objc_retainAutoreleasedReturnValue();
    param_5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110de0058;
    unaff_x28 = param_3[0x14];
    puStack_a0 = unaff_x27;
    _objc_retain(unaff_x28);
    puVar30 = unaff_x28;
    func_0x00010bf529e0(unaff_x28);
    func_0x00010c0df840(param_5,param_2,puVar30);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110de0078;
    unaff_x25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_98 = param_5;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined1 *)((long)param_3 + 10));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110de0098;
    param_1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_90 = unaff_x25;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined1 *)((long)param_3 + 0xb));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110de00b8;
    unaff_x23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_88 = param_1;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined1 *)((long)param_3 + 0xc));
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110de00d8;
    unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = unaff_x23;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined1 *)((long)param_3 + 0xd));
    _objc_retainAutoreleasedReturnValue();
    puVar17 = (undefined *)0xa;
    unaff_x26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = unaff_x24;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_c0,&ppuStack_110);
    _objc_retainAutoreleasedReturnValue();
    ppuVar28 = &PTR____CFConstantStringClassReference_110ddff98;
    puVar9 = unaff_x26;
    func_0x00010bf06b40(uStack_138);
    _objc_release(unaff_x26);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(param_1);
    _objc_release(unaff_x25);
    _objc_release(param_5);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(puStack_140);
    _objc_release(puStack_130);
    _objc_release(puStack_128);
    _objc_release(puStack_120);
    _objc_release(puStack_118);
  }
  _objc_release(param_4);
  ppuVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_105472980;
  puStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  puStack_180 = param_1;
  puStack_178 = param_5;
  puStack_170 = param_4;
  ppuStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar17);
  _objc_retain(ppuVar28);
  if (ppuVar28 == (undefined **)0x0) {
    puStack_200 = (undefined *)0x0;
    puStack_278 = (undefined *)0x0;
    puStack_288 = (undefined *)0x0;
    uStack_214 = 0;
    puStack_1e0 = (undefined *)0x0;
    puVar30 = (undefined *)0x0;
    uStack_1f8 = 0;
    uStack_1e8 = 0;
    uStack_254 = 0;
    uStack_218 = 0;
    bVar33 = false;
    puStack_248 = (undefined *)0x0;
    puStack_240 = (undefined *)0x0;
    puStack_210 = (undefined *)0x0;
    puStack_268 = (undefined *)0x0;
    ppuVar37 = (undefined **)0x0;
    uVar18 = 1;
    uStack_1ec = 1;
  }
  else {
    uStack_254 = (uint)*(byte *)((long)ppuVar28 + 0xe);
    puVar30 = ppuVar28[4];
    puStack_1e0 = ppuVar28[6];
    puStack_248 = ppuVar28[7];
    puStack_240 = ppuVar28[9];
    puStack_288 = ppuVar28[10];
    puStack_210 = ppuVar28[0xb];
    puStack_278 = ppuVar28[0xd];
    puStack_268 = ppuVar28[0xf];
    puStack_200 = ppuVar28[0x10];
    ppuVar37 = (undefined **)ppuVar28[0x13];
    bVar33 = 0 < (long)ppuVar28[5];
    uStack_218 = (uint)(0 < (long)ppuVar28[0x12]);
    uStack_1f8 = (uint)(0 < *(int *)((long)ppuVar28 + 0x14));
    uStack_214 = (uint)(0 < (long)ppuVar28[8]);
    uStack_1e8 = (uint)*(byte *)(ppuVar28 + 1);
    uStack_1ec = (uint)(*(int *)(ppuVar28 + 2) < 1 | *(byte *)(ppuVar28 + 1));
    uVar18 = (uint)(*(int *)(ppuVar28 + 3) < 1);
  }
  _objc_retain(ppuVar37);
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar37 != (undefined **)0x0) {
    ppuVar2 = ppuVar37;
  }
  _objc_retain();
  _objc_release(ppuVar37);
  if (ppuVar28 == (undefined **)0x0) {
    _objc_retain(0);
    puStack_220 = (undefined *)0x0;
    puStack_208 = (undefined *)0x0;
    uStack_224 = 0;
  }
  else {
    puStack_208 = ppuVar28[0x14];
    _objc_retain();
    puStack_220 = ppuVar28[0xc];
    uStack_224 = (uint)*(byte *)((long)ppuVar28 + 9);
  }
  _objc_release(ppuVar28);
  if (((long)puVar30 < 1) &&
     (ppuVar28 = ppuVar10, func_0x00010be43fa0(), ((ulong)ppuVar28 & 1) == 0)) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de00f8);
    uVar35 = 0;
  }
  else {
    uVar35 = 1;
  }
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010c29d2a0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar35);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  if (bVar33) {
    ppuVar28 = (undefined **)0x1;
  }
  else {
    ppuVar28 = ppuVar10;
    func_0x00010be43fa0(ppuVar10);
  }
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010c0fef20(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(ulong)puVar9 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  uVar4 = uStack_1e8 ^ 1;
  uVar19 = (uint)(0 < (long)puStack_1e0);
  if ((uVar4 & 1) == 0 && uVar19 == 0) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0118);
  }
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010bf3c960(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4 & 1 | uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(ulong)puVar9 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  uVar26 = (uint)((long)puStack_1e0 < 1);
  uVar3 = uVar26;
  if ((long)puStack_248 < 1) {
    uVar3 = 1;
  }
  if ((long)puStack_1e0 <= (long)puStack_248) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0138);
  }
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010bf0d200(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(ulong)puVar9 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  uVar1 = uStack_1e8 & uStack_218;
  uVar5 = uVar1 & uStack_1f8 ^ 1;
  if (uVar5 == 0 && uStack_214 == 0) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0158);
  }
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010c0d5e80(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5 | uStack_214);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(ulong)puVar9 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  if (((uVar1 & 0 < (long)puStack_200) == 1) &&
     (((long)puStack_268 < 1 || ((long)puStack_200 <= (long)puStack_268)))) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0178);
    uVar36 = 0;
  }
  else {
    uVar36 = 1;
  }
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010bf87c60(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar36);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  uVar1 = uVar1 ^ 1;
  uVar20 = (uint)((long)puStack_288 < 1);
  uVar23 = (uint)(0 < (long)puStack_200 && (long)puStack_200 <= (long)puStack_288);
  if ((uVar1 == 0 && uVar20 == 0) && uVar23 == 0) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0178);
  }
  uVar21 = (uint)((long)puStack_1e0 < 1);
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010bf87b00(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1 | uVar20 | uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = (ulong)puVar9 & 0xffffffff;
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010c0f2aa0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1 | uVar20 | uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010c0d5e60(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1 | uVar20 | uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  uVar6 = uStack_1e8 ^ 1;
  uVar24 = (uint)(0 < (long)puStack_210);
  if (((uVar6 & 1) == 0 && uVar21 == 0) && uVar24 == 0) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0198);
  }
  puVar27 = ppuVar10[3];
  puVar11 = PTR_PTR_1126b9448;
  func_0x00010bf83c00(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6 & 1 | uVar21 | uVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar14;
  func_0x00010c2ac460(puVar14,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  if ((((long)puStack_278 < 1) || ((long)puStack_278 <= (long)puVar30)) &&
     (ppuVar28 = ppuVar10, func_0x00010be43fa0(), ((ulong)ppuVar28 & 1) == 0)) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de01b8);
    uVar31 = 0;
  }
  else {
    uVar31 = 1;
  }
  puVar29 = ppuVar10[3];
  puVar30 = PTR_PTR_1126b9448;
  func_0x00010bf9b460(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar30;
  func_0x00010c2ac460(puVar30,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar29,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar30);
  if ((uStack_1ec & 1) == 0) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de01d8);
  }
  puVar29 = ppuVar10[3];
  puVar30 = PTR_PTR_1126b9448;
  func_0x00010c265480(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_1ec & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar30;
  func_0x00010c2ac460(puVar30,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar29,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar30);
  uStack_254 = uVar4 | uStack_254;
  if ((uStack_254 & 1) == 0 && uStack_218 == 0) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de01f8);
  }
  puVar29 = ppuVar10[3];
  puVar30 = PTR_PTR_1126b9448;
  func_0x00010bf1fe20(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uStack_254 & 1 | uStack_218);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar30;
  func_0x00010c2ac460(puVar30,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar29,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar30);
  uVar18 = uStack_214 ^ 1 | uVar18 | uStack_1f8;
  if (uVar18 == 0) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0218);
  }
  puVar29 = ppuVar10[3];
  puVar30 = PTR_PTR_1126b9448;
  func_0x00010c09bfc0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar30;
  func_0x00010c2ac460(puVar30,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar29,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar30);
  if ((long)puStack_240 < 1) {
    uVar26 = 1;
  }
  if ((long)puStack_1e0 < (long)puStack_240) {
    uVar26 = 1;
  }
  if (uVar26 == 0) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0238);
  }
  puVar29 = ppuVar10[3];
  puVar30 = PTR_PTR_1126b9448;
  func_0x00010bf260c0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar30;
  func_0x00010c2ac460(puVar30,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar29,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar30);
  bVar33 = ((long)puStack_1e0 < 1 || (long)puStack_210 < 1) || (long)puStack_1e0 < (long)puStack_210
  ;
  if (((long)puStack_1e0 >= 1 && (long)puStack_210 >= 1) && (long)puStack_210 <= (long)puStack_1e0)
  {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0258);
  }
  puVar29 = ppuVar10[3];
  puVar30 = PTR_PTR_1126b9448;
  func_0x00010bf260a0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar33);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar30;
  func_0x00010c2ac460(puVar30,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar13;
  func_0x00010c2ac460(puVar13,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar29,param_2,puVar16);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar30);
  alStack_1c0[0] = 0;
  uVar38 = 1;
  puVar30 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110de0278,1,alStack_1c0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = alStack_1c0[0];
  _objc_retain(alStack_1c0[0]);
  ppuVar28 = ppuVar2;
  func_0x00010c08fa60(ppuVar2);
  puVar11 = puVar30;
  func_0x00010c0c1b40(puVar30,param_2,ppuVar2,1,0,ppuVar28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  if ((uStack_1e8 & uStack_1f8) != 0) {
    if ((lVar7 == 0) && (puVar12 = puVar11, func_0x00010bf529e0(), puVar12 != (undefined *)0x0)) {
      uVar38 = 1;
    }
    else {
      func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de0298);
      uVar38 = 0;
    }
  }
  puVar32 = ppuVar10[3];
  puVar12 = PTR_PTR_1126b9448;
  func_0x00010c291280(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar38);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar16;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar32,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar29);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  puVar12 = puStack_208;
  func_0x00010bf529e0();
  uStack_224 = uStack_224 ^ 1;
  uVar25 = (uint)((long)puStack_1e0 < (long)puStack_220);
  uVar22 = (uint)(puVar12 == (undefined *)0x0);
  if (uVar22 == 0 && ((uStack_224 & 1) == 0 && uVar25 == 0)) {
    func_0x00010bf070e0(puVar17,param_2,&PTR____CFConstantStringClassReference_110de02b8);
  }
  puVar27 = ppuVar10[3];
  puVar12 = PTR_PTR_1126b9448;
  func_0x00010bfac200(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar22 | uStack_224 & 1 | uVar25)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar12;
  func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar16;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar15;
  func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(puVar27,param_2,puVar29);
  _objc_release(puVar29);
  _objc_release(puVar9);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar30);
  _objc_release(lVar7);
  _objc_release(puStack_208);
  _objc_release(puVar17);
  return (undefined **)
         (ulong)((uint)bVar33 & uVar26 & uVar18 & (uStack_254 | uStack_218) & uStack_1ec &
                 (uVar6 | uVar21 | uVar24) & (uVar1 | uVar20 | uVar23) & uVar31 &
                 (uVar5 | uStack_214) & uVar36 & uVar3 & (uVar4 | uVar19) & uVar35 & uVar38 &
                (uVar22 | uStack_224 | uVar25));
}



/* Entry: 105472980; end: 105474113; -[SCAdWebviewMetricsValidator _validateMetrics:adType:errorMsg:] */

byte FUN_105472980(ulong param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  undefined **ppuVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  bool bVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  bool bVar32;
  undefined8 uVar33;
  ulong uVar34;
  long lVar35;
  byte bVar36;
  bool bVar37;
  byte bVar38;
  byte bVar39;
  undefined **ppuVar40;
  byte bVar41;
  long lStack_138;
  long lStack_128;
  long lStack_118;
  long lStack_f8;
  long lStack_f0;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_90;
  long alStack_70 [2];
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  if (param_3 == 0) {
    lStack_b0 = 0;
    lStack_128 = 0;
    lStack_138 = 0;
    bVar7 = false;
    lStack_90 = 0;
    lVar35 = 0;
    bVar6 = false;
    bVar15 = 0;
    bVar16 = 0;
    bVar5 = false;
    bVar37 = false;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_c0 = 0;
    lStack_118 = 0;
    ppuVar40 = (undefined **)0x0;
    bVar32 = true;
    bVar19 = 1;
  }
  else {
    bVar15 = *(byte *)(param_3 + 8);
    bVar16 = *(byte *)(param_3 + 0xe);
    lVar35 = *(long *)(param_3 + 0x20);
    lStack_90 = *(long *)(param_3 + 0x30);
    lStack_f8 = *(long *)(param_3 + 0x38);
    lStack_f0 = *(long *)(param_3 + 0x48);
    lStack_138 = *(long *)(param_3 + 0x50);
    lStack_c0 = *(long *)(param_3 + 0x58);
    lStack_128 = *(long *)(param_3 + 0x68);
    lStack_118 = *(long *)(param_3 + 0x78);
    lStack_b0 = *(long *)(param_3 + 0x80);
    ppuVar40 = *(undefined ***)(param_3 + 0x98);
    bVar37 = 0 < *(long *)(param_3 + 0x28);
    bVar5 = 0 < *(long *)(param_3 + 0x90);
    bVar6 = 0 < *(int *)(param_3 + 0x14);
    bVar7 = 0 < *(long *)(param_3 + 0x40);
    bVar19 = *(int *)(param_3 + 0x10) < 1 | bVar15;
    bVar32 = *(int *)(param_3 + 0x18) < 1;
  }
  _objc_retain(ppuVar40);
  ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar40 != (undefined **)0x0) {
    ppuVar10 = ppuVar40;
  }
  _objc_retain();
  _objc_release(ppuVar40);
  if (param_3 == 0) {
    _objc_retain(0);
    lStack_d0 = 0;
    lStack_b8 = 0;
    bVar17 = 0;
  }
  else {
    lStack_b8 = *(long *)(param_3 + 0xa0);
    _objc_retain();
    lStack_d0 = *(long *)(param_3 + 0x60);
    bVar17 = *(byte *)(param_3 + 9);
  }
  _objc_release(param_3);
  if ((lVar35 < 1) && (uVar34 = param_1, func_0x00010be43fa0(), (uVar34 & 1) == 0)) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de00f8);
    bVar38 = 0;
  }
  else {
    bVar38 = 1;
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010c29d2a0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar38);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  if (bVar37) {
    uVar34 = 1;
  }
  else {
    uVar34 = param_1;
    func_0x00010be43fa0(param_1);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010c0fef20(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  bVar37 = 0 < lStack_90;
  bVar12 = bVar15 ^ 1;
  if ((bVar12 & 1) == 0 && !bVar37) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0118);
  }
  bVar2 = lStack_90 < 1;
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010bf3c960(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar12 & 1 | bVar37);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  bVar11 = lStack_90 <= lStack_f8 || (lStack_f8 < 1 || bVar2);
  if (lStack_90 > lStack_f8 && (lStack_f8 >= 1 && !bVar2)) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0138);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010bf0d200(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  bVar9 = bVar15 & bVar5;
  bVar13 = bVar9 & bVar6 ^ 1;
  if (bVar13 == 0 && bVar7 == false) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0158);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010c0d5e80(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar13 | bVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  if (((bVar9 & 0 < lStack_b0) == 1) && ((lStack_118 < 1 || (lStack_b0 <= lStack_118)))) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0178);
    bVar39 = 0;
  }
  else {
    bVar39 = 1;
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010bf87c60(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar39);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  bVar3 = lStack_138 < 1;
  bVar9 = bVar9 ^ 1;
  bVar1 = 0 < lStack_b0 && lStack_b0 <= lStack_138;
  if ((bVar9 == 0 && !bVar3) && (0 >= lStack_b0 || lStack_b0 > lStack_138)) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0178);
  }
  bVar4 = lStack_90 < 1;
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010bf87b00(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar9 | bVar3 | bVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_4 & 0xffffffff;
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010c0f2aa0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar9 | bVar3 | bVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010c0d5e60(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar9 | bVar3 | bVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  bVar14 = bVar15 ^ 1;
  bVar8 = 0 < lStack_c0;
  if (((bVar14 & 1) == 0 && !bVar4) && !bVar8) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0198);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010bf83c00(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar14 & 1 | bVar4 | bVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  if (((lStack_128 < 1) || (lStack_128 <= lVar35)) &&
     (uVar28 = param_1, func_0x00010be43fa0(), (uVar28 & 1) == 0)) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de01b8);
    bVar36 = 0;
  }
  else {
    bVar36 = 1;
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010bf9b460(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar36);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  if ((bVar19 & 1) == 0) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de01d8);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010c265480(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar19 & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  bVar16 = bVar12 | bVar16;
  if ((bVar16 & 1) == 0 && bVar5 == false) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de01f8);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010bf1fe20(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar16 & 1 | bVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  bVar18 = bVar7 ^ 1U | bVar32 | bVar6;
  if (bVar18 == 0) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0218);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010c09bfc0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  bVar32 = lStack_90 < lStack_f0 || (lStack_f0 < 1 || bVar2);
  if (lStack_90 >= lStack_f0 && (lStack_f0 >= 1 && !bVar2)) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0238);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010bf260c0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar32);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  bVar2 = (lStack_90 < 1 || lStack_c0 < 1) || lStack_90 < lStack_c0;
  if ((lStack_90 >= 1 && lStack_c0 >= 1) && lStack_c0 <= lStack_90) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0258);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar21 = PTR_PTR_1126b9448;
  func_0x00010bf260a0(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar22;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar21;
  func_0x00010c2ac460(puVar21,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar24;
  func_0x00010c2ac460(puVar24,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar26);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar27);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  alStack_70[0] = 0;
  bVar41 = 1;
  puVar21 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110de0278,1,alStack_70);
  _objc_retainAutoreleasedReturnValue();
  lVar35 = alStack_70[0];
  _objc_retain(alStack_70[0]);
  ppuVar40 = ppuVar10;
  func_0x00010c08fa60(ppuVar10);
  puVar22 = puVar21;
  func_0x00010c0c1b40(puVar21,param_2,ppuVar10,1,0,ppuVar40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  if ((bVar15 & bVar6) != 0) {
    if ((lVar35 == 0) && (puVar23 = puVar22, func_0x00010bf529e0(), puVar23 != (undefined *)0x0)) {
      bVar41 = 1;
    }
    else {
      func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de0298);
      bVar41 = 0;
    }
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar23 = PTR_PTR_1126b9448;
  func_0x00010c291280(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar41);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar23;
  func_0x00010c2ac460(puVar23,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar34);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar26;
  func_0x00010c2ac460(puVar26,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar30);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  lVar31 = lStack_b8;
  func_0x00010bf529e0();
  bVar20 = lVar31 == 0;
  bVar17 = bVar17 ^ 1;
  bVar6 = lStack_90 < lStack_d0;
  if (!bVar20 && ((bVar17 & 1) == 0 && !bVar6)) {
    func_0x00010bf070e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de02b8);
  }
  uVar33 = *(undefined8 *)(param_1 + 0x18);
  puVar23 = PTR_PTR_1126b9448;
  func_0x00010bfac200(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar20 | bVar17 & 1 | bVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar24;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar23;
  func_0x00010c2ac460(puVar23,param_2,&PTR____CFConstantStringClassReference_110ddd998,puVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar26;
  func_0x00010c2ac460(puVar26,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar33,param_2,puVar30);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(lVar35);
  _objc_release(lStack_b8);
  _objc_release(param_5);
  return bVar2 & bVar32 & bVar18 & (bVar16 | bVar5) & bVar19 &
         (bVar14 | bVar4 | bVar8) & (bVar9 | bVar3 | bVar1) & bVar36 &
         (bVar13 | bVar7) & bVar39 & bVar11 & (bVar12 | bVar37) & bVar38 & bVar41 &
         (bVar20 | bVar17 | bVar6);
}



/* Entry: 105474114; end: 1054741a3; -[SCAdWebviewMetricsValidator _isSponsoredSnapCTAAttachmentOrViewImpressionTrack] */

bool FUN_105474114(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c268d60();
  if (iVar3 != 10) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010c268d60();
    if (iVar3 != 0xb) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x40);
      func_0x00010c268d60();
      if (iVar3 != 0xf) {
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c268d60(uVar5);
        bVar2 = (int)uVar5 == 0x17;
        goto LAB_10547415c;
      }
    }
  }
  bVar2 = true;
LAB_10547415c:
  iVar3 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c268d60();
  iVar4 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c06a4a0();
  if (iVar3 == 0) {
    bVar2 = true;
  }
  bVar1 = false;
  if (iVar4 == 0x1c) {
    bVar1 = bVar2;
  }
  return bVar1;
}



/* Entry: 1054741a4; end: 10547439f; -[SCAdWebviewMetricsValidator _validateRawTimingPayload:adType:errorMsg:] */

uint FUN_1054741a4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b9450;
  _objc_retain(param_3);
  func_0x00010c0f9860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uint)uVar3 != 0) {
    func_0x00010bf070e0(param_5);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR_PTR_1126b9448;
  func_0x00010c291280(PTR_PTR_1126b9448);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010c2ac460(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_5);
  return (uint)uVar3 ^ 1;
}



/* Entry: 1054743a0; end: 105474453; -[SCAdWebviewMetricsValidator _fileS2RWithErrorMsg:adIdentifier:adType:] */

void FUN_1054743a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110de0318);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3e90;
  func_0x00010befdee0(PTR_PTR_1126b3e90,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ad80(uVar2,param_2,0,puVar3,puVar1,&PTR____CFConstantStringClassReference_110de0338
                     );
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105474454; end: 1054744e3; -[SCAdWebviewMetricsValidator _resetWithCompletion:success:] */

void FUN_105474454(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,param_4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054744e4; end: 1054744eb; -[SCAdWebviewMetricsValidator trackRequest] */

undefined8 FUN_1054744e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1054744ec; end: 1054744f3; -[SCAdWebviewMetricsValidator mirrorRequest] */

undefined8 FUN_1054744ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1054744f4; end: 105474523; -[SCAdWebviewMetricsValidator setMirrorRequest:] */

void FUN_1054744f4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105474524; end: 10547452b; -[SCAdWebviewMetricsValidator lifecycleTimestamps] */

undefined8 FUN_105474524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10547452c; end: 105474533; -[SCAdWebviewMetricsValidator rawTimingPayload] */

undefined8 FUN_10547452c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105474534; end: 105474563; -[SCAdWebviewMetricsValidator setRawTimingPayload:] */

void FUN_105474534(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105474564; end: 10547456b; -[SCAdWebviewMetricsValidator adIdentifier] */

undefined8 FUN_105474564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10547456c; end: 105474573; -[SCAdWebviewMetricsValidator setAdIdentifier:] */

void FUN_10547456c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105474574; end: 10547457b; -[SCAdWebviewMetricsValidator trackEventSymbols] */

undefined8 FUN_105474574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10547457c; end: 105474617; -[SCAdWebviewMetricsValidator .cxx_destruct] */

void FUN_10547457c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105474618; end: 10547466b; -[SCAdsCommonSnapAdImpressionTrack topSnapFullyPresentTimestamp] */

undefined8 FUN_105474618(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfdd800();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c275c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 10547466c; end: 1054746bf; -[SCAdsCommonSnapAdImpressionTrack topSnapPlaybackBeginTimestamp] */

undefined8 FUN_10547466c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfdd820();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c275c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 1054746c0; end: 105474713; -[SCAdsCommonSnapAdImpressionTrack attachmentTriggerTimestamp] */

undefined8 FUN_1054746c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfd43e0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0d5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 105474714; end: 105474767; -[SCAdsCommonSnapAdImpressionTrack attachmentFullyPresentedTimestamp] */

undefined8 FUN_105474714(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfd43c0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0cea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 105474768; end: 1054747bb; -[SCAdsCommonSnapAdImpressionTrack attachmentDismissTimestamp] */

undefined8 FUN_105474768(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfd43a0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0cda0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 1054747bc; end: 10547480f; -[SCAdsCommonSnapAdImpressionTrack topsnapDismissTimestamp] */

undefined8 FUN_1054747bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfdd7e0();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c275ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return uVar1;
}



/* Entry: 105474810; end: 10547485b; -[SCAdsCommonSnapAdImpressionTrack swipeUp] */

void FUN_105474810(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfdd0e0();
  if ((int)uVar1 != 0) {
    func_0x00010c265420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10547485c; end: 1054748a7; -[SCAdsCommonSnapAdImpressionTrack swipeupCount] */

void FUN_10547485c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfdd060();
  if ((int)uVar1 != 0) {
    func_0x00010c264640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1054748a8; end: 10547490b; -[SCAdsCommonSnapAdImpressionTrack botViewTime] */

long FUN_1054748a8(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x00010bfd8c20();
  if ((int)uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c0b5500(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    lVar2 = (long)(param_1 * 1000.0);
    _objc_release(param_2);
  }
  return lVar2;
}



/* Entry: 10547490c; end: 105474967; -[SCAdsTrackRequest adType] */

undefined8 FUN_10547490c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfb1ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef60a0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105474968; end: 105474c37; -[SCAdsTrackRequest remoteWebviewImpressions:] */

void FUN_105474968(undefined **param_1,undefined **param_2,int param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_1;
  func_0x00010bef60a0();
  iVar1 = (int)ppuVar2;
  if (iVar1 == 4) {
    func_0x00010bfb1ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010bfea8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010c12a820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(ppuVar2);
    _objc_release(param_1);
    goto LAB_105474bfc;
  }
  if (iVar1 == 7) {
    ppuVar2 = param_1;
    func_0x00010bfb1ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010bfea8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c241580();
    _objc_retainAutoreleasedReturnValue();
    param_2 = &PTR___NSConcreteGlobalBlock_11088b7c8;
    ppuVar8 = ppuVar4;
    func_0x000100504554();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar6);
    _objc_release(ppuVar2);
    if (param_3 == 0) goto LAB_105474bfc;
    ppuVar2 = ppuVar8;
    func_0x00010bf529e0();
    func_0x00010bfb1ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_1;
    func_0x00010bfea8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c241580();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar8 = (undefined **)PTR____NSArray0__struct_11034ab48;
    if (iVar1 != 0x10) goto LAB_105474bfc;
    ppuVar2 = param_1;
    func_0x00010bfb1ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010bfea8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf3ff40();
    _objc_retainAutoreleasedReturnValue();
    param_2 = &PTR___NSConcreteGlobalBlock_11088b788;
    ppuVar8 = ppuVar4;
    func_0x000100504554();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar6);
    _objc_release(ppuVar2);
    if (param_3 == 0) goto LAB_105474bfc;
    ppuVar2 = ppuVar8;
    func_0x00010bf529e0();
    func_0x00010bfb1ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_1;
    func_0x00010bfea8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf3ff40();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar5 = ppuVar4;
  func_0x00010bf529e0();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar6);
  _objc_release(param_1);
  if (ppuVar2 != ppuVar5) {
    _objc_release(ppuVar8);
    ppuVar8 = (undefined **)PTR____NSArray0__struct_11034ab48;
  }
LAB_105474bfc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    ppuVar2 = param_2;
    func_0x00010c12a820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010bfde760();
    if ((int)ppuVar6 == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      ppuVar8 = param_2;
      func_0x00010c12a820(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 105474c38; end: 105474d27;  */

void FUN_105474c38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c12a820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde760();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c12a820(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105474d28; end: 105474e87; -[SCAdsTrackRequest commonSnapAdImpression] */

void FUN_105474d28(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  func_0x00010bef60a0();
  uVar4 = 0;
  iVar1 = (int)uVar2;
  if (iVar1 < 10) {
    if (iVar1 == 3) {
      func_0x00010bfb1ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bfea8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 4) goto LAB_105474e74;
      func_0x00010bfb1ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bfea8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c12a820();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_105474e48:
    uVar4 = uVar3;
    func_0x00010bf42b40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 == 10) {
      func_0x00010bfb1ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bfea8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105474e48;
    }
    if (iVar1 != 0x10) goto LAB_105474e74;
    func_0x00010bfb1ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c275c60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
LAB_105474e74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105474e88; end: 105474f07; -[SCAdsTrackRequest firstTrackItem] */

void FUN_105474e88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c06a480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c084fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105474f08; end: 105474f5f; -[SCAdsTrackRequest inventoryType] */

undefined8 FUN_105474f08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c06a480();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c06a4a0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105474f60; end: 105474fd3; -[SCAdsTrackRequest tapAttachmentSource] */

undefined8 FUN_105474f60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf42b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfdd0c0();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c264de0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = uVar2;
  func_0x00010c268d60(uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar1;
}


