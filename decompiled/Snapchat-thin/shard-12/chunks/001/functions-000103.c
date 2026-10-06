/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108dd93e4; end: 108dd93eb; -[SCGalleryPrivateGalleryEnterPassphraseViewController alertViewActionType] */

undefined8 FUN_108dd93e4(void)

{
  return 1;
}



/* Entry: 108dd93ec; end: 108dd93f3; -[SCGalleryPrivateGalleryEnterPassphraseViewController adjustsSizeToMatchStandard] */

undefined8 FUN_108dd93ec(void)

{
  return 0;
}



/* Entry: 108dd93f4; end: 108dd9403; -[SCGalleryPrivateGalleryEnterPassphraseViewController becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd93f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b9f8),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 108dd9404; end: 108dd9417; -[SCGalleryPrivateGalleryEnterPassphraseViewController edgeInsets] */

undefined8 FUN_108dd9404(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 108dd9418; end: 108dd941f; -[SCGalleryPrivateGalleryEnterPassphraseViewController requiresAdditionalPaddingIfLastItem] */

undefined8 FUN_108dd9418(void)

{
  return 1;
}



/* Entry: 108dd9420; end: 108dd943f; -[SCGalleryPrivateGalleryEnterPassphraseViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9420(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ba18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dd9440; end: 108dd9453; -[SCGalleryPrivateGalleryEnterPassphraseViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9440(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ba18,param_3);
  return;
}



/* Entry: 108dd9454; end: 108dd953f; -[SCGalleryPrivateGalleryEnterPassphraseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9454(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ba18);
  _objc_storeStrong(param_1 + _DAT_11277b9e8,0);
  _objc_storeStrong(param_1 + _DAT_11277b9f4,0);
  _objc_storeStrong(param_1 + _DAT_11277ba10,0);
  _objc_storeStrong(param_1 + _DAT_11277b9f8,0);
  _objc_storeStrong(param_1 + _DAT_11277ba0c,0);
  _objc_storeStrong(param_1 + _DAT_11277ba08,0);
  _objc_storeStrong(param_1 + _DAT_11277ba04,0);
  _objc_storeStrong(param_1 + _DAT_11277b9fc,0);
  _objc_storeStrong(param_1 + _DAT_11277b9e0,0);
  _objc_storeStrong(param_1 + _DAT_11277b9dc,0);
  _objc_storeStrong(param_1 + _DAT_11277b9d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b9f0,0);
  return;
}



/* Entry: 108dd9540; end: 108dd95bf; -[SCGalleryPrivateGalleryFinishChangeViewController initWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108dd9540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe850;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277ba20);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277ba20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dd95c0; end: 108dd9853; -[SCGalleryPrivateGalleryFinishChangeViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd95c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fe850;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar2);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010bf46ba0(PTR_PTR_1126dbe88);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3288;
  _objc_alloc(PTR_PTR_1126c3288);
  func_0x00010bffa0e0();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dcbb98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcbb98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar4);
  _objc_release(ppuVar5);
  func_0x00010befbd60(puVar4);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  func_0x00010c0bbfc0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 108dd9854; end: 108dd98db;  */

void FUN_108dd9854(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd98dc; end: 108dd9d53;  */

void FUN_108dd98dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c14d460();
  if ((int)puVar10 != 0) {
    puVar10 = puVar9;
    func_0x00010c14d280();
    uVar3 = 0xc038000000000000;
    if (((ulong)puVar10 & 1) != 0) goto LAB_108dd9c70;
  }
  uVar3 = 0xc048000000000000;
LAB_108dd9c70:
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bc020(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd9d54; end: 108dd9f23;  */

void FUN_108dd9d54(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c14d460();
  if (((int)puVar5 == 0) || (puVar5 = puVar4, func_0x00010c14d280(), ((ulong)puVar5 & 1) == 0)) {
    puVar5 = puVar4;
    func_0x00010c14d460();
    if (((int)puVar5 == 0) || (puVar5 = puVar4, func_0x00010c14d2a0(), ((ulong)puVar5 & 1) == 0)) {
      uVar3 = 0xc04e000000000000;
    }
    else {
      uVar3 = 0xc04a000000000000;
    }
  }
  else {
    uVar3 = 0xc046000000000000;
  }
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dd9f24; end: 108dd9f5f; -[SCGalleryPrivateGalleryFinishChangeViewController _didPressFinishButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9f24(long param_1)

{
  param_1 = param_1 + _DAT_11277ba24;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfaf700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dd9f60; end: 108dd9f7f; -[SCGalleryPrivateGalleryFinishChangeViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9f60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ba24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108dd9f80; end: 108dd9f93; -[SCGalleryPrivateGalleryFinishChangeViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9f80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ba24,param_3);
  return;
}



/* Entry: 108dd9f94; end: 108dd9fcf; -[SCGalleryPrivateGalleryFinishChangeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dd9f94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ba24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ba20,0);
  return;
}



/* Entry: 108dd9fd0; end: 108dda317; -[SCGalleryPrivateGalleryFinishSetupViewController viewDidLoad] */

void FUN_108dd9fd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fe858;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_viewDidLoad_112684cd8);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110ef7f78;
  func_0x00010c160fc0();
  _objc_release(uVar1);
  ppuVar2 = ppuVar6;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef7f78,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(uVar1);
  _objc_release(ppuVar2);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar4);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  func_0x00010c0bbfc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar4 = PTR_PTR_1126dbe88;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef7f78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46ba0(puVar4);
  _objc_release(ppuVar6);
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar1);
  _objc_retain(puVar3);
  func_0x00010c0bbfc0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3288;
  _objc_alloc(PTR_PTR_1126c3288);
  func_0x00010bffa0e0();
  ppuVar6 = &PTR____CFConstantStringClassReference_110dcbb98;
  func_0x00010c160fc0();
  ppuVar2 = ppuVar6;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcbb98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar4);
  _objc_release(ppuVar2);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcbb98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar4);
  _objc_release(ppuVar6);
  func_0x00010befbd60(puVar4);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  func_0x00010c0bbfc0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar3);
  return;
}



