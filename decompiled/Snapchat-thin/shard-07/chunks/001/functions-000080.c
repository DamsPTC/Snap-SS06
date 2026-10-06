/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10517dcac; end: 10517dd57; -[SCMemoryDeepLinkImplementation .cxx_destruct] */

void FUN_10517dcac(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10517dd58; end: 10517dfc7; -[SCMemoryDeepLinkProcessorPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517dd58(long param_1,undefined8 param_2)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  puVar1 = PTR_PTR_1126b5758;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271e194;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271e198;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_11271e19c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271e1a0;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c23f100();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271e1a4;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_11271e1a8;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271e1ac;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11271e1b0;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_11271e1b4;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + _DAT_11271e1b8);
  lVar18 = param_1 + _DAT_11271e1bc;
  _objc_loadWeakRetained();
  func_0x00010c02e700(puVar1,param_2,lVar4,lVar5,lVar7,lVar9,lVar10,lVar12,lVar14,lVar15,lVar17,
                      uVar19,lVar18);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271e1c0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10517dfc8; end: 10517e087; -[SCMemoryDeepLinkProcessorPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517dfc8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e1b8,0);
  _objc_destroyWeak(param_1 + _DAT_11271e1bc);
  _objc_destroyWeak(param_1 + _DAT_11271e1b4);
  _objc_destroyWeak(param_1 + _DAT_11271e1b0);
  _objc_destroyWeak(param_1 + _DAT_11271e1ac);
  _objc_destroyWeak(param_1 + _DAT_11271e1a8);
  _objc_destroyWeak(param_1 + _DAT_11271e1a4);
  _objc_destroyWeak(param_1 + _DAT_11271e1a0);
  _objc_destroyWeak(param_1 + _DAT_11271e19c);
  _objc_destroyWeak(param_1 + _DAT_11271e198);
  _objc_destroyWeak(param_1 + _DAT_11271e194);
  _objc_destroyWeak(param_1 + _DAT_11271e1c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e1c0);
  return;
}



/* Entry: 10517e088; end: 10517e09f;  */

void FUN_10517e088(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8cf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc8cf8,
                      &PTR____CFConstantStringClassReference_110dc8d18,0);
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



/* Entry: 10517e0a0; end: 10517e0cb; +[SCGrapheneMemoryDeepLinkMetric attempt] */

void FUN_10517e0a0(void)

