/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f23164; end: 106f231db; -[SCSRLensEffectPluginCameraLifecycleObservingEntryPoint _sessionDidStopRunning] */

void FUN_106f23164(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010087d9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf29c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3358;
  func_0x00010bf2ad40(PTR_PTR_1126d3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f231dc; end: 106f2324b; -[SCSRLensEffectPluginCameraLifecycleObservingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f231dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127611c0);
  _objc_destroyWeak(param_1 + _DAT_1127611bc);
  _objc_destroyWeak(param_1 + _DAT_1127611b8);
  _objc_destroyWeak(param_1 + _DAT_1127611b4);
  _objc_storeStrong(param_1 + _DAT_1127611b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127611ac,0);
  return;
}



/* Entry: 106f2324c; end: 106f23287; -[SCSRLensEffectPluginCameraLifecycleProxyServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f2324c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127611c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127611c4);
  return;
}



/* Entry: 106f23288; end: 106f232cf; -[SCSnapRendererContentEntryPoint memoriesSnapRendererServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f23288(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127611cc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0c9b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106f232d0; end: 106f2341f; -[SCSnapRendererContentEntryPoint end] */

void FUN_106f232d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010bf4d080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_1126f7d38;
    plVar4 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x00010bf4d080(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf4d080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf4d060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106f23420;
    puStack_50 = &UNK_110842e18;
    lStack_48 = lVar3;
    _objc_retain(lVar3);
    func_0x00010c0f7fc0(lVar2);
    puStack_70 = PTR_PTR_1126f7d38;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_48);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 106f23420; end: 106f23453;  */

void FUN_106f23420(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f23454; end: 106f234d7; -[SCSnapRendererContentEntryPoint _createSrPluginFactoryWithPerformer:lensProcessingUseCase:supportedDestinations:] */

void FUN_106f23454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  func_0x00010bdef4a0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3368;
  _objc_alloc(PTR_PTR_1126d3368);
  func_0x00010c023bc0();
  _objc_release(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f234d8; end: 106f238a7; -[SCSnapRendererContentEntryPoint _createLensEffectPluginImplWithPerformer:lensProcessingUseCase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f234d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_3);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_1 == 0) {
    lStack_b8 = 0;
  }
  else {
    lStack_b8 = param_1 + _DAT_112761200;
    _objc_loadWeakRetained();
  }
  puVar2 = PTR_PTR_1126d3370;
  _objc_alloc();
  if (param_1 == 0) {
    lStack_c0 = 0;
  }
  else {
    lStack_c0 = param_1 + _DAT_1127611e0;
    _objc_loadWeakRetained();
  }
  lVar3 = param_1;
  FUN_106f238f0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1be0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_106f238f0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127611dc;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar15;
  func_0x00010bf29c60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_1127611d8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar16;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_1127611f8;
    _objc_loadWeakRetained(lVar17);
  }
  lVar9 = lVar17;
  func_0x00010c0f98e0(lVar17);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_1127611fc;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar18;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c0c9b60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0c9000();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127611ec;
    _objc_loadWeakRetained();
  }
  lVar14 = param_1;
  func_0x00010c0ff2e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021b00(puVar2);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(lVar9);
  _objc_release(lVar17);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lStack_c0);
  _objc_release(lStack_b8);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f238a8; end: 106f238ef;  */

