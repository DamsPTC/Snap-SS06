/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d9b010; end: 104d9b4fb; -[SCCommerceSnapcodeViewModelProvider _createScanResultViewModelFromProductInfo:decodedUuid:scannableId:] */

void FUN_104d9b010(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_104d9b4fc;
  uStack_a0 = 0x104d9b50c;
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = puStack_b8[5];
  puStack_98 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebd8;
  lVar12 = param_3;
  func_0x00010bfe5be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar12 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x104d9b514;
  puStack_d0 = &UNK_11084d758;
  puStack_c8 = &uStack_c0;
  func_0x00010bf88c20(uVar4);
  _objc_release(puVar5);
  _objc_release(lVar12);
  _objc_release();
  FUN_104d9bad0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be060;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_88 = uVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_f0,param_1);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_104d9b528;
  puStack_108 = &UNK_110841fb0;
  _objc_copyWeak(auStack_f8,auStack_f0);
  _objc_retain(param_3);
  ppuVar6 = &puStack_120;
  lStack_100 = param_3;
  _objc_retainBlock();
  puVar7 = PTR_PTR_1126aef38;
  _objc_alloc(PTR_PTR_1126aef38);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  puVar8 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  puVar9 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  func_0x00010c0048e0(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar1);
  lVar12 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bdfb060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  func_0x00010c020120();
  puVar1 = PTR_PTR_1126aef48;
  puVar9 = PTR_PTR_1126aef50;
  _objc_alloc(PTR_PTR_1126aef50);
  func_0x00010c05a5c0();
  func_0x00010c2453a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126aef58;
  _objc_alloc(PTR_PTR_1126aef58);
  puVar11 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b920(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(lStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(puStack_98);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_f0);
  lVar12 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  return;
}



/* Entry: 104d9b4fc; end: 104d9b527;  */

void FUN_104d9b4fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d9b528; end: 104d9b5cb;  */

void FUN_104d9b528(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104d9b5cc;
  puStack_38 = &UNK_110841fb0;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d9b5cc; end: 104d9b5ff;  */

void FUN_104d9b5cc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be04c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9b600; end: 104d9b773; -[SCCommerceSnapcodeViewModelProvider _displayProductPageWithProductInfo:] */

void FUN_104d9b600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010010fab4();
  lVar3 = lVar1;
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b0500;
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e9e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126b0508;
    _objc_alloc(PTR_PTR_1126b0508);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    uVar6 = param_3;
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039400(puVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d9b774; end: 104d9ba73; +[SCCommerceSnapcodeViewModelProvider _descriptionTextForProduct:] */

void FUN_104d9b774(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x000106d77d28();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x000106d77d8c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010c04e820();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010bf069e0(puVar3);
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e840(puVar9);
      _objc_release(puVar5);
      func_0x00010bf069e0(puVar3);
      _objc_release(puVar9);
    }
    puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    func_0x00010bf069e0(puVar3);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    lVar4 = param_3;
    func_0x00010c0cab00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar9);
    func_0x00010bf069e0(puVar3);
    _objc_release(puVar9);
    _objc_release(lVar6);
    _objc_release(lVar4);
    puVar9 = puVar3;
    func_0x00010c0d3de0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010bf51e00();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar5);
    func_0x00010bef6f40(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126aef30;
    puVar7 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010bf0e460(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_3 + 0x30);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 104d9ba74; end: 104d9bacf; -[SCCommerceSnapcodeViewModelProvider .cxx_destruct] */

void FUN_104d9ba74(long param_1)

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



/* Entry: 104d9bad0; end: 104d9bae7;  */

void FUN_104d9bad0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db21b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db21b8,
                      &PTR____CFConstantStringClassReference_110db21d8,0);
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



/* Entry: 104d9bae8; end: 104d9bdf3; -[SCFavoritesCatalogRouter initWithUIContainer:delegate:imageSourceProvider:imageFetchingService:eventLogger:configProvider:showcaseFetcher:favoritesCoordinator:productCatalogScopeLauncher:notificationPool:commerceIconProvider:] */

