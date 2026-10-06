/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104dcb804; end: 104dcb843; -[SCCommerceStoreItemCollectionViewCell setProductPriceLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcb804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127130f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dcb844; end: 104dcb853; -[SCCommerceStoreItemCollectionViewCell strikeThroughPriceLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dcb844(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130f8);
}



/* Entry: 104dcb854; end: 104dcb893; -[SCCommerceStoreItemCollectionViewCell setStrikeThroughPriceLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcb854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127130f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dcb894; end: 104dcb8a3; -[SCCommerceStoreItemCollectionViewCell outOfStockLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dcb894(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130fc);
}



/* Entry: 104dcb8a4; end: 104dcb8e3; -[SCCommerceStoreItemCollectionViewCell setOutOfStockLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcb8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127130fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dcb8e4; end: 104dcb8f3; -[SCCommerceStoreItemCollectionViewCell compositeNetworkImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dcb8e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127130ec);
}



/* Entry: 104dcb8f4; end: 104dcb933; -[SCCommerceStoreItemCollectionViewCell setCompositeNetworkImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcb8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127130ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dcb934; end: 104dcb9c3; -[SCCommerceStoreItemCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcb934(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127130ec,0);
  _objc_storeStrong(param_1 + _DAT_1127130fc,0);
  _objc_storeStrong(param_1 + _DAT_1127130f8,0);
  _objc_storeStrong(param_1 + _DAT_1127130f4,0);
  _objc_storeStrong(param_1 + _DAT_1127130f0,0);
  _objc_storeStrong(param_1 + _DAT_1127130e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127130e4,0);
  return;
}



/* Entry: 104dcb9c4; end: 104dcbc23; +[SCPaymentsSettingsUtils showRemoveCancelDialog:removeActionHandler:cancelActionHandler:] */

void FUN_104dcb9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126af180;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dac918;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dac918,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(ppuVar1);
  func_0x00010c160fc0(puVar2);
  func_0x00010c160fc0(puVar3);
  puVar5 = PTR_PTR_1126af4d8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c161280(puVar5);
  _objc_release(puVar6);
  func_0x00010c1612e0(0x3fba1cac083126e9,puVar5);
  func_0x00010c160fc0(puVar5);
  puVar6 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 104dcbc24; end: 104dcbc33;  */

void FUN_104dcbc24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 104dcbc34; end: 104dcbdaf; +[SCPaymentsSettingsUtils showErrorWithTitle:message:] */

void FUN_104dcbc34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c083820();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af180;
  if (((ulong)puVar2 & 1) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dae6f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae6f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c235c40(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  func_0x00010c18f620(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104dcbdb0; end: 104dcbde3;  */

void FUN_104dcbdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104dcbde4; end: 104dcc02f; +[SCPaymentsSettingsUtils showErrorRetryCancelDialogWithTitle:message:retryActionHandler:cancelActionHandler:] */

void FUN_104dcbde4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126af180;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db3738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126af4d8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c161280(puVar5);
  _objc_release(puVar6);
  func_0x00010c1612e0(0x3fba1cac083126e9,puVar5);
  puVar6 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 104dcc030; end: 104dcc03f;  */

void FUN_104dcc030(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 104dcc040; end: 104dcc3a7; +[SCPaymentsSettingsUtils privacyLabelWithText:numberOfLines:parentView:] */

void FUN_104dcc040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126af270;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init();
  func_0x00010c1cfce0();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1bdd60(puVar1);
  func_0x00010c162900(puVar1);
  func_0x00010c1abb80(puVar1);
  func_0x00010c213040(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110db3758;
  func_0x00010c160fc0(puVar1);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1);
  _objc_release(ppuVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c600(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  func_0x00010c099980(puVar1);
  _objc_release(param_3);
  func_0x00010befbb60(param_5);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bf1ff80(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493c0(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010c08de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_5;
  func_0x00010c2793a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar12 = puVar1;
  func_0x00010bf493c0(0xc024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) &&
     (___stack_chk_fail(), puVar14 != (undefined *)0x0)) {
    func_0x00010c246ca0(puVar14);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dcc3a8; end: 104dcc3df; +[SCPaymentsSettingsUtils sortShippingAddressesByLastUsedAt:] */

void FUN_104dcc3a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_11084ff18);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dcc3e0; end: 104dcc463;  */

undefined8 FUN_104dcc3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010c08a8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c08a8a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = param_3;
  func_0x00010bf433a0(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104dcc464; end: 104dcc49b; +[SCPaymentsSettingsUtils sortPaymentMethodsByPrimary:] */

void FUN_104dcc464(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_11084ff38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dcc49c; end: 104dcc4f3;  */

uint FUN_104dcc49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010c07b0c0(param_3);
  uVar1 = param_2;
  func_0x00010c07b0c0(param_2);
  _objc_release(param_2);
  return (uint)param_3 & ((uint)uVar1 ^ 1);
}



/* Entry: 104dcc4f4; end: 104dcc59f; -[SCPaymentsLegacyContactDetails initWithEmail:phone:] */

undefined1 *
FUN_104dcc4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4348;
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
    func_0x00010be98840(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dcc5a0; end: 104dcc613; -[SCPaymentsLegacyContactDetails _sanitize] */

void FUN_104dcc5a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d500(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + 8));
  if ((int)puVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined ***)(param_1 + 8) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d500(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + 0x10));
  if ((int)puVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined ***)(param_1 + 0x10) = &PTR____CFConstantStringClassReference_110daafd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104dcc614; end: 104dcc61b; -[SCPaymentsLegacyContactDetails email] */

undefined8 FUN_104dcc614(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104dcc61c; end: 104dcc623; -[SCPaymentsLegacyContactDetails phone] */

undefined8 FUN_104dcc61c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104dcc624; end: 104dcc653; -[SCPaymentsLegacyContactDetails .cxx_destruct] */

void FUN_104dcc624(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104dcc654; end: 104dcc937; -[SCPaymentsLegacyShippingAddress initWithAddressId:fullName:firstName:lastName:isDefault:streetAddress1:streetAddress2:city:state:country:zip:updatedAt:lastUsedAt:] */

undefined8 *
FUN_104dcc654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puStack_98;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e4350;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar4 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar4 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar4 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar4 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar4 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar4 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bee77a0();
    if ((int)puVar3 == 0) {
      puStack_98 = (undefined8 *)0x0;
      goto LAB_104dcc8a4;
    }
  }
  _objc_retain(puVar1);
  puStack_98 = puVar1;
LAB_104dcc8a4:
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
  _objc_release(puVar1);
  return puStack_98;
}



/* Entry: 104dcc938; end: 104dccb9b; -[SCPaymentsLegacyShippingAddress initWithFullName:firstName:lastName:streetAddress1:streetAddress2:city:state:country:zip:] */

undefined8 *
FUN_104dcc938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  puStack_68 = PTR_PTR_1126e4350;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2680(puVar1);
    _objc_retain();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
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



/* Entry: 104dccb9c; end: 104dccc33; -[SCPaymentsLegacyShippingAddress _validate] */

/* WARNING: Possible PIC construction at 0x000104dccbb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dccbd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dccc0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104dccbdc) */
/* WARNING: Removing unreachable block (ram,0x000104dccbe0) */
/* WARNING: Removing unreachable block (ram,0x000104dccbf0) */
/* WARNING: Removing unreachable block (ram,0x000104dccbbc) */
/* WARNING: Removing unreachable block (ram,0x000104dccc04) */
/* WARNING: Removing unreachable block (ram,0x000104dccc10) */
/* WARNING: Removing unreachable block (ram,0x000104dccc14) */
/* WARNING: Removing unreachable block (ram,0x000104dccbc0) */
/* WARNING: Removing unreachable block (ram,0x000104dccbd0) */
/* WARNING: Removing unreachable block (ram,0x000104dccc24) */

void FUN_104dccb9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_isNotBlank__1125fbd70,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 104dccc34; end: 104dccc37; -[SCPaymentsLegacyShippingAddress isValidModel] */

void FUN_104dccc34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee77b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__validate_112597790);
  return;
}



/* Entry: 104dccc38; end: 104dccc6b; -[SCPaymentsLegacyShippingAddress didFailValidation] */

bool FUN_104dccc38(long param_1)

{
  func_0x00010befd660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 104dccc6c; end: 104dccc73; -[SCPaymentsLegacyShippingAddress addressId] */

undefined8 FUN_104dccc6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104dccc74; end: 104dccc7b; -[SCPaymentsLegacyShippingAddress fullName] */

undefined8 FUN_104dccc74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104dccc7c; end: 104dccc83; -[SCPaymentsLegacyShippingAddress firstName] */

undefined8 FUN_104dccc7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104dccc84; end: 104dccc8b; -[SCPaymentsLegacyShippingAddress lastName] */

undefined8 FUN_104dccc84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104dccc8c; end: 104dccc93; -[SCPaymentsLegacyShippingAddress isDefault] */

undefined8 FUN_104dccc8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104dccc94; end: 104dccc9b; -[SCPaymentsLegacyShippingAddress streetAddress1] */

undefined8 FUN_104dccc94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104dccc9c; end: 104dccca3; -[SCPaymentsLegacyShippingAddress streetAddress2] */

undefined8 FUN_104dccc9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104dccca4; end: 104dcccab; -[SCPaymentsLegacyShippingAddress city] */

undefined8 FUN_104dccca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104dcccac; end: 104dcccb3; -[SCPaymentsLegacyShippingAddress state] */

undefined8 FUN_104dcccac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104dcccb4; end: 104dcccbb; -[SCPaymentsLegacyShippingAddress country] */

undefined8 FUN_104dcccb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104dcccbc; end: 104dcccc3; -[SCPaymentsLegacyShippingAddress zip] */

undefined8 FUN_104dcccbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104dcccc4; end: 104dccccb; -[SCPaymentsLegacyShippingAddress updatedAt] */

undefined8 FUN_104dcccc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104dccccc; end: 104dcccd3; -[SCPaymentsLegacyShippingAddress lastUsedAt] */

undefined8 FUN_104dccccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104dcccd4; end: 104dcccdb; -[SCPaymentsLegacyShippingAddress addressError] */

undefined8 FUN_104dcccd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104dcccdc; end: 104dccd0b; -[SCPaymentsLegacyShippingAddress setAddressError:] */

void FUN_104dcccdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dccd0c; end: 104dccdcb; -[SCPaymentsLegacyShippingAddress .cxx_destruct] */

void FUN_104dccd0c(long param_1)

{
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



/* Entry: 104dccdcc; end: 104dcce57; -[SCPaymentsMethodWrapper initWithPaymentsCard:] */

undefined1 * FUN_104dccdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4358;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 1;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45240();
    *(byte *)((long)puVar1 + 9) = (byte)puVar3 ^ 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dcce58; end: 104dccf23; -[SCPaymentsMethodWrapper initWithCoder:] */

undefined1 * FUN_104dcce58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4358;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    *(undefined8 *)((long)puVar1 + 0x18) = 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dccf24; end: 104dccfab; -[SCPaymentsMethodWrapper encodeWithCoder:] */

void FUN_104dccf24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db3778);
    func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110db3798);
    func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                        &PTR____CFConstantStringClassReference_110db37b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 104dccfac; end: 104dccfdf; -[SCPaymentsMethodWrapper stringType] */

undefined ** FUN_104dccfac(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010c27dd80();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db37f8;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db37d8;
  if (param_1 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 104dccfe0; end: 104dccfe3; -[SCPaymentsMethodWrapper isValidModel] */

void FUN_104dccfe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be45250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isValid_11256ee30);
  return;
}



/* Entry: 104dccfe4; end: 104dcd09f; -[SCPaymentsMethodWrapper _isValid] */

void FUN_104dccfe4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9c900(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c067fc0();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9c7c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c067fc0();
  _objc_release(uVar5);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06d2c0();
  puVar1 = PTR_PTR_1126b06b0;
  if (iVar2 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d0e60(puVar1,param_2,uVar3,uVar4,puVar6);
    _objc_release(puVar6);
  }
  return;
}



/* Entry: 104dcd0a0; end: 104dcd0a7; -[SCPaymentsMethodWrapper identifier] */

undefined8 FUN_104dcd0a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104dcd0a8; end: 104dcd0d7; -[SCPaymentsMethodWrapper setIdentifier:] */

void FUN_104dcd0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dcd0d8; end: 104dcd0df; -[SCPaymentsMethodWrapper type] */

undefined8 FUN_104dcd0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104dcd0e0; end: 104dcd0e7; -[SCPaymentsMethodWrapper isPrimary] */

undefined1 FUN_104dcd0e0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104dcd0e8; end: 104dcd0ef; -[SCPaymentsMethodWrapper setIsPrimary:] */

void FUN_104dcd0e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 104dcd0f0; end: 104dcd0f7; -[SCPaymentsMethodWrapper card] */

undefined8 FUN_104dcd0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104dcd0f8; end: 104dcd0ff; -[SCPaymentsMethodWrapper lineOfCredit] */

undefined8 FUN_104dcd0f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104dcd100; end: 104dcd107; -[SCPaymentsMethodWrapper didFailValidation] */

undefined1 FUN_104dcd100(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104dcd108; end: 104dcd10f; -[SCPaymentsMethodWrapper setDidFailValidation:] */

void FUN_104dcd108(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 104dcd110; end: 104dcd117; -[SCPaymentsMethodWrapper cardError] */

undefined8 FUN_104dcd110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104dcd118; end: 104dcd147; -[SCPaymentsMethodWrapper setCardError:] */

void FUN_104dcd118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dcd148; end: 104dcd18f; -[SCPaymentsMethodWrapper .cxx_destruct] */

void FUN_104dcd148(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104dcd190; end: 104dcd2e3; -[SCPaymentsCard initWithNumber:expirationMonth:expirationYear:cvv:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104dcd190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e4360;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNumber_expirationMonth_e_1125e9b38,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b06c0;
    func_0x00010bf320a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_104dce9ec();
    *(undefined **)((long)puVar1 + (long)_DAT_112713160) = puVar3;
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf20fc0();
    FUN_104dcebf8();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713164);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112713164) = puVar4;
    _objc_release(uVar7);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c0de940();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c0de940(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    puVar6 = puVar4;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713168);
    *(undefined1 **)((long)puVar1 + (long)_DAT_112713168) = puVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dcd2e4; end: 104dcd657; -[SCPaymentsCard initWithObfuscated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104dcd2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c088be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf9cbe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf9cc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126e4360;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNumber_expirationMonth_e_1125e9b38,uVar2,uVar4,uVar3,
                      0);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf31a80();
    func_0x0001060e6f28();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf20e60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112713164;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    FUN_104dcea28();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112713160) = uVar2;
    uVar2 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271316c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271316c) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010c088be0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713168);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112713168) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bf19f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfb18a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d320(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf19f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c089720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8360(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf19f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e6e0(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf19f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c25cb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1991a0(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf19f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf480(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf19f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e96a0(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf19f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c105660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df560(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf19f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf53220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184b00(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dcd658; end: 104dcd867; -[SCPaymentsCard initWithLastFourDigits:expirationMonth:expirationYear:cvv:postalCode:brandNetwork:brandName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104dcd658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_6);
  uStack_a0 = param_4;
  uStack_98 = param_5;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  func_0x00010c220220();
  _objc_release(param_6);
  if ((puVar1 != (undefined *)0x0) &&
     (puVar3 = puVar1, func_0x00010c08fa60(), puVar3 != (undefined *)0x0)) {
    func_0x00010c220220(puVar2);
  }
  if ((param_7 != 0) && (lVar6 = param_7, func_0x00010c08fa60(), lVar6 != 0)) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110db3838;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_70 = param_7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220(puVar2);
    _objc_release(puVar3);
  }
  puStack_80 = PTR_PTR_1126e4360;
  puVar4 = &uStack_88;
  puVar3 = puVar2;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_initWithParameters__1125ea7e0);
  if (puVar4 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112713164;
    _objc_retain(param_9);
    uVar5 = *(undefined8 *)((long)puVar4 + lVar6);
    *(undefined8 *)((long)puVar4 + lVar6) = param_9;
    _objc_release(uVar5);
    *(long *)((long)puVar4 + (long)_DAT_112713160) = param_8;
    param_8 = (long)_DAT_112713168;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar4 + param_8);
    *(undefined8 *)((long)puVar4 + param_8) = param_3;
    _objc_release(uVar5);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  uVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_e0;
  uStack_c8 = param_9;
  pcStack_a8 = FUN_104dcd868;
  lStack_d0 = param_8;
  lStack_c0 = param_7;
  uStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puStack_d8 = PTR_PTR_1126e4360;
  uStack_e0 = uVar5;
  _objc_msgSendSuper2(&uStack_e0,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = puVar3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar4 + (long)_DAT_11271316c);
    *(undefined **)((long)puVar4 + (long)_DAT_11271316c) = puVar1;
    _objc_release(uVar5);
    puVar1 = puVar3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar4 + (long)_DAT_112713170);
    *(undefined **)((long)puVar4 + (long)_DAT_112713170) = puVar1;
    _objc_release(uVar5);
    puVar1 = puVar3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar4 + (long)_DAT_112713168);
    *(undefined **)((long)puVar4 + (long)_DAT_112713168) = puVar1;
    _objc_release(uVar5);
    puVar1 = puVar3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar4 + (long)_DAT_112713164);
    *(undefined **)((long)puVar4 + (long)_DAT_112713164) = puVar1;
    _objc_release(uVar5);
    puVar1 = puVar3;
    func_0x00010bf66f40();
    *(undefined **)((long)puVar4 + (long)_DAT_112713160) = puVar1;
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cf760(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198be0(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198ca0(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189240(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df560(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179800(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e6e0(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1991a0(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf480(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e96a0(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf67000(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184980(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 104dcd868; end: 104dcdbaf; -[SCPaymentsCard initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104dcd868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4360;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271316c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271316c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713170);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112713170) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713168);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112713168) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112713164);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112713164) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + (long)_DAT_112713160) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cf760(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198be0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198ca0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189240(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df560(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179800(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e6e0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1991a0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf480(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e96a0(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184980(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dcdbb0; end: 104dcde8f; -[SCPaymentsCard encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcdbb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11271316c);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db3878);
    func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112713170),
                        &PTR____CFConstantStringClassReference_110db3898);
    func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112713168),
                        &PTR____CFConstantStringClassReference_110db38b8);
    func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112713164),
                        &PTR____CFConstantStringClassReference_110db38d8);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + _DAT_112713160),
                        &PTR____CFConstantStringClassReference_110db38f8);
    lVar1 = param_1;
    func_0x00010c0de940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db3918);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf9c7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db3938);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf9c900(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db3958);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf63100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db3978);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c105600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db3998);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf321e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db39b8);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c25ca80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db39d8);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf9da80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db39f8);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c09e300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db3a18);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c125a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,lVar1,&PTR____CFConstantStringClassReference_110db3a38);
    _objc_release(lVar1);
    func_0x00010bf532a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110db3a58);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104dcde90; end: 104dcdf4f; -[SCPaymentsCard iconImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcde90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112713164);
  func_0x00010bf2fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104dcdf50; end: 104dce11b; -[SCPaymentsCard btUICardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dcdf50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112713178;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 != 0) goto LAB_104dce100;
  lVar4 = param_1;
  func_0x00010bf20fc0();
  puVar2 = PTR_PTR_1126b06c0;
  puVar1 = PTR_PTR_1126b0750;
  if (lVar4 < 5) {
    if (2 < lVar4) {
      if (lVar4 == 3) {
        func_0x00010bdc0ec0(PTR_PTR_1126b0750);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar4 != 4) goto LAB_104dce0fc;
        func_0x00010bdc0f20(PTR_PTR_1126b0750);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104dce0cc;
    }
    if (lVar4 == 1) {
      func_0x00010bdc0e80(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104dce0cc;
    }
    if (lVar4 == 2) {
      func_0x00010bdc0ea0(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104dce0cc;
    }
  }
  else {
    if (lVar4 < 8) {
      if (lVar4 == 5) {
        func_0x00010bdc0f60(PTR_PTR_1126b0750);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar4 != 6) goto LAB_104dce0fc;
        func_0x00010bdc0ee0(PTR_PTR_1126b0750);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (lVar4 == 8) {
      func_0x00010bdc0f00(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar4 != 9) goto LAB_104dce0fc;
      func_0x00010bdc0f40(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_104dce0cc:
    func_0x00010bf32080(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
LAB_104dce0fc:
  lVar4 = *(long *)(param_1 + lVar5);
LAB_104dce100:
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104dce11c; end: 104dce167; -[SCPaymentsCard allowedCardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dce11c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf20fc0();
  if (lVar1 - 1U < 9) {
    uVar2 = *(undefined8 *)(&UNK_10dd8b7b0 + (lVar1 - 1U) * 8);
  }
  else {
    uVar2 = 0;
  }
  *(undefined8 *)(param_1 + _DAT_11271315c) = uVar2;
  return;
}



/* Entry: 104dce168; end: 104dce337; -[SCPaymentsCard isBillingAddressValid] */

undefined * FUN_104dce168(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bfb18a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c089720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar3,param_2,uVar1);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar3 != 0) {
      uVar1 = param_1;
      func_0x00010c25ca80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar2,param_2,uVar1);
      _objc_release(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar2 != 0) {
        uVar1 = param_1;
        func_0x00010c09e300(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar3,param_2,uVar1);
        _objc_release(uVar1);
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((int)puVar3 != 0) {
          uVar1 = param_1;
          func_0x00010c125a80(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078d80(puVar2,param_2,uVar1);
          _objc_release(uVar1);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if ((int)puVar2 != 0) {
            uVar1 = param_1;
            func_0x00010c105600(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c078d80(puVar3,param_2,uVar1);
            _objc_release(uVar1);
            puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if ((int)puVar3 != 0) {
              uVar1 = param_1;
              func_0x00010bf532a0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c078d80(puVar2,param_2,uVar1);
              puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              if (((ulong)puVar2 & 1) == 0) {
                func_0x00010bf53680(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c078d80(puVar3,param_2,param_1);
                _objc_release(param_1);
              }
              else {
                puVar3 = (undefined *)0x1;
              }
              _objc_release(uVar1);
              return puVar3;
            }
          }
        }
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 104dce338; end: 104dce347; -[SCPaymentsCard identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dce338(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271316c);
}



/* Entry: 104dce348; end: 104dce387; -[SCPaymentsCard setIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dce348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271316c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dce388; end: 104dce397; -[SCPaymentsCard adAccountId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dce388(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713170);
}



/* Entry: 104dce398; end: 104dce3a7; -[SCPaymentsCard lastFourDigits] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dce398(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713168);
}



/* Entry: 104dce3a8; end: 104dce3b7; -[SCPaymentsCard brandNetwork] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dce3a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713160);
}



/* Entry: 104dce3b8; end: 104dce3c7; -[SCPaymentsCard brandName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dce3b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713164);
}



/* Entry: 104dce3c8; end: 104dce3d7; -[SCPaymentsCard error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104dce3c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112713174);
}



/* Entry: 104dce3d8; end: 104dce457; -[SCPaymentsCard .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dce3d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713174,0);
  _objc_storeStrong(param_1 + _DAT_112713164,0);
  _objc_storeStrong(param_1 + _DAT_112713168,0);
  _objc_storeStrong(param_1 + _DAT_112713170,0);
  _objc_storeStrong(param_1 + _DAT_11271316c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713178,0);
  return;
}



/* Entry: 104dce458; end: 104dce503; -[SCPaymentsUtilsBrandInformation initWithCardBrandNames:cardNetwork:cardType:] */

undefined1 *
FUN_104dce458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4368;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dce504; end: 104dce50b; -[SCPaymentsUtilsBrandInformation cardBrandNames] */

undefined8 FUN_104dce504(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104dce50c; end: 104dce513; -[SCPaymentsUtilsBrandInformation cardNetwork] */

undefined8 FUN_104dce50c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104dce514; end: 104dce51b; -[SCPaymentsUtilsBrandInformation cardType] */

undefined8 FUN_104dce514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104dce51c; end: 104dce59f; -[SCPaymentsUtilsBrandInformation .cxx_destruct] */

void FUN_104dce51c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104dce5a0; end: 104dce9eb;  */

undefined * FUN_104dce5a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
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
  puVar2 = PTR_PTR_1126b0758;
  _objc_alloc();
  puVar4 = PTR_PTR_1126b06c0;
  puVar3 = PTR_PTR_1126b0750;
  func_0x00010bdc0f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32080(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcb40(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e3a0,5,puVar4);
  puVar5 = PTR_PTR_1126b0758;
  puStack_b0 = puVar2;
  _objc_alloc();
  puVar7 = PTR_PTR_1126b06c0;
  puVar6 = PTR_PTR_1126b0750;
  func_0x00010bdc0e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32080(puVar7,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcb40(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e3b8,1,puVar7);
  puVar8 = PTR_PTR_1126b0758;
  puStack_a8 = puVar5;
  _objc_alloc();
  puVar10 = PTR_PTR_1126b06c0;
  puVar9 = PTR_PTR_1126b0750;
  func_0x00010bdc0ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32080(puVar10,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcb40(puVar8,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e3d0,6,puVar10);
  puVar11 = PTR_PTR_1126b0758;
  puStack_a0 = puVar8;
  _objc_alloc();
  puVar13 = PTR_PTR_1126b06c0;
  puVar12 = PTR_PTR_1126b0750;
  func_0x00010bdc0f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32080(puVar13,param_2,puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcb40(puVar11,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e3e8,4,puVar13);
  puVar14 = PTR_PTR_1126b0758;
  puStack_98 = puVar11;
  _objc_alloc();
  puVar16 = PTR_PTR_1126b06c0;
  puVar15 = PTR_PTR_1126b0750;
  func_0x00010bdc0f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32080(puVar16,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcb40(puVar14,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e400,8,puVar16);
  puVar17 = PTR_PTR_1126b0758;
  puStack_90 = puVar14;
  _objc_alloc();
  puVar19 = PTR_PTR_1126b06c0;
  puVar18 = PTR_PTR_1126b0750;
  func_0x00010bdc0ec0(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32080(puVar19,param_2,puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcb40(puVar17,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e418,3,puVar19);
  puVar20 = PTR_PTR_1126b0758;
  puStack_88 = puVar17;
  _objc_alloc();
  puVar22 = PTR_PTR_1126b06c0;
  puVar21 = PTR_PTR_1126b0750;
  func_0x00010bdc0ea0(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32080(puVar22,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcb40(puVar20,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e430,2,puVar22);
  puVar23 = PTR_PTR_1126b0758;
  puStack_80 = puVar20;
  _objc_alloc();
  puVar25 = PTR_PTR_1126b06c0;
  puVar24 = PTR_PTR_1126b0750;
  func_0x00010bdc0f40(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32080(puVar25,param_2,puVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcb40(puVar23,param_2,&PTR__OBJC_CLASS___NSConstantArray_11117e448,9,puVar25);
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136b8c20;
  puRam00000001136b8c20 = puVar26;
  _objc_release(uVar1);
  _objc_release(puVar23);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar20);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar17);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar14);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar11);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010bf20e60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_104dcea28();
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 104dce9ec; end: 104dcea27;  */

undefined8 FUN_104dce9ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf20e60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_104dcea28();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104dcea28; end: 104dcebf7;  */

undefined1 * FUN_104dcea28(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  long lVar11;
  undefined1 *puVar12;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *puStack_470;
  undefined *puStack_468;
  undefined1 *puStack_460;
  undefined1 *puStack_458;
  undefined1 *puStack_450;
  undefined1 *puStack_448;
  undefined8 **ppuStack_440;
  code *pcStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3e8 [128];
  long lStack_368;
  undefined1 *puStack_360;
  long lStack_358;
  undefined1 *puStack_350;
  undefined1 *puStack_348;
  undefined1 *puStack_340;
  undefined1 *puStack_338;
  undefined1 *puStack_330;
  undefined1 *puStack_328;
  undefined1 **ppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_248;
  undefined1 *puStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar10 = param_1;
  func_0x000104dce54c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar10;
  func_0x00010bf52a60();
  puVar12 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    lVar11 = *plStack_1a0;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(puVar10);
        }
        unaff_x22 = *(undefined1 **)(lStack_1a8 + (long)puVar12 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        unaff_x23 = unaff_x22;
        func_0x00010bf31aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = unaff_x23;
        func_0x00010bf52a60();
        if (puVar2 != (undefined1 *)0x0) {
          unaff_x27 = *plStack_1e0;
          unaff_x24 = puVar2;
          do {
            unaff_x28 = (undefined1 *)0x0;
            do {
              if (*plStack_1e0 != unaff_x27) {
                _objc_enumerationMutation(unaff_x23);
              }
              uVar3 = *(ulong *)(lStack_1e8 + (long)unaff_x28 * 8);
              func_0x00010c0720c0();
              if ((uVar3 & 1) != 0) {
                puVar12 = unaff_x22;
                func_0x00010bf31e00();
                _objc_release(unaff_x23);
                goto LAB_104dceba8;
              }
              unaff_x28 = unaff_x28 + 1;
            } while (unaff_x24 != unaff_x28);
            unaff_x24 = unaff_x23;
            func_0x00010bf52a60();
          } while (unaff_x24 != (undefined1 *)0x0);
        }
        _objc_release(unaff_x23);
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar1);
      puVar1 = puVar10;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
    puVar12 = (undefined1 *)0x0;
  }
LAB_104dceba8:
  _objc_release(puVar10);
  puVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar12;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_104dcebf8;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  puVar2 = puVar1;
  puStack_240 = unaff_x28;
  lStack_238 = unaff_x27;
  puStack_230 = unaff_x24;
  puStack_228 = unaff_x23;
  puStack_220 = unaff_x22;
  puStack_218 = puVar12;
  puStack_210 = puVar10;
  puStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x000104dce54c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf52a60();
  if (puVar10 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*plStack_300;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_300 != unaff_x23) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x22 = *(undefined1 **)(lStack_308 + (long)unaff_x24 * 8);
        puVar12 = unaff_x22;
        func_0x00010bf31e00();
        if (puVar12 == puVar1) {
          puVar12 = unaff_x22;
          func_0x00010bf31aa0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar12;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          goto LAB_104dcecf8;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (puVar10 != unaff_x24);
      puVar10 = puVar2;
      func_0x00010bf52a60();
      puVar12 = (undefined1 *)0x0;
    } while (puVar10 != (undefined1 *)0x0);
  }
  puVar10 = (undefined1 *)0x0;
LAB_104dcecf8:
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
    ___stack_chk_fail();
    puVar8 = &uStack_430;
    uStack_318 = 0x104dced3c;
    lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    puVar4 = puVar1;
    puStack_360 = unaff_x28;
    lStack_358 = unaff_x27;
    puStack_350 = unaff_x24;
    puStack_348 = unaff_x23;
    puStack_340 = unaff_x22;
    puStack_338 = puVar12;
    puStack_330 = puVar10;
    puStack_328 = puVar2;
    ppuStack_320 = &puStack_200;
    func_0x000104dce54c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = auStack_3e8;
    uVar9 = 0x10;
    puVar10 = puVar4;
    func_0x00010bf52a60();
    if (puVar10 != (undefined1 *)0x0) {
      lVar11 = *plStack_420;
      puVar12 = puVar10;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_420 != lVar11) {
            _objc_enumerationMutation(puVar4);
          }
          unaff_x22 = *(undefined1 **)(lStack_428 + (long)puVar10 * 8);
          puVar5 = unaff_x22;
          func_0x00010bf31e00();
          if (puVar5 == puVar1) {
            puVar10 = unaff_x22;
            func_0x00010bf32060();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104dcee20;
          }
          puVar10 = puVar10 + 1;
        } while (puVar12 != puVar10);
        puVar2 = auStack_3e8;
        uVar9 = 0x10;
        puVar12 = puVar4;
        puVar8 = &uStack_430;
        func_0x00010bf52a60();
      } while (puVar12 != (undefined1 *)0x0);
    }
    puVar10 = (undefined1 *)0x0;
LAB_104dcee20:
    puVar1 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_368) {
      ___stack_chk_fail();
      ppuVar6 = &puStack_470;
      pcStack_438 = FUN_104dcee64;
      puStack_460 = unaff_x22;
      puStack_458 = puVar12;
      puStack_450 = puVar10;
      puStack_448 = puVar4;
      ppuStack_440 = &ppuStack_320;
      _objc_retain(puVar8);
      _objc_retain(puVar2);
      _objc_retain(uVar9);
      puStack_468 = PTR_PTR_1126e4370;
      puStack_470 = puVar1;
      _objc_msgSendSuper2(&puStack_470,PTR_s_init_1125d9248);
      if (ppuVar6 != (undefined1 **)0x0) {
        _objc_retain(puVar8);
        uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
        *(undefined8 **)((long)ppuVar6 + 8) = puVar8;
        _objc_release(uVar7);
        _objc_storeWeak((undefined1 *)((long)ppuVar6 + 0x10),puVar2);
        _objc_storeWeak((undefined1 *)((long)ppuVar6 + 0x18),uVar9);
      }
      _objc_release(uVar9);
      _objc_release(puVar2);
      _objc_release(puVar8);
      return (undefined1 *)ppuVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 104dcebf8; end: 104dcee63;  */

undefined1 * FUN_104dcebf8(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar1 = param_1;
  func_0x000104dce54c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf52a60();
  if (puVar8 != (undefined1 *)0x0) {
    lVar9 = *plStack_110;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x22 = *(undefined1 **)(lStack_118 + (long)puVar10 * 8);
        puVar2 = unaff_x22;
        func_0x00010bf31e00();
        if (puVar2 == param_1) {
          unaff_x21 = unaff_x22;
          func_0x00010bf31aa0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = unaff_x21;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x21);
          goto LAB_104dcecf8;
        }
        puVar10 = puVar10 + 1;
      } while (puVar8 != puVar10);
      puVar8 = puVar1;
      func_0x00010bf52a60();
      unaff_x21 = (undefined1 *)0x0;
    } while (puVar8 != (undefined1 *)0x0);
  }
  puVar8 = (undefined1 *)0x0;
LAB_104dcecf8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = &uStack_240;
    uStack_128 = 0x104dced3c;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puVar2 = puVar1;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000104dce54c();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = auStack_1f8;
    uVar7 = 0x10;
    puVar8 = puVar2;
    func_0x00010bf52a60();
    if (puVar8 != (undefined1 *)0x0) {
      lVar9 = *plStack_230;
      unaff_x21 = puVar8;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_230 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x22 = *(undefined1 **)(lStack_238 + (long)puVar8 * 8);
          puVar3 = unaff_x22;
          func_0x00010bf31e00();
          if (puVar3 == puVar1) {
            puVar8 = unaff_x22;
            func_0x00010bf32060();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104dcee20;
          }
          puVar8 = puVar8 + 1;
        } while (unaff_x21 != puVar8);
        puVar10 = auStack_1f8;
        uVar7 = 0x10;
        unaff_x21 = puVar2;
        puVar6 = &uStack_240;
        func_0x00010bf52a60();
      } while (unaff_x21 != (undefined1 *)0x0);
    }
    puVar8 = (undefined1 *)0x0;
LAB_104dcee20:
    puVar1 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      ppuVar4 = &puStack_280;
      pcStack_248 = FUN_104dcee64;
      puStack_270 = unaff_x22;
      puStack_268 = unaff_x21;
      puStack_260 = puVar8;
      puStack_258 = puVar2;
      ppuStack_250 = &puStack_130;
      _objc_retain(puVar6);
      _objc_retain(puVar10);
      _objc_retain(uVar7);
      puStack_278 = PTR_PTR_1126e4370;
      puStack_280 = puVar1;
      _objc_msgSendSuper2(&puStack_280,PTR_s_init_1125d9248);
      if (ppuVar4 != (undefined1 **)0x0) {
        _objc_retain(puVar6);
        uVar5 = *(undefined8 *)((long)ppuVar4 + 8);
        *(undefined8 **)((long)ppuVar4 + 8) = puVar6;
        _objc_release(uVar5);
        _objc_storeWeak((undefined1 *)((long)ppuVar4 + 0x10),puVar10);
        _objc_storeWeak((undefined1 *)((long)ppuVar4 + 0x18),uVar7);
      }
      _objc_release(uVar7);
      _objc_release(puVar10);
      _objc_release(puVar6);
      return (undefined1 *)ppuVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return puVar8;
}



/* Entry: 104dcee64; end: 104dcef1f; -[SCCommercePaymentSettingsScope initWithUiContainer:logger:delegate:] */

undefined1 *
FUN_104dcee64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4370;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dcef20; end: 104dcef27; -[SCCommercePaymentSettingsScope uiContainer] */

undefined8 FUN_104dcef20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104dcef28; end: 104dcef3f; -[SCCommercePaymentSettingsScope logger] */

void FUN_104dcef28(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dcef40; end: 104dcef57; -[SCCommercePaymentSettingsScope delegate] */

void FUN_104dcef40(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dcef58; end: 104dcef8b; -[SCCommercePaymentSettingsScope .cxx_destruct] */

void FUN_104dcef58(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104dcef8c; end: 104dcefff; -[SCPaymentsOrderServices initWithOrderServiceProvider:] */

undefined1 * FUN_104dcef8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4378;
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



/* Entry: 104dcf000; end: 104dcf007; -[SCPaymentsOrderServices orderServiceProvider] */

undefined8 FUN_104dcf000(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104dcf008; end: 104dcf013; -[SCPaymentsOrderServices .cxx_destruct] */

void FUN_104dcf008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104dcf014; end: 104dcf787; -[SCCommerceProductCatalogRouter initWithUIContainer:sigContainer:showcaseServices:configProvider:imageSourceProvider:imageFetchingService:commerceOrigin:grapheneRegistry:heroImage:resultTitle:favoritesCoordinator:favoritesCatalogScopeLauncher:notificationPool:commerceIconProvider:compositeImageFetcher:userPreferences:featureSettingsService:sendToScopeLauncher:sendToScopeServices:cartCoordinator:reviewOrderScopeExposer:fitFinderCellScopeExposer:reportProductScopeExposer:textSender:conversationDestinationParser:userId:resourceDownloader:adConfigProvider:userNetworkServices:shoppingLensFeatureLauncher:shoppingLensLauncherScopeServices:multiMerchantEnabled:webBrowsingScopeExposer:] */

long FUN_104dcf014(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain();
  _objc_retain(param_30);
  _objc_retain();
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_36);
  if (param_1 != 0) {
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_5;
    _objc_release(uVar1);
    _objc_retain();
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = param_6;
    _objc_release(uVar1);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_7;
    _objc_release(uVar1);
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_8;
    _objc_release(uVar1);
    _objc_retain(param_9);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_9;
    _objc_release(uVar1);
    _objc_retain(param_31);
    uVar1 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = param_31;
    _objc_release(uVar1);
    _objc_retain(param_10);
    uVar1 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = param_10;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0490;
    _objc_alloc();
    uVar1 = param_10;
    func_0x00010c269d40(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0184a0();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_retain(param_11);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = param_11;
    _objc_release(uVar1);
    _objc_retain(param_12);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_12;
    _objc_release(uVar1);
    _objc_retain(param_13);
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = param_13;
    _objc_release(uVar1);
    _objc_retain(param_14);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = param_14;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0540;
    _objc_alloc();
    func_0x00010c030060();
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    FUN_104dd8fa4();
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_retain(param_16);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = param_16;
    _objc_release(uVar1);
    _objc_retain(param_17);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = param_17;
    _objc_release(uVar1);
    _objc_retain(param_20);
    uVar1 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = param_20;
    _objc_release(uVar1);
    _objc_retain(param_21);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = param_21;
    _objc_release(uVar1);
    _objc_retain(param_32);
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = param_32;
    _objc_release(uVar1);
    _objc_retain(param_33);
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = param_33;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0760;
    _objc_alloc();
    func_0x00010c051a40();
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined **)(param_1 + 0xe0) = puVar2;
    _objc_release(uVar1);
    _objc_retain(param_22);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = param_22;
    _objc_release(uVar1);
    _objc_retain(param_23);
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = param_23;
    _objc_release(uVar1);
    _objc_retain(param_24);
    uVar1 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = param_24;
    _objc_release(uVar1);
    _objc_retain(param_25);
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = param_25;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b0768;
    _objc_alloc();
    func_0x00010c012180();
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined **)(param_1 + 0xb0) = puVar2;
    _objc_release(uVar1);
    _objc_retain(param_29);
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = param_29;
    _objc_release(uVar1);
    _objc_retain(param_30);
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = param_30;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x18) = 0;
    _objc_retain(param_28);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_28;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x28) = param_34;
    _objc_retain(param_36);
    uVar1 = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = param_36;
    _objc_release(uVar1);
    if (param_4 == 0) {
      puVar2 = PTR_PTR_1126b0778;
      _objc_alloc();
      func_0x00010c0567c0();
    }
    else {
      puVar2 = PTR_PTR_1126b0770;
      _objc_alloc();
      func_0x00010c041080();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
    _objc_release(uVar1);
    _objc_initWeak(auStack_70,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104dcf788;
    puStack_80 = &UNK_1108434b0;
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x0001000d76cc("APPSTORE",&puStack_98);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_36);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 104dcf788; end: 104dcf7b3;  */

void FUN_104dcf788(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd07c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dcf7b4; end: 104dcf90b; -[SCCommerceProductCatalogRouter presentShoppingCart:] */

void FUN_104dcf7b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b0780;
      _objc_alloc(PTR_PTR_1126b0780);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bef1360(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ab20(puVar2,param_2,uVar3);
      _objc_release(uVar3);
      func_0x00010c219e20(puVar2,param_2,param_1);
      lVar1 = param_1;
      func_0x00010bdf6e20();
      if (lVar1 != 0x2c) {
        func_0x00010bdf6e20();
      }
      puVar4 = PTR_PTR_1126b0788;
      _objc_alloc(PTR_PTR_1126b0788);
      func_0x00010bffce60();
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c24d100(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf60ba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be56be0(param_1,param_2,uVar3,0x27);
      _objc_release(uVar3);
      _objc_release(uVar5);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xf0),param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


