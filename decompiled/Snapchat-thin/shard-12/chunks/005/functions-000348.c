/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091e55d8; end: 1091e5663;  */

void FUN_1091e55d8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ddd38;
  _objc_opt_class(PTR_PTR_1126ddd38);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfabce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25fee0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e5664; end: 1091e5697; +[SCLensUnlockableDataProviderFactory _createPerformer] */

void FUN_1091e5664(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091e5698; end: 1091e5797; -[SCLensUnlockableDataProviderFactory _createStrategyWithMetadataStore:centralizedLensStoreProvider:prefetchCapacity:lensCentralizedStoreNamespace:studySettings:featureAttribution:] */

void FUN_1091e5698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1091e5798;
  puStack_70 = &UNK_110ae0aa8;
  uStack_68 = param_4;
  uStack_60 = param_6;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091e5798; end: 1091e583b;  */

void FUN_1091e5798(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf34a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ddda0;
  _objc_alloc(PTR_PTR_1126ddda0);
  func_0x00010c038460();
  puVar4 = PTR_PTR_1126ddda8;
  _objc_alloc(PTR_PTR_1126ddda8);
  func_0x00010c025020();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091e583c; end: 1091e58ef; -[SCLensUnlockableDataProviderFactory .cxx_destruct] */

void FUN_1091e583c(long param_1)

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



/* Entry: 1091e58f0; end: 1091e59eb; -[SCLensUnlockableCentralizedStoreStrategy initWithLensMetadataStore:centralizedDataStore:lensesFilter:featureAttribution:] */

undefined1 *
FUN_1091e58f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_112700e18;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091e59ec; end: 1091e59f3; -[SCLensUnlockableCentralizedStoreStrategy lensMetadataStore] */

void FUN_1091e59ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1091e59f4; end: 1091e5a73; -[SCLensUnlockableCentralizedStoreStrategy warmUp] */

void FUN_1091e59f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c098820(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed15e0(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091e5a74; end: 1091e5b0f; -[SCLensUnlockableCentralizedStoreStrategy didSelectLens:] */

void FUN_1091e5a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c098800(uVar2,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed15e0(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e5b10; end: 1091e5d7b; -[SCLensUnlockableCentralizedStoreStrategy _unlockLenses:] */

void FUN_1091e5b10(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar7 = &puStack_160;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
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
    puVar10 = &uStack_130;
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined8 *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          uVar8 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
          lVar3 = param_1;
          func_0x00010beb3ac0();
          if ((int)lVar3 != 0) {
            uVar6 = uVar8;
            func_0x00010c094540(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc7180(param_1);
            _objc_release(uVar6);
            func_0x00010c094540(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(uVar8);
          }
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        } while (puVar1 != puVar10);
        puVar10 = &uStack_130;
        puVar1 = param_3;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    puVar4 = puVar2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 != (undefined *)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c094fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_1091e5d7c;
      puStack_148 = &UNK_1108599d8;
      lStack_140 = param_1;
      _objc_retain(puVar2);
      puStack_138 = puVar2;
      func_0x00010c297260(uVar8);
      _objc_release(puStack_138);
      _objc_release(uVar8);
      puVar10 = ppuVar7;
    }
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar10);
  if ((param_2 != 0) && (lVar9 = param_2, func_0x00010bf529e0(), lVar9 != 0)) {
    func_0x00010be32700(param_3[4]);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e5d7c; end: 1091e5ddf;  */

void FUN_1091e5d7c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
    func_0x00010be32700(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e5de0; end: 1091e601f; -[SCLensUnlockableCentralizedStoreStrategy _handleUnlockResults:placeholderLenses:] */

void FUN_1091e5de0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c095240();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c0d3c80();
  _objc_release(lVar6);
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar4 = auStack_d8;
  puVar5 = (undefined *)0x10;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130);
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be326e0(param_1,param_2,*(undefined8 *)(lStack_128 + lVar7 * 8),param_4,lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar4 = auStack_d8;
      puVar5 = (undefined *)0x10;
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  lVar1 = param_1;
  func_0x00010c095240();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c2873a0();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    uStack_e8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f2bfb8;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_e0,&uStack_e8,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c00e2e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f2bf98,0);
    _objc_release(puVar4);
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c097ae0();
    _objc_release(lVar1);
    _objc_release(puVar3);
    lVar6 = param_1;
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_1091e6134;
  puStack_1a0 = &UNK_110ae0b08;
  _objc_retain(puVar4);
  puStack_198 = puVar4;
  lStack_190 = param_3;
  _objc_retain(puVar5);
  puStack_1f0 = puVar3;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_1091e6244;
  puStack_1d8 = &UNK_1109925e8;
  lStack_1d0 = param_3;
  puStack_1c8 = puVar5;
  puStack_1c0 = puVar4;
  puStack_188 = puVar5;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  func_0x00010c0c0760(lVar6,param_2,&puStack_1b8,&PTR___NSConcreteGlobalBlock_110ae0b38,&puStack_1f0
                     );
  _objc_release(puStack_1c0);
  _objc_release(puStack_1c8);
  _objc_release(puStack_188);
  _objc_release(puStack_198);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1091e6020; end: 1091e6133; -[SCLensUnlockableCentralizedStoreStrategy _handleUnlockResult:placeholderLenses:lenses:] */

void FUN_1091e6020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1091e6134;
  puStack_70 = &UNK_110ae0b08;
  _objc_retain(param_4);
  uStack_68 = param_4;
  uStack_60 = param_1;
  _objc_retain(param_5);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1091e6244;
  puStack_a8 = &UNK_1109925e8;
  uStack_a0 = param_1;
  uStack_98 = param_5;
  uStack_90 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0c0760(param_3,param_2,&puStack_88,&PTR___NSConcreteGlobalBlock_110ae0b38,&puStack_c0
                     );
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1091e6134; end: 1091e623f;  */

void FUN_1091e6134(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010be8c4e0(*(undefined8 *)(param_1 + 0x28));
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c0947e0();
    if (lVar3 != 0x7fffffffffffffff) {
      lVar3 = param_2;
      func_0x00010bf13c00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130f40(*(undefined8 *)(param_1 + 0x30));
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf6b020(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c097ac0();
      _objc_release(uVar4);
      _objc_release(lVar3);
    }
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e6240; end: 1091e6243;  */

void FUN_1091e6240(void)

{
  return;
}



/* Entry: 1091e6244; end: 1091e6303;  */

void FUN_1091e6244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0947e0();
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c097b00();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091e6304; end: 1091e638f; -[SCLensUnlockableCentralizedStoreStrategy lensIndexInLensesList:lensId:] */

undefined8
FUN_1091e6304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1091e6390;
  puStack_30 = &UNK_110ae0b58;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010bfece40(param_3,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return param_3;
}



/* Entry: 1091e6390; end: 1091e63e7;  */

undefined8
FUN_1091e6390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  *param_4 = (char)uVar1;
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1091e63e8; end: 1091e63eb; -[SCLensUnlockableCentralizedStoreStrategy didUpdateActiveLensOrder:] */

void FUN_1091e63e8(void)

{
  return;
}



/* Entry: 1091e63ec; end: 1091e644b; -[SCLensUnlockableCentralizedStoreStrategy _addInProgressLens:] */

void FUN_1091e63ec(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x28);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091e644c; end: 1091e64ab; -[SCLensUnlockableCentralizedStoreStrategy _removeInProgressLens:] */

void FUN_1091e644c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x28);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091e64ac; end: 1091e6527; -[SCLensUnlockableCentralizedStoreStrategy _containsInProgressLens:] */

undefined8 FUN_1091e64ac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf4b900(uVar1,param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x28);
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1091e6528; end: 1091e6677; -[SCLensUnlockableCentralizedStoreStrategy _shouldFetchMetadataForLens:] */

ulong FUN_1091e6528(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if ((((uVar1 == 0) || (uVar2 = param_3, func_0x00010c070fa0(), (uVar2 & 1) != 0)) ||
      (uVar2 = param_3, func_0x00010c076ce0(), (uVar2 & 1) != 0)) ||
     (uVar2 = param_3, func_0x00010c077cc0(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bde79e0(param_1,param_2,uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00010c095240(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c098240();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1091e6678;
      puStack_50 = &UNK_110857a38;
      _objc_retain(param_3);
      uVar4 = uVar3;
      uStack_48 = param_3;
      func_0x00010bf04920(uVar3,param_2,&puStack_68);
      _objc_release(uStack_48);
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    else {
      uVar4 = 0;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1091e6678; end: 1091e66e7;  */

undefined8 FUN_1091e6678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1091e66e8; end: 1091e66ff; -[SCLensUnlockableCentralizedStoreStrategy delegate] */

void FUN_1091e66e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091e6700; end: 1091e670b; -[SCLensUnlockableCentralizedStoreStrategy setDelegate:] */

void FUN_1091e6700(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1091e670c; end: 1091e675b; -[SCLensUnlockableCentralizedStoreStrategy .cxx_destruct] */

void FUN_1091e670c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091e675c; end: 1091e67a3; -[SCLensUnlockableCentralzedStoreStrategyLensesFilter initWithPrefetchCapacity:] */

void FUN_1091e675c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700e20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1091e67a4; end: 1091e67ff; -[SCLensUnlockableCentralzedStoreStrategyLensesFilter lensesToWarmupWithLenses:] */

void FUN_1091e67a4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  uVar1 = param_3;
  func_0x00010c25e980(param_3,param_2,0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e6800; end: 1091e6933; -[SCLensUnlockableCentralzedStoreStrategyLensesFilter lensesToUnlockWithLenses:selectedLens:] */

void FUN_1091e6800(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar10 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1091e6934;
  puStack_50 = &UNK_110ae0b58;
  lVar8 = param_3;
  uStack_48 = param_4;
  func_0x00010bfece40(param_3,param_2,&puStack_68);
  if (lVar8 == 0x7fffffffffffffff) {
    lVar8 = 0;
  }
  else {
    lVar6 = param_3;
    func_0x00010bf529e0();
    uVar1 = lVar8 + lVar10;
    lVar6 = lVar6 + ~uVar1;
    lVar2 = -lVar6;
    if (-1 < lVar6) {
      lVar2 = lVar6;
    }
    lVar4 = 0;
    if (lVar6 < 1) {
      lVar4 = lVar2;
    }
    uVar5 = lVar8 - lVar10;
    uVar3 = -uVar5;
    if (-1 < (long)uVar5) {
      uVar3 = uVar5;
    }
    uVar9 = uVar5 - lVar4 & ((long)(uVar5 - lVar4) >> 0x3f ^ 0xffffffffffffffffU);
    lVar8 = param_3;
    func_0x00010bf529e0();
    uVar7 = lVar8 - uVar9;
    lVar8 = (uVar1 + (uVar3 & (long)uVar5 >> 0x3f)) - uVar9;
    if (lVar8 + 1U <= uVar7) {
      uVar7 = lVar8 + 1;
    }
    lVar8 = param_3;
    func_0x00010c25e980(param_3,param_2,uVar9,uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1091e6934; end: 1091e69ab;  */

undefined8 FUN_1091e6934(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  *param_4 = (char)uVar2;
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1091e69ac; end: 1091e69b3; -[SCLensUnlockableDefaultStrategy lensMetadataStore] */

void FUN_1091e69ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1091e69b4; end: 1091e69bb; -[SCLensUnlockableDefaultStrategy lensUnlocker] */

void FUN_1091e69b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1091e69bc; end: 1091e6b67; -[SCLensUnlockableDefaultStrategy didSelectLens:] */

void FUN_1091e69bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb3ac0();
  if ((int)lVar1 != 0) {
    func_0x00010bdc7180(param_1);
    puVar2 = PTR_PTR_1126b1be0;
    _objc_alloc(PTR_PTR_1126b1be0);
    uVar4 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0915a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0242e0(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_1;
    func_0x00010c097b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8060(lVar1);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1091e6b68; end: 1091e6bbb;  */

void FUN_1091e6b68(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be326c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e6bbc; end: 1091e6bbf; -[SCLensUnlockableDefaultStrategy didUpdateActiveLensOrder:] */

void FUN_1091e6bbc(void)

{
  return;
}



/* Entry: 1091e6bc0; end: 1091e6c4b; -[SCLensUnlockableDefaultStrategy _addInProgressLens:] */

void FUN_1091e6bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091e6c4c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27da4(uVar1,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091e6c4c; end: 1091e6c8b;  */

void FUN_1091e6c4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e6c8c; end: 1091e6d17; -[SCLensUnlockableDefaultStrategy _removeInProgressLens:] */

void FUN_1091e6c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091e6d18;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27da4(uVar1,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091e6d18; end: 1091e6d57;  */

void FUN_1091e6d18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e6d58; end: 1091e6e73; -[SCLensUnlockableDefaultStrategy _containsInProgressLens:] */

undefined1 FUN_1091e6d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1091e6e1c;
  puStack_70 = &UNK_11084fa08;
  lStack_68 = param_1;
  uStack_60 = param_3;
  puStack_48 = puStack_58;
  _objc_retain(param_3);
  func_0x000107c27da4(uVar2,&puStack_88);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(uStack_60);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1091e6e74; end: 1091e6f9f; -[SCLensUnlockableDefaultStrategy _shouldFetchMetadataForLens:] */

ulong FUN_1091e6e74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if ((((uVar1 == 0) || (uVar2 = param_3, func_0x00010c070fa0(), (uVar2 & 1) != 0)) ||
      (uVar2 = param_3, func_0x00010c076ce0(), (uVar2 & 1) != 0)) ||
     ((uVar2 = param_3, func_0x00010c077cc0(), (uVar2 & 1) != 0 ||
      (uVar2 = param_1, func_0x00010bde79e0(param_1,param_2,param_3), (uVar2 & 1) != 0)))) {
    uVar3 = 0;
  }
  else {
    func_0x00010c095240(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c098240();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1091e6fa0;
    puStack_50 = &UNK_110857a38;
    _objc_retain(param_3);
    uVar3 = uVar2;
    uStack_48 = param_3;
    func_0x00010bf04920(uVar2,param_2,&puStack_68);
    _objc_release(uStack_48);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1091e6fa0; end: 1091e700f;  */

undefined8 FUN_1091e6fa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1091e7010; end: 1091e7343; -[SCLensUnlockableDefaultStrategy _handleUnlockResult:placeholderLens:] */

undefined1 * FUN_1091e7010(long param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be8c4e0(param_1);
  lVar1 = param_1;
  func_0x00010c095240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_retain(param_4);
  lVar1 = lVar3;
  func_0x00010bfece40();
  if (lVar1 == 0x7fffffffffffffff) goto LAB_1091e72ec;
  puVar4 = param_3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined1 *)0x0) {
LAB_1091e7130:
    func_0x00010c12d3c0(lVar3);
    lVar1 = param_1;
    func_0x00010c095240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2873a0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010c097b00(lVar1);
    _objc_release(puVar5);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf529e0();
    if (lVar1 != 0) goto LAB_1091e72ec;
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0();
    _objc_release(puVar6);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c097ae0();
    _objc_release(param_1);
  }
  else {
    puVar5 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
    if (puVar5 != (undefined1 *)0x0) goto LAB_1091e7130;
    puVar4 = param_3;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf13c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c130f40(lVar3);
    lVar1 = param_1;
    func_0x00010c095240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2873a0();
    _objc_release(lVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c097ac0();
    _objc_release(param_1);
  }
  _objc_release(puVar5);
LAB_1091e72ec:
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c094540(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
  func_0x00010c0720c0();
  *puVar4 = (char)puVar5;
  _objc_release(uVar7);
  _objc_release(param_2);
  return puVar5;
}



/* Entry: 1091e7344; end: 1091e73bb;  */

undefined8 FUN_1091e7344(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  *param_4 = (char)uVar2;
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1091e73bc; end: 1091e73d3; -[SCLensUnlockableDefaultStrategy delegate] */

void FUN_1091e73bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091e73d4; end: 1091e742f; -[SCLensUnlockableDefaultStrategy .cxx_destruct] */

void FUN_1091e73d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091e7430; end: 1091e74db; -[SCLensUnlockableOrderedPrefetchStrategy initWithStrategy:prefetchCapacity:studySettings:] */

undefined1 *
FUN_1091e7430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700e30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091e74dc; end: 1091e74e3; -[SCLensUnlockableOrderedPrefetchStrategy setDelegate:] */

void FUN_1091e74dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 1091e74e4; end: 1091e74eb; -[SCLensUnlockableOrderedPrefetchStrategy delegate] */

void FUN_1091e74e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_delegate_1125b85b0);
  return;
}



/* Entry: 1091e74ec; end: 1091e770f; -[SCLensUnlockableOrderedPrefetchStrategy didSelectLens:] */

void FUN_1091e74ec(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_58;
  
  ppuVar8 = &puStack_140;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar10 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar11);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1091e7780;
  puStack_e8 = &UNK_110ae0b58;
  ppuVar7 = &puStack_100;
  lVar13 = lVar6;
  lStack_e0 = param_3;
  func_0x00010bfece40();
  if (lVar13 != 0x7fffffffffffffff) {
    func_0x00010bf7ab60(uVar11,param_2,param_3);
    lVar14 = lVar6;
    func_0x00010bf529e0();
    uVar1 = lVar13 + lVar10;
    lVar14 = lVar14 + ~uVar1;
    lVar2 = -lVar14;
    if (-1 < lVar14) {
      lVar2 = lVar14;
    }
    lVar4 = 0;
    if (lVar14 < 1) {
      lVar4 = lVar2;
    }
    uVar5 = lVar13 - lVar10;
    uVar3 = -uVar5;
    if (-1 < (long)uVar5) {
      uVar3 = uVar5;
    }
    uVar12 = uVar5 - lVar4 & ((long)(uVar5 - lVar4) >> 0x3f ^ 0xffffffffffffffffU);
    lVar10 = lVar6;
    func_0x00010bf529e0();
    uVar9 = lVar10 - uVar12;
    lVar10 = (uVar1 + (uVar3 & (long)uVar5 >> 0x3f)) - uVar12;
    if (lVar10 + 1U <= uVar9) {
      uVar9 = lVar10 + 1;
    }
    lVar10 = lVar6;
    func_0x00010c25e980(lVar6,param_2,uVar12,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    puStack_140 = (undefined *)0x0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(lVar10);
    lVar6 = lVar10;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar13 = *plStack_130;
      do {
        lVar14 = 0;
        do {
          if (*plStack_130 != lVar13) {
            _objc_enumerationMutation(lVar10);
          }
          if (*(long *)(lStack_138 + lVar14 * 8) != param_3) {
            func_0x00010bf7ab60(uVar11);
          }
          lVar14 = lVar14 + 1;
        } while (lVar6 != lVar14);
        lVar6 = lVar10;
        ppuVar8 = &puStack_140;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar10);
    ppuVar7 = ppuVar8;
    lVar6 = lVar10;
  }
  _objc_release(lStack_e0);
  _objc_release(uVar11);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(ppuVar7);
    uVar11 = *(undefined8 *)(param_3 + 0x20);
    *(undefined ***)(param_3 + 0x20) = ppuVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar11);
    return;
  }
  return;
}



/* Entry: 1091e7710; end: 1091e773f; -[SCLensUnlockableOrderedPrefetchStrategy didUpdateActiveLensOrder:] */

void FUN_1091e7710(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091e7740; end: 1091e7743; -[SCLensUnlockableOrderedPrefetchStrategy warmUp] */

void FUN_1091e7740(void)

{
  return;
}



/* Entry: 1091e7744; end: 1091e777f; -[SCLensUnlockableOrderedPrefetchStrategy .cxx_destruct] */

void FUN_1091e7744(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091e7780; end: 1091e77f7;  */

undefined8 FUN_1091e7780(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  *param_4 = (char)uVar2;
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1091e77f8; end: 1091e78d3; -[SCLensUnlockablePrefetchStrategy initWithLensMetadataStore:strategy:prefetchCapacity:] */

undefined8
FUN_1091e77f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f55c3c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x19,PTR___dispatch_queue_attr_concurrent_11034be28,0xe)
  ;
  _objc_release(puVar2);
  func_0x00010c0250a0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1091e78d4; end: 1091e79f3; -[SCLensUnlockablePrefetchStrategy initWithLensMetadataStore:strategy:prefetchCapacity:performer:] */

undefined1 *
FUN_1091e78d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700e38;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = &UNK_10f55c403;
    _dispatch_queue_create(&UNK_10f55c403,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091e79f4; end: 1091e79fb; -[SCLensUnlockablePrefetchStrategy lensMetadataStore] */

void FUN_1091e79f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1091e79fc; end: 1091e7a03; -[SCLensUnlockablePrefetchStrategy setDelegate:] */

void FUN_1091e79fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setDelegate__112640798);
  return;
}



/* Entry: 1091e7a04; end: 1091e7a0b; -[SCLensUnlockablePrefetchStrategy delegate] */

void FUN_1091e7a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_delegate_1125b85b0);
  return;
}



/* Entry: 1091e7a0c; end: 1091e7c5f; -[SCLensUnlockablePrefetchStrategy didSelectLens:] */

void FUN_1091e7a0c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = param_1;
  func_0x00010c095240();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x18);
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(uVar5);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1091e7cbc;
  puStack_f8 = &UNK_110ae0b58;
  lVar13 = lVar8;
  lStack_f0 = param_3;
  func_0x00010bfece40(lVar8,param_2,&puStack_110);
  lVar9 = lVar8;
  if (lVar13 != 0x7fffffffffffffff) {
    func_0x00010bf7ab60(uVar5,param_2,param_3);
    lVar14 = lVar8;
    func_0x00010bf529e0();
    uVar1 = lVar13 + lVar11;
    lVar14 = lVar14 + ~uVar1;
    lVar2 = -lVar14;
    if (-1 < lVar14) {
      lVar2 = lVar14;
    }
    lVar4 = 0;
    if (lVar14 < 1) {
      lVar4 = lVar2;
    }
    uVar6 = lVar13 - lVar11;
    uVar3 = -uVar6;
    if (-1 < (long)uVar6) {
      uVar3 = uVar6;
    }
    uVar12 = uVar6 - lVar4 & ((long)(uVar6 - lVar4) >> 0x3f ^ 0xffffffffffffffffU);
    lVar11 = lVar8;
    func_0x00010bf529e0();
    uVar10 = lVar11 - uVar12;
    lVar11 = (uVar1 + (uVar3 & (long)uVar6 >> 0x3f)) - uVar12;
    if (lVar11 + 1U <= uVar10) {
      uVar10 = lVar11 + 1;
    }
    func_0x00010c25e980(lVar8,param_2,uVar12,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    _objc_retain(lVar9);
    lVar11 = lVar9;
    func_0x00010bf52a60(lVar9,param_2,&uStack_150,auStack_e8,0x10);
    if (lVar11 != 0) {
      lVar13 = *plStack_140;
      do {
        lVar14 = 0;
        do {
          if (*plStack_140 != lVar13) {
            _objc_enumerationMutation(lVar9);
          }
          if (*(long *)(lStack_148 + lVar14 * 8) != param_3) {
            func_0x00010bf7ab60(uVar5);
          }
          lVar14 = lVar14 + 1;
        } while (lVar11 != lVar14);
        lVar11 = lVar9;
        func_0x00010bf52a60(lVar9,param_2,&uStack_150,auStack_e8,0x10);
      } while (lVar11 != 0);
    }
    _objc_release(lVar9);
  }
  _objc_release(lStack_f0);
  _objc_release(uVar5);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1091e7c60; end: 1091e7c63; -[SCLensUnlockablePrefetchStrategy didUpdateActiveLensOrder:] */

void FUN_1091e7c60(void)

{
  return;
}



/* Entry: 1091e7c64; end: 1091e7c67; -[SCLensUnlockablePrefetchStrategy warmUp] */

void FUN_1091e7c64(void)

{
  return;
}



/* Entry: 1091e7c68; end: 1091e7cbb; -[SCLensUnlockablePrefetchStrategy .cxx_destruct] */

void FUN_1091e7c68(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091e7cbc; end: 1091e7d33;  */

undefined8 FUN_1091e7cbc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0();
  *param_4 = (char)uVar2;
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1091e7d34; end: 1091e7e87; +[SCLensUIControllerRestoreStrategy strategyForLensSelection:] */

void FUN_1091e7d34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_1091e7e88;
    uStack_30 = 0x1091e7e98;
    uStack_28 = 0;
    func_0x00010c0bfbc0(param_3);
    uVar1 = puStack_48[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e7e88; end: 1091e7e9f;  */

void FUN_1091e7e88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091e7ea0; end: 1091e7fc7;  */

void FUN_1091e7ea0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dddc8;
  func_0x00010c13c840(PTR_PTR_1126dddc8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091e7fc8; end: 1091e7fcb;  */

void FUN_1091e7fc8(void)

{
  return;
}



/* Entry: 1091e7fcc; end: 1091e801f; +[SCStudioLensLogger sharedInstance] */

void FUN_1091e7fcc(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113732938 != -1) {
    func_0x000107c27d9c(0x113732938,&PTR___NSConcreteGlobalBlock_110ae0c08);
  }
  uVar1 = uRam0000000113732940;
  _objc_retain(uRam0000000113732940);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091e8020; end: 1091e8053;  */

void FUN_1091e8020(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126db6a8;
  _objc_alloc();
  func_0x00010c028d20();
  uVar1 = puRam0000000113732940;
  puRam0000000113732940 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e8054; end: 1091e8107; -[SCStudioLensLogger initWithMaxLogCount:] */

undefined1 * FUN_1091e8054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700e40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dddd0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091e8108; end: 1091e8203; -[SCStudioLensLogger appendLog:] */

void FUN_1091e8108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dddd8;
  func_0x00010bf978c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1091e8204; end: 1091e8247;  */

void FUN_1091e8204(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be715a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010be64c20(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091e8248; end: 1091e82ef; -[SCStudioLensLogger clear] */

void FUN_1091e8248(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1091e82f0; end: 1091e8337;  */

void FUN_1091e82f0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar1);
    func_0x00010be64c20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091e8338; end: 1091e833f; -[SCStudioLensLogger addListener:] */

void FUN_1091e8338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1091e8340; end: 1091e8347; -[SCStudioLensLogger removeListener:] */

void FUN_1091e8340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1091e8348; end: 1091e8443; -[SCStudioLensLogger _performAppendLogEntry:] */

void FUN_1091e8348(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar6 = *(ulong *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 + 1U <= uVar6) {
    uVar6 = lVar1 + 1;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  uVar6 = (ulong)(lVar1 == *(long *)(param_1 + 8));
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar6 < uVar3) {
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40(uVar4,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,uVar4);
      _objc_release(uVar4);
      uVar6 = uVar6 + 1;
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010bf529e0();
    } while (uVar6 < uVar3);
  }
  func_0x00010befa120(puVar2,param_2,param_3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar5;
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091e8444; end: 1091e8453; -[SCStudioLensLogger _notifyListeners] */

void FUN_1091e8444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25deb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_studioLensLogger_didUpdateLogs__1126751d0,param_1
             ,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1091e8454; end: 1091e845b; -[SCStudioLensLogger logs] */

undefined8 FUN_1091e8454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1091e845c; end: 1091e8497; -[SCStudioLensLogger .cxx_destruct] */

void FUN_1091e845c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091e8498; end: 1091e853b; -[SCStudioLensLogEntry initWithContents:timestamp:] */

undefined1 *
FUN_1091e8498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700e48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091e853c; end: 1091e85b7; +[SCStudioLensLogEntry entryWithContents:] */

void FUN_1091e853c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_alloc(param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003fe0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091e85b8; end: 1091e85bf; -[SCStudioLensLogEntry timestamp] */

undefined8 FUN_1091e85b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091e85c0; end: 1091e85c7; -[SCStudioLensLogEntry contents] */

undefined8 FUN_1091e85c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1091e85c8; end: 1091e85f7; -[SCStudioLensLogEntry .cxx_destruct] */

void FUN_1091e85c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091e85f8; end: 1091e87c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1091e85f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_120;
  undefined *puStack_118;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110f2c038);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1);
  _objc_release(puVar2);
  func_0x00010c192d40(0x3fd76c8b43958106,puVar1);
  func_0x00010c220360(puVar1);
  func_0x00010c1b6d00(puVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar2);
  _objc_release(puVar3);
  func_0x00010c1a1180(puVar2);
  func_0x00010c216920(puVar2);
  func_0x00010c192d40(0x3fc5604189374bc7,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar3);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fd76c8b43958106,puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar1);
    _objc_release(puVar2);
    func_0x00010c1a1180(puVar1);
    func_0x00010c216920(puVar1);
    func_0x00010c1ea580(puVar1);
    func_0x00010c19bc40(puVar1);
    puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar2);
    _objc_release(puVar3);
    func_0x00010c1a1180(puVar2);
    func_0x00010c216920(puVar2);
    func_0x00010c1ea580(puVar2);
    func_0x00010c19bc40(puVar2);
    puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168400(puVar3);
    _objc_release(puVar4);
    func_0x00010c1ea580(puVar3);
    func_0x00010c19bc40(puVar3);
    dVar9 = 0.133;
    func_0x00010c192d40(0x3fc10624dd2f1aa0,puVar3);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      ppuVar5 = &puStack_120;
      puStack_118 = PTR_PTR_112700e50;
      puStack_120 = puVar1;
      _objc_msgSendSuper2(&puStack_120,PTR_s_initWithFrame__1125e2948);
      if (ppuVar5 != (undefined **)0x0) {
        puVar1 = PTR_PTR_1126afd30;
        _objc_alloc();
        func_0x00010bfffc60();
        lVar7 = (long)_DAT_11278338c;
        uVar8 = *(undefined8 *)((long)ppuVar5 + lVar7);
        *(undefined **)((long)ppuVar5 + lVar7) = puVar1;
        _objc_release(uVar8);
        func_0x00010bf20c00(ppuVar5);
        _CGRectGetWidth();
        dVar9 = dVar9 + -28.0;
        dVar10 = dVar9 * 0.5;
        func_0x00010bf20c00(ppuVar5);
        _CGRectGetHeight();
        _CGRectIntegral(dVar10,(dVar9 + -28.0) * 0.5,0x403c000000000000,0x403c000000000000);
        func_0x00010c19f0e0(*(undefined8 *)((long)ppuVar5 + lVar7));
        func_0x00010c16d4a0(*(undefined8 *)((long)ppuVar5 + lVar7));
        puVar6 = (undefined1 *)ppuVar5;
        func_0x00010bf4dce0(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(puVar6);
        func_0x00010c24dbc0(*(undefined8 *)((long)ppuVar5 + lVar7));
      }
      return (undefined1 *)ppuVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 1091e87c8; end: 1091e89c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1091e87c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_c0;
  undefined *puStack_b8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110f2c038);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1);
  _objc_release(puVar2);
  func_0x00010c1a1180(puVar1);
  func_0x00010c216920(puVar1);
  func_0x00010c1ea580(puVar1);
  func_0x00010c19bc40(puVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar2);
  _objc_release(puVar3);
  func_0x00010c1a1180(puVar2);
  func_0x00010c216920(puVar2);
  func_0x00010c1ea580(puVar2);
  func_0x00010c19bc40(puVar2);
  puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar3);
  _objc_release(puVar4);
  func_0x00010c1ea580(puVar3);
  func_0x00010c19bc40(puVar3);
  dVar9 = 0.133;
  func_0x00010c192d40(0x3fc10624dd2f1aa0,puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_c0;
  puStack_b8 = PTR_PTR_112700e50;
  puStack_c0 = puVar1;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_initWithFrame__1125e2948);
  if (ppuVar5 != (undefined **)0x0) {
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    lVar7 = (long)_DAT_11278338c;
    uVar8 = *(undefined8 *)((long)ppuVar5 + lVar7);
    *(undefined **)((long)ppuVar5 + lVar7) = puVar1;
    _objc_release(uVar8);
    func_0x00010bf20c00(ppuVar5);
    _CGRectGetWidth();
    dVar9 = dVar9 + -28.0;
    dVar10 = dVar9 * 0.5;
    func_0x00010bf20c00(ppuVar5);
    _CGRectGetHeight();
    _CGRectIntegral(dVar10,(dVar9 + -28.0) * 0.5,0x403c000000000000,0x403c000000000000);
    func_0x00010c19f0e0(*(undefined8 *)((long)ppuVar5 + lVar7));
    func_0x00010c16d4a0(*(undefined8 *)((long)ppuVar5 + lVar7));
    puVar6 = (undefined1 *)ppuVar5;
    func_0x00010bf4dce0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar6);
    func_0x00010c24dbc0(*(undefined8 *)((long)ppuVar5 + lVar7));
  }
  return (undefined1 *)ppuVar5;
}



/* Entry: 1091e89c8; end: 1091e8ad7; -[SCLensSubPickerLoadingCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1091e89c8(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112700e50;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    lVar5 = (long)_DAT_11278338c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010bf20c00(puVar1);
    _CGRectGetWidth();
    param_1 = param_1 + -28.0;
    dVar6 = param_1 * 0.5;
    func_0x00010bf20c00(puVar1);
    _CGRectGetHeight();
    _CGRectIntegral(dVar6,(param_1 + -28.0) * 0.5,0x403c000000000000,0x403c000000000000);
    func_0x00010c19f0e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c16d4a0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar1 + lVar5));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091e8ad8; end: 1091e8ae7; -[SCLensSubPickerLoadingCollectionViewCell loadingIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091e8ad8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278338c);
}



/* Entry: 1091e8ae8; end: 1091e8b27; -[SCLensSubPickerLoadingCollectionViewCell setLoadingIndicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e8ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278338c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091e8b28; end: 1091e8b3b; -[SCLensSubPickerLoadingCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e8b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278338c,0);
  return;
}



/* Entry: 1091e8b3c; end: 1091e8baf; -[SCLensPopoverView initWithFrame:] */

undefined1 * FUN_1091e8b3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700e58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091e8bb0; end: 1091e8c23; -[SCLensPopoverView initWithCoder:] */

undefined1 * FUN_1091e8bb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700e58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__1125dd730);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091e8c24; end: 1091e8c8b; -[SCLensPopoverView setFillColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e8c24(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112783390;
  uVar1 = param_3;
  func_0x00010c071c60(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c1cbd40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091e8c8c; end: 1091e8cab; -[SCLensPopoverView setHideArrow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091e8c8c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112783394) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112783394) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 1091e8cac; end: 1091e8d6b; -[SCLensPopoverView drawRect:] */

void FUN_1091e8cac(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  _UIGraphicsGetCurrentContext();
  puVar2 = puVar1;
  _CGPathCreateMutable();
  func_0x00010bfe18c0(param_1);
  func_0x00010bf22100(param_1);
  _CGContextAddPath(puVar1,puVar2);
  func_0x00010bfad500();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    puVar3 = param_1;
  }
  _objc_release(param_1);
  func_0x00010c19bbe0(puVar3);
  _CGContextFillPath(puVar1);
  _CGPathRelease(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1091e8d6c; end: 1091e8f8b; -[SCLensPopoverView buildContentPath:hideArrow:] */

void FUN_1091e8d6c(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar5 = param_1;
  func_0x00010bf20c00();
  _CGRectGetHeight();
  if (param_5 == 0) {
    dVar5 = dVar5 + -8.0;
  }
  dVar1 = 0.0;
  dVar2 = 0.0;
  dVar4 = param_1;
  dVar3 = dVar5;
  _CGRectInset(0,0,param_1,dVar5,0x4018000000000000,0x4018000000000000);
  _CGRectIsNull();
  if ((param_2 & 1) != 0) {
    return;
  }
  dVar6 = param_1 + 0.0;
  dVar5 = dVar5 + 0.0;
  _CGPathMoveToPoint(dVar1,0,param_4,0);
  _CGPathAddLineToPoint(dVar1 + dVar4,0,param_4,0);
  _CGPathAddArcToPoint(dVar6,0,dVar6,dVar2,0x4018000000000000,param_4,0);
  _CGPathAddLineToPoint(dVar6,dVar2 + dVar3,param_4,0);
  _CGPathAddArcToPoint(dVar6,dVar5,dVar1 + dVar4,dVar5,0x4018000000000000,param_4,0);
  if ((param_5 & 1) == 0) {
    dVar4 = (param_1 + -22.0) * 0.5;
    _CGPathAddLineToPoint(dVar4 + 22.0,dVar5,param_4,0);
    _CGPathAddLineToPoint(dVar4 + 11.0,dVar5 + 8.0,param_4,0);
    _CGPathAddLineToPoint(dVar4,dVar5,param_4,0);
  }
  _CGPathAddLineToPoint(dVar1,dVar5,param_4,0);
  _CGPathAddArcToPoint(0,dVar5,0,dVar2 + dVar3,0x4018000000000000,param_4,0);
  _CGPathAddLineToPoint(0,dVar2,param_4,0);
  _CGPathAddArcToPoint(0,0,dVar1,0,0x4018000000000000,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGPathCloseSubpath_1103474c0)(param_4);
  return;
}



/* Entry: 1091e8f8c; end: 1091e8f9b; -[SCLensPopoverView fillColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091e8f8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783390);
}


