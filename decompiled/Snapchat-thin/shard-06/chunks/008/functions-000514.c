/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104dd712c; end: 104dd7133; -[SCCommerceProductCatalogWorkflow router] */

undefined8 FUN_104dd712c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104dd7134; end: 104dd7163; -[SCCommerceProductCatalogWorkflow setRouter:] */

void FUN_104dd7134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd7164; end: 104dd716b; -[SCCommerceProductCatalogWorkflow browserConfiguration] */

undefined8 FUN_104dd7164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104dd716c; end: 104dd719b; -[SCCommerceProductCatalogWorkflow setBrowserConfiguration:] */

void FUN_104dd716c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104dd719c; end: 104dd71b3; -[SCCommerceProductCatalogWorkflow delegate] */

void FUN_104dd719c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dd71b4; end: 104dd71bf; -[SCCommerceProductCatalogWorkflow setDelegate:] */

void FUN_104dd71b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104dd71c0; end: 104dd71c7; -[SCCommerceProductCatalogWorkflow eventLogger] */

undefined8 FUN_104dd71c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104dd71c8; end: 104dd71f7; -[SCCommerceProductCatalogWorkflow setEventLogger:] */

void FUN_104dd71c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104dd71f8; end: 104dd71ff; -[SCCommerceProductCatalogWorkflow showcaseServices] */

undefined8 FUN_104dd71f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104dd7200; end: 104dd722f; -[SCCommerceProductCatalogWorkflow setShowcaseServices:] */

void FUN_104dd7200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104dd7230; end: 104dd7237; -[SCCommerceProductCatalogWorkflow cartCoordinator] */

undefined8 FUN_104dd7230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104dd7238; end: 104dd7267; -[SCCommerceProductCatalogWorkflow setCartCoordinator:] */