void FUN_106f238a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106f238f0; end: 106f23913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f238f0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127611e4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f23914; end: 106f23a57; -[SCSnapRendererContentEntryPoint _createLensContentPreparationStrategyWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f23914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x000100c577f8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126d3378;
  _objc_alloc(PTR_PTR_1126d3378);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = lVar2;
  func_0x000108ec19b8(lVar2);
  func_0x00010c0df780(puVar4,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = lVar2;
  func_0x000108ec1990(lVar2);
  func_0x00010c0df780(puVar5,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127611e8;
    _objc_loadWeakRetained(lVar1);
  }
  lVar6 = lVar1;
  func_0x00010bf04760(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027cc0(puVar3,param_2,puVar4,puVar5,lVar6,param_3);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f23a58; end: 106f23b1f; -[SCSnapRendererContentEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f23a58(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112761200);
  _objc_destroyWeak(param_1 + _DAT_1127611fc);
  _objc_destroyWeak(param_1 + _DAT_1127611f8);
  _objc_destroyWeak(param_1 + _DAT_1127611f4);
  _objc_destroyWeak(param_1 + _DAT_1127611f0);
  _objc_destroyWeak(param_1 + _DAT_1127611ec);
  _objc_destroyWeak(param_1 + _DAT_1127611e8);
  _objc_destroyWeak(param_1 + _DAT_1127611e4);
  _objc_destroyWeak(param_1 + _DAT_1127611e0);
  _objc_destroyWeak(param_1 + _DAT_1127611d0);
  _objc_destroyWeak(param_1 + _DAT_1127611cc);
  _objc_destroyWeak(param_1 + _DAT_1127611dc);
  _objc_destroyWeak(param_1 + _DAT_1127611d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127611d4);
  return;
}



/* Entry: 106f23b20; end: 106f23b47; -[SCSnapRendererLensEffectPluginFactoryImpl destinations] */

void FUN_106f23b20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f23b48; end: 106f23e13; -[SCSnapRendererLensEffectPluginFactoryImpl pluginInstanceForCTItemInstance:] */

void FUN_106f23b48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd6be0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((int)lVar3 == 0x1b) {
      lVar1 = param_3;
      func_0x00010c0840e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c096c60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfe5ea0();
      func_0x00010c0df7c0(puVar6,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c096c60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfd84e0();
      if ((int)lVar4 == 0) {
        _objc_release(lVar3);
        _objc_release(lVar2);
        uVar8 = 0;
LAB_106f23dd8:
        _objc_release(lVar1);
      }
      else {
        puVar6 = puVar7;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        if (puVar6 != (undefined *)0x0) {
          func_0x00010c1bbd60(*(undefined8 *)(param_1 + 8),param_2,puVar7);
          lVar2 = param_3;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c094fa0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c065d40();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar4;
          func_0x00010c085f40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          uVar8 = *(undefined8 *)(param_1 + 8);
          lVar3 = lVar1;
          func_0x00010c08fa60();
          lVar2 = 0;
          if (lVar3 != 0) {
            lVar2 = lVar1;
          }
          func_0x00010c1b9660(uVar8,param_2,lVar2);
          uVar8 = *(undefined8 *)(param_1 + 8);
          lVar2 = param_3;
          func_0x00010c0cc0c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c094fa0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c263880();
          func_0x00010c1d7920(uVar8,param_2,lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          uVar8 = *(undefined8 *)(param_1 + 8);
          _objc_retain(uVar8);
          goto LAB_106f23dd8;
        }
        uVar8 = 0;
      }
      _objc_release(puVar7);
      goto LAB_106f23de8;
    }
  }
  uVar8 = 0;
LAB_106f23de8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 106f23e14; end: 106f23fdb; -[SCSnapRendererLensEffectPluginFactoryImpl warmContentForCTItemInstance:] */

void FUN_106f23e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd6be0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf96ee0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0x1b) {
      uVar1 = param_3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c096c60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfd84e0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if ((int)uVar4 != 0) {
        uVar1 = param_3;
        func_0x00010c0840e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c096c60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfe5ea0();
        func_0x00010c0df7c0(puVar6,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        puVar6 = puVar7;
        func_0x00010c08fa60();
        if (puVar6 != (undefined *)0x0) {
          func_0x00010c2a1ba0(*(undefined8 *)(param_1 + 8),param_2,puVar7);
        }
        _objc_release(puVar7);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f23fdc; end: 106f23fe3; -[SCSnapRendererLensEffectPluginFactoryImpl resetPluginInstance] */

void FUN_106f23fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 106f23fe4; end: 106f24013; -[SCSnapRendererLensEffectPluginFactoryImpl .cxx_destruct] */

void FUN_106f23fe4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f24014; end: 106f2426f; -[SCSnapRendererLensEffectPluginImpl prepareResourcesWithInputCount:snapInfo:] */

void FUN_106f24014(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar5 = param_1;
  func_0x00010c0766e0();
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x88);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126ae558;
      func_0x00010bfe9c80(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR_PTR_1126ae560;
      _objc_opt_new();
      uVar4 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined **)(param_1 + 0xa0) = puVar2;
      _objc_release(uVar4);
      func_0x00010be3b9e0(param_1);
      func_0x00010bead5e0(param_1);
      puVar3 = param_1;
      func_0x00010be78bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c2a2140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(puVar5);
      _objc_retain(puVar3);
      func_0x00010c297260(uVar4);
      puVar2 = *(undefined **)(param_1 + 0xa0);
      func_0x00010bfbc3e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f24270; end: 106f2452f;  */

void FUN_106f24270(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined **param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **unaff_x27;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  ppuVar7 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_4 == (undefined *)0x0) || (param_5 != (undefined **)0x0)) {
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8fe00(lVar1);
      ppuVar7 = ppuVar6;
      func_0x00010bde2fe0(lVar1);
      _objc_release(ppuVar6);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 8);
      func_0x00010bf976a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11c120();
      _objc_release(uVar8);
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      puVar4 = PTR_PTR_1126ae6b8;
      uVar8 = *(undefined8 *)(lVar1 + 0x50);
      func_0x00010bf6a9c0(lVar1);
      uStack_88 = param_1;
      uStack_80 = param_2;
      func_0x00010c297120(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c109de0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ae558;
      uStack_78 = *(undefined8 *)(param_3 + 0x28);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beffb40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_106f24530;
      puStack_a0 = &UNK_110853590;
      unaff_x27 = &puStack_b8;
      puVar4 = (undefined *)(param_3 + 0x30);
      _objc_copyWeak(auStack_90);
      uVar2 = *(undefined8 *)(param_3 + 0x20);
      _objc_retain(uVar2);
      ppuVar7 = &puStack_b8;
      uStack_98 = uVar2;
      func_0x00010c297260(puVar3);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(uStack_98);
      _objc_destroyWeak(auStack_90);
      _objc_release(uVar8);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 5);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(ppuVar7);
  param_4 = param_4 + 0x28;
  _objc_loadWeakRetained();
  if (param_4 != (undefined *)0x0) {
    puVar3 = puVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf1f3c0();
    _objc_release(puVar3);
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99280(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde2fe0(param_4);
    }
    else {
      puVar3 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if ((ppuVar7 == (undefined **)0x0) && (puVar3 != (undefined *)0x0)) {
        func_0x00010bdfcde0(param_4);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99280(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8fe00(param_4);
        func_0x00010bde2fe0(param_4);
        _objc_release(puVar5);
      }
    }
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106f24530; end: 106f2468b;  */

void FUN_106f24530(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf1f3c0();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99280(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde2fe0(param_1);
    }
    else {
      puVar1 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      if ((param_3 == 0) && (puVar1 != (undefined *)0x0)) {
        func_0x00010bdfcde0(param_1);
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99280(PTR__OBJC_CLASS___NSError_1126ae858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8fe00(param_1);
        func_0x00010bde2fe0(param_1);
        _objc_release(puVar2);
      }
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f2468c; end: 106f24693; -[SCSnapRendererLensEffectPluginImpl supportsYUVInput] */

undefined8 FUN_106f2468c(void)

{
  return 0;
}



/* Entry: 106f24694; end: 106f2469b; -[SCSnapRendererLensEffectPluginImpl textureType] */

undefined8 FUN_106f24694(void)

{
  return 2;
}



/* Entry: 106f2469c; end: 106f2476f; -[SCSnapRendererLensEffectPluginImpl isWarmingUpWithVideoInputsRequired] */

undefined8 FUN_106f2469c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0cc620(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar5,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      uVar2 = *(ulong *)(param_1 + 0x60);
      func_0x00010c0cc620();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c294980();
      if ((uVar3 & 1) == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c0cc620(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c07a800();
        _objc_release(uVar1);
      }
      else {
        uVar4 = 1;
      }
      _objc_release(uVar2);
      return uVar4;
    }
  }
  return 0;
}



/* Entry: 106f24770; end: 106f24aab; -[SCSnapRendererLensEffectPluginImpl warmupWithVideoInputs:] */

void FUN_106f24770(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **unaff_x24;
  long lVar7;
  undefined **unaff_x25;
  long lVar8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0766e0();
  if ((uVar1 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    puVar5 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar7 = *plStack_130;
      do {
        lVar8 = 0;
        do {
          if (*plStack_130 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          puVar4 = PTR_PTR_1126d3380;
          _objc_alloc(PTR_PTR_1126d3380);
          func_0x00010c041340();
          func_0x00010befa120(puVar5);
          _objc_release(puVar4);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = param_3;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_3);
    _objc_initWeak(auStack_148,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_106f24aac;
    puStack_160 = &UNK_110983688;
    unaff_x24 = &puStack_178;
    _objc_copyWeak(auStack_150,auStack_148);
    _objc_retain(puVar5);
    uVar6 = uVar3;
    puStack_158 = puVar5;
    func_0x00010c109a00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puVar4;
    uStack_198 = 0xc2000000;
    uStack_190 = 0x106f24b2c;
    puStack_188 = &UNK_1108f5e80;
    _objc_copyWeak(auStack_180);
    func_0x00010c297260(uVar6);
    _objc_release(uVar6);
    _objc_release(uVar3);
    puVar4 = *(undefined **)(param_1 + 0xa8);
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_180);
    _objc_release(puStack_158);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_148);
    _objc_release(puVar5);
    unaff_x25 = &puStack_1a0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x20));
  _objc_destroyWeak(unaff_x24 + 5);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010c115660(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106f24aac; end: 106f24be3;  */

void FUN_106f24aac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c115660(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106f24be4; end: 106f24bfb; -[SCSnapRendererLensEffectPluginImpl cleanUpResourcesAndReturnError:] */

undefined8 FUN_106f24be4(void)

{
  func_0x00010c137fe0();
  return 1;
}



/* Entry: 106f24bfc; end: 106f24c2b; -[SCSnapRendererLensEffectPluginImpl reset] */

void FUN_106f24bfc(long param_1)

{
  func_0x00010be92ca0();
  _os_unfair_lock_lock(param_1 + 0xb8);
  *(undefined2 *)(param_1 + 0xbc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xb8);
  return;
}



/* Entry: 106f24c2c; end: 106f24df7; -[SCSnapRendererLensEffectPluginImpl processVideoInputs:inputTextures:outputTexture:timestamp:error:] */

void FUN_106f24c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106f24df8;
  uStack_70 = 0x106f24e08;
  uStack_68 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_106f24df8;
  uStack_a0 = 0x106f24e08;
  uStack_98 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puStack_b8 = &uStack_c0;
  puStack_88 = &uStack_90;
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106f24e10;
  puStack_100 = &UNK_1109836b8;
  lStack_f8 = param_1;
  puStack_e8 = &uStack_c0;
  _objc_retain(param_3);
  uStack_d0 = param_6[1];
  uStack_d8 = *param_6;
  uStack_c8 = param_6[2];
  uStack_f0 = param_3;
  puStack_e0 = &uStack_90;
  func_0x00010006eaa4(uVar1,&puStack_118);
  _objc_release(uVar1);
  if (param_7 != (undefined8 *)0x0) {
    uVar1 = puStack_88[5];
    _objc_retainAutorelease();
    *param_7 = uVar1;
  }
  puVar2 = PTR_PTR_1126d3388;
  _objc_alloc(PTR_PTR_1126d3388);
  func_0x00010c041320();
  _objc_release(uStack_f0);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f24df8; end: 106f24e0f;  */

void FUN_106f24df8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106f24e10; end: 106f24ea3;  */

void FUN_106f24e10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uStack_38 = *(undefined8 *)(lVar4 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010be82820(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),&uStack_50,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uStack_38;
  _objc_retain(uStack_38);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  _objc_release(uVar2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  return;
}



/* Entry: 106f24ea4; end: 106f24eab; -[SCSnapRendererLensEffectPluginImpl renderStaticOverlayWithSize:error:] */

undefined8 FUN_106f24ea4(void)

{
  return 0;
}



/* Entry: 106f24eac; end: 106f24ed3; -[SCSnapRendererLensEffectPluginImpl processingMetadataApplier] */

void FUN_106f24eac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f24ed4; end: 106f24fff; -[SCSnapRendererLensEffectPluginImpl warmContentForLensId:] */

void FUN_106f24ed4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a2140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106f25000; end: 106f25063;  */

void FUN_106f25000(long param_1,long param_2,long param_3)

{
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010be8fe20();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f25064; end: 106f2509f; -[SCSnapRendererLensEffectPluginImpl setLensId:] */

void FUN_106f25064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsLensPluginEnabled__11264a2e8,1);
  return;
}



/* Entry: 106f250a0; end: 106f250cf; -[SCSnapRendererLensEffectPluginImpl setLaunchMetadata:] */

void FUN_106f250a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f250d0; end: 106f250d7; -[SCSnapRendererLensEffectPluginImpl setOverrideLensLaunchTime:] */

void FUN_106f250d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc9) = param_3;
  return;
}



/* Entry: 106f250d8; end: 106f250eb; -[SCSnapRendererLensEffectPluginImpl defaultVideoPipelineResolution] */

undefined1  [16] FUN_106f250d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4094000000000000;
  auVar1._0_8_ = 0x4086800000000000;
  return auVar1;
}



/* Entry: 106f250ec; end: 106f251bf;  */

void FUN_106f250ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bcdc0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f251c0; end: 106f251df;  */

void FUN_106f251c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd97d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cameraWillAppear_112553f90);
  return;
}



/* Entry: 106f251e0; end: 106f2527b;  */

void FUN_106f251e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beeb240(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f2527c; end: 106f2528b; -[SCSnapRendererLensEffectPluginImpl _cameraSessionDidStartRunning] */

void FUN_106f2527c(long param_1)

{
  if (*(long *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
    return;
  }
  return;
}



/* Entry: 106f2528c; end: 106f2528f; -[SCSnapRendererLensEffectPluginImpl _cameraSessionDidStopRunning] */

void FUN_106f2528c(void)

{
  return;
}



/* Entry: 106f25290; end: 106f252b7; -[SCSnapRendererLensEffectPluginImpl _cameraWillAppear] */

void FUN_106f25290(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1b2300(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 106f252b8; end: 106f252bf; -[SCSnapRendererLensEffectPluginImpl _cameraDidDisappear] */

void FUN_106f252b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsLensPluginEnabled__11264a2e8,1);
  return;
}



/* Entry: 106f252c0; end: 106f252c3; -[SCSnapRendererLensEffectPluginImpl _willResignActive] */

void FUN_106f252c0(void)

{
  return;
}



/* Entry: 106f252c4; end: 106f252eb; -[SCSnapRendererLensEffectPluginImpl _didEnterBackground] */

void FUN_106f252c4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1b2300(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 106f252ec; end: 106f25347; -[SCSnapRendererLensEffectPluginImpl _didBecomeActive] */

void FUN_106f252ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfbdee0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsLensPluginEnabled__11264a2e8,1);
    return;
  }
  return;
}



/* Entry: 106f25348; end: 106f253af; -[SCSnapRendererLensEffectPluginImpl _completePrepareResourcesPromiseWithValue:] */

void FUN_106f25348(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1b37f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsPreparationCompleted__11264a820,1);
  return;
}



/* Entry: 106f253b0; end: 106f253e3; -[SCSnapRendererLensEffectPluginImpl _completePrepareResourcesPromiseWithError:] */

void FUN_106f253b0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0xa0));
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be92cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetForCurrentEffect_1125824c8);
  return;
}



/* Entry: 106f253e4; end: 106f254e3; -[SCSnapRendererLensEffectPluginImpl _resetForCurrentEffect] */

void FUN_106f253e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf976a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c138900();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c08b6e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b6e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = PTR____NSArray0__struct_11034ab48;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 0xca) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c138a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_resetForCurrentBatch_11262bcb0);
  return;
}



