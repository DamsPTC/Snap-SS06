/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c8a840; end: 108c8a86f; -[SCComponentManagerProxy connectedLensComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a840(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779500);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a870; end: 108c8a89f; -[SCComponentManagerProxy snapRecordingComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a870(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779504);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a8a0; end: 108c8a8cf; -[SCComponentManagerProxy metricsComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a8a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277950c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a8d0; end: 108c8a8ff; -[SCComponentManagerProxy remoteAssetsComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a8d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779510);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a900; end: 108c8a92f; -[SCComponentManagerProxy locationComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a900(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779514);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a930; end: 108c8a95f; -[SCComponentManagerProxy compassComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a930(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779518);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a960; end: 108c8a98f; -[SCComponentManagerProxy geoDataComponent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a960(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277951c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a990; end: 108c8a9bf; -[SCComponentManagerProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8a990(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779520);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8a9c0; end: 108c8aa23; -[SCComponentManagerProxy forwardInvocation:] */

void FUN_108c8a9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15ac20(param_3);
  func_0x00010bfb64a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c06ae40(param_3,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8aa24; end: 108c8aa2f; -[SCComponentManagerProxy methodSignatureForSelector:] */

void FUN_108c8aa24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126db560,PTR_s_instanceMethodSignatureForSelect_1125f78f8);
  return;
}



/* Entry: 108c8aa30; end: 108c8ab4f; -[SCComponentManagerProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8aa30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277951c,0);
  _objc_storeStrong(param_1 + _DAT_112779518,0);
  _objc_storeStrong(param_1 + _DAT_112779514,0);
  _objc_storeStrong(param_1 + _DAT_112779510,0);
  _objc_storeStrong(param_1 + _DAT_11277950c,0);
  _objc_storeStrong(param_1 + _DAT_112779504,0);
  _objc_storeStrong(param_1 + _DAT_112779500,0);
  _objc_storeStrong(param_1 + _DAT_112779508,0);
  _objc_storeStrong(param_1 + _DAT_112779524,0);
  _objc_storeStrong(param_1 + _DAT_1127794fc,0);
  _objc_storeStrong(param_1 + _DAT_1127794f8,0);
  _objc_storeStrong(param_1 + _DAT_1127794f4,0);
  _objc_storeStrong(param_1 + _DAT_1127794f0,0);
  _objc_storeStrong(param_1 + _DAT_1127794ec,0);
  _objc_storeStrong(param_1 + _DAT_1127794e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779520,0);
  return;
}



/* Entry: 108c8ab50; end: 108c8aca3; -[SCLensEffectApplicatorProxy initWithFacadeCreationBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c8ab50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779528);
  *(undefined8 *)(param_1 + _DAT_112779528) = uVar3;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar5 = (long)_DAT_11277952c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112779530;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108c8aca4; end: 108c8acab;  */

void FUN_108c8aca4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf07cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_applicator_11259f8e0);
  return;
}



/* Entry: 108c8acac; end: 108c8ad17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8acac(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar2 = (long)_DAT_112779534;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8ad18; end: 108c8ad27; -[SCLensEffectApplicatorProxy facadeCreationFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8ad18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277952c),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 108c8ad28; end: 108c8ae07; -[SCLensEffectApplicatorProxy applyEffectLayer:completion:] */

/* WARNING: Possible PIC construction at 0x000108c8adbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c8adc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8ad28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    if (*(long *)(param_1 + _DAT_112779534) == 0) {
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010bf08400;
    }
    func_0x00010bf083c0();
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
    return;
  }
  ___stack_chk_fail();
  param_1 = *(long *)(param_3 + _DAT_112779534);
  if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf083f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
code_r0x00010bf08400:
                    /* WARNING: Could not recover jumptable at 0x00010bf08410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_applyEffectLayers_completion__11259faa8);
  return;
}



/* Entry: 108c8ae08; end: 108c8ae2f; -[SCLensEffectApplicatorProxy applyEffectLayers:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8ae08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(long *)(param_1 + _DAT_112779534) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf08410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112779534),PTR_s_applyEffectLayers_completion__11259faa8,
               param_3,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf083f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_applyEffectLayers_async_completi_11259faa0,param_3,0);
  return;
}



/* Entry: 108c8ae30; end: 108c8b003; -[SCLensEffectApplicatorProxy applyEffectLayers:async:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8ae30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126db568;
  lVar3 = (long)_DAT_112779534;
  if (*(long *)(param_1 + lVar3) == 0) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_108c8b004;
    uStack_60 = 0x108c8b014;
    uStack_58 = 0;
    puVar1 = PTR_PTR_1126db570;
    func_0x00010bf44440(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c142e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if ((puVar2 == (undefined *)0x0) && (puStack_78[5] != 0)) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + _DAT_11277952c));
    }
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    if (*(long *)(param_1 + lVar3) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5,2,puVar2);
      }
      _objc_release(puVar2);
      goto LAB_108c8af74;
    }
  }
  func_0x00010bf083e0();
LAB_108c8af74:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108c8b004; end: 108c8b01b;  */

void FUN_108c8b004(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108c8b01c; end: 108c8b06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8b01c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112779528);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108c8b06c; end: 108c8b10b; -[SCLensEffectApplicatorProxy willTurnOnEffectsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8b06c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8b10c;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8b10c; end: 108c8b243;  */

void FUN_108c8b10c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8b244; end: 108c8b29f;  */

void FUN_108c8b244(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2a7120();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8b2a0; end: 108c8b2af;  */

void FUN_108c8b2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8b2b0; end: 108c8b34f; -[SCLensEffectApplicatorProxy willTurnOffEffectsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8b2b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8b350;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8b350; end: 108c8b487;  */

void FUN_108c8b350(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8b488; end: 108c8b4e3;  */

void FUN_108c8b488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2a7100();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8b4e4; end: 108c8b4f3;  */

void FUN_108c8b4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8b4f4; end: 108c8b593; -[SCLensEffectApplicatorProxy willLoadEffectConcurrentlyObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8b4f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8b594;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8b594; end: 108c8b6cb;  */

void FUN_108c8b594(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8b6cc; end: 108c8b727;  */

void FUN_108c8b6cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2a6680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8b728; end: 108c8b737;  */

void FUN_108c8b728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8b738; end: 108c8b7d7; -[SCLensEffectApplicatorProxy willLoadEffectsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8b738(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8b7d8;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8b7d8; end: 108c8b90f;  */

void FUN_108c8b7d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8b910; end: 108c8b96b;  */

void FUN_108c8b910(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2a66a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8b96c; end: 108c8b97b;  */

void FUN_108c8b96c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8b97c; end: 108c8ba1b; -[SCLensEffectApplicatorProxy didTurnOnEffectsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8b97c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8ba1c;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8ba1c; end: 108c8bb53;  */

void FUN_108c8ba1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8bb54; end: 108c8bbaf;  */

void FUN_108c8bb54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf7ddc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8bbb0; end: 108c8bbbf;  */

void FUN_108c8bbb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8bbc0; end: 108c8bc5f; -[SCLensEffectApplicatorProxy didTurnOffEffectsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8bbc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8bc60;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8bc60; end: 108c8bd97;  */

void FUN_108c8bc60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8bd98; end: 108c8bdf3;  */

void FUN_108c8bd98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf7dd40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8bdf4; end: 108c8be03;  */

void FUN_108c8bdf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8be04; end: 108c8bea3; -[SCLensEffectApplicatorProxy didProcessFirstFrameObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8be04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8bea4;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8bea4; end: 108c8bfdb;  */

void FUN_108c8bea4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8bfdc; end: 108c8c037;  */

void FUN_108c8bfdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf78c60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8c038; end: 108c8c047;  */

void FUN_108c8c038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8c048; end: 108c8c0e7; -[SCLensEffectApplicatorProxy appliedEffectsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8c048(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8c0e8;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8c0e8; end: 108c8c21f;  */

void FUN_108c8c0e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8c220; end: 108c8c27b;  */

void FUN_108c8c220(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf07dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8c27c; end: 108c8c28b;  */

void FUN_108c8c27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8c28c; end: 108c8c32b; -[SCLensEffectApplicatorProxy failedEffectsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8c28c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8c32c;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8c32c; end: 108c8c463;  */

void FUN_108c8c32c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8c464; end: 108c8c4bf;  */

void FUN_108c8c464(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf9fc40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8c4c0; end: 108c8c4cf;  */

void FUN_108c8c4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8c4d0; end: 108c8c56f; -[SCLensEffectApplicatorProxy didLoadEffectObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8c4d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779530);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126ae6b8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108c8c570;
  puStack_30 = &UNK_11088e668;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8c570; end: 108c8c6a7;  */

void FUN_108c8c570(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108c8b004;
  uStack_50 = 0x108c8b014;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c297260(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8c6a8; end: 108c8c703;  */

void FUN_108c8c6a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf778e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8c704; end: 108c8c713;  */

void FUN_108c8c704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 108c8c714; end: 108c8c743; -[SCLensEffectApplicatorProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8c714(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779534);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8c744; end: 108c8c7a7; -[SCLensEffectApplicatorProxy forwardInvocation:] */

void FUN_108c8c744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15ac20(param_3);
  func_0x00010bfb64a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c06ae40(param_3,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8c7a8; end: 108c8c7b3; -[SCLensEffectApplicatorProxy methodSignatureForSelector:] */

void FUN_108c8c7a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126db578,PTR_s_instanceMethodSignatureForSelect_1125f78f8);
  return;
}



/* Entry: 108c8c7b4; end: 108c8c813; -[SCLensEffectApplicatorProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8c7b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779530,0);
  _objc_storeStrong(param_1 + _DAT_112779534,0);
  _objc_storeStrong(param_1 + _DAT_11277952c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779528,0);
  return;
}



/* Entry: 108c8c814; end: 108c8cb43; -[SCLensProcessingFacadeProxy initWithFacadeCreationBlock:effectInfoProvider:tracker:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c8c814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar6 = (long)_DAT_112779538;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_4;
  _objc_release(uVar1);
  lVar6 = (long)_DAT_11277953c;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_5;
  _objc_release(uVar1);
  lVar6 = (long)_DAT_112779540;
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_6;
  _objc_release(uVar1);
  *(undefined4 *)(param_1 + _DAT_112779544) = 0;
  puVar2 = PTR_PTR_1126db580;
  _objc_alloc();
  func_0x00010c011580();
  lVar6 = (long)_DAT_112779548;
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126db588;
  _objc_alloc();
  puVar4 = puVar2;
  func_0x00010bf9f000(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000600();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277954c);
  *(undefined **)(param_1 + _DAT_11277954c) = puVar3;
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126db4e8;
  _objc_alloc();
  puVar4 = puVar2;
  func_0x00010bf9f000(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db590);
  func_0x00010c0005a0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779550);
  *(undefined **)(param_1 + _DAT_112779550) = puVar3;
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126db4e8;
  _objc_alloc();
  puVar4 = puVar2;
  func_0x00010bf9f000(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126db598);
  func_0x00010c0005a0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779554);
  *(undefined **)(param_1 + _DAT_112779554) = puVar3;
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_initWeak(auStack_68,param_1);
  puVar3 = puVar2;
  func_0x00010bf9f000(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c297260(puVar3);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108c8cb44; end: 108c8cb5b;  */

void FUN_108c8cb44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf44430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_componentManager_1125aeab0);
  return;
}



/* Entry: 108c8cb5c; end: 108c8cbdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8cb5c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar3 = (long)_DAT_112779544;
    _os_unfair_lock_lock(param_1 + lVar3);
    lVar2 = (long)_DAT_112779558;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c8cbe0; end: 108c8cc0f; -[SCLensProcessingFacadeProxy componentManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8cbe0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277954c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8cc10; end: 108c8cc3f; -[SCLensProcessingFacadeProxy applicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8cc10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779548);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8cc40; end: 108c8cc6f; -[SCLensProcessingFacadeProxy audioProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8cc40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779550);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8cc70; end: 108c8cc9f; -[SCLensProcessingFacadeProxy processor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8cc70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779554);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8cca0; end: 108c8cccf; -[SCLensProcessingFacadeProxy effectInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8cca0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779538);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8ccd0; end: 108c8ccff; -[SCLensProcessingFacadeProxy tracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8ccd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277953c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8cd00; end: 108c8cd2f; -[SCLensProcessingFacadeProxy isKindOfClass:] */

bool FUN_108c8cd00(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db5a0;
  _objc_opt_class(PTR_PTR_1126db5a0);
  return puVar1 == param_3;
}



/* Entry: 108c8cd30; end: 108c8cd83; -[SCLensProcessingFacadeProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8cd30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112779544;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779558);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c8cd84; end: 108c8cde7; -[SCLensProcessingFacadeProxy forwardInvocation:] */

void FUN_108c8cd84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15ac20(param_3);
  func_0x00010bfb64a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c06ae40(param_3,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8cde8; end: 108c8cdf3; -[SCLensProcessingFacadeProxy methodSignatureForSelector:] */

void FUN_108c8cde8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126db5a0,PTR_s_instanceMethodSignatureForSelect_1125f78f8);
  return;
}



/* Entry: 108c8cdf4; end: 108c8ce93; -[SCLensProcessingFacadeProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c8cdf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779554,0);
  _objc_storeStrong(param_1 + _DAT_112779550,0);
  _objc_storeStrong(param_1 + _DAT_112779548,0);
  _objc_storeStrong(param_1 + _DAT_11277954c,0);
  _objc_storeStrong(param_1 + _DAT_112779540,0);
  _objc_storeStrong(param_1 + _DAT_11277953c,0);
  _objc_storeStrong(param_1 + _DAT_112779538,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779558,0);
  return;
}



/* Entry: 108c8ce94; end: 108c8cfd3; -[SCLensProcessingAnalyticsProvider initWithAnalyticsComponent:metricsComponent:applicator:] */

undefined1 *
FUN_108c8ce94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126fdf90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x00010bef9980(param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x00010bef9980(param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c8cfd4; end: 108c8d04b; -[SCLensProcessingAnalyticsProvider dealloc] */

void FUN_108c8cfd4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12cf80();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12cf80();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126fdf90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108c8d04c; end: 108c8d0e7; -[SCLensProcessingAnalyticsProvider metricsComponent:didReceiveMetrics:forLensId:] */

void FUN_108c8d04c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db5a8;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c00efc0(*param_4,param_4[1],param_4[2],param_4[3],param_4[4],param_4[5],param_4[6],
                      param_4[7]);
  _objc_release(param_5);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c8d0e8; end: 108c8d1fb; -[SCLensProcessingAnalyticsProvider analyticsComponent:didPrepareCreatorsEventAnalyticsReport:lensId:] */

void FUN_108c8d0e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  func_0x00010c0b8600(param_4,param_2,&PTR___NSConcreteGlobalBlock_110abfe18);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db5b8;
  _objc_alloc(PTR_PTR_1126db5b8);
  func_0x00010c00f000();
  _objc_release(param_5);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108c8d1fc; end: 108c8d3bf; -[SCLensProcessingAnalyticsProvider analyticsComponent:didPrepareEventAnalyticsReport:lensId:] */

void FUN_108c8d1fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  func_0x00010c0b8600(param_4,param_2,&PTR___NSConcreteGlobalBlock_110abfe58);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf07da0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108c8d498;
  puStack_70 = &UNK_110857a38;
  _objc_retain(param_5);
  lVar2 = lVar1;
  puStack_68 = param_5;
  func_0x00010bfb2040(lVar1,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010bf5e060();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar4;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x108c8d4e0;
    puStack_98 = &UNK_110857a38;
    _objc_retain(param_5);
    lVar1 = lVar3;
    puStack_90 = param_5;
    func_0x00010bfb2040(lVar3,param_2,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar1 != 0) {
      puVar4 = PTR_PTR_1126db5c0;
      _objc_alloc(PTR_PTR_1126db5c0);
      func_0x00010c00ee60();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(lVar1);
    puVar4 = puStack_90;
  }
  else {
    puVar4 = PTR_PTR_1126db5c0;
    _objc_alloc(PTR_PTR_1126db5c0);
    func_0x00010c00ee60();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(puStack_68);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108c8d3c0; end: 108c8d497;  */

void FUN_108c8d3c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010bf2b540(param_2);
  puVar1 = PTR_PTR_1126c3140;
  _objc_alloc(PTR_PTR_1126c3140);
  uVar2 = param_2;
  func_0x00010c0687a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c068960(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160620(param_2);
  func_0x00010beeee60(param_2);
  _objc_release(param_2);
  func_0x00010c01e6e0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c8d498; end: 108c8d527;  */

undefined8 FUN_108c8d498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108c8d528; end: 108c8d52b; -[SCLensProcessingAnalyticsProvider analyticsComponent:didPreparePerformanceAnalyticsReport:] */

void FUN_108c8d528(void)

{
  return;
}



/* Entry: 108c8d52c; end: 108c8d533; -[SCLensProcessingAnalyticsProvider creatorAnalyticsObservable] */

undefined8 FUN_108c8d52c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108c8d534; end: 108c8d53b; -[SCLensProcessingAnalyticsProvider analyticsObservable] */

undefined8 FUN_108c8d534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108c8d53c; end: 108c8d543; -[SCLensProcessingAnalyticsProvider didChangeOptionContentObservable] */

undefined8 FUN_108c8d53c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108c8d544; end: 108c8d54b; -[SCLensProcessingAnalyticsProvider profilingAnalyticsObservable] */

undefined8 FUN_108c8d544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108c8d54c; end: 108c8d5af; -[SCLensProcessingAnalyticsProvider .cxx_destruct] */

void FUN_108c8d54c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108c8d5b0; end: 108c8d777; -[SCLensProcessingAsset toLensAsset] */

void FUN_108c8d5b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar1 = param_1;
  func_0x00010c28f9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bd478;
  _objc_opt_new(PTR_PTR_1126bd478);
  uVar1 = param_1;
  func_0x00010bf0b260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2af9a0(puVar3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2bc200(puVar3,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf38a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa6a0(puVar3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf0b760(param_1);
  func_0x00010c2bbd20(puVar3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b71c0(puVar3,param_2,6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf12ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf93ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad300(puVar3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf93e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad2e0(puVar3,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c8d778; end: 108c8d7eb; -[SCLensProcessingAssetsProvidingAdapter initWithRemoteAssetsProvider:] */

undefined1 * FUN_108c8d778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fdf98;
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



/* Entry: 108c8d7ec; end: 108c8d9e7; -[SCLensProcessingAssetsProvidingAdapter remoteAssetsComponent:didRequestAsset:lensId:] */

void FUN_108c8d7ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f510a5d;
  func_0x000107c31820();
  puVar2 = PTR_PTR_1126b9660;
  _objc_alloc(PTR_PTR_1126b9660);
  uVar3 = param_4;
  func_0x00010bf0b260(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf0b760(param_4);
  lVar5 = param_1;
  func_0x00010be4b9a0(param_1,param_2,uVar4);
  uVar4 = param_4;
  func_0x00010bf12ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bf93ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf93e80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c28f9a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff43e0(puVar2,param_2,uVar3,lVar5,uVar4,uVar6,uVar7,uVar8,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar10 = PTR_PTR_1126db5c8;
  _objc_alloc(PTR_PTR_1126db5c8);
  func_0x00010c03df20();
  func_0x00010c136460(*(undefined8 *)(param_1 + 8),param_2,puVar10,puVar2,param_5);
  _objc_release(puVar10);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8d9e8; end: 108c8d9eb; -[SCLensProcessingAssetsProvidingAdapter remoteAssetsComponent:didRequestAssetUploadWithId:assetPath:lensId:deleteAfterUploading:assetType:] */

void FUN_108c8d9e8(void)

{
  return;
}



/* Entry: 108c8d9ec; end: 108c8db97; -[SCLensProcessingAssetsProvidingAdapter remoteAssetsComponent:didRequestAssetUploadWithId:assetPath:encryptionKey:encryptionIv:assetBatchId:lensId:deleteAfterUploading:assetType:] */

void FUN_108c8d9ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = &UNK_10f510a82;
  func_0x000107c31820();
  puVar2 = PTR_PTR_1126b9660;
  _objc_alloc(PTR_PTR_1126b9660);
  lVar3 = param_1;
  func_0x00010be4b9a0(param_1,param_2,param_12);
  func_0x00010bff43e0(puVar2,param_2,param_4,lVar3,&PTR____CFConstantStringClassReference_110daafd8,
                      param_6,param_7,&PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110daafd8);
  puVar4 = PTR_PTR_1126db5c8;
  _objc_alloc(PTR_PTR_1126db5c8);
  func_0x00010c03df20();
  func_0x00010c136480(*(undefined8 *)(param_1 + 8),param_2,puVar4,puVar2,param_9,param_5,param_8,
                      param_10);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c8db98; end: 108c8dbbb; -[SCLensProcessingAssetsProvidingAdapter _lensProcessingAssetTypeFromLSAType:] */

undefined8 FUN_108c8db98(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 6) {
    return *(undefined8 *)(&UNK_10df9f458 + (param_3 - 2U) * 8);
  }
  return 3;
}



/* Entry: 108c8dbbc; end: 108c8dbc7; -[SCLensProcessingAssetsProvidingAdapter .cxx_destruct] */

void FUN_108c8dbbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c8dbc8; end: 108c8dc6b; -[SCLensProcessingAssetsUpdater initWithRemoteAssetComponent:requestedLsaAsset:] */

undefined1 *
FUN_108c8dbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdfa0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c8dc6c; end: 108c8dc77; -[SCLensProcessingAssetsUpdater updateRemoteAssetWithPath:assetId:effectId:completion:] */

void FUN_108c8dc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16aa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setAssetWithPath_lsaAsset_lensId_1126384b8,param_3,
             *(undefined8 *)(param_1 + 0x10));
  return;
}


