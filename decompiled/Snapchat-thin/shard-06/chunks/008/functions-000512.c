/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104dcf90c; end: 104dcfce7; -[SCCommerceProductCatalogRouter presentWebPageForURL:fallbackURL:buttonType:] */

void FUN_104dcf90c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010be521c0(param_1);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010bef3800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    if (lVar4 != 0) {
      lVar1 = lVar4;
    }
    _objc_retain(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bef3800();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0fcb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar7 = PTR_PTR_1126b0790;
    _objc_alloc();
    func_0x00010c02f5a0();
    puVar8 = PTR_PTR_1126b0798;
    _objc_alloc();
    func_0x00010c044b60();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    if ((param_5 & 0xfffffffffffffffe) == 0x2e) {
      func_0x00010be6d060(param_1);
    }
    else {
      puVar8 = PTR_PTR_1126ae630;
      func_0x00010bfe6000();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010c2b9b80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c2ad780();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c2ac300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126ae560;
      _objc_alloc_init();
      puVar10 = puVar8;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010c297260(puVar10);
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126ae638;
      _objc_opt_new(PTR_PTR_1126ae638);
      lVar4 = param_1;
      func_0x00010c0d6240(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bef1200();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf22ba0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(puVar10);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x138));
      _objc_release(puVar11);
      _objc_release(param_3);
      _objc_release(puVar8);
      _objc_release(puVar12);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bdf6e20(param_1);
    func_0x00010c0abc20(uVar5);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 104dcfce8; end: 104dcfcf3;  */

void FUN_104dcfce8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104dcfcf4; end: 104dcfe6b; -[SCCommerceProductCatalogRouter presentFavoritesCatalog] */

void FUN_104dcfcf4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if ((*(long *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x20) == 0)) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bef1360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar1,param_2,uVar2,1);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b07a0;
    _objc_alloc();
    puVar5 = PTR_PTR_1126b07a8;
    lVar4 = param_1;
    func_0x00010bf99fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f0900(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002680(puVar3,param_2,puVar1,puVar5,param_1,*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar5);
    _objc_release(lVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c24d100(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf60ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be56be0(param_1,param_2,uVar2,0x2d);
    _objc_release(uVar2);
    _objc_release(uVar6);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0xa0),param_2,puVar3,param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104dcfe6c; end: 104dd004b; -[SCCommerceProductCatalogRouter presentShowcaseWithProductSetId:adId:title:calloutText:shopUrl:delegate:] */

void FUN_104dcfe6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b07b0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c23b120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08f620();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf461c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022480(puVar1,param_2,uVar4,uVar5,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b0560;
  _objc_alloc(PTR_PTR_1126b0560);
  func_0x00010c0085e0();
  puVar7 = PTR_PTR_1126b07b8;
  _objc_alloc(PTR_PTR_1126b07b8);
  func_0x00010c00d4a0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  func_0x00010c222920(puVar7,param_2,puVar6);
  func_0x00010be7cc20(param_1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104dd004c; end: 104dd01df; -[SCCommerceProductCatalogRouter presentShowcaseWithContext:title:calloutText:shopUrl:delegate:] */

void FUN_104dd004c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b07b0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c23afc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046680(puVar1,param_2,uVar3,*(undefined8 *)(param_1 + 0x90),param_3);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b0560;
  _objc_alloc(PTR_PTR_1126b0560);
  lVar5 = param_1;
  func_0x00010becc600(param_1);
  func_0x00010c0085e0(puVar4,param_2,puVar1,lVar5,*(undefined8 *)(param_1 + 0x90),0);
  puVar6 = PTR_PTR_1126b07b8;
  _objc_alloc(PTR_PTR_1126b07b8);
  func_0x00010c00d4a0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  func_0x00010c222920(puVar6,param_2,puVar4);
  func_0x00010be7cc20(param_1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104dd01e0; end: 104dd04eb; -[SCCommerceProductCatalogRouter presentStoreWithStoreProductSetQuery:delegate:] */

void FUN_104dd01e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x23;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_104dd04ec;
  uStack_78 = 0x104dd04fc;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_104dd04ec;
  uStack_a8 = 0x104dd04fc;
  uStack_a0 = 0;
  func_0x00010c0bc680(param_3);
  if (puStack_90[5] != 0) {
    puVar2 = PTR_PTR_1126b07c0;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010c23b120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c23afc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bfe8c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bfe7740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf90380();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
    func_0x00010c07cbe0();
    if (iVar1 != 0) {
      unaff_x23 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c24d100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071780();
    }
    func_0x00010c04cc40(puVar2);
    if (iVar1 != 0) {
      _objc_release(unaff_x23);
    }
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010c18b5e0(puVar2);
    func_0x00010be7cc20(param_1);
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104dd04ec; end: 104dd0503;  */

void FUN_104dd04ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104dd0504; end: 104dd05eb;  */

void FUN_104dd0504(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104dd05ec; end: 104dd09df; -[SCCommerceProductCatalogRouter presentProductPage:storeId:store:commerceOrigin:pdpEntrySource:delegate:] */

void FUN_104dd05ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uStack_118;
  undefined *puStack_f8;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126b07c8;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010c23b120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c23afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf461c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x00010c07cbe0();
  if (iVar1 != 0) {
    uStack_118 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c24d100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071780();
  }
  lVar7 = param_1;
  func_0x00010bfcdee0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be44d80();
  func_0x00010c03a8e0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  if (iVar1 != 0) {
    _objc_release(uStack_118);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x90);
  func_0x00010c0f6de0();
  if (iVar1 == 0) {
    puStack_f8 = (undefined *)0x0;
  }
  else {
    puStack_f8 = PTR_PTR_1126b07d0;
    _objc_alloc();
    func_0x00010c031280();
  }
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_104dd04ec;
  uStack_78 = 0x104dd04fc;
  uStack_70 = 0;
  func_0x00010c0bcf00(param_7);
  puVar9 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  puVar10 = PTR_PTR_1126b07d8;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010bfe8c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfe7740(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  if (param_4 == 0) {
    lVar5 = param_5;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c019b60(puVar10);
  if (param_4 == 0) {
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c09bf60(puVar2);
  func_0x00010be7cc20(param_1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(puStack_f8);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104dd09e0; end: 104dd0a17;  */

void FUN_104dd09e0(long param_1,undefined8 param_2)

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



/* Entry: 104dd0a18; end: 104dd0ebb; -[SCCommerceProductCatalogRouter presentSharingForProductWithViewModel:] */

void FUN_104dd0a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010be56ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 200);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bef1360(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar4);
      _objc_release(uVar1);
      puVar5 = PTR_PTR_1126b07e0;
      _objc_alloc();
      uVar1 = param_3;
      func_0x00010c115e60(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c257800(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfef100();
      _objc_release(uVar6);
      _objc_release(uVar1);
      puVar7 = puVar5;
      func_0x00010bf682c0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar8 != (undefined *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 0xe0);
        puVar8 = puVar7;
        func_0x00010bdc2b80(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e3e00(uVar1);
        _objc_release(puVar8);
        _objc_initWeak(auStack_80,param_1);
        puVar8 = PTR_PTR_1126ae720;
        _objc_copyWeak(auStack_88,auStack_80);
        _objc_retain(param_3);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b07e8;
        _objc_alloc();
        func_0x00010c061960();
        puVar10 = PTR_PTR_1126b07f0;
        func_0x00010bfbb840();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR_PTR_1126b07f8;
        _objc_alloc();
        func_0x00010c01dde0();
        puVar12 = PTR_PTR_1126ae720;
        _objc_retain(puVar7);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126b0808;
        _objc_alloc();
        func_0x00010c051820();
        puVar14 = PTR_PTR_1126b0810;
        _objc_alloc(PTR_PTR_1126b0810);
        func_0x00010c046120();
        puVar15 = PTR_PTR_1126b0818;
        _objc_alloc();
        puVar16 = puVar15;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c044540();
        _objc_release(puVar17);
        _objc_release(puVar16);
        uVar1 = *(undefined8 *)(param_1 + 0xd0);
        func_0x00010bf23ee0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08b7c0(*(undefined8 *)(param_1 + 200));
        _objc_release(uVar1);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar7);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_80);
      }
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104dd0ebc; end: 104dd0f03;  */

void FUN_104dd0ebc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104dd0f04; end: 104dd0fdf;  */

void FUN_104dd0f04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc2b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc2b80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar1,param_2,uVar3,uVar4,0,8,0,0);
  func_0x00010bfe9ca0(puVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104dd0fe0; end: 104dd0fe7; -[SCCommerceProductCatalogRouter activeViewController] */

void FUN_104dd0fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_activeViewController_112599e80);
  return;
}



/* Entry: 104dd0fe8; end: 104dd10b7; -[SCCommerceProductCatalogRouter popLastViewController] */

bool FUN_104dd0fe8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010c0d6240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c24d100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    func_0x00010c0d6240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_release(lVar2);
    func_0x00010c0d6240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c24d100();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    bVar1 = lVar3 == 1;
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 104dd10b8; end: 104dd1123; -[SCCommerceProductCatalogRouter dismissWithCompletion:] */

void FUN_104dd10b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  func_0x00010bf839c0(*(undefined8 *)(param_1 + 0x58));
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(long *)(param_1 + 0x10) != 0)) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104dd1124; end: 104dd128f; -[SCCommerceProductCatalogRouter showFavoritesToast:productId:productImage:wasFavorited:] */

void FUN_104dd1124(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_5);
  if ((param_3 & 1) == 0) {
    func_0x00010c237a80(*(undefined8 *)(param_1 + 0xa8));
    goto LAB_104dd1250;
  }
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104dd1290;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock(&puStack_80);
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 == 0) {
    if ((param_6 & 1) == 0) {
LAB_104dd122c:
      func_0x00010c237780(*(undefined8 *)(param_1 + 0xa8));
    }
    else {
LAB_104dd1204:
      func_0x00010c237700(*(undefined8 *)(param_1 + 0xa8));
    }
  }
  else {
    func_0x00010bfa6a80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if ((param_6 & 1) == 0) {
      if (lVar3 == 0) goto LAB_104dd122c;
      func_0x00010c2377c0(*(undefined8 *)(param_1 + 0xa8));
    }
    else {
      if (lVar3 == 0) goto LAB_104dd1204;
      func_0x00010c237720(*(undefined8 *)(param_1 + 0xa8));
    }
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
LAB_104dd1250:
  _objc_release(param_5);
  return;
}



/* Entry: 104dd1290; end: 104dd131f;  */

void FUN_104dd1290(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104dd1320;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104dd1320; end: 104dd134b;  */

void FUN_104dd1320(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10c1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dd134c; end: 104dd162f; -[SCCommerceProductCatalogRouter openTryOnView:productId:] */

void FUN_104dd134c(ulong param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_4;
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010c22cf20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c076220();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc();
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c24d100(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf60ba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar3,param_2,uVar5,0);
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(param_3);
      lVar11 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      if (lVar11 != 0) {
        lVar13 = *plStack_120;
        do {
          lVar12 = 0;
          do {
            if (*plStack_120 != lVar13) {
              _objc_enumerationMutation(param_3);
            }
            puVar7 = PTR_PTR_1126b0820;
            _objc_opt_new();
            func_0x00010c2b2880();
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2bbd20(puVar7,param_2,0xe);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2a7660(puVar7,param_2,0xffffffffffffffff);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bf21f60(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6,param_2,puVar8);
            _objc_release(puVar8);
            _objc_release(puVar7);
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
          lVar11 = param_3;
          func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
        } while (lVar11 != 0);
      }
      _objc_release(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0xd8);
      func_0x00010bf23e40(uVar4,param_2,puVar3,puVar6,param_4,0x3b,1,0,0,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c24d100();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010bf60ba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be56be0(param_1,param_2,uVar5,0x11);
      _objc_release(uVar5);
      _objc_release(uVar9);
      uVar10 = param_1;
      func_0x00010c22cf20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(uVar10);
      _objc_release(uVar4);
      _objc_release(puVar6);
      _objc_release(puVar3);
      uVar10 = param_1;
      param_5 = param_4;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  _objc_retain(param_5);
  lVar11 = *(long *)(param_3 + 0x100);
  if (lVar11 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 == 0) {
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      uVar4 = *(undefined8 *)(param_3 + 0x58);
      func_0x00010c24d100(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf60ba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar3,param_2,uVar5,1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar6 = PTR_PTR_1126b0828;
      _objc_alloc(PTR_PTR_1126b0828);
      func_0x00010c048120();
      puVar7 = PTR_PTR_1126b0830;
      _objc_alloc(PTR_PTR_1126b0830);
      func_0x00010c03e780();
      func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x100),param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 104dd1630; end: 104dd176b; -[SCCommerceProductCatalogRouter openProductReportViewWithProductId:categoryId:storeId:] */

void FUN_104dd1630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c24d100(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf60ba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c038f40(puVar2,param_2,uVar4,1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126b0828;
      _objc_alloc(PTR_PTR_1126b0828);
      func_0x00010c048120();
      puVar6 = PTR_PTR_1126b0830;
      _objc_alloc(PTR_PTR_1126b0830);
      func_0x00010c03e780();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x100),param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104dd176c; end: 104dd17d7; -[SCCommerceProductCatalogRouter webBrowserDidDismiss:] */

void FUN_104dd176c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x138);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x138));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bdf6e20(param_1);
  func_0x00010c0abb20(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be56c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPageImpression_1125734c0);
  return;
}



/* Entry: 104dd17d8; end: 104dd17e3; -[SCCommerceProductCatalogRouter _presentNewViewController:] */

void FUN_104dd17d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_pushViewController_animated__112624b68,param_3,1)
  ;
  return;
}



/* Entry: 104dd17e4; end: 104dd1907; -[SCCommerceProductCatalogRouter _previousPageName] */

long FUN_104dd17e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  lVar5 = param_1;
  func_0x00010c0d6240();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c24d100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c112960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar5);
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain();
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    func_0x00010c0be8a0(uVar4);
    lVar5 = puStack_48[3];
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uVar4);
    return lVar5;
  }
  lVar5 = param_1;
  func_0x00010c0d6240(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c24d100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c112960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be5ab80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
  if (lVar3 == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    func_0x000107af15b4(lVar5,*(undefined8 *)(param_1 + 8));
  }
  else {
    lVar5 = lVar3;
    func_0x00010bf1cf80();
    if (lVar5 == 0) {
      lVar5 = -1;
    }
  }
  _objc_release(lVar3);
  return lVar5;
}



/* Entry: 104dd1908; end: 104dd19a7; -[SCCommerceProductCatalogRouter _currentPageName] */

long FUN_104dd1908(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c0d6240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c24d100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5ab80(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf1cf80();
  if (lVar1 == 0) {
    lVar1 = -1;
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104dd19a8; end: 104dd1aa7; -[SCCommerceProductCatalogRouter _resetLoggerWithVC:] */

void FUN_104dd19a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be5ab80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010c115e60();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar2 == 0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        func_0x00010c115e60();
        func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar2 = lVar1;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      lVar4 = lVar1;
      if (lVar3 == 0) {
        lVar4 = *(long *)(param_1 + 0x30);
      }
      func_0x00010c257800(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c1e3bc0(*(undefined8 *)(param_1 + 0x30),param_2,puVar5);
      func_0x00010c20c240(*(undefined8 *)(param_1 + 0x30),param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(puVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104dd1aa8; end: 104dd1b03; -[SCCommerceProductCatalogRouter _loggingProviderFromVC:] */

void FUN_104dd1aa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010010fab4(param_3,PTR_DAT_1126a4e60);
    lVar2 = param_3;
    if ((int)lVar1 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104dd1b04; end: 104dd1b8f; -[SCCommerceProductCatalogRouter _logPageImpression] */

void FUN_104dd1b04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0d6240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24d100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be932e0(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010be800a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be56d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPageOpen_storeId__1125734f0,uVar1,0);
  return;
}



/* Entry: 104dd1b90; end: 104dd1d5b; -[SCCommerceProductCatalogRouter _logPageOpen:storeId:] */

void FUN_104dd1b90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c24d100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be5ab80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x58);
    func_0x00010c24d100();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf60ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    _objc_opt_respondsToSelector();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      func_0x00010c08fa60();
      if (lVar8 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0xe8);
        lVar8 = lVar2;
        func_0x00010c257800(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc3800(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
      }
      _objc_release(lVar3);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010bfc3800(uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bdf6e20(param_1);
  uVar1 = uVar4;
  func_0x00010bf32ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abc40(uVar9);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104dd1d5c; end: 104dd1e0b; -[SCCommerceProductCatalogRouter _logCurrentPageClose] */

void FUN_104dd1d5c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010c24d100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071780();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = param_1;
  func_0x00010bdf6e20();
  *(long *)(param_1 + 8) = lVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c24d100(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be800a0(param_1);
  func_0x00010be56be0(param_1,param_2,uVar5,lVar3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104dd1e0c; end: 104dd1fbb; -[SCCommerceProductCatalogRouter _logPageClose:destination:] */

void FUN_104dd1e0c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010be54940(param_2);
    lVar1 = param_2;
    func_0x00010be5ab80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    _objc_opt_respondsToSelector(param_4,PTR_s_setExitEvent__112643af0);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf9b740(lVar1);
    }
    uVar2 = param_4;
    _objc_opt_respondsToSelector(param_4,PTR_s_blizzardPageTimeUntilReadySecond_1125a4d80);
    uVar7 = 0xbff0000000000000;
    if ((uVar2 & 1) != 0) {
      func_0x00010bf1cf60(lVar1);
      uVar7 = param_1;
    }
    uVar2 = param_4;
    _objc_opt_respondsToSelector(param_4,PTR_s_availableModules_1125a23e8);
    if ((uVar2 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar1;
      func_0x00010bf12900(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = param_4;
    _objc_opt_respondsToSelector(param_4,PTR_s_storeId_112673828);
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0xe8);
      lVar3 = lVar1;
      func_0x00010c257800(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc3800(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf32ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(lVar3);
    }
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010bf1cf80(lVar1);
    func_0x00010c0abb60(uVar7,uVar5);
    _objc_release(uVar6);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104dd1fbc; end: 104dd201b; -[SCCommerceProductCatalogRouter _logHeroSessionCloseIfNeeded:] */

void FUN_104dd1fbc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b07d8;
    _objc_opt_class(PTR_PTR_1126b07d8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      _objc_retain(param_3);
      func_0x00010bf3dc00(param_3);
      _objc_release(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dd201c; end: 104dd20cf; -[SCCommerceProductCatalogRouter _logPDPShareButtonTapped] */

void FUN_104dd201c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c257800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c278ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af6a0(uVar4,param_2,lVar1,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104dd20d0; end: 104dd216f; -[SCCommerceProductCatalogRouter _logPDPSend] */

void FUN_104dd20d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c257800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c278ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af220(uVar4,param_2,lVar1,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104dd2170; end: 104dd238b; -[SCCommerceProductCatalogRouter _titleType] */

undefined8 FUN_104dd2170(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uVar1 = 1;
  uStack_28 = 1;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104dd238c;
    puStack_50 = &UNK_110842b58;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x104dd23a0;
    puStack_78 = &UNK_110847658;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x104dd23b4;
    puStack_a0 = &UNK_110842b58;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x104dd23c8;
    puStack_c8 = &UNK_110842b58;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x104dd23dc;
    puStack_f0 = &UNK_110847658;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x104dd23f0;
    puStack_118 = &UNK_110847658;
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x104dd2400;
    puStack_140 = &UNK_110850068;
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x104dd2418;
    puStack_168 = &UNK_110847658;
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    uStack_198 = 0x104dd242c;
    puStack_190 = &UNK_110850098;
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0xc2000000;
    uStack_1c0 = 0x104dd2440;
    puStack_1b8 = &UNK_110847658;
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    uStack_1e8 = 0x104dd2454;
    puStack_1e0 = &UNK_1108431e0;
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    uStack_210 = 0x104dd2468;
    puStack_208 = &UNK_110847658;
    puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_240 = 0xc2000000;
    uStack_238 = 0x104dd247c;
    puStack_230 = &UNK_110847658;
    puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_268 = 0xc2000000;
    uStack_260 = 0x104dd248c;
    puStack_258 = &UNK_110847658;
    puStack_250 = puStack_38;
    puStack_228 = puStack_38;
    puStack_200 = puStack_38;
    puStack_1d8 = puStack_38;
    puStack_1b0 = puStack_38;
    puStack_188 = puStack_38;
    puStack_160 = puStack_38;
    puStack_138 = puStack_38;
    puStack_110 = puStack_38;
    puStack_e8 = puStack_38;
    puStack_c0 = puStack_38;
    puStack_98 = puStack_38;
    puStack_70 = puStack_38;
    puStack_48 = puStack_38;
    func_0x00010c0be8a0(*(undefined8 *)(param_1 + 0x60),param_2,&puStack_68,&puStack_90,&puStack_b8,
                        &puStack_e0,&puStack_108,&puStack_130,&puStack_158,&puStack_180,&puStack_1a8
                        ,&puStack_1d0,&puStack_1f8,&puStack_220,&puStack_248,&puStack_270);
    uVar1 = puStack_38[3];
  }
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 104dd238c; end: 104dd249b;  */

void FUN_104dd238c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104dd249c; end: 104dd259b; -[SCCommerceProductCatalogRouter _isTryOnVisible] */

byte FUN_104dd249c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c22cf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0be8a0(*(undefined8 *)(param_1 + 0x60));
    bVar3 = *(byte *)(puStack_48 + 3) ^ 1;
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    bVar3 = 0;
  }
  return bVar3 & 1;
}



/* Entry: 104dd259c; end: 104dd25af;  */

void FUN_104dd259c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104dd25b0; end: 104dd265b; -[SCCommerceProductCatalogRouter _reloadFavoriteStateForActiveVCIfNeeded] */

void FUN_104dd25b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c0d6240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c24d100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar1 = PTR_DAT_1126a4e68;
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00010010fab4(lVar3,puVar1);
  lVar2 = lVar3;
  if ((int)lVar4 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar3);
  if (lVar2 != 0) {
    func_0x00010c128c80(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104dd265c; end: 104dd275f; -[SCCommerceProductCatalogRouter _endSendToScope] */

void FUN_104dd265c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 200);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 200);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf6f440(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104dd2760; end: 104dd278b;  */

void FUN_104dd2760(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dd278c; end: 104dd27cf; -[SCCommerceProductCatalogRouter _endLaunchedSendToScope] */

void FUN_104dd278c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 200);
  func_0x00010c076220();
  if (iVar1 != 0) {
    func_0x00010bf94c20(*(undefined8 *)(param_1 + 200));
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104dd27d0; end: 104dd282f; -[SCCommerceProductCatalogRouter _createPreviewFromProductSharingViewModel:] */

void FUN_104dd27d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0838;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c103ec0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104dd2830; end: 104dd2883; -[SCCommerceProductCatalogRouter _didSharePDP] */

void FUN_104dd2830(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be09d00();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000104df3884();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a580(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be56b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPDPSend_112573480);
  return;
}



/* Entry: 104dd2884; end: 104dd28c3; -[SCCommerceProductCatalogRouter _didRecievePDPSharingError:] */

void FUN_104dd2884(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be09d00(param_1);
  func_0x00010c2374e0(*(undefined8 *)(param_1 + 0xa8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dd28c4; end: 104dd2a0b; -[SCCommerceProductCatalogRouter _openDeepLinkURL:webURL:] */

void FUN_104dd28c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x104dd29a4;
  puStack_50 = &UNK_1108500c8;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0e9b80(puVar1,param_2,param_3,PTR____NSDictionary0__struct_11034ab58,&puStack_68);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 104dd2a0c; end: 104dd2a13; -[SCCommerceProductCatalogRouter _attachToPresentingContainer] */

void FUN_104dd2a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_attachToPresentingContainer_1125a0bd8);
  return;
}



/* Entry: 104dd2a14; end: 104dd2a67; -[SCCommerceProductCatalogRouter favoritesBrowserWillDismiss] */

void FUN_104dd2a14(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be8a920();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0xa0));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be56d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPageOpen_storeId__1125734f0,0x2d,0);
    return;
  }
  return;
}



/* Entry: 104dd2a68; end: 104dd2a6b; -[SCCommerceProductCatalogRouter reviewOrderPageWillPresent] */

void FUN_104dd2a68(void)

{
  return;
}



/* Entry: 104dd2a6c; end: 104dd2b37; -[SCCommerceProductCatalogRouter reviewOrderPageDidDismiss] */

void FUN_104dd2a6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf32e00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2579e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be56d40(param_1,param_2,0x27,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xf0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104dd2b38; end: 104dd2c7f; -[SCCommerceProductCatalogRouter tray:positionDidChange:] */

void FUN_104dd2b38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_4 == 2) {
    lVar1 = *(long *)(param_1 + 0xf0);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xf0);
      func_0x00010c150520(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf32e00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c2579e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      lVar1 = param_1;
      func_0x00010bdf6e20(param_1);
      uVar5 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010bfc3800(uVar5,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf32ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0abb40(uVar2,param_2,0x27,lVar1,0,0x12,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar5);
      func_0x00010be56d40(param_1,param_2,0x27,uVar4);
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xf0));
      _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 104dd2c80; end: 104dd2cfb; -[SCCommerceProductCatalogRouter didSendWithSelectionState:] */

void FUN_104dd2c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1599e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c22b3a0(uVar3,param_2,uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd2cfc; end: 104dd2cff; -[SCCommerceProductCatalogRouter didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_104dd2cfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endSendToScope_1125600e0);
  return;
}



/* Entry: 104dd2d00; end: 104dd2db3; -[SCCommerceProductCatalogRouter didSharePDP] */

void FUN_104dd2d00(undefined8 param_1)

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
  uStack_40 = 0x104dd2d88;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104dd2db4; end: 104dd2e9b; -[SCCommerceProductCatalogRouter didRecievePDPSharingError:] */

void FUN_104dd2db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_48 = 0x104dd2e68;
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



/* Entry: 104dd2e9c; end: 104dd2e9f; -[SCCommerceProductCatalogRouter willRemoveFromStack] */

void FUN_104dd2e9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be521d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logCurrentPageClose_112572210);
  return;
}



/* Entry: 104dd2ea0; end: 104dd2ec3; -[SCCommerceProductCatalogRouter didRemoveFromStack] */

void FUN_104dd2ea0(undefined8 param_1)

{
  func_0x00010be56c80();
                    /* WARNING: Could not recover jumptable at 0x00010be8a930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadFavoriteStateForActiveVCI_1125803e8);
  return;
}



/* Entry: 104dd2ec4; end: 104dd2ec7; -[SCCommerceProductCatalogRouter willAddToStack] */

void FUN_104dd2ec4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be521d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logCurrentPageClose_112572210);
  return;
}



/* Entry: 104dd2ec8; end: 104dd2ecb; -[SCCommerceProductCatalogRouter didAddToStack] */

void FUN_104dd2ec8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be56c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPageImpression_1125734c0);
  return;
}



/* Entry: 104dd2ecc; end: 104dd2f0f; -[SCCommerceProductCatalogRouter didDismiss] */

void FUN_104dd2ecc(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be521c0();
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 104dd2f10; end: 104dd2f93; -[SCCommerceProductCatalogRouter shoppingLensCameraWantsToExit:] */

void FUN_104dd2f10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c22cf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c22cf20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be56d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPageOpen_storeId__1125734f0,0x11,0);
    return;
  }
  return;
}



/* Entry: 104dd2f94; end: 104dd2f97; -[SCCommerceProductCatalogRouter shoppingLensCameraDidExit] */

void FUN_104dd2f94(void)

{
  return;
}



/* Entry: 104dd2f98; end: 104dd2f9b; -[SCCommerceProductCatalogRouter shoppingLensDidTapOnProduct:] */

void FUN_104dd2f98(void)

{
  return;
}



/* Entry: 104dd2f9c; end: 104dd2fe7; -[SCCommerceProductCatalogRouter reportDidComplete:] */

void FUN_104dd2f9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x100);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x100));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  return;
}



/* Entry: 104dd2fe8; end: 104dd2fef; -[SCCommerceProductCatalogRouter eventLogger] */

undefined8 FUN_104dd2fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104dd2ff0; end: 104dd301f; -[SCCommerceProductCatalogRouter setEventLogger:] */

void FUN_104dd2ff0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104dd3020; end: 104dd3027; -[SCCommerceProductCatalogRouter showcaseServices] */

undefined8 FUN_104dd3020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104dd3028; end: 104dd3057; -[SCCommerceProductCatalogRouter setShowcaseServices:] */

void FUN_104dd3028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3058; end: 104dd305f; -[SCCommerceProductCatalogRouter imageSourceProvider] */

undefined8 FUN_104dd3058(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104dd3060; end: 104dd308f; -[SCCommerceProductCatalogRouter setImageSourceProvider:] */

void FUN_104dd3060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3090; end: 104dd3097; -[SCCommerceProductCatalogRouter imageFetchingService] */

undefined8 FUN_104dd3090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104dd3098; end: 104dd30c7; -[SCCommerceProductCatalogRouter setImageFetchingService:] */

void FUN_104dd3098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd30c8; end: 104dd30cf; -[SCCommerceProductCatalogRouter container] */

undefined8 FUN_104dd30c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104dd30d0; end: 104dd30ff; -[SCCommerceProductCatalogRouter setContainer:] */

void FUN_104dd30d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3100; end: 104dd3107; -[SCCommerceProductCatalogRouter navigation] */

undefined8 FUN_104dd3100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104dd3108; end: 104dd3137; -[SCCommerceProductCatalogRouter setNavigation:] */

void FUN_104dd3108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3138; end: 104dd313f; -[SCCommerceProductCatalogRouter commerceOrigin] */

undefined8 FUN_104dd3138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104dd3140; end: 104dd316f; -[SCCommerceProductCatalogRouter setCommerceOrigin:] */

void FUN_104dd3140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3170; end: 104dd3177; -[SCCommerceProductCatalogRouter grapheneLogger] */

undefined8 FUN_104dd3170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104dd3178; end: 104dd31a7; -[SCCommerceProductCatalogRouter setGrapheneLogger:] */

void FUN_104dd3178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd31a8; end: 104dd31af; -[SCCommerceProductCatalogRouter heroImage] */

undefined8 FUN_104dd31a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104dd31b0; end: 104dd31df; -[SCCommerceProductCatalogRouter setHeroImage:] */

void FUN_104dd31b0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104dd31e0; end: 104dd31e7; -[SCCommerceProductCatalogRouter resultTitle] */

undefined8 FUN_104dd31e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104dd31e8; end: 104dd3217; -[SCCommerceProductCatalogRouter setResultTitle:] */

void FUN_104dd31e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3218; end: 104dd321f; -[SCCommerceProductCatalogRouter userId] */

undefined8 FUN_104dd3218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 104dd3220; end: 104dd324f; -[SCCommerceProductCatalogRouter setUserId:] */

void FUN_104dd3220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3250; end: 104dd3257; -[SCCommerceProductCatalogRouter storeMetadata] */

undefined8 FUN_104dd3250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 104dd3258; end: 104dd3287; -[SCCommerceProductCatalogRouter setStoreMetadata:] */

void FUN_104dd3258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3288; end: 104dd328f; -[SCCommerceProductCatalogRouter configProvider] */

undefined8 FUN_104dd3288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 104dd3290; end: 104dd32bf; -[SCCommerceProductCatalogRouter setConfigProvider:] */

void FUN_104dd3290(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd32c0; end: 104dd32c7; -[SCCommerceProductCatalogRouter favoritesCoordinator] */

undefined8 FUN_104dd32c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 104dd32c8; end: 104dd32f7; -[SCCommerceProductCatalogRouter setFavoritesCoordinator:] */

void FUN_104dd32c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd32f8; end: 104dd32ff; -[SCCommerceProductCatalogRouter favoritesCatalogScopeLauncher] */

undefined8 FUN_104dd32f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 104dd3300; end: 104dd332f; -[SCCommerceProductCatalogRouter setFavoritesCatalogScopeLauncher:] */

void FUN_104dd3300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3330; end: 104dd3337; -[SCCommerceProductCatalogRouter toastPresenter] */

undefined8 FUN_104dd3330(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 104dd3338; end: 104dd3367; -[SCCommerceProductCatalogRouter setToastPresenter:] */

void FUN_104dd3338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd3368; end: 104dd336f; -[SCCommerceProductCatalogRouter commerceTooltips] */

undefined8 FUN_104dd3368(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 104dd3370; end: 104dd339f; -[SCCommerceProductCatalogRouter setCommerceTooltips:] */

void FUN_104dd3370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd33a0; end: 104dd33a7; -[SCCommerceProductCatalogRouter commerceIconProvider] */

undefined8 FUN_104dd33a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 104dd33a8; end: 104dd33d7; -[SCCommerceProductCatalogRouter setCommerceIconProvider:] */

void FUN_104dd33a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