/* Entry: 106f254e4; end: 106f25507; -[SCSnapRendererLensEffectPluginImpl _reset] */

void FUN_106f254e4(long param_1)

{
  func_0x00010be92ca0();
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 106f25508; end: 106f25887; -[SCSnapRendererLensEffectPluginImpl _setupLaunchConfigurationWithSnapInfo:] */

void FUN_106f25508(long param_1,undefined *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  long alStack_c8 [2];
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(long *)(param_1 + 0x90) = param_3;
  _objc_release(uVar2);
  if (param_3 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(ulong *)(param_3 + 8);
  }
  _objc_retain(uVar18);
  uVar3 = uVar18;
  func_0x00010c0c4300();
  uVar4 = uVar18;
  if (uVar3 == 0) {
    func_0x00010c23fb40(uVar18);
  }
  else {
    func_0x00010c0c4300(uVar18);
  }
  puVar19 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar19);
  puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0xc0) != 0) {
    alStack_c8[1] = 0;
    puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    if (puVar15 != (undefined *)0x0) {
      func_0x00010bef7f60(puVar19);
    }
    _objc_release(puVar15);
  }
  uStack_98 = *(undefined8 *)(param_1 + 0x98);
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e8ddd8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e8ddf8;
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e8de18;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar15;
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8de38;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar5;
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar19);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar15);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c08b6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  alStack_c8[0] = 0;
  plVar16 = alStack_c8;
  puVar15 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = alStack_c8[0];
  _objc_retain(alStack_c8[0]);
  func_0x00010c228dc0(uVar2);
  _objc_release(puVar15);
  if (*(char *)(param_1 + 200) == '\x01') {
    if (*(char *)(param_1 + 0xc9) == '\x01') {
      puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c052380((double)uVar4 / 1000.0);
      func_0x00010c228da0(uVar2);
      _objc_release(puVar15);
    }
    else {
      func_0x00010bf3b6c0(uVar2);
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf976a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = (undefined *)0x7;
  func_0x00010c11c120();
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(lVar17);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar15);
  _os_unfair_lock_lock(param_3 + 0xb8);
  if (*(char *)(param_3 + 0xbc) == '\x01') {
    bVar1 = *(byte *)(param_3 + 0xbd);
    _os_unfair_lock_unlock(param_3 + 0xb8);
    if ((bVar1 & 1) != 0) {
      puVar9 = *(undefined **)(param_3 + 0x98);
      func_0x00010bf529e0();
      puVar5 = puVar15;
      func_0x00010bf529e0();
      ppuVar10 = &PTR____CFConstantStringClassReference_110daafd8;
      func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110daafd8);
      func_0x00010c08fa60();
      puVar19 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((ppuVar10 == (undefined **)0x0) && (puVar5 < puVar9)) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *plVar16 = (long)puVar19;
        _objc_release(puVar6);
        _objc_release(puVar9);
        _objc_release(puVar5);
        puVar19 = (undefined *)0x0;
        goto LAB_106f25a6c;
      }
      puVar11 = puVar15;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf529e0();
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar12 == puVar5) {
        if (puVar9 + 1 < puVar5) {
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf529e0(puVar11);
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106f25c08;
        }
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        if ((undefined *)0x1 < puVar5) {
          puVar19 = (undefined *)0x1;
          do {
            puVar12 = puVar15;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar12;
            func_0x00010bf4c860();
            _objc_release(puVar12);
            if (((ulong)puVar13 & 1) == 0) {
              puVar12 = puVar11;
              func_0x00010c0dfd40(puVar11);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = *(undefined8 *)(param_3 + 0x98);
              func_0x00010c0dfd40(uVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar6);
              _objc_release(uVar2);
              _objc_release(puVar12);
            }
            puVar19 = puVar19 + 1;
          } while (puVar5 != puVar19);
        }
        puVar5 = puVar11;
        func_0x00010bf529e0();
        if ((undefined *)0x1 < puVar5) {
          puVar12 = puVar6;
          func_0x00010bf529e0();
          puVar19 = puVar11;
          if (puVar12 == puVar9) {
            func_0x00010bf529e0(puVar11);
            func_0x00010c25e980();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar19;
            func_0x00010bf529e0();
            if ((puVar9 != (undefined *)0x0) &&
               (func_0x00010bf46ee0(*(undefined8 *)(param_3 + 0x68)), *plVar16 != 0)) {
              _objc_release(puVar11);
              goto LAB_106f25c58;
            }
            _objc_release(puVar19);
            goto LAB_106f25dd0;
          }
          puVar12 = puVar6;
          func_0x00010bf529e0();
          if (((puVar12 == (undefined *)0x0) ||
              (puVar12 = puVar6, func_0x00010bf529e0(), puVar9 <= puVar12)) ||
             (func_0x00010bf46f00(*(undefined8 *)(param_3 + 0x68)), *plVar16 == 0))
          goto LAB_106f25dd0;
          goto LAB_106f25c58;
        }
LAB_106f25dd0:
        func_0x00010bfb1920(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar14 = param_3;
        func_0x00010be2e6c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar14 == 0) {
LAB_106f25ea0:
          puVar19 = (undefined *)0x0;
        }
        else {
          puVar19 = puVar15;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar19 == (undefined *)0x0) goto LAB_106f25ea0;
          puVar19 = PTR_PTR_1126d3390;
          _objc_alloc(PTR_PTR_1126d3390);
          puVar9 = puVar15;
          func_0x00010bfb1920(puVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar9;
          func_0x00010c1494c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c041360(puVar19);
          _objc_release(puVar12);
          _objc_release(puVar9);
        }
        if ((undefined *)0x1 < puVar5) {
          func_0x00010bf3a000(*(undefined8 *)(param_3 + 0x68));
        }
        _objc_release(puVar11);
        _objc_release(lVar14);
      }
      else {
        func_0x00010bf529e0(puVar11);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
LAB_106f25c08:
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *plVar16 = (long)puVar6;
        _objc_release(puVar9);
        _objc_release(puVar5);
        puVar6 = puVar11;
LAB_106f25c58:
        _objc_release(puVar19);
        puVar19 = (undefined *)0x0;
      }
      _objc_release(puVar6);
      goto LAB_106f25a6c;
    }
  }
  else {
    _os_unfair_lock_unlock(param_3 + 0xb8);
  }
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  puVar19 = (undefined *)0x0;
  *plVar16 = (long)puVar5;