{
  _objc_alloc(PTR_PTR_1126b5738);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10517e0cc; end: 10517e0f7; +[SCGrapheneMemoryDeepLinkMetric fail] */

void FUN_10517e0cc(void)

{
  _objc_alloc(PTR_PTR_1126b5738);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10517e0f8; end: 10517e123; +[SCGrapheneMemoryDeepLinkMetric success] */

void FUN_10517e0f8(void)

{
  _objc_alloc(PTR_PTR_1126b5738);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10517e124; end: 10517e1c3; -[SCGrapheneMemoryDeepLinkMetric description] */

void FUN_10517e124(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8d38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc8d38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e6938;
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



/* Entry: 10517e1c4; end: 10517e31b; -[SCGrapheneRegistry memoryDeepLinkGraphene] */

void FUN_10517e1c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10517e24c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b94a0 != -1) {
    func_0x00010002a2fc(0x1136b94a0,&puStack_48);
  }
  uVar1 = uRam00000001136b9498;
  _objc_retain(uRam00000001136b9498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10517e31c; end: 10517e3bb; -[SCShoppingLensModularCameraPDPServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517e31c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b5760;
  lVar2 = param_1 + _DAT_11271e1c8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11271e1cc;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18fe0(puVar1,param_2,lVar2,lVar4,param_1,param_1,
                      *(undefined8 *)(param_1 + _DAT_11271e1d0));
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10517e3bc; end: 10517e42f; -[SCShoppingLensModularCameraPDPServicesEntryPoint launchFeatureWithScope:owner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517e3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271e1d4;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf422e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517e430; end: 10517e49f; -[SCShoppingLensModularCameraPDPServicesEntryPoint endLaunchedFeatureWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517e430(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271e1d4;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf422e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c80();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517e4a0; end: 10517e51f; -[SCShoppingLensModularCameraPDPServicesEntryPoint lensSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517e4a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11271e1d8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10517e520; end: 10517e58b; -[SCShoppingLensModularCameraPDPServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517e520(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e1d0,0);
  _objc_destroyWeak(param_1 + _DAT_11271e1d8);
  _objc_destroyWeak(param_1 + _DAT_11271e1d4);
  _objc_destroyWeak(param_1 + _DAT_11271e1cc);
  _objc_destroyWeak(param_1 + _DAT_11271e1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e1dc);
  return;
}



/* Entry: 10517e58c; end: 10517e5ff; -[SCShoppingLensPDPServicesEntryPoint launchFeatureWithScope:owner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517e58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271e1ec;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf422e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517e600; end: 10517e66f; -[SCShoppingLensPDPServicesEntryPoint endLaunchedFeatureWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517e600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271e1ec;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf422e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c80();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517e670; end: 10517e6ef; -[SCShoppingLensPDPServicesEntryPoint lensSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517e670(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11271e1f0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10517e6f0; end: 10517e767; -[SCShoppingLensPDPServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517e6f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e1e8,0);
  _objc_destroyWeak(param_1 + _DAT_11271e1f0);
  _objc_destroyWeak(param_1 + _DAT_11271e1ec);
  _objc_destroyWeak(param_1 + _DAT_11271e1e4);
  _objc_destroyWeak(param_1 + _DAT_11271e1e0);
  _objc_destroyWeak(param_1 + _DAT_11271e1f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e1f4);
  return;
}



/* Entry: 10517e768; end: 10517e813;  */

void FUN_10517e768(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b5768;
  _objc_alloc(PTR_PTR_1126b5768);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar4);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bffbe60(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10517e814; end: 10517e8ef; -[SCShoppingLensPDPPresenter initWithCameraUIServices:lensCarouselManagementServices:productBrowserLauncher:delegate:] */

undefined1 *
FUN_10517e814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6940;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10517e8f0; end: 10517ebef; -[SCShoppingLensPDPPresenter _exposeProductCatalogScopeWithUIContainer:lensContext:productId:storeId:lens:] */

void FUN_10517e8f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b0840;
  uStack_70 = PTR_PTR_1126b0518;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    _objc_retain(param_7);
    _objc_retain(param_3);
    func_0x00010c08f2a0(uStack_70,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_7);
    _objc_retain(param_3);
    func_0x00010c0df880(puVar1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c092660(puVar2,param_2,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uStack_70 = PTR_PTR_1126b0518;
    func_0x00010c23cc80(PTR_PTR_1126b0518,param_2,param_5,puVar2,param_6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126b04c8;
  _objc_alloc(PTR_PTR_1126b04c8);
  uVar7 = param_7;
  func_0x00010c094540(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c096b60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_7;
  func_0x00010c07f200(param_7);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aa40(puVar2,param_2,uVar7,lVar4,2,0,uVar5,puVar6,param_6,0);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar7);
  puVar6 = PTR_PTR_1126b0520;
  _objc_alloc(PTR_PTR_1126b0520);
  puVar1 = PTR_PTR_1126b0528;
  uVar7 = param_7;
  func_0x00010c094540(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c098120(puVar1,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021b80(puVar6,param_2,uStack_70,puVar1,0,1,puVar2);
  _objc_release(puVar1);
  _objc_release(uVar7);
  puVar1 = PTR_PTR_1126b0530;
  _objc_alloc();
  func_0x00010c001f40();
  _objc_release(param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar7);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c08b7c0();
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(uStack_70);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10517ebf0; end: 10517edb3; -[SCShoppingLensPDPPresenter presentPDPWithLensContext:productId:storeId:lens:] */

void FUN_10517ebf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cfc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  uStack_70 = param_4;
  _objc_retain(param_5);
  uVar4 = param_6;
  _objc_retain(param_6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10517edb4; end: 10517ee0f;  */

void FUN_10517edb4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0d180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517ee10; end: 10517ee73; -[SCShoppingLensPDPPresenter commerceBrowserWillPresent] */

void FUN_10517ee10(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517ee74; end: 10517eef7; -[SCShoppingLensPDPPresenter commerceBrowserWillDismiss] */

void FUN_10517ee74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeffc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517eef8; end: 10517ef3b; -[SCShoppingLensPDPPresenter .cxx_destruct] */

void FUN_10517eef8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10517ef3c; end: 10517efd7; -[SCShoppingLensDeepLinkHandler initWithCameraUIServices:lensCarouselManagementServices:] */

undefined1 *
FUN_10517ef3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6948;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10517efd8; end: 10517f11b; -[SCShoppingLensDeepLinkHandler _presentAppInstallPageWithAppId:uiContainer:] */

void FUN_10517efd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c18b5e0();
  uStack_58 = *(undefined8 *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09bf80(puVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_11086d2b8);
  func_0x00010bf0c980(param_4,param_2,puVar1);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c090c40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65b20();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10517f11c; end: 10517f11f;  */

void FUN_10517f11c(void)

{
  return;
}



/* Entry: 10517f120; end: 10517f19f; -[SCShoppingLensDeepLinkHandler _isUniversalLink:] */

ulong FUN_10517f120(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d58);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc8d78);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10517f1a0; end: 10517f257; -[SCShoppingLensDeepLinkHandler openDeepLinkWithURI:completionBlock:] */

void FUN_10517f1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10517f258;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10517f258; end: 10517f3af;  */

void FUN_10517f258(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be44f40(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((int)uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uStack_58 = *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
    puStack_50 = PTR____kCFBooleanTrue_11034ab68;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10517f3b0;
  puStack_78 = &UNK_11086d2d8;
  _objc_retain(uVar4);
  uStack_60 = (undefined1)uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar4;
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  func_0x00010c0e9b80(puVar2,param_2,uVar4,puVar3,&puStack_90);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010517f3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar3 + 0x28) + 0x10))();
  return;
}



/* Entry: 10517f3b0; end: 10517f3bb;  */

void FUN_10517f3b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010517f3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10517f3bc; end: 10517f51f; -[SCShoppingLensDeepLinkHandler presentAppInstallPageWithAppId:] */

void FUN_10517f3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cfc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10517f520; end: 10517f573;  */

void FUN_10517f520(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a260();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517f574; end: 10517f64b; -[SCShoppingLensDeepLinkHandler openExternalWebBrowserWithUrl:completionHandler:] */

void FUN_10517f574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10517f64c;
  puStack_48 = &UNK_110858070;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0e9b80(puVar1,param_2,param_3,PTR____NSDictionary0__struct_11034ab58,&puStack_60);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10517f64c; end: 10517f657;  */

void FUN_10517f64c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010517f654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10517f658; end: 10517f6a3; -[SCShoppingLensDeepLinkHandler productViewControllerDidFinish:] */

void FUN_10517f658(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c090c40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeffc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10517f6a4; end: 10517f6cf; -[SCShoppingLensDeepLinkHandler .cxx_destruct] */

void FUN_10517f6a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10517f6d0; end: 10517f72f; -[SCShoppingLensDeepLinkHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517f6d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e220,0);
  _objc_destroyWeak(param_1 + _DAT_11271e21c);
  _objc_destroyWeak(param_1 + _DAT_11271e218);
  _objc_destroyWeak(param_1 + _DAT_11271e228);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e224);
  return;
}



/* Entry: 10517f730; end: 10517f7a3;  */

void FUN_10517f730(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b5788;
  _objc_alloc(PTR_PTR_1126b5788);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bffbe40(puVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10517f7a4; end: 10517f83b; -[SCShoppingLensModularCameraDeepLinkHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517f7a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b5780;
  lVar2 = param_1 + _DAT_11271e22c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11271e230;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf19000(puVar1,param_2,lVar2,lVar4,*(undefined8 *)(param_1 + _DAT_11271e234));
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10517f83c; end: 10517f88f; -[SCShoppingLensModularCameraDeepLinkHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517f83c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e234,0);
  _objc_destroyWeak(param_1 + _DAT_11271e230);
  _objc_destroyWeak(param_1 + _DAT_11271e22c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e238);
  return;
}



/* Entry: 10517f890; end: 10517f937; -[SCShoppingLensLoadingIndicatorPresenter initWithCameraUIServices:lensCarouselManagementServices:] */

undefined1 *
FUN_10517f890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6950;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10517f938; end: 10517f9b3; -[SCShoppingLensLoadingIndicatorPresenter startAnimatingLoadingIndicatorHelper:] */

void FUN_10517f938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aeff0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bfffb60();
  func_0x00010befbb60(param_3,param_2,puVar1);
  _objc_release(param_3);
  func_0x00010c14c920(puVar1);
  func_0x00010c24dbc0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10517f9b4; end: 10517f9df; -[SCShoppingLensLoadingIndicatorPresenter stopAnimatingLoadingIndicatorHelper] */

void FUN_10517f9b4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2558c0(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10517f9e0; end: 10517fb13; -[SCShoppingLensLoadingIndicatorPresenter startAnimatingLoadingIndicator] */

void FUN_10517f9e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4b320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_50;
  _objc_copyWeak(puVar4,auStack_48);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar3);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10517fb14; end: 10517fb5b;  */

void FUN_10517fb14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24dc00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517fb5c; end: 10517fc0f; -[SCShoppingLensLoadingIndicatorPresenter stopAnimatingLoadingIndicator] */

void FUN_10517fb5c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x10517fbe4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10517fc10; end: 10517fc47; -[SCShoppingLensLoadingIndicatorPresenter .cxx_destruct] */

void FUN_10517fc10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10517fc48; end: 10517fca7; -[SCShoppingLensLoadingIndicatorPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517fc48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e250,0);
  _objc_destroyWeak(param_1 + _DAT_11271e24c);
  _objc_destroyWeak(param_1 + _DAT_11271e248);
  _objc_destroyWeak(param_1 + _DAT_11271e258);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e254);
  return;
}



/* Entry: 10517fca8; end: 10517fd1b;  */

void FUN_10517fca8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b57a0;
  _objc_alloc(PTR_PTR_1126b57a0);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bffbe40(puVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10517fd1c; end: 10517fdb3; -[SCShoppingLensModularCameraLoadingIndicatorPresenterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517fd1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b5798;
  lVar2 = param_1 + _DAT_11271e25c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11271e260;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf19020(puVar1,param_2,lVar2,lVar4,*(undefined8 *)(param_1 + _DAT_11271e264));
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10517fdb4; end: 10517fe07; -[SCShoppingLensModularCameraLoadingIndicatorPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517fdb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e264,0);
  _objc_destroyWeak(param_1 + _DAT_11271e260);
  _objc_destroyWeak(param_1 + _DAT_11271e25c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e268);
  return;
}



/* Entry: 10517fe08; end: 10517fea3; -[SCShoppingLensModularCameraTwoDTryOnPresenterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517fe08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b57b0;
  lVar2 = param_1 + _DAT_11271e26c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11271e270;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf19040(puVar1,param_2,lVar2,lVar4,*(undefined8 *)(param_1 + _DAT_11271e274),
                      *(undefined8 *)(param_1 + _DAT_11271e278));
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10517fea4; end: 10517ff07; -[SCShoppingLensModularCameraTwoDTryOnPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10517fea4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e278,0);
  _objc_storeStrong(param_1 + _DAT_11271e274,0);
  _objc_destroyWeak(param_1 + _DAT_11271e270);
  _objc_destroyWeak(param_1 + _DAT_11271e26c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e27c);
  return;
}



/* Entry: 10517ff08; end: 10517ffab; -[SCShoppingLensTwoDTryOnPresenter initWithCameraUIScopeViewContainer:lensCarouselManager:] */

undefined1 *
FUN_10517ff08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6958;
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



/* Entry: 10517ffac; end: 10518003b; -[SCShoppingLensTwoDTryOnPresenter _activateLensCarouselManager:] */

void FUN_10517ffac(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x2) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010bf65b20();
  }
  else {
    func_0x00010beeffc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10518003c; end: 105180067; -[SCShoppingLensTwoDTryOnPresenter _twoDTryOnPreviewWillPresent] */

void FUN_10518003c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27da00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105180068; end: 10518017f; -[SCShoppingLensTwoDTryOnPresenter presentTwoDTryOnWithLensId:productIds:previewPayload:] */

void FUN_105180068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c27d9a0();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar5 = uVar3;
  func_0x00010c0cfc80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5,param_2,&PTR___NSConcreteGlobalBlock_11086d3b8,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105180180; end: 105180183;  */

void FUN_105180180(void)

{
  return;
}



/* Entry: 105180184; end: 10518018f; -[SCShoppingLensTwoDTryOnPresenter setTwoDTryOnPresentationDelegate:] */

void FUN_105180184(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105180190; end: 10518028f; -[SCShoppingLensTwoDTryOnPresenter twoDTryOnWillPresent] */

void FUN_105180190(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105180290;
  puStack_60 = &UNK_110850cf8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  lStack_48 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105180290; end: 1051802cf;  */

void FUN_105180290(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c27d9c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc4d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s__activateLensCarouselManager__11254ecf8,0);
  return;
}



/* Entry: 1051802d0; end: 1051802d3; -[SCShoppingLensTwoDTryOnPresenter twoDTryOnWantsToDismiss] */

void FUN_1051802d0(void)

{
  return;
}



/* Entry: 1051802d4; end: 10518035b; -[SCShoppingLensTwoDTryOnPresenter twoDTryOnWillPresentPreviewWithCompletion:] */

void FUN_1051802d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10518035c;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10518035c; end: 105180367;  */

void FUN_10518035c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc4d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__activateLensCarouselForPreviewW_11254ecf0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105180368; end: 10518056f; -[SCShoppingLensTwoDTryOnPresenter _activateLensCarouselForPreviewWithCompletion:] */

void FUN_105180368(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar1 != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef0ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1051806a0;
    puStack_88 = &UNK_110856a28;
    _objc_retain(uVar8);
    uVar5 = uVar4;
    uStack_80 = uVar8;
    func_0x00010bfad7a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_retain(param_3);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bdc4d60(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar8);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105180570; end: 10518064f;  */

void FUN_105180570(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  pcStack_38 = FUN_105180650;
  uStack_30 = 0x105180660;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105180650; end: 105180667;  */

void FUN_105180650(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105180668; end: 10518069f;  */

void FUN_105180668(long param_1,undefined8 param_2)

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



/* Entry: 1051806a0; end: 1051806ab;  */

void FUN_1051806a0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_isEqualToString__1125fa240,param_2);
  return;
}



/* Entry: 1051806ac; end: 105180757;  */

void FUN_1051806ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105180758;
  puStack_48 = &UNK_110848708;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105180758; end: 105180793;  */

void FUN_105180758(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed08c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000105180790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105180794; end: 1051807ef; -[SCShoppingLensTwoDTryOnPresenter .cxx_destruct] */

void FUN_105180794(long param_1)

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



/* Entry: 1051807f0; end: 10518085f; -[SCShoppingLensTwoDTryOnPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051807f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e2a4,0);
  _objc_storeStrong(param_1 + _DAT_11271e2a0,0);
  _objc_destroyWeak(param_1 + _DAT_11271e29c);
  _objc_destroyWeak(param_1 + _DAT_11271e298);
  _objc_destroyWeak(param_1 + _DAT_11271e2ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e2a8);
  return;
}



/* Entry: 105180860; end: 10518090b;  */

void FUN_105180860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b57b8;
  _objc_alloc(PTR_PTR_1126b57b8);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffbde0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10518090c; end: 10518097f; -[SCPreviewContextCardsPresenterServices initWithPresenter:] */

undefined1 * FUN_10518090c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6960;
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



/* Entry: 105180980; end: 105180987; -[SCPreviewContextCardsPresenterServices presenter] */

undefined8 FUN_105180980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105180988; end: 105180993; -[SCPreviewContextCardsPresenterServices .cxx_destruct] */

void FUN_105180988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105180994; end: 1051809b7; +[SCCSnapTextEditorSnapTextEditorActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105180994(undefined8 *param_1)

{
  *param_1 = &PTR_s_didTapLocationPickerButton_11086d490;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_11086d448;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1051809b8; end: 1051809df;  */

undefined8 FUN_1051809b8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 1051809e0; end: 105180a3f;  */

void FUN_1051809e0(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000105180c00(FUN_105180b98);
  _objc_retainBlock(&puStack_48);
  func_0x000105180c10();
  func_0x000105180bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105180a40; end: 105180a6b;  */

undefined8 FUN_105180a40(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 105180a6c; end: 105180acb;  */

void FUN_105180a6c(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000105180c00(0x105180bc8);
  _objc_retainBlock(&puStack_48);
  func_0x000105180c10();
  func_0x000105180bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105180acc; end: 105180ad7; +[SCCSnapTextEditorSnapTextEditor componentPath] */

undefined ** FUN_105180acc(void)

{
  return &PTR____CFConstantStringClassReference_110dc8d98;
}



/* Entry: 105180ad8; end: 105180b0b; -[SCCSnapTextEditorSnapTextEditor initWithViewModel:componentContext:runtime:] */

void FUN_105180ad8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6968;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105180b0c; end: 105180b57; -[SCCSnapTextEditorSnapTextEditor setViewModel:] */

void FUN_105180b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_105180bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105180b58; end: 105180b97; -[SCCSnapTextEditorSnapTextEditor viewModel] */

void FUN_105180b58(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_105180bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105180b98; end: 105180bf7;  */

void FUN_105180b98(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105180bf8; end: 105180c27;  */

void FUN_105180bf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105180c28; end: 105180c6f; -[SCCSnapTextEditorSnapTextEditorContext initWithActionHandler:] */

void FUN_105180c28(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6970;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105180c70; end: 105180c8f; +[SCCSnapTextEditorSnapTextEditorContext valdiMarshallableObjectDescriptor] */

void FUN_105180c70(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_11086d550;
  param_1[1] = &PTR_s_SCCSnapTextEditorSnapTextEditorA_11086d5e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105180c90; end: 105180ccb; -[SCCSnapTextEditorSnapTextEditorViewModel initWithUsername:] */

void FUN_105180c90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6978;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105180ccc; end: 105180ce3; +[SCCSnapTextEditorSnapTextEditorViewModel valdiMarshallableObjectDescriptor] */

void FUN_105180ccc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_username_11086d600;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105180ce4; end: 105180f5f; -[SCOAuth2ApprovalDataModel initWithApprovalToken:oauth2ClientName:redirectUrl:authServiceConsentRequired:loginValidateConsentRequired:is1PA:appIconUrl:scopesRequested:clientId:sessionId:codeVerifier:isScanFlow:phoneNumberVerifyId:snapKitFeatures:requestIdHash:] */

undefined8 *
FUN_105180ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_68 = PTR_PTR_1126e6980;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_14;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105180f60; end: 105180f83; -[SCOAuth2ApprovalDataModel copyWithZone:] */

undefined8 FUN_105180f60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105180f84; end: 105181077; -[SCOAuth2ApprovalDataModel hash] */

undefined8 * FUN_105180f84(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  uStack_80 = (ulong)*(byte *)(param_1 + 9);
  uStack_78 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0xb);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105181210:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10518121c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
         && (*(char *)((long)puVar3 + 10) == param_3[10])) &&
        (*(char *)((long)puVar3 + 0xb) == param_3[0xb])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x50);
                      if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x58);
                        if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          puVar6 = *(undefined1 **)((long)puVar3 + 0x60);
                          if (puVar6 != *(undefined1 **)(param_3 + 0x60)) {
                            func_0x00010c071ae0();
                            goto LAB_10518121c;
                          }
                          goto LAB_105181210;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10518121c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105181078; end: 105181237; -[SCOAuth2ApprovalDataModel isEqual:] */

long FUN_105181078(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105181210:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10518121c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x60);
                          if (lVar3 != *(long *)(param_3 + 0x60)) {
                            func_0x00010c071ae0();
                            goto LAB_10518121c;
                          }
                          goto LAB_105181210;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10518121c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105181238; end: 10518123f; -[SCOAuth2ApprovalDataModel approvalToken] */

undefined8 FUN_105181238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