long FUN_104d9bae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0x28,param_4);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_7;
    _objc_release(uVar1);
    _objc_retain(param_11);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_11;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0318;
    _objc_alloc(PTR_PTR_1126b0318);
    func_0x00010c008220();
    uVar1 = param_3;
    func_0x00010b0947a4(param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = PTR_PTR_1126b0320;
    func_0x00010c0cf9c0(PTR_PTR_1126b0320);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfa00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010c1a4840(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR_PTR_1126b0510;
    _objc_alloc();
    func_0x00010c00a820();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar1);
    _objc_initWeak(auStack_70,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010c0e3aa0(uVar1);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104d9bdf4; end: 104d9be1f;  */

void FUN_104d9bdf4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfda00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9be20; end: 104d9be63; -[SCFavoritesCatalogRouter presentFavorites] */

void FUN_104d9be20(long param_1,undefined8 param_2)

{
  func_0x00010c10ed80(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 8),0);
                    /* WARNING: Could not recover jumptable at 0x00010c0abc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logPageOpen_sourcePage_metricsDa_112608918,0x2d,
             0xffffffffffffffff,0,0,0);
  return;
}



/* Entry: 104d9be64; end: 104d9bea3; -[SCFavoritesCatalogRouter dismissFavorites] */

void FUN_104d9be64(long param_1,undefined8 param_2)

{
  func_0x00010bf84ae0(*(undefined8 *)(param_1 + 0x20),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c0abb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logPageClose_destinationPage_met_1126088d8,0x2d,
             0xffffffffffffffff,0);
  return;
}



/* Entry: 104d9bea4; end: 104d9becf; -[SCFavoritesCatalogRouter _didExitHierarchy] */

void FUN_104d9bea4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa1500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9bed0; end: 104d9c0c7; -[SCFavoritesCatalogRouter _presentPDPWithProductInfo:productSetQuery:] */

void FUN_104d9bed0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126b0518;
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x40) == 0)) {
    lVar1 = param_3;
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b4ca0();
    lVar3 = param_3;
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23cc80(puVar4,param_2,lVar2,param_4,lVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010c20c240(*(undefined8 *)(param_1 + 0x30),param_2,0);
    }
    else {
      lVar2 = param_3;
      func_0x00010c257800(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c240(*(undefined8 *)(param_1 + 0x30),param_2,lVar2);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b0520;
    _objc_alloc(PTR_PTR_1126b0520);
    puVar6 = PTR_PTR_1126b0528;
    func_0x00010bfa1260(PTR_PTR_1126b0528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021b80(puVar5,param_2,puVar4,puVar6,0,0,0);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b0530;
    _objc_alloc();
    func_0x00010c001de0();
    func_0x00010c0abb20(*(undefined8 *)(param_1 + 0x30),param_2,0x2d,0x29,0);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar6;
    _objc_retain(puVar6);
    _objc_release(uVar7);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x38),param_2,puVar6,param_1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d9c0c8; end: 104d9c0cb; -[SCFavoritesCatalogRouter commerceBrowserWillPresent] */

void FUN_104d9c0c8(void)

{
  return;
}



/* Entry: 104d9c0cc; end: 104d9c11f; -[SCFavoritesCatalogRouter commerceBrowserWillDismiss] */

void FUN_104d9c0cc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x38));
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0abc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_logPageOpen_sourcePage_metricsDa_112608918,0x2d
               ,0x29,0,0,0);
    return;
  }
  return;
}



/* Entry: 104d9c120; end: 104d9c123; -[SCFavoritesCatalogRouter favoritesDidTapCloseButton] */

void FUN_104d9c120(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfda10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didExitHierarchy_11255d020);
  return;
}



/* Entry: 104d9c124; end: 104d9c127; -[SCFavoritesCatalogRouter productCellTapped:productSetQuery:] */

void FUN_104d9c124(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPDPWithProductInfo_produ_11257ce20);
  return;
}



/* Entry: 104d9c128; end: 104d9c19b; -[SCFavoritesCatalogRouter .cxx_destruct] */

void FUN_104d9c128(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d9c19c; end: 104d9c3eb; -[SCFavoritesCatalogWorkflow initWithUIContainer:entrySource:delegate:favoritesCoordinator:imageSourceProvider:imageFetchingService:grapheneRegistry:blizzardUserServices:configProvider:showcaseFetcher:productCatalogScopeLauncher:notificationPool:commerceIconProvider:eventLogger:] */

long FUN_104d9c19c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,long param_16)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + 8,param_5);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0538;
    _objc_alloc();
    lVar3 = param_16;
    if (param_16 == 0) {
      lVar3 = param_1;
      func_0x00010bdec2a0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c056820();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar1);
    if (param_16 == 0) {
      _objc_release(lVar3);
    }
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104d9c3ec; end: 104d9c3f3; -[SCFavoritesCatalogWorkflow launch] */

void FUN_104d9c3ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_presentFavorites_112620a80);
  return;
}



/* Entry: 104d9c3f4; end: 104d9c3fb; -[SCFavoritesCatalogWorkflow dismiss] */

void FUN_104d9c3f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_dismissFavorites_1125be800);
  return;
}



/* Entry: 104d9c3fc; end: 104d9c427; -[SCFavoritesCatalogWorkflow favoritesRouterShouldDismiss] */

