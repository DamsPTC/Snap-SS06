/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ca9fd0; end: 108ca9fd3; -[SCLensEffectOffscreenNullEffectUpdater fullScreenDidExitWithLensWithId:] */

void FUN_108ca9fd0(void)

{
  return;
}



/* Entry: 108ca9fd4; end: 108caa0cf; -[SCLensEffectOffscreenWarmupWorkflow initWithLensDataFetcher:lensMetadataStoreProvider:lensEffectInfoProvider:concurrentPerformer:] */

undefined1 *
FUN_108ca9fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe108;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108caa0d0; end: 108caa1e7; -[SCLensEffectOffscreenWarmupWorkflow warmupWithLensId:] */

void FUN_108caa0d0(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar4 = PTR_PTR_1126ae558;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bfe9c80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    func_0x00010be072c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108caa1e8; end: 108caa36b; -[SCLensEffectOffscreenWarmupWorkflow warmupEffectContainer:] */

void FUN_108caa1e8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf8cdc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126ae558;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bfe9c80(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_3;
    func_0x00010bf0bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf8cdc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be072c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = param_1;
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108caa36c; end: 108caa373;  */

void FUN_108caa36c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c271f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_toLensAsset_11267a1f0);
  return;
}



/* Entry: 108caa374; end: 108caa64f; -[SCLensEffectOffscreenWarmupWorkflow warmupAssetsContainers:withMemento:] */

