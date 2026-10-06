/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e087f8; end: 104e08833; -[SCCommerceToastPresenter .cxx_destruct] */

void FUN_104e087f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e08834; end: 104e088ab;  */

void FUN_104e08834(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db5d58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db5d58,
                      &PTR____CFConstantStringClassReference_110db5d78,0);
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



/* Entry: 104e088ac; end: 104e088c7; +[SCCCommerceDynamicPageIScreenshopTooltipsHelper valdiMarshallableObjectDescriptor] */

void FUN_104e088ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_dotTooltipDisplayed_1108511f8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 104e088c8; end: 104e0891f;  */

undefined8 FUN_104e088c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0ae8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x000104e08ba4();
  return param_1;
}



/* Entry: 104e08920; end: 104e0892b; +[SCCCommerceDynamicPageCommerceScreenshopPage componentPath] */

undefined ** FUN_104e08920(void)

{
  return &PTR____CFConstantStringClassReference_110db5e18;
}



/* Entry: 104e0892c; end: 104e0894b; -[SCCCommerceDynamicPageCommerceScreenshopPage initWithViewModel:componentContext:runtime:] */

void FUN_104e0892c(void)

{
  FUN_104e08b80(PTR_PTR_1126e4518);
  return;
}



/* Entry: 104e0894c; end: 104e0897f; -[SCCCommerceDynamicPageCommerceScreenshopPage setViewModel:] */

void FUN_104e0894c(void)

