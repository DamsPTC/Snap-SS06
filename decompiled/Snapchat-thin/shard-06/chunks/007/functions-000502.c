/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d96170; end: 104d9644f; -[SCCommerceDeltaSyncProcessor _processSyncItem:transactionContext:] */

bool FUN_104d96170(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_104d96450;
  uStack_50 = 0x104d96460;
  uStack_48 = 0;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0580();
  _objc_release(uVar2);
  _objc_release(param_3);
  if (puStack_68[5] == 0) {
    bVar1 = false;
    goto LAB_104d96390;
  }
  puVar3 = PTR_PTR_1126b0498;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar5 = PTR_PTR_1126b0460;
  puVar4 = puVar3;
  func_0x00010bfa1020(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  bVar1 = false;
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x00010beedca0();
    if ((int)puVar4 == 1) {
      puVar4 = puVar5;
      FUN_104d976ec(puVar5,0);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010c25ed40(param_4);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar6 != 0;
      _objc_release();
    }
    else {
      if ((int)puVar4 != 2) {
        bVar1 = false;
        goto LAB_104d96378;
      }
      puVar4 = PTR_PTR_1126b04a0;
      FUN_104d97678(PTR_PTR_1126b04a0,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      bVar1 = true;
    }
    _objc_release(puVar4);
  }
LAB_104d96378:
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(0);
LAB_104d96390:
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 104d96450; end: 104d96467;  */

void FUN_104d96450(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d96468; end: 104d9649f;  */

void FUN_104d96468(long param_1,undefined8 param_2)

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



/* Entry: 104d964a0; end: 104d964cf; -[SCCommerceDeltaSyncProcessor .cxx_destruct] */

void FUN_104d964a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d964d0; end: 104d9661f; -[SCFavoritesDataModelsDocStore fetchFavoriteItems] */

void FUN_104d964d0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b0430);
  if (lVar1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,lVar1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar2 = &uStack_70;
  func_0x00010054c81c(puVar2,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lVar1);
  func_0x00010bebe080(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104d96620; end: 104d96657;  */

long FUN_104d96620(long param_1)

{
  func_0x0001000e76e0(param_1 + 0x28);
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 104d96658; end: 104d9678b; -[SCFavoritesDataModelsDocStore fetchObservableFavoriteItems] */

void FUN_104d96658(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_64;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b0430);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_48,param_1);
  }
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_64 = 0;
  puVar2 = &uStack_48;
  func_0x000108c7f714(puVar2,&lStack_60,&uStack_64);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010c0b8600(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d9678c; end: 104d967ab;  */

void FUN_104d9678c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d967ac; end: 104d96903; -[SCFavoritesDataModelsDocStore fetchFavoriteItemsWithCompletion:] */

void FUN_104d967ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_104d96904;
    uStack_40 = 0x104d96914;
    uStack_38 = 0;
    func_0x00010bf87660(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c0f8500(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104d96904; end: 104d9691b;  */

void FUN_104d96904(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d9691c; end: 104d96a4b;  */

void FUN_104d9691c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b0430);
  if (param_2 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_2);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
  return;
}



/* Entry: 104d96a4c; end: 104d96abf;  */

void FUN_104d96a4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bebe080(uVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28)
                     );
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d96ac0; end: 104d96bfb; -[SCFavoritesDataModelsDocStore storeFavoriteItem:completion:] */

void FUN_104d96ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010bf87660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104d96bfc;
    puStack_50 = &UNK_11084f688;
    _objc_retain(param_3);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104d96c88;
    puStack_78 = &UNK_11084f6b8;
    uStack_48 = param_3;
    _objc_retain(param_4);
    lStack_70 = param_4;
    func_0x00010c0f8500(param_1,param_2,&puStack_68,0,&puStack_90);
    _objc_release(param_1);
    _objc_release(lStack_70);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d96bfc; end: 104d96c87;  */

void FUN_104d96bfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_104d976ec(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d96c88; end: 104d96c93;  */

void FUN_104d96c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104d96c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104d96c94; end: 104d96def; -[SCFavoritesDataModelsDocStore removeFavoriteItemWithProductId:completion:] */

void FUN_104d96c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar2 = PTR_PTR_1126b0430;
    _objc_alloc();
    func_0x00010c03a7c0(0);
    func_0x00010bf87660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104d96df0;
    puStack_50 = &UNK_11084f688;
    _objc_retain(puVar2);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104d96e80;
    puStack_78 = &UNK_11084f6b8;
    puStack_48 = puVar2;
    _objc_retain(param_4);
    lStack_70 = param_4;
    func_0x00010c0f8500(param_1,param_2,&puStack_68,0,&puStack_90);
    _objc_release(param_1);
    _objc_release(lStack_70);
    _objc_release(puStack_48);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 104d96df0; end: 104d96e7f;  */

void FUN_104d96df0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b04a0;
  FUN_104d97678(PTR_PTR_1126b04a0,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d96e80; end: 104d96e8b;  */

void FUN_104d96e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104d96e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104d96e8c; end: 104d96fd3; -[SCFavoritesDataModelsDocStore removeAllFavoritesWithCompletion:] */

void FUN_104d96e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bfa6a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d96fd4;
  puStack_50 = &UNK_11084f688;
  _objc_retain(uVar2);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104d97154;
  puStack_78 = &UNK_11084f6b8;
  uStack_48 = uVar2;
  _objc_retain(param_3);
  uStack_70 = param_3;
  func_0x00010c0f8500(param_1,param_2,&puStack_68,0,&puStack_90);
  _objc_release(param_1);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104d96fd4; end: 104d97153;  */

void FUN_104d96fd4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      puVar3 = PTR_PTR_1126b04a0;
      FUN_104d97678(PTR_PTR_1126b04a0,*(undefined8 *)(lVar6 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  _objc_release(param_2);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000104d9715c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))();
  return;
}



/* Entry: 104d97154; end: 104d9715f;  */

void FUN_104d97154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104d9715c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104d97160; end: 104d97187; -[SCFavoritesDataModelsDocStore _sortFavoriteItems:] */

void FUN_104d97160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_11084f708);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d97188; end: 104d97217;  */

undefined8 FUN_104d97188(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c2709c0(param_3);
  dVar2 = param_1;
  func_0x00010c2709c0(param_4);
  uVar1 = 0xffffffffffffffff;
  if (param_1 <= dVar2) {
    uVar1 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104d97218; end: 104d9721f; -[SCFavoritesDataModelsDocStore docObjectContext] */

undefined8 FUN_104d97218(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104d97220; end: 104d9724f; -[SCFavoritesDataModelsDocStore setDocObjectContext:] */

void FUN_104d97220(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104d97250; end: 104d9725b; -[SCFavoritesDataModelsDocStore .cxx_destruct] */

void FUN_104d97250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d9725c; end: 104d9726f;  */

undefined1  [16] FUN_104d9725c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  FUN_104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_104bd35f4();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = "commerce__favorite__item";
  return auVar3;
}



/* Entry: 104d97270; end: 104d972a3;  */

undefined1  [16] FUN_104d97270(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_104bd35f4();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = "commerce__favorite__item";
  return auVar3;
}



/* Entry: 104d972a4; end: 104d972af; +[SCCommerceFavoriteItem table] */

char * FUN_104d972a4(void)

{
  return "commerce__favorite__item";
}



/* Entry: 104d972b0; end: 104d97343; +[SCCommerceFavoriteItem immutableObjectParse:bufferSize:] */

void FUN_104d972b0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  _objc_alloc(PTR_PTR_1126b0430);
  uVar2 = *(ushort *)((long)piVar1 - (long)*piVar1);
  uVar4 = 0;
  if (((4 < uVar2) && (6 < uVar2)) &&
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 != 0)) {
    uVar4 = *(undefined8 *)((long)piVar1 + uVar3);
  }
  func_0x00010c03a7c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d97344; end: 104d97367; +[SCCommerceFavoriteItem objectClassFunctionPointer] */

undefined1  [16] FUN_104d97344(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x104d97360;
  auVar1._0_8_ = 0x104d97358;
  return auVar1;
}



/* Entry: 104d97368; end: 104d97677;  */

void FUN_104d97368(undefined8 param_1,undefined *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar1 = &puStack_60;
  ppuVar6 = &puStack_60;
  _objc_retain();
  if (param_2 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar7 < 0) {
      puVar7 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010bf636c0();
      _objc_release(puVar7);
      func_0x0001001b9e08(puVar2,
                          "SELECT rowid, p FROM commerce__favorite__item WHERE productId=?1 LIMIT 1"
                         );
      if (puVar2 != (undefined *)0x0) {
        puVar7 = param_2;
        func_0x00010c115e60(param_2);
        _sqlite3_bind_int64(puVar2,1,puVar7);
        puVar7 = puVar2;
        _sqlite3_step();
        if ((int)puVar7 == 100) {
          puVar3 = puVar2;
          _sqlite3_column_int64(puVar2,0);
          puVar4 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126b0430);
          _sqlite3_column_blob(puVar2,1);
          _sqlite3_column_bytes(puVar2,1);
          puVar7 = puVar4;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          _objc_release(puVar4);
          _sqlite3_reset(puVar2);
          if (puVar7 != (undefined *)0x0) {
            puVar2 = PTR_PTR_1126b04a0;
            _objc_alloc();
            puVar4 = puVar7;
            func_0x00010c115e60();
            func_0x00010c2709c0(puVar7);
            puVar5 = puVar7;
            func_0x00010c247520();
            puVar8 = (undefined1 *)0x0;
            param_2 = puVar7;
            if (puVar2 == (undefined *)0x0) goto LAB_104d97604;
            puStack_58 = PTR_PTR_1126e4258;
            puStack_60 = puVar2;
            _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
            goto LAB_104d9746c;
          }
          goto LAB_104d9748c;
        }
      }
      puVar8 = (undefined1 *)0x0;
      goto LAB_104d97604;
    }
    puVar3 = param_2;
    func_0x00010c1422e0();
    puVar2 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b0430);
    puVar7 = puVar2;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar2);
    if (puVar7 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126b04a0;
      _objc_alloc();
      puVar4 = puVar7;
      func_0x00010c115e60();
      func_0x00010c2709c0(puVar7);
      puVar5 = puVar7;
      func_0x00010c247520();
      param_2 = puVar7;
      puVar8 = (undefined1 *)0x0;
      if (puVar2 == (undefined *)0x0) goto LAB_104d97604;
      puStack_58 = PTR_PTR_1126e4258;
      puStack_60 = puVar2;
      _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
      ppuVar6 = ppuVar1;
LAB_104d9746c:
      param_2 = puVar7;
      puVar8 = (undefined1 *)ppuVar6;
      if (ppuVar6 != (undefined **)0x0) {
        *(undefined **)((long)ppuVar6 + 8) = puVar3;
        *(undefined **)((long)ppuVar6 + 0x18) = puVar4;
        *(undefined8 *)((long)ppuVar6 + 0x20) = param_1;
        *(undefined **)((long)ppuVar6 + 0x28) = puVar5;
      }
      goto LAB_104d97604;
    }
  }
LAB_104d9748c:
  puVar8 = (undefined1 *)0x0;
  param_2 = puVar7;
LAB_104d97604:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104d97678; end: 104d976eb;  */

void FUN_104d97678(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_104d97368();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d976ec; end: 104d978bb;  */

void FUN_104d976ec(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_60;
  _objc_retain();
  puVar1 = PTR_PTR_1126b04a0;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_104d97368();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar6 = PTR_PTR_1126b04a0;
    _objc_retain(param_2);
    _objc_opt_self(puVar6);
    if (param_2 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126b04a0;
      _objc_opt_new();
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    }
    else {
      puVar2 = PTR_PTR_1126b04a0;
      _objc_alloc();
      puVar3 = param_2;
      func_0x00010c115e60();
      func_0x00010c2709c0(param_2);
      puVar4 = param_2;
      func_0x00010c247520();
      puVar6 = (undefined *)0x0;
      if (puVar2 != (undefined *)0x0) {
        puStack_58 = PTR_PTR_1126e4258;
        puStack_60 = puVar2;
        _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
        puVar6 = (undefined *)ppuVar5;
        if (ppuVar5 != (undefined **)0x0) {
          *(undefined8 *)((long)ppuVar5 + 8) = 0xffffffffffffffff;
          *(undefined **)((long)ppuVar5 + 0x18) = puVar3;
          *(undefined8 *)((long)ppuVar5 + 0x20) = param_1;
          *(undefined **)((long)ppuVar5 + 0x28) = puVar4;
        }
      }
    }
    *(undefined4 *)(puVar6 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar6 = param_2;
    func_0x00010c115e60();
    *(undefined **)(puVar1 + 0x18) = puVar6;
    func_0x00010c2709c0(param_2);
    *(undefined8 *)(puVar1 + 0x20) = param_1;
    puVar6 = param_2;
    func_0x00010c247520();
    *(undefined **)(puVar1 + 0x28) = puVar6;
    _objc_retain(puVar1);
    puVar6 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104d978bc; end: 104d97923;  */

void FUN_104d978bc(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b0430;
    _objc_alloc(PTR_PTR_1126b0430);
    func_0x00010c03a7c0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d97924; end: 104d9792f; -[SCCommerceFavoriteItemChangeRequest table] */

char * FUN_104d97924(void)

{
  return "commerce__favorite__item";
}



/* Entry: 104d97930; end: 104d97977; -[SCCommerceFavoriteItemChangeRequest createTableWithSQLite:] */

void FUN_104d97930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dd8b408,0x8d,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 104d97978; end: 104d97d0f; -[SCCommerceFavoriteItemChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_104d97978(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x10);
  puVar4 = param_1;
  if (iVar2 == 1) {
    FUN_104d978bc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_104d97d10(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar9;
    lVar5 = param_3;
    func_0x0001001b9e08(param_3,
                        "INSERT INTO commerce__favorite__item (p, productId) VALUES (?1, ?2)");
    if (lVar5 == 0) goto LAB_104d97cac;
    _sqlite3_bind_blob(lVar5,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    _sqlite3_bind_int64(lVar5,2,uVar8);
    _sqlite3_step();
    if ((int)lVar5 != 0x65) goto LAB_104d97cac;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar4);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b0430);
    func_0x00010c21c9a0(puVar7);
LAB_104d97c94:
    _objc_release(puVar7);
    _objc_retain(puVar4);
    puVar7 = puVar4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,"DELETE FROM commerce__favorite__item WHERE rowid=?1");
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b0430);
            func_0x00010c21c9a0(puVar4);
            _objc_release(puVar7);
            _objc_release(puVar4);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_104d97cb8;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_104d97cb8;
    }
    FUN_104d978bc(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    FUN_104d97d10(param_4,puVar4);
    func_0x0001001ce6fc(param_4,lVar5,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar3 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,
                        "UPDATE commerce__favorite__item SET p=?1, productId=?3 WHERE rowid=?2 LIMIT 1"
                       );
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar6 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      _sqlite3_bind_int64(param_3,3,uVar8);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b0430);
        func_0x00010c21c9a0(puVar7);
        goto LAB_104d97c94;
      }
    }
LAB_104d97cac:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_104d97cb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104d97d10; end: 104d97df3;  */

long FUN_104d97d10(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c115e60(param_3);
  func_0x00010c2709c0(param_3);
  uVar5 = param_3;
  func_0x00010c247520(param_3);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce1c8(param_2,8,uVar5 & 0xffffffff,0);
  func_0x0001001ce11c(param_1,0,param_2,6);
  func_0x0001001ce170(param_2,4,uVar4,0);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 104d97df4; end: 104d97e5b; +[AddFavoriteRequest descriptor] */

void FUN_104d97df4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f9dd0,
                        &PTR____CFConstantStringClassReference_110db1ff8,
                        &PTR_s_com_snapchat_item_favoriting_wir_1130b10c8,
                        &PTR_s_deviceContext_1130b10e0,2,0x18,0x1c);
    puRam00000001136b8b40 = puVar1;
  }
  return;
}



/* Entry: 104d97e5c; end: 104d97f3f; +[AddFavoriteResponse descriptor] */

void FUN_104d97e5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8b48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f9e20,
                        &PTR____CFConstantStringClassReference_110db2018,
                        &PTR_s_com_snapchat_item_favoriting_wir_1130b10c8,0,0,4,0x1c);
    puRam00000001136b8b48 = puVar1;
  }
  return;
}