void FUN_108caa374(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar5 = PTR_PTR_1126db910;
  puVar4 = PTR_PTR_1126db8a0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bf9fc80(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    _objc_opt_class(puVar4);
    puVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar4);
    puVar4 = param_4;
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_4);
    puVar2 = puVar4;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR_PTR_1126db910;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 == (undefined *)0x0) {
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010bf9fc80(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      _objc_retain(puVar4);
      _objc_copyWeak(auStack_60,auStack_58);
      lVar1 = param_3;
      func_0x00010c0b8600(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126db918;
      _objc_alloc(PTR_PTR_1126db918);
      func_0x00010bff4700();
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_60);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108caa650; end: 108caa71b;  */

void FUN_108caa650(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010bfb2660(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108caa71c; end: 108caa81b;  */

void FUN_108caa71c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08fb40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010be19ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar5 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108caa81c; end: 108caa9c3; -[SCLensEffectOffscreenWarmupWorkflow _effectsMementoForEffectId:optionalAssets:] */

void FUN_108caa81c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108caa9c4;
  puStack_90 = &UNK_110ac15f8;
  uStack_88 = param_4;
  uStack_80 = uVar4;
  _objc_retain(puVar1);
  puStack_d0 = puVar2;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_108caac88;
  puStack_b8 = &UNK_110849810;
  puStack_b0 = puVar1;
  puStack_78 = puVar1;
  uStack_70 = uVar3;
  uStack_68 = uVar5;
  _objc_retain(puVar1);
  _objc_retain(uVar5);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  _objc_retain(param_4);
  func_0x00010be4b3c0(param_1,param_2,param_3,&puStack_a8,&puStack_d0);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_b0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(puStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108caa9c4; end: 108caabe7;  */

void FUN_108caa9c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126b0820;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c094120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x20) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 0x20);
  }
  uVar2 = param_2;
  func_0x00010c0b8380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c2b3540(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bfa7fa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108caabe8;
  puStack_80 = &UNK_110847280;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar8;
  _objc_retain(uVar9);
  uStack_70 = uVar9;
  puStack_68 = puVar4;
  _objc_retain(puVar4);
  ppuVar7 = &puStack_98;
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar7 != (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar4 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  uVar5 = *(undefined8 *)(puVar4 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf8ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126db8a0;
  _objc_alloc(PTR_PTR_1126db8a0);
  func_0x00010c00ee80();
  func_0x00010bf43d60(*(undefined8 *)(puVar4 + 0x20));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108caabe8; end: 108caac87;  */

void FUN_108caabe8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126db8a0;
  _objc_alloc(PTR_PTR_1126db8a0);
  func_0x00010c00ee80();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108caac88; end: 108caac93;  */

void FUN_108caac88(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 108caac94; end: 108caae33; -[SCLensEffectOffscreenWarmupWorkflow _lensMetadataForEffectId:successBlock:failureBlock:] */

void FUN_108caac94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf68fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c0952c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010c297260(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108caae34; end: 108caaf7f;  */

void FUN_108caae34(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    func_0x00010c0c0760(param_2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108caaf80; end: 108cab04b;  */

void FUN_108caaf80(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  else {
    if (param_2 != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
      goto LAB_108cab030;
    }
    lVar3 = *(long *)(param_1 + 0x20);
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  _objc_release(puVar2);
LAB_108cab030:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cab04c; end: 108cab05b;  */

void FUN_108cab04c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000108cab058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 108cab05c; end: 108cab357; -[SCLensEffectOffscreenWarmupWorkflow _futureForDownloadAssetsContainer:withLens:] */

void FUN_108cab05c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar2 = param_3;
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar2 = param_3;
  func_0x00010bf0bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        uVar11 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        puVar5 = PTR_PTR_1126ae560;
        _objc_opt_new();
        puVar6 = puVar5;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar6);
        uVar7 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c271f20(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_108cab358;
        puStack_150 = &UNK_11084f200;
        puStack_148 = puVar5;
        _objc_retain(puVar5);
        func_0x00010bfa4f00(uVar7);
        _objc_release(uVar11);
        _objc_release(uVar7);
        _objc_release(puStack_148);
        _objc_release(puVar5);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar2;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126ae558;
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_108cab438;
  puStack_178 = &UNK_11085c638;
  puStack_170 = puVar1;
  _objc_retain(puVar1);
  ppuVar8 = &puStack_190;
  func_0x00010c297260(puVar5);
  _objc_release(puVar5);
  puVar5 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_170);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(ppuVar8);
  if (ppuVar8 == (undefined **)0x0) {
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    if (param_2 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010bf43ca0(uVar7);
      _objc_release(puVar1);
    }
    else {
      func_0x00010bf43d60(uVar7);
    }
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x20));
  }
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cab358; end: 108cab437;  */

void FUN_108cab358(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (param_2 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x00010bf43ca0(uVar3);
      _objc_release(puVar2);
    }
    else {
      func_0x00010bf43d60(uVar3);
    }
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cab438; end: 108cab44b;  */

void FUN_108cab438(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 108cab44c; end: 108cab493; -[SCLensEffectOffscreenWarmupWorkflow .cxx_destruct] */

void FUN_108cab44c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cab494; end: 108caba0f; -[SCLensProcessingPreviewIntegrationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cab494(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  FUN_108caba10();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0961a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112779c0c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf7f9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_70,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112779c10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c15fc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_108caba10(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,lVar1);
  _objc_release(lVar1);
  _objc_initWeak(auStack_88,0);
  _objc_initWeak(auStack_90,0);
  _objc_initWeak(auStack_98,0);
  _objc_initWeak(auStack_a0,0);
  puVar3 = auStack_68;
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010c08b9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112779c14);
  *(undefined1 **)(param_1 + _DAT_112779c14) = puVar4;
  _objc_release(uVar11);
  _objc_release(puVar3);
  puVar3 = auStack_80;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010c29f660();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(auStack_88,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = auStack_80;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010c0955a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(auStack_90,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = auStack_80;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010c096120();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(auStack_98,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = auStack_80;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010c277220();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(auStack_a0,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_initWeak(auStack_a8,param_1);
  uVar5 = param_1 + _DAT_112779c20;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar8 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar7);
  uVar5 = uVar6;
  if ((uVar8 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_108caba34;
  puStack_f0 = &UNK_110ac16e8;
  _objc_copyWeak(auStack_e8,auStack_a8);
  _objc_copyWeak(auStack_e0,auStack_70);
  _objc_copyWeak(auStack_d8,auStack_80);
  _objc_copyWeak(auStack_d0,auStack_88);
  _objc_copyWeak(auStack_c8,auStack_90);
  _objc_copyWeak(auStack_c0,auStack_98);
  _objc_copyWeak(auStack_b8,auStack_a0);
  _objc_copyWeak(auStack_b0,auStack_78);
  func_0x00010befa300(uVar5);
  lVar1 = param_1 + _DAT_112779c18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf72840();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_110,auStack_70);
  lVar10 = lVar9;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112779c1c);
  *(long *)(param_1 + _DAT_112779c1c) = lVar10;
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 108caba10; end: 108caba33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108caba10(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112779c0c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108caba34; end: 108cabf9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108caba34(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x23;
  long lVar11;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c075080();
    if ((int)uVar2 == 0) {
      lVar11 = 0;
    }
    else {
      unaff_x23 = lVar1 + _DAT_112779c24;
      _objc_loadWeakRetained(unaff_x23);
      lVar11 = unaff_x23;
      func_0x00010bfe8440();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c183940();
    _objc_release(lVar3);
    if ((int)uVar2 != 0) {
      _objc_release(lVar11);
      _objc_release(unaff_x23);
    }
    lVar11 = lVar1 + _DAT_112779c2c;
    _objc_loadWeakRetained();
    lVar3 = lVar11;
    func_0x00010c08f640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar11);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar5 == 0) {
      lVar11 = lVar1 + _DAT_112779c30;
      _objc_loadWeakRetained(lVar11);
      lVar3 = lVar11;
      func_0x00010c29f540();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c1302e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar9;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_108cabf9c;
      puStack_90 = &UNK_110ac1688;
      _objc_copyWeak(auStack_88,param_1 + 0x20);
      puVar7 = auStack_80;
      _objc_copyWeak(auStack_80,param_1 + 0x30);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297280(lVar6);
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar11);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_88);
    }
    else {
      lVar11 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c1ea940();
      _objc_release(lVar11);
    }
    uVar2 = lVar1 + _DAT_112779c0c;
    _objc_loadWeakRetained();
    uVar8 = uVar2;
    func_0x00010c0963a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar9 = PTR_PTR_1126db920;
    _objc_opt_class(PTR_PTR_1126db920);
    uVar10 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar9);
    uVar2 = uVar8;
    if ((uVar10 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar8);
    uVar8 = param_2;
    func_0x00010c075080();
    if ((int)uVar8 == 0) {
      lVar11 = lVar1 + _DAT_112779c28;
      _objc_loadWeakRetained(lVar11);
      lVar3 = lVar11;
      func_0x00010c29a960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221c60(uVar2);
      _objc_release(lVar3);
      _objc_release(lVar11);
    }
    else {
      func_0x00010c221c60(uVar2);
    }
    uVar8 = param_2;
    func_0x00010c075080();
    if ((uVar8 & 1) == 0) {
      func_0x00010c1aa6c0(uVar2);
    }
    else {
      lVar11 = lVar1 + _DAT_112779c24;
      _objc_loadWeakRetained(lVar11);
      lVar3 = lVar11;
      func_0x00010bfe8440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa6c0(uVar2);
      _objc_release(lVar3);
      _objc_release(lVar11);
    }
    func_0x00010c1b3900(uVar2);
    lVar11 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar11);
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c223500();
    _objc_release(lVar3);
    _objc_release(lVar11);
    lVar11 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar11);
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1bc2c0();
    _objc_release(lVar3);
    _objc_release(lVar11);
    lVar11 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar11);
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c1bc6e0();
    _objc_release(lVar3);
    _objc_release(lVar11);
    lVar11 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar11);
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c218c80();
    _objc_release(lVar3);
    _objc_release(lVar11);
    uVar8 = uVar2;
    func_0x00010bf76fa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,param_1 + 0x30);
    _objc_copyWeak(auStack_b0,param_1 + 0x58);
    func_0x00010c297260(uVar8);
    _objc_release(uVar8);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar11 = param_1;
    func_0x00010c096120();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    func_0x00010c0e33e0(lVar11);
    _objc_release(lVar11);
    _objc_release(param_1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uVar2);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108cabf9c; end: 108cac06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cabf9c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    lVar2 = lVar1 + _DAT_112779c2c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c08f640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c1122a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1ea940();
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cac06c; end: 108cac14b;  */

void FUN_108cac06c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0955a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2196c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c096120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2196e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c0c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cac14c; end: 108cac27b;  */

void FUN_108cac14c(long param_1,undefined8 param_2)

{
  func_0x00010c175380(*(undefined8 *)(param_1 + 0x20),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1755b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCachedVideoURLPromise__11263af88,0);
  return;
}



/* Entry: 108cac27c; end: 108cac4d3; -[SCLensProcessingPreviewIntegrationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cac27c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  plVar8 = &lStack_a0;
  lVar10 = (long)_DAT_112779c0c;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0963a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar9 = *(undefined8 *)(param_1 + _DAT_112779c14);
  _objc_retain(uVar9);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf17b60();
  _objc_release(puVar3);
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar10);
  lVar1 = lVar10;
  func_0x00010c0961a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_50,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar10);
  puVar5 = auStack_48;
  _objc_loadWeakRetained(puVar5);
  func_0x00010c1b3900();
  _objc_release(puVar5);
  puVar6 = auStack_48;
  _objc_loadWeakRetained(puVar6);
  puVar5 = puVar6;
  func_0x00010bf76fa0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108cac4d4;
  puStack_78 = &UNK_110ac1718;
  _objc_copyWeak(auStack_68,auStack_48);
  _objc_copyWeak(auStack_60,auStack_50);
  uVar7 = uVar9;
  _objc_retain(uVar9);
  uStack_70 = uVar9;
  puStack_58 = puVar4;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar5);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puStack_98 = PTR_PTR_1126fe110;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar8);
  return;
}



/* Entry: 108cac4d4; end: 108cac5c3;  */

void FUN_108cac4d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c175380();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1755a0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83d00();
  _objc_release(param_1);
  return;
}



/* Entry: 108cac5c4; end: 108cac66f; -[SCLensProcessingPreviewIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cac5c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112779c34);
  _objc_destroyWeak(param_1 + _DAT_112779c0c);
  _objc_destroyWeak(param_1 + _DAT_112779c10);
  _objc_destroyWeak(param_1 + _DAT_112779c30);
  _objc_destroyWeak(param_1 + _DAT_112779c2c);
  _objc_destroyWeak(param_1 + _DAT_112779c28);
  _objc_destroyWeak(param_1 + _DAT_112779c24);
  _objc_destroyWeak(param_1 + _DAT_112779c20);
  _objc_destroyWeak(param_1 + _DAT_112779c18);
  _objc_storeStrong(param_1 + _DAT_112779c14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779c1c,0);
  return;
}



/* Entry: 108cac670; end: 108cac6db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cac670(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112779c44);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cac6dc; end: 108cac75f; -[SCLensProcessingSharedDependencyProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cac6dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112779c54);
  _objc_destroyWeak(param_1 + _DAT_112779c50);
  _objc_destroyWeak(param_1 + _DAT_112779c4c);
  _objc_destroyWeak(param_1 + _DAT_112779c48);
  _objc_destroyWeak(param_1 + _DAT_112779c44);
  _objc_destroyWeak(param_1 + _DAT_112779c40);
  _objc_destroyWeak(param_1 + _DAT_112779c3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779c38,0);
  return;
}



/* Entry: 108cac760; end: 108cac773; -[SCLensProcessingSharedLauncherEntryPoint setViewfinderScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cac760(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112779c64,param_3);
  return;
}



/* Entry: 108cac774; end: 108cac7d3; -[SCLensProcessingSharedLauncherEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cac774(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779c68,0);
  _objc_destroyWeak(param_1 + _DAT_112779c64);
  _objc_destroyWeak(param_1 + _DAT_112779c60);
  _objc_destroyWeak(param_1 + _DAT_112779c5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112779c58);
  return;
}



/* Entry: 108cac7d4; end: 108cac817; -[SCLensProcessingSharedServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cac7d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112779c6c);
  _objc_destroyWeak(param_1 + _DAT_112779c74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112779c70);
  return;
}



/* Entry: 108cac818; end: 108caca7b; -[SCLensProcessingSnapEditorIntegrationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cac818(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar1 = param_1;
  FUN_108caca7c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0961a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08b9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + (long)_DAT_112779c78);
  *(ulong *)(param_1 + (long)_DAT_112779c78) = uVar3;
  _objc_release(uVar10);
  _objc_release(uVar2);
  lVar4 = param_1 + (long)_DAT_112779c7c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c15fc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  uVar3 = uVar1;
  func_0x00010c0963a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126db920;
  _objc_opt_class(PTR_PTR_1126db920);
  uVar7 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar6);
  uVar2 = uVar3;
  if ((uVar7 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  func_0x00010c1b3900(uVar2);
  uVar3 = uVar2;
  func_0x00010bf76fa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar5);
  _objc_retain(uVar1);
  func_0x00010c297260(uVar3);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c096120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  func_0x00010c0e33e0(uVar3);
  _objc_release(uVar3);
  lVar4 = param_1 + (long)_DAT_112779c80;
  _objc_loadWeakRetained(lVar4);
  lVar8 = lVar4;
  func_0x00010bf7f9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1 + (long)_DAT_112779c90;
  _objc_loadWeakRetained(lVar4);
  lVar9 = lVar4;
  func_0x00010c0da2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183940(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(uVar1);
  return;
}



/* Entry: 108caca7c; end: 108caca9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108caca7c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112779c80);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cacaa0; end: 108cacb57;  */

void FUN_108cacaa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0955a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2196c0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c096120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2196e0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cacb58; end: 108cacd73; -[SCLensProcessingSnapEditorIntegrationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cacb58(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_112779c80;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0963a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c1b3900(lVar2);
  uVar8 = *(undefined8 *)(param_1 + _DAT_112779c78);
  _objc_retain(uVar8);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf17b60();
  _objc_release(puVar3);
  lVar1 = param_1;
  FUN_108caca7c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0961a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
  func_0x00010c1b3900(lVar2);
  lVar1 = lVar2;
  func_0x00010bf76fa0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108cacd74;
  puStack_70 = &UNK_1108cedc8;
  _objc_retain(lVar2);
  lStack_68 = lVar2;
  _objc_copyWeak(auStack_58,auStack_48);
  uVar6 = uVar8;
  _objc_retain(uVar8);
  uStack_60 = uVar8;
  puStack_50 = puVar4;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar1);
  _objc_release(uVar6);
  _objc_release(lVar1);
  puStack_90 = PTR_PTR_1126fe118;
  plVar7 = &lStack_98;
  lStack_98 = param_1;
  _objc_msgSendSuper2(plVar7,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar8);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar7);
  return;
}



/* Entry: 108cacd74; end: 108cace43;  */

void FUN_108cacd74(long param_1,undefined8 param_2)

{
  func_0x00010c175380(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c1755a0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83d00();
  _objc_release(param_1);
  return;
}



/* Entry: 108cace44; end: 108cacebb; -[SCLensProcessingSnapEditorIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cace44(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112779c90);
  _objc_destroyWeak(param_1 + _DAT_112779c8c);
  _objc_destroyWeak(param_1 + _DAT_112779c7c);
  _objc_destroyWeak(param_1 + _DAT_112779c80);
  _objc_destroyWeak(param_1 + _DAT_112779c88);
  _objc_destroyWeak(param_1 + _DAT_112779c84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779c78,0);
  return;
}



/* Entry: 108cacebc; end: 108cacfe7; -[SCLensProcessingDirtyFramePreviewWorkflow initWithDirtyFrameProvider:lensProcessingTracker:] */

undefined8 *
FUN_108cacebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe120;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010c0e33e0(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108cacfe8; end: 108cad05f;  */

void FUN_108cacfe8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0cf2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beb16e0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cad060; end: 108cad1bb; -[SCLensProcessingDirtyFramePreviewWorkflow _setupWithDirtyFrameProvider:mlEventsTracker:] */

void FUN_108cad060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c0cf260(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108cad1bc;
  puStack_70 = &UNK_110ac1778;
  _objc_retain(param_3);
  uVar3 = uVar2;
  uStack_68 = param_3;
  func_0x00010c25ff60(uVar2,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0cf240(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x108cad2a4;
  puStack_98 = &UNK_110ac1778;
  uStack_90 = param_3;
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 108cad1bc; end: 108cad393;  */

void FUN_108cad1bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126db928;
  func_0x00010be45360();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c0cffe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c183960(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108cad394; end: 108cad467; +[SCLensProcessingDirtyFramePreviewWorkflow _isValidEvent:] */

uint FUN_108cad394(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0cffe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      lVar4 = param_3;
      func_0x00010c08fb40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c07a7e0();
      uVar6 = (uint)lVar5 ^ 1;
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 108cad468; end: 108cad473; -[SCLensProcessingDirtyFramePreviewWorkflow .cxx_destruct] */

void FUN_108cad468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cad474; end: 108cad47b; -[SCPreviewSampleBufferMetadataProvider orientation] */

undefined8 FUN_108cad474(void)

{
  return 1;
}



/* Entry: 108cad47c; end: 108cad483; -[SCPreviewSampleBufferMetadataProvider imageOrientation] */

undefined8 FUN_108cad47c(void)

{
  return 0;
}



/* Entry: 108cad484; end: 108cad48b; -[SCPreviewSampleBufferMetadataProvider opaqueSampleBuffer] */

undefined8 FUN_108cad484(void)

{
  return 1;
}



/* Entry: 108cad48c; end: 108cad493; -[SCPreviewSampleBufferMetadataProvider shouldFlipSavingImage] */

undefined8 FUN_108cad48c(void)

{
  return 0;
}



/* Entry: 108cad494; end: 108cad49b; -[SCPreviewSampleBufferMetadataProvider isFileStream] */

undefined8 FUN_108cad494(void)

{
  return 1;
}



/* Entry: 108cad49c; end: 108cad4a3; -[SCPreviewSampleBufferMetadataProvider isLiveStreaming] */

undefined8 FUN_108cad49c(void)

{
  return 0;
}



/* Entry: 108cad4a4; end: 108cad50f; -[SCPreviewSampleBufferMetadataProvider fieldOfViewObservable] */

void FUN_108cad4a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf69620(PTR_PTR_1126b2930);
  func_0x00010c0df740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cad510; end: 108cad58b; -[SCPreviewSampleBufferMetadataProvider bufferDimensionObservable] */

void FUN_108cad510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_PTR_1126ae6b8;
  uStack_28 = 0x4094000000000000;
  uStack_30 = 0x4086800000000000;
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_30,"{CGSize=dd}");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cad58c; end: 108cad5f7; -[SCPreviewSampleBufferMetadataProvider cameraRenderRegionObservable] */

void FUN_108cad58c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971a0(0,0,0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cad5f8; end: 108cad60b; -[SCPreviewSampleBufferMetadataProvider captureDevicePositionObservable] */

void FUN_108cad5f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0860b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae6b8,PTR_s_just__1125ff238,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d02a0);
  return;
}



/* Entry: 108cad60c; end: 108cad693; -[SCPreviewViewfinderDataSource init] */

undefined1 * FUN_108cad60c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe128;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b3770;
    func_0x00010c104620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126db950;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cad694; end: 108cad69b; -[SCPreviewViewfinderDataSource start] */

undefined8 FUN_108cad694(void)

{
  return 0;
}



/* Entry: 108cad69c; end: 108cad6a3; -[SCPreviewViewfinderDataSource captureHandler] */

undefined8 FUN_108cad69c(void)

{
  return 0;
}



/* Entry: 108cad6a4; end: 108cad6ab; -[SCPreviewViewfinderDataSource audioHandler] */

undefined8 FUN_108cad6a4(void)

{
  return 0;
}



/* Entry: 108cad6ac; end: 108cad6b3; -[SCPreviewViewfinderDataSource positionSettingHandler] */

undefined8 FUN_108cad6ac(void)

{
  return 0;
}



/* Entry: 108cad6b4; end: 108cad6bb; -[SCPreviewViewfinderDataSource zoomingHandler] */

undefined8 FUN_108cad6b4(void)

{
  return 0;
}



/* Entry: 108cad6bc; end: 108cad6e3; -[SCPreviewViewfinderDataSource sampleBufferMetadataProvider] */

void FUN_108cad6bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cad6e4; end: 108cad717; -[SCPreviewViewfinderDataSource didInvalidateAllTokens] */

void FUN_108cad6e4(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cad718; end: 108cad72f; -[SCPreviewViewfinderDataSource delegate] */

void FUN_108cad718(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cad730; end: 108cad73b; -[SCPreviewViewfinderDataSource setDelegate:] */

void FUN_108cad730(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108cad73c; end: 108cad743; -[SCPreviewViewfinderDataSource context] */

undefined8 FUN_108cad73c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cad744; end: 108cad77b; -[SCPreviewViewfinderDataSource .cxx_destruct] */

void FUN_108cad744(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cad77c; end: 108cad797; -[SCLensProcessingSharedDirtyFrameProvider isCurrentFrameDirty] */

bool FUN_108cad77c(long param_1)

{
  func_0x00010c0f75e0();
  return param_1 != 0;
}



/* Entry: 108cad798; end: 108cad80b; -[SCLensProcessingSharedDirtyFrameProvider markCurrentFrameAsDirty] */

void FUN_108cad798(undefined8 param_1)

{
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f88c0();
  _objc_release(param_1);
  return;
}



/* Entry: 108cad80c; end: 108cad87f;  */

void FUN_108cad80c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf4fe20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((lVar2 == 0) && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x14) & 1) == 0)) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x14) = 1;
  }
  func_0x00010c0bb400(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108cad880; end: 108cad8bb; -[SCLensProcessingSharedDirtyFrameProvider markCurrentFrameAsDirtyCount:] */

void FUN_108cad880(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0f75e0();
    func_0x00010c1da280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0bb450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_markCurrentFrameAsDirtyIfPending_11260c728)
    ;
    return;
  }
  return;
}



/* Entry: 108cad8bc; end: 108cad903; -[SCLensProcessingSharedDirtyFrameProvider markCurrentFrameAsDirtyIfPending] */

void FUN_108cad8bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0f75e0();
  if (lVar1 != 0) {
    func_0x00010c0f75e0(param_1);
    func_0x00010c1da280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0bb410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_markCurrentFrameAsDirty_11260c718);
    return;
  }
  return;
}



/* Entry: 108cad904; end: 108cad9ff; -[SCLensProcessingSharedDirtyFrameProvider setContinuousRenderingEnabled:contextId:] */

void FUN_108cad904(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    if (param_3 == 0) {
      func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_4);
      lVar1 = *(long *)(param_1 + 8);
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        _os_unfair_lock_unlock(param_1 + 0x10);
        goto LAB_108cad9d0;
      }
    }
    else {
      func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_4);
    }
    param_1 = param_1 + 0x10;
    _os_unfair_lock_unlock(param_1);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f88c0();
    _objc_release(param_1);
  }
LAB_108cad9d0:
  _objc_release(param_4);
  return;
}



/* Entry: 108cada00; end: 108cada5f;  */

void FUN_108cada00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4fe20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200d80();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cada60; end: 108cadbd3; -[SCLensProcessingSharedDirtyFrameProvider resetContinuousRenderingForEffectId:] */

void FUN_108cada60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf51e00();
    _os_unfair_lock_unlock(param_1 + 0x10);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(lVar2);
    lVar1 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(lVar2);
          }
          uVar4 = *(ulong *)(lStack_118 + lVar6 * 8);
          uVar3 = uVar4;
          func_0x00010bf4bb00(uVar4,param_2,param_3);
          if ((uVar3 & 1) != 0) {
            func_0x00010c183960(param_1,param_2,0,uVar4);
          }
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x10);
  __Unwind_Resume(param_3);
  _objc_loadWeakRetained(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cadbd4; end: 108cadbeb; -[SCLensProcessingSharedDirtyFrameProvider continuousRenderingController] */

void FUN_108cadbd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cadbec; end: 108cadbf7; -[SCLensProcessingSharedDirtyFrameProvider setContinuousRenderingController:] */

void FUN_108cadbec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108cadbf8; end: 108cadbff; -[SCLensProcessingSharedDirtyFrameProvider pendingFramesCount] */

undefined8 FUN_108cadbf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cadc00; end: 108cadc07; -[SCLensProcessingSharedDirtyFrameProvider setPendingFramesCount:] */

void FUN_108cadc00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108cadc08; end: 108cadc33; -[SCLensProcessingSharedDirtyFrameProvider .cxx_destruct] */

void FUN_108cadc08(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cadc34; end: 108cadc4f; -[SCLensProcessingSharedLauncher isLaunched] */

bool FUN_108cadc34(long param_1)

{
  func_0x00010bef0ba0();
  return 0 < param_1;
}



/* Entry: 108cadc50; end: 108cadd33; -[SCLensProcessingSharedLauncher launchLensProcessing] */

void FUN_108cadc50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126db958;
  _objc_opt_new(PTR_PTR_1126db958);
  puVar3 = PTR_PTR_1126ae6b8;
  puVar2 = PTR_PTR_1126bd5f8;
  func_0x00010c29c760(PTR_PTR_1126bd5f8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf237a0(uVar5,param_2,0,0,puVar1,puVar3,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010bef0ba0(param_1);
  func_0x00010c1628a0(param_1,param_2,lVar4 + 1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108cadd34; end: 108caddeb; -[SCLensProcessingSharedLauncher dismissLensProcessingWithToken:completion:] */

void FUN_108cadd34(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126db960;
  _objc_opt_class(PTR_PTR_1126db960);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010bef0ba0(param_1);
    func_0x00010c1628a0(param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c12e1e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a4ae0();
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108caddec; end: 108caddf3; -[SCLensProcessingSharedLauncher activeLensProcessingCount] */

undefined8 FUN_108caddec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108caddf4; end: 108caddfb; -[SCLensProcessingSharedLauncher setActiveLensProcessingCount:] */

void FUN_108caddf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108caddfc; end: 108cade57; -[SCLensProcessingSharedLauncher .cxx_destruct] */

void FUN_108caddfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cade58; end: 108cade9f; -[SCLensProcessingSharedTranscodingWorkflow dealloc] */

void FUN_108cade58(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  puStack_28 = PTR_PTR_1126fe140;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108cadea0; end: 108cadeeb; -[SCLensProcessingSharedTranscodingWorkflow setIsPreviewVisible:] */

void FUN_108cadea0(long param_1,undefined8 param_2,byte param_3)

{
  _os_unfair_lock_lock(param_1 + 0x18);
  *(byte *)(param_1 + 0x38) = param_3;
  if ((param_3 & 1) == 0) {
    _objc_storeWeak(param_1 + 0x70,0);
    _objc_storeWeak(param_1 + 0x78,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 108cadeec; end: 108cadf1f; -[SCLensProcessingSharedTranscodingWorkflow isPreviewVisible] */

undefined1 FUN_108cadeec(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  _os_unfair_lock_unlock(param_1 + 0x18);
  return uVar1;
}



/* Entry: 108cadf20; end: 108cae0d7; -[SCLensProcessingSharedTranscodingWorkflow willStartTranscodingVideoWithLensIds:] */

void FUN_108cadf20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(long *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 1;
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf17b60();
      *(undefined **)(param_1 + 0x20) = puVar3;
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ae560;
      _objc_opt_new();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar2;
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = uVar5;
      _objc_release(uVar6);
      lVar1 = param_1 + 0x70;
      _objc_loadWeakRetained(lVar1);
      lVar4 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(param_1 + 0x40,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x78;
      _objc_loadWeakRetained(lVar1);
      lVar4 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(param_1 + 0x48,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar1);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
      _objc_release(lVar1);
    }
  }
  else {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
  return;
}



/* Entry: 108cae0d8; end: 108cae1df;  */

void FUN_108cae0d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29a960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b51c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe8440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b51c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29a960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6180();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe8440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255e80();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cae1e0; end: 108cae35f; -[SCLensProcessingSharedTranscodingWorkflow didEndTranscodingVideo] */

void FUN_108cae1e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x30);
  lVar1 = lVar5 + -1;
  *(long *)(param_1 + 0x30) = lVar1;
  if (lVar1 == 0 || lVar5 < 1) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar2);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x10));
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar3);
    _objc_copyWeak(auStack_38,param_1 + 0x40);
    puVar4 = auStack_40;
    _objc_copyWeak(puVar4,param_1 + 0x48);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_38);
    _objc_copyWeak(auStack_48,auStack_40);
    func_0x00010c0f7fc0(puVar4);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
  return;
}



/* Entry: 108cae360; end: 108cae3f7;  */

void FUN_108cae360(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1b51c0();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1b51c0();
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07b080();
  if (iVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c13dae0();
    _objc_release(lVar2);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c24e9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108cae3f8; end: 108cae423; -[SCLensProcessingSharedTranscodingWorkflow clearCachedTranscodingState] */

void FUN_108cae3f8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1755a0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c175390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCachedEffectId__11263af00,0);
  return;
}



/* Entry: 108cae424; end: 108cae59f; -[SCLensProcessingSharedTranscodingWorkflow _didEnterBackground] */

void FUN_108cae424(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  if ((0 < *(long *)(param_1 + 0x30)) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar4);
    _os_unfair_lock_unlock(param_1 + 0x18);
    lVar1 = 0;
    _dispatch_semaphore_create();
    dVar5 = 1.60807493534087e-314;
    _objc_retain();
    func_0x00010c297260(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104780();
    if (dVar5 == 0.0) {
      dVar5 = 1.0;
    }
    _objc_release(uVar2);
    dVar6 = dVar5 * 1000000000.0;
    if (dVar5 <= 0.0) {
      dVar6 = 1000000000.0;
    }
    uVar2 = 0;
    _dispatch_time(0,(long)dVar6);
    lVar3 = lVar1;
    _dispatch_semaphore_wait(lVar1,uVar2);
    if (lVar3 != 0) {
      lVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c1b51c0();
      _objc_release(lVar3);
      param_1 = param_1 + 0x48;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1b51c0();
      _objc_release(param_1);
    }
    _objc_release(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 108cae5a0; end: 108cae5a7;  */

void FUN_108cae5a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108cae5a8; end: 108cae5b3; -[SCLensProcessingSharedTranscodingWorkflow cachedEffectId] */

void FUN_108cae5a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 108cae5b4; end: 108cae5bb; -[SCLensProcessingSharedTranscodingWorkflow setCachedEffectId:] */

void FUN_108cae5b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108cae5bc; end: 108cae5c7; -[SCLensProcessingSharedTranscodingWorkflow cachedVideoURLPromise] */

void FUN_108cae5bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}