{
  func_0x000104e08b94();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e08bb0();
  func_0x000104e08bbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104e08980; end: 104e089b7; -[SCCCommerceDynamicPageCommerceScreenshopPage viewModel] */

void FUN_104e08980(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e08ba4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e089b8; end: 104e089c3; +[SCCCommerceDynamicPageCommerceScreenshopScanHorizontalView componentPath] */

undefined ** FUN_104e089b8(void)

{
  return &PTR____CFConstantStringClassReference_110db5e38;
}



/* Entry: 104e089c4; end: 104e089e3; -[SCCCommerceDynamicPageCommerceScreenshopScanHorizontalView initWithViewModel:componentContext:runtime:] */

void FUN_104e089c4(void)

{
  FUN_104e08b80(PTR_PTR_1126e4520);
  return;
}



/* Entry: 104e089e4; end: 104e08a17; -[SCCCommerceDynamicPageCommerceScreenshopScanHorizontalView setViewModel:] */

void FUN_104e089e4(void)

{
  func_0x000104e08b94();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e08bb0();
  func_0x000104e08bbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104e08a18; end: 104e08a4f; -[SCCCommerceDynamicPageCommerceScreenshopScanHorizontalView viewModel] */

void FUN_104e08a18(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e08ba4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e08a50; end: 104e08a5b; +[SCCCommerceDynamicPageCommerceScreenshopScanVerticalView componentPath] */

undefined ** FUN_104e08a50(void)

{
  return &PTR____CFConstantStringClassReference_110db5e58;
}



/* Entry: 104e08a5c; end: 104e08a7b; -[SCCCommerceDynamicPageCommerceScreenshopScanVerticalView initWithViewModel:componentContext:runtime:] */

void FUN_104e08a5c(void)

{
  FUN_104e08b80(PTR_PTR_1126e4528);
  return;
}



/* Entry: 104e08a7c; end: 104e08aaf; -[SCCCommerceDynamicPageCommerceScreenshopScanVerticalView setViewModel:] */

void FUN_104e08a7c(void)

{
  func_0x000104e08b94();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e08bb0();
  func_0x000104e08bbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104e08ab0; end: 104e08ae7; -[SCCCommerceDynamicPageCommerceScreenshopScanVerticalView viewModel] */

void FUN_104e08ab0(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e08ba4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e08ae8; end: 104e08af3; +[SCCCommerceDynamicPageCommerceTopicPage componentPath] */

undefined ** FUN_104e08ae8(void)

{
  return &PTR____CFConstantStringClassReference_110db5e78;
}



/* Entry: 104e08af4; end: 104e08b13; -[SCCCommerceDynamicPageCommerceTopicPage initWithViewModel:componentContext:runtime:] */

void FUN_104e08af4(void)

{
  FUN_104e08b80(PTR_PTR_1126e4530);
  return;
}



/* Entry: 104e08b14; end: 104e08b47; -[SCCCommerceDynamicPageCommerceTopicPage setViewModel:] */

void FUN_104e08b14(void)

{
  func_0x000104e08b94();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e08bb0();
  func_0x000104e08bbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104e08b48; end: 104e08b7f; -[SCCCommerceDynamicPageCommerceTopicPage viewModel] */

void FUN_104e08b48(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104e08ba4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e08b80; end: 104e08bdb;  */

void FUN_104e08b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 104e08bdc; end: 104e08cdb; -[SCCommerceOrderServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e08bdc(long param_1)

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
  puVar2 = PTR_PTR_1126b0af0;
  _objc_alloc(PTR_PTR_1126b0af0);
  func_0x00010bffe020();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_1127138dc));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e08cdc; end: 104e08d1b;  */

void FUN_104e08cdc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdebf40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e08d1c; end: 104e08eef; -[SCCommerceOrderServicesEntryPoint _createCheckoutCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e08d1c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b0af8;
  _objc_alloc(PTR_PTR_1126b0af8);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127138e0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar11;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127138e4;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar12;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127138e8;
    _objc_loadWeakRetained(lVar13);
  }
  lVar6 = lVar13;
  func_0x00010bfcfa00(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_1127138ec;
    _objc_loadWeakRetained(lVar8);
  }
  lVar9 = lVar8;
  func_0x00010bfe5f40(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b3e0(puVar1,param_2,lVar3,lVar5,lVar7,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e08ef0; end: 104e08f4f; -[SCCommerceOrderServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e08ef0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127138dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127138ec);
  _objc_destroyWeak(param_1 + _DAT_1127138e8);
  _objc_destroyWeak(param_1 + _DAT_1127138e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127138e0);
  return;
}



/* Entry: 104e08f50; end: 104e0914f; -[SCCommerceCheckoutCoordinator initWithUserId:grapheneRegistry:unifiedGRPCClientFactory:deviceInfoService:] */

undefined1 *
FUN_104e08f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e4538;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0380;
    func_0x00010c291260(PTR_PTR_1126b0380);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21dec0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bf56360(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0b00;
    _objc_alloc();
    func_0x00010c058f80();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e09150; end: 104e0923b; -[SCCommerceCheckoutCoordinator _vendCallOptions] */

void FUN_104e09150(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined ***in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  undefined8 uVar5;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar3 = PTR_PTR_113185418;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(PTR_PTR_113185418);
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined *)0x1;
  func_0x00010c16c6a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110dadcb8;
    puStack_40 = puVar3;
    in_x3 = &ppuStack_48;
    in_x4 = 1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bef9140(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(in_x4);
  _objc_retain(in_x6);
  uVar5 = *(undefined8 *)(puVar3 + 0x18);
  _objc_retain(in_x5);
  _objc_retain(in_x3);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(in_x3);
  _objc_release(in_x3);
  func_0x00010c15ebe0(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = puVar4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar3 = puVar4;
  func_0x00010c135700(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bf987e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x0001057c9188(puVar4,puVar3,&PTR____CFConstantStringClassReference_110db5e98,in_x5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x5);
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = puVar4;
    func_0x00010bf38920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x0001060e5db8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (in_x6 != 0) {
      (**(code **)(in_x6 + 0x10))(in_x6,puVar1,0);
    }
    _objc_release(puVar1);
  }
  else {
    (**(code **)(in_x6 + 0x10))(in_x6,0,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(in_x6);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104e0923c; end: 104e09467; -[SCCommerceCheckoutCoordinator _createCheckoutHelper:request:checkoutDataModel:startTimeStamp:error:completion:] */

void FUN_104e0923c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  func_0x00010c15ebe0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x0001057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110db5e98,param_6,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    lVar1 = param_3;
    func_0x00010bf38920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x0001060e5db8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,lVar3,0);
    }
    _objc_release(lVar3);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,0,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e09468; end: 104e0965f; -[SCCommerceCheckoutCoordinator createCheckout:completion:] */

void FUN_104e09468(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0b08;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000100576d08(uVar2,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar3);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar3);
  uVar2 = param_4;
  func_0x0001060e4214(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c1a0(puVar1);
  _objc_release(uVar2);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bee7fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  uStack_68 = param_1;
  _objc_retain(param_5);
  func_0x00010bf57440(uVar2);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104e09660; end: 104e096d3;  */

void FUN_104e09660(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdebf60(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e096d4; end: 104e098ff; -[SCCommerceCheckoutCoordinator _updateCheckoutHelper:request:checkoutDataModel:error:startTimestamp:completion:] */

void FUN_104e096d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  func_0x00010c15ebe0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x0001057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110db5e98,param_6,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    lVar1 = param_3;
    func_0x00010bf38920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x0001060e5db8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,lVar3,0);
    }
    _objc_release(lVar3);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,0,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e09900; end: 104e09af7; -[SCCommerceCheckoutCoordinator updateCheckout:completion:] */

void FUN_104e09900(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0b10;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000100576d08(uVar2,auStack_58,auStack_60);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar3);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar3);
  uVar2 = param_4;
  func_0x0001060e4214(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c1a0(puVar1);
  _objc_release(uVar2);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bee7fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(puVar1);
  _objc_retain(param_4);
  uStack_68 = param_1;
  _objc_retain(param_5);
  func_0x00010c284520(uVar2);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104e09af8; end: 104e09b6b;  */

void FUN_104e09af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed5440(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e09b6c; end: 104e09d7f; -[SCCommerceCheckoutCoordinator _finalizeCheckoutHelper:request:error:startTimeStamp:completion:] */

void FUN_104e09b6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(param_4);
  _objc_release(param_4);
  func_0x00010c15ebe0(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar5);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x0001057c9188(param_3,lVar1,&PTR____CFConstantStringClassReference_110db5e98,param_5,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    lVar1 = param_3;
    func_0x00010c0ec9a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x0001060e5394();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,lVar3);
    }
    _objc_release(lVar3);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,lVar4,0);
  }
  _objc_release(lVar4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e09d80; end: 104e0a057; -[SCCommerceCheckoutCoordinator finalizeCheckout:completion:] */

void FUN_104e09d80(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0b18;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000100576d08(uVar2,auStack_78,auStack_80);
  if ((int)uVar2 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar7);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar7);
  lVar3 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c220(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = puVar1;
  func_0x00010c18c9a0(puVar1);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1);
  _objc_release(puVar7);
  lVar3 = param_4;
  func_0x00010c0f6800();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x0001060e4544();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9d20(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(lVar3);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_78,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bee7fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_78;
  _objc_copyWeak(auStack_90,puVar6);
  _objc_retain(puVar1);
  uStack_88 = param_1;
  _objc_retain(param_5);
  puVar7 = puVar1;
  func_0x00010c0f6300(uVar2);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  lVar3 = param_4 + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be166e0(*(undefined8 *)(param_4 + 0x38));
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104e0a058; end: 104e0a0c7;  */

void FUN_104e0a058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be166e0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e0a0c8; end: 104e0a11b; -[SCCommerceCheckoutCoordinator .cxx_destruct] */

void FUN_104e0a0c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e0a11c; end: 104e0a1c7; -[SCCommerceBaseImageProvider initWithImageResource:onDemandResourceDownloader:] */

undefined1 *
FUN_104e0a11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4540;
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
    func_0x00010be772c0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e0a1c8; end: 104e0a28f; -[SCCommerceBaseImageProvider imagesObservable] */

void FUN_104e0a1c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e0a290; end: 104e0a37f;  */

void FUN_104e0a290(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf887e0(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e0a380; end: 104e0a3d3;  */

void FUN_104e0a380(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28b60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e0a3d4; end: 104e0a473; -[SCCommerceBaseImageProvider _handleDownloadedResources:observer:] */

void FUN_104e0a3d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010c0d9840(param_4);
  }
  else {
    func_0x00010bd869d0(param_3,&PTR___NSConcreteGlobalBlock_1108513b0,
                        &PTR___NSConcreteGlobalBlock_1108513f0);
    func_0x00010c0d9840(param_4);
    _objc_release(param_4);
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0a474; end: 104e0a483;  */

void FUN_104e0a474(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe93d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageWithData__1125d7eb8,param_2);
  return;
}



/* Entry: 104e0a484; end: 104e0a53b; -[SCCommerceBaseImageProvider imageObservable:] */

void FUN_104e0a484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bfe99c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104e0a53c;
  puStack_40 = &UNK_110851410;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e0a53c; end: 104e0a67f;  */

void FUN_104e0a53c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      lVar4 = 0;
LAB_104e0a634:
      _objc_release(lVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c107110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + 0x10),PTR_s_prefetch__11261f660,
                 *(undefined8 *)(param_2 + 8));
      return;
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      func_0x00010bf4bb00();
      if ((uVar5 & 1) != 0) {
        lVar4 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104e0a634;
      }
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104e0a680; end: 104e0a68b; -[SCCommerceBaseImageProvider _prefetchImages] */

void FUN_104e0a680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c107110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_prefetch__11261f660,*(undefined8 *)(param_1 + 8))
  ;
  return;
}



/* Entry: 104e0a68c; end: 104e0a6bb; -[SCCommerceBaseImageProvider .cxx_destruct] */

void FUN_104e0a68c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e0a6bc; end: 104e0a72f; -[SCCommerceIconProvider initWithOnDemandResourceDownloader:] */

undefined1 * FUN_104e0a6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4548;
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



/* Entry: 104e0a730; end: 104e0a8d3; -[SCCommerceIconProvider iconForAsset:completion:] */

void FUN_104e0a730(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bee62a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126aebd8;
    func_0x00010c14e320(PTR_PTR_1126aebd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar3);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010bf88c20(uVar4);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104e0a8d4; end: 104e0a927;  */

void FUN_104e0a8d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde3720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e0a928; end: 104e0a94b; -[SCCommerceIconProvider _urlForAsset:] */

undefined * FUN_104e0a928(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x16) {
    return (&PTR_PTR_110851470)[param_3 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 104e0a94c; end: 104e0aa1f; -[SCCommerceIconProvider _completeWithImage:completion:] */

void FUN_104e0a94c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    func_0x00010c23d0a0(param_5);
    if ((param_1 == 0.0) || (func_0x00010c23d0a0(param_5), param_2 == 0.0)) {
      (**(code **)(param_6 + 0x10))(param_6,param_5);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar2 = param_5;
      _UIImagePNGRepresentation(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008500(0x4008000000000000,puVar1);
      _objc_release(uVar2);
      (**(code **)(param_6 + 0x10))(param_6,puVar1);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104e0aa20; end: 104e0aa2b; -[SCCommerceIconProvider .cxx_destruct] */

void FUN_104e0aa20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e0aa2c; end: 104e0aae7; -[SCCommerceImageProvider initWithOnDemandResourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104e0aa2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar2 = &lStack_40;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112713910);
  *(undefined8 *)(param_1 + _DAT_112713910) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puStack_38 = PTR_PTR_1126e4550;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_initWithImageResource_onDemandRe_112526638,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)plVar2;
}



/* Entry: 104e0aae8; end: 104e0ab37; -[SCCommerceImageProvider imageObservableForAsset:] */

void FUN_104e0aae8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be374a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe82c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104e0ab38; end: 104e0ad17; -[SCCommerceImageProvider imageForURL:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0ab38(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puVar3 = PTR_PTR_1126aebd8;
    uVar5 = *(undefined8 *)(param_1 + _DAT_112713910);
    lVar1 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e320(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar4);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010bf88c20(uVar5);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e0ad18; end: 104e0ad6b;  */

void FUN_104e0ad18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde3720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e0ad6c; end: 104e0ad93; -[SCCommerceImageProvider _imageNameForAsset:] */

undefined ** FUN_104e0ad6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_110851520)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db61d8;
}



/* Entry: 104e0ad94; end: 104e0ae67; -[SCCommerceImageProvider _completeWithImage:completion:] */

void FUN_104e0ad94(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    func_0x00010c23d0a0(param_5);
    if ((param_1 == 0.0) || (func_0x00010c23d0a0(param_5), param_2 == 0.0)) {
      (**(code **)(param_6 + 0x10))(param_6,param_5);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
      uVar2 = param_5;
      _UIImagePNGRepresentation(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008500(0x4008000000000000,puVar1);
      _objc_release(uVar2);
      (**(code **)(param_6 + 0x10))(param_6,puVar1);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104e0ae68; end: 104e0ae7b; -[SCCommerceImageProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0ae68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713910,0);
  return;
}



/* Entry: 104e0ae7c; end: 104e0af1b; -[SCCommercePaymentSettingsImageProvider initWithOnDemandResourceDownloader:] */

undefined1 * FUN_104e0ae7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126aebd8;
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  func_0x00010c14e3a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e4558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithImageResource_onDemandRe_112526638,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 104e0af1c; end: 104e0afab; -[SCCommercePaymentSettingsImageProvider imageObservableForPaymentCard:] */

void FUN_104e0af1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010be374c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110db6298);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfe82c0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104e0afac; end: 104e0affb; -[SCCommercePaymentSettingsImageProvider imageObservableForAsset:] */

void FUN_104e0afac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be374a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe82c0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104e0affc; end: 104e0b01f; -[SCCommercePaymentSettingsImageProvider _imageNameForCard:] */

undefined * FUN_104e0affc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 7) {
    return (&PTR_PTR_110851538)[param_3 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 104e0b020; end: 104e0b03b; -[SCCommercePaymentSettingsImageProvider _imageNameForAsset:] */

undefined ** FUN_104e0b020(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db62d8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db62f8;
  }
  return ppuVar1;
}



/* Entry: 104e0b03c; end: 104e0b20f; -[SCCommerceStaticImagesServiceProvider provide] */

void FUN_104e0b03c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e0b210;
  puStack_78 = &UNK_110851570;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x104e0b250;
  puStack_a0 = &UNK_1108515a0;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0b20;
  _objc_alloc(PTR_PTR_1126b0b20);
  func_0x00010bffffc0();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e0b210; end: 104e0b2cf;  */

void FUN_104e0b210(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e0b2d0; end: 104e0b363; -[SCCommerceStaticImagesServiceProvider _createCommerceIconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0b2d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0b28;
  _objc_alloc(PTR_PTR_1126b0b28);
  param_1 = param_1 + _DAT_112713914;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031280(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e0b364; end: 104e0b3f7; -[SCCommerceStaticImagesServiceProvider _createCommerceImageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0b364(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0b30;
  _objc_alloc(PTR_PTR_1126b0b30);
  param_1 = param_1 + _DAT_112713914;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031280(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e0b3f8; end: 104e0b48b; -[SCCommerceStaticImagesServiceProvider _createCommercePaymentSettingsImageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0b3f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0b38;
  _objc_alloc(PTR_PTR_1126b0b38);
  param_1 = param_1 + _DAT_112713914;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031280(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e0b48c; end: 104e0b4c3; -[SCCommerceStaticImagesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0b48c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713914);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112713918);
  return;
}



/* Entry: 104e0b4c4; end: 104e0b6a3; -[SCCountdownsDeepLinkProcessingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0b4c4(long param_1,undefined8 param_2)

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
  long lVar12;
  
  lVar11 = (long)_DAT_11271391c;
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b0b40;
  _objc_alloc();
  lVar12 = (long)_DAT_112713920;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112713924;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_112713928;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271392c;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  func_0x00010c02e680(puVar3,param_2,lVar5,lVar6,lVar8,lVar10,lVar2,lVar11,lVar12);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112713930;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104e0b6a4; end: 104e0b717; -[SCCountdownsDeepLinkProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e0b6a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271392c);
  _objc_destroyWeak(param_1 + _DAT_112713924);
  _objc_destroyWeak(param_1 + _DAT_11271391c);
  _objc_destroyWeak(param_1 + _DAT_112713920);
  _objc_destroyWeak(param_1 + _DAT_112713934);
  _objc_destroyWeak(param_1 + _DAT_112713928);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112713930);
  return;
}



/* Entry: 104e0b718; end: 104e0b8a7; -[SCCountdownsDeepLinkProcessor initWithNavigationDelegate:countdownsServices:circumstanceEngine:snapchattersDataFetcher:userId:userInfoServices:navigationServices:] */

undefined1 *
FUN_104e0b718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e4560;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0b48;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e0b8a8; end: 104e0ba0f; -[SCCountdownsDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:delegate:] */

undefined8
FUN_104e0b8a8(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000104e0c684(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000104e0c4a4();
  if ((int)uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1;
    func_0x00010be283a0(param_1,param_2,param_3,param_5,param_6);
  }
  uVar3 = param_3;
  func_0x000104e0c544();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x000104e0c5e4();
    if ((uVar3 & 1) != 0) goto LAB_104e0b980;
    if ((int)uVar2 != 0) {
      func_0x00010c0a4b60(*(undefined8 *)(param_1 + 0x40),param_2,uVar1);
      goto joined_r0x000104e0b9c0;
    }
  }
  else {
    uVar5 = param_1;
    func_0x00010be27aa0(param_1,param_2,param_3,param_5,param_6);
    uVar2 = param_3;
    func_0x000104e0c5e4();
    if ((uVar2 & 1) != 0) {
LAB_104e0b980:
      uVar5 = param_1;
      func_0x00010be2b700(param_1,param_2,param_3,param_5,param_6);
    }
    func_0x00010c0a4b60(*(undefined8 *)(param_1 + 0x40),param_2,uVar1);
joined_r0x000104e0b9c0:
    if ((uVar5 & 1) != 0) {
      uVar4 = 1;
      goto LAB_104e0b9d4;
    }
    func_0x00010c0a4b00(*(undefined8 *)(param_1 + 0x40),param_2,uVar1);
  }
  uVar4 = 0;
LAB_104e0b9d4:
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 104e0ba10; end: 104e0ba2f; +[SCCountdownsDeepLinkProcessor _emptySnapchatterError] */

void FUN_104e0ba10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110db6398,
             &PTR____CFConstantStringClassReference_110db63b8,1);
  return;
}



/* Entry: 104e0ba30; end: 104e0ba4f; +[SCCountdownsDeepLinkProcessor _emptyCountdownIdError] */

void FUN_104e0ba30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_description_code_1125c3e40,
             &PTR____CFConstantStringClassReference_110db6398,
             &PTR____CFConstantStringClassReference_110db63d8,1);
  return;
}



/* Entry: 104e0ba50; end: 104e0babf; -[SCCountdownsDeepLinkProcessor _modalContainer] */

void FUN_104e0ba50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0d6760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b0b50;
  func_0x00010c0cf9e0(PTR_PTR_1126b0b50,param_2,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e0bac0; end: 104e0bb63; -[SCCountdownsDeepLinkProcessor _processDeeplinkDelegateEventsWithError:delegate:] */

void FUN_104e0bac0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000104e0c684(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c0a4b20(*(undefined8 *)(param_1 + 0x40),param_2,uVar1);
  }
  else {
    func_0x00010c0a4b00();
  }
  func_0x00010c0a5fe0(param_4,param_2,param_3);
  func_0x00010c0a6880(param_4,param_2,param_3);
  func_0x00010bf94720(param_4,param_2,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e0bb64; end: 104e0bc6f; -[SCCountdownsDeepLinkProcessor _fetchSnapchatterDataDelegate:continuation:] */

void FUN_104e0bb64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104e0bc70;
  puStack_68 = &UNK_110851620;
  lStack_60 = param_1;
  uStack_58 = uVar2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  func_0x00010c2448c0(uVar1,param_2,uVar3,PTR___dispatch_main_q_11034be20,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 104e0bc70; end: 104e0bd23;  */

void FUN_104e0bc70(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar1 = PTR_PTR_1126b0b58;
    func_0x00010c2447a0();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 == (undefined *)0x0) && (puVar1 != (undefined *)0x0)) {
      param_3 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126b0b40;
      func_0x00010be08940(PTR_PTR_1126b0b40);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      param_3 = puVar2;
    }
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),puVar1,param_3,*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e0bd24; end: 104e0bd7b; -[SCCountdownsDeepLinkProcessor _handleListPageForCountdownURL:additionalInfo:delegate:] */

undefined8
FUN_104e0bd24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e0bd7c;
  puStack_20 = &UNK_110851650;
  uStack_18 = param_1;
  func_0x00010be14160(param_1,param_2,param_5,&puStack_38);
  return 1;
}



/* Entry: 104e0bd7c; end: 104e0bd8f;  */

void FUN_104e0bd7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde8970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__continueListPageWithSnapchatter_112557bf8,
             param_2,param_3,param_4);
  return;
}



/* Entry: 104e0bd90; end: 104e0be9f; -[SCCountdownsDeepLinkProcessor _continueListPageWithSnapchatter:error:delegate:] */

void FUN_104e0bd90(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (param_4 == 0)) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010be60dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0b60;
    _objc_alloc(PTR_PTR_1126b0b60);
    func_0x000106e40154();
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0f1960(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10bc80();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  func_0x00010be80c20(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0bea0; end: 104e0bef7; -[SCCountdownsDeepLinkProcessor _handleCreatePageForCountdownURL:additionalInfo:delegate:] */

undefined8
FUN_104e0bea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e0bef8;
  puStack_20 = &UNK_110851650;
  uStack_18 = param_1;
  func_0x00010be14160(param_1,param_2,param_5,&puStack_38);
  return 1;
}



/* Entry: 104e0bef8; end: 104e0bf0b;  */

void FUN_104e0bef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__continueCreatePageWithSnapchatt_112557ba8,
             param_2,param_3,param_4);
  return;
}



/* Entry: 104e0bf0c; end: 104e0c01b; -[SCCountdownsDeepLinkProcessor _continueCreatePageWithSnapchatter:error:delegate:] */

void FUN_104e0bf0c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (param_4 == 0)) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010be60dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0b60;
    _objc_alloc(PTR_PTR_1126b0b60);
    func_0x000106e40154();
    _objc_release(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0f1960(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10bc40();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  func_0x00010be80c20(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e0c01c; end: 104e0c14f; -[SCCountdownsDeepLinkProcessor _handleDetailsPageForCountdownURL:additionalInfo:delegate:] */

undefined8
FUN_104e0c01c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0f5820(param_3,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c08fa60(), lVar2 == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110db6398,
                        &PTR____CFConstantStringClassReference_110db63f8,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5fe0(param_5,param_2,puVar3);
    func_0x00010bf94720(param_5,param_2,puVar3);
    _objc_release(puVar3);
    uVar4 = 0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104e0c150;
    puStack_48 = &UNK_110851680;
    uStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010be14160(param_1,param_2,param_5,&puStack_60);
    _objc_release(lStack_38);
    uVar4 = 1;
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 104e0c150; end: 104e0c167;  */

void FUN_104e0c150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde8870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__continueDetailsPageWithSnapchat_112557bb8,
             param_2,param_3,*(undefined8 *)(param_1 + 0x28),param_4);
  return;
}



/* Entry: 104e0c168; end: 104e0c2d7; -[SCCountdownsDeepLinkProcessor _continueDetailsPageWithSnapchatter:error:countdownURL:delegate:] */

void FUN_104e0c168(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b0b40;
    func_0x00010be087e0(PTR_PTR_1126b0b40);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_4;
    if ((param_3 == 0) || (param_4 != (undefined *)0x0)) goto LAB_104e0c290;
    param_4 = param_1;
    func_0x00010be60dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0b68;
    _objc_alloc(PTR_PTR_1126b0b68);
    func_0x000106e404d0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0f1960(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10bc60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_4);
LAB_104e0c290:
  func_0x00010be80c20(param_1);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e0c2d8; end: 104e0c2eb; -[SCCountdownsDeepLinkProcessor identifier] */

void FUN_104e0c2d8(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 104e0c2ec; end: 104e0c2f3; -[SCCountdownsDeepLinkProcessor priority] */

undefined8 FUN_104e0c2ec(void)

{
  return 1000;
}



/* Entry: 104e0c2f4; end: 104e0c307; -[SCCountdownsDeepLinkProcessor canProvideProcessorForFeature:] */

void FUN_104e0c2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110db6318);
  return;
}



/* Entry: 104e0c308; end: 104e0c353; -[SCCountdownsDeepLinkProcessor isValidDeepLink:] */

undefined8 FUN_104e0c308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104e0c354; end: 104e0c357; -[SCCountdownsDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_104e0c354(void)

{
  return;
}



/* Entry: 104e0c358; end: 104e0c417; -[SCCountdownsDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_104e0c358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0d3c80(puVar1);
  func_0x00010c1d0640();
  uVar2 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1c40(param_1,param_2,param_3,uVar2,puVar1,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e0c418; end: 104e0c41f; -[SCCountdownsDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_104e0c418(void)

{
  return 0;
}



/* Entry: 104e0c420; end: 104e0c423; -[SCCountdownsDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_104e0c420(void)

{
  return;
}



/* Entry: 104e0c424; end: 104e0c4a3; -[SCCountdownsDeepLinkProcessor .cxx_destruct] */

void FUN_104e0c424(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104e0c4a4; end: 104e0c707;  */

undefined8 FUN_104e0c4a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0f5820(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}