/* Entry: 104d97f40; end: 104d97f4b;  */

bool FUN_104d97f40(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 104d97f4c; end: 104d97fb3; +[DeltaSyncResponseItem descriptor] */

void FUN_104d97f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8b58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f9ec0,
                        &PTR____CFConstantStringClassReference_110db2058,
                        &PTR_s_com_snapchat_item_favoriting_wir_1130b1120,
                        &PTR_s_favoriteItem_1130b1138,2,0x10,0x1c);
    puRam00000001136b8b58 = puVar1;
  }
  return;
}



/* Entry: 104d97fb4; end: 104d9801b; +[RemoveFavoriteRequest descriptor] */

void FUN_104d97fb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8b60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f9f60,
                        &PTR____CFConstantStringClassReference_110db2078,
                        &PTR_s_com_snapchat_item_favoriting_wir_1130b1178,
                        &PTR_s_deviceContext_1130b1190,2,0x18,0x1c);
    puRam00000001136b8b60 = puVar1;
  }
  return;
}



/* Entry: 104d9801c; end: 104d980ff; +[RemoveFavoriteResponse descriptor] */

void FUN_104d9801c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8b68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129f9fb0,
                        &PTR____CFConstantStringClassReference_110db2098,
                        &PTR_s_com_snapchat_item_favoriting_wir_1130b1178,0,0,4,0x1c);
    puRam00000001136b8b68 = puVar1;
  }
  return;
}