LAB_106f25a6c:
  _objc_release(puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    func_0x00010c1494c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_2;
    func_0x00010c1494c0();
    _CMSampleBufferGetImageBuffer();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 106f25888; end: 106f25ed3; -[SCSnapRendererLensEffectPluginImpl _processVideoInputs:timestamp:error:] */

void FUN_106f25888(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
                  long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xb8);
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0xbd);
    _os_unfair_lock_unlock(param_1 + 0xb8);
    if ((bVar1 & 1) != 0) {
      puVar2 = *(undefined **)(param_1 + 0x98);
      func_0x00010bf529e0();
      puVar4 = param_3;
      func_0x00010bf529e0();
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110daafd8);
      func_0x00010c08fa60();
      puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((ppuVar3 == (undefined **)0x0) && (puVar4 < puVar2)) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_5 = (long)puVar12;
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar4);
        puVar12 = (undefined *)0x0;
        goto LAB_106f25a6c;
      }
      puVar5 = param_3;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf529e0();
      puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar6 == puVar4) {
        if (puVar2 + 1 < puVar4) {
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf529e0(puVar5);
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106f25c08;
        }
        puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        if ((undefined *)0x1 < puVar4) {
          puVar12 = (undefined *)0x1;
          do {
            puVar6 = param_3;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            func_0x00010bf4c860();
            _objc_release(puVar6);
            if (((ulong)puVar8 & 1) == 0) {
              puVar6 = puVar5;
              func_0x00010c0dfd40(puVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = *(undefined8 *)(param_1 + 0x98);
              func_0x00010c0dfd40(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar7);
              _objc_release(uVar9);
              _objc_release(puVar6);
            }
            puVar12 = puVar12 + 1;
          } while (puVar4 != puVar12);
        }
        puVar4 = puVar5;
        func_0x00010bf529e0();
        if ((undefined *)0x1 < puVar4) {
          puVar6 = puVar7;
          func_0x00010bf529e0();
          puVar12 = puVar5;
          if (puVar6 == puVar2) {
            func_0x00010bf529e0(puVar5);
            func_0x00010c25e980();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar12;
            func_0x00010bf529e0();
            if ((puVar2 != (undefined *)0x0) &&
               (func_0x00010bf46ee0(*(undefined8 *)(param_1 + 0x68)), *param_5 != 0)) {
              _objc_release(puVar5);
              goto LAB_106f25c58;
            }
            _objc_release(puVar12);
            goto LAB_106f25dd0;
          }
          puVar6 = puVar7;
          func_0x00010bf529e0();
          if (((puVar6 == (undefined *)0x0) ||
              (puVar6 = puVar7, func_0x00010bf529e0(), puVar2 <= puVar6)) ||
             (func_0x00010bf46f00(*(undefined8 *)(param_1 + 0x68)), *param_5 == 0))
          goto LAB_106f25dd0;
          goto LAB_106f25c58;
        }
LAB_106f25dd0:
        func_0x00010bfb1920(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar10 = param_1;
        func_0x00010be2e6c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 == 0) {
LAB_106f25ea0:
          puVar12 = (undefined *)0x0;
        }
        else {
          puVar12 = param_3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar12 == (undefined *)0x0) goto LAB_106f25ea0;
          puVar12 = PTR_PTR_1126d3390;
          _objc_alloc(PTR_PTR_1126d3390);
          puVar2 = param_3;
          func_0x00010bfb1920(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010c1494c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c041360(puVar12);
          _objc_release(puVar6);
          _objc_release(puVar2);
        }
        if ((undefined *)0x1 < puVar4) {
          func_0x00010bf3a000(*(undefined8 *)(param_1 + 0x68));
        }
        _objc_release(puVar5);
        _objc_release(lVar10);
      }
      else {
        func_0x00010bf529e0(puVar5);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
LAB_106f25c08:
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_5 = (long)puVar7;
        _objc_release(puVar2);
        _objc_release(puVar4);
        puVar7 = puVar5;
LAB_106f25c58:
        _objc_release(puVar12);
        puVar12 = (undefined *)0x0;
      }
      _objc_release(puVar7);
      goto LAB_106f25a6c;
    }
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0xb8);
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  puVar12 = (undefined *)0x0;
  *param_5 = (long)puVar4;
