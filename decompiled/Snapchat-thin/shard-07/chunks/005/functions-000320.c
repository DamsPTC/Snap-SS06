/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055d2ed0; end: 1055d30ab; -[SCLensFavoritesButtonBlizzardLogger _eventWithLensInfo:source:] */

void FUN_1055d2ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2930;
  _objc_retain(param_3);
  func_0x00010bf5e640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bbc90;
  _objc_opt_new(PTR_PTR_1126bbc90);
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c11fc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e74c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c11fc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e74e0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010be85ea0(param_1,param_2,param_4);
  func_0x00010c206c40(puVar1,param_2,uVar3);
  func_0x00010c18cba0(puVar1,param_2,puVar2);
  uVar3 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bef4d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c164480(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  func_0x00010c097cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c097c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055d30ac; end: 1055d30cf; -[SCLensFavoritesButtonBlizzardLogger _rawSourceFromSource:] */

undefined8 FUN_1055d30ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined8 *)(&UNK_10ddb3bf8 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 1055d30d0; end: 1055d30ff; -[SCLensFavoritesButtonBlizzardLogger .cxx_destruct] */

void FUN_1055d30d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055d3100; end: 1055d3237; -[SCLensFavoritesServiceProvider _favoritesMockedPersistance] */

void FUN_1055d3100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126bbca0;
  _objc_opt_new(PTR_PTR_1126bbca0);
  puVar2 = PTR_PTR_1126bbcb0;
  _objc_alloc(PTR_PTR_1126bbcb0);
  uVar3 = param_1;
  func_0x000100428bc4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0cf740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x000100bca41c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfedac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100bca50c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035680(puVar2,param_2,uVar5,uVar7,uVar8,puVar1);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055d3238; end: 1055d3293; -[SCLensFavoritesServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055d3238(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726658);
  _objc_destroyWeak(param_1 + _DAT_112726654);
  _objc_destroyWeak(param_1 + _DAT_112726650);
  _objc_destroyWeak(param_1 + _DAT_11272664c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726648);
  return;
}



/* Entry: 1055d3294; end: 1055d329b; -[SCLensFavoriteLocalPersistance docObjectContext] */

void FUN_1055d3294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1055d329c; end: 1055d3357;  */

void FUN_1055d329c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (param_1 != 0)) &&
     (uVar1 = param_2, func_0x00010bf125c0(), (uVar1 & 1) != 0)) {
    uVar1 = param_2;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c072aa0();
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 == 0) {
      func_0x00010bed1080(param_1);
    }
    else {
      func_0x00010be0e6a0();
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055d3358; end: 1055d352b; -[SCLensFavoriteLocalPersistance lensFavoritesStatusForId:] */

void FUN_1055d3358(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be45440(param_1,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010be3d6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bef0f80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1055d346c;
    puStack_50 = &UNK_110848ba8;
    puStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    puStack_38 = puVar1;
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(uVar2);
    param_1 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_38);
    _objc_release(uStack_40);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055d352c; end: 1055d353f;  */

void FUN_1055d352c(long param_1,undefined8 param_2,long param_3)

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



/* Entry: 1055d3540; end: 1055d3687; -[SCLensFavoriteLocalPersistance _lensFavoritesStatusForId:] */

void FUN_1055d3540(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be45440(param_1,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010be3d6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    func_0x00010be4b320(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      param_1 = *(undefined **)(param_1 + 8);
      func_0x00010c093c00(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055d3688; end: 1055d378f; -[SCLensFavoriteLocalPersistance _lensLocalFavoritesStatusForId:] */

void FUN_1055d3688(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be45440();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010be3d680(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    FUN_1055d56b8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (puVar1 == (undefined *)0x0) {
      param_1 = (undefined *)0x0;
    }
    else {
      func_0x00010c072a60();
      param_1 = PTR_PTR_1126b5930;
      _objc_alloc(PTR_PTR_1126b5930);
      puVar2 = puVar1;
      func_0x00010c094540(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0249a0(param_1);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055d3790; end: 1055d39c3; -[SCLensFavoriteLocalPersistance favoriteLensWithId:] */

void FUN_1055d3790(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be45440(param_1,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010be3d6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfa1080(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1055d38cc;
    puStack_50 = &UNK_11089d0a8;
    puStack_48 = puVar1;
    puStack_40 = param_1;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uStack_38 = param_3;
    _objc_retain(puVar1);
    func_0x00010bef0f80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2,param_2,&puStack_68,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    param_1 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
    _objc_release(puStack_48);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055d39c4; end: 1055d39cf;  */

void FUN_1055d39c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055d39d0; end: 1055d3bf7; -[SCLensFavoriteLocalPersistance unfavoriteLensWithId:] */

void FUN_1055d39d0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be45440(param_1,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010be3d6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27faa0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x1055d3b0c;
    puStack_50 = &UNK_11089d0a8;
    puStack_48 = puVar1;
    puStack_40 = param_1;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uStack_38 = param_3;
    _objc_retain(puVar1);
    func_0x00010bef0f80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2,param_2,&puStack_68,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    param_1 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
    _objc_release(puStack_48);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055d3bf8; end: 1055d3c03;  */

void FUN_1055d3bf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055d3c04; end: 1055d3cab; -[SCLensFavoriteLocalPersistance updatePersistenceWithFavoriteLenses:] */

void FUN_1055d3c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bef0f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1055d3cac;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1055d3cac; end: 1055d3cb7;  */

void FUN_1055d3cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePersistenceWithFavoriteLe_112594d48,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055d3cb8; end: 1055d4097; -[SCLensFavoriteLocalPersistance _updatePersistenceWithFavoriteLenses:] */

void FUN_1055d3cb8(long param_1,undefined1 *param_2,undefined **param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **unaff_x27;
  long lVar13;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  ppuVar10 = param_3;
  func_0x00010be45460();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1;
    FUN_1055d593c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar12;
    func_0x00010c0d3c80();
    _objc_release(lVar12);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(lVar2);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(lVar2);
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar12 = *plStack_130;
      do {
        lVar13 = 0;
        do {
          if (*plStack_130 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          uVar11 = *(undefined8 *)(lStack_138 + lVar13 * 8);
          func_0x00010c094540(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(uVar11);
          lVar13 = lVar13 + 1;
        } while (lVar1 != lVar13);
        lVar1 = lVar2;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_1055d4098;
    puStack_160 = &UNK_11089d0d8;
    _objc_retain(puVar3);
    puStack_158 = puVar3;
    _objc_retain(lVar2);
    lStack_150 = lVar2;
    _objc_retain(puVar4);
    puStack_148 = puVar4;
    func_0x00010bf97e80(param_3);
    _objc_initWeak(auStack_180,param_1);
    lVar1 = param_1;
    func_0x00010bf87660(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar9;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_1055d41c0;
    puStack_198 = &UNK_110864a38;
    _objc_retain(lVar2);
    lStack_190 = lVar2;
    _objc_retain(puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puStack_188 = puVar5;
    func_0x00010bef0f80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = puVar9;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_1055d43b4;
    puStack_1d0 = &UNK_11085dbf8;
    unaff_x27 = &puStack_1e8;
    param_2 = auStack_180;
    _objc_copyWeak(auStack_1b8,param_2);
    _objc_retain(puVar4);
    puStack_1c8 = puVar4;
    _objc_retain(puVar5);
    ppuVar10 = &puStack_1b0;
    puStack_1c0 = puVar5;
    func_0x00010c0f8500(lVar1);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(lVar1);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1c8);
    _objc_destroyWeak(auStack_1b8);
    _objc_release(puStack_188);
    _objc_release(lStack_190);
    _objc_destroyWeak(auStack_180);
    _objc_release(puStack_148);
    _objc_release(lStack_150);
    _objc_release(puStack_158);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 6);
  _objc_destroyWeak(auStack_180);
  __Unwind_Resume();
  _objc_retain(param_2);
  ppuVar7 = (undefined **)param_3[4];
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == (undefined **)0x0) {
    puVar3 = PTR_PTR_1126bbcb8;
    _objc_alloc(PTR_PTR_1126bbcb8);
    func_0x00010c0244e0();
    func_0x00010c066b00(param_3[5]);
    puVar9 = PTR_PTR_1126bbcc0;
    _objc_alloc(PTR_PTR_1126bbcc0);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cce0(puVar9);
    _objc_release(puVar4);
    func_0x00010befa120(param_3[6]);
    _objc_release(puVar9);
    _objc_release(puVar3);
  }
  else {
    ppuVar8 = ppuVar7;
    func_0x00010c11fba0();
    if (ppuVar8 != ppuVar10) {
      func_0x00010c12d360(param_3[5]);
      func_0x00010c066b00(param_3[5]);
    }
  }
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055d4098; end: 1055d41bf;  */

void FUN_1055d4098(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126bbcb8;
    _objc_alloc(PTR_PTR_1126bbcb8);
    func_0x00010c0244e0();
    func_0x00010c066b00(*(undefined8 *)(param_1 + 0x28));
    puVar4 = PTR_PTR_1126bbcc0;
    _objc_alloc(PTR_PTR_1126bbcc0);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cce0(puVar4);
    _objc_release(puVar5);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c11fba0();
    if (lVar2 != param_3) {
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c066b00(*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055d41c0; end: 1055d425b;  */

void FUN_1055d41c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010bf97e80(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055d425c; end: 1055d43b3;  */

void FUN_1055d425c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c11fba0();
  if (lVar1 != param_3) {
    puVar2 = PTR_PTR_1126bbcc8;
    _objc_alloc(PTR_PTR_1126bbcc8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11fba0(param_2);
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016820(puVar2);
    _objc_release(lVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
  puVar3 = PTR_PTR_1126bbcb8;
  _objc_alloc(PTR_PTR_1126bbcb8);
  lVar1 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0244e0(puVar3);
  _objc_release(lVar1);
  FUN_1055d5c54(*(undefined8 *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055d43b4; end: 1055d4453;  */

void FUN_1055d43b4(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar3);
    puVar4 = PTR_PTR_1126bbcd0;
    _objc_alloc(PTR_PTR_1126bbcd0);
    func_0x00010c0117a0();
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x10));
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1055d4454; end: 1055d44a7; -[SCLensFavoriteLocalPersistance _invalidLensIdResultFuture] */

void FUN_1055d4454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010be3d680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055d44a8; end: 1055d44d7; -[SCLensFavoriteLocalPersistance _invalidLensIdResult] */

void FUN_1055d44a8(void)

{
  _objc_alloc(PTR_PTR_1126b5930);
  func_0x00010c0249a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055d44d8; end: 1055d4533; -[SCLensFavoriteLocalPersistance _isValidLensId:] */

bool FUN_1055d44d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if ((int)puVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0b4ca0(param_3);
    bVar1 = lVar3 != 0;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1055d4534; end: 1055d45ab; -[SCLensFavoriteLocalPersistance _isValidLensIds:] */

bool FUN_1055d4534(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1055d45ac;
  puStack_30 = &UNK_110856a28;
  uStack_28 = param_1;
  func_0x00010bfb2040(param_3,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 == 0;
}



/* Entry: 1055d45ac; end: 1055d45cb;  */

uint FUN_1055d45ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be45440(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1055d45cc; end: 1055d46d7; -[SCLensFavoriteLocalPersistance _favoriteLensLocalyWithId:source:completion:] */

void FUN_1055d45cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1055d46d8;
  puStack_60 = &UNK_11089d168;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = param_3;
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_3);
  func_0x00010bef0f80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(lVar1,param_2,&puStack_78,uVar2,param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1055d46d8; end: 1055d489b;  */

void FUN_1055d46d8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  FUN_1055d593c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bbcb8;
  _objc_alloc();
  func_0x00010c0244e0();
  puVar8 = puVar2;
  FUN_1055d5c54(param_2,puVar2);
  _objc_retain(param_2);
  lVar3 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bbcc0;
  _objc_alloc();
  func_0x00010c03cce0();
  puVar5 = PTR_PTR_1126bbcd0;
  _objc_alloc(PTR_PTR_1126bbcd0);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0117a0(puVar5);
  _objc_release(puVar6);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126bbcb8;
  _objc_retain(puVar8);
  _objc_alloc(puVar5);
  puVar2 = puVar8;
  func_0x00010c094540(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fba0(puVar8);
  func_0x00010c0244e0(puVar5);
  _objc_release(puVar2);
  FUN_1055d5c54(*(undefined8 *)(lVar1 + 0x20),puVar5);
  puVar6 = PTR_PTR_1126bbcc8;
  _objc_alloc(PTR_PTR_1126bbcc8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11fba0(puVar8);
  func_0x00010c0df880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11fba0(puVar5);
  func_0x00010c0df880(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x00010c094540(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010c016820(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055d489c; end: 1055d49e3;  */

void FUN_1055d489c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bbcb8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11fba0(param_2);
  func_0x00010c0244e0(puVar1);
  _objc_release(uVar2);
  FUN_1055d5c54(*(undefined8 *)(param_1 + 0x20),puVar1);
  puVar3 = PTR_PTR_1126bbcc8;
  _objc_alloc(PTR_PTR_1126bbcc8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11fba0(param_2);
  func_0x00010c0df880(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11fba0(puVar1);
  func_0x00010c0df880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c016820(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055d49e4; end: 1055d4aef; -[SCLensFavoriteLocalPersistance _unfavoriteLensLocalyWithId:source:completion:] */

void FUN_1055d49e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1055d4af0;
  puStack_60 = &UNK_11089d168;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = param_3;
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_3);
  func_0x00010bef0f80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(lVar1,param_2,&puStack_78,uVar2,param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1055d4af0; end: 1055d4d93;  */

void FUN_1055d4af0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = param_2;
  FUN_1055d593c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  FUN_1055d56b8(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c072a60();
  if ((int)puVar8 == 0) {
    _objc_release(puVar1);
    puVar8 = (undefined *)0x0;
    puVar4 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puVar3 = PTR_PTR_1126bbcc0;
    _objc_alloc();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11fba0(puVar2);
    func_0x00010c0df880(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c094540(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cce0();
    _objc_release(puVar4);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bfecde0();
    puVar6 = puVar1;
    func_0x00010bf529e0();
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 + 1 < puVar6) {
      func_0x00010bf529e0(puVar1);
      puVar4 = puVar1;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  puVar1 = PTR_PTR_1126bbcb8;
  _objc_alloc();
  func_0x00010c0244e0();
  puVar6 = puVar1;
  FUN_1055d5c54(param_2,puVar1);
  _objc_retain(param_2);
  puVar3 = puVar4;
  func_0x00010c0b8600(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bbcd0;
  _objc_alloc(PTR_PTR_1126bbcd0);
  func_0x00010c0117a0();
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar8 = PTR_PTR_1126bbcb8;
    _objc_retain(puVar6);
    _objc_alloc(puVar8);
    puVar1 = puVar6;
    func_0x00010c094540(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c072a60(puVar6);
    func_0x00010c11fba0(puVar6);
    func_0x00010c0244e0(puVar8);
    _objc_release(puVar1);
    FUN_1055d5c54(*(undefined8 *)(puVar4 + 0x20),puVar8);
    puVar4 = PTR_PTR_1126bbcc8;
    _objc_alloc(PTR_PTR_1126bbcc8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11fba0(puVar6);
    func_0x00010c0df880(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11fba0(puVar8);
    func_0x00010c0df880(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c094540(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c016820(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 1055d4d94; end: 1055d4ee7;  */

void FUN_1055d4d94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bbcb8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072a60(param_2);
  func_0x00010c11fba0(param_2);
  func_0x00010c0244e0(puVar1);
  _objc_release(uVar2);
  FUN_1055d5c54(*(undefined8 *)(param_1 + 0x20),puVar1);
  puVar3 = PTR_PTR_1126bbcc8;
  _objc_alloc(PTR_PTR_1126bbcc8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11fba0(param_2);
  func_0x00010c0df880(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c11fba0(puVar1);
  func_0x00010c0df880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c016820(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055d4ee8; end: 1055d4f3b; -[SCLensFavoriteLocalPersistance .cxx_destruct] */

void FUN_1055d4ee8(long param_1)

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



/* Entry: 1055d4f3c; end: 1055d4f43; -[SCLensFavoriteRemotePersistance infoCardsProvider] */

void FUN_1055d4f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 1055d4f44; end: 1055d4f4b; -[SCLensFavoriteRemotePersistance lensFavoritesObservable] */

undefined8 FUN_1055d4f44(void)

{
  return 0;
}



/* Entry: 1055d4f4c; end: 1055d5003; -[SCLensFavoriteRemotePersistance lensFavoritesStatusForId:] */

void FUN_1055d4f4c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be45440(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010be3d680(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfedb80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfc6f80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
    param_1 = uVar2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055d5004; end: 1055d5037;  */

void FUN_1055d5004(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010be4acc0(PTR_PTR_1126bbca8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055d5038; end: 1055d50cb; -[SCLensFavoriteRemotePersistance lensFavoritesStatusForIds:] */

void FUN_1055d5038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bfedb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc6fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11089d1d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055d50cc; end: 1055d50eb;  */

void FUN_1055d50cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_11089d1f8);
  return;
}



/* Entry: 1055d50ec; end: 1055d5277; -[SCLensFavoriteRemotePersistance favoriteLensWithId:] */

void FUN_1055d50ec(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be45440(param_1,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010be3d680(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar3 = param_3;
    func_0x00010c0b4ca0(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bef0f80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1055d5278;
    puStack_78 = &UNK_1108529c0;
    _objc_retain(param_3);
    uStack_70 = param_3;
    _objc_retain(puVar2);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1055d52c4;
    puStack_b0 = &UNK_11089d218;
    puStack_a8 = param_1;
    puStack_68 = puVar2;
    _objc_retain(param_3);
    uStack_a0 = param_3;
    puStack_98 = puVar2;
    _objc_retain(puVar2);
    func_0x00010c0fc120(uVar5,param_2,uVar3,uVar4,&puStack_90,&puStack_c8);
    _objc_release(uVar4);
    param_1 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_98);
    _objc_release(uStack_a0);
    _objc_release(puStack_68);
    _objc_release(uStack_70);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055d5278; end: 1055d531b;  */

void FUN_1055d5278(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5930;
  _objc_alloc(PTR_PTR_1126b5930);
  func_0x00010c0249a0();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055d531c; end: 1055d548b; -[SCLensFavoriteRemotePersistance unfavoriteLensWithId:] */

void FUN_1055d531c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be45440(param_1,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010be3d680(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar3 = param_3;
    func_0x00010c0b4ca0(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bef0f80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1055d548c;
    puStack_68 = &UNK_1108529c0;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(puVar2);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1055d54d8;
    puStack_90 = &UNK_11089d248;
    puStack_88 = puVar2;
    puStack_58 = puVar2;
    _objc_retain(puVar2);
    func_0x00010c281da0(uVar5,param_2,uVar3,uVar4,&puStack_80,&puStack_a8);
    _objc_release(uVar4);
    param_1 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_88);
    _objc_release(puStack_58);
    _objc_release(uStack_60);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055d548c; end: 1055d54d7;  */

void FUN_1055d548c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5930;
  _objc_alloc(PTR_PTR_1126b5930);
  func_0x00010c0249a0();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055d54d8; end: 1055d54e3;  */

void FUN_1055d54d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 1055d54e4; end: 1055d54e7; -[SCLensFavoriteRemotePersistance updatePersistenceWithFavoriteLenses:] */

void FUN_1055d54e4(void)

{
  return;
}



/* Entry: 1055d54e8; end: 1055d554b; -[SCLensFavoriteRemotePersistance _invalidLensIdResult] */

void FUN_1055d54e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b5930;
  _objc_alloc(PTR_PTR_1126b5930);
  func_0x00010c0249a0();
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055d554c; end: 1055d55a7; -[SCLensFavoriteRemotePersistance _isValidLensId:] */

bool FUN_1055d554c(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if ((int)puVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c0b4ca0(param_3);
    bVar1 = lVar3 != 0;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1055d55a8; end: 1055d55b3; -[SCLensFavoriteRemotePersistance _lensFavoritesStatusFromErrorStatus:] */

bool FUN_1055d55a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 1055d55b4; end: 1055d566f; +[SCLensFavoriteRemotePersistance _lensFavoritesResultFromInfoCardData:] */

void FUN_1055d55b4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf125c0();
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c072aa0();
    uVar4 = 2;
    if ((int)uVar2 == 0) {
      uVar4 = 3;
    }
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126b5930;
  _objc_alloc(PTR_PTR_1126b5930);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0249a0(puVar3,param_2,uVar1,uVar4,3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055d5670; end: 1055d56ab; -[SCLensFavoriteRemotePersistance .cxx_destruct] */

void FUN_1055d5670(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055d56ac; end: 1055d56b7; -[SCLensFavoritesPerformerProvider .cxx_destruct] */

void FUN_1055d56ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055d56b8; end: 1055d593b;  */

void FUN_1055d56b8(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126bbcb8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_1055d5f3c();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055d593c; end: 1055d5bab;  */

void FUN_1055d593c(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126bbcb8);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_1055d60b4();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_SUB_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar2[0x1a];
  uStack_e5 = puVar2[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x0001000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_SUB_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_SUB_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  puVar3 = puVar4;
  func_0x00010c246ca0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055d5bac; end: 1055d5c53;  */

ulong FUN_1055d5bac(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_2;
  func_0x00010c11fba0();
  uVar1 = param_3;
  func_0x00010c11fba0();
  if (uVar2 < uVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = param_2;
    func_0x00010c11fba0(param_2);
    uVar1 = param_3;
    func_0x00010c11fba0(param_3);
    uVar2 = (ulong)(uVar1 < uVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1055d5c54; end: 1055d5cdb;  */

void FUN_1055d5c54(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_1055d6400(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055d5cdc; end: 1055d5d87; -[SCLensFavoritesDataModel initWithLensId:isFavorite:rankingPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1055d5cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e93b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112726680);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112726680) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112726684) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112726688) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055d5d88; end: 1055d5dab; -[SCLensFavoritesDataModel copyWithZone:] */

undefined8 FUN_1055d5d88(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055d5dac; end: 1055d5e2f; -[SCLensFavoritesDataModel hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1055d5dac(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112726680);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_112726684);
  uStack_30 = *(undefined8 *)(param_1 + _DAT_112726688);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1055d5edc;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + (long)_DAT_112726684) != param_3[_DAT_112726684] ||
        (*(long *)((long)puVar2 + (long)_DAT_112726688) != *(long *)(param_3 + _DAT_112726688))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_1055d5edc;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + (long)_DAT_112726680);
    if (puVar4 != *(undefined1 **)(param_3 + _DAT_112726680)) {
      func_0x00010c071ae0();
      goto LAB_1055d5edc;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_1055d5edc:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 1055d5e30; end: 1055d5ef7; -[SCLensFavoritesDataModel isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1055d5e30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055d5edc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + (long)_DAT_112726684) != *(char *)(param_3 + (long)_DAT_112726684) ||
        (*(long *)(param_1 + (long)_DAT_112726688) != *(long *)(param_3 + (long)_DAT_112726688)))))
    {
      lVar3 = 0;
      goto LAB_1055d5edc;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_112726680);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_112726680)) {
      func_0x00010c071ae0();
      goto LAB_1055d5edc;
    }
  }
  lVar3 = 1;
LAB_1055d5edc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055d5ef8; end: 1055d5f07; -[SCLensFavoritesDataModel lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055d5ef8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112726680);
}



/* Entry: 1055d5f08; end: 1055d5f17; -[SCLensFavoritesDataModel isFavorite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1055d5f08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112726684);
}



/* Entry: 1055d5f18; end: 1055d5f27; -[SCLensFavoritesDataModel rankingPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055d5f18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112726688);
}



/* Entry: 1055d5f28; end: 1055d5f3b; -[SCLensFavoritesDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055d5f28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112726680,0);
  return;
}



/* Entry: 1055d5f3c; end: 1055d5f9f;  */

undefined ** FUN_1055d5f3c(void)

{
  int iVar1;
  
  if ((bRam0000000113819c80 & 1) == 0) {
    iVar1 = 0x13819c80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130e83d0,0x100000000);
      ___cxa_guard_release(0x113819c80);
    }
  }
  return &PTR_PTR_1130e83d0;
}



/* Entry: 1055d5fa0; end: 1055d6027;  */

void FUN_1055d5fa0(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055d6028; end: 1055d60b3;  */

void FUN_1055d6028(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055d60b4; end: 1055d616f;  */

undefined8 FUN_1055d60b4(void)

{
  int iVar1;
  
  if ((bRam0000000113819cf8 & 1) == 0) {
    iVar1 = 0x13819cf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819c90 = 0xe;
      puRam0000000113819c98 = &UNK_10f2d8d6f;
      uRam0000000113819ca0 = 0x1010000;
      pcRam0000000113819ca8 = FUN_1055d6170;
      pcRam0000000113819cb0 = FUN_1055d61b0;
      ppuRam0000000113819c88 = &PTR_SUB_1108629c8;
      uRam0000000113819cc8 = 0;
      uRam0000000113819cc0 = 0;
      uRam0000000113819cd8 = 0;
      uRam0000000113819cd0 = 0;
      uRam0000000113819ce8 = 0;
      uRam0000000113819ce0 = 0;
      uRam0000000113819cf0 = 0;
      ___cxa_atexit(0x105007830,0x113819c88,0x100000000);
      ___cxa_guard_release(0x113819cf8);
    }
  }
  return 0x113819c88;
}



/* Entry: 1055d6170; end: 1055d61af;  */

bool FUN_1055d6170(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}



/* Entry: 1055d61b0; end: 1055d6203;  */

undefined8 FUN_1055d61b0(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c072a60(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1055d6204; end: 1055d620f; +[SCLensFavoritesDataModel table] */

undefined * FUN_1055d6204(void)

{
  return &UNK_10f2d8d7a;
}



/* Entry: 1055d6210; end: 1055d6327; +[SCLensFavoritesDataModel immutableObjectParse:bufferSize:] */

void FUN_1055d6210(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126bbcb8;
  _objc_alloc(PTR_PTR_1126bbcb8);
  lVar7 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar6 < 5) {
    puVar9 = (undefined *)0x0;
LAB_1055d62c4:
    bVar3 = false;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar8 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar8);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar7);
    }
    if (uVar6 < 7) goto LAB_1055d62c4;
    uVar8 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar7));
    if (uVar8 == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)piVar1 + uVar8) != '\0';
    }
    if ((8 < uVar6) && (uVar8 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar7)), uVar8 != 0)) {
      uVar5 = *(undefined8 *)((long)piVar1 + uVar8);
      goto LAB_1055d62cc;
    }
  }
  uVar5 = 0;
LAB_1055d62cc:
  func_0x00010c0244e0(puVar4,param_2,puVar9,bVar3,uVar5);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055d6328; end: 1055d634b; +[SCLensFavoritesDataModel objectClassFunctionPointer] */

undefined1  [16] FUN_1055d6328(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1055d6344;
  auVar1._0_8_ = 0x1055d633c;
  return auVar1;
}



/* Entry: 1055d634c; end: 1055d63ff;  */

undefined1 *
FUN_1055d634c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126e93c0;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = param_4;
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1055d6400; end: 1055d68f7;  */

void FUN_1055d6400(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain();
  puVar9 = PTR_PTR_1126bbcd8;
  _objc_retain(param_1);
  _objc_opt_self(puVar9);
  _objc_retain(param_1);
  if (param_1 == 0) {
LAB_1055d6744:
    lVar8 = 0;
LAB_1055d6748:
    _objc_release(lVar8);
  }
  else {
    lVar1 = param_1;
    func_0x00010c1422e0();
    if (lVar1 < 0) {
      lVar1 = param_1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar8 = param_1;
      if (lVar1 != 0) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar9;
        func_0x00010bf636c0();
        _objc_release(puVar9);
        func_0x0001001b9e08(puVar2,&UNK_10f2d8d93);
        if (puVar2 != (undefined *)0x0) {
          lVar1 = param_1;
          func_0x00010c094540(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          lVar3 = lVar1;
          _objc_retainAutorelease(lVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar2,1,lVar3,0xffffffff,0xffffffffffffffff);
          _objc_release(lVar1);
          _objc_release(lVar1);
          puVar9 = puVar2;
          _sqlite3_step();
          if ((int)puVar9 == 100) {
            puVar9 = puVar2;
            _sqlite3_column_int64(puVar2,0);
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bbcb8);
            _sqlite3_column_blob(puVar2,1);
            _sqlite3_column_bytes(puVar2,1);
            puVar5 = puVar4;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar4);
            _sqlite3_reset(puVar2);
            if (puVar5 == (undefined *)0x0) goto LAB_1055d6744;
            puVar2 = PTR_PTR_1126bbcd8;
            _objc_alloc();
            puVar4 = puVar5;
            func_0x00010c094540(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c072a60(puVar5);
            puVar7 = puVar5;
            func_0x00010c11fba0(puVar5);
            FUN_1055d634c(puVar2,puVar9,puVar4,puVar6,puVar7);
            goto LAB_1055d6510;
          }
        }
      }
      goto LAB_1055d6748;
    }
    lVar1 = param_1;
    func_0x00010c1422e0(param_1);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bbcb8);
    puVar5 = puVar9;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar9);
    if (puVar5 == (undefined *)0x0) goto LAB_1055d6744;
    puVar2 = PTR_PTR_1126bbcd8;
    _objc_alloc();
    puVar4 = puVar5;
    func_0x00010c094540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c072a60(puVar5);
    puVar6 = puVar5;
    func_0x00010c11fba0(puVar5);
    FUN_1055d634c(puVar2,lVar1,puVar4,puVar9,puVar6);
LAB_1055d6510:
    _objc_release(puVar4);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_1);
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      lVar1 = param_1;
      func_0x00010c094540(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c072a60();
      puVar2[0x14] = (char)lVar1;
      lVar1 = param_1;
      func_0x00010c11fba0();
      *(long *)(puVar2 + 0x20) = lVar1;
      _objc_retain(puVar2);
      puVar9 = puVar2;
      goto LAB_1055d67f8;
    }
  }
  _objc_release(param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  puVar9 = PTR_PTR_1126bbcd8;
  _objc_retain(param_1);
  _objc_opt_self(puVar9);
  puVar2 = PTR_PTR_1126bbcd8;
  if (param_1 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c072a60(param_1);
    lVar3 = param_1;
    func_0x00010c11fba0(param_1);
    FUN_1055d634c(puVar2,0xffffffffffffffff,lVar1,lVar8,lVar3);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_1);
  puVar9 = (undefined *)0x0;
LAB_1055d67f8:
  _objc_release(puVar9);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055d68f8; end: 1055d695b;  */

void FUN_1055d68f8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bbcb8;
    _objc_alloc(PTR_PTR_1126bbcb8);
    func_0x00010c0244e0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055d695c; end: 1055d6967; -[SCLensFavoritesDataModelChangeRequest .cxx_destruct] */

void FUN_1055d695c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1055d6968; end: 1055d6973; -[SCLensFavoritesDataModelChangeRequest table] */

undefined * FUN_1055d6968(void)

{
  return &UNK_10f2d8d7a;
}



/* Entry: 1055d6974; end: 1055d69bb; -[SCLensFavoritesDataModelChangeRequest createTableWithSQLite:] */

void FUN_1055d6974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddb3c18,0x86,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1055d69bc; end: 1055d6d43; -[SCLensFavoritesDataModelChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1055d69bc(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1055d68f8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1055d6d44(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2d8e0d);
    if (lVar6 == 0) goto LAB_1055d6ce0;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1055d6ce0;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bbcb8);
    func_0x00010c21c9a0(puVar7);
LAB_1055d6cc8:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2d8dd9);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bbcb8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1055d6cec;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1055d6cec;
    }
    FUN_1055d68f8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1055d6d44(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2d8e4e);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bbcb8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1055d6cc8;
      }
    }
LAB_1055d6ce0:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1055d6cec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055d6d44; end: 1055d6f3f;  */

ulong FUN_1055d6d44(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_1055d6e44;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_1055d6e44;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_1055d6e04;
    uVar9 = 0;
  }
  else {
LAB_1055d6e04:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_1055d6e44:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c072a60(param_2);
  pcVar6 = param_2;
  func_0x00010c11fba0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,8,pcVar6,0);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x000100ab13ac(param_1,6,pcVar5,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1055d6f40; end: 1055d6f7f;  */

void FUN_1055d6f40(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeebc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055d6f80; end: 1055d6f9b; -[SCLensInfoCardsServicesEntryPoint _createInfoCardVisibility] */

void FUN_1055d6f80(void)

{
  _objc_alloc_init(PTR_PTR_1126bbd18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055d6f9c; end: 1055d6fa7; -[SCLensInfoCardsServicesEntryPoint _mockedInfoCardProvider] */

void FUN_1055d6f9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bbd20,PTR_s_instance_1125f78e0);
  return;
}



/* Entry: 1055d6fa8; end: 1055d7047; -[SCLensInfoCardsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055d6fa8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127266c4,0);
  _objc_storeStrong(param_1 + _DAT_1127266c0,0);
  _objc_destroyWeak(param_1 + _DAT_1127266bc);
  _objc_destroyWeak(param_1 + _DAT_1127266b8);
  _objc_destroyWeak(param_1 + _DAT_1127266b4);
  _objc_destroyWeak(param_1 + _DAT_1127266b0);
  _objc_destroyWeak(param_1 + _DAT_1127266ac);
  _objc_destroyWeak(param_1 + _DAT_1127266a8);
  _objc_destroyWeak(param_1 + _DAT_1127266a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127266a0);
  return;
}



/* Entry: 1055d7048; end: 1055d70a3; -[MockLensInfoCardDataServiceProvider provide] */

void FUN_1055d7048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbd28;
  _objc_alloc(PTR_PTR_1126bbd28);
  func_0x00010be60d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d9a0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055d70a4; end: 1055d70af; -[MockLensInfoCardDataServiceProvider _mockedInfoCardProvider] */

void FUN_1055d70a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bbd20,PTR_s_instance_1125f78e0);
  return;
}



/* Entry: 1055d70b0; end: 1055d70bf; -[MockLensInfoCardDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055d70b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127266c8);
  return;
}



/* Entry: 1055d70c0; end: 1055d7113; +[SCLensInfoCardMockedDataProvider instance] */

void FUN_1055d70c0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136bcda8 != -1) {
    func_0x00010002a2fc(0x1136bcda8,&PTR___NSConcreteGlobalBlock_11089d2e8);
  }
  uVar1 = uRam00000001136bcdb0;
  _objc_retain(uRam00000001136bcdb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055d7114; end: 1055d713f;  */

void FUN_1055d7114(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126bbd20;
  _objc_opt_new();
  uVar1 = puRam00000001136bcdb0;
  puRam00000001136bcdb0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055d7140; end: 1055d71c3; -[SCLensInfoCardMockedDataProvider init] */

undefined1 * FUN_1055d7140(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e93c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR____NSDictionary0__struct_11034ab58;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = PTR____NSDictionary0__struct_11034ab58;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1055d71c4; end: 1055d7297; -[SCLensInfoCardMockedDataProvider addMockedInfoCardData:] */

void FUN_1055d71c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = param_1;
    func_0x00010c0cf840(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,param_3,lVar1);
    _objc_release(lVar1);
    uVar3 = uVar4;
    func_0x00010bf51e00(uVar4);
    func_0x00010c1c8a60(param_1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055d7298; end: 1055d732f; -[SCLensInfoCardMockedDataProvider removeMockedInfoCardData:] */

void FUN_1055d7298(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c0cf840(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d3c80();
    _objc_release(uVar2);
    func_0x00010c12d3e0(uVar3,param_2,param_3);
    uVar2 = uVar3;
    func_0x00010bf51e00(uVar3);
    func_0x00010c1c8a60(param_1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055d7330; end: 1055d73e7; -[SCLensInfoCardMockedDataProvider addMockedError:lensId:] */

void FUN_1055d7330(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c0cf700(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d3c80();
    _objc_release(uVar2);
    func_0x00010c1d0640(uVar3,param_2,param_3,param_4);
    uVar2 = uVar3;
    func_0x00010bf51e00(uVar3);
    func_0x00010c1c8a40(param_1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055d73e8; end: 1055d747f; -[SCLensInfoCardMockedDataProvider removeMockedError:] */

void FUN_1055d73e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c0cf700(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d3c80();
    _objc_release(uVar2);
    func_0x00010c12d3e0(uVar3,param_2,param_3);
    uVar2 = uVar3;
    func_0x00010bf51e00(uVar3);
    func_0x00010c1c8a40(param_1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055d7480; end: 1055d7483; -[SCLensInfoCardMockedDataProvider getLensInfoCardDataWithLensIds:contexts:] */

void FUN_1055d7480(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be20250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getLensInfoCardDataWithLensIds__112565a30);
  return;
}



/* Entry: 1055d7484; end: 1055d748b; -[SCLensInfoCardMockedDataProvider getLensInfoCardDataWithLensId:contexts:] */

void FUN_1055d7484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be20230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getLensInfoCardDataWithLensId_l_112565a28,param_3,0);
  return;
}



/* Entry: 1055d748c; end: 1055d7493; -[SCLensInfoCardMockedDataProvider getLensInfoCardDataWithLensId:contexts:lensSource:] */

void FUN_1055d748c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be20230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getLensInfoCardDataWithLensId_l_112565a28,param_3,0);
  return;
}



/* Entry: 1055d7494; end: 1055d767b; -[SCLensInfoCardMockedDataProvider _getLensInfoCardDataWithLensId:lensSource:] */

void FUN_1055d7494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055d767c;
  puStack_70 = &UNK_11089d308;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar1);
  ppuVar2 = &puStack_88;
  puStack_68 = puVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  puVar6 = puVar1;
  if ((int)puVar3 == 0) {
    uVar4 = param_1;
    func_0x00010c0cf840(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c0cf700(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    (*(code *)ppuVar2[2])(ppuVar2,uVar5,uVar4);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2,0,0);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055d767c; end: 1055d7703;  */

void FUN_1055d767c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 8));
    if (param_3 == 0) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x00010bf43ca0();
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