/* Entry: 104d98100; end: 104d9810b;  */

bool FUN_104d98100(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 104d9810c; end: 104d98187;  */

undefined * FUN_104d9810c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136b8b78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110db20d8,
                        &UNK_10dd8b518,&UNK_10dd8b534,3,FUN_104d98188,0);
    do {
      if (puRam00000001136b8b78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136b8b78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136b8b78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136b8b78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136b8b78;
}



/* Entry: 104d98188; end: 104d98193;  */

bool FUN_104d98188(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 104d98194; end: 104d98277; +[FavoriteItem descriptor] */

void FUN_104d98194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8b80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa050,
                        &PTR____CFConstantStringClassReference_110db20f8,
                        &PTR_s_com_snapchat_item_favoriting_wir_1130b11d0,
                        &PTR_s_snapItemId_1130b11e8,4,0x20,0x1c);
    puRam00000001136b8b80 = puVar1;
  }
  return;
}



/* Entry: 104d98278; end: 104d98283;  */

bool FUN_104d98278(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 104d98284; end: 104d982eb; +[ItemFavoritingDeviceContext descriptor] */

void FUN_104d98284(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b8b90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_1129fa0f0,
                        &PTR____CFConstantStringClassReference_110db2138,
                        &PTR_s_com_snapchat_item_favoriting_wir_1130b1268,
                        &PTR_s_deviceType_1130b1280,2,0x10,0x1c);
    puRam00000001136b8b90 = puVar1;
  }
  return;
}