LAB_106f25a6c:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    func_0x00010c1494c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_2;
    func_0x00010c1494c0();
    _CMSampleBufferGetImageBuffer();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106f25ed4; end: 106f25f1f;  */

void FUN_106f25ed4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1494c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c1494c0();
  _CMSampleBufferGetImageBuffer();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f25f20; end: 106f25fe7; -[SCSnapRendererLensEffectPluginImpl _handlePrimaryStreamPixelBuffer:timestamp:error:] */

void FUN_106f25f20(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((*(byte *)(param_1 + 0xca) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    uVar1 = param_3;
    _CVPixelBufferGetWidth(param_3);
    uVar2 = param_3;
    _CVPixelBufferGetHeight(param_3);
    func_0x00010bf47600((double)uVar1,(double)uVar2,uVar3);
    *(undefined1 *)(param_1 + 0xca) = 1;
  }
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = param_4[2];
  func_0x00010be081c0(param_1,param_2,&uStack_70);
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = param_4[2];
  func_0x00010be81ce0(param_1,param_2,param_3,&uStack_70,param_5);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f25fe8; end: 106f2606f; -[SCSnapRendererLensEffectPluginImpl _initializeResourceIdsForInputCount:] */

void FUN_106f25fe8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = puVar1;
  while (param_3 = param_3 + -1, param_3 != 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release();
  }
  puVar2 = puVar1;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f26070; end: 106f26207; -[SCSnapRendererLensEffectPluginImpl _prepareMusicResourcesWithSnapInfo:] */

void FUN_106f26070(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x18);
  }
  lVar2 = param_1;
  func_0x00010be413e0(param_1,param_2,uVar6);
  if ((int)lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x88);
    func_0x00010c08fa60();
    puVar4 = PTR_PTR_1126bf9b8;
    puVar5 = PTR_PTR_1126ae960;
    if (lVar2 == 0) {
      puVar5 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,PTR____kCFBooleanFalse_11034ab60);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106f261ac;
    }
    puVar3 = PTR_PTR_1126c66f8;
    func_0x00010c11e460(PTR_PTR_1126c66f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ebc0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c7a60(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126d3398;
    _objc_alloc(PTR_PTR_1126d3398);
    func_0x00010c024a00();
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ffc60();
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  else {
    func_0x00010bf43d60(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68);
  }
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_106f261ac:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106f26208; end: 106f26217; -[SCSnapRendererLensEffectPluginImpl _isInvalidMusicTrackId:] */

bool FUN_106f26208(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 + 1U < 2;
}



/* Entry: 106f26218; end: 106f263ff; -[SCSnapRendererLensEffectPluginImpl _emitPlaybackEventForRenderTimestamp:] */

void FUN_106f26218(ulong param_1,undefined8 param_2,double *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  double *pdVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  
  uVar2 = param_1;
  func_0x00010c0766e0();
  if (((int)uVar2 != 0) && (uVar2 = param_1, func_0x00010be413e0(), (uVar2 & 1) == 0)) {
    dStack_78 = param_3[1];
    dStack_80 = *param_3;
    dStack_70 = param_3[2];
    uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    pdVar3 = &dStack_80;
    _CMTimeCompare(pdVar3,&uStack_a0);
    if ((int)pdVar3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      _objc_retain(uVar1);
      puVar4 = PTR_PTR_1126d33a0;
      _objc_alloc(PTR_PTR_1126d33a0);
      puVar5 = PTR_PTR_1126d33a8;
      func_0x00010c256f80(PTR_PTR_1126d33a8);
      _objc_retainAutoreleasedReturnValue();
      dVar9 = 0.0;
      func_0x00010c0249e0(0,puVar4);
      _objc_release(puVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff2c0();
      _objc_release(uVar6);
      puVar5 = PTR_PTR_1126d33a0;
      _objc_alloc(PTR_PTR_1126d33a0);
      lVar8 = *(long *)(param_1 + 0x90);
      if (lVar8 == 0) {
        dStack_80 = 0.0;
        dStack_78 = 0.0;
        dStack_70 = 0.0;
      }
      else {
        dStack_78 = *(double *)(lVar8 + 0x28);
        dVar9 = *(double *)(lVar8 + 0x20);
        dStack_70 = *(double *)(lVar8 + 0x30);
        dStack_80 = dVar9;
      }
      _CMTimeGetSeconds(&dStack_80);
      puVar7 = PTR_PTR_1126d33a8;
      func_0x00010c101220(PTR_PTR_1126d33a8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0249e0(dVar9 * 1000.0,puVar5);
      _objc_release(puVar4);
      _objc_release(puVar7);
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010c0ff2c0(uVar6);
      _objc_release(uVar6);
      _objc_release(puVar5);
    }
  }
  return;
}



/* Entry: 106f26400; end: 106f265c3; -[SCSnapRendererLensEffectPluginImpl _didCompleteLensWarmupWithProcessingComponents:] */

void FUN_106f26400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010c1159a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  if (lVar2 == 0) {
    lVar6 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar6);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar6;
  _objc_release(uVar1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126d33b0;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010bf9e660(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011440();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c29f520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = param_3;
  func_0x00010c0cc620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58020();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f265c4; end: 106f265f7;  */

void FUN_106f265c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde5020(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f265f8; end: 106f26707; -[SCSnapRendererLensEffectPluginImpl _configureExternalStreams] */

void FUN_106f265f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_38;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    return;
  }
  _objc_retain(lVar3);
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d33b8;
    _objc_alloc(PTR_PTR_1126d33b8);
    func_0x00010c03fa00();
    func_0x00010c2296a0(lVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  lVar1 = param_1;
  func_0x00010c0766e0();
  if ((int)lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e8ddb8,
                        &PTR____CFConstantStringClassReference_110e8e018,0x15);
    _objc_retainAutoreleasedReturnValue();
LAB_106f266d8:
    func_0x00010bde2fe0(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x98);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      puStack_38 = (undefined *)0x0;
      func_0x00010bef8200(lVar3,param_2,*(undefined8 *)(param_1 + 0x88),
                          *(undefined8 *)(param_1 + 0x98),&puStack_38);
      puVar2 = puStack_38;
      _objc_retain(puStack_38);
      if (puVar2 != (undefined *)0x0) goto LAB_106f266d8;
    }
    func_0x00010bde3000(param_1,param_2,1);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 106f26708; end: 106f2681b; -[SCSnapRendererLensEffectPluginImpl _processPixelBuffer:timestamp:error:] */

void FUN_106f26708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c115b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010c115b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b51c0();
    func_0x00010c21dbc0(lVar2,param_2,1);
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    uStack_50 = param_4[2];
    lStack_48 = 0;
    lVar3 = lVar2;
    func_0x00010c115100(lVar2,param_2,param_3,7,&uStack_60,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_48;
    _objc_retain(lStack_48);
    if ((lVar1 == 0) && (lVar3 != 0)) {
      _objc_retain(lVar3);
      lVar4 = lVar3;
    }
    else if (param_5 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      _objc_retainAutorelease(lVar1);
      lVar4 = 0;
      *param_5 = lVar1;
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106f2681c; end: 106f2691f; -[SCSnapRendererLensEffectPluginImpl _snapRendererErrorFromPreparationError:] */

void FUN_106f2681c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c071ae0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
LAB_106f268d4:
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99280(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e877f8,
                        &PTR____CFConstantStringClassReference_110e8e038,0xd,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010bf3ec40();
    if (lVar1 == 4) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e8dd18;
      uVar5 = 0xf;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf3ec40();
      if (lVar1 != 5) goto LAB_106f268d4;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e8dd58;
      uVar5 = 0x11;
    }
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e877f8,ppuVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f26920; end: 106f26927; -[SCSnapRendererLensEffectPluginImpl _reportNonFatalWithError:] */

void FUN_106f26920(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8fe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__reportNonFatalWithError_lensId__112581928,param_3,
             *(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 106f26928; end: 106f26a63; -[SCSnapRendererLensEffectPluginImpl _reportNonFatalWithError:lensId:] */

void FUN_106f26928(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b3e90;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    func_0x00010c1bd4a0();
    puVar2 = PTR_PTR_1126bb918;
    _objc_alloc_init(PTR_PTR_1126bb918);
    func_0x00010c1eab40();
    func_0x00010c1e3de0(puVar2,param_2,8);
    lVar3 = param_4;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      func_0x00010c162840(puVar2,param_2,param_4);
    }
    puVar4 = PTR_PTR_1126b8460;
    _objc_alloc_init(PTR_PTR_1126b8460);
    func_0x00010c1bd640();
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = param_3;
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar5 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(uVar6,param_2,puVar1,puVar4,lVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106f26a64; end: 106f26a93; -[SCSnapRendererLensEffectPluginImpl setIsLensPluginEnabled:] */

void FUN_106f26a64(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0xbc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xb8);
  return;
}



/* Entry: 106f26a94; end: 106f26ac7; -[SCSnapRendererLensEffectPluginImpl isLensPluginEnabled] */

undefined1 FUN_106f26a94(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xb8);
  uVar1 = *(undefined1 *)(param_1 + 0xbc);
  _os_unfair_lock_unlock(param_1 + 0xb8);
  return uVar1;
}



/* Entry: 106f26ac8; end: 106f26af7; -[SCSnapRendererLensEffectPluginImpl setIsPreparationCompleted:] */

void FUN_106f26ac8(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0xbd) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xb8);
  return;
}



/* Entry: 106f26af8; end: 106f26b2b; -[SCSnapRendererLensEffectPluginImpl isPreparationCompleted] */

undefined1 FUN_106f26af8(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xb8);
  uVar1 = *(undefined1 *)(param_1 + 0xbd);
  _os_unfair_lock_unlock(param_1 + 0xb8);
  return uVar1;
}



/* Entry: 106f26b2c; end: 106f26c53; -[SCSnapRendererLensEffectPluginImpl .cxx_destruct] */

void FUN_106f26b2c(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
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



/* Entry: 106f26c54; end: 106f26da3; -[SCSnapRendererMemoriesLivePlaybackEntryPoint end] */

void FUN_106f26c54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c0c9b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_1126f7d50;
    plVar4 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x00010c0c9b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0c9b60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0c9b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106f26da4;
    puStack_50 = &UNK_110842e18;
    lStack_48 = lVar3;
    _objc_retain(lVar3);
    func_0x00010c0f7fc0(lVar2);
    puStack_70 = PTR_PTR_1126f7d50;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_48);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 106f26da4; end: 106f26e1f;  */

void FUN_106f26da4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f26e20; end: 106f26f73; -[SCSnapRendererMemoriesLivePlaybackEntryPoint _createLensContentPreparationStrategyWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f26e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127612a4;
    _objc_loadWeakRetained(lVar6);
  }
  lVar1 = lVar6;
  func_0x00010bf398e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126d3378;
  _objc_alloc(PTR_PTR_1126d3378);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = lVar1;
  func_0x000108ec19b8(lVar1);
  func_0x00010c0df780(puVar3,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = lVar1;
  func_0x000108ec1990(lVar1);
  func_0x00010c0df780(puVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_11276129c;
    _objc_loadWeakRetained(lVar6);
  }
  lVar5 = lVar6;
  func_0x00010bf04760(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027cc0(puVar2,param_2,puVar3,puVar4,lVar5,param_3);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f26f74; end: 106f27077; -[SCSnapRendererMemoriesLivePlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f26f74(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127612b4);
  _objc_destroyWeak(param_1 + _DAT_1127612b0);
  _objc_destroyWeak(param_1 + _DAT_1127612ac);
  _objc_destroyWeak(param_1 + _DAT_1127612a8);
  _objc_destroyWeak(param_1 + _DAT_1127612a4);
  _objc_destroyWeak(param_1 + _DAT_1127612a0);
  _objc_destroyWeak(param_1 + _DAT_11276129c);
  _objc_destroyWeak(param_1 + _DAT_112761298);
  _objc_destroyWeak(param_1 + _DAT_112761294);
  _objc_destroyWeak(param_1 + _DAT_112761284);
  _objc_destroyWeak(param_1 + _DAT_112761290);
  _objc_destroyWeak(param_1 + _DAT_11276128c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112761288);
  return;
}



/* Entry: 106f27078; end: 106f271c7; -[SCSnapRendererMemoriesPlaybackEntryPoint end] */

void FUN_106f27078(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c0c9b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_1126f7d58;
    plVar4 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x00010c0c9b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0c9b60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0c9b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106f271c8;
    puStack_50 = &UNK_110842e18;
    lStack_48 = lVar3;
    _objc_retain(lVar3);
    func_0x00010c0f7fc0(lVar2);
    puStack_70 = PTR_PTR_1126f7d58;
    plVar4 = &lStack_78;
    lStack_78 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_48);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 106f271c8; end: 106f271fb;  */

void FUN_106f271c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f271fc; end: 106f2734f; -[SCSnapRendererMemoriesPlaybackEntryPoint _createLensContentPreparationStrategyWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f271fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127612d8;
    _objc_loadWeakRetained(lVar6);
  }
  lVar1 = lVar6;
  func_0x00010bf398e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126d3378;
  _objc_alloc(PTR_PTR_1126d3378);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = lVar1;
  func_0x000108ec19b8(lVar1);
  func_0x00010c0df780(puVar3,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = lVar1;
  func_0x000108ec1990(lVar1);
  func_0x00010c0df780(puVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_1127612d0;
    _objc_loadWeakRetained(lVar6);
  }
  lVar5 = lVar6;
  func_0x00010bf04760(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027cc0(puVar2,param_2,puVar3,puVar4,lVar5,param_3);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f27350; end: 106f27417; -[SCSnapRendererMemoriesPlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f27350(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127612ec);
  _objc_destroyWeak(param_1 + _DAT_1127612e8);
  _objc_destroyWeak(param_1 + _DAT_1127612e4);
  _objc_destroyWeak(param_1 + _DAT_1127612e0);
  _objc_destroyWeak(param_1 + _DAT_1127612dc);
  _objc_destroyWeak(param_1 + _DAT_1127612d8);
  _objc_destroyWeak(param_1 + _DAT_1127612d4);
  _objc_destroyWeak(param_1 + _DAT_1127612d0);
  _objc_destroyWeak(param_1 + _DAT_1127612cc);
  _objc_destroyWeak(param_1 + _DAT_1127612c8);
  _objc_destroyWeak(param_1 + _DAT_1127612b8);
  _objc_destroyWeak(param_1 + _DAT_1127612c4);
  _objc_destroyWeak(param_1 + _DAT_1127612c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127612bc);
  return;
}



/* Entry: 106f27418; end: 106f274c3; -[SCLensExternalTextureStreamLaunchConfig initWithResourceIds:lensId:] */

undefined1 *
FUN_106f27418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7d60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f274c4; end: 106f274e7; -[SCLensExternalTextureStreamLaunchConfig copyWithZone:] */

undefined8 FUN_106f274c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f274e8; end: 106f2755b; -[SCLensExternalTextureStreamLaunchConfig hash] */

undefined8 * FUN_106f274e8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106f275dc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106f275e8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106f275e8;
        }
        goto LAB_106f275dc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106f275e8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106f2755c; end: 106f27603; -[SCLensExternalTextureStreamLaunchConfig isEqual:] */

long FUN_106f2755c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106f275dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106f275e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106f275e8;
        }
        goto LAB_106f275dc;
      }
    }
    lVar3 = 0;
  }
LAB_106f275e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106f27604; end: 106f2760b; -[SCLensExternalTextureStreamLaunchConfig resourceIds] */

undefined8 FUN_106f27604(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f2760c; end: 106f27613; -[SCLensExternalTextureStreamLaunchConfig lensId] */

undefined8 FUN_106f2760c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f27614; end: 106f27643; -[SCLensExternalTextureStreamLaunchConfig .cxx_destruct] */

void FUN_106f27614(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f27644; end: 106f27673; -[SCSRLensEffectPluginCameraLifecycleProxyServices .cxx_destruct] */

void FUN_106f27644(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f27674; end: 106f276bf; +[SCSRCameraLifecycleEvent cameraDidDisappear] */

void FUN_106f27674(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3358;
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



/* Entry: 106f276c0; end: 106f2770b; +[SCSRCameraLifecycleEvent cameraSessionDidStartRunning] */

void FUN_106f276c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3358;
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



/* Entry: 106f2770c; end: 106f27757; +[SCSRCameraLifecycleEvent cameraSessionDidStopRunning] */

void FUN_106f2770c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3358;
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



/* Entry: 106f27758; end: 106f2777b; -[SCSRCameraLifecycleEvent copyWithZone:] */

undefined8 FUN_106f27758(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f2777c; end: 106f27783; -[SCSRCameraLifecycleEvent hash] */

undefined8 FUN_106f2777c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f27784; end: 106f2780b; -[SCSRCameraLifecycleEvent isEqual:] */

bool FUN_106f27784(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106f2780c; end: 106f278df; -[SCSRCameraLifecycleEvent matchCameraWillAppear:cameraDidDisappear:cameraSessionDidStartRunning:cameraSessionDidStopRunning:] */

void FUN_106f2780c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_106f27898;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_106f27898;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_106f27898:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f278e0; end: 106f27a0f; -[SCContentProductSnapRendererImpl preparePlaybackModel:destination:] */

void FUN_106f278e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d33c0;
  _objc_alloc();
  func_0x00010c055280();
  puVar3 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106f27a10;
  puStack_70 = &UNK_110983788;
  _objc_retain(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puStack_68 = puVar2;
  lStack_60 = param_1;
  uStack_58 = param_3;
  puStack_50 = puVar3;
  uStack_48 = param_4;
  _objc_retain(puVar3);
  _objc_retain(param_3);
  func_0x00010c0f98a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5,param_2,&puStack_88,uVar4);
  _objc_release(uVar4);
  puVar1 = puStack_50;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_58);
  _objc_release(puStack_68);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f27a10; end: 106f27bbf;  */

void FUN_106f27a10(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar2 + 0x10) != 0) {
      func_0x00010c109d00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain();
      func_0x00010c178000(uVar5);
      lVar3 = lVar2;
      func_0x00010c1178e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      lVar4 = lVar3;
      func_0x00010c25ff60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010c13cb40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      func_0x00010c297260(lVar3);
      _objc_release(lVar3);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(lVar2);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106f27bc0; end: 106f27bc7;  */

void FUN_106f27bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106f27bc8; end: 106f27bef;  */

void FUN_106f27bc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb2c80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c288d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_updateProgress__11267fd70);
  return;
}



/* Entry: 106f27bf0; end: 106f27c07;  */

void FUN_106f27bf0(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithPlaybackPackage__1125ae8e0,param_2)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}