void FUN_104d9c3fc(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa1280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9c428; end: 104d9c583; -[SCFavoritesCatalogWorkflow _createCommerceSession:blizzardUserServices:] */

void FUN_104d9c428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104d9c584;
  uStack_60 = 0x104d9c594;
  uStack_58 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0c12e0(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d9c584; end: 104d9c59b;  */

void FUN_104d9c584(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d9c59c; end: 104d9c63b;  */

void FUN_104d9c59c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b0308;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c293fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a840(puVar1,param_2,3,0xf,0x1c,uVar4,uVar3);
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d9c63c; end: 104d9c673;  */

void FUN_104d9c63c(long param_1,undefined8 param_2)

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



/* Entry: 104d9c674; end: 104d9c6ab; -[SCFavoritesCatalogWorkflow .cxx_destruct] */

void FUN_104d9c674(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d9c6ac; end: 104d9c947; -[SCFavoritesViewController initWithDelegate:imageSourceProvider:imageFetchingService:eventLogger:configProvider:showcaseFetcher:favoritesCoordinator:notificationPool:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104d9c6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e4280;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712c48,param_3);
    lVar5 = (long)_DAT_112712c4c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712c50;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712c54;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112712c58;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0540;
    _objc_alloc();
    func_0x00010c030060();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712c5c);
    *(undefined **)((long)puVar1 + (long)_DAT_112712c5c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02f8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b0548;
    _objc_alloc();
    func_0x00010c010b80();
    func_0x00010bf1cf80();
    func_0x00010c01cf60();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712c60);
    *(undefined **)((long)puVar1 + (long)_DAT_112712c60) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010be4e340(puVar1);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d9c948; end: 104d9c99f; -[SCFavoritesViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9c948(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4280;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c13c0e0(*(undefined8 *)(param_1 + _DAT_112712c60));
  func_0x00010be8a9e0(param_1);
  return;
}



/* Entry: 104d9c9a0; end: 104d9c9ef; -[SCFavoritesViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9c9a0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4280;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bfaf120(*(undefined8 *)(param_1 + _DAT_112712c60));
  return;
}



/* Entry: 104d9c9f0; end: 104d9c9f3; -[SCFavoritesViewController preferredStatusBarStyle] */

undefined8 FUN_104d9c9f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 104d9c9f4; end: 104d9ca27; -[SCFavoritesViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9c9f4(long param_1)

{
  param_1 = param_1 + _DAT_112712c48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa1380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9ca28; end: 104d9ca2f; -[SCFavoritesViewController pageViewName] */

undefined8 FUN_104d9ca28(void)

{
  return 99;
}



/* Entry: 104d9ca30; end: 104d9ca37; -[SCFavoritesViewController blizzardPageType] */

undefined8 FUN_104d9ca30(void)

{
  return 0x2d;
}



/* Entry: 104d9ca38; end: 104d9ccf7; -[SCFavoritesViewController handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d9ca38(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b0550;
      _objc_opt_class(PTR_PTR_1126b0550);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar4);
      uVar1 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar6 = 0;
      if (uVar1 != 0) {
        func_0x00010c115e60(uVar2);
        uVar1 = uVar2;
        func_0x00010c115f00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = 1;
        func_0x00010beccc40(param_1);
        _objc_release(uVar1);
        _objc_release(uVar2);
      }
      goto LAB_104d9caa4;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        uVar6 = 1;
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112712c68));
        goto LAB_104d9caa4;
      }
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        lVar3 = param_1 + _DAT_112712c48;
        _objc_loadWeakRetained(lVar3);
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b02b0;
        _objc_opt_class(PTR_PTR_1126b02b0);
        uVar5 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar4);
        uVar1 = uVar2;
        if ((uVar5 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        uVar6 = *(undefined8 *)(param_1 + _DAT_112712c6c);
        func_0x00010c11d2a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c115d20(lVar3);
        _objc_release(uVar1);
        _objc_release(uVar6);
        _objc_release(lVar3);
      }
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112712c68));
    }
  }
  else {
    func_0x00010c09bc80(*(undefined8 *)(param_1 + _DAT_112712c64));
  }
  uVar6 = 1;
LAB_104d9caa4:
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 104d9ccf8; end: 104d9d45b; -[SCFavoritesViewController _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9ccf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined1 uStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar2);
  lVar12 = (long)_DAT_112712c60;
  func_0x00010bef7700(param_1);
  func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c152980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  puStack_f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_c0 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_c8 = lVar2;
  func_0x00010bf493c0(0x4057c00000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  puStack_d0 = (undefined *)uVar3;
  uStack_90 = uVar3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_e8 = uVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_100 = uVar4;
  uStack_88 = uVar4;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = uVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_118 = uVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar5;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f0);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(lStack_f8);
  _objc_release(lStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_d8);
  _objc_release(puStack_d0);
  _objc_release(lStack_c8);
  _objc_release(lStack_b8);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  puVar1 = PTR_PTR_1126af080;
  _objc_alloc_init();
  puVar8 = puVar1;
  func_0x00010c20eaa0();
  FUN_104d9de6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_release(puVar8);
  func_0x00010c18f820(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c152980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7d00(puVar1);
  _objc_release(uVar3);
  func_0x00010c18b5e0(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112712c70);
  *(undefined **)(param_1 + _DAT_112712c70) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar3);
  puVar8 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar12 = (long)_DAT_112712c68;
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar8;
  _objc_release(uVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar12));
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar8);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c213040(uVar3);
  func_0x000104d9de84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar12));
  _objc_release(uVar3);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar12));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar9 = *(long *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_b8 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  lStack_c8 = lVar9;
  lStack_a8 = lVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_a0 = uVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 3;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010beef8c0(puStack_d0);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(uVar5);
  _objc_release(lStack_c8);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  lVar9 = lStack_b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_104d9d45c;
  puStack_160 = puVar8;
  uStack_158 = uVar3;
  lStack_150 = lVar2;
  uStack_148 = uVar6;
  puStack_140 = puVar1;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(uVar11);
  _objc_initWeak(auStack_168,lVar9);
  uVar3 = *(undefined8 *)(lVar9 + _DAT_112712c58);
  _objc_copyWeak(auStack_180,auStack_168);
  puStack_178 = puVar10;
  _objc_retain(uVar11);
  uStack_170 = param_5;
  func_0x00010c2728a0(uVar3);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_168);
  _objc_release(uVar11);
  return;
}



/* Entry: 104d9d45c; end: 104d9d557; -[SCFavoritesViewController _toggleFavoriteWithId:productImage:showToast:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9d45c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712c58);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c2728a0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 104d9d558; end: 104d9d5ab;  */

void FUN_104d9d558(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be321c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9d5ac; end: 104d9d6eb; -[SCFavoritesViewController _handleToggleCompleteWithSucess:productId:productImage:wasFavorited:showToast:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9d5ac(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  if ((param_3 & 1) == 0) {
    func_0x00010c237a80(*(undefined8 *)(param_1 + _DAT_112712c5c));
  }
  else {
    func_0x00010be8a9e0(param_1);
    if (param_7 != 0) {
      if (param_6 == 0) {
        _objc_initWeak(auStack_48,param_1);
        uVar1 = *(undefined8 *)(param_1 + _DAT_112712c5c);
        _objc_copyWeak(auStack_58,auStack_48);
        uStack_50 = param_4;
        _objc_retain(param_5);
        func_0x00010c2377a0(uVar1);
        _objc_release(param_5);
        _objc_destroyWeak(auStack_58);
        _objc_destroyWeak(auStack_48);
      }
      else {
        func_0x00010c237700(*(undefined8 *)(param_1 + _DAT_112712c5c));
      }
    }
  }
  _objc_release(param_5);
  return;
}



/* Entry: 104d9d6ec; end: 104d9d727;  */

void FUN_104d9d6ec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beccc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9d728; end: 104d9d7d7; -[SCFavoritesViewController _reloadIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9d728(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712c6c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf380c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d9d7d8; end: 104d9d80b;  */

void FUN_104d9d7d8(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4e340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9d80c; end: 104d9d8ab; -[SCFavoritesViewController _loadPaginationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9d80c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0558;
  _objc_alloc();
  func_0x00010c0466c0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112712c6c);
  *(undefined **)(param_1 + _DAT_112712c6c) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0560;
  _objc_alloc();
  func_0x00010c0085e0();
  lVar3 = (long)_DAT_112712c64;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1d8bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712c60),PTR_s_setPaginationProvider__112653d10,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 104d9d8ac; end: 104d9d8bb; -[SCFavoritesViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d9d8ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712c70);
}



/* Entry: 104d9d8bc; end: 104d9d987; -[SCFavoritesViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9d8bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712c70,0);
  _objc_storeStrong(param_1 + _DAT_112712c5c,0);
  _objc_destroyWeak(param_1 + _DAT_112712c48);
  _objc_storeStrong(param_1 + _DAT_112712c68,0);
  _objc_storeStrong(param_1 + _DAT_112712c64,0);
  _objc_storeStrong(param_1 + _DAT_112712c60,0);
  _objc_storeStrong(param_1 + _DAT_112712c6c,0);
  _objc_storeStrong(param_1 + _DAT_112712c58,0);
  _objc_storeStrong(param_1 + _DAT_112712c54,0);
  _objc_storeStrong(param_1 + _DAT_112712c50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712c4c,0);
  return;
}



/* Entry: 104d9d988; end: 104d9dd5f; -[SCFavoritesCatalogEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9d988(long param_1)

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
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  
  puVar1 = PTR_PTR_1126b0568;
  _objc_alloc();
  lVar37 = (long)_DAT_112712c74;
  lVar2 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf4ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf977c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112712c78;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfa1300();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112712c7c;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf8b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112712c80;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112712c84;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112712c88;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_112712c8c;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112712c90;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c23afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112712c94;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf422e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_112712c98;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112712c9c;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bf424a0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + lVar37;
  _objc_loadWeakRetained();
  lVar34 = lVar37;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056b80();
  lVar36 = (long)_DAT_112712ca0;
  uVar35 = *(undefined8 *)(param_1 + lVar36);
  *(undefined **)(param_1 + lVar36) = puVar1;
  _objc_release(uVar35);
  _objc_release(lVar34);
  _objc_release(lVar37);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
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
                    /* WARNING: Could not recover jumptable at 0x00010c08b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar36),PTR_s_launch_112600710);
  return;
}



/* Entry: 104d9dd60; end: 104d9ddb7; -[SCFavoritesCatalogEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9dd60(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf82f40(*(undefined8 *)(param_1 + _DAT_112712ca0));
  puStack_28 = PTR_PTR_1126e4288;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d9ddb8; end: 104d9de6b; -[SCFavoritesCatalogEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9ddb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112712c94);
  _objc_destroyWeak(param_1 + _DAT_112712c9c);
  _objc_destroyWeak(param_1 + _DAT_112712c98);
  _objc_destroyWeak(param_1 + _DAT_112712c90);
  _objc_destroyWeak(param_1 + _DAT_112712c8c);
  _objc_destroyWeak(param_1 + _DAT_112712c88);
  _objc_destroyWeak(param_1 + _DAT_112712c78);
  _objc_destroyWeak(param_1 + _DAT_112712c84);
  _objc_destroyWeak(param_1 + _DAT_112712c80);
  _objc_destroyWeak(param_1 + _DAT_112712c7c);
  _objc_destroyWeak(param_1 + _DAT_112712c74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712ca0,0);
  return;
}



/* Entry: 104d9de6c; end: 104d9de9b;  */

void FUN_104d9de6c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2238;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db2238,
                      &PTR____CFConstantStringClassReference_110db2258,0);
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



/* Entry: 104d9de9c; end: 104d9e0d3; -[SCPaymentsOrderServiceClient initWithUserId:grapheneRegistry:unifiedGRPCClientFactory:] */

undefined1 *
FUN_104d9de9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e4290;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0490;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0468;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
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
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc(PTR_PTR_1126ae790);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar4);
    _objc_release(puVar5);
    uVar2 = param_5;
    func_0x00010bf56360(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b0570;
    _objc_alloc();
    func_0x00010c058f80();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d9e0d4; end: 104d9e237; -[SCPaymentsOrderServiceClient getOrderHistoryWithLimit:offset:completionBlock:] */

void FUN_104d9e0d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_2);
  func_0x000104d9eb64(param_4,param_5,*(undefined8 *)(param_2 + 8));
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bee7fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_1;
  _objc_retain(param_6);
  func_0x00010bfc8500(uVar1);
  _objc_release(param_2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  return;
}



/* Entry: 104d9e238; end: 104d9e2a7;  */

void FUN_104d9e238(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be28580(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d9e2a8; end: 104d9e393; -[SCPaymentsOrderServiceClient _vendCallOptions] */

void FUN_104d9e2a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined ***in_x3;
  undefined8 in_x4;
  long in_x5;
  undefined8 uVar6;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined *)0x1;
  func_0x00010c16c6a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_113185418;
  _objc_retain(PTR_PTR_113185418);
  if (puVar3 != (undefined *)0x0) {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110dadcb8;
    puStack_40 = puVar3;
    in_x3 = &ppuStack_48;
    in_x4 = 1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
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
  _objc_retain(puVar5);
  _objc_retain(in_x5);
  uVar6 = *(undefined8 *)(puVar3 + 0x18);
  _objc_retain(in_x4);
  _objc_retain(in_x3);
  _CACurrentMediaTime();
  func_0x00010c15ebe0(in_x3);
  _objc_release(in_x3);
  func_0x00010c15ebe0(puVar5);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = puVar5;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98940();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7120(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar3 = puVar5;
  func_0x00010c135700(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf987e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x0001057c9568(puVar5,&PTR____CFConstantStringClassReference_110db2318,puVar3,in_x4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = puVar5;
    func_0x00010c0eca80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c0ecea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x000100504554();
    _objc_release(puVar1);
    _objc_release(puVar3);
    if (in_x5 != 0) {
      (**(code **)(in_x5 + 0x10))(in_x5,puVar4,0);
    }
    _objc_release(puVar4);
  }
  else if (in_x5 != 0) {
    (**(code **)(in_x5 + 0x10))(in_x5,0,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 104d9e394; end: 104d9e5ef; -[SCPaymentsOrderServiceClient _handleDidGetOrderHistoryWithResponse:request:startTimeStamp:error:completion:] */

void FUN_104d9e394(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  func_0x00010c0a7120(uVar6);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x0001057c9568(param_3,&PTR____CFConstantStringClassReference_110db2318,lVar1,param_5,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    lVar1 = param_3;
    func_0x00010c0eca80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0ecea0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x000100504554();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,lVar5,0);
    }
    _objc_release(lVar5);
  }
  else if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d9e5f0; end: 104d9e6f7;  */

void FUN_104d9e5f0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000104d9e898();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0a3740(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  }
  uVar1 = param_2;
  func_0x00010c22ca00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000104d9e740();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c0a3740(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  }
  uVar1 = param_2;
  func_0x00010beed4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000104d9e7ec();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010c0a3740(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  }
  uVar1 = param_2;
  FUN_104d9ebec(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d9e6f8; end: 104d9e73f; -[SCPaymentsOrderServiceClient .cxx_destruct] */

void FUN_104d9e6f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d9e740; end: 104d9ebeb;  */

long FUN_104d9e740(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x00010c22caa0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 != 0) {
      lVar3 = param_1;
      func_0x00010bf390e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00(puVar2,param_2,lVar3);
      _objc_release(lVar3);
      if (((ulong)puVar2 & 1) == 0) {
        lVar3 = param_1;
        func_0x00010bfdc020(param_1);
        goto LAB_104d9e7c0;
      }
    }
  }
  lVar3 = 0;
LAB_104d9e7c0:
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 104d9ebec; end: 104d9f613;  */

undefined * FUN_104d9ebec(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    puStack_a8 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c22ca00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5de60(param_1);
    _objc_retain(lVar2);
    if (lVar2 == 0) {
      puStack_b0 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c22caa0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_104d9f614;
      puStack_88 = &UNK_11084fb18;
      _objc_retain(lVar2);
      lVar4 = lVar3;
      lStack_80 = lVar2;
      func_0x0001006372a4(lVar3,&puStack_a0);
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010bf529e0();
      if (lVar3 == 1) {
        lVar3 = lVar4;
        func_0x00010bfb1920(lVar4);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR_PTR_1126b05c0;
        _objc_alloc();
        lVar5 = lVar3;
        func_0x00010bfcff40(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c2711a0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010c112a80(lVar3);
        func_0x000104d9ea3c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01b400();
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar3);
      }
      else {
        puStack_b0 = (undefined *)0x0;
      }
      _objc_release(lVar4);
      _objc_release(lStack_80);
    }
    _objc_release(lVar2);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c22ca00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c22c980();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar28 = (undefined *)0x0;
    }
    else {
      _objc_retain(lVar3);
      lVar4 = lVar3;
      func_0x00010bf53220();
      puVar27 = PTR_PTR_1126b0388;
      ppuVar1 = &PTR____CFConstantStringClassReference_110daf278;
      if ((int)lVar4 != 0xe9) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      _objc_alloc();
      lVar4 = lVar3;
      func_0x00010bfb18a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c089720(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c25ca40(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c25ca60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      func_0x00010bf39960(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010c252440(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      func_0x00010c2befe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c013580();
      _objc_release(ppuVar1);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      puVar28 = PTR_PTR_1126b05b0;
      _objc_alloc();
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      lVar4 = lVar3;
      func_0x00010befd680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340(puVar11);
      func_0x00010c070480();
      lVar5 = lVar3;
      func_0x00010c08a8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c28d1e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010bf5a4a0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar10 = lVar9;
      func_0x00010bf64de0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff25e0();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(puVar11);
      _objc_release(lVar4);
      _objc_release(puVar27);
    }
    puVar27 = puVar28;
    func_0x00010befd580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar28);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010beed4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf49cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar4 = lVar3;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 == 0) {
      puStack_c0 = (undefined *)0x0;
    }
    else {
      puStack_c0 = PTR_PTR_1126b05a8;
      _objc_alloc();
      lVar4 = lVar3;
      func_0x00010bf8d6c0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c0faaa0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00f3a0();
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c0f67e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c276380();
    if (lVar3 == 0) {
      lStack_c8 = 0;
    }
    else {
      lVar3 = param_1;
      func_0x00010c0f67e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_c8 = lVar3;
      func_0x00010c276380();
      lVar4 = param_1;
      func_0x00010bf5de60(param_1);
      func_0x000104d9ea3c(lStack_c8,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c0f67e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32060();
    func_0x0001060e7090();
    _objc_release(lVar2);
    puVar28 = PTR_PTR_1126b0588;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010c0f67e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c088bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b4c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puStack_a8 = PTR_PTR_1126b0590;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010c0ecaa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf9e4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c257880();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c257a40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c099340();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x000100504554();
    lVar8 = param_1;
    func_0x00010c0f67e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c276020();
    lVar10 = param_1;
    func_0x00010bf5de60(param_1);
    func_0x000104d9ea3c(lVar9,lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c0f67e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010c261320();
    lVar13 = param_1;
    func_0x00010bf5de60(param_1);
    func_0x000104d9ea3c(lVar12,lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010c0f67e0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c276e00();
    param_2 = param_1;
    func_0x00010bf5de60(param_1);
    func_0x000104d9ea3c(lVar14,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar28;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010bf5a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c257880();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c257700();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010c257880();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c262fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1;
    func_0x00010c257880();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010c13fc00();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1;
    func_0x00010c257880();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x00010c26b4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1;
    func_0x00010c257880();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar25;
    func_0x00010c2577c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0322c0();
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(puVar11);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar28);
    _objc_release(lStack_c8);
    _objc_release(puStack_c0);
    _objc_release(puVar27);
    _objc_release(puStack_b0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_a8);
    return puStack_a8;
  }
  ___stack_chk_fail();
  puVar27 = *(undefined **)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf390e0(puVar27);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bfcff40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar28 = puVar27;
  func_0x00010c0720c0(puVar27);
  _objc_release(lVar2);
  _objc_release(puVar27);
  return puVar28;
}



/* Entry: 104d9f614; end: 104d9f697;  */

undefined8 FUN_104d9f614(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf390e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfcff40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 104d9f698; end: 104d9f83b;  */

void FUN_104d9f698(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar8 = param_2;
  func_0x00010c25cd00();
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_2;
    func_0x00010c25cd00();
    lVar1 = param_2;
    func_0x00010bf5de60(param_2);
    func_0x000104d9ea3c(lVar8,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b05c8;
  _objc_alloc(PTR_PTR_1126b05c8);
  lVar1 = param_2;
  func_0x00010c115e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c115e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c297560(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11cf60(param_2);
  lVar5 = param_2;
  func_0x00010c116060(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010c276980(param_2);
  lVar7 = param_2;
  func_0x00010bf5de60(param_2);
  func_0x000104d9ea3c(lVar6,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010c115f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7760(puVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d9f83c; end: 104d9f93b; -[SCPaymentsOrderServiceProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9f83c(long param_1)

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
  puVar2 = PTR_PTR_1126b05d0;
  _objc_alloc(PTR_PTR_1126b05d0);
  func_0x00010c0322e0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112712cb4));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d9f93c; end: 104d9f97b;  */

void FUN_104d9f93c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d9f97c; end: 104d9faef; -[SCPaymentsOrderServiceProviderEntryPoint _createOrderServiceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9f97c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b05d8;
  _objc_alloc(PTR_PTR_1126b05d8);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112712cb8;
    _objc_loadWeakRetained(lVar9);
  }
  lVar2 = lVar9;
  func_0x00010c293740(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112712cc0;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010bfcdfa0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112712cbc;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010bfcfa00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b3a0(puVar1,param_2,lVar3,lVar5,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d9faf0; end: 104d9fb43; -[SCPaymentsOrderServiceProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9faf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712cb4,0);
  _objc_destroyWeak(param_1 + _DAT_112712cc0);
  _objc_destroyWeak(param_1 + _DAT_112712cbc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712cb8);
  return;
}



/* Entry: 104d9fb44; end: 104d9fbb7; -[UNISCPaymentsOrderService initWithUnifiedGrpcService:] */

undefined1 * FUN_104d9fb44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4298;
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



/* Entry: 104d9fbb8; end: 104d9fc9b; -[UNISCPaymentsOrderService getOrderHistoryWithRequest:callOptionsBuilder:handler:] */

void FUN_104d9fbb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b05e0;
  _objc_opt_class(PTR_PTR_1126b05e0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db2398,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d9fc9c; end: 104d9fd7f; -[UNISCPaymentsOrderService getSingleOrderWithRequest:callOptionsBuilder:handler:] */

void FUN_104d9fc9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b05e8;
  _objc_opt_class(PTR_PTR_1126b05e8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db23b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d9fd80; end: 104d9fd8b; -[UNISCPaymentsOrderService .cxx_destruct] */

void FUN_104d9fd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d9fd8c; end: 104d9fdf3; +[SCPaymentsGetOrderHistoryRequest descriptor] */

void FUN_104d9fd8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8b98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa5a0,
                        &PTR____CFConstantStringClassReference_110db23d8,
                        &PTR_s_snapchat_payments_commerce_order_1130b15c8,&PTR_s_userId_1130b1680,4,
                        0x18,0x1c);
    puRam00000001136b8b98 = puVar1;
  }
  return;
}



/* Entry: 104d9fdf4; end: 104d9fe5b; +[SCPaymentsOrderHistory descriptor] */

void FUN_104d9fdf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa5f0,
                        &PTR____CFConstantStringClassReference_110db23f8,
                        &PTR_s_snapchat_payments_commerce_order_1130b15c8,
                        &PTR_s_ordersArray_1130b15e0,2,0x10,0x1c);
    puRam00000001136b8ba0 = puVar1;
  }
  return;
}



/* Entry: 104d9fe5c; end: 104d9fee7; +[SCPaymentsGetOrderHistoryResponse descriptor] */

undefined * FUN_104d9fe5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8ba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa640,
                        &PTR____CFConstantStringClassReference_110db2418,
                        &PTR_s_snapchat_payments_commerce_order_1130b15c8,&PTR_s_requestId_1130b1620
                        ,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136b8ba8 = puVar1;
  }
  return puRam00000001136b8ba8;
}



/* Entry: 104d9fee8; end: 104d9ff4f; +[SCPaymentsGetSingleOrderRequest descriptor] */

void FUN_104d9fee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8bb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa6e0,
                        &PTR____CFConstantStringClassReference_110db2438,
                        &PTR_s_snapchat_payments_commerce_order_1130b1708,&PTR_s_userId_1130b1720,2,
                        0x18,0x1c);
    puRam00000001136b8bb0 = puVar1;
  }
  return;
}



/* Entry: 104d9ff50; end: 104d9ffdb; +[SCPaymentsGetSingleOrderResponse descriptor] */

undefined * FUN_104d9ff50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8bb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa730,
                        &PTR____CFConstantStringClassReference_110db2458,
                        &PTR_s_snapchat_payments_commerce_order_1130b1708,&PTR_s_requestId_1130b1760
                        ,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136b8bb8 = puVar1;
  }
  return puRam00000001136b8bb8;
}



/* Entry: 104d9ffdc; end: 104da0057;  */

undefined * FUN_104d9ffdc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8bc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db2478,
                        &UNK_10dd8b580,&UNK_10dd8b5e8,9,FUN_104da0058,0);
    do {
      if (puRam00000001136b8bc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8bc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8bc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8bc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8bc0;
}



/* Entry: 104da0058; end: 104da0063;  */

bool FUN_104da0058(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 104da0064; end: 104da00cb; +[SCPaymentsOrder descriptor] */

void FUN_104da0064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8bc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa7d0,
                        &PTR____CFConstantStringClassReference_110db2498,
                        &PTR_s_snapchat_payments_commerce_order_1130b17c0,&PTR_s_orderId_1130b17d8,
                        0x12,0x88,0x1c);
    puRam00000001136b8bc8 = puVar1;
  }
  return;
}



/* Entry: 104da00cc; end: 104da0133; +[SCPaymentsAccountInfo descriptor] */

void FUN_104da00cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8bd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa870,
                        &PTR____CFConstantStringClassReference_110db24b8,
                        &PTR_s_snapchat_payments_commerce_accou_1130b1a18,
                        &PTR_s_contactDetails_1130b1a30,2,0x18,0x1c);
    puRam00000001136b8bd0 = puVar1;
  }
  return;
}



/* Entry: 104da0134; end: 104da019b; +[SCPaymentsContactDetails descriptor] */

void FUN_104da0134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8bd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa910,
                        &PTR____CFConstantStringClassReference_110db24d8,
                        &PTR_s_snapchat_payments_commerce_commo_1130b1a70,&PTR_s_email_1130b1a88,2,
                        0x18,0x1c);
    puRam00000001136b8bd8 = puVar1;
  }
  return;
}



/* Entry: 104da019c; end: 104da0293; +[SCPaymentsLineItem descriptor] */

undefined * FUN_104da019c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8be0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa9b0,
                        &PTR____CFConstantStringClassReference_110db24f8,
                        &PTR_s_snapchat_payments_commerce_order_1130b1ac8,&PTR_s_id_p_1130b1ae0,0x14
                        ,0xa0,0x1c);
    func_0x00010c2289e0();
    puRam00000001136b8be0 = puVar1;
  }
  return puRam00000001136b8be0;
}



/* Entry: 104da0294; end: 104da029f;  */

bool FUN_104da0294(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 104da02a0; end: 104da031b;  */

undefined * FUN_104da02a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8bf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db2538,
                        &UNK_10dd8b650,&UNK_10dd8b698,5,FUN_104da031c,0);
    do {
      if (puRam00000001136b8bf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8bf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8bf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8bf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8bf0;
}



/* Entry: 104da031c; end: 104da0327;  */

bool FUN_104da031c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 104da0328; end: 104da03a3; +[SCPaymentsStoreInfo descriptor] */

undefined * FUN_104da0328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8bf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fab90,
                        &PTR____CFConstantStringClassReference_110db2558,
                        &PTR_s_snapchat_payments_commerce_order_1130b1d60,&PTR_s_storeId_1130b1d78,9
                        ,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136b8bf8 = puVar1;
  }
  return puRam00000001136b8bf8;
}



/* Entry: 104da03a4; end: 104da0487; +[SCPaymentsShippingDetail descriptor] */

void FUN_104da03a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8c00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fac30,
                        &PTR____CFConstantStringClassReference_110db2578,
                        &PTR_s_snapchat_payments_commerce_shipp_1130b1e98,
                        &PTR_s_shipByDate_1130b1eb0,8,0x40,0x1c);
    puRam00000001136b8c00 = puVar1;
  }
  return;
}