/* Entry: 104d982ec; end: 104d9846f; -[SCCommercePaymentSettingsRowEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d982ec(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b04b0;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112712b9c);
  lVar2 = param_1 + _DAT_112712bb0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112712ba8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112712bac;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041fa0(puVar1,param_2,uVar10,lVar3,lVar6,lVar9);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112712ba0);
  *(undefined **)(param_1 + _DAT_112712ba0) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112712ba4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d98470; end: 104d984df; -[SCCommercePaymentSettingsRowEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d98470(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712b9c,0);
  _objc_destroyWeak(param_1 + _DAT_112712bb0);
  _objc_destroyWeak(param_1 + _DAT_112712bac);
  _objc_destroyWeak(param_1 + _DAT_112712ba8);
  _objc_destroyWeak(param_1 + _DAT_112712ba4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712ba0,0);
  return;
}



/* Entry: 104d984e0; end: 104d9871f; -[SCCommercePaymentSettingsRowProvider initWithScopeExposer:configProvider:grapheneRegistry:blizzardUserLogger:] */

undefined8 *
FUN_104d984e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e4260;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeae0;
    func_0x00010beed6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeaf0;
    _objc_alloc(PTR_PTR_1126aeaf0);
    ppuVar5 = &PTR____CFConstantStringClassReference_110db2158;
    ppuVar4 = ppuVar5;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2158,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2158,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053ba0(puVar3);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    uVar6 = puVar1[4];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0f69c0();
    _objc_release(uVar6);
    uVar6 = puVar1[6];
    puVar7 = PTR_PTR_1126ae750;
    if ((int)uVar2 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0ec800();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d98720; end: 104d98863; -[SCCommercePaymentSettingsRowProvider handleWithContext:] */

void FUN_104d98720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d98864;
  puStack_50 = &UNK_110845c10;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0311a0(puVar2,param_2,&puStack_68,&PTR___NSConcreteGlobalBlock_11084f728);
  puVar3 = PTR_PTR_1126b0308;
  _objc_alloc(PTR_PTR_1126b0308);
  func_0x00010c04a840();
  puVar4 = PTR_PTR_1126b04b8;
  _objc_alloc(PTR_PTR_1126b04b8);
  func_0x00010c0585a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104d98864; end: 104d988b7;  */

void FUN_104d98864(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d988b8; end: 104d988cb;  */

void FUN_104d988b8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104d988c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 104d988cc; end: 104d988eb; -[SCCommercePaymentSettingsRowProvider paymentSettingsDidComplete] */

void FUN_104d988cc(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d988ec; end: 104d988f3; -[SCCommercePaymentSettingsRowProvider sectionRow] */

undefined8 FUN_104d988ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104d988f4; end: 104d988fb; -[SCCommercePaymentSettingsRowProvider rowViewModel] */

undefined8 FUN_104d988f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104d988fc; end: 104d9895b; -[SCCommercePaymentSettingsRowProvider .cxx_destruct] */

void FUN_104d988fc(long param_1)

{
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



/* Entry: 104d9895c; end: 104d98ad3; -[SCCommerceShoppingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9895c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112712bcc;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf977c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bee8040(param_1,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar5 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c240(lVar5,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3bc0(lVar5,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar1 = lVar6;
  func_0x00010bf977c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be52a00(param_1,param_2,lVar1,lVar5);
  _objc_release(lVar1);
  _objc_release(lVar6);
  func_0x00010be47400(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104d98ad4; end: 104d98bbb; -[SCCommerceShoppingEntryPoint _launch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d98ad4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112712bcc;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10fbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c10fbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b04c0;
    _objc_alloc(PTR_PTR_1126b04c0);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c045d80(puVar3,param_2,lVar4,param_1);
    func_0x00010bf0c980(lVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104d98bbc; end: 104d99277; -[SCCommerceShoppingEntryPoint _vendCommerceSessionForEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d98bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0xffffffffffffffff;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0xffffffffffffffff;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0xffffffffffffffff;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_104d99278;
  uStack_d8 = 0x104d99288;
  uStack_d0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_104d99278;
  uStack_108 = 0x104d99288;
  uStack_100 = 0;
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x3032000000;
  pcStack_140 = FUN_104d99278;
  uStack_138 = 0x104d99288;
  uStack_130 = 0;
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x3032000000;
  pcStack_170 = FUN_104d99278;
  uStack_168 = 0x104d99288;
  uStack_160 = 0;
  func_0x00010c0c0e80(param_3);
  puVar1 = PTR_PTR_1126b0308;
  if (puStack_180[5] == 0) {
    _objc_alloc();
    lVar2 = param_1 + _DAT_112712bd0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112712bd4;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a840(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c163bc0(puVar1);
    func_0x00010c2058e0(puVar1);
    func_0x00010c183240(puVar1);
  }
  else {
    _objc_alloc();
    lVar2 = param_1 + _DAT_112712bd0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112712bd4;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045000(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  __Block_object_dispose(&uStack_188,8);
  _objc_release(uStack_160);
  __Block_object_dispose(&uStack_158,8);
  _objc_release(uStack_130);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  __Block_object_dispose(&uStack_a8,8);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d99278; end: 104d993e7;  */

void FUN_104d99278(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d993e8; end: 104d99457;  */

void FUN_104d993e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x1c;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4;
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d99458; end: 104d9948b;  */

void FUN_104d99458(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 9;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0x20;
  return;
}



/* Entry: 104d9948c; end: 104d995cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9948c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 4;
  puVar1 = PTR_PTR_1126b04c8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  lVar7 = (long)_DAT_112712bcc;
  lVar2 = *(long *)(param_1 + 0x20) + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20) + lVar7;
  _objc_loadWeakRetained();
  lVar4 = lVar7;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aa40();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d995d0; end: 104d9962b;  */

void FUN_104d995d0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 4;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 9;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  return;
}



/* Entry: 104d9962c; end: 104d996cf;  */

void FUN_104d9962c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 5;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 10;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4;
  puVar1 = PTR_PTR_1126b04d0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bff1780();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d996d0; end: 104d99977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d996d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0x3b;
  puVar1 = PTR_PTR_1126b04c8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  lVar7 = (long)_DAT_112712bcc;
  lVar2 = *(long *)(param_1 + 0x20) + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20) + lVar7;
  _objc_loadWeakRetained();
  lVar4 = lVar7;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aa40();
  _objc_release(param_3);
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d99978; end: 104d999a7;  */

void FUN_104d99978(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 10;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0xd;
  return;
}



/* Entry: 104d999a8; end: 104d99a4f;  */

void FUN_104d999a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 10;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 5;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_2;
  puVar1 = PTR_PTR_1126b04d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0419c0();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d99a50; end: 104d99ccf; -[SCCommerceShoppingEntryPoint _logEntryActionForEntry:commerceSession:] */

void FUN_104d99a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x104d99cd8;
  puStack_60 = &UNK_110842e18;
  _objc_retain(param_4);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x104d99cf4;
  puStack_88 = &UNK_110842e18;
  uStack_58 = param_4;
  _objc_retain(param_4);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x104d99d0c;
  puStack_b0 = &UNK_110842e18;
  uStack_80 = param_4;
  _objc_retain(param_4);
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_104d99d20;
  puStack_d8 = &UNK_110842e18;
  uStack_a8 = param_4;
  _objc_retain(param_4);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_104d99d5c;
  puStack_100 = &UNK_11084f948;
  uStack_d0 = param_4;
  _objc_retain(param_4);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x104d99d7c;
  puStack_128 = &UNK_110842e18;
  uStack_f8 = param_4;
  _objc_retain(param_4);
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x104d99d94;
  puStack_150 = &UNK_1108450f8;
  uStack_120 = param_4;
  _objc_retain(param_4);
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x104d99dac;
  puStack_178 = &UNK_110842e18;
  uStack_148 = param_4;
  _objc_retain(param_4);
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x104d99dc4;
  puStack_1a0 = &UNK_11084f978;
  uStack_170 = param_4;
  _objc_retain(param_4);
  puStack_1e0 = puVar1;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_104d99ddc;
  puStack_1c8 = &UNK_11084f9a8;
  uStack_1c0 = param_4;
  uStack_198 = param_4;
  _objc_retain(param_4);
  func_0x00010c0c0e80(param_3,param_2,&PTR___NSConcreteGlobalBlock_11084f8e8,
                      &PTR___NSConcreteGlobalBlock_11084f908,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_11084f928,0,&puStack_a0,&puStack_c8,&puStack_f0,
                      &puStack_118,&puStack_140,&puStack_168,&puStack_190,0,0,&puStack_1b8,0,0,
                      &puStack_1e0);
  _objc_release(uStack_1c0);
  _objc_release(uStack_198);
  _objc_release(uStack_170);
  _objc_release(uStack_148);
  _objc_release(uStack_120);
  _objc_release(uStack_f8);
  _objc_release(uStack_d0);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d99cd0; end: 104d99d1f;  */

void FUN_104d99cd0(void)

{
  return;
}



/* Entry: 104d99d20; end: 104d99d5b;  */

void FUN_104d99d20(long param_1,undefined8 param_2)

{
  func_0x00010c0a1d40(*(undefined8 *)(param_1 + 0x20),param_2,0x17,0xffffffffffffffff,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010c24f630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_startNewPageSession__1126717b0,1);
  return;
}



/* Entry: 104d99d5c; end: 104d99ddb;  */

void FUN_104d99d5c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b1610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_logSwipeUpOnPage__112609f90,param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0a29d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logCardAction_card_currentPage__112606480,param_2
             ,7);
  return;
}



/* Entry: 104d99ddc; end: 104d99e17;  */

void FUN_104d99ddc(long param_1,undefined8 param_2)

{
  func_0x00010c24f620(*(undefined8 *)(param_1 + 0x20),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logButtonTap_currentCard_current_112606160,0,0,
             0x11,0);
  return;
}



/* Entry: 104d99e18; end: 104d99edf; -[SCCommerceShoppingEntryPoint didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d99e18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112712bcc;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10fbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c10fbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf751a0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d99ee0; end: 104d99f33; -[SCCommerceShoppingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d99ee0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712bd8,0);
  _objc_destroyWeak(param_1 + _DAT_112712bd4);
  _objc_destroyWeak(param_1 + _DAT_112712bd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112712bcc);
  return;
}



/* Entry: 104d99f34; end: 104d99ff3; -[SCCommerceShoppingViewController initWithShoppingScope:headerItemDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d99f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e4268;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112712bdc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112712be0),param_4);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d99ff4; end: 104d9a40b; -[SCCommerceShoppingViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d99ff4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR_PTR_1126e4268;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_viewDidLoad_112684cd8);
  lVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar22);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar22);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af078;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar23 = (long)_DAT_112712be4;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  lVar22 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar23);
  uStack_80 = uVar21;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar23);
  uStack_78 = uVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar21);
  _objc_release(lVar3);
  _objc_release(lVar22);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af080;
  _objc_alloc_init();
  func_0x00010c20eaa0();
  func_0x00010c18f820(puVar1);
  func_0x00010c20eaa0(puVar1);
  lVar22 = param_1 + _DAT_112712be0;
  _objc_loadWeakRetained(lVar22);
  func_0x00010c18b5e0(puVar1);
  _objc_release(lVar22);
  uVar21 = *(undefined8 *)(param_1 + _DAT_112712be8);
  *(undefined **)(param_1 + _DAT_112712be8) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar21);
  func_0x00010c187440(*(undefined8 *)(param_1 + lVar23));
  puVar12 = PTR_PTR_1126b04e0;
  _objc_alloc();
  _objc_release();
  func_0x000106d78760();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x000106d78778();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x000106d787a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa60();
  puVar20 = puVar12;
  func_0x00010beb8f60(param_1);
  _objc_release(puVar12);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = PTR_PTR_1126b04e8;
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar20);
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c18b5e0(puVar12);
  puVar13 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar14 = puVar12;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(puVar1 + _DAT_112712be4);
  func_0x00010bf1ff80(uVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf493c0(0x4057c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar1);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar21);
  _objc_release(puVar14);
  func_0x00010c103e20(puVar12);
  _objc_release(puVar20);
  func_0x00010c1a7f60(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = puVar12 + _DAT_112712be0;
  _objc_loadWeakRetained(puVar12);
  func_0x00010bf7a940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 104d9a40c; end: 104d9a62f; -[SCCommerceShoppingViewController _showErrorOverlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9a40c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126b04e8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c18b5e0(puVar2,param_2,param_1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112712be4);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493c0(0x4057c00000000000,puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puStack_78 = puVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf493a0(puVar7,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  func_0x00010c103e20(puVar2,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1a7f60(puVar2,param_2,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar2 + _DAT_112712be0;
  _objc_loadWeakRetained(puVar2);
  func_0x00010bf7a940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d9a630; end: 104d9a67b; -[SCCommerceShoppingViewController errorButtonTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9a630(long param_1)

{
  param_1 = param_1 + _DAT_112712be0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7a940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9a67c; end: 104d9a683; -[SCCommerceShoppingViewController pageViewName] */

undefined8 FUN_104d9a67c(void)

{
  return 0x31;
}



/* Entry: 104d9a684; end: 104d9a6d3; -[SCCommerceShoppingViewController blizzardPageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d9a684(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112712bdc);
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  uVar1 = 0xd;
  if (lVar3 != 0) {
    uVar1 = 0;
  }
  _objc_release(lVar2);
  return uVar1;
}



/* Entry: 104d9a6d4; end: 104d9a6e3; -[SCCommerceShoppingViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d9a6d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712be8);
}



/* Entry: 104d9a6e4; end: 104d9a73f; -[SCCommerceShoppingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9a6e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712be8,0);
  _objc_storeStrong(param_1 + _DAT_112712be4,0);
  _objc_destroyWeak(param_1 + _DAT_112712be0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712bdc,0);
  return;
}



/* Entry: 104d9a740; end: 104d9a853; -[SCCommerceSnapcodeHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9a740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b04f0;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112712bec);
  lVar2 = param_1 + _DAT_112712bf0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2578c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112712bf4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042080(puVar1,param_2,uVar6,lVar3,lVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112712bf8);
  *(undefined **)(param_1 + _DAT_112712bf8) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112712bfc;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9a854; end: 104d9a8c3; -[SCCommerceSnapcodeHandlerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9a854(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long alStack_40 [2];
  long alStack_30 [2];
  
  plVar2 = alStack_40;
  lVar3 = (long)_DAT_112712bf8;
  if (*(long *)(param_1 + lVar3) == 0) {
    plVar2 = alStack_30;
  }
  else {
    func_0x00010bf940a0();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_1126e4270;
  _objc_msgSendSuper2(plVar2,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d9a8c4; end: 104d9a933; -[SCCommerceSnapcodeHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d9a8c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712bec,0);
  _objc_destroyWeak(param_1 + _DAT_112712bf0);
  _objc_destroyWeak(param_1 + _DAT_112712bfc);
  _objc_destroyWeak(param_1 + _DAT_112712bf4);
  _objc_destroyWeak(param_1 + _DAT_112712c00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712bf8,0);
  return;
}



/* Entry: 104d9a934; end: 104d9aa37; -[SCCommerceSnapcodeViewModelProvider initWithScopeExposer:storeFetcher:resourceDownloader:] */

undefined1 *
FUN_104d9a934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4278;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d9aa38; end: 104d9aa63; -[SCCommerceSnapcodeViewModelProvider end] */

void FUN_104d9aa38(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d9aa64; end: 104d9aa8b; -[SCCommerceSnapcodeViewModelProvider scanResultViewModels] */

void FUN_104d9aa64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d9aa8c; end: 104d9abff; -[SCCommerceSnapcodeViewModelProvider configureWithContext:] */

void FUN_104d9aa8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c08f320(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 0x30,lVar1);
    _objc_release(lVar1);
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e0ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104d9ac00; end: 104d9ac47;  */

void FUN_104d9ac00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be308e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d9ac48; end: 104d9addf; -[SCCommerceSnapcodeViewModelProvider _handleSnapcodeMetadata:] */

void FUN_104d9ac48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 8) {
    puVar2 = PTR_PTR_1126b04f8;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c008360();
    lVar1 = lStack_48;
    _objc_retain(lStack_48);
    _objc_release(lVar3);
    if ((lVar1 == 0) && (puVar2 != (undefined *)0x0)) {
      _objc_initWeak(auStack_50,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c115e60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_58,auStack_50);
      _objc_retain(param_3);
      func_0x00010bfca560(uVar4);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_50);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104d9ade0; end: 104d9aeab;  */

void FUN_104d9ade0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c14f740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30960(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d9aeac; end: 104d9afb7; -[SCCommerceSnapcodeViewModelProvider _handleSnapcodeMetadataHelper:decodedUuid:scannableId:error:] */

void FUN_104d9aeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d9afb8;
  puStack_70 = &UNK_1108475b0;
  uStack_68 = param_6;
  uStack_60 = param_3;
  uStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return;
}



/* Entry: 104d9afb8; end: 104d9b00f;  */

void FUN_104d9afb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bdf2ca0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x30) + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