/* Entry: 108dda318; end: 108dda39f;  */

void FUN_108dda318(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dda3a0; end: 108dda81b;  */

void FUN_108dda3a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c14d460();
  if (((int)puVar10 == 0) || (puVar10 = puVar9, func_0x00010c14d280(), ((ulong)puVar10 & 1) == 0)) {
    uVar3 = 0xc048000000000000;
  }
  else {
    uVar3 = 0xc042000000000000;
  }
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bc020(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dda81c; end: 108dda9eb;  */

void FUN_108dda81c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c14d460();
  if (((int)puVar5 == 0) || (puVar5 = puVar4, func_0x00010c14d280(), ((ulong)puVar5 & 1) == 0)) {
    puVar5 = puVar4;
    func_0x00010c14d460();
    if (((int)puVar5 == 0) || (puVar5 = puVar4, func_0x00010c14d2a0(), ((ulong)puVar5 & 1) == 0)) {
      uVar3 = 0xc04e000000000000;
    }
    else {
      uVar3 = 0xc04a000000000000;
    }
  }
  else {
    uVar3 = 0xc046000000000000;
  }
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108dda9ec; end: 108ddaa27; -[SCGalleryPrivateGalleryFinishSetupViewController _didPressFinishButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108dda9ec(long param_1)

{
  param_1 = param_1 + _DAT_11277ba28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfafbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ddaa28; end: 108ddaa47; -[SCGalleryPrivateGalleryFinishSetupViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddaa28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ba28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ddaa48; end: 108ddaa5b; -[SCGalleryPrivateGalleryFinishSetupViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddaa48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ba28,param_3);
  return;
}



/* Entry: 108ddaa5c; end: 108ddaa6b; -[SCGalleryPrivateGalleryFinishSetupViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddaa5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277ba28);
  return;
}



/* Entry: 108ddaa6c; end: 108ddab07; -[SCGalleryPrivateGalleryForgotPassphraseViewController initForPasscode:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ddaa6c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe860;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277ba2c) = param_3;
    lVar3 = (long)_DAT_11277ba30;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108ddab08; end: 108ddaba3; -[SCGalleryPrivateGalleryForgotPassphraseViewController initForPassphrase:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ddab08(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe860;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277ba34) = param_3;
    lVar3 = (long)_DAT_11277ba30;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108ddaba4; end: 108ddb35b; -[SCGalleryPrivateGalleryForgotPassphraseViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddaba4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126fe860;
  lStack_c0 = param_1;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLoad_112684cd8);
  if ((*(byte *)(param_1 + _DAT_11277ba2c) & 1) == 0) {
    if (*(char *)(param_1 + _DAT_11277ba34) != '\x01') {
      ppuStack_1a0 = (undefined **)0x0;
      ppuStack_198 = (undefined **)0x0;
      ppuVar15 = (undefined **)0x0;
      goto LAB_108ddaca8;
    }
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ef7ff8;
    ppuStack_198 = &PTR____CFConstantStringClassReference_110ef7fd8;
    ppuVar15 = &PTR____CFConstantStringClassReference_110e85e18;
  }
  else {
    ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ef7fb8;
    ppuStack_198 = &PTR____CFConstantStringClassReference_110ef7f98;
    ppuVar15 = &PTR____CFConstantStringClassReference_110e85db8;
  }
  func_0x00010bcbeaa8(ppuVar15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(ppuStack_198,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(ppuStack_1a0,0);
  _objc_retainAutoreleasedReturnValue();
LAB_108ddaca8:
  puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar17 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  lVar14 = (long)_DAT_11277ba38;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar10;
  _objc_release(uVar13);
  puVar10 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  func_0x00010bf470c0(PTR_PTR_1126dbe88);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar14));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126dbe98;
  _objc_alloc_init();
  uStack_b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a8 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd60(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1cfce0(puVar3);
  func_0x00010c213040(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3);
  _objc_release(puVar4);
  ppuVar6 = &PTR____CFConstantStringClassReference_110ef8018;
  FUN_108e0483c(&PTR____CFConstantStringClassReference_110ef8018,
                &PTR____CFConstantStringClassReference_110e83bd8,
                &PTR____CFConstantStringClassReference_110e85f58);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110ef8038;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8038,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd40(puVar3);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  func_0x00010c18b5e0(puVar3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3288;
  _objc_alloc();
  func_0x00010bffa0e0();
  lVar16 = (long)_DAT_11277ba3c;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar4;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  ppuVar6 = &PTR____CFConstantStringClassReference_110daf898;
  lVar14 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar13);
  _objc_release(ppuVar6);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar16));
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar16));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  puVar5 = PTR_PTR_1126dbe90;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  uVar13 = *(undefined8 *)(param_1 + _DAT_11277ba40);
  *(undefined **)(param_1 + _DAT_11277ba40) = puVar5;
  _objc_release(uVar13);
  puVar5 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  func_0x00010bf46ac0(PTR_PTR_1126dbe88);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar8);
  _objc_release(puVar9);
  func_0x00010c212f20(puVar8);
  puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar8);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar8);
  _objc_release(puVar9);
  func_0x00010c213040(puVar8);
  func_0x00010c165e20(puVar8);
  func_0x00010c16f5a0(puVar8);
  func_0x00010c1c83a0(0x3fe0000000000000,puVar8);
  func_0x00010c1cfce0(puVar8);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  _objc_retain(puVar4);
  func_0x00010c0bbfc0(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c181f00(0x43790000,puVar8);
  func_0x00010c181cc0(0x443b4000,puVar8);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(ppuStack_1a0);
  _objc_release(ppuStack_198);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar14);
  lVar2 = lVar14;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = ppuVar15[4];
  func_0x00010c29bf00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar16;
  (**(code **)(lVar16 + 0x10))(lVar16,puVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar12 + 0x10))(lVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(lVar16);
  _objc_release(lVar2);
  lVar2 = lVar14;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  lVar14 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar14;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar16;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = ppuVar15[4];
  func_0x00010c29bf00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar11 + 0x10))(lVar11,puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(lVar11);
  _objc_release(lVar16);
  _objc_release(lVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108ddb35c; end: 108ddb4e7;  */

void FUN_108ddb35c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar5 + 0x10))(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ddb4e8; end: 108ddb647;  */

void FUN_108ddb4e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ddb648; end: 108ddba8b;  */

void FUN_108ddb648(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c14d460();
  if (((int)puVar5 == 0) || (puVar5 = puVar4, func_0x00010c14d280(), ((ulong)puVar5 & 1) == 0)) {
    uVar3 = 0xc04a000000000000;
  }
  else {
    uVar3 = 0xc046000000000000;
  }
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ddba8c; end: 108ddbef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddba8c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14d460();
  if (((int)puVar2 == 0) || (puVar2 = puVar1, func_0x00010c14d280(), ((ulong)puVar2 & 1) == 0)) {
    uVar11 = 0xc040000000000000;
    uVar12 = 0x4040000000000000;
  }
  else {
    uVar11 = 0xc030000000000000;
    uVar12 = 0x4030000000000000;
  }
  lVar3 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ba38);
  func_0x00010c0bbea0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bc020(uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar12);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  (**(code **)(lVar8 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ddbef8; end: 108ddbf33; -[SCGalleryPrivateGalleryForgotPassphraseViewController _didPressBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddbef8(long param_1)

{
  param_1 = param_1 + _DAT_11277ba44;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb56c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ddbf34; end: 108ddbf6f; -[SCGalleryPrivateGalleryForgotPassphraseViewController _didPressContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddbf34(long param_1)

{
  param_1 = param_1 + _DAT_11277ba44;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb56a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ddbf70; end: 108ddbfeb; -[SCGalleryPrivateGalleryForgotPassphraseViewController _handleTapAcknowledgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddbf70(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c252440();
  if (param_3 == 3) {
    lVar2 = (long)_DAT_11277ba40;
    func_0x00010c159240(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c159240(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11277ba3c),PTR_s_setEnabled__112642f38,uVar1);
    return;
  }
  return;
}



/* Entry: 108ddbfec; end: 108ddc0e3; -[SCGalleryPrivateGalleryForgotPassphraseViewController linkLabel:didSelectUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddbfec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3a18;
  lVar5 = (long)_DAT_11277ba48;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c057da0();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c07f8c0();
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108ddc0e4; end: 108ddc147; -[SCGalleryPrivateGalleryForgotPassphraseViewController memoriesInformationWebViewControllerDidPressBack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddc0e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277ba48);
  *(undefined8 *)(param_1 + _DAT_11277ba48) = 0;
  _objc_release(uVar2);
  func_0x00010c1070e0();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c07f8c0();
  _objc_release(puVar3);
  if ((int)param_1 != (int)puVar4) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 108ddc148; end: 108ddc167; -[SCGalleryPrivateGalleryForgotPassphraseViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddc148(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ba44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ddc168; end: 108ddc17b; -[SCGalleryPrivateGalleryForgotPassphraseViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddc168(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ba44,param_3);
  return;
}



/* Entry: 108ddc17c; end: 108ddc1f7; -[SCGalleryPrivateGalleryForgotPassphraseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddc17c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ba44);
  _objc_storeStrong(param_1 + _DAT_11277ba30,0);
  _objc_storeStrong(param_1 + _DAT_11277ba48,0);
  _objc_storeStrong(param_1 + _DAT_11277ba40,0);
  _objc_storeStrong(param_1 + _DAT_11277ba3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ba38,0);
  return;
}



/* Entry: 108ddc1f8; end: 108ddc297; -[SCGalleryPrivateGalleryStartSetupViewController initWithNibName:bundle:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ddc1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fe868;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11277ba4c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108ddc298; end: 108ddc9f3; -[SCGalleryPrivateGalleryStartSetupViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddc298(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126fe868;
  lStack_c0 = param_1;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar17 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  lVar16 = (long)_DAT_11277ba50;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  puVar1 = PTR_PTR_1126dbe88;
  ppuVar4 = &PTR____CFConstantStringClassReference_110e860b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e860b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf470c0(puVar1);
  _objc_release(ppuVar4);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar16));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c3288;
  _objc_alloc();
  func_0x00010bffa0e0();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef8058;
  func_0x00010c160fc0();
  ppuVar6 = ppuVar4;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8058,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar1);
  _objc_release(ppuVar6);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8058,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1);
  _objc_release(ppuVar4);
  func_0x00010befbd60(puVar1);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010c0bbfc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126dbe98;
  _objc_alloc_init();
  uStack_b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a8 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd60(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c1cfce0(puVar7);
  func_0x00010c213040(puVar7);
  puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar7);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar7);
  _objc_release(puVar8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e85f38;
  FUN_108e0483c(&PTR____CFConstantStringClassReference_110e85f38,
                &PTR____CFConstantStringClassReference_110e83bd8,
                &PTR____CFConstantStringClassReference_110e86118);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110ef8038;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef8038,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd40(puVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  func_0x00010c18b5e0(puVar7);
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  func_0x00010c0bbfc0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar10);
  _objc_release(puVar8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef8078;
  lVar16 = 0;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar10);
  _objc_release(ppuVar4);
  puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar10);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar10);
  _objc_release(puVar8);
  func_0x00010c213040(puVar10);
  func_0x00010c1cfce0(puVar10);
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar5);
  _objc_retain(puVar1);
  func_0x00010c0bbfc0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar17,uVar18,uVar19,uVar20);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar11);
  _objc_release(puVar8);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  _objc_retain(puVar10);
  func_0x00010c0bbfc0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar8);
  func_0x00010c182220(puVar9);
  func_0x00010befbb60(puVar11);
  _objc_retain(puVar11);
  func_0x00010c0bbfc0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar16);
  lVar5 = lVar16;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c29bf00(uVar15);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar14 + 0x10))(lVar14,uVar15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar5);
  lVar5 = lVar16;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  lVar16 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c29bf00(uVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar16;
  (**(code **)(lVar16 + 0x10))(lVar16,uVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar13 + 0x10))(lVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(uVar15);
  _objc_release(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 108ddc9f4; end: 108ddcb7f;  */

void FUN_108ddc9f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar4 + 0x10))(lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ddcb80; end: 108ddcd4f;  */

void FUN_108ddcb80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c14d460();
  if (((int)puVar5 == 0) || (puVar5 = puVar4, func_0x00010c14d280(), ((ulong)puVar5 & 1) == 0)) {
    puVar5 = puVar4;
    func_0x00010c14d460();
    if (((int)puVar5 == 0) || (puVar5 = puVar4, func_0x00010c14d2a0(), ((ulong)puVar5 & 1) == 0)) {
      uVar3 = 0xc04e000000000000;
    }
    else {
      uVar3 = 0xc04a000000000000;
    }
  }
  else {
    uVar3 = 0xc046000000000000;
  }
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ddcd50; end: 108ddceaf;  */

void FUN_108ddcd50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ddceb0; end: 108ddd25f;  */

void FUN_108ddceb0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc028000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c14d460();
  if (((int)puVar10 == 0) || (puVar10 = puVar9, func_0x00010c14d280(), ((ulong)puVar10 & 1) == 0)) {
    puVar10 = puVar9;
    func_0x00010c14d460();
    if (((int)puVar10 == 0) || (puVar10 = puVar9, func_0x00010c14d2a0(), ((ulong)puVar10 & 1) == 0))
    {
      uVar3 = 0xc048000000000000;
    }
    else {
      uVar3 = 0xc042000000000000;
    }
  }
  else {
    uVar3 = 0xc040000000000000;
  }
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bc020(uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ddd260; end: 108ddd4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddd260(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277ba50);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ddd4fc; end: 108ddd653;  */

void FUN_108ddd4fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbf20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ddd654; end: 108ddd68f; -[SCGalleryPrivateGalleryStartSetupViewController _didPressBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddd654(long param_1)

{
  param_1 = param_1 + _DAT_11277ba54;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2509c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ddd690; end: 108ddd6cb; -[SCGalleryPrivateGalleryStartSetupViewController _didPressStartButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddd690(long param_1)

{
  param_1 = param_1 + _DAT_11277ba54;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2509e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ddd6cc; end: 108ddd7c3; -[SCGalleryPrivateGalleryStartSetupViewController linkLabel:didSelectUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddd6cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c3a18;
  lVar5 = (long)_DAT_11277ba58;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c057da0();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c07f8c0();
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108ddd7c4; end: 108ddd827; -[SCGalleryPrivateGalleryStartSetupViewController memoriesInformationWebViewControllerDidPressBack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddd7c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277ba58);
  *(undefined8 *)(param_1 + _DAT_11277ba58) = 0;
  _objc_release(uVar2);
  func_0x00010c1070e0();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c07f8c0();
  _objc_release(puVar3);
  if ((int)param_1 != (int)puVar4) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 108ddd828; end: 108ddd847; -[SCGalleryPrivateGalleryStartSetupViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddd828(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ba54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ddd848; end: 108ddd85b; -[SCGalleryPrivateGalleryStartSetupViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddd848(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ba54,param_3);
  return;
}



/* Entry: 108ddd85c; end: 108ddd8b7; -[SCGalleryPrivateGalleryStartSetupViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ddd85c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ba54);
  _objc_storeStrong(param_1 + _DAT_11277ba4c,0);
  _objc_storeStrong(param_1 + _DAT_11277ba50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ba58,0);
  return;
}



/* Entry: 108ddd8b8; end: 108ddda07; -[SCGalleryPrivateGalleryManager initWithKeyService:featureSettingsService:coreConfigProvider:userTrackedLogger:] */

undefined1 *
FUN_108ddd8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe870;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ddda08; end: 108ddda83; -[SCGalleryPrivateGalleryManager isPrivateGalleryTopSecret] */

undefined8 FUN_108ddda08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfbdd80();
    _objc_release(uVar1);
  }
  return uVar2;
}



/* Entry: 108ddda84; end: 108ddda8b; -[SCGalleryPrivateGalleryManager isPrivateGalleryUnlocked] */

undefined1 FUN_108ddda84(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ddda8c; end: 108dddc2f; -[SCGalleryPrivateGalleryManager setPrivateGalleryWithPassphrase:isUpdateOperation:completionHandler:] */

void FUN_108ddda8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbd4e0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_5);
    uStack_60 = (undefined1)uVar3;
    func_0x00010c1c2e20(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108dddc30; end: 108dddd23;  */

void FUN_108dddc30(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_2 == 6) {
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010beddec0(lVar1);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 108dddd24; end: 108dddda3;  */

void FUN_108dddd24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010be17960(uVar2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2,param_3);
  _objc_release(param_3);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0528;
  if (*(char *)(param_1 + 0x38) == '\0') {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0540;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_next__112614028,ppuVar1);
  return;
}



/* Entry: 108dddda4; end: 108ddde1b; -[SCGalleryPrivateGalleryManager lockPrivateGallery] */

void FUN_108dddda4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if (((int)uVar2 != 0) && (*(char *)(param_1 + 8) == '\x01')) {
    *(undefined1 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_next__112614028,
               &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0558);
    return;
  }
  return;
}



/* Entry: 108ddde1c; end: 108ddde1f; -[SCGalleryPrivateGalleryManager unlockPrivateGalleryWithPassphrase:completionHandler:] */

void FUN_108ddde1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_requestAuthorizationWithPassphra_11262acc0);
  return;
}



/* Entry: 108ddde20; end: 108ddde67; -[SCGalleryPrivateGalleryManager allowedFutureAuthorizationDate] */

void FUN_108ddde20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf01800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ddde68; end: 108dde00b; -[SCGalleryPrivateGalleryManager requestAuthorizationWithPassphrase:completionHandler:] */

void FUN_108ddde68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if (((int)uVar2 != 0) && (lVar3 = param_3, func_0x00010c08fa60(), lVar3 != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar5);
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uVar2 = uVar1;
    func_0x00010c134aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108dde00c; end: 108dde08b;  */

void FUN_108dde00c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((int)param_2 != 0) {
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 8) = 1;
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108dde08c; end: 108dde0b3; -[SCGalleryPrivateGalleryManager stateObservable] */

void FUN_108dde08c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108dde0b4; end: 108dde0d3; -[SCGalleryPrivateGalleryManager isPassphraseForTopSecret:] */

bool FUN_108dde0b4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c08fa60(param_3);
  return 0xb < param_3;
}



/* Entry: 108dde0d4; end: 108dde1fb; -[SCGalleryPrivateGalleryManager _updatePrivateGalleryEnabledAndTopSecret:completionBlock:] */

void FUN_108dde0d4(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108dde1fc;
  puStack_58 = &UNK_110845ce0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_108dde22c;
  puStack_80 = &UNK_110849530;
  uStack_50 = uVar2;
  uStack_48 = param_3;
  _objc_retain(param_4);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x108dde240;
  puStack_a8 = &UNK_110859a38;
  uStack_a0 = param_4;
  uStack_78 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c0f8560(uVar2,param_2,&puStack_70,PTR___dispatch_main_q_11034be20,
                      PTR___dispatch_main_q_11034be20,&puStack_98,&puStack_c0);
  _objc_release(puVar1);
  _objc_release(uStack_a0);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 108dde1fc; end: 108dde22b;  */

void FUN_108dde1fc(long param_1,undefined8 param_2)

{
  func_0x00010c1a1bc0(*(undefined8 *)(param_1 + 0x20),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a1df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setGalleryTopSecretPrivateGaller_112646198,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 108dde22c; end: 108dde253;  */

void FUN_108dde22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108dde23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 108dde254; end: 108dde2eb; -[SCGalleryPrivateGalleryManager _fireLogForFeatureSettingUpdateIfNeeded:] */

void FUN_108dde254(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbd4e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_108e00074(&PTR____CFConstantStringClassReference_110ef80b8,puVar3,0,
                *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108dde2ec; end: 108dde357; -[SCGalleryPrivateGalleryManager .cxx_destruct] */

void FUN_108dde2ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108dde358; end: 108dde363;  */

void FUN_108dde358(undefined8 param_1,undefined *param_2,undefined **param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  undefined **unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  ppuVar6 = &PTR____CFConstantStringClassReference_110ef81d8;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    ppuVar5 = param_3;
    puVar4 = param_2;
    uVar2 = param_1;
    *(undefined ***)(puVar1 + -0x60) = unaff_x28;
    *(undefined ***)(puVar1 + -0x58) = unaff_x27;
    *(undefined **)(puVar1 + -0x50) = unaff_x26;
    *(undefined **)(puVar1 + -0x48) = unaff_x25;
    *(undefined ***)(puVar1 + -0x40) = unaff_x24;
    *(undefined **)(puVar1 + -0x38) = unaff_x23;
    *(undefined **)(puVar1 + -0x30) = unaff_x22;
    *(undefined ***)(puVar1 + -0x28) = unaff_x21;
    *(undefined **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(ppuVar5);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    *(undefined8 *)(puVar1 + -0x80) = uVar2;
    *(undefined ***)(puVar1 + -0x78) = ppuVar5;
    *(undefined **)(puVar1 + -0x70) = puVar4;
    _objc_retain(ppuVar6);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar3;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    unaff_x24 = (undefined **)0x20;
    _malloc();
    unaff_x25 = unaff_x22;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    unaff_x26 = unaff_x22;
    func_0x00010c08fa60();
    unaff_x27 = ppuVar6;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    unaff_x28 = ppuVar6;
    func_0x00010c08fa60();
    _objc_release(ppuVar6);
    *(undefined ***)(puVar1 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x88) = 0x20;
    puVar3 = unaff_x25;
    param_2 = unaff_x26;
    param_3 = unaff_x27;
    func_0x00010ae2d790();
    if ((int)puVar3 == 0) {
      _free(unaff_x24);
      unaff_x23 = (undefined *)0x0;
    }
    else {
      unaff_x23 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      param_3 = unaff_x24;
      func_0x00010bffa1a0();
    }
    _objc_release(unaff_x22);
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    param_1 = uVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x68)) break;
    unaff_x30 = FUN_108dde51c;
    ___stack_chk_fail();
    ppuVar6 = &PTR____CFConstantStringClassReference_110ef81f8;
    puVar1 = puVar1 + -0x90;
    unaff_x19 = uVar2;
    unaff_x20 = puVar4;
    unaff_x21 = ppuVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
  return;
}



/* Entry: 108dde364; end: 108dde51b;  */

void FUN_108dde364(undefined8 param_1,undefined *param_2,undefined **param_3,undefined **param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  undefined **unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    ppuVar4 = param_3;
    puVar3 = param_2;
    uVar1 = param_1;
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar3);
    _objc_retain(ppuVar4);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(undefined ***)((long)register0x00000008 + -0x78) = ppuVar4;
    *(undefined **)((long)register0x00000008 + -0x70) = puVar3;
    _objc_retain(param_4);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    unaff_x24 = (undefined **)0x20;
    _malloc();
    unaff_x25 = unaff_x22;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    unaff_x26 = unaff_x22;
    func_0x00010c08fa60();
    unaff_x27 = param_4;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    unaff_x28 = param_4;
    func_0x00010c08fa60();
    _objc_release(param_4);
    *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x20;
    puVar2 = unaff_x25;
    param_2 = unaff_x26;
    param_3 = unaff_x27;
    func_0x00010ae2d790();
    if ((int)puVar2 == 0) {
      _free(unaff_x24);
      unaff_x23 = (undefined *)0x0;
    }
    else {
      unaff_x23 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      param_3 = unaff_x24;
      func_0x00010bffa1a0();
    }
    _objc_release(unaff_x22);
    _objc_release(ppuVar4);
    _objc_release(puVar3);
    param_1 = uVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_108dde51c;
    ___stack_chk_fail();
    param_4 = &PTR____CFConstantStringClassReference_110ef81f8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    unaff_x19 = uVar1;
    unaff_x20 = puVar3;
    unaff_x21 = ppuVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
  return;
}



/* Entry: 108dde51c; end: 108dde527;  */

void FUN_108dde51c(undefined8 param_1,undefined *param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  undefined **unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    ppuVar5 = param_3;
    puVar4 = param_2;
    uVar3 = param_1;
    ppuVar2 = &PTR____CFConstantStringClassReference_110ef81f8;
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(ppuVar5);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar3;
    *(undefined ***)((long)register0x00000008 + -0x78) = ppuVar5;
    *(undefined **)((long)register0x00000008 + -0x70) = puVar4;
    _objc_retain(&PTR____CFConstantStringClassReference_110ef81f8);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    unaff_x24 = (undefined **)0x20;
    _malloc();
    unaff_x25 = unaff_x22;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    unaff_x26 = unaff_x22;
    func_0x00010c08fa60();
    unaff_x27 = ppuVar2;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    func_0x00010c08fa60();
    _objc_release(&PTR____CFConstantStringClassReference_110ef81f8);
    *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x20;
    puVar1 = unaff_x25;
    param_2 = unaff_x26;
    param_3 = unaff_x27;
    func_0x00010ae2d790();
    if ((int)puVar1 == 0) {
      _free(unaff_x24);
      unaff_x23 = (undefined *)0x0;
    }
    else {
      unaff_x23 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      param_3 = unaff_x24;
      func_0x00010bffa1a0();
    }
    _objc_release(unaff_x22);
    _objc_release(ppuVar5);
    _objc_release(puVar4);
    param_1 = uVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_108dde51c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    unaff_x19 = uVar3;
    unaff_x20 = puVar4;
    unaff_x21 = ppuVar5;
    unaff_x28 = ppuVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
  return;
}



/* Entry: 108dde528; end: 108dde56f;  */

bool FUN_108dde528(undefined **param_1)

{
  bool bVar1;
  
  if (param_1 == (undefined **)0x0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_1 == &PTR____CFConstantStringClassReference_110ef8158;
    _objc_release();
  }
  return bVar1;
}



/* Entry: 108dde570; end: 108dde62b; -[SCKeyServiceAuthorizationRequest initWithUUID:keyService:] */

undefined1 *
FUN_108dde570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dde62c; end: 108dde66f; -[SCKeyServiceAuthorizationRequest dealloc] */

void FUN_108dde62c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0();
  puStack_28 = PTR_PTR_1126fe878;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108dde670; end: 108dde68f; -[SCKeyServiceAuthorizationRequest isCancelled] */

bool FUN_108dde670(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 108dde690; end: 108dde6cb; -[SCKeyServiceAuthorizationRequest cancel] */

void FUN_108dde690(long param_1)

{
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12b420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dde6cc; end: 108dde703; -[SCKeyServiceAuthorizationRequest .cxx_destruct] */

void FUN_108dde6cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dde704; end: 108dde7bf; -[SCKeyServiceMasterKeyRequest initWithUUID:keyService:] */

undefined1 *
FUN_108dde704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe880;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108dde7c0; end: 108dde803; -[SCKeyServiceMasterKeyRequest dealloc] */

void FUN_108dde7c0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0();
  puStack_28 = PTR_PTR_1126fe880;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108dde804; end: 108dde823; -[SCKeyServiceMasterKeyRequest isCancelled] */

bool FUN_108dde804(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 108dde824; end: 108dde85f; -[SCKeyServiceMasterKeyRequest cancel] */

void FUN_108dde824(long param_1)

{
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x18));
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12d0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108dde860; end: 108dde8e3; -[SCKeyServiceMasterKeyRequest .cxx_destruct] */

void FUN_108dde860(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108dde8e4; end: 108dde9bf;  */

undefined1 *
FUN_108dde8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    ppuStack_48 = &PTR____CFConstantStringClassReference_110ef8138;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110ef8158;
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar5 = puVar7;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  plVar2 = &lStack_c0;
  _objc_retain(ppuVar4);
  _objc_retain(param_3);
  _objc_retain(puVar5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(uStack_50);
  _objc_retain(ppuStack_48);
  puStack_b8 = PTR_PTR_1126fe888;
  lStack_c0 = param_4;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_init_1125d9248);
  if (plVar2 != (long *)0x0) {
    _objc_retain(ppuVar4);
    uVar3 = *(undefined8 *)((long)plVar2 + 8);
    *(undefined ***)((long)plVar2 + 8) = ppuVar4;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)plVar2 + 0x10);
    *(undefined8 *)((long)plVar2 + 0x10) = param_3;
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)plVar2 + 0x90);
    *(undefined **)((long)plVar2 + 0x90) = puVar7;
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)plVar2 + 0x88);
    *(undefined **)((long)plVar2 + 0x88) = puVar7;
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)plVar2 + 0x70);
    *(undefined **)((long)plVar2 + 0x70) = puVar7;
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)plVar2 + 0x78);
    *(undefined **)((long)plVar2 + 0x78) = puVar7;
    _objc_release(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)plVar2 + 0x80);
    *(undefined **)((long)plVar2 + 0x80) = puVar7;
    _objc_release(uVar3);
    _objc_retain(uStack_50);
    uVar3 = *(undefined8 *)((long)plVar2 + 0x30);
    *(undefined8 *)((long)plVar2 + 0x30) = uStack_50;
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126dbea0;
    _objc_alloc();
    func_0x00010c020f80();
    uVar3 = *(undefined8 *)((long)plVar2 + 0x60);
    *(undefined **)((long)plVar2 + 0x60) = puVar7;
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126dbea8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)plVar2 + 0x58);
    *(undefined **)((long)plVar2 + 0x58) = puVar7;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)plVar2 + 0x18);
    *(undefined8 *)((long)plVar2 + 0x18) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)plVar2 + 0x20);
    *(undefined8 *)((long)plVar2 + 0x20) = param_8;
    _objc_release(uVar3);
    _objc_retain(ppuStack_48);
    uVar3 = *(undefined8 *)((long)plVar2 + 0x28);
    *(undefined ***)((long)plVar2 + 0x28) = ppuStack_48;
    _objc_release(uVar3);
  }
  _objc_release(ppuStack_48);
  _objc_release(uStack_50);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(ppuVar4);
  return (undefined1 *)plVar2;
}



/* Entry: 108dde9c0; end: 108ddec37; -[SCKeyService initWithProfile:networker:featureSettingsService:effects:userTrackedLogger:grapheneRegistry:performer:memoriesExperimentService:] */

undefined1 *
FUN_108dde9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fe888;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dbea0;
    _objc_alloc();
    func_0x00010c020f80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126dbea8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ddec38; end: 108ddec3f; -[SCKeyService addListener:] */

void FUN_108ddec38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108ddec40; end: 108ddec47; -[SCKeyService removeListener:] */

void FUN_108ddec40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108ddec48; end: 108ddeda7; -[SCKeyService requestAuthorizationWithPassphrase:queue:completionHandler:] */

void FUN_108ddec48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dbeb0;
  _objc_alloc();
  func_0x00010c057e40();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108ddeda8;
  puStack_88 = &UNK_110866740;
  _objc_retain();
  puStack_80 = puVar2;
  uStack_78 = param_4;
  puStack_70 = puVar1;
  uStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_5;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_a0);
  _objc_retain(puVar2);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(uStack_58);
  _objc_release(uStack_78);
  _objc_release(puStack_80);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ddeda8; end: 108ddeedb;  */

