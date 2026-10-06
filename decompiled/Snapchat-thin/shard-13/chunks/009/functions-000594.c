/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae97aa0; end: 10ae97aff;  */

void FUN_10ae97aa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126de300;
  _objc_alloc(PTR_PTR_1126de300);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c1290a0(uVar5);
  func_0x00010c024e80((double)(int)uVar5,puVar4,param_2,uVar1,uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae97b00; end: 10ae97b6f;  */

void FUN_10ae97b00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126de268;
  _objc_alloc(PTR_PTR_1126de268);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR_PTR_1126de308;
  func_0x00010bddc720(PTR_PTR_1126de308,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa980(puVar2,param_2,uVar1,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae97b70; end: 10ae97c33;  */

void FUN_10ae97b70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa9040();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126de2c0;
  _objc_alloc(PTR_PTR_1126de2c0);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa960(puVar5,param_2,uVar3,uVar2,uVar1,uVar7,uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae97c34; end: 10ae97cdf;  */

void FUN_10ae97c34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126de280;
  _objc_alloc(PTR_PTR_1126de280);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010bffd5c0(puVar1,param_2,uVar3,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c13e140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ca0(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae97ce0; end: 10ae97f07; -[SCLensCentralizedDataStoreFactoryV2 _additionalRegularNamespaceServicesForCustomNamespace:] */

void FUN_10ae97ce0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0d3c80();
  func_0x00010c12d360();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    lStack_178 = param_3;
    func_0x00010bf529e0(lVar1);
    func_0x00010bf0a0e0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_140,auStack_100,0x10);
    if (lVar2 != 0) {
      lVar10 = *plStack_130;
      do {
        lVar11 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(lVar1);
          }
          uVar8 = *(undefined8 *)(lStack_138 + lVar11 * 8);
          uVar4 = *(ulong *)(param_1 + 0x10);
          func_0x00010bf4b900(uVar4,param_2,uVar8);
          if ((uVar4 & 1) == 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            _objc_retain(uVar9);
            puVar7 = PTR_PTR_1126ae720;
            puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_168 = 0xc2000000;
            pcStack_160 = FUN_10ae97f08;
            puStack_158 = &UNK_110c8d1c0;
            uStack_150 = uVar8;
            uStack_148 = uVar9;
            _objc_retain(uVar9);
            func_0x00010bf11fe0(puVar7,param_2,&puStack_170);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3,param_2,puVar7);
            _objc_release(puVar7);
            _objc_release(uStack_148);
            _objc_release(uVar9);
          }
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_140,auStack_100,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    puVar7 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    param_3 = lStack_178;
    unaff_x22 = puVar3;
  }
  _objc_release(lVar1);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_188 = FUN_10ae97f08;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR_PTR_1126b6868;
    puStack_1b0 = unaff_x22;
    puStack_1a8 = puVar7;
    lStack_1a0 = lVar1;
    lStack_198 = param_3;
    puStack_190 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010c02dd60();
    puVar5 = *(undefined **)(lVar2 + 0x28);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1c0 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1c0,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c15f740(puVar5,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar7 = PTR_PTR_1126de2d0;
    _objc_alloc();
    puVar5 = puVar6;
    func_0x00010c02dd20();
    _objc_release(puVar6);
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c0680e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10ae97f08; end: 10ae98003;  */

void FUN_10ae97f08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6868;
  _objc_alloc();
  func_0x00010c02dd60();
  puVar2 = *(undefined **)(param_1 + 0x28);
  func_0x00010c269d40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c15f740(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126de2d0;
  _objc_alloc();
  puVar2 = puVar4;
  func_0x00010c02dd20();
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0680e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ae98004; end: 10ae9804b; +[SCLensCentralizedDataStoreFactoryV2 _centralizedDataStorePerformerWithProvider:] */

void FUN_10ae98004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae9804c; end: 10ae98263; -[SCLensCentralizedDataStoreFactoryV2 _subscribeOnAppLifecycleEvents:] */

void FUN_10ae9804c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar7);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10ae98264;
  puStack_80 = &UNK_11084ca60;
  uStack_78 = uVar7;
  _objc_retain(uVar7);
  uVar8 = uVar5;
  func_0x00010c25ff60(uVar5,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar8);
  puVar6 = PTR_PTR_1126de308;
  func_0x00010bddc720(PTR_PTR_1126de308,param_2,*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf79200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10ae98298;
  puStack_a8 = &UNK_110c8d2b0;
  uStack_a0 = uVar8;
  _objc_retain(uVar8);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4,param_2,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_a0);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(uStack_78);
  _objc_release(uVar7);
  return;
}



/* Entry: 10ae98264; end: 10ae982cb;  */

void FUN_10ae98264(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ae982cc; end: 10ae9837f; -[SCLensCentralizedDataStoreFactoryV2 .cxx_destruct] */

void FUN_10ae982cc(long param_1)

{
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



/* Entry: 10ae98380; end: 10ae98483; -[SCLensCentralizedMetadataStore initWithCacheRetriever:networkRetriever:dataUpdater:performer:fetchOnlyNonCachedItems:] */

undefined1 *
FUN_10ae98380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_112701560;
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
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ae98484; end: 10ae98513; -[SCLensCentralizedMetadataStore cachedLensMetadataArrayWithIds:] */

void FUN_10ae98484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf272a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf43280(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110c8d2e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10ae98514; end: 10ae98523;  */

void FUN_10ae98514(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde9030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de2c0,PTR_s__convertCacheRetrievalResults__112557da8,param_2);
  return;
}



/* Entry: 10ae98524; end: 10ae986fb; -[SCLensCentralizedMetadataStore lensMetadataWithId:featureAttribution:] */

void FUN_10ae98524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0952c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar7);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0952a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10ae986fc;
    puStack_a0 = &UNK_110c8d330;
    puStack_98 = puVar3;
    lStack_90 = param_1;
    uStack_88 = uVar5;
    uStack_68 = param_4;
    _objc_retain(param_3);
    uStack_80 = param_3;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    _objc_retain(uVar5);
    _objc_retain(puVar3);
    func_0x00010c297260(uVar2,param_2,&puStack_b8,uVar6);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(puStack_98);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10ae986fc; end: 10ae9891f;  */

void FUN_10ae986fc(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 != (undefined *)0x0) {
    ppuVar9 = (undefined **)PTR_PTR_1126de2c0;
    func_0x00010bde9000();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar9;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar9;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126de2c0;
    func_0x00010be44640();
    if ((int)puVar3 != 0) {
      ppuVar8 = ppuVar1;
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      if (ppuVar2 != (undefined **)0x0) {
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_60 = ppuVar2;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar4;
        func_0x00010bee0900(uVar12);
        _objc_release(ppuVar4);
      }
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
      goto LAB_10ae988d0;
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    _objc_release(ppuVar9);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010c0952c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10ae98920;
  puStack_80 = &UNK_110c8d300;
  ppuVar9 = *(undefined ***)(param_1 + 0x38);
  _objc_retain(ppuVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  ppuStack_78 = ppuVar9;
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar10;
  _objc_retain(uVar11);
  ppuVar8 = &puStack_98;
  uStack_68 = uVar11;
  func_0x00010c297260(uVar12);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  ppuVar9 = ppuStack_78;
LAB_10ae988d0:
  _objc_release(ppuVar9);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(ppuVar8);
  _objc_retain(puVar7);
  puVar3 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c092640(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126de278;
    func_0x00010bf993a0(PTR_PTR_1126de278);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126de2c0;
  func_0x00010be4b500();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    uVar12 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef97c0();
    _objc_release(uVar12);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x30));
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10ae98920; end: 10ae98a23;  */

void FUN_10ae98920(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  puVar2 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010c092640(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126de278;
    func_0x00010bf993a0(PTR_PTR_1126de278);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126de2c0;
  func_0x00010be4b500();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef97c0();
    _objc_release(uVar3);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ae98a24; end: 10ae98f2f; -[SCLensCentralizedMetadataStore lensMetadataArrayWithIds:featureAttribution:] */

void FUN_10ae98a24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    puVar4 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c094fe0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar8);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c094fc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10ae98c04;
    puStack_a8 = &UNK_1108b8d20;
    _objc_retain(param_3);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = param_3;
    puStack_98 = puVar4;
    lStack_90 = param_1;
    uStack_88 = uVar6;
    uStack_80 = uVar8;
    uStack_78 = uVar7;
    uStack_70 = param_4;
    uStack_68 = uVar1;
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    _objc_retain(uVar6);
    _objc_retain(puVar4);
    func_0x00010c297260(uVar3,param_2,&puStack_c0,uVar9);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(puStack_98);
    _objc_release(uStack_a0);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10ae98f30; end: 10ae98f4f;  */

uint FUN_10ae98f30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10ae98f50; end: 10ae99083;  */

void FUN_10ae98f50(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf529e0();
  puVar2 = param_2;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126de2c0;
    func_0x00010be0b120(PTR_PTR_1126de2c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  puVar1 = PTR_PTR_1126de2c0;
  func_0x00010be5fbc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c154b60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9800();
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar4 = puVar1;
  func_0x00010bfb0d80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ae99084; end: 10ae9917f; +[SCLensCentralizedMetadataStore _convertCacheRetrievalResult:] */

void FUN_10ae99084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10ae99180;
  uStack_30 = 0x10ae99190;
  uStack_28 = 0;
  func_0x00010c0c0740(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae99180; end: 10ae99197;  */

void FUN_10ae99180(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10ae99198; end: 10ae99293;  */

void FUN_10ae99198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126de278;
  uVar3 = param_2;
  func_0x00010c08fb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2615e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010c0d7500();
  uVar5 = 0;
  if ((int)uVar3 != 0) {
    uVar3 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ae99294; end: 10ae99307;  */

void FUN_10ae99294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126de278;
  func_0x00010bf993a0(PTR_PTR_1126de278,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ae99308; end: 10ae99517; +[SCLensCentralizedMetadataStore _convertCacheRetrievalResultsWithStaleIds:] */

void FUN_10ae99308(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR_PTR_1126de2c0;
        func_0x00010bde9000(PTR_PTR_1126de2c0,param_2,*(undefined8 *)(lStack_128 + lVar13 * 8));
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfb0d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar5);
        _objc_release(puVar5);
        puVar5 = puVar4;
        func_0x00010c154b60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 != (undefined *)0x0) {
          puVar5 = puVar4;
          func_0x00010c154b60(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,puVar5);
          _objc_release(puVar5);
        }
        _objc_release(puVar4);
        lVar13 = lVar13 + 1;
      } while (lVar3 != lVar13);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b60f8;
  puVar5 = puVar1;
  func_0x00010bf51e00();
  puVar6 = puVar2;
  func_0x00010bf51e00();
  puVar7 = puVar5;
  puVar8 = puVar6;
  func_0x00010c0f2b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10ae99518;
  puStack_170 = puVar6;
  puStack_168 = puVar5;
  puStack_160 = puVar4;
  puStack_158 = puVar2;
  puStack_150 = puVar1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar1 = puVar7;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    uVar9 = *(undefined8 *)(lVar3 + 0x10);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(lVar3 + 0x18);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(lVar3 + 0x20);
    _objc_retain(uVar11);
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_10ae99630;
    puStack_1a0 = &UNK_110863fc8;
    uStack_198 = uVar9;
    _objc_retain(puVar7);
    puStack_190 = puVar7;
    uStack_188 = uVar10;
    uStack_180 = uVar11;
    puStack_178 = puVar8;
    _objc_retain(uVar11);
    _objc_retain(uVar10);
    _objc_retain(uVar9);
    func_0x00010c0f7fc0(uVar11,param_2,&puStack_1b8);
    _objc_release(uStack_180);
    _objc_release(uStack_188);
    _objc_release(puStack_190);
    _objc_release(uStack_198);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
  _objc_release(puVar7);
  return;
}



/* Entry: 10ae99518; end: 10ae9962f; -[SCLensCentralizedMetadataStore _updateStaleMetadata:featureAttribution:] */

void FUN_10ae99518(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10ae99630;
    puStack_70 = &UNK_110863fc8;
    uStack_68 = uVar2;
    _objc_retain(param_3);
    lStack_60 = param_3;
    uStack_58 = uVar3;
    uStack_50 = uVar4;
    uStack_48 = param_4;
    _objc_retain(uVar4);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_88);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
    _objc_release(uStack_68);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ae99630; end: 10ae9977b;  */

void FUN_10ae99630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c094fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10ae996ec;
  puStack_40 = &UNK_11085c638;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010c297260(uVar2,param_2,&puStack_58,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10ae9977c; end: 10ae9978b; +[SCLensCentralizedMetadataStore _convertCacheRetrievalResults:] */

void FUN_10ae9977c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8d3e0);
  return;
}



/* Entry: 10ae9978c; end: 10ae997db;  */

void FUN_10ae9978c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de2c0;
  func_0x00010bde9000(PTR_PTR_1126de2c0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae997dc; end: 10ae9989b; +[SCLensCentralizedMetadataStore _isSuccessfulResult:] */

undefined1 FUN_10ae997dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0760(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10ae9989c; end: 10ae998af;  */

void FUN_10ae9989c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10ae998b0; end: 10ae999eb; +[SCLensCentralizedMetadataStore _successfulResultsMap:] */

void FUN_10ae998b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  uStack_48 = 0x10ae9996c;
  puStack_40 = &UNK_110c8d400;
  uStack_38 = param_1;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c124d20(param_3,param_2,&puStack_58,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae999ec; end: 10ae99ad7; +[SCLensCentralizedMetadataStore _mapFailedToPending:] */

void FUN_10ae999ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ae99ad8;
  puStack_40 = &UNK_110c8d450;
  puStack_38 = puVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,uVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puStack_38);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ae99ad8; end: 10ae99c8b;  */

void FUN_10ae99ad8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10ae99180;
  uStack_30 = 0x10ae99190;
  uStack_28 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  func_0x00010c0c0760(param_2);
  if (*(char *)(puStack_88 + 3) == '\x01') {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(puStack_68 + 3) == '\x01') {
    puVar1 = PTR_PTR_1126de278;
    func_0x00010c0f7ac0(PTR_PTR_1126de278);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae99c8c; end: 10ae99cdf;  */

void FUN_10ae99c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10ae99ce0; end: 10ae99d43;  */

void FUN_10ae99ce0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ae99d44; end: 10ae99e27; +[SCLensCentralizedMetadataStore _lensIdIfSuccessful:] */

void FUN_10ae99d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10ae99180;
  uStack_30 = 0x10ae99190;
  uStack_28 = 0;
  func_0x00010c0c0760(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae99e28; end: 10ae99e67;  */

void FUN_10ae99e28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ae99e68; end: 10ae99f27; +[SCLensCentralizedMetadataStore _errorResultsForIds:networkError:] */

void FUN_10ae99e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_3);
  func_0x00010c092640(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ae99f28;
  puStack_40 = &UNK_110c8d480;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_3;
  func_0x00010c0b8600(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10ae99f28; end: 10ae99f3f;  */

void FUN_10ae99f28(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf993b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de278,PTR_s_errorWithLensId_error__1125c3e90,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10ae99f40; end: 10ae9a287; +[SCLensCentralizedMetadataStore _mergedNetworkResult:lensIds:successfulCacheResults:] */

void FUN_10ae99f40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_130;
    do {
      lVar5 = 0;
      do {
        if (*plStack_130 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)(lStack_138 + lVar5 * 8);
        uStack_170 = 0;
        uStack_160 = 0x3032000000;
        pcStack_158 = FUN_10ae99180;
        uStack_150 = 0x10ae99190;
        uStack_148 = 0;
        puStack_168 = &uStack_170;
        _objc_retain(puVar2);
        func_0x00010c0c0760(uVar6);
        if (puStack_168[5] != 0) {
          func_0x00010c1d0640(puVar1);
        }
        _objc_release(puVar2);
        __Block_object_dispose(&uStack_170,8);
        _objc_release(uStack_148);
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_retain();
  _objc_retain(puVar1);
  uVar6 = param_4;
  func_0x00010c0b8600(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar6);
  if (lVar7 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10ae9a288; end: 10ae9a35b;  */

void FUN_10ae9a288(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_release(uVar2);
  if (param_2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ae9a35c; end: 10ae9a49b;  */

void FUN_10ae9a35c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10ae9a458;
  }
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0c0760(lVar1);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) goto LAB_10ae9a424;
  }
  else {
LAB_10ae9a424:
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  __Block_object_dispose(&uStack_50,8);
LAB_10ae9a458:
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10ae9a49c; end: 10ae9a4af;  */

void FUN_10ae9a49c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10ae9a4b0; end: 10ae9a593; +[SCLensCentralizedMetadataStore _lensMetadataFromResult:] */

void FUN_10ae9a4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10ae99180;
  uStack_30 = 0x10ae99190;
  uStack_28 = 0;
  func_0x00010c0c0760(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae9a594; end: 10ae9a5cb;  */

void FUN_10ae9a594(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ae9a5cc; end: 10ae9a5eb; +[SCLensCentralizedMetadataStore _lensMetadataFromResults:] */

void FUN_10ae9a5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110c8d530);
  return;
}



/* Entry: 10ae9a5ec; end: 10ae9a863; +[SCLensCentralizedMetadataStore _logStringFromRetrievalResults:] */

void FUN_10ae9a5ec(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  _objc_retain(param_3);
  if ((param_3 == (undefined **)0x0) ||
     (ppuVar6 = param_3, func_0x00010bf529e0(),
     ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,
     ppuVar6 == (undefined **)0x0)) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110f2ee58;
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_3);
    ppuVar2 = param_3;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      lVar5 = *plStack_140;
      do {
        ppuVar6 = (undefined **)0x0;
        do {
          if (*plStack_140 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          uStack_180 = 0;
          uStack_170 = 0x3032000000;
          pcStack_168 = FUN_10ae99180;
          uStack_160 = 0x10ae99190;
          uStack_158 = 0;
          puStack_178 = &uStack_180;
          func_0x00010c0c0760(*(undefined8 *)(lStack_148 + (long)ppuVar6 * 8));
          if (puStack_178[5] != 0) {
            func_0x00010befa120(ppuVar1);
          }
          param_2 = 8;
          __Block_object_dispose(&uStack_180);
          _objc_release(uStack_158);
          ppuVar6 = (undefined **)((long)ppuVar6 + 1);
        } while (ppuVar2 != ppuVar6);
        ppuVar2 = param_3;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(param_3);
    ppuVar2 = &PTR____CFConstantStringClassReference_110db3ed8;
    ppuVar6 = ppuVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de3db8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1d3b8;
  }
  _objc_retain(ppuVar1);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_3[4] + 8) + 0x28);
  *(undefined **)(*(long *)(param_3[4] + 8) + 0x28) = puVar3;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ae9a864; end: 10ae9a90f;  */

void FUN_10ae9a864(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de3db8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e1d3b8;
  }
  _objc_retain(ppuVar1);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ae9a910; end: 10ae9a9bf;  */

void FUN_10ae9a910(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f2ee98);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10ae9a9c0; end: 10ae9aa07; -[SCLensCentralizedMetadataStore .cxx_destruct] */

void FUN_10ae9a9c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae9aa08; end: 10ae9ab5f; -[SCLensCustomNamespaceService initWithNamespaceDataProvider:metadataStoreUpdater:ttlSec:reloadTtlSec:limit:timeProvider:resetAccessDate:] */

undefined1 *
FUN_10ae9aa08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112701568;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010c0d52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x50) = param_9;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x54) = 0;
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10ae9ab60; end: 10ae9ab87; -[SCLensCustomNamespaceService retrievalObservable] */

void FUN_10ae9ab60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae9ab88; end: 10ae9abaf; -[SCLensCustomNamespaceService cacheSizeObservable] */

void FUN_10ae9ab88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae9abb0; end: 10ae9abb3; -[SCLensCustomNamespaceService cachedLensMetadataForLensId:] */

void FUN_10ae9abb0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cachedLensMetadataCacheResultFo_112553a00);
  return;
}



/* Entry: 10ae9abb4; end: 10ae9abb7; -[SCLensCustomNamespaceService cachedLensMetadataArrayForLensIds:] */

void FUN_10ae9abb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cachedLensMetadataCacheResultAr_1125539f8);
  return;
}



/* Entry: 10ae9abb8; end: 10ae9accf; -[SCLensCustomNamespaceService lensMetadataWithId:featureAttribution:] */

void FUN_10ae9abb8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_4);
  func_0x00010bf5fd80(uVar5);
  puVar1 = PTR_PTR_1126de310;
  dVar6 = param_1;
  func_0x00010c13e380(PTR_PTR_1126de310,param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x30));
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    dVar6 = dVar6 - param_1;
    func_0x00010be082a0(dVar6,param_2,param_3,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126ae558;
  puVar4 = puVar1;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    uVar5 = *(undefined8 *)(puVar1 + 0x30);
    _objc_retain(puVar4);
    func_0x00010bf5fd80(uVar5);
    puVar3 = PTR_PTR_1126de310;
    dVar7 = dVar6;
    func_0x00010c13e360(PTR_PTR_1126de310,param_3,puVar1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bf5fd80(*(undefined8 *)(puVar1 + 0x30));
    func_0x00010be082a0(dVar7 - dVar6,puVar1,param_3,puVar3);
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9acd0; end: 10ae9ad7f; -[SCLensCustomNamespaceService lensMetadataArrayWithIds:featureAttribution:] */

void FUN_10ae9acd0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_4);
  func_0x00010bf5fd80(uVar3);
  puVar1 = PTR_PTR_1126de310;
  dVar4 = param_1;
  func_0x00010c13e360(PTR_PTR_1126de310,param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x30));
  func_0x00010be082a0(dVar4 - param_1,param_2,param_3,puVar1);
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9ad80; end: 10ae9ae2f; -[SCLensCustomNamespaceService observeLensMetadatasForIds:] */

void FUN_10ae9ad80(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_4);
  func_0x00010bf5fd80(uVar3);
  puVar1 = PTR_PTR_1126de310;
  dVar4 = param_1;
  func_0x00010c13e360(PTR_PTR_1126de310,param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x30));
  func_0x00010be082a0(dVar4 - param_1,param_2,param_3,puVar1);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9ae30; end: 10ae9ae33; -[SCLensCustomNamespaceService cachedLensMetadataArrayWithIds:] */

void FUN_10ae9ae30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_observeLensMetadatasForIds__112615d50);
  return;
}



/* Entry: 10ae9ae34; end: 10ae9aedf; -[SCLensCustomNamespaceService addLensMetadata:] */

void FUN_10ae9ae34(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  if (param_3 != 0) {
    lStack_40 = param_3;
    _objc_retain(param_3);
    func_0x00010bf0a140(puVar1,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = puVar1;
    func_0x00010bef9800(param_1);
    _objc_release(puVar1);
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010be98d80(param_1,param_2,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10ae9aee0; end: 10ae9af23; -[SCLensCustomNamespaceService addLensMetadataArray:] */

void FUN_10ae9aee0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010be98d80(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ae9af24; end: 10ae9af2b; -[SCLensCustomNamespaceService saveToDisk] */

void FUN_10ae9af24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveCurrentLensMetadataWithFres_112583d00,0)
  ;
  return;
}



/* Entry: 10ae9af2c; end: 10ae9b00b; -[SCLensCustomNamespaceService _cachedLensMetadataCacheResultForLensId:] */

void FUN_10ae9af2c(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_4;
  _objc_retain(param_4);
  puVar7 = param_4;
  func_0x00010c08fa60();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = param_4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bdd8160(param_2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    _os_unfair_lock_lock(param_4 + 0x54);
    func_0x00010bf5fd80(*(undefined8 *)(param_4 + 0x30));
    puVar1 = PTR_PTR_1126de318;
    dVar8 = param_1;
    func_0x00010c095000(PTR_PTR_1126de318,param_3,puVar6,*(undefined8 *)(param_4 + 8));
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_10ae9b19c;
    puStack_c0 = &UNK_110857a38;
    puVar2 = puVar1;
    puStack_b8 = param_4;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5fd80(*(undefined8 *)(param_4 + 0x30));
    puVar3 = puVar2;
    func_0x00010bf529e0(puVar2);
    puVar4 = puVar6;
    func_0x00010bf529e0(puVar6);
    puVar5 = puVar2;
    func_0x00010bf529e0(puVar2);
    func_0x00010be08280(dVar8 - param_1,param_4,param_3,puVar3,(long)puVar4 - (long)puVar5);
    puStack_100 = puVar7;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_10ae9b1a8;
    puStack_e8 = &UNK_110c8d550;
    puVar7 = puVar2;
    puStack_e0 = param_4;
    func_0x00010c0b8600(puVar2,param_3,&puStack_100);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_4 + 0x54);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10ae9b00c; end: 10ae9b19b; -[SCLensCustomNamespaceService _cachedLensMetadataCacheResultArrayForLensIds:] */

void FUN_10ae9b00c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_2 + 0x54);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x30));
  puVar1 = PTR_PTR_1126de318;
  dVar7 = param_1;
  func_0x00010c095000(PTR_PTR_1126de318,param_3,param_4,*(undefined8 *)(param_2 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10ae9b19c;
  puStack_80 = &UNK_110857a38;
  puVar2 = puVar1;
  lStack_78 = param_2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x30));
  puVar3 = puVar2;
  func_0x00010bf529e0(puVar2);
  lVar4 = param_4;
  func_0x00010bf529e0(param_4);
  puVar5 = puVar2;
  func_0x00010bf529e0(puVar2);
  func_0x00010be08280(dVar7 - param_1,param_2,param_3,puVar3,lVar4 - (long)puVar5);
  puStack_c0 = puVar6;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10ae9b1a8;
  puStack_a8 = &UNK_110c8d550;
  puVar6 = puVar2;
  lStack_a0 = param_2;
  func_0x00010c0b8600(puVar2,param_3,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_2 + 0x54);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10ae9b19c; end: 10ae9b1a7;  */

void FUN_10ae9b19c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be41750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__isLensMetadataFresh__11256df70,param_2);
  return;
}



/* Entry: 10ae9b1a8; end: 10ae9b21f;  */

void FUN_10ae9b1a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010beb6f80(uVar2);
  func_0x00010be88160(*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126de320;
  _objc_alloc(PTR_PTR_1126de320);
  func_0x00010c0228c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae9b220; end: 10ae9b45b; -[SCLensCustomNamespaceService _emitRetrievedResults:latency:] */

void FUN_10ae9b220(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  puStack_140 = &uStack_148;
  uStack_148 = 0;
  uStack_138 = 0x2020000000;
  uStack_130 = 0;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar3 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_4);
      }
      func_0x00010c0c0760(*(undefined8 *)(lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    lVar2 = param_4;
    func_0x00010bf52a60();
  }
  _objc_release(param_4);
  func_0x00010be08280(param_1,param_2);
  __Block_object_dispose(&uStack_148,8);
  __Block_object_dispose(&uStack_128,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_148,8);
  __Block_object_dispose(&uStack_128,8);
  __Unwind_Resume();
  lVar2 = *(long *)(*(long *)(param_4 + 0x20) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  return;
}



/* Entry: 10ae9b45c; end: 10ae9b4a3;  */

void FUN_10ae9b45c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  return;
}



/* Entry: 10ae9b4a4; end: 10ae9b557; -[SCLensCustomNamespaceService _emitRetrievedCount:missedCount:latency:] */

void FUN_10ae9b4a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126de328;
  _objc_alloc(PTR_PTR_1126de328);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c14ffc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02de20(param_1,puVar1,param_3,uVar3,0,param_4,param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x38),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ae9b558; end: 10ae9b8db; -[SCLensCustomNamespaceService _saveCurrentLensMetadataWithFreshLensMetadata:] */

void FUN_10ae9b558(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x54);
  func_0x00010bed24e0(param_1,param_2,param_3);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar5 = param_3;
  }
  _objc_retain(puVar5);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar4 = puVar5;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bef0bc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80(puVar5,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar3);
  }
  puVar5 = puVar4;
  func_0x00010c12c0a0(puVar4,param_2,&PTR___NSConcreteGlobalBlock_110c8d580);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  func_0x00010bdcda00(param_1,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (0 < *(long *)(param_1 + 0x28)) {
    _objc_retain(puVar6);
    puVar7 = PTR_PTR_1126de2c8;
    func_0x00010bed0240(PTR_PTR_1126de2c8,param_2,puVar6,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126de330;
  _objc_alloc(PTR_PTR_1126de330);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c14ffc0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  func_0x00010bf529e0(puVar4);
  puVar10 = puVar4;
  func_0x00010bf529e0(puVar4);
  puVar11 = puVar7;
  func_0x00010bf529e0(puVar7);
  func_0x00010c02de40(puVar6,param_2,uVar3,puVar9,(long)puVar10 - (long)puVar11);
  _objc_release(uVar3);
  _objc_release(uVar8);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar6);
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c14ffc0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126de318;
  func_0x00010c095120(PTR_PTR_1126de318,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126de338;
  _objc_alloc();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(double *)(param_1 + 0x18) * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041c20(puVar10,param_2,uVar12,puVar7,0,puVar9,puVar11,puVar13,0,0,0,0,0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar10;
  _objc_release(uVar3);
  _objc_release(puVar13);
  _objc_release(puVar11);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x10ae9b8e4;
  puStack_70 = &UNK_110849810;
  _objc_retain(uVar12);
  uStack_68 = uVar12;
  func_0x00010c14aa20(uVar8,param_2,uVar3,&puStack_88);
  _objc_release(uStack_68);
  _objc_release(puVar9);
  _objc_release(uVar12);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _os_unfair_lock_unlock(param_1 + 0x54);
  _objc_release(param_3);
  return;
}



/* Entry: 10ae9b8dc; end: 10ae9b8e7;  */

void FUN_10ae9b8dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10ae9b8e8; end: 10ae9b947; -[SCLensCustomNamespaceService _applyAccessDatesAndRemoveExpired:] */

void FUN_10ae9b8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10ae9b948;
  puStack_20 = &UNK_110914d48;
  uStack_18 = param_1;
  func_0x00010bf43280(param_3,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10ae9b948; end: 10ae9b953;  */

void FUN_10ae9b948(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee5330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatedLensMetadataOrNil__112596e70,param_2);
  return;
}



/* Entry: 10ae9b954; end: 10ae9babf; -[SCLensCustomNamespaceService _updatedLensMetadataOrNil:] */

void FUN_10ae9b954(ulong param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_assert_owner(param_1 + 0x54);
    puVar3 = *(undefined **)(param_1 + 0x48);
    puVar4 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = param_3;
      func_0x00010bf9c720(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf8080(param_1,param_2,puVar2);
      if ((param_1 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        _objc_retain(param_3);
        puVar4 = param_3;
      }
    }
    else {
      _objc_retain(puVar3);
      func_0x00010bdf8080(param_1,param_2,puVar3);
      puVar2 = puVar3;
      if ((param_1 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar3);
        puVar1 = PTR_PTR_1126b0820;
        func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ad7e0();
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010bf21f60(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar3);
      }
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10ae9bac0; end: 10ae9bbdf; +[SCLensCustomNamespaceService _truncatedMetadata:limit:] */

void FUN_10ae9bac0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar2 = param_3;
    func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8d5c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar1 = uVar2;
    func_0x00010c099060(uVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    param_3 = uVar2;
  }
  else {
    _objc_retain(param_3);
    uVar1 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10ae9bbe0; end: 10ae9bc1f; -[SCLensCustomNamespaceService _dateFresh:] */

bool FUN_10ae9bbe0(double param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    func_0x00010c26f3a0(param_4);
    return -param_1 < *(double *)(param_2 + 0x18);
  }
  return false;
}



/* Entry: 10ae9bc20; end: 10ae9bd0f; -[SCLensCustomNamespaceService _shouldUpdateLens:] */

bool FUN_10ae9bc20(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    _os_unfair_lock_assert_owner(param_2 + 0x54);
    lVar3 = *(long *)(param_2 + 0x48);
    lVar2 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar3 = param_4;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 == 0) {
        bVar1 = true;
        goto LAB_10ae9bcec;
      }
    }
    else {
      _objc_release(lVar2);
    }
    func_0x00010c26f3a0(lVar3);
    bVar1 = *(double *)(param_2 + 0x20) < -param_1;
    _objc_release(lVar3);
  }
LAB_10ae9bcec:
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10ae9bd10; end: 10ae9bdff; -[SCLensCustomNamespaceService _isLensMetadataFresh:] */

long FUN_10ae9bd10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    _os_unfair_lock_assert_owner(param_1 + 0x54);
    lVar3 = *(long *)(param_1 + 0x48);
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar2 = param_3;
      func_0x00010bf9c720(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar3);
      lVar2 = lVar3;
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010bdf8080(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10ae9be00; end: 10ae9beb3; -[SCLensCustomNamespaceService _refreshAccessDateForLens:] */

void FUN_10ae9be00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x50) == '\x01')) {
    _os_unfair_lock_assert_owner(param_1 + 0x54);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,puVar2,lVar1);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ae9beb4; end: 10ae9c037; -[SCLensCustomNamespaceService _updateAccessDateForLensMetadataArray:] */

void FUN_10ae9beb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x54);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lStack_128 + lVar11 * 8);
        lVar2 = lVar9;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0x48);
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar8,param_2,puVar3,lVar9);
          _objc_release(lVar9);
          _objc_release(puVar3);
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar1 = param_3;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar8);
  _objc_retain(puVar7);
  func_0x00010c0ba200(puVar4,param_2,&PTR___NSConcreteGlobalBlock_110c8d5e0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  puVar6 = puVar7;
  func_0x00010c0ba200(puVar7,param_2,&PTR___NSConcreteGlobalBlock_110c8d600,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c0ce860(puVar5,param_2,puVar6);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f2eed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ae9c038; end: 10ae9c11f; -[SCLensCustomNamespaceService _logEvictedLensesStringFromMetadata:filteredResult:reason:] */

void FUN_10ae9c038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0ba200(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8d5e0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0d3c80();
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010c0ba200(param_4,param_2,&PTR___NSConcreteGlobalBlock_110c8d600,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0ce860(uVar1,param_2,uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f2eed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ae9c120; end: 10ae9c12f;  */

void FUN_10ae9c120(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10ae9c130; end: 10ae9c18f; -[SCLensCustomNamespaceService .cxx_destruct] */

void FUN_10ae9c130(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae9c190; end: 10ae9c29b; -[SCLensCustomNamespaceServiceV2 initWithLensMetadataCache:namespaceName:additionalNamespaces:reloadTtlSec:] */

undefined1 *
FUN_10ae9c190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112701570;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    if (param_6 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c2268e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_6;
      func_0x00010c174bc0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10ae9c29c; end: 10ae9c367; -[SCLensCustomNamespaceServiceV2 cachedLensMetadataArrayForLensIds:] */

void FUN_10ae9c29c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf27280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ae9c368;
  puStack_40 = &UNK_110c8d550;
  uVar2 = uVar1;
  lStack_38 = param_1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10ae9c368; end: 10ae9c3c7;  */

void FUN_10ae9c368(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010beb6f80(uVar2);
  puVar1 = PTR_PTR_1126de320;
  _objc_alloc(PTR_PTR_1126de320);
  func_0x00010c0228c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10ae9c3c8; end: 10ae9c47b; -[SCLensCustomNamespaceServiceV2 cachedLensMetadataForLensId:] */

void FUN_10ae9c3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf272e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010beb6f80(param_1,param_2,lVar1);
    puVar3 = PTR_PTR_1126de320;
    _objc_alloc(PTR_PTR_1126de320);
    func_0x00010c0228c0();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10ae9c47c; end: 10ae9c4db; -[SCLensCustomNamespaceServiceV2 addLensMetadata:] */

void FUN_10ae9c47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef97e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ae9c4dc; end: 10ae9c53b; -[SCLensCustomNamespaceServiceV2 addLensMetadataArray:] */

void FUN_10ae9c4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9820();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10ae9c53c; end: 10ae9c53f; -[SCLensCustomNamespaceServiceV2 saveToDisk] */

void FUN_10ae9c53c(void)

{
  return;
}



/* Entry: 10ae9c540; end: 10ae9c5d7; -[SCLensCustomNamespaceServiceV2 _shouldUpdateLens:] */

bool FUN_10ae9c540(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = param_4;
    func_0x00010bf9c720(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    _objc_release(lVar1);
    bVar2 = *(double *)(param_2 + 0x20) <= -param_1;
  }
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 10ae9c5d8; end: 10ae9c613; -[SCLensCustomNamespaceServiceV2 .cxx_destruct] */

void FUN_10ae9c5d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ae9c614; end: 10ae9c687; -[SCLensMetadataFetchingAdapter initWithNamespaceDataProvider:] */

undefined1 * FUN_10ae9c614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701578;
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



/* Entry: 10ae9c688; end: 10ae9c69b; -[SCLensMetadataFetchingAdapter cachedLensMetadataArrayWithIds:] */

void FUN_10ae9c688(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0860b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_just__1125ff238,PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 10ae9c69c; end: 10ae9c77f; -[SCLensMetadataFetchingAdapter lensMetadataWithId:featureAttribution:] */

void FUN_10ae9c69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c094fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c0b8600(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfb1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_firstObject_1125c9ff0);
  return;
}



/* Entry: 10ae9c780; end: 10ae9c787;  */

void FUN_10ae9c780(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_firstObject_1125c9ff0);
  return;
}



/* Entry: 10ae9c788; end: 10ae9c84f; -[SCLensMetadataFetchingAdapter lensMetadataArrayWithIds:featureAttribution:] */

void FUN_10ae9c788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ae9c850;
  puStack_40 = &UNK_110850cc8;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010be12180(param_1,param_2,param_3,param_4,&puStack_58);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10ae9c850; end: 10ae9c85b;  */

void FUN_10ae9c850(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10ae9c85c; end: 10ae9c9a3; -[SCLensMetadataFetchingAdapter _fetchLensMetadataIds:featureAttribution:completionBlock:] */

void FUN_10ae9c85c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10ae9c9a4;
    puStack_68 = &UNK_110858190;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_5);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10ae9c9f4;
    puStack_98 = &UNK_1108538b0;
    lStack_58 = param_5;
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(param_5);
    lStack_88 = param_5;
    func_0x00010bfa7f20(uVar2,param_2,param_3,0xe,0,param_4,0,&puStack_80,&puStack_b0);
    _objc_release(uVar2);
    _objc_release(lStack_88);
    _objc_release(uStack_90);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10ae9c9a4; end: 10ae9ca43;  */

void FUN_10ae9c9a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de2b0;
  func_0x00010be95a40(PTR_PTR_1126de2b0,param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