void FUN_104dd7238(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104dd7268; end: 104dd726f; -[SCCommerceProductCatalogWorkflow favoritesCoordinator] */

undefined8 FUN_104dd7268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104dd7270; end: 104dd729f; -[SCCommerceProductCatalogWorkflow setFavoritesCoordinator:] */

void FUN_104dd7270(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104dd72a0; end: 104dd72a7; -[SCCommerceProductCatalogWorkflow pdpEntrySource] */

undefined8 FUN_104dd72a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104dd72a8; end: 104dd72d7; -[SCCommerceProductCatalogWorkflow setPdpEntrySource:] */

void FUN_104dd72a8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104dd72d8; end: 104dd72df; -[SCCommerceProductCatalogWorkflow storeMetadata] */

undefined8 FUN_104dd72d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104dd72e0; end: 104dd730f; -[SCCommerceProductCatalogWorkflow setStoreMetadata:] */

void FUN_104dd72e0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104dd7310; end: 104dd738f; -[SCCommerceProductCatalogWorkflow .cxx_destruct] */

void FUN_104dd7310(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104dd7390; end: 104dd75b3;  */

void FUN_104dd7390(undefined8 param_1,uint param_2,int param_3,uint param_4,undefined *param_5,
                  long param_6,undefined *param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puVar2 = param_5;
  func_0x00010c0be8a0(param_5);
  bVar1 = *(byte *)(puStack_78 + 3);
  FUN_104df3734();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    puVar3 = param_7;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) goto LAB_104dd74c0;
    func_0x000104df3824();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = puVar2;
    if (param_3 == 0) {
      func_0x000104df37c4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000104df38b4();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar2);
  puVar2 = puVar3;
LAB_104dd74c0:
  if (((param_4 & (param_2 ^ 1) & (uint)bVar1) != 0) &&
     (lVar4 = param_6, func_0x00010c08fa60(), puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0,
     lVar4 != 0)) {
    func_0x000104df37dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar4);
    puVar2 = puVar3;
  }
  puVar3 = PTR_PTR_1126b0858;
  _objc_alloc(PTR_PTR_1126b0858);
  func_0x00010c045ce0();
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104dd75b4; end: 104dd75df;  */

void FUN_104dd75b4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104dd75e0; end: 104dd7683;  */

void FUN_104dd75e0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  _objc_retain(param_2);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c297880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080280();
  _objc_release(uVar1);
  if (iVar4 != 0) {
    uVar1 = param_2;
    func_0x00010c2975e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104dd7684; end: 104dd781f;  */

void FUN_104dd7684(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar4 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    _objc_retain(param_1);
    func_0x00010c1607a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104dd7820;
    puStack_70 = &UNK_1108504b8;
    _objc_retain(param_3);
    uVar3 = param_4;
    uStack_68 = param_3;
    func_0x00010bd86870(param_4,puVar2,&puStack_88);
    _objc_release(puVar2);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_104dd78fc;
    puStack_b0 = &UNK_1108504e8;
    uStack_a8 = uVar3;
    _objc_retain(param_3);
    uStack_a0 = param_3;
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_2);
    lStack_90 = param_2;
    _objc_retain(uVar3);
    lVar4 = param_1;
    func_0x000100504554(param_1,&puStack_c8);
    _objc_release(param_1);
    _objc_release(lStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uVar3);
    _objc_release(uStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 104dd7820; end: 104dd78fb;  */

void FUN_104dd7820(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  iVar4 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c297880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080280();
  uVar3 = param_3;
  if (iVar4 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_2;
    func_0x00010bf125a0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_2;
      func_0x00010c297880(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174c00(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_104dd78d8;
    }
  }
  _objc_retain(param_3);
LAB_104dd78d8:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104dd78fc; end: 104dd7ad3;  */

void FUN_104dd78fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf4b900();
  if (iVar6 == 0) {
    puVar5 = PTR_PTR_1126b0860;
    _objc_alloc(PTR_PTR_1126b0860);
    func_0x00010c032160();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      uStack_58 = 0x104dd75c8;
      uStack_50 = 0x104dd75d8;
      uStack_48 = 0;
      uVar4 = uVar1;
      func_0x00010c174bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      func_0x00010bf97e80(lVar2);
      uVar7 = puStack_68[5];
      _objc_retain(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar4);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(uStack_48);
    }
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126b0860;
    _objc_alloc(PTR_PTR_1126b0860);
    func_0x00010c032160();
    _objc_release(param_2);
    param_2 = uVar7;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104dd7ad4; end: 104dd7b23;  */

void FUN_104dd7ad4(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110850538);
    lVar1 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104dd7b24; end: 104dd7c2f;  */

void FUN_104dd7b24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  uStack_48 = 0x104dd75c8;
  uStack_40 = 0x104dd75d8;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010c2a4d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf640();
  _objc_release(uVar1);
  lVar2 = puStack_58[5];
  if (lVar2 != 0) {
    _objc_retain(lVar2);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104dd7c30; end: 104dd7c67;  */

void FUN_104dd7c30(long param_1,undefined8 param_2)

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



/* Entry: 104dd7c68; end: 104dd80ab;  */

void FUN_104dd7c68(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c2978e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      if (param_6 == 0) {
        lStack_70 = 0;
      }
      else {
        lVar1 = param_6;
        func_0x00010bf529e0();
        if (lVar1 == 1) {
          lStack_70 = param_6;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf529e0(param_6);
          lVar1 = param_6;
          func_0x00010c25e980();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_6;
          func_0x00010bfb1920(param_6);
          _objc_retainAutoreleasedReturnValue();
          lStack_70 = lVar1;
          func_0x00010bd86870(lVar1,lVar2,&PTR___NSConcreteGlobalBlock_1108505a8);
          _objc_release(lVar2);
          _objc_release(lVar1);
        }
      }
      _objc_retain(param_2);
      puVar3 = param_2;
      if (param_2 == (undefined *)0x0) {
        puVar3 = PTR_PTR_1126b0868;
        _objc_alloc();
        func_0x00010c078780(param_1);
        uVar4 = 0;
        func_0x00010c13fc20(0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02db20();
        _objc_release(uVar4);
        if (puVar3 != (undefined *)0x0) goto LAB_104dd7e04;
        puVar14 = (undefined *)0x0;
      }
      else {
LAB_104dd7e04:
        lVar1 = param_1;
        func_0x00010c2978e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        lVar1 = param_1;
        func_0x00010bfe5be0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x000106d772a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        puVar14 = PTR_PTR_1126b0598;
        _objc_alloc();
        lVar1 = param_1;
        func_0x00010c115e60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c257800();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar2;
        func_0x00010c2975a0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf38a00(param_1);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_1;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar2;
        func_0x00010c112a80();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar2;
        func_0x00010c112a80();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar2;
        func_0x00010c25ccc0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar2;
        func_0x00010c25ccc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26aa40();
        func_0x00010c137b20();
        func_0x00010c03a720(puVar14);
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(puVar8);
        _objc_release(lVar7);
        _objc_release(puVar6);
        _objc_release(lVar1);
        _objc_release(lVar5);
        _objc_release(lVar2);
        _objc_release(puVar3);
      }
      _objc_release(lStack_70);
      goto LAB_104dd8050;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_104dd8050:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 104dd80ac; end: 104dd8153;  */

void FUN_104dd80ac(undefined8 param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      _objc_retain(param_3);
      puVar2 = param_3;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104dd8154; end: 104dd8287;  */

undefined1 FUN_104dd8154(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bfdc0(param_1);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104dd8288; end: 104dd82c3;  */

void FUN_104dd8288(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined1 param_5)

{
  func_0x00010c08fa60();
  if (param_4 == 0) {
    param_5 = 1;
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_5;
  return;
}



/* Entry: 104dd82c4; end: 104dd8447;  */

void FUN_104dd82c4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bc680(param_2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 104dd8448; end: 104dd84ab;  */

void FUN_104dd8448(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104dd84ac; end: 104dd851b;  */

void FUN_104dd84ac(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c08fa60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3 == 0;
  return;
}



/* Entry: 104dd851c; end: 104dd852f;  */

void FUN_104dd851c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104dd8530; end: 104dd8623; -[SCCommerceProductCatalogPDPSharingProvider initWithTextSender:conversationDestinationParser:excludeId:delegate:] */

undefined1 *
FUN_104dd8530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e4380;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104dd8624; end: 104dd869f; -[SCCommerceProductCatalogPDPSharingProvider shareWithSelectedItems:additionalText:] */

void FUN_104dd8624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c116360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c114700(param_1,param_2,param_3);
    func_0x00010bebe020(param_1,param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dd86a0; end: 104dd8a4b; -[SCCommerceProductCatalogPDPSharingProvider processChatIdsFromSelectedItems:] */

void FUN_104dd86a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x22;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  long lStack_260;
  undefined *puStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  long lStack_228;
  long lStack_220;
  undefined *puStack_218;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f8;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_218 = puVar1;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar10 = &uStack_1b0;
  lStack_210 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    unaff_x22 = *plStack_1a0;
    lStack_228 = unaff_x22;
    do {
      lVar11 = 0;
      lStack_220 = param_3;
      do {
        if (*plStack_1a0 != unaff_x22) {
          _objc_enumerationMutation(lStack_210);
        }
        uVar13 = *(ulong *)(lStack_1a8 + lVar11 * 8);
        uVar3 = uVar13;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar3 = uVar13;
        func_0x000108425b30();
        uVar6 = uVar12;
        if ((int)uVar3 == 0) {
          func_0x000108425a5c();
          if ((int)uVar13 != 0) {
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            func_0x00010c08fa60();
            if ((uVar3 != 0) && (uVar3 = uVar6, func_0x00010c0720c0(), (uVar3 & 1) == 0)) {
              puVar1 = PTR_PTR_1126b01c0;
              func_0x00010c294260(PTR_PTR_1126b01c0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puStack_218);
              _objc_release(puVar1);
              func_0x00010befa120(puVar2);
            }
            goto LAB_104dd89a0;
          }
        }
        else {
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c08fa60();
          if (uVar3 != 0) {
            puVar1 = PTR_PTR_1126b01c0;
            uStack_208 = uVar6;
            uStack_200 = uVar12;
            lStack_1f8 = lVar11;
            func_0x00010bfcf680(PTR_PTR_1126b01c0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_218);
            _objc_release(puVar1);
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            plStack_1e0 = (long *)0x0;
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar13;
            func_0x00010bf52a60();
            if (uVar3 != 0) {
              lVar11 = *plStack_1e0;
              do {
                uVar12 = 0;
                do {
                  if (*plStack_1e0 != lVar11) {
                    _objc_enumerationMutation(uVar13);
                  }
                  uVar14 = *(ulong *)(lStack_1e8 + uVar12 * 8);
                  uVar6 = uVar14;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar6;
                  func_0x00010c122b80();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar4;
                  func_0x00010c0720c0();
                  _objc_release(uVar4);
                  _objc_release(uVar6);
                  if ((uVar5 & 1) == 0) {
                    func_0x00010bfe5ec0(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = uVar14;
                    func_0x00010c122b80();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar2);
                    _objc_release(uVar6);
                    _objc_release(uVar14);
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar3 != uVar12);
                uVar3 = uVar13;
                func_0x00010bf52a60();
              } while (uVar3 != 0);
            }
            _objc_release(uVar13);
            unaff_x22 = lStack_228;
            param_3 = lStack_220;
            lVar11 = lStack_1f8;
            uVar6 = uStack_208;
            uVar12 = uStack_200;
          }
LAB_104dd89a0:
          _objc_release(uVar6);
        }
        _objc_release(uVar12);
        lVar11 = lVar11 + 1;
      } while (lVar11 != param_3);
      puVar10 = &uStack_1b0;
      param_3 = lStack_210;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
  lVar11 = lStack_210;
  _objc_release(lStack_210);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puStack_218;
  _objc_release(uVar7);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(puVar2);
  lVar8 = lVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_248 = lVar11;
  pcStack_238 = FUN_104dd8a4c;
  lStack_260 = unaff_x22;
  puStack_258 = puVar2;
  lStack_250 = param_1;
  puStack_240 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  lVar11 = lVar8;
  func_0x00010bf36860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar11;
  func_0x00010bf529e0();
  if (lVar9 == 0) {
    _objc_release(lVar11);
  }
  else {
    lVar9 = lVar8;
    func_0x00010c2769c0();
    _objc_release(lVar11);
    if (lVar9 != 0) {
      _objc_initWeak(auStack_268,lVar8);
      uVar7 = *(undefined8 *)(lVar8 + 0x10);
      func_0x00010bf36860(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246920(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_270,auStack_268);
      _objc_retain(puVar10);
      func_0x00010c297260(uVar7);
      _objc_release(uVar7);
      _objc_release(lVar8);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_270);
      _objc_destroyWeak(auStack_268);
    }
  }
  _objc_release(puVar10);
  return;
}



/* Entry: 104dd8a4c; end: 104dd8bab; -[SCCommerceProductCatalogPDPSharingProvider _sortConversationsWithAdditionalText:] */

void FUN_104dd8a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf36860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010c2769c0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf36860(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246920(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010c297260(uVar3);
      _objc_release(uVar3);
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104dd8bac; end: 104dd8c17;  */

void FUN_104dd8bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9f8a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dd8c18; end: 104dd8e47; -[SCCommerceProductCatalogPDPSharingProvider _sendMessagesToConversations:error:additionalText:] */

void FUN_104dd8c18(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain(param_5);
  if (param_4 == 0) {
    uVar2 = param_3;
    func_0x00010bf026a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c2769c0(param_1);
    uVar1 = uVar2;
    func_0x0001086063f4(uVar2,lVar3,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x000108605dfc(uVar1,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf37880(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c116360(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf50b20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c15d840(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  else {
    func_0x000104df389c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be30020(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104dd8e48; end: 104dd8e7b;  */

void FUN_104dd8e48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104dd8e7c; end: 104dd8ecf; -[SCCommerceProductCatalogPDPSharingProvider _handleSharingCompletionWithResult:] */

void FUN_104dd8e7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7b7c0();
  }
  else {
    lVar1 = param_1;
    func_0x000104df389c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be30020(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104dd8ed0; end: 104dd8f23; -[SCCommerceProductCatalogPDPSharingProvider _handleSharingError:] */

void FUN_104dd8ed0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf79720();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dd8f24; end: 104dd8f2f; -[SCCommerceProductCatalogPDPSharingProvider productURL] */

void FUN_104dd8f24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 104dd8f30; end: 104dd8f37; -[SCCommerceProductCatalogPDPSharingProvider setProductURL:] */

void FUN_104dd8f30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104dd8f38; end: 104dd8f3f; -[SCCommerceProductCatalogPDPSharingProvider chatIds] */

undefined8 FUN_104dd8f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104dd8f40; end: 104dd8f47; -[SCCommerceProductCatalogPDPSharingProvider totalRecipientCount] */

undefined8 FUN_104dd8f40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104dd8f48; end: 104dd8fa3; -[SCCommerceProductCatalogPDPSharingProvider .cxx_destruct] */

void FUN_104dd8f48(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104dd8fa4; end: 104dd917b;  */

undefined8 FUN_104dd8fa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  func_0x00010c0be8a0(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104dd917c; end: 104dd9267;  */

void FUN_104dd917c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x11;
  return;
}



/* Entry: 104dd9268; end: 104dd9273; +[SCCommerceFitFinderCell sizeForWidth:] */

void FUN_104dd9268(void)

{
  return;
}



/* Entry: 104dd9274; end: 104dd92d3; -[SCCommerceFitFinderCell initWithFrame:] */

undefined1 * FUN_104dd9274(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4388;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104dd92d4; end: 104dd95e7; -[SCCommerceFitFinderCell _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dd92d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_90 = puVar1;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar16 = (long)_DAT_112713274;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar2;
  _objc_release(uVar14);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar1);
  lVar15 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar15);
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  uStack_a0 = uVar14;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  uStack_b0 = uVar14;
  uStack_88 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  uStack_c0 = uVar3;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf49420(0x3fd51eb860000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 4;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_90;
  func_0x00010befa160(puStack_90);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar15);
  _objc_release(lStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b0);
  _objc_release(lStack_a8);
  _objc_release(lStack_98);
  _objc_release(uStack_a0);
  puVar12 = puVar1;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_d8 = puVar1;
  pcStack_c8 = FUN_104dd95e8;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = uVar3;
  lStack_118 = lVar15;
  uStack_110 = uVar4;
  puStack_108 = puVar2;
  uStack_100 = uVar9;
  uStack_f8 = uVar14;
  lStack_f0 = lVar6;
  uStack_e8 = uVar7;
  lStack_e0 = lVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  puVar1 = PTR_PTR_1126b0870;
  if (*(long *)(puVar8 + _DAT_112713278) == 0) {
    lStack_158 = (long)_DAT_112713278;
    _objc_retain(in_x7);
    _objc_retain(in_x6);
    _objc_retain(in_x5);
    _objc_retain(in_x4);
    _objc_retain(uVar13);
    _objc_alloc();
    func_0x00010c033f60();
    _objc_release(uVar13);
    lVar15 = (long)_DAT_11271327c;
    uVar14 = *(undefined8 *)(puVar8 + lVar15);
    *(undefined **)(puVar8 + lVar15) = puVar1;
    uStack_160 = in_x4;
    _objc_release(uVar14);
    func_0x00010c219b60(*(undefined8 *)(puVar8 + lVar15));
    puVar1 = puVar8;
    func_0x00010bf4dce0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)(puVar8 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar8 + _DAT_112713274);
    uStack_168 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(puVar8 + lVar15);
    uStack_178 = uVar9;
    uStack_150 = uVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar8;
    uStack_188 = uVar14;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar1;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar8 + lVar15);
    uStack_1b8 = uVar14;
    uStack_148 = uVar14;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar8;
    uStack_1c8 = uVar9;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar8 + lVar15);
    uStack_190 = in_x5;
    uStack_140 = uVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf4dce0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    uStack_1a0 = in_x6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar3;
    uStack_1b0 = in_x7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_138 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1a8);
    _objc_release(puVar11);
    _objc_release(uVar14);
    _objc_release(puVar10);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(puVar1);
    _objc_release(puStack_1c0);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1b8);
    _objc_release(puStack_198);
    _objc_release(puStack_180);
    _objc_release(uStack_188);
    _objc_release(uStack_178);
    _objc_release(uStack_170);
    _objc_release(uStack_168);
    puVar1 = PTR_PTR_1126b0878;
    _objc_alloc();
    uVar4 = uStack_160;
    uVar3 = uStack_190;
    uVar9 = uStack_1a0;
    uVar14 = uStack_1b0;
    func_0x00010c0571c0();
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar14 = *(undefined8 *)(puVar8 + lStack_158);
    *(undefined **)(puVar8 + lStack_158) = puVar1;
    _objc_release(uVar14);
    func_0x00010bf9d620(puVar12);
    lVar15 = (long)_DAT_112713280;
    _objc_retain(puVar12);
    uVar14 = *(undefined8 *)(puVar8 + lVar15);
    *(undefined **)(puVar8 + lVar15) = puVar12;
    _objc_release(uVar14);
  }
  puVar1 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_104dd99dc;
  puStack_1f0 = puVar8;
  puStack_1e8 = puVar12;
  ppuStack_1e0 = &puStack_d0;
  func_0x00010c12e1e0(*(undefined8 *)(puVar1 + _DAT_112713280));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_1f8 = PTR_PTR_1126e4388;
  puStack_200 = puVar1;
  _objc_msgSendSuper2(&puStack_200,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104dd95e8; end: 104dd99db; -[SCCommerceFitFinderCell bindViewWithScopeExposer:presentingViewController:queryContext:productId:eventLogger:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dd95e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b0870;
  if (*(long *)(param_1 + _DAT_112713278) == 0) {
    lStack_98 = (long)_DAT_112713278;
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_alloc();
    func_0x00010c033f60();
    _objc_release(param_4);
    lVar8 = (long)_DAT_11271327c;
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar2;
    uStack_a0 = param_5;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8));
    lVar7 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar7);
    puStack_e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112713274);
    uStack_a8 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    uStack_b8 = uVar4;
    uStack_90 = uVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    uStack_c8 = uVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lStack_c0 = lVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar7;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    uStack_f8 = uVar3;
    uStack_88 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    uStack_108 = uVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lStack_100 = lVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    uStack_d0 = param_6;
    uStack_80 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar8;
    uStack_e0 = param_7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    uStack_f0 = param_8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_e8);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar7);
    _objc_release(lStack_100);
    _objc_release(uStack_108);
    _objc_release(uStack_f8);
    _objc_release(lStack_d8);
    _objc_release(lStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(uStack_a8);
    puVar2 = PTR_PTR_1126b0878;
    _objc_alloc();
    uVar1 = uStack_a0;
    uVar5 = uStack_d0;
    uVar4 = uStack_e0;
    uVar3 = uStack_f0;
    func_0x00010c0571c0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + lStack_98);
    *(undefined **)(param_1 + lStack_98) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf9d620(param_3);
    lVar7 = (long)_DAT_112713280;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = param_3;
    _objc_release(uVar3);
  }
  lVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_104dd99dc;
  lStack_130 = param_1;
  lStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c12e1e0(*(undefined8 *)(lVar7 + _DAT_112713280));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_138 = PTR_PTR_1126e4388;
  lStack_140 = lVar7;
  _objc_msgSendSuper2(&lStack_140,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104dd99dc; end: 104dd9a3f; -[SCCommerceFitFinderCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dd99dc(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + _DAT_112713280),param_2,
                      *(undefined8 *)(param_1 + _DAT_112713278));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126e4388;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104dd9a40; end: 104dd9a9f; -[SCCommerceFitFinderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dd9a40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713274,0);
  _objc_storeStrong(param_1 + _DAT_11271327c,0);
  _objc_storeStrong(param_1 + _DAT_112713280,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713278,0);
  return;
}



/* Entry: 104dd9aa0; end: 104dd9aab; +[SCCommerceLoadingCell sizeForWidth:] */

void FUN_104dd9aa0(void)

{
  return;
}



/* Entry: 104dd9aac; end: 104dd9afb; -[SCCommerceLoadingCell initWithFrame:] */

undefined1 * FUN_104dd9aac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4390;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104dd9afc; end: 104dd9b53; -[SCCommerceLoadingCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dd9afc(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4390;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  lVar1 = (long)_DAT_112713284;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104dd9b54; end: 104dd9d2b; -[SCCommerceLoadingCell _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dd9b54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126afd30;
  _objc_alloc();
  func_0x00010bfffc60();
  lVar10 = (long)_DAT_112713284;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c1a8560(*(undefined8 *)(param_1 + lVar10));
  lVar7 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(lVar7);
  _objc_release(uVar2);
  lVar7 = *(long *)(param_1 + lVar10);
  func_0x00010c24dbc0(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar7 + _DAT_112713284,0);
  return;
}



/* Entry: 104dd9d2c; end: 104dd9d3f; -[SCCommerceLoadingCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dd9d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713284,0);
  return;
}



/* Entry: 104dd9d40; end: 104dd9d4b; +[SCCommerceProductButtonCell sizeForWidth:] */

void FUN_104dd9d40(void)

{
  return;
}



/* Entry: 104dd9d4c; end: 104dd9d9b; -[SCCommerceProductButtonCell initWithFrame:] */

undefined1 * FUN_104dd9d4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104dd9d9c; end: 104dd9e97; -[SCCommerceProductButtonCell populateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dd9d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112713288;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11271328c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c22cae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar2,param_2,uVar1,0);
  _objc_release(uVar1);
  if (*(long *)(param_1 + lVar4) == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112713290),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112713290),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c076be0(uVar1);
    func_0x00010c1beb60(*(undefined8 *)(param_1 + lVar3),param_2,uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c071800(uVar1);
    func_0x00010c195460(*(undefined8 *)(param_1 + lVar3),param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104dd9e98; end: 104dda0cf; -[SCCommerceProductButtonCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dd9e98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_112713294;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11271328c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar4),param_2,0x7b,0);
  func_0x00010c16e480(*(undefined8 *)(param_1 + lVar4),param_2,0x6f,2);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                      PTR_s__buttonPressed_1125264f8,0x40);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                      &PTR____CFConstantStringClassReference_110db3c58);
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126b0880;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_112713290;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  lVar4 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e480();
  func_0x00010c182b00(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010bee3600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104dda0d0; end: 104dda6b7; -[SCCommerceProductButtonCell _updateViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dda0d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11271328c;
  uVar2 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar20;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar21);
  uStack_88 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493c0(0x4036000000000000,uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar21);
  uStack_80 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493c0(0xc036000000000000,uVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar20);
  _objc_release(uVar2);
  lVar20 = (long)_DAT_112713290;
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar20);
  uStack_a8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar20);
  uStack_a0 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c2793a0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar16;
  func_0x00010bf493a0(uVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  uStack_98 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf1ff80(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar18;
  func_0x00010bf493a0(uVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar2);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar12);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar5);
  lVar21 = (long)_DAT_112713294;
  uVar5 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar21);
  uStack_c8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar21);
  uStack_c0 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar21);
  uStack_b8 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar15;
  func_0x00010bf49420(0x3fd51eb860000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b0 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(uVar2);
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(uVar14);
  _objc_release(uVar8);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar20);
  _objc_release(uVar5);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = (long)_DAT_112713298;
  puVar13 = puVar1 + lVar20;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar13 != (undefined *)0x0) {
    puVar1 = puVar1 + lVar20;
    _objc_loadWeakRetained(puVar1);
    func_0x00010c22cb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104dda6b8; end: 104dda71b; -[SCCommerceProductButtonCell _buttonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dda6b8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713298;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010c22cb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104dda71c; end: 104dda73b; -[SCCommerceProductButtonCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dda71c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112713298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104dda73c; end: 104dda74f; -[SCCommerceProductButtonCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dda73c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112713298,param_3);
  return;
}



/* Entry: 104dda750; end: 104dda7bb; -[SCCommerceProductButtonCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dda750(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713298);
  _objc_storeStrong(param_1 + _DAT_112713290,0);
  _objc_storeStrong(param_1 + _DAT_11271328c,0);
  _objc_storeStrong(param_1 + _DAT_112713294,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713288,0);
  return;
}



/* Entry: 104dda7bc; end: 104dda94f; +[SCCommerceProductDescriptionCell sizeForWidth:viewModel:descriptionIsExpanded:] */

undefined1  [16]
FUN_104dda7bc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c115e00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  dVar4 = 3.4028234663852886e+38;
  dVar5 = dVar4;
  func_0x00010c14dd20(param_1 + -66.0 + -20.0,0x47efffffe0000000,uVar1,param_3,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  dVar5 = dVar5 + 16.330000013113022 + 16.0;
  if (param_5 == 0) {
    dVar5 = dVar5 + 0.33000001311302185;
  }
  else {
    uVar1 = param_4;
    func_0x00010c115dc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dd20(param_1 + -44.0,0x47efffffe0000000,uVar1,param_3,uVar3,0);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    dVar5 = dVar5 + dVar4 + 16.0;
  }
  _objc_release(param_4);
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 104dda950; end: 104dda99f; -[SCCommerceProductDescriptionCell initWithFrame:] */

undefined1 * FUN_104dda950(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e43a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104dda9a0; end: 104ddab2b; -[SCCommerceProductDescriptionCell setViewModel:shouldExpandDescription:commerceIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104dda9a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11271329c;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c115dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127132a0),param_2,uVar2);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + lVar3);
  if (lVar4 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127132a4),param_2,1);
    lVar3 = (long)_DAT_1127132a8;
    func_0x00010c1b4520(*(undefined8 *)(param_1 + lVar3),param_2,1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c087500(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127132a4),param_2,0);
    lVar5 = (long)_DAT_1127132a8;
    func_0x00010c1b4520(*(undefined8 *)(param_1 + lVar5),param_2,0);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c115e00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c087500(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127132ac),param_2,lVar4 == 0);
  func_0x00010be1e980(param_1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010bed8460(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ddab2c; end: 104ddac2b; -[SCCommerceProductDescriptionCell _updateForDescriptionToggleState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddab2c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = (long)_DAT_1127132a0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  if ((param_3 & 1) == 0) {
    func_0x00010c212f20(uVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    dVar3 = 0.0;
  }
  else {
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,uVar1);
    _objc_release(uVar1);
    dVar3 = 565.4866776461628;
  }
  lVar2 = (long)_DAT_1127132a4;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_70);
  _CGAffineTransformMakeRotation(&uStack_a0,dVar3 / 180.0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_70);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(param_1);
  return;
}



/* Entry: 104ddac2c; end: 104ddafd3; -[SCCommerceProductDescriptionCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddac2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_1127132b0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126b0888;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_1127132a8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c087500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c087500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar2);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_1127132a4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3),param_2,
                      &PTR____CFConstantStringClassReference_110db3c78);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_1127132a0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,0x17);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_1127132ac;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  func_0x00010bee3600(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ddafd4; end: 104ddb997; -[SCCommerceProductDescriptionCell _updateViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddafd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_1127132b0;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  uStack_a0 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  uStack_98 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar19);
  uStack_90 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf49420(0x3fd51eb860000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_a0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(uVar2);
  lVar15 = (long)_DAT_1127132a8;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar13;
  func_0x00010bf493c0(0x4030000000000000,uVar13,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  uStack_b8 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493c0(0x4036000000000000,uVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_b0 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_1127132a4;
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c08de00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493c0(0xc036000000000000,uVar7,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar13);
  uVar2 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  uStack_d8 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010bf493c0(0xc036000000000000,uVar7,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar17);
  uStack_d0 = uVar13;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  uStack_c8 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar14;
  func_0x00010bf49420(0x4037000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c0 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  lVar19 = (long)_DAT_1127132a0;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493c0(0x4030000000000000,uVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  uStack_f8 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar7;
  func_0x00010bf493c0(0x4036000000000000,uVar7,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar19);
  uStack_f0 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar11;
  func_0x00010bf493c0(0xc036000000000000,uVar11,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  uStack_e8 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf494e0(0x3fd51eb860000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_e0 = uVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_f8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(uVar6);
  _objc_release(lVar16);
  _objc_release(lVar17);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar2);
  lVar18 = (long)_DAT_1127132ac;
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_118 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  uStack_110 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar18);
  uStack_108 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_118,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release(uVar5);
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(uVar2);
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010c181cc0(0x437a0000,*(undefined8 *)(param_1 + lVar19),param_2,1);
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar19),param_2,1);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = (long)_DAT_1127132b4;
  puVar12 = puVar1 + lVar16;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar12 != (undefined *)0x0) {
    puVar1 = puVar1 + lVar16;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bf6e3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104ddb998; end: 104ddb9fb; -[SCCommerceProductDescriptionCell _descriptionTogglePressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddb998(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127132b4;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf6e3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104ddb9fc; end: 104ddbae7; -[SCCommerceProductDescriptionCell _getDetailsCaretIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddb9fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_1127132a4);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bfe55a0(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ddbae8; end: 104ddbb2f;  */

void FUN_104ddbae8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ddbb30; end: 104ddbc17; -[SCCommerceProductDescriptionCell _updateDetailsCaretWithImage:] */

void FUN_104ddbb30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_48 = 0x104ddbbe4;
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



/* Entry: 104ddbc18; end: 104ddbc27; -[SCCommerceProductDescriptionCell _setDetailsCaretImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddbc18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127132a4),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 104ddbc28; end: 104ddbc47; -[SCCommerceProductDescriptionCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddbc28(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127132b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ddbc48; end: 104ddbc5b; -[SCCommerceProductDescriptionCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddbc48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127132b4,param_3);
  return;
}



/* Entry: 104ddbc5c; end: 104ddbce7; -[SCCommerceProductDescriptionCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddbc5c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127132b4);
  _objc_storeStrong(param_1 + _DAT_1127132ac,0);
  _objc_storeStrong(param_1 + _DAT_1127132a4,0);
  _objc_storeStrong(param_1 + _DAT_1127132a0,0);
  _objc_storeStrong(param_1 + _DAT_1127132a8,0);
  _objc_storeStrong(param_1 + _DAT_1127132b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271329c,0);
  return;
}



/* Entry: 104ddbce8; end: 104ddbcef; +[SCCommerceProductGalleryCell sizeForWidth:] */

void FUN_104ddbce8(void)

{
  return;
}



/* Entry: 104ddbcf0; end: 104ddbd3f; -[SCCommerceProductGalleryCell initWithFrame:] */

undefined1 * FUN_104ddbcf0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e43a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beab960(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ddbd40; end: 104ddbe3b; -[SCCommerceProductGalleryCell populateWithModel:imageSourceProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddbd40(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127132b8);
  *(ulong *)(param_1 + _DAT_1127132b8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar1 = param_3;
  func_0x00010bfe9060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  lVar4 = (long)_DAT_1127132bc;
  func_0x00010c1cfc60(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfe9060(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,uVar2 < 2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127132c0);
  *(undefined8 *)(param_1 + _DAT_1127132c0) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_1127132c4));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ddbe3c; end: 104ddc1e7; -[SCCommerceProductGalleryCell _setupCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104ddbe3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b0890;
  _objc_alloc();
  func_0x00010c030560();
  lVar19 = (long)_DAT_1127132bc;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar18);
  puVar1 = PTR_PTR_1126b0898;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar20 = (long)_DAT_1127132c4;
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar20),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20),param_2,0);
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  puVar1 = PTR_PTR_1126b08a0;
  _objc_opt_class(PTR_PTR_1126b08a0);
  func_0x00010c126000(uVar18,param_2,puVar1,&PTR____CFConstantStringClassReference_110db3cb8);
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  uStack_88 = uVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar20);
  uStack_80 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar20);
  uStack_78 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar17);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar18);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar20),param_2,param_1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar20),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar20),param_2,param_1);
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c1f7f20(uVar18,param_2,*(undefined8 *)(param_1 + lVar19));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar18;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 104ddc1e8; end: 104ddc1ef; -[SCCommerceProductGalleryCell collectionView:numberOfItemsInSection:] */

undefined8 FUN_104ddc1e8(void)

{
  return 1;
}



/* Entry: 104ddc1f0; end: 104ddc30b; -[SCCommerceProductGalleryCell collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddc1f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db3cb8,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar5 = (long)_DAT_1127132b8;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfe9060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  uVar4 = uVar1;
  func_0x00010c0dfd40(uVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127132c0);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf4cbe0(uVar3);
  func_0x00010c103e00(param_3,param_2,puVar2,uVar4,uVar3);
  func_0x00010c18b5e0(param_3,param_2,param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104ddc30c; end: 104ddc39f; -[SCCommerceProductGalleryCell didLoadImage:forCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddc30c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127132c4);
  _objc_retain(param_3);
  func_0x00010bfecfa0(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127132c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf77980();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ddc3a0; end: 104ddc3bf; -[SCCommerceProductGalleryCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddc3a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127132c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ddc3c0; end: 104ddc3d3; -[SCCommerceProductGalleryCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddc3c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127132c8,param_3);
  return;
}



/* Entry: 104ddc3d4; end: 104ddc43f; -[SCCommerceProductGalleryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddc3d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127132c8);
  _objc_storeStrong(param_1 + _DAT_1127132c0,0);
  _objc_storeStrong(param_1 + _DAT_1127132bc,0);
  _objc_storeStrong(param_1 + _DAT_1127132c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127132b8,0);
  return;
}



/* Entry: 104ddc440; end: 104ddc48f; -[SCCommerceProductGalleryImageCell initWithFrame:] */

undefined1 * FUN_104ddc440(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e43b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bead1a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ddc490; end: 104ddc7c3; -[SCCommerceProductGalleryImageCell populateWithImage:imageSourceProvider:contentMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddc490(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c182220(*(undefined8 *)(param_1 + _DAT_1127132cc));
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar9 = (long)_DAT_1127132d0;
    uVar1 = *(ulong *)(param_1 + lVar9);
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010beec820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar9);
      *(long *)(param_1 + lVar9) = param_3;
      _objc_release(uVar4);
      func_0x00010be93b40(param_1);
      puVar5 = PTR_PTR_1126b08a8;
      _objc_alloc(PTR_PTR_1126b08a8);
      puVar6 = PTR_PTR_1126b08b0;
      lVar2 = param_3;
      func_0x00010beec820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33760(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003ac0(puVar5);
      _objc_release(puVar6);
      _objc_release(lVar2);
      puVar7 = PTR_PTR_1126b08b8;
      _objc_alloc(PTR_PTR_1126b08b8);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar2 = param_3;
      func_0x00010beec820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc2580(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0295e0(puVar7);
      lVar9 = param_4;
      func_0x00010bf55f20();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)_DAT_1127132d4;
      uVar4 = *(undefined8 *)(param_1 + lVar10);
      *(long *)(param_1 + lVar10) = lVar9;
      _objc_release(uVar4);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(lVar2);
      puVar6 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      lVar2 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011b80(puVar6);
      _objc_release(lVar2);
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + lVar10);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      func_0x00010bfa78e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + _DAT_1127132d8);
      *(undefined8 *)(param_1 + _DAT_1127132d8) = uVar4;
      _objc_release(uVar8);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ddc7c4; end: 104ddc85f;  */

void FUN_104ddc7c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 104ddc860; end: 104ddce6b; -[SCCommerceProductGalleryImageCell _setupImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ddc860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar18 = (long)_DAT_1127132cc;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08c0e0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08c0e0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar18),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar18));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bf493c0(0x4018000000000000,uVar2,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  uStack_b0 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf493c0(0x4036000000000000,uVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  uStack_a8 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0xc036000000000000,uVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  uStack_a0 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0xc018000000000000,uVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar17);
  _objc_release(lVar19);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0880;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  lVar19 = (long)_DAT_1127132dc;
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar1;
  _objc_release(uVar17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar19));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  uStack_d0 = uVar17;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar19);
  uStack_c8 = uVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar19);
  uStack_c0 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar17);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
  func_0x00010c182b00(*(undefined8 *)(param_1 + lVar19),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf4dce0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar17);
  _objc_release(puVar1);
  uVar16 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar17);
  _objc_release(uVar16);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar19),param_2,1);
  func_0x00010c103e00(param_1,param_2,0,0,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = (long)_DAT_1127132cc;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar19),param_2,1);
  lVar19 = (long)_DAT_1127132dc;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar19),param_2,0);
  func_0x00010c1ff520(*(undefined8 *)(param_1 + lVar19),param_2,1);
  uVar17 = *(undefined8 *)(param_1 + _DAT_1127132d4);
  *(undefined8 *)(param_1 + _DAT_1127132d4) = 0;
  _objc_release(uVar17);
  lVar19 = (long)_DAT_1127132d8;
  uVar17 = 0;
  if (*(long *)(param_1 + lVar19) != 0) {
    func_0x00010bf2dba0();
    uVar17 = *(undefined8 *)(param_1 + lVar19);
  }
  *(undefined8 *)(param_1 + lVar19) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar17);
  return;
}