void FUN_108ddeda8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x108ddee80;
    puStack_30 = &UNK_110849530;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    uStack_28 = uVar3;
    func_0x000107c27d8c(uVar4,&puStack_48);
    _objc_release(uStack_28);
    return;
  }
  puVar2 = PTR_PTR_1126dbeb8;
  _objc_alloc(PTR_PTR_1126dbeb8);
  func_0x00010c057e60();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x88));
  func_0x00010be91cc0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108ddeedc; end: 108ddefcb; -[SCKeyService _requestWithAuthorizationRequestHandler:] */

void FUN_108ddeedc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x90),param_2,param_3);
  }
  else {
    uVar1 = param_1;
    func_0x00010be3e440();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf01820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf991c0(puVar3,param_2,0xfffffffffffff829,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f95e0(param_3,param_2,0,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x88);
      uVar2 = param_3;
      func_0x00010bdc3540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar4,param_2,uVar2);
      _objc_release(uVar2);
    }
    else {
      func_0x00010be91ce0(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ddefcc; end: 108ddf457; -[SCKeyService _requestWithAuthorizationRequestHandlerWithPassphrase:] */

void FUN_108ddefcc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x40) == 0) && (uVar1 = param_1, func_0x00010be96a80(), (uVar1 & 1) == 0)
     ) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    uVar7 = param_3;
    func_0x00010c0f5140(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010be96820(param_1);
    _objc_release(uVar7);
    uVar7 = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c086aa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0f5140(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    FUN_108dde364(uVar5,uVar3,uVar4,&PTR____CFConstantStringClassReference_110ef8218);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0f5140(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c071cc0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      func_0x00010becde40(param_1);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf01820(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf991c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f95e0(param_3);
      _objc_release(puVar6);
      _objc_release(uVar5);
    }
    else {
      func_0x00010be8b740();
      func_0x00010bdcbb40(param_1);
      func_0x00010c0f95e0(param_3);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    uVar5 = param_3;
    func_0x00010bdc3540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(uVar7);
  _objc_release(param_3);
  return;
}



/* Entry: 108ddf458; end: 108ddf523; -[SCKeyService masterKey] */

void FUN_108ddf458(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108ddf524;
  uStack_30 = 0x108ddf534;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108ddf53c;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ddf524; end: 108ddf53b;  */

void FUN_108ddf524(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108ddf53c; end: 108ddf57b;  */

void FUN_108ddf53c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bec0040(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ddf57c; end: 108ddf647; -[SCKeyService allowedFutureAuthorizationDate] */

void FUN_108ddf57c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108ddf524;
  uStack_30 = 0x108ddf534;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108ddf648;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ddf648; end: 108ddf693;  */

void FUN_108ddf648(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bec0040(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010bf01820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