/* Entry: 104da0488; end: 104da0493;  */

bool FUN_104da0488(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 104da0494; end: 104da04fb; +[SCPaymentsShippingAddress descriptor] */

void FUN_104da0494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8c10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129facd0,
                        &PTR____CFConstantStringClassReference_110db25b8,
                        &PTR_s_snapchat_payments_commerce_commo_1130b1fb0,&PTR_s_addressId_1130b1fc8
                        ,0xf,0x70,0x1c);
    puRam00000001136b8c10 = puVar1;
  }
  return;
}



/* Entry: 104da04fc; end: 104da0563; +[SCPaymentsShippingOption descriptor] */

void FUN_104da04fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8c18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fad70,
                        &PTR____CFConstantStringClassReference_110db25d8,
                        &PTR_s_snapchat_payments_commerce_shipp_1130b21a8,&PTR_s_handle_1130b21c0,3,
                        0x20,0x1c);
    puRam00000001136b8c18 = puVar1;
  }
  return;
}



/* Entry: 104da0564; end: 104da0807; -[SCCommerceSnapDocPagePropertiesResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da0564(undefined8 param_1,long param_2,undefined *param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x000108f56b50();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010bf0d0a0();
  if ((int)puVar1 != 7) goto LAB_104da07b8;
  puVar1 = param_3;
  func_0x00010bf42200();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_4);
  puVar2 = puVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
LAB_104da069c:
    _objc_release(puVar2);
  }
  else {
    puVar3 = puVar1;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) {
      param_2 = param_4;
      FUN_104da0808(puVar1,param_4,1);
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_104da069c;
    }
  }
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf42200();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_5);
  puVar2 = puVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
LAB_104da0798:
    _objc_release(puVar2);
  }
  else {
    puVar3 = puVar1;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) {
      param_2 = param_5;
      FUN_104da0808(puVar1,param_5,0);
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(param_5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_104da0798;
    }
  }
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(puVar1);
LAB_104da07b8:
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar8 = param_4;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    _objc_release(lVar8);
  }
  else {
    lVar5 = param_4;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    _objc_release(lVar8);
    if (lVar6 != 0) {
      lVar6 = param_4;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar6);
          }
          uVar10 = *(undefined8 *)(lVar11 * 8);
          uVar7 = uVar10;
          func_0x00010c0848c0();
          if ((int)uVar7 == 3) {
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b53e0(param_2);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar2);
            _objc_release(puVar1);
            func_0x00010c2573e0(uVar10);
            _objc_retainAutoreleasedReturnValue();
LAB_104da0a80:
            uVar7 = uVar10;
            func_0x00010bfe5ea0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0760(param_2);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar7);
            _objc_release(uVar10);
          }
          else if ((int)uVar7 == 2) {
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b53e0(param_2);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar2);
            _objc_release(puVar1);
            func_0x00010c115c20(uVar10);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104da0a80;
          }
          lVar11 = lVar11 + 1;
        } while (lVar8 != lVar11);
        lVar8 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
    }
  }
  _objc_release(param_2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_4 + _DAT_112712cc8);
  return;
}



/* Entry: 104da0808; end: 104da0b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da0808(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar3);
          }
          uVar8 = *(undefined8 *)(lVar9 * 8);
          uVar4 = uVar8;
          func_0x00010c0848c0();
          if ((int)uVar4 == 3) {
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b53e0(param_2);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
            _objc_release(puVar5);
            func_0x00010c2573e0(uVar8);
            _objc_retainAutoreleasedReturnValue();
LAB_104da0a80:
            uVar4 = uVar8;
            func_0x00010bfe5ea0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0760(param_2);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar4);
            _objc_release(uVar8);
          }
          else if ((int)uVar4 == 2) {
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b53e0(param_2);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar6);
            _objc_release(puVar5);
            func_0x00010c115c20(uVar8);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104da0a80;
          }
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        lVar1 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712cc8);
  return;
}



/* Entry: 104da0b48; end: 104da0b57; -[SCCommerceSnapDocPagePropertiesResolverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da0b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712cc8);
  return;
}



/* Entry: 104da0b58; end: 104da0c1f; -[SCPaymentsGenericTableViewController initWithUserBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104da0b58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e42a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112712ccc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712cd0);
    *(undefined **)((long)puVar1 + (long)_DAT_112712cd0) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104da0c20; end: 104da0fcb; -[SCPaymentsGenericTableViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da0c20(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e42a0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_loadView_112604be0);
  func_0x00010c268000(param_1);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112712cd4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0x3fedddddddddddde,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar4 = (long)_DAT_112712cd8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b05f8;
  _objc_alloc();
  func_0x00010c045280();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112712cdc);
  *(undefined **)(param_1 + _DAT_112712cdc) = puVar1;
  _objc_release(uVar3);
  return;
}



/* Entry: 104da0fcc; end: 104da10b7; -[SCPaymentsGenericTableViewController viewWillAppear:] */

void FUN_104da0fcc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e42a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  return;
}



/* Entry: 104da10b8; end: 104da116b; -[SCPaymentsGenericTableViewController viewWillDisappear:] */

void FUN_104da10b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e42a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillDisappear__112685438);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  return;
}



/* Entry: 104da116c; end: 104da1173; -[SCPaymentsGenericTableViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_104da116c(void)

{
  return 0;
}



/* Entry: 104da1174; end: 104da117b; -[SCPaymentsGenericTableViewController tableView:cellForRowAtIndexPath:] */

undefined8 FUN_104da1174(void)

{
  return 0;
}



/* Entry: 104da117c; end: 104da11bb; -[SCPaymentsGenericTableViewController applicationDidBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da117c(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104da11bc; end: 104da11cb; -[SCPaymentsGenericTableViewController applicationWillForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104da11bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112712cd8),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 104da11cc; end: 104da11d3; -[SCPaymentsGenericTableViewController tableViewStyle] */

undefined8 FUN_104da11cc(void)

{
  return 1;
}


