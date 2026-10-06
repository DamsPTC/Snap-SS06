/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d68978; end: 106d68987; +[SCCCommerceProductAttachment valdiMarshallableObjectDescriptor] */

void FUN_106d68978(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapItemId_11097a3d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106d68988; end: 106d689bb; -[SCCCommerceProductSelectionContext init] */

void FUN_106d68988(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6c30;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106d689bc; end: 106d689db; +[SCCCommerceProductSelectionContext valdiMarshallableObjectDescriptor] */

void FUN_106d689bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11097a450;
  param_1[1] = &PTR_DAT_11097a510;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106d689dc; end: 106d68a13; -[SCCCommerceProductSelectionViewModel initWithAppVersion:] */

void FUN_106d689dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6c38;
  uStack_20 = param_1;
  func_0x000106d68a7c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106d68a14; end: 106d68a23; +[SCCCommerceProductSelectionViewModel valdiMarshallableObjectDescriptor] */

void FUN_106d68a14(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_appVersion_11097a550;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106d68a24; end: 106d68a5f; -[SCCCommerceStoreAttachment initWithStoreId:displayName:actionId:] */

void FUN_106d68a24(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6c40;
  uStack_20 = param_1;
  func_0x000106d68a7c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 106d68a60; end: 106d68a83; +[SCCCommerceStoreAttachment valdiMarshallableObjectDescriptor] */

void FUN_106d68a60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_storeId_11097a580;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106d68a84; end: 106d68b17; -[SCCommerceIconBarButtonItem initWithTarget:action:] */

undefined1 *
FUN_106d68a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puStack_38 = PTR_PTR_1126f6c48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithImage_style_target_actio_112534eb8,puVar1,0,param_3,
                      param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 106d68b18; end: 106d68bd7; -[SCCommerceIconBarButtonItem populateWithIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d68b18(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d7e0);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfe55a0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106d68bd8; end: 106d68c1f;  */

void FUN_106d68bd8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee48a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d68c20; end: 106d68d07; -[SCCommerceIconBarButtonItem _updateWithIconImage:] */

void FUN_106d68c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106d68cd4;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106d68d08; end: 106d68d17; -[SCCommerceIconBarButtonItem iconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d68d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d7e0);
}



/* Entry: 106d68d18; end: 106d68d57; -[SCCommerceIconBarButtonItem setIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d68d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d7e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d68d58; end: 106d68d6b; -[SCCommerceIconBarButtonItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d68d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d7e0,0);
  return;
}



/* Entry: 106d68d6c; end: 106d68dbb; -[SCCommerceCatalogPaginationErrorCollectionViewCell initWithFrame:] */

undefined1 * FUN_106d68d6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6c50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d68dbc; end: 106d68e77; -[SCCommerceCatalogPaginationErrorCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d68dbc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b02e0;
  _objc_opt_class(PTR_PTR_1126b02e0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275d7e4);
  *(ulong *)(param_1 + _DAT_11275d7e4) = uVar3;
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010bf99020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275d7e8));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d68e78; end: 106d68fcf; +[SCCommerceCatalogPaginationErrorCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_106d68e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b02e0;
  _objc_opt_class(PTR_PTR_1126b02e0);
  uVar3 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf99020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x7fefffffffffffff;
  uVar6 = param_1;
  func_0x00010bf20ba0(param_1,0x7fefffffffffffff,uVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    auVar8._8_8_ = param_4 + 38.0;
    auVar8._0_8_ = param_1;
    return auVar8;
  }
  ___stack_chk_fail();
  func_0x00010beac680();
                    /* WARNING: Could not recover jumptable at 0x00010beaf750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_7,PTR_s__setupRetryButton_112589778);
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar6;
  return auVar9;
}



/* Entry: 106d68fd0; end: 106d68ff3; -[SCCommerceCatalogPaginationErrorCollectionViewCell _setup] */

void FUN_106d68fd0(undefined8 param_1)

{
  func_0x00010beac680();
                    /* WARNING: Could not recover jumptable at 0x00010beaf750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupRetryButton_112589778);
  return;
}



/* Entry: 106d68ff4; end: 106d6928f; -[SCCommerceCatalogPaginationErrorCollectionViewCell _setupErrorTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d68ff4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
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
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar25 = (long)_DAT_11275d7e8;
  uVar23 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar23);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar25));
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar25));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar25));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25));
  lVar24 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar24);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(lVar25);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar23);
  _objc_release(lVar3);
  _objc_release(lVar24);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar11 = &PTR____CFConstantStringClassReference_110db3738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1);
  _objc_release(puVar10);
  _objc_release(ppuVar11);
  puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1);
  func_0x00010befbd60(puVar1);
  uVar23 = uVar2;
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar23);
  puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar13 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar23;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493c0(0x401e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bf49420(0x4056c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010bf49420(0x403e800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar10);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + _DAT_11275d7ec;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf7d360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d69290; end: 106d695b3; -[SCCommerceCatalogPaginationErrorCollectionViewCell _setupRetryButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d69290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar2 = &PTR____CFConstantStringClassReference_110db3738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1);
  func_0x00010befbd60(puVar1);
  uVar5 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0x401e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf49420(0x4056c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf49420(0x403e800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + _DAT_11275d7ec;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf7d360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d695b4; end: 106d695ef; -[SCCommerceCatalogPaginationErrorCollectionViewCell _retryButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d695b4(long param_1)

{
  param_1 = param_1 + _DAT_11275d7ec;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d695f0; end: 106d695ff; -[SCCommerceCatalogPaginationErrorCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d695f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d7e4);
}



/* Entry: 106d69600; end: 106d6961f; -[SCCommerceCatalogPaginationErrorCollectionViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d69600(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d7ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d69620; end: 106d69633; -[SCCommerceCatalogPaginationErrorCollectionViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d69620(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275d7ec,param_3);
  return;
}



/* Entry: 106d69634; end: 106d6967f; -[SCCommerceCatalogPaginationErrorCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d69634(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275d7ec);
  _objc_storeStrong(param_1 + _DAT_11275d7e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d7e8,0);
  return;
}



/* Entry: 106d69680; end: 106d696cf; -[SCCommerceCatalogPaginationLoadingCollectionViewCell initWithFrame:] */

undefined1 * FUN_106d69680(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6c58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d696d0; end: 106d69727; -[SCCommerceCatalogPaginationLoadingCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d696d0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6c58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  lVar1 = (long)_DAT_11275d7f0;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 106d69728; end: 106d69733; +[SCCommerceCatalogPaginationLoadingCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_106d69728(void)

{
  return;
}



/* Entry: 106d69734; end: 106d69943; -[SCCommerceCatalogPaginationLoadingCollectionViewCell _setup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106d69734(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar11 = (long)_DAT_11275d7f0;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11),param_2,0);
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar11),param_2,1);
  lVar9 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar9);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar9;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_78 = uVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(uVar2);
  lVar9 = *(long *)(param_1 + lVar11);
  func_0x00010c24dbc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar9;
  }
  ___stack_chk_fail();
  return *(long *)(lVar9 + _DAT_11275d7f4);
}



/* Entry: 106d69944; end: 106d69953; -[SCCommerceCatalogPaginationLoadingCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d69944(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d7f4);
}



/* Entry: 106d69954; end: 106d69993; -[SCCommerceCatalogPaginationLoadingCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d69954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d7f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d69994; end: 106d69a57; -[SCCommerceCatalogPaginationLoadingCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d69994(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d7f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d7f0,0);
  return;
}



/* Entry: 106d69a58; end: 106d69bbb; +[SCCommerceCatalogProductCell sizeWithViewModel:forWidth:] */

undefined1  [16] FUN_106d69a58(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  lVar1 = param_4;
  dVar5 = param_1;
  _objc_retain(param_4);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  dVar3 = dVar5;
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  dVar4 = dVar3;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c2610e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    dVar4 = -2.0;
  }
  else {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    _objc_release(lVar2);
    _objc_release(lVar1);
    dVar4 = dVar4 + 2.0;
  }
  dVar4 = dVar5 * 2.0 + 8.0 + dVar3 + dVar4;
  dVar5 = param_1 + dVar4;
  func_0x00010b816218(dVar4);
  auVar6._8_8_ = (double)(long)(dVar4 * dVar5) / dVar4;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 106d69bbc; end: 106d69c0b; -[SCCommerceCatalogProductCell initWithFrame:] */

undefined1 * FUN_106d69bbc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6c60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d69c0c; end: 106d69c53; -[SCCommerceCatalogProductCell prepareForReuse] */

void FUN_106d69c0c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6c60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010be92620(param_1);
  return;
}



/* Entry: 106d69c54; end: 106d6a383; -[SCCommerceCatalogProductCell populateWithViewModel:imageFetchingService:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d69c54(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar9 = param_4;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_2 + _DAT_11275d7f8);
  *(long *)(param_2 + _DAT_11275d7f8) = lVar9;
  _objc_release(uVar8);
  if (param_4 != 0) {
    lVar9 = param_4;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c08fa60();
    if (lVar10 == 0) {
      _objc_release(lVar9);
    }
    else {
      lVar10 = param_4;
      func_0x00010bfe8f00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar11;
      func_0x00010c08fa60();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      if (lVar1 != 0) {
        puVar2 = PTR_PTR_1126b08a8;
        _objc_alloc();
        puVar3 = PTR_PTR_1126b08b0;
        lVar9 = param_4;
        func_0x00010bfe8f00(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf33760(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c003ac0();
        _objc_release(puVar3);
        _objc_release(lVar10);
        _objc_release(lVar9);
        puVar4 = PTR_PTR_1126aebf0;
        _objc_alloc(PTR_PTR_1126aebf0);
        lVar9 = param_2;
        _objc_opt_class(param_2);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c011b80(puVar4);
        _objc_release(lVar9);
        puVar5 = PTR_PTR_1126b08b8;
        _objc_alloc();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar9 = param_4;
        func_0x00010bfe8f00(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc2580(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0295e0();
        _objc_release(puVar3);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _CACurrentMediaTime();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar9 = param_4;
        func_0x00010bfe8f00();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be529e0(param_2);
        _objc_release(puVar3);
        _objc_release(puVar6);
        _objc_release(lVar10);
        _objc_release(lVar9);
        if (param_5 != 0) {
          _objc_initWeak(auStack_78,param_2);
          puVar3 = PTR_PTR_1126b85a0;
          puVar6 = puVar2;
          func_0x00010bf220e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8b920(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126b85a8;
          _objc_alloc(PTR_PTR_1126b85a8);
          puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c01cf00(puVar6);
          _objc_release(puVar7);
          _objc_copyWeak(auStack_88,auStack_78);
          _objc_retain(param_4);
          lVar9 = param_5;
          uStack_80 = param_1;
          func_0x00010bfa7900();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_2 + _DAT_11275d7fc);
          *(long *)(param_2 + _DAT_11275d7fc) = lVar9;
          _objc_release(uVar8);
          _objc_release(param_4);
          _objc_destroyWeak(auStack_88);
          _objc_release(puVar6);
          _objc_release(puVar3);
          _objc_destroyWeak(auStack_78);
        }
        lVar10 = (long)_DAT_11275d800;
        func_0x00010c1b4520(*(undefined8 *)(param_2 + lVar10));
        lVar9 = param_4;
        func_0x00010c2716a0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_2 + lVar10);
        func_0x00010c087500(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(uVar8);
        _objc_release(lVar9);
        lVar11 = (long)_DAT_11275d804;
        func_0x00010c1b4520(*(undefined8 *)(param_2 + lVar11));
        func_0x00010c07eea0(param_4);
        func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar11));
        lVar9 = param_4;
        func_0x00010c25ccc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_2;
        func_0x00010bec54a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_2 + lVar11);
        func_0x00010c087500(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b720();
        _objc_release(uVar8);
        _objc_release(lVar10);
        _objc_release(lVar9);
        func_0x00010c07eea0(param_4);
        lVar10 = (long)_DAT_11275d808;
        func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar10));
        lVar9 = param_4;
        func_0x00010c112a80(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_2 + lVar10));
        _objc_release(lVar9);
        lVar9 = param_2;
        func_0x00010be80180(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)(param_2 + lVar10));
        _objc_release(lVar9);
        func_0x00010c07eea0(param_4);
        func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11275d80c));
        lVar9 = param_4;
        func_0x00010c2610e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        lVar10 = (long)_DAT_11275d810;
        func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar10));
        _objc_release(lVar9);
        lVar9 = param_4;
        func_0x00010c2610e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_2 + lVar10));
        _objc_release(lVar9);
        func_0x00010c06e7c0(param_4);
        func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11275d814));
        func_0x00010bed9680(param_2);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_106d6a318;
      }
    }
  }
  lVar9 = (long)_DAT_11275d800;
  func_0x00010c1b4520(*(undefined8 *)(param_2 + lVar9));
  uVar8 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar8);
  lVar9 = (long)_DAT_11275d804;
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar9));
  func_0x00010c1b4520(*(undefined8 *)(param_2 + lVar9));
  uVar8 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c087500(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar8);
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11275d808));
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11275d80c));
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11275d810));
LAB_106d6a318:
  func_0x00010c1cbe20(param_2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106d6a384; end: 106d6a4b7;  */

void FUN_106d6a384(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106d6a4b8;
  puStack_70 = &UNK_11097a5f8;
  _objc_copyWeak(auStack_60,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  _objc_copyWeak(auStack_98,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_90 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_2);
  return;
}



/* Entry: 106d6a4b8; end: 106d6a57f;  */

void FUN_106d6a4b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106d6a580;
  puStack_58 = &UNK_1108502a8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106d6a580; end: 106d6a623;  */

void FUN_106d6a580(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe8f00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36fa0(*(undefined8 *)(param_1 + 0x38),lVar1,param_2,uVar2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d6a624; end: 106d6a76b;  */

void FUN_106d6a624(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106d6a6ec;
  puStack_58 = &UNK_1108502a8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  _objc_retain(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106d6a76c; end: 106d6b9bf; -[SCCommerceCatalogProductCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6a76c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  lVar24 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar24);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  dVar29 = *(double *)PTR__CGRectZero_110347608;
  uVar30 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar22 = (long)_DAT_11275d818;
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar3;
  _objc_release(uVar21);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar22));
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08c0e0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar21);
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08c0e0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar21);
  lVar24 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar24);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar27;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar23;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar12);
  _objc_release(lVar26);
  _objc_release(lVar23);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(lVar8);
  _objc_release(lVar27);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(uVar6);
  _objc_release(uVar21);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b06c8;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar24 = (long)_DAT_11275d81c;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar3;
  _objc_release(uVar21);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar24));
  _objc_release(puVar3);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar24));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar11;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar12;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar21);
  _objc_release(uVar12);
  _objc_release(uVar17);
  _objc_release(uVar11);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar24));
  puVar13 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c1a8540(*(undefined8 *)(param_1 + lVar24));
  puVar3 = PTR_PTR_1126b0880;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar25 = (long)_DAT_11275d820;
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar3;
  _objc_release(uVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25));
  lVar24 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar24);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar21);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  func_0x00010c182b00(*(undefined8 *)(param_1 + lVar25));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar21);
  _objc_release(puVar3);
  uVar17 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar17;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar21);
  _objc_release(uVar17);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar25));
  puVar18 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar10 = puVar18;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010bf338e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  lVar23 = (long)_DAT_11275d814;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar18;
  _objc_release(uVar21);
  _objc_release(puVar3);
  _objc_release(puVar10);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar23));
  lVar24 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar24);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bf493c0(0xc01e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar25;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010bf493c0(0x401e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar6;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar7;
  func_0x00010bf49420(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar21);
  _objc_release(uVar7);
  _objc_release(uVar17);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(lVar8);
  _objc_release(lVar27);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar23 = (long)_DAT_11275d824;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar3;
  _objc_release(uVar21);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c207380(0x4000000000000000,*(undefined8 *)(param_1 + lVar23));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar26 = (long)_DAT_11275d828;
  uVar21 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar3;
  _objc_release(uVar21);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar26));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar26));
  func_0x00010c207380(0x4018000000000000,*(undefined8 *)(param_1 + lVar26));
  lVar24 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar24);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar26));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar12;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar25;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar26);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar11);
  _objc_release(lVar27);
  _objc_release(lVar8);
  _objc_release(uVar6);
  _objc_release(uVar21);
  _objc_release(lVar24);
  _objc_release(lVar25);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(uVar12);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar26));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar26));
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar27 = (long)_DAT_11275d82c;
  uVar21 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar3;
  _objc_release(uVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar27));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar27));
  func_0x00010c207380(0x4020000000000000,*(undefined8 *)(param_1 + lVar27));
  puVar3 = PTR_PTR_1126b0888;
  _objc_alloc();
  dVar28 = dVar29;
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar24 = (long)_DAT_11275d800;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar3;
  _objc_release(uVar21);
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c087500(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar21);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar21);
  _objc_release(puVar3);
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar21);
  uVar17 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  _objc_release(uVar17);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar17;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(uVar21);
  _objc_release(uVar17);
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar24));
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar24));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar11 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar11;
  func_0x00010bf494e0(dVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar12;
  func_0x00010bf49580(dVar28 + dVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar21);
  _objc_release(uVar12);
  _objc_release(uVar17);
  _objc_release(uVar11);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar25 = (long)_DAT_11275d808;
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar3;
  _objc_release(uVar21);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar25));
  lVar24 = param_1;
  func_0x00010be80180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar25));
  _objc_release(lVar24);
  func_0x00010c165e20(*(undefined8 *)(param_1 + lVar25));
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar24 = (long)_DAT_11275d80c;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar3;
  _objc_release(uVar21);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar24));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar24));
  _objc_release(puVar3);
  ppuVar19 = &PTR____CFConstantStringClassReference_110db3698;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3698,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar24));
  _objc_release(ppuVar19);
  puVar3 = PTR_PTR_1126b0888;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar24 = (long)_DAT_11275d804;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar3;
  _objc_release(uVar21);
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar21);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar21);
  _objc_release(puVar3);
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c087500(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c165e20();
  _objc_release(uVar21);
  puVar3 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(dVar29,uVar30,uVar31,uVar32);
  lVar24 = (long)_DAT_11275d810;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar3;
  _objc_release(uVar21);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar24));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar24));
  _objc_release(puVar3);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar24));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar27));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar27));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar27));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar23));
  uVar21 = 0;
  func_0x00010c103f20(param_1);
  _objc_release(puVar13);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar21);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  _objc_release(uVar21);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
    ___stack_chk_fail();
    iVar1 = (int)*(undefined8 *)(puVar3 + _DAT_11275d7f8);
    func_0x00010c07eea0();
    if (iVar1 == 0) {
      func_0x00010c25ccc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d6b9c0; end: 106d6bb1f; -[SCCommerceCatalogProductCell _strikethroughText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6b9c0(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  uStack_78 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_60 = puVar4;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_110345838;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c90d0;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&uStack_78,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3,param_2,ppuVar1,puVar6);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar8 = (long)_DAT_11275d7f8;
    iVar2 = (int)*(undefined8 *)(puVar4 + lVar8);
    func_0x00010c07eea0();
    if (iVar2 == 0) {
      lVar8 = *(long *)(puVar4 + lVar8);
      func_0x00010c25ccc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar8 == 0) {
        uVar7 = 0xc6;
      }
      else {
        uVar7 = 0xc2;
      }
    }
    else {
      uVar7 = 0xbf;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d6bb20; end: 106d6bb9b; -[SCCommerceCatalogProductCell _priceColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6bb20(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11275d7f8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c07eea0();
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010c25ccc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      uVar2 = 0xc6;
    }
    else {
      uVar2 = 0xc2;
    }
  }
  else {
    uVar2 = 0xbf;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d6bb9c; end: 106d6bc27; -[SCCommerceCatalogProductCell _resetShimmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6bb9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d818;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  lVar2 = (long)_DAT_11275d820;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d830);
  *(undefined8 *)(param_1 + _DAT_11275d830) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275d7fc;
  uVar1 = 0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf2dba0();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6bc28; end: 106d6bc4f; -[SCCommerceCatalogProductCell _resetCell] */

void FUN_106d6bc28(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bed9680(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be93b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetShimmer_112582870);
  return;
}



/* Entry: 106d6bc50; end: 106d6bd37; -[SCCommerceCatalogProductCell _loadImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6bc50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d7f8);
  _objc_retain(param_3);
  func_0x00010bf4cbe0(uVar2);
  lVar3 = (long)_DAT_11275d818;
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  lVar3 = (long)_DAT_11275d820;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d830);
  *(undefined8 *)(param_1 + _DAT_11275d830) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d7fc);
  *(undefined8 *)(param_1 + _DAT_11275d7fc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d6bd38; end: 106d6bec3; -[SCCommerceCatalogProductCell _showImageError:forURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6bd38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275d818;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c182220(uVar3,param_2,4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf14aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  lVar4 = (long)_DAT_11275d820;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar4),param_2,0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275d830);
  *(undefined8 *)(param_1 + _DAT_11275d830) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275d7fc);
  *(undefined8 *)(param_1 + _DAT_11275d7fc) = 0;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e85958);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010be529e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106d6bec4; end: 106d6bf63; -[SCCommerceCatalogProductCell _updateIconsWithIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6bec4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11275d81c;
  func_0x00010c1a97a0(*(undefined8 *)(param_1 + lVar3));
  lVar1 = *(long *)(param_1 + _DAT_11275d7f8);
  func_0x00010bfa11a0();
  if (lVar1 - 1U < 4) {
    puVar2 = (&PTR_PTR_11097a628)[lVar1 - 1U];
    if (param_3 != 0) {
      func_0x00010c103dc0(*(undefined8 *)(param_1 + lVar3));
    }
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c161030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setAccessibilityLabel__112635e28,puVar2);
  return;
}



/* Entry: 106d6bf64; end: 106d6c0df; -[SCCommerceCatalogProductCell _favoritesHeartButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6bf64(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (long)_DAT_11275d834;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    lVar8 = (long)_DAT_11275d7f8;
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x00010bfa11a0();
    if (lVar2 == 2) {
      bVar1 = false;
      uVar6 = 4;
    }
    else {
      lVar2 = *(long *)(param_1 + lVar8);
      func_0x00010bfa11a0();
      bVar1 = lVar2 != 1;
      uVar6 = 0;
      if (!bVar1) {
        uVar6 = 3;
      }
    }
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c115e60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11275d818);
    func_0x00010bfe6ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa11a0(*(undefined8 *)(param_1 + lVar8));
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c278ec0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa13c0(lVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar7);
    if (!bVar1) {
      lVar7 = (long)_DAT_11275d81c;
      lVar2 = *(long *)(param_1 + lVar7);
      func_0x00010bfe5980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c103dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + lVar7),PTR_s_populateWithIcon__11261e990,uVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 106d6c0e0; end: 106d6c293; -[SCCommerceCatalogProductCell _imageFetchCompleted:imageURL:error:startTimeMilliseconds:] */

void FUN_106d6c0e0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar6 - param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110db4418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be529e0(param_2,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_6 == 0) {
    uVar4 = param_4;
    _UIImageJPEGRepresentation(0x3ff0000000000000,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    func_0x00010c0df840(puVar1,param_3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_3,&PTR____CFConstantStringClassReference_110db4438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be529e0(param_2,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(uVar4);
    func_0x00010be4d8a0(param_2,param_3,param_4);
  }
  else {
    func_0x00010beb9640(param_2,param_3,param_6,param_5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d6c294; end: 106d6c297; -[SCCommerceCatalogProductCell _logEntry:] */

void FUN_106d6c294(void)

{
  return;
}



/* Entry: 106d6c298; end: 106d6c29b; -[SCCommerceCatalogProductCell _logError:] */

void FUN_106d6c298(void)

{
  return;
}



/* Entry: 106d6c29c; end: 106d6c2bb; -[SCCommerceCatalogProductCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c29c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275d834);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d6c2bc; end: 106d6c2cf; -[SCCommerceCatalogProductCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275d834,param_3);
  return;
}



/* Entry: 106d6c2d0; end: 106d6c2df; -[SCCommerceCatalogProductCell mainHorizontalStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c2d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d828);
}



/* Entry: 106d6c2e0; end: 106d6c31f; -[SCCommerceCatalogProductCell setMainHorizontalStack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d828;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c320; end: 106d6c32f; -[SCCommerceCatalogProductCell priceHorizontalStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d82c);
}



/* Entry: 106d6c330; end: 106d6c36f; -[SCCommerceCatalogProductCell setPriceHorizontalStack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c330(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d82c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c370; end: 106d6c37f; -[SCCommerceCatalogProductCell labelsVerticalStack] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c370(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d824);
}



/* Entry: 106d6c380; end: 106d6c3bf; -[SCCommerceCatalogProductCell setLabelsVerticalStack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d824;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c3c0; end: 106d6c3cf; -[SCCommerceCatalogProductCell titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c3c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d800);
}



/* Entry: 106d6c3d0; end: 106d6c40f; -[SCCommerceCatalogProductCell setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d800;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c410; end: 106d6c41f; -[SCCommerceCatalogProductCell productPriceLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c410(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d808);
}



/* Entry: 106d6c420; end: 106d6c45f; -[SCCommerceCatalogProductCell setProductPriceLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c420(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d808;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c460; end: 106d6c46f; -[SCCommerceCatalogProductCell strikeThroughPriceLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c460(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d804);
}



/* Entry: 106d6c470; end: 106d6c4af; -[SCCommerceCatalogProductCell setStrikeThroughPriceLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d804;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c4b0; end: 106d6c4bf; -[SCCommerceCatalogProductCell outOfStockLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c4b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d80c);
}



/* Entry: 106d6c4c0; end: 106d6c4ff; -[SCCommerceCatalogProductCell setOutOfStockLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d80c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c500; end: 106d6c50f; -[SCCommerceCatalogProductCell subtitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c500(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d810);
}



/* Entry: 106d6c510; end: 106d6c54f; -[SCCommerceCatalogProductCell setSubtitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d810;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c550; end: 106d6c55f; -[SCCommerceCatalogProductCell checkmarkView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d814);
}



/* Entry: 106d6c560; end: 106d6c59f; -[SCCommerceCatalogProductCell setCheckmarkView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d814;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c5a0; end: 106d6c5af; -[SCCommerceCatalogProductCell imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c5a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d818);
}



/* Entry: 106d6c5b0; end: 106d6c5ef; -[SCCommerceCatalogProductCell setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d818;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c5f0; end: 106d6c5ff; -[SCCommerceCatalogProductCell shimmeringView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c5f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d820);
}



/* Entry: 106d6c600; end: 106d6c63f; -[SCCommerceCatalogProductCell setShimmeringView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d820;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c640; end: 106d6c64f; -[SCCommerceCatalogProductCell imageCancelable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c640(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d7fc);
}



/* Entry: 106d6c650; end: 106d6c68f; -[SCCommerceCatalogProductCell setImageCancelable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c650(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d7fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c690; end: 106d6c69f; -[SCCommerceCatalogProductCell imageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c690(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d830);
}



/* Entry: 106d6c6a0; end: 106d6c6df; -[SCCommerceCatalogProductCell setImageProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c6a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d830;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c6e0; end: 106d6c6ef; -[SCCommerceCatalogProductCell favoritesHeartView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c6e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d81c);
}



/* Entry: 106d6c6f0; end: 106d6c72f; -[SCCommerceCatalogProductCell setFavoritesHeartView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d81c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c730; end: 106d6c73f; -[SCCommerceCatalogProductCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d6c730(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d7f8);
}



/* Entry: 106d6c740; end: 106d6c77f; -[SCCommerceCatalogProductCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d7f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6c780; end: 106d6c89b; -[SCCommerceCatalogProductCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6c780(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d7f8,0);
  _objc_storeStrong(param_1 + _DAT_11275d81c,0);
  _objc_storeStrong(param_1 + _DAT_11275d830,0);
  _objc_storeStrong(param_1 + _DAT_11275d7fc,0);
  _objc_storeStrong(param_1 + _DAT_11275d820,0);
  _objc_storeStrong(param_1 + _DAT_11275d818,0);
  _objc_storeStrong(param_1 + _DAT_11275d814,0);
  _objc_storeStrong(param_1 + _DAT_11275d810,0);
  _objc_storeStrong(param_1 + _DAT_11275d80c,0);
  _objc_storeStrong(param_1 + _DAT_11275d804,0);
  _objc_storeStrong(param_1 + _DAT_11275d808,0);
  _objc_storeStrong(param_1 + _DAT_11275d800,0);
  _objc_storeStrong(param_1 + _DAT_11275d824,0);
  _objc_storeStrong(param_1 + _DAT_11275d82c,0);
  _objc_storeStrong(param_1 + _DAT_11275d828,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275d834);
  return;
}



/* Entry: 106d6c89c; end: 106d6c8af; +[SCCommerceCatalogStoreCell sizeConstrainedToSize:] */

void FUN_106d6c89c(void)

{
  return;
}



/* Entry: 106d6c8b0; end: 106d6c9c3; -[SCCommerceCatalogStoreCell initWithFrame:] */

undefined1 * FUN_106d6c8b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f6c68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4024000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    func_0x00010bead4a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d6c9c4; end: 106d6ca0b; -[SCCommerceCatalogStoreCell prepareForReuse] */

void FUN_106d6c9c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6c68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010be93b40(param_1);
  return;
}



/* Entry: 106d6ca0c; end: 106d6cb0b; -[SCCommerceCatalogStoreCell populateWithViewModel:imageSourceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6ca0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c06e7c0(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275d838));
  uVar1 = param_3;
  func_0x00010c257d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275d83c));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275d840));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfe8f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be05f20(param_1);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106d6cb0c; end: 106d6cddf; -[SCCommerceCatalogStoreCell _setupKeyViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6cb0c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = (long)_DAT_11275d844;
  lVar7 = param_1;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar6));
    lVar2 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
    _objc_release(lVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
    func_0x00010befbb60();
  }
  lVar6 = (long)_DAT_11275d83c;
  if (*(long *)(param_1 + lVar6) == 0) {
    func_0x000106d699d4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar7;
    _objc_release(uVar5);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar6));
    lVar7 = param_1;
    func_0x00010befbb60();
  }
  lVar6 = (long)_DAT_11275d840;
  if (*(long *)(param_1 + lVar6) == 0) {
    func_0x000106d699d4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar7;
    _objc_release(uVar5);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c165e20(*(undefined8 *)(param_1 + lVar6));
    func_0x00010befbb60(param_1);
  }
  lVar7 = (long)_DAT_11275d838;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf338e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010befbb60(param_1);
  }
  lVar7 = (long)_DAT_11275d848;
  if (*(long *)(param_1 + lVar7) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b0880;
  _objc_alloc();
  uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar5);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(uVar8,uVar9,uVar10,uVar11);
  func_0x00010c182b00(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf4dce0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1ff530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar7),PTR_s_setShimmering__11265d770,1);
  return;
}



/* Entry: 106d6cde0; end: 106d6ce37; -[SCCommerceCatalogStoreCell layoutSubviews] */

void FUN_106d6cde0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6c68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be492a0(param_1);
  func_0x00010be48f60(param_1);
  func_0x00010be49300(param_1);
  return;
}



/* Entry: 106d6ce38; end: 106d6cecb; -[SCCommerceCatalogStoreCell _layoutImage] */

/* WARNING: Possible PIC construction at 0x000106d6ce84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d6ce88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6ce38(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  uVar1 = param_1;
  func_0x00010bfb68e0(param_2);
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_1,uVar1,*(undefined8 *)(param_2 + _DAT_11275d844),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106d6cecc; end: 106d6cf33; -[SCCommerceCatalogStoreCell _layoutCheckmark] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6cecc(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010bf20c00();
  _CGRectGetMaxX();
  param_1 = param_1 + -20.0;
  dVar1 = param_1 + -28.0;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar1,param_1 + -14.0,0x403c000000000000,0x403c000000000000,
             *(undefined8 *)(param_2 + _DAT_11275d838),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106d6cf34; end: 106d6d0f3; -[SCCommerceCatalogStoreCell _layoutLabels] */

/* WARNING: Possible PIC construction at 0x000106d6d014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d6d018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6cf34(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(long *)(param_2 + _DAT_11275d840);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = (long)_DAT_11275d844;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetMaxX();
  dVar5 = param_1 + 14.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetMidY();
  if (lVar2 == 0) {
    dVar6 = param_1 + -9.5;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11275d838));
    _CGRectGetMinX();
    dVar4 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
    _CGRectGetMaxX();
    func_0x00010b8166f8(dVar5,dVar6,(param_1 - dVar4) + -28.0,0x4033000000000000,param_2);
    uVar3 = *(undefined8 *)(param_2 + _DAT_11275d83c);
  }
  else {
    param_1 = param_1 + -2.0;
    dVar6 = param_1 + -19.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11275d838));
    _CGRectGetMinX();
    dVar4 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
    _CGRectGetMaxX();
    func_0x00010b8166f8(dVar5,dVar6,(param_1 - dVar4) + -28.0,0x4033000000000000,param_2);
    uVar3 = *(undefined8 *)(param_2 + _DAT_11275d83c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 106d6d0f4; end: 106d6d17f; -[SCCommerceCatalogStoreCell _resetShimmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6d0f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d844;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  lVar2 = (long)_DAT_11275d848;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d84c);
  *(undefined8 *)(param_1 + _DAT_11275d84c) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275d850;
  uVar1 = 0;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf2dba0();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6d180; end: 106d6d427; -[SCCommerceCatalogStoreCell _downloadImageFromURL:imageSourceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6d180(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126b08a8;
    _objc_alloc(PTR_PTR_1126b08a8);
    puVar2 = PTR_PTR_1126b08b0;
    uVar6 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003ac0(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar6 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2580(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0(puVar3);
    lVar4 = param_4;
    func_0x00010bf55f20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11275d84c;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = lVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar4 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar2);
    _objc_release(lVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010bfa78e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11275d850);
    *(undefined8 *)(param_1 + _DAT_11275d850) = uVar6;
    _objc_release(uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d6d428; end: 106d6d4c3;  */

void FUN_106d6d428(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if (param_4 == 0) {
    func_0x00010be4d8a0(lVar1,param_2,param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb9640(lVar1,param_2,param_4,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d6d4c4; end: 106d6d56f; -[SCCommerceCatalogStoreCell _loadImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6d4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275d844;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c182220(uVar1,param_2,1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
  lVar2 = (long)_DAT_11275d848;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,1);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar2),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d84c);
  *(undefined8 *)(param_1 + _DAT_11275d84c) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275d850);
  *(undefined8 *)(param_1 + _DAT_11275d850) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6d570; end: 106d6d637; -[SCCommerceCatalogStoreCell _showImageError:forURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6d570(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275d844;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c182220(uVar1,param_2,4);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf14aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  lVar4 = (long)_DAT_11275d848;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar4),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d84c);
  *(undefined8 *)(param_1 + _DAT_11275d84c) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d850);
  *(undefined8 *)(param_1 + _DAT_11275d850) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d6d638; end: 106d6d6c7; -[SCCommerceCatalogStoreCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d6d638(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d850,0);
  _objc_storeStrong(param_1 + _DAT_11275d84c,0);
  _objc_storeStrong(param_1 + _DAT_11275d848,0);
  _objc_storeStrong(param_1 + _DAT_11275d838,0);
  _objc_storeStrong(param_1 + _DAT_11275d844,0);
  _objc_storeStrong(param_1 + _DAT_11275d840,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d83c,0);
  return;
}


