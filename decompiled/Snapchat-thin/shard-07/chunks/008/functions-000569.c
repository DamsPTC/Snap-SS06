/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a8c288; end: 105a8c367; -[SCSpectaclesKnobsController spectaclesKnobsLocationManager:didSetBackgroundUpdatesEnabled:] */

void FUN_105a8c288(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c1de8;
  func_0x00010c272dc0(PTR_PTR_1126c1de8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c1de0;
  func_0x00010c09e1a0(PTR_PTR_1126c1de0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beda180(param_1,param_2,puVar2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be627e0(param_1);
  lVar4 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf00d20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087360(lVar4,param_2,param_1,uVar5,lVar3);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a8c368; end: 105a8c37f; -[SCSpectaclesKnobsController delegate] */

void FUN_105a8c368(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a8c380; end: 105a8c38b; -[SCSpectaclesKnobsController setDelegate:] */

void FUN_105a8c380(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105a8c38c; end: 105a8c3f3; -[SCSpectaclesKnobsController .cxx_destruct] */

void FUN_105a8c38c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105a8c3f4; end: 105a8c5e3; -[SCSpectaclesKnobsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8c3f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar13 = (long)_DAT_11272e740;
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c1df0;
  _objc_alloc(PTR_PTR_1126c1df0);
  lVar4 = lVar2;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0873c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bfa1c80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0873a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11272e744;
  _objc_loadWeakRetained(lVar1);
  lVar10 = lVar1;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0212e0(puVar3,param_2,lVar6,lVar9,lVar11);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar12 = PTR_PTR_1126c1df8;
  _objc_alloc(PTR_PTR_1126c1df8);
  func_0x00010c0212a0();
  param_1 = param_1 + lVar13;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a8c5e4; end: 105a8c683; -[SCSpectaclesKnobsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8c5e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  if (*(char *)(param_1 + _DAT_11272e748) == '\x01') {
    lVar1 = param_1 + _DAT_11272e740;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126eb9d8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a8c684; end: 105a8c707; -[SCSpectaclesKnobsEntryPoint spectaclesKnobsViewControllerWantsToDetachUIWithViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8c684(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_11272e748) = 1;
  lVar3 = (long)_DAT_11272e740;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248e80(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a8c708; end: 105a8c787; -[SCSpectaclesKnobsEntryPoint spectaclesKnobsViewControllerDidDeallocWithViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8c708(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_11272e748) = 0;
  lVar3 = (long)_DAT_11272e740;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248e40(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a8c788; end: 105a8c7bf; -[SCSpectaclesKnobsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8c788(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e744);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e740);
  return;
}



/* Entry: 105a8c7c0; end: 105a8c8bb; -[SCSpectaclesKnob selectedOption] */

void FUN_105a8c7c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105a8c8bc;
  uStack_30 = 0x105a8c8cc;
  uStack_28 = 0;
  func_0x00010c065640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0d80();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8c8bc; end: 105a8c8e3;  */

void FUN_105a8c8bc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a8c8e4; end: 105a8c91b;  */

void FUN_105a8c8e4(long param_1,undefined8 param_2)

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



/* Entry: 105a8c91c; end: 105a8ca1f; -[SCSpectaclesKnob options] */

void FUN_105a8c91c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105a8c8bc;
  uStack_30 = 0x105a8c8cc;
  puStack_28 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c065640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0d80();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8ca20; end: 105a8ca2f;  */

void FUN_105a8ca20(void)

{
  return;
}



/* Entry: 105a8ca30; end: 105a8ca67;  */

void FUN_105a8ca30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a8ca68; end: 105a8ccdb; -[SCSpectaclesKnob selectedOptionWithInjectedLabel] */

void FUN_105a8ca68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010c159c20();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_105a8c8bc;
  uStack_118 = 0x105a8c8cc;
  uStack_110 = 0;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      uVar9 = *(undefined8 *)(lVar7 * 8);
      lVar3 = lVar2;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010c296d80(uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(lVar3);
      if ((int)lVar4 != 0) {
        func_0x00010c0c0c20(uVar9);
      }
      lVar7 = lVar7 + 1;
    } while (lVar6 != lVar7);
    lVar6 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  uVar8 = puStack_130[5];
  _objc_retain(uVar8);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_138,8);
  __Unwind_Resume();
  puVar5 = PTR_PTR_1126c1e00;
  func_0x00010c26cd00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(lVar2 + 0x20) + 8);
  uVar8 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105a8ccdc; end: 105a8cdbb;  */

void FUN_105a8ccdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c1e00;
  func_0x00010c26cd00(PTR_PTR_1126c1e00,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a8cdbc; end: 105a8cf0f; +[SCSpectaclesKnobOption knobOptionForSettingValue:] */

void FUN_105a8cdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_105a8c8bc;
  uStack_30 = 0x105a8c8cc;
  uStack_28 = 0;
  func_0x00010c0bcc80(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(&PTR____CFConstantStringClassReference_110daafd8);
  _objc_release(&PTR____CFConstantStringClassReference_110daafd8);
  _objc_release(&PTR____CFConstantStringClassReference_110daafd8);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8cf10; end: 105a8cf13;  */

void FUN_105a8cf10(void)

{
  return;
}



/* Entry: 105a8cf14; end: 105a8cff3;  */

void FUN_105a8cf14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c1e00;
  func_0x00010c0df960(PTR_PTR_1126c1e00,param_2,*(undefined8 *)(param_1 + 0x20),param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a8cff4; end: 105a8cff7;  */

void FUN_105a8cff4(void)

{
  return;
}



/* Entry: 105a8cff8; end: 105a8d19b; +[SCSpectaclesKnobOption knobOptionForSettingOption:] */

void FUN_105a8cff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105a8c8bc;
  uStack_60 = 0x105a8c8cc;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010c296d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bcc80(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8d19c; end: 105a8d19f;  */

void FUN_105a8d19c(void)

{
  return;
}



/* Entry: 105a8d1a0; end: 105a8d2a3;  */

void FUN_105a8d1a0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126c1e00;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c087500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df960();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a8d2a4; end: 105a8d323;  */

void FUN_105a8d2a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126c1e00;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c087500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df920(param_1,puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a8d324; end: 105a8d327;  */

void FUN_105a8d324(void)

{
  return;
}



/* Entry: 105a8d328; end: 105a8d42b; -[SCSpectaclesKnobOption value] */

void FUN_105a8d328(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_a8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105a8c8bc;
  uStack_30 = 0x105a8c8cc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105a8d42c;
  puStack_60 = &UNK_11084aef8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105a8d464;
  puStack_88 = &UNK_1108ceba8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105a8d4a8;
  puStack_b0 = &UNK_1108cebd8;
  puStack_80 = puStack_a8;
  puStack_58 = puStack_a8;
  puStack_48 = puStack_a8;
  func_0x00010c0c0c20(param_1,param_2,&puStack_78,&puStack_a0,&puStack_c8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8d42c; end: 105a8d4eb;  */

void FUN_105a8d42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a8d4ec; end: 105a8d5ef; -[SCSpectaclesKnobOption label] */

void FUN_105a8d4ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_a8 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105a8c8bc;
  uStack_30 = 0x105a8c8cc;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105a8d5f0;
  puStack_60 = &UNK_11084aef8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105a8d628;
  puStack_88 = &UNK_1108ceba8;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105a8d660;
  puStack_b0 = &UNK_1108cebd8;
  puStack_80 = puStack_a8;
  puStack_58 = puStack_a8;
  puStack_48 = puStack_a8;
  func_0x00010c0c0c20(param_1,param_2,&puStack_78,&puStack_a0,&puStack_c8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8d5f0; end: 105a8d697;  */

void FUN_105a8d5f0(long param_1,undefined8 param_2)

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



/* Entry: 105a8d698; end: 105a8d80f; +[SCSpectaclesSettingServiceSettingOption settingOptionForKnobOption:] */

void FUN_105a8d698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105a8c8bc;
  uStack_40 = 0x105a8c8cc;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105a8c8bc;
  uStack_70 = 0x105a8c8cc;
  uStack_68 = 0;
  func_0x00010c0c0c20(param_3);
  puVar1 = PTR_PTR_1126c1dd0;
  _objc_alloc(PTR_PTR_1126c1dd0);
  func_0x00010c0214a0();
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a8d810; end: 105a8d92f;  */

void FUN_105a8d810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c1a20;
  func_0x00010c26cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a8d930; end: 105a8d9bf;  */

void FUN_105a8d930(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c1a20;
  func_0x00010bfb2d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a8d9c0; end: 105a8dadf; +[SCSpectaclesSettingServiceSettingOption settingOptionsForKnob:] */

void FUN_105a8d9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105a8c8bc;
  uStack_40 = 0x105a8c8cc;
  uStack_38 = 0;
  uVar1 = param_3;
  func_0x00010c065640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0d80();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8dae0; end: 105a8daef;  */

void FUN_105a8dae0(void)

{
  return;
}



/* Entry: 105a8daf0; end: 105a8db73;  */

void FUN_105a8daf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_105a8db74;
  puStack_30 = &UNK_1108d2838;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b8600(param_3,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a8db74; end: 105a8db7f;  */

void FUN_105a8db74(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_settingOptionForKnobOption__1126679d8,param_2);
  return;
}



/* Entry: 105a8db80; end: 105a8dce7; +[SCSpectaclesSettingServiceValue settingValueForKnobInput:] */

void FUN_105a8db80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105a8c8bc;
  uStack_40 = 0x105a8c8cc;
  uStack_38 = 0;
  func_0x00010c0c0d80(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8dce8; end: 105a8de03;  */

void FUN_105a8dce8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c1a20;
  func_0x00010bf1f520(PTR_PTR_1126c1a20,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a8de04; end: 105a8de9f;  */

void FUN_105a8de04(long param_1,undefined8 param_2)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  pcStack_28 = FUN_105a8dea0;
  puStack_20 = &UNK_11084aef8;
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105a8dee4;
  puStack_48 = &UNK_1108ceba8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105a8df28;
  puStack_70 = &UNK_1108cebd8;
  uStack_40 = uStack_68;
  uStack_18 = uStack_68;
  func_0x00010c0c0c20(param_2,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 105a8dea0; end: 105a8df6b;  */

void FUN_105a8dea0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c1a20;
  func_0x00010c26cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a8df6c; end: 105a8e243; +[SCSpectaclesKnobInput knobInputForSettingValue:options:] */

void FUN_105a8df6c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar4 = param_4, func_0x00010bf529e0(), lVar4 == 0)) {
    puStack_158 = &uStack_160;
    uStack_160 = 0;
    uStack_150 = 0x3032000000;
    pcStack_148 = FUN_105a8c8bc;
    uStack_140 = 0x105a8c8cc;
    uStack_138 = 0;
    func_0x00010c0bcc80(param_3);
    puVar5 = (undefined *)puStack_158[5];
    _objc_retain(puVar5);
    __Block_object_dispose(&uStack_160,8);
    _objc_release(uStack_138);
  }
  else {
    puVar1 = PTR_PTR_1126c1e00;
    func_0x00010c0872e0(PTR_PTR_1126c1e00);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_4);
    lVar4 = param_4;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(param_4);
          }
          puVar5 = PTR_PTR_1126c1e00;
          func_0x00010c0872c0(PTR_PTR_1126c1e00);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        lVar4 = param_4;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(param_4);
    puVar5 = PTR_PTR_1126c1de8;
    func_0x00010c0d1e00(PTR_PTR_1126c1de8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_160,8);
  __Unwind_Resume();
  puVar5 = PTR_PTR_1126c1de8;
  func_0x00010c272dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a8e244; end: 105a8e35f;  */

void FUN_105a8e244(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c1de8;
  func_0x00010c272dc0(PTR_PTR_1126c1de8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a8e360; end: 105a8e363;  */

void FUN_105a8e360(void)

{
  return;
}



/* Entry: 105a8e364; end: 105a8e423; -[SCSpectaclesKnobsViewController initWithKnobsController:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105a8e364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126eb9e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11272e74c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar3));
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272e750),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a8e424; end: 105a8e487; -[SCSpectaclesKnobsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8e424(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_11272e750;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c248ea0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126eb9e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105a8e488; end: 105a8ea8b; -[SCSpectaclesKnobsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8e488(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126eb9e0;
  lStack_c0 = param_1;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11272e754;
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar9);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar12));
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c195460(uVar9);
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  FUN_105a906d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar10);
  _objc_release(uVar9);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf493c0(0xc049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar12;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar12 = (long)_DAT_11272e758;
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar9);
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar11 = (long)_DAT_11272e75c;
  uVar9 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar9);
  func_0x00010bea4d40(param_1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  puStack_108 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_d0 = uVar9;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = (undefined *)lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  uStack_e0 = uVar9;
  uStack_b0 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_f0 = uVar10;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  uStack_100 = uVar10;
  uStack_a8 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_118 = uVar9;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_120 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  uStack_128 = uVar9;
  uStack_a0 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_138 = uVar3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_130 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_98 = uVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  uStack_90 = uVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_108);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_128);
  _objc_release(lStack_120);
  _objc_release(lStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_100);
  _objc_release(lStack_f8);
  _objc_release(lStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_e0);
  _objc_release(lStack_d8);
  _objc_release(puStack_c8);
  _objc_release(uStack_d0);
  lVar2 = param_1;
  func_0x00010be10b60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105a8ea8c;
  puStack_168 = PTR_PTR_1126eb9e0;
  lStack_170 = lVar2;
  uStack_160 = uVar9;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_170,PTR_s_viewDidDisappear__112684c48);
  lVar2 = lVar2 + _DAT_11272e750;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c248ec0();
  _objc_release(lVar2);
  return;
}



/* Entry: 105a8ea8c; end: 105a8eaef; -[SCSpectaclesKnobsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8ea8c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eb9e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  param_1 = param_1 + _DAT_11272e750;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248ec0();
  _objc_release(param_1);
  return;
}



/* Entry: 105a8eaf0; end: 105a8eafb; -[SCSpectaclesKnobsViewController titleString] */

undefined ** FUN_105a8eaf0(void)

{
  return &PTR____CFConstantStringClassReference_110e1a958;
}



/* Entry: 105a8eafc; end: 105a8eb5b; -[SCSpectaclesKnobsViewController _setIsLoading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8eafc(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272e758),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11272e75c),PTR_s_startAnimating_112671118);
    return;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11272e758),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e75c),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105a8eb5c; end: 105a8ec3f; -[SCSpectaclesKnobsViewController _termsOfServiceForKnobId:] */

void FUN_105a8eb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_38 = FUN_105a8ec40;
  uStack_30 = 0x105a8ec50;
  uStack_28 = 0;
  func_0x00010c0be2c0(param_3);
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



/* Entry: 105a8ec40; end: 105a8ec57;  */

void FUN_105a8ec40(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a8ec58; end: 105a8ecab;  */

void FUN_105a8ec58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0720c0(param_2,param_2,&PTR____CFConstantStringClassReference_110e1a918);
  if ((int)param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e1a938;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a8ecac; end: 105a8ecaf;  */

void FUN_105a8ecac(void)

{
  return;
}



/* Entry: 105a8ecb0; end: 105a8ef0f; -[SCSpectaclesKnobsViewController _showAlertForError:] */

void FUN_105a8ecb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf3ec40();
  puVar2 = PTR_PTR_1126aed70;
  if (param_3 == 0) {
    func_0x000105a906f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar7 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar3 = puVar7;
    func_0x000105a90750();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000105a90768();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar7);
  }
  else {
    if (param_3 != 1) {
      puVar7 = (undefined *)0x0;
      goto LAB_105a8eebc;
    }
    func_0x000105a906f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126aed70;
    func_0x000105a90708();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar7 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    puVar4 = puVar7;
    func_0x000105a90720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000105a90738();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar7);
    _objc_release(puVar1);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_105a8eebc:
  func_0x00010c10eda0(param_1);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_1108d28e8);
  return;
}



/* Entry: 105a8ef10; end: 105a8ef23;  */

void FUN_105a8ef10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_1108d28e8);
  return;
}



/* Entry: 105a8ef24; end: 105a8ef97;  */

void FUN_105a8ef24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      *(undefined8 *)PTR__UIApplicationOpenSettingsURLString_110345a80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a8ef98; end: 105a8efb7;  */

void FUN_105a8ef98(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a8efb8; end: 105a8f1db; -[SCSpectaclesKnobsViewController _showAlertForRestartSpecs] */

void FUN_105a8efb8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_70;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105a907e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105a8f1dc;
  puStack_80 = &UNK_1108482a8;
  puVar8 = auStack_70;
  _objc_copyWeak(auStack_78,puVar8);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000105a90708();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000105a907b0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000105a907c8();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar2;
  puStack_60 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  puVar5 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  puVar6 = puVar5;
  __Unwind_Resume(puVar5);
  pcStack_a8 = FUN_105a8f1dc;
  puStack_d0 = puVar4;
  puStack_c8 = puVar3;
  puStack_c0 = puVar2;
  puStack_b8 = puVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_copyWeak(auStack_d8,puVar6 + 0x20);
  func_0x00010bf84b00(puVar8);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar8);
  return;
}



/* Entry: 105a8f1dc; end: 105a8f283;  */

void FUN_105a8f1dc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105a8f284; end: 105a8f2b7;  */

void FUN_105a8f284(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be011e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a8f2b8; end: 105a8f2c7;  */

void FUN_105a8f2b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a8f2c8; end: 105a8f62f; -[SCSpectaclesKnobsViewController _showAlertForMultiOptionSelectWithOptions:selectedOptionLabel:knobId:] */

void FUN_105a8f2c8(undefined8 param_1,undefined1 *param_2,long param_3,undefined **param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
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
  lVar2 = param_3;
  func_0x00010bf52a60();
  ppuVar7 = param_4;
  if (lVar2 != 0) {
    lVar8 = *plStack_130;
    ppuVar7 = &puStack_188;
    do {
      lVar9 = 0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_138 + lVar9 * 8);
        uVar3 = uVar10;
        func_0x00010c087500(uVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_148,param_1);
        uVar4 = uVar10;
        func_0x00010c087500(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(uVar4);
        puVar5 = PTR_PTR_1126b10a0;
        func_0x00010c1588e0(PTR_PTR_1126b10a0);
        _objc_retainAutoreleasedReturnValue();
        puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_105a8f630;
        puStack_170 = &UNK_1108d2968;
        param_2 = auStack_148;
        _objc_copyWeak(auStack_150,param_2);
        uStack_168 = uVar10;
        _objc_retain(param_3);
        lStack_160 = param_3;
        _objc_retain(param_5);
        puVar6 = puVar5;
        uStack_158 = param_5;
        func_0x00010bf1d200(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        func_0x00010befa120(puVar1);
        _objc_release(puVar6);
        _objc_release(uStack_158);
        _objc_release(lStack_160);
        _objc_destroyWeak(auStack_150);
        _objc_destroyWeak(auStack_148);
        _objc_release(uVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  lVar2 = param_3;
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b10a0;
  func_0x000105a90708();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar2);
  func_0x00010befa120(puVar1);
  puVar5 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  func_0x00010c10af80(param_1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar7 + 7);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  func_0x00010bf84b00(param_2);
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  func_0x00010be00260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a8f630; end: 105a8f677;  */

void FUN_105a8f630(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a8f678; end: 105a8f687;  */

void FUN_105a8f678(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a8f688; end: 105a8f7b3; -[SCSpectaclesKnobsViewController _showAlertForTermsOfServiceWithString:] */

void FUN_105a8f688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000105a906f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a8f7b4; end: 105a8f7c3;  */

void FUN_105a8f7b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105a8f7c4; end: 105a8f8b7; -[SCSpectaclesKnobsViewController knobsController:didUpdateKnobs:needsSave:] */

void FUN_105a8f7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105a8f8b8;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_4);
  uStack_50 = param_4;
  uStack_40 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a8f8b8; end: 105a8f96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8f8b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea4d40(lVar1,param_2,0);
    lVar2 = lVar1;
    func_0x00010be9d0e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    _objc_release(lVar2);
    func_0x00010c1f9700(lVar1,param_2,lVar3);
    func_0x00010c195460(*(undefined8 *)(lVar1 + _DAT_11272e754),param_2,
                        *(undefined1 *)(param_1 + 0x30));
    lVar2 = lVar1;
    func_0x00010bf40120(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a8f970; end: 105a8fa77; -[SCSpectaclesKnobsViewController knobsController:didSetBatchUpdateKnobs:success:] */

void FUN_105a8f970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105a8fa78;
  puStack_60 = &UNK_110844dd0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  uStack_40 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a8fa78; end: 105a8fb0f;  */

void FUN_105a8fa78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c087360(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),0);
    if (*(char *)(param_1 + 0x38) == '\x01') {
      func_0x00010beb7a60(lVar1);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e1a8f8,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb7980(lVar1,param_2,puVar2);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a8fb10; end: 105a8fb77; -[SCSpectaclesKnobsViewController knobsController:didFailWithError:currentKnobs:needsSave:] */

void FUN_105a8fb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_4);
  func_0x00010c087360(param_1,param_2,param_3,param_5,param_6);
  func_0x00010beb7980(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a8fb78; end: 105a8fc33; -[SCSpectaclesKnobsViewController knobsControllerDidReceiveDeviceRestartResponse:] */

void FUN_105a8fb78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105a8fc34;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105a8fc34; end: 105a8fc6f;  */

void FUN_105a8fc34(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_1,param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a8fc70; end: 105a8fc9f; -[SCSpectaclesKnobsViewController _fetchCurrentKnobStateAndUpdateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a8fc70(long param_1,undefined8 param_2)

{
  func_0x00010bea4d40(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bfa4c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e74c),PTR_s_fetchAllKnobs_1125c6ca8);
  return;
}



/* Entry: 105a8fca0; end: 105a8fd97; -[SCSpectaclesKnobsViewController _sectionNumberForKnob:] */

undefined8 FUN_105a8fca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar1 = param_3;
  func_0x00010c087200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be2c0();
  _objc_release(uVar1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105a8fd98; end: 105a8fdbb;  */

void FUN_105a8fd98(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105a8fdbc; end: 105a8ff37; -[SCSpectaclesKnobsViewController _cellViewModelFromKnob:isEnabled:] */

void FUN_105a8fdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105a8ec40;
  uStack_60 = 0x105a8ec50;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010c065640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0c0d80(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a8ff38; end: 105a9000b;  */

void FUN_105a8ff38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c1e08;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c087300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0871c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c087200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c052ea0();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a9000c; end: 105a90017;  */

void FUN_105a9000c(void)

{
  return;
}



/* Entry: 105a90018; end: 105a9014b;  */

void FUN_105a90018(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c159ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uVar9 = 3;
  }
  else {
    lVar2 = lVar3;
    func_0x00010c08fa60();
    uVar9 = 3;
    if (lVar2 != 0) {
      uVar9 = 0;
    }
  }
  puVar4 = PTR_PTR_1126b69d8;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c087300(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0871c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c087200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfde980();
  func_0x00010c053a00(puVar4,param_2,uVar5,0,uVar6,lVar3,uVar9,uVar1,uVar8);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = puVar4;
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105a9014c; end: 105a90153; -[SCSpectaclesKnobsViewController _sectionViewModelsFromKnobs:] */

void FUN_105a9014c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sectionViewModelsFromKnobs_isEn_112584de0,param_3,1);
  return;
}



/* Entry: 105a90154; end: 105a90403; -[SCSpectaclesKnobsViewController _sectionViewModelsFromKnobs:isEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a90154(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
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
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar8 = auStack_f0;
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar8,0x10);
  if (lVar3 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar12 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        lVar4 = param_1;
        func_0x00010be9cf40(param_1,param_2,uVar12);
        func_0x00010c0df840(puVar5,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bddc4e0(param_1,param_2,uVar12,param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c0dff20(puVar2,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2,param_2,puVar6,puVar5);
        }
        if (lVar4 != 0) {
          func_0x00010befa120(puVar6,param_2,lVar4);
        }
        _objc_release(puVar6);
        _objc_release(lVar4);
        _objc_release(puVar5);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      puVar8 = auStack_f0;
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  bVar1 = true;
  do {
    bVar9 = bVar1;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puVar7 != (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b69e0;
      _objc_alloc(PTR_PTR_1126b69e0);
      puVar8 = (undefined1 *)0x0;
      func_0x00010c0535a0();
      func_0x00010befa120(puVar6,param_2,puVar5);
      _objc_release(puVar5);
    }
    _objc_release(puVar7);
    uVar11 = 1;
    bVar1 = false;
  } while (bVar9);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar13 = (long)_DAT_11272e74c;
    uVar12 = *(undefined8 *)(param_3 + lVar13);
    func_0x00010c087220(uVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010becb2a0(param_3,param_2,uVar12);
    _objc_retainAutoreleasedReturnValue();
    if (((int)puVar8 != 0) && (lVar3 != 0)) {
      func_0x00010beb7ae0(param_3,param_2,lVar3);
    }
    func_0x00010bf7d9a0(*(undefined8 *)(param_3 + lVar13),param_2,uVar12,puVar8);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar12);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105a90404; end: 105a90497; -[SCSpectaclesKnobsViewController didToggleSwitch:enabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a90404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272e74c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c087220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010becb2a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (((int)param_4 != 0) && (lVar2 != 0)) {
    func_0x00010beb7ae0(param_1,param_2,lVar2);
  }
  func_0x00010bf7d9a0(*(undefined8 *)(param_1 + lVar3),param_2,uVar1,param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a90498; end: 105a90567; -[SCSpectaclesKnobsViewController didSelectSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a90498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272e74c);
  func_0x00010c0871e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c065640();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105a90578;
  puStack_48 = &UNK_1108d2b18;
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c0c0d80(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108d2a98,
                      &PTR___NSConcreteGlobalBlock_1108d2ab8,&PTR___NSConcreteGlobalBlock_1108d2ad8,
                      &PTR___NSConcreteGlobalBlock_1108d2af8,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a90568; end: 105a90577;  */

void FUN_105a90568(void)

{
  return;
}



/* Entry: 105a90578; end: 105a9061b;  */

void FUN_105a90578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c159ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c087200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb79e0(uVar1,param_2,param_3,uVar3,uVar4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a9061c; end: 105a9062b; -[SCSpectaclesKnobsViewController _didSelectMultiOption:fromOptions:forKnobId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9061c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e74c),
             PTR_s_didSelectOption_fromOptions_forK_1125bc4e0);
  return;
}



/* Entry: 105a9062c; end: 105a9065b; -[SCSpectaclesKnobsViewController _didTapDoneButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9062c(long param_1,undefined8 param_2)

{
  func_0x00010bea4d40(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c25eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e74c),PTR_s_submitChanges_112675620);
  return;
}



/* Entry: 105a9065c; end: 105a9066b; -[SCSpectaclesKnobsViewController _didTapRestartSpecs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9065c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272e74c),PTR_s_restartSpectacles_11262ca18);
  return;
}



/* Entry: 105a9066c; end: 105a906d7; -[SCSpectaclesKnobsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a9066c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e750);
  _objc_storeStrong(param_1 + _DAT_11272e75c,0);
  _objc_storeStrong(param_1 + _DAT_11272e758,0);
  _objc_storeStrong(param_1 + _DAT_11272e754,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e74c,0);
  return;
}



/* Entry: 105a906d8; end: 105a907f7;  */

void FUN_105a906d8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1a998;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1a998,
                      &PTR____CFConstantStringClassReference_110e1a9b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105a907f8; end: 105a90a0b; -[SCSpectaclesLensManagementEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a907f8(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126c1e10;
  _objc_alloc(PTR_PTR_1126c1e10);
  lVar8 = (long)_DAT_11272e760;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar10 = 0;
    uVar11 = 0;
    lVar7 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + _DAT_11272e774);
    _objc_retain(uVar11);
    lVar10 = param_1 + _DAT_11272e778;
    _objc_loadWeakRetained(lVar10);
    lVar7 = param_1 + _DAT_11272e768;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar7;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11272e770;
    _objc_loadWeakRetained(lVar12);
  }
  lVar5 = lVar12;
  func_0x00010c281240(lVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11272e76c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar9;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006fa0(puVar1);
  _objc_release(uVar11);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_storeWeak(param_1 + _DAT_11272e764,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a90a0c; end: 105a90b4b; -[SCSpectaclesLensManagementEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a90a0c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar6 = (long)_DAT_11272e764;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_1 + lVar6;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c06d1a0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR_PTR_1126afc98;
      func_0x00010bf0c040();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + _DAT_11272e760;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105a90b4c;
      puStack_40 = &UNK_110842e18;
      _objc_retain(puVar4);
      puStack_38 = puVar4;
      func_0x00010bf6f440(lVar1,param_2,&puStack_58);
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(puStack_38);
      goto LAB_105a90b18;
    }
  }
  puVar4 = PTR_PTR_1126afc98;
  func_0x00010c0da5c0(PTR_PTR_1126afc98);
  _objc_retainAutoreleasedReturnValue();
LAB_105a90b18:
  puVar5 = puVar4;
  func_0x00010c117720(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a90b4c; end: 105a90b53;  */

void FUN_105a90b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105a90b54; end: 105a90bc7; -[SCSpectaclesLensManagementEntryPoint spectaclesLensManagementViewControllerDidDealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a90b54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272e760;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248f00(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a90bc8; end: 105a90c3b; -[SCSpectaclesLensManagementEntryPoint spectaclesLensManagementViewControllerWantsToDetachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a90bc8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272e760;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248f60(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a90c3c; end: 105a90caf; -[SCSpectaclesLensManagementEntryPoint spectaclesLensManagementViewControllerDidUpdateLensData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a90c3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272e760;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c248f20(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a90cb0; end: 105a90d27; -[SCSpectaclesLensManagementEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a90cb0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272e778);
  _objc_storeStrong(param_1 + _DAT_11272e774,0);
  _objc_destroyWeak(param_1 + _DAT_11272e770);
  _objc_destroyWeak(param_1 + _DAT_11272e76c);
  _objc_destroyWeak(param_1 + _DAT_11272e768);
  _objc_destroyWeak(param_1 + _DAT_11272e760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272e764);
  return;
}



/* Entry: 105a90d28; end: 105a90e13; -[SCSpectaclesLensManagementCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105a90d28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126eb9e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11272e77c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c19f0e0(0,0,0x4044000000000000,0x4044000000000000,
                        *(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f7a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9fe0();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}


