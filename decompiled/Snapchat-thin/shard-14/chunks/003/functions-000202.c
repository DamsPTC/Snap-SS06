/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0bf3cc; end: 10b0bf3d3; -[SCLensContentFetcherConfig encryptionIv] */

undefined8 FUN_10b0bf3cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b0bf3d4; end: 10b0bf44b; -[SCLensContentFetcherConfig .cxx_destruct] */

void FUN_10b0bf3d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0bf44c; end: 10b0bf5cf; -[SCLensContentManagerCacheMetadataProvider initWithContentDelivery:usingNewCmApiWithContentAttribution:performer:] */

undefined8 *
FUN_10b0bf44c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_90 = PTR_PTR_112705910;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 3) = param_4;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f5daf8;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f5db38;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3240;
    ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3258;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f5db18;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f5db58;
    ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3270;
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3288;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f5db78;
    ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d32a0;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010bf27220();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return puVar1;
}



/* Entry: 10b0bf5d0; end: 10b0bf61b; -[SCLensContentManagerCacheMetadataProvider cachedLensIdsFutureForLensCacheDomain:] */

void FUN_10b0bf5d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf27220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0bf61c; end: 10b0bf633;  */

void FUN_10b0bf61c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_compactMap__1125ae648,&PTR___NSConcreteGlobalBlock_110cb88a0);
  return;
}



/* Entry: 10b0bf634; end: 10b0bf75b; -[SCLensContentManagerCacheMetadataProvider cachedLensIdentifiersFutureForLensCacheDomain:] */

void FUN_10b0bf634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  func_0x00010c0f7fc0(uVar4);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0bf75c; end: 10b0bf7a7;  */

void FUN_10b0bf75c(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x38);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if ((bVar1 & 1) == 0) {
    func_0x00010bdfad00();
  }
  else {
    func_0x00010be62d80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0bf7a8; end: 10b0bf90f; -[SCLensContentManagerCacheMetadataProvider _deprecatedCachedLensIdsFutureForLensCacheDomain:promise:] */

void FUN_10b0bf7a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c11d160(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0bf910; end: 10b0bfb4b;  */

/* WARNING: Possible PIC construction at 0x00010b0bfaa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b0bfaa4) */

void FUN_10b0bf910(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar6);
    _objc_release(puVar7);
    _objc_release(0);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
    ___stack_chk_fail();
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    puVar7 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar2 = 0;
    do {
      lVar3 = param_2;
      func_0x00010c0d9840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_retain(lVar3);
      lVar2 = lVar3;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(lVar3);
          }
          puVar4 = PTR_PTR_1126bba78;
          func_0x00010be4a4e0(PTR_PTR_1126bba78);
          _objc_retainAutoreleasedReturnValue();
          iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
          func_0x00010c0720c0();
          if (iVar1 != 0) {
            puVar5 = PTR_PTR_1126bba78;
            func_0x00010be4aea0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar5 != (undefined *)0x0) {
              func_0x00010befa120(puVar7);
            }
            _objc_release(puVar5);
          }
          _objc_release(puVar4);
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
      lVar8 = lVar3;
      func_0x00010bf529e0();
      lVar2 = lVar3;
    } while (lVar8 != 0);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_completeWithValue__1125ae900,puVar7);
  return;
}



/* Entry: 10b0bfb4c; end: 10b0bfb5b;  */

void FUN_10b0bfb4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 10b0bfb5c; end: 10b0bfc5b; -[SCLensContentManagerCacheMetadataProvider _newCachedLensIdsFutureForLensCacheDomain:promise:] */

void FUN_10b0bfb5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
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
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bde7a40(param_1,param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b0bfc5c;
  puStack_50 = &UNK_110cb88f0;
  _objc_retain(param_4);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b0bfe14;
  puStack_78 = &UNK_110849810;
  uStack_70 = param_4;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c11d1a0(uVar3,param_2,0xc,lVar2,&puStack_68,&puStack_90);
  _objc_release(uVar3);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0bfc5c; end: 10b0bfe13;  */

/* WARNING: Possible PIC construction at 0x00010b0bfdb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b0bfdb8) */
/* WARNING: Removing unreachable block (ram,0x00010b0bfe10) */
/* WARNING: Removing unreachable block (ram,0x00010b0bfdf0) */

void FUN_10b0bfc5c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = 0;
  do {
    lVar2 = param_2;
    func_0x00010c0d9840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        puVar4 = PTR_PTR_1126bba78;
        func_0x00010be4aea0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 != (undefined *)0x0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(puVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    lVar5 = lVar2;
    func_0x00010bf529e0();
    lVar3 = lVar2;
  } while (lVar5 != 0);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_completeWithValue__1125ae900,puVar1);
  return;
}



/* Entry: 10b0bfe14; end: 10b0bfe23;  */

void FUN_10b0bfe14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 10b0bfe24; end: 10b0c005b; +[SCLensContentManagerCacheMetadataProvider _lensIDFromContentMetadata:] */

void FUN_10b0bfe24(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c104840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
    goto LAB_10b0c0034;
  }
  puVar3 = PTR_PTR_1126b7fa8;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c104840(param_3);
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = 0;
  func_0x00010c008360(puVar3,param_2,lVar2,&lStack_58);
  lVar1 = lStack_58;
  _objc_release(lVar2);
  puVar8 = (undefined *)0x0;
  if (lVar1 == 0) {
    puVar4 = puVar3;
    func_0x00010c091e60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bfd85a0();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar8 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar4;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    puVar8 = puVar4;
    func_0x00010c296c60();
    if ((int)puVar8 == 2) {
      puVar8 = puVar4;
      func_0x00010bf38ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c08fa60();
      _objc_release(puVar7);
      _objc_release(puVar8);
      if (puVar5 == (undefined *)0x0) goto LAB_10b0bffe4;
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      puVar8 = puVar4;
      func_0x00010bf38ae0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340(puVar7,param_2,puVar5,4);
      _objc_release(puVar5);
      _objc_release(puVar8);
    }
    else {
LAB_10b0bffe4:
      puVar7 = (undefined *)0x0;
    }
    if (puVar6 == (undefined *)0x0 && puVar7 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126df9a0;
      _objc_alloc(PTR_PTR_1126df9a0);
      func_0x00010c01b540();
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_10b0c0034:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b0c005c; end: 10b0c00ab; -[SCLensContentManagerCacheMetadataProvider _contentAttributionFromlensCacheDomain:] */

long FUN_10b0c005c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067ec0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10b0c00ac; end: 10b0c0233; +[SCLensContentManagerCacheMetadataProvider _lensCacheDomainFromCachedContentMetadata:] */

void FUN_10b0c00ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfa2680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  puVar7 = (undefined *)0x0;
  if (lVar3 == 0) goto LAB_10b0c0214;
  puVar4 = PTR_PTR_1126b9620;
  _objc_alloc();
  lVar3 = param_3;
  func_0x00010bfa2680(param_3);
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c008360(puVar4,param_2,lVar3,&lStack_38);
  lVar2 = lStack_38;
  _objc_release(lVar3);
  puVar7 = (undefined *)0x0;
  if (lVar2 == 0) {
    puVar5 = puVar4;
    func_0x00010bf4be00();
    puVar7 = (undefined *)0x0;
    iVar1 = (int)puVar5;
    if (iVar1 < 0x10) {
      if (iVar1 < 0xb) {
        if (iVar1 == 9) {
          ppuVar6 = &PTR_PTR_110cb85d0;
        }
        else {
          if (iVar1 != 10) goto LAB_10b0c020c;
          ppuVar6 = &PTR_PTR_110cb85e0;
        }
      }
      else if (iVar1 == 0xb) {
        ppuVar6 = &PTR_PTR_110cb85d8;
      }
      else if (iVar1 == 0xd) {
        ppuVar6 = &PTR_PTR_110cb85f0;
      }
      else {
        if (iVar1 != 0xf) goto LAB_10b0c020c;
        ppuVar6 = &PTR_PTR_110cb85e8;
      }
    }
    else if (iVar1 - 0x10U < 2) {
      ppuVar6 = &PTR_PTR_110cb8600;
    }
    else if (iVar1 == 0x12) {
      ppuVar6 = &PTR_PTR_110cb85f8;
    }
    else {
      if (iVar1 != 0x21) goto LAB_10b0c020c;
      ppuVar6 = &PTR_PTR_110cb8608;
    }
    puVar7 = *ppuVar6;
    _objc_retain(puVar7);
  }
LAB_10b0c020c:
  _objc_release(puVar4);
LAB_10b0c0214:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b0c0234; end: 10b0c026f; -[SCLensContentManagerCacheMetadataProvider .cxx_destruct] */

void FUN_10b0c0234(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0c0270; end: 10b0c02db; -[SCLensContentManagerFetcher isContentInCacheForKey:] */

bool FUN_10b0c0270(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c11d220();
  _objc_release(param_3);
  _objc_release(lVar2);
  return lVar1 == 0;
}



/* Entry: 10b0c02dc; end: 10b0c047f; -[SCLensContentManagerFetcher fetchContentForConfig:onProgress:completion:] */

void FUN_10b0c02dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf4c8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9580(param_3);
  func_0x00010be383a0(param_1);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4c8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c11d240(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c0480; end: 10b0c04c7;  */

void FUN_10b0c0480(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ea80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0c04c8; end: 10b0c05cf; -[SCLensContentManagerFetcher fetchCachedContentForKey:shouldCacheContentResult:] */

void FUN_10b0c04c8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c11d220();
  _objc_release(lVar1);
  if (lVar5 == 0) {
    puVar2 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c13e300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar5 = param_1;
    func_0x00010bde7fa0(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    if ((param_4 != 0) && (lVar5 != 0)) {
      func_0x00010bdc8b00(param_1,param_2,lVar5);
    }
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  else {
    lVar5 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10b0c05d0; end: 10b0c06cf; -[SCLensContentManagerFetcher boostRequestForContentKey:settings:requestContext:] */

void FUN_10b0c05d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010beb2b20(param_1,param_2,param_3,param_4);
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c27ef40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b0c06d0;
    puStack_40 = &UNK_110855f30;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c13e560(uVar2,param_2,param_3,uVar3,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c06d0; end: 10b0c06d3;  */

void FUN_10b0c06d0(void)

{
  return;
}



/* Entry: 10b0c06d4; end: 10b0c072f; -[SCLensContentManagerFetcher removeLensContentFromCacheWithCompletion:] */

void FUN_10b0c06d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bddffc0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12abe0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c0730; end: 10b0c0907; -[SCLensContentManagerFetcher _handleQueryContentStatusCallbackForConfig:contentStatus:onProgress:completion:] */

void FUN_10b0c0730(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bfa9580();
  if (param_4 == 0) {
    if (lVar1 != 1) {
      func_0x00010be96380(param_1);
    }
    else {
      func_0x00010be963e0();
    }
  }
  else if (lVar1 != 1) {
    _objc_initWeak(auStack_48,param_1);
    lVar1 = param_3;
    func_0x00010c08d7a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_5);
    func_0x00010c297260(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010bdd8ec0(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c0908; end: 10b0c0987;  */

void FUN_10b0c0908(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  if (param_3 == 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be05e20();
    _objc_release(param_1);
  }
  else {
    func_0x00010bdd8ec0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c0988; end: 10b0c0d33; -[SCLensContentManagerFetcher _downloadContentForConfig:networkRequest:onProgress:completion:] */

void FUN_10b0c0988(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_70,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b0c0d34;
  puStack_90 = &UNK_1108603e0;
  _objc_retain(param_3);
  lStack_88 = param_3;
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_retain(param_6);
  ppuVar1 = &puStack_a8;
  uStack_80 = param_6;
  _objc_retainBlock();
  lVar2 = param_3;
  func_0x00010c08da40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  uStack_c0 = *(undefined8 *)(param_1 + 8);
  lStack_c8 = param_3;
  lStack_d0 = param_3;
  lVar2 = param_3;
  lVar6 = param_3;
  lVar7 = param_3;
  lVar8 = param_3;
  if (lVar3 == 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292920(param_3);
    func_0x00010c135080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08d8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88ac0(uStack_c0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292920(param_3);
    func_0x00010c135080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08da40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c08d8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf88ae0(uStack_c0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lStack_d0);
  _objc_release(lStack_c8);
  _objc_release(uStack_c0);
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(lStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c0d34; end: 10b0c0dc3;  */

void FUN_10b0c0d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_3;
  func_0x00010c0d7ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0f66a0(uVar2);
  func_0x00010be963e0(lVar1,param_2,uVar4,uVar3,0,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0c0dc4; end: 10b0c0f5b; -[SCLensContentManagerFetcher _retrieveCachedContentAsyncForConfig:payloadSize:completion:] */

void FUN_10b0c0dc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf4c8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c135080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c27ef40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c13e560(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c0f5c; end: 10b0c1037;  */

void FUN_10b0c0f5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc79a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b7f5498();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bfc79a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c1e0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd8ec0();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b0c1038; end: 10b0c119f; -[SCLensContentManagerFetcher _retrieveCachedContentSyncForConfig:payloadSize:fromCache:completion:] */

void FUN_10b0c1038(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4c8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c135080(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ef40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c13e300(uVar5,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar1 = uVar4;
  func_0x00010bfc79a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b7f5498();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bdd8ec0(param_1,param_2,uVar4,param_5,param_4,uVar3,param_3,param_6);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10b0c11a0; end: 10b0c12b7; -[SCLensContentManagerFetcher _callbackWithContentResult:fromCache:payloadSize:error:config:completion:] */

void FUN_10b0c11a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_7;
  func_0x00010bf4c8a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa9580(param_7);
  func_0x00010bdf89a0(param_1);
  _objc_release(uVar1);
  if (param_8 != 0) {
    lVar2 = param_1;
    func_0x00010bde7fa0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 != 0) && (uVar1 = param_7, func_0x00010c22e760(), (int)uVar1 != 0)) {
      func_0x00010bdc8b00(param_1);
    }
    (**(code **)(param_8 + 0x10))(param_8,param_3,param_4,param_5,param_6);
    _objc_release(lVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c12b8; end: 10b0c130b; -[SCLensContentManagerFetcher _contentResulToUseFromResult:] */

void FUN_10b0c12b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfcaaa0();
    lVar2 = param_3;
    if (lVar1 != 0) {
      lVar2 = 0;
    }
  }
  _objc_retain(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b0c130c; end: 10b0c1313; -[SCLensContentManagerFetcher _addToContentResultMapForContentResult:] */

void FUN_10b0c130c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf269d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_cacheLensContentResult__1125a7418);
  return;
}



/* Entry: 10b0c1314; end: 10b0c131b; -[SCLensContentManagerFetcher _clearCachedContentResults] */

void FUN_10b0c1314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_clearCache_1125ac488)
  ;
  return;
}



/* Entry: 10b0c131c; end: 10b0c1443; -[SCLensContentManagerFetcher _incrementDefaultFetchPolicyRequestCountForContentKey:fetchPolicy:] */

void FUN_10b0c131c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar1 = param_3;
    FUN_10b0ee738(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar5);
    _objc_sync_enter(uVar5);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d32b8,uVar1);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar4,param_2,lVar2 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar4,uVar1);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_sync_exit(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c1444; end: 10b0c15a3; -[SCLensContentManagerFetcher _decrementDefaultFetchPolicyRequestCountForContentKey:fetchPolicy:] */

void FUN_10b0c1444(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar1 = param_3;
    FUN_10b0ee738(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar5);
    _objc_sync_enter(uVar5);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (0 < lVar3) {
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010c0e00e0(lVar2,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067fc0();
      func_0x00010c0df780(puVar4,param_2,lVar3 + -1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar4,uVar1);
      _objc_release(puVar4);
      _objc_release(lVar2);
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010c0e00e0(lVar2,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067fc0();
      _objc_release(lVar2);
      if (lVar3 < 1) {
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,uVar1);
      }
    }
    _objc_sync_exit(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c15a4; end: 10b0c1693; -[SCLensContentManagerFetcher _shouldBoostRequestForKey:settings:] */

bool FUN_10b0c15a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c113c80();
  if (lVar1 < 3) {
    bVar5 = false;
  }
  else {
    uVar2 = param_3;
    FUN_10b0ee738(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
    _objc_sync_enter(uVar4);
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c067fc0();
    bVar5 = 0 < lVar1;
    _objc_release(lVar3);
    _objc_sync_exit(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar5;
}



/* Entry: 10b0c1694; end: 10b0c16cf; -[SCLensContentManagerFetcher .cxx_destruct] */

void FUN_10b0c1694(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0c16d0; end: 10b0c174b;  */

void FUN_10b0c16d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1060;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c032f60();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b1378;
  func_0x00010c1081a0(PTR_PTR_1126b1378);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0c174c; end: 10b0c1823; +[SCLensContentManagerHelper statusCodeFromResult:error:] */

long FUN_10b0c174c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar3;
  func_0x00010c0d7ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
    if (lVar1 != 0) {
      lVar3 = 200;
    }
    if (param_4 != 0) {
      lVar3 = param_4;
      func_0x00010bf3ec40(param_4);
    }
  }
  else {
    lVar3 = lVar2;
    func_0x00010c13b780(lVar2);
    lVar3 = (long)(int)lVar3;
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return lVar3;
}



/* Entry: 10b0c1824; end: 10b0c18cb; -[SCLensContentResultsCache cacheLensContentResult:] */

void FUN_10b0c1824(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfc40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,param_3,lVar2);
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c18cc; end: 10b0c190f; -[SCLensContentResultsCache clearCache] */

void FUN_10b0c18cc(long param_1)

{
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 10b0c1910; end: 10b0c195f; -[SCLensContentResultsCache cachedResults] */

void FUN_10b0c1910(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0c1960; end: 10b0c196b; -[SCLensContentResultsCache .cxx_destruct] */

void FUN_10b0c1960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0c196c; end: 10b0c1b7f; -[SCLensDataContentManagerFetcher initWithContentManagerFetcher:userContentManagerFetcher:fetchRanker:grapheneRegistry:grapheneV2Logger:lensDataFetcherConfig:circumstanceEngine:] */

undefined1 *
FUN_10b0c196c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  puStack_68 = PTR_PTR_112705928;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c091d00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar6;
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c091e40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
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



/* Entry: 10b0c1b80; end: 10b0c1ba7; -[SCLensDataContentManagerFetcher fetchRanker] */

void FUN_10b0c1b80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0c1ba8; end: 10b0c1cff; -[SCLensDataContentManagerFetcher fetchImageWithURL:lensID:featureType:cacheDomain:expirationDate:requestSettings:completion:] */

void FUN_10b0c1ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _CACurrentMediaTime();
  puVar2 = PTR_PTR_1126bba90;
  uVar1 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde7e20(puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be11c60(param_1,param_2,param_3,param_4,param_5,puVar2,param_7,param_8,param_9,
                      param_10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c5180(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0c1d00; end: 10b0c1e7f; -[SCLensDataContentManagerFetcher fetchContentWithURLDataPath:lensID:featureType:resourceType:cacheDomain:expirationDate:requestSettings:completion:] */

void FUN_10b0c1d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar2 = PTR_PTR_1126bba90;
  uVar1 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde7e00(puVar2,param_3,uVar1,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010be10980(param_1,param_2,param_3,uVar1,param_5,puVar2,1,param_8,param_9,param_10,0,0,
                      param_11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = puVar2;
  func_0x00010c0c5180(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0c1e80; end: 10b0c200b; -[SCLensDataContentManagerFetcher fetchContentWithLensResource:lensID:featureType:cacheDomain:expirationDate:requestSettings:onProgress:completion:] */

void FUN_10b0c1e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _CACurrentMediaTime();
  puVar3 = PTR_PTR_1126bba90;
  uVar1 = param_4;
  func_0x00010bdc3360(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf38a80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde7e00(puVar3,param_3,uVar1,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be10940(param_1,param_2,param_3,param_4,param_5,puVar3,param_7,param_8,param_9,
                      param_10,param_11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0c5180(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0c200c; end: 10b0c20ef; -[SCLensDataContentManagerFetcher fetchCachedContentFilePathWithLensResource:featureType:] */

void FUN_10b0c200c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126bba90;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bdc3360(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf38a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bde7e00(puVar2,param_2,uVar1,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa5680(uVar3,param_2,puVar2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0c20f0; end: 10b0c219b; -[SCLensDataContentManagerFetcher boostRequest:setting:featureType:] */

void FUN_10b0c20f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bba90;
  _objc_retain(param_4);
  func_0x00010bde7de0(puVar1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0c46a0();
  lVar3 = param_1;
  func_0x00010be90ca0(param_1,param_2,0,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f7c0(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_4,lVar3);
  _objc_release(param_4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0c219c; end: 10b0c219f; -[SCLensDataContentManagerFetcher markLocallyCachedContentUsageForURL:resourceType:lensID:checksum:domain:expirationDate:] */

void FUN_10b0c219c(void)

{
  return;
}



/* Entry: 10b0c21a0; end: 10b0c21a3; -[SCLensDataContentManagerFetcher removeContentForURL:checksum:cacheKey:resourceType:completion:] */

void FUN_10b0c21a0(void)

{
  return;
}



/* Entry: 10b0c21a4; end: 10b0c2243; -[SCLensDataContentManagerFetcher removeExpiredContentWithCacheCondition:completion:] */

void FUN_10b0c21a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0c2244;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x000107c27d8c(uVar1,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0c2244; end: 10b0c2257;  */

void FUN_10b0c2244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0c2254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 10b0c2258; end: 10b0c2327; -[SCLensDataContentManagerFetcher resetCache:] */

void FUN_10b0c2258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  func_0x00010c12cec0(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d98(uVar1,uVar2,param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b0c2328; end: 10b0c232f;  */

void FUN_10b0c2328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0c2330; end: 10b0c25b7; -[SCLensDataContentManagerFetcher _fetchContentWithLensResource:lensID:contentKey:cacheDomain:expirationDate:requestSettings:startTime:onProgress:completion:] */

void FUN_10b0c2330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_initWeak(auStack_80,param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bdc3360(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_4);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_11);
  func_0x00010be10980(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b0c25b8; end: 10b0c25ff;  */

void FUN_10b0c25b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beced80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b0c2600; end: 10b0c26f3;  */

void FUN_10b0c2600(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126df9a8;
  if (((param_4 & 1) == 0) && (param_7 == 0)) {
    func_0x00010c27dd80(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bfec600(puVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c26f4; end: 10b0c28f7; -[SCLensDataContentManagerFetcher _fetchImageWithURL:lensID:contentKey:cacheDomain:expirationDate:requestSettings:startTime:completion:] */

void FUN_10b0c26f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_78,param_2);
  uVar1 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_6);
  _objc_retain(param_9);
  uStack_80 = param_1;
  _objc_retain(param_7);
  _objc_retain(param_10);
  func_0x00010be15640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b0c28f8; end: 10b0c29a7;  */

void FUN_10b0c28f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa9580(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be297c0(*(undefined8 *)(param_1 + 0x48),lVar1);
  _objc_release(param_5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0c29a8; end: 10b0c2bb7; -[SCLensDataContentManagerFetcher _fetchContentWithUrlString:lensID:contentKey:resourceType:cacheDomain:expirationDate:requestSettings:lazyTransformParams:startTime:onProgress:completion:] */

void FUN_10b0c29a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_initWeak(auStack_80,param_2);
  _objc_copyWeak(auStack_98,auStack_80);
  uStack_90 = param_7;
  _objc_retain(param_6);
  uStack_88 = param_1;
  _objc_retain(param_8);
  _objc_retain(param_13);
  func_0x00010be15640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b0c2bb8; end: 10b0c2cef;  */

void FUN_10b0c2bb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  func_0x00010c252f60();
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = param_2;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1ee80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde2a60(uVar5,lVar1);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0c2cf0; end: 10b0c2fa7; -[SCLensDataContentManagerFetcher _fetchWithUrlString:lensID:contentKey:cacheDomain:expirationDate:requestSettings:lazyTransformParams:shouldCacheContentResult:onProgress:completion:] */

void FUN_10b0c2cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b0c2fa8;
  puStack_80 = &UNK_110cb8a40;
  uStack_78 = param_5;
  uStack_70 = param_3;
  lStack_68 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bba90;
  func_0x00010be49b40(PTR_PTR_1126bba90,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar3 = PTR_PTR_1126df990;
  _objc_alloc(PTR_PTR_1126df990);
  uVar9 = param_5;
  func_0x00010c0c46a0(param_5);
  lVar4 = param_1;
  func_0x00010be90ca0(param_1,param_2,param_4,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar5 = param_8;
  func_0x00010bfa9580(param_8);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  lVar6 = param_8;
  func_0x00010c113c80();
  func_0x00010c003700(puVar3,param_2,param_5,puVar1,lVar4,lVar5,param_9,puVar2,uVar9,2 < lVar6);
  _objc_release(param_9);
  _objc_release(lVar4);
  puVar7 = puVar3;
  func_0x00010bf4c8a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0c46a0();
  _objc_release(puVar7);
  func_0x00010bde7ee0(param_1,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5d80();
  _objc_release(param_13);
  _objc_release(param_12);
  uVar9 = param_5;
  func_0x00010c0c5180(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 10b0c2fa8; end: 10b0c3037;  */

void FUN_10b0c2fa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126bba90;
  puVar3 = PTR_PTR_1126ae558;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be910e0(puVar2,param_2,uVar1,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0c3038; end: 10b0c31eb; -[SCLensDataContentManagerFetcher _handleFetchCompletionForImagesWithContentResult:contentKey:fetchPolicy:fromCache:payloadSize:error:startTime:cacheDomain:completion:] */

void FUN_10b0c3038(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if ((param_4 == 0) || (lVar1 = param_4, func_0x00010bfcaaa0(), lVar1 != 0)) {
    func_0x00010bde2a80(param_1,param_2,param_3,0,param_7,param_9,0,param_10,param_11);
    goto LAB_10b0c31a8;
  }
  lVar1 = param_4;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_3,
                        &PTR____CFConstantStringClassReference_110f5dc98,
                        &PTR____CFConstantStringClassReference_110f5dcb8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)0x0;
    puVar4 = puVar3;
LAB_10b0c3184:
    func_0x00010bde2a80(param_1,param_2,param_3,puVar2,param_7,puVar3,0,param_10,param_11);
    _objc_release(puVar4);
  }
  else {
    if (param_9 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = (undefined *)0x0;
      puVar4 = puVar2;
      goto LAB_10b0c3184;
    }
    func_0x00010bde2a80(param_1,param_2,param_3,0,param_7,param_9,0,param_10,param_11);
  }
  _objc_release(lVar1);
LAB_10b0c31a8:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0c31ec; end: 10b0c332b; +[SCLensDataContentManagerFetcher _requestForWithRequestKey:urlString:requestSettings:] */

void FUN_10b0c31ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b1058;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_5;
  func_0x00010c278ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c279120(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c278f40(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c01b360(puVar1,param_2,uVar2,uVar3,uVar4,0,0x2c3b);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b0c332c; end: 10b0c337f; -[SCLensDataContentManagerFetcher _requestContextForLensId:mediaContextType:] */

void FUN_10b0c332c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c098440(uVar1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10b0c16d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0c3380; end: 10b0c3443; -[SCLensDataContentManagerFetcher _completeContentFetchWithUIImage:fromCache:error:isFallback:startTime:cacheDomain:completion:] */

void FUN_10b0c3380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  func_0x00010be57e80(param_1,param_2);
  if (param_9 != 0) {
    (**(code **)(param_9 + 0x10))(param_9,param_4,param_5,param_6);
  }
  _objc_release(param_9);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0c3444; end: 10b0c3587; -[SCLensDataContentManagerFetcher _completeContentFetchWithContentResult:resourceType:cacheKey:fromCache:payloadSize:error:isFallback:startTime:cacheDomain:boltContentId:statusCode:completion:] */

void FUN_10b0c3444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_12);
  uVar1 = param_4;
  func_0x00010bfc5880(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010be57e80(param_1,param_2);
  _objc_release(param_12);
  if (param_15 != 0) {
    (**(code **)(param_15 + 0x10))
              (param_15,param_4,param_5,param_7,param_8,param_6,param_9,param_13,param_14);
  }
  _objc_release(uVar1);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0c3588; end: 10b0c3803; -[SCLensDataContentManagerFetcher _logRetrieveContentMetricsForCacheDomain:fromCache:isFallback:success:error:startTime:] */

void FUN_10b0c3588(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long in_x6;
  long unaff_x25;
  undefined8 uVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(in_x6);
  _CACurrentMediaTime();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  if (in_x6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    unaff_x25 = in_x6;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c14de00(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b5dab5c(uVar5,param_4,ppuVar1,puVar2,puVar3,puVar4 != (undefined *)0x0,1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (in_x6 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_release(ppuVar1);
    _objc_release(unaff_x25);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    param_2 = in_x6;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c14de00(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b5daee4(uVar5,param_4,ppuVar1,puVar2,puVar3,puVar4 != (undefined *)0x0,
                (long)((dVar6 - param_1) * 1000.0));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (in_x6 != 0) {
    _objc_release(ppuVar1);
    _objc_release(param_2);
  }
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0c3804; end: 10b0c38d3; -[SCLensDataContentManagerFetcher _transformParamsForResource:lensID:] */

void FUN_10b0c3804(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if (lVar1 - 3U < 2) {
    puVar3 = PTR_PTR_1126b7fa8;
    _objc_alloc_init(PTR_PTR_1126b7fa8);
    puVar2 = PTR_PTR_1126df9b8;
    _objc_alloc_init(PTR_PTR_1126df9b8);
    func_0x00010c1bb400(puVar3,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010bdc6400(PTR_PTR_1126bba90,param_2,puVar3,param_3,param_4);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  puVar2 = puVar3;
  func_0x00010bf63640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0c38d4; end: 10b0c390b; -[SCLensDataContentManagerFetcher _contentManagerFetcherForCommonMediaContextType:] */

void FUN_10b0c38d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x10;
  if (param_3 != 0x13) {
    lVar1 = 8;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0c390c; end: 10b0c3a3f; +[SCLensDataContentManagerFetcher _addChecksumToTransformParams:resource:lensID:] */

void FUN_10b0c390c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126df9c0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c091e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c2c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_4;
  func_0x00010bf38a80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010bf64920(uVar2,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c091e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf38ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010be5e280(param_1,param_2,param_3,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c3a40; end: 10b0c3ac7; +[SCLensDataContentManagerFetcher _maybeSetLensIDInTransformParams:lensID:] */

void FUN_10b0c3a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bba90;
  func_0x00010be4aec0(PTR_PTR_1126bba90,param_2,param_4);
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_3;
    func_0x00010c091e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c3ac8; end: 10b0c3adb; +[SCLensDataContentManagerFetcher _mediaContextTypeFromFeatureType:] */

undefined8 FUN_10b0c3ac8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x21;
  if (param_3 != 1) {
    uVar1 = 0xc;
  }
  return uVar1;
}



/* Entry: 10b0c3adc; end: 10b0c3c07; +[SCLensDataContentManagerFetcher _contentKeyForLensContentWithURLString:featureType:checksum:] */

void FUN_10b0c3adc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar4 == 0) {
    lVar5 = param_5;
    func_0x00010c08fa60();
    lVar1 = param_3;
    if (lVar5 != 0) {
      lVar1 = param_5;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110e23418;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e23418,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5e580(PTR_PTR_1126bba90,param_2,param_4);
    puVar3 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    _objc_release(ppuVar6);
  }
  else {
    puVar3 = PTR_PTR_1126bba90;
    func_0x00010bde7e40(PTR_PTR_1126bba90,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0c3c08; end: 10b0c3cfb; +[SCLensDataContentManagerFetcher _contentKeyForLensImageWithURLString:] */

void FUN_10b0c3c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)puVar3 == 0) {
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e23418;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e23418,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0(puVar2,param_2,ppuVar4,1);
    _objc_release(ppuVar4);
  }
  else {
    puVar2 = PTR_PTR_1126bba90;
    func_0x00010bde7e40(PTR_PTR_1126bba90,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0c3cfc; end: 10b0c3d6b; +[SCLensDataContentManagerFetcher _contentKeyForLensContentWithRequestKey:featureType:] */

void FUN_10b0c3cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bba90;
  _objc_retain(param_3);
  func_0x00010be5e580(puVar1,param_2,param_4);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0c3d6c; end: 10b0c3dbf; +[SCLensDataContentManagerFetcher _lensIDIntegerFromString:] */

undefined * FUN_10b0c3d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0b4ca0(param_3);
  func_0x00010c0df7c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2827c0();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10b0c3dc0; end: 10b0c3ebf; +[SCLensDataContentManagerFetcher _lazyLensSerializedFeatureMetadataFromCacheDomain:] */

void FUN_10b0c3dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b0c3e58;
  puStack_30 = &UNK_11095a438;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0c3ec0; end: 10b0c3f6f; +[SCLensDataContentManagerFetcher _lensContentAttributionFromCacheDomain:] */

undefined4 FUN_10b0c3ec0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f5daf8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f5db18);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f5db38);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f5db58);
        uVar2 = 0xf;
        if ((int)uVar1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 10;
      }
    }
    else {
      uVar2 = 0xb;
    }
  }
  else {
    uVar2 = 9;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b0c3f70; end: 10b0c407b; +[SCLensDataContentManagerFetcher _contentKeyForLocalURI:] */

void FUN_10b0c3f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0f5860(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b0c407c; end: 10b0c40f3; -[SCLensDataContentManagerFetcher .cxx_destruct] */

void FUN_10b0c407c(long param_1)

{
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



/* Entry: 10b0c40f4; end: 10b0c41c7; -[SCLens2DBitmojiDownloadOperation initWithLens:requestTiming:asset:lensUserProvider:bitmojiImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0c40f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112705930;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithLens_requestTiming_asset_112541980,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278ce28;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11278ce2c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0c41c8; end: 10b0c489b; -[SCLens2DBitmojiDownloadOperation executeWithSettings:] */

void FUN_10b0c41c8(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfafea0(param_1);
    goto LAB_10b0c480c;
  }
  ppuVar1 = param_1;
  func_0x00010bf1ba60();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = param_1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf933c0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) {
      ppuStack_110 = param_1;
      func_0x00010c097cc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuStack_110;
      func_0x00010bf1c5a0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = unaff_x26;
      func_0x00010c08fa60();
      if (ppuVar4 == (undefined **)0x0) {
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(ppuStack_110);
        _objc_release(ppuVar2);
        _objc_release(ppuVar1);
        goto LAB_10b0c440c;
      }
    }
    ppuVar4 = param_1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    if (ppuVar3 == (undefined **)0x0) {
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      ppuVar3 = ppuStack_110;
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    if (ppuVar6 != (undefined **)0x0) {
      lVar7 = param_3;
      func_0x00010bfa9580();
      if (lVar7 == 1) {
        func_0x00010bfaff00(param_1);
      }
      else {
        ppuVar1 = param_1;
        func_0x00010bf0af00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar1;
        func_0x00010bf933c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(ppuVar1);
        ppuVar1 = (undefined **)PTR_PTR_1126b5938;
        if (ppuVar2 == (undefined **)0x0) {
          ppuVar2 = (undefined **)PTR_PTR_1126b58e0;
          _objc_opt_new(PTR_PTR_1126b58e0);
          ppuVar1 = param_1;
          func_0x00010bf0af00(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar1;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bae20(ppuVar2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppuVar3);
          _objc_release(ppuVar1);
          ppuVar1 = param_1;
          func_0x00010c097cc0(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar1;
          func_0x00010bf1c5a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a8ea0(ppuVar2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          _objc_release(ppuVar1);
          ppuVar1 = param_1;
          func_0x00010bf0af00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c2b78c0(ppuVar2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(ppuVar1);
          ppuVar1 = ppuVar2;
          func_0x00010bf21f60(ppuVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar2 = param_1;
          func_0x00010bf0af00(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          func_0x00010bf933c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = param_1;
          func_0x00010bf0af00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010bfbab80(ppuVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
        }
        _objc_release(ppuVar2);
        ppuVar2 = param_1;
        func_0x00010bf0af00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c136b80();
        _objc_release(ppuVar2);
        if (ppuVar3 == (undefined **)0x3) {
          _objc_initWeak(auStack_a8,param_1);
          func_0x00010bf1ba60();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126b19f8;
          func_0x00010bf28e60();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b19f8;
          puStack_90 = puVar9;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_88 = puVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d0 = 0xc2000000;
          pcStack_c8 = FUN_10b0c489c;
          puStack_c0 = &UNK_110841fb0;
          unaff_x25 = &puStack_d8;
          _objc_copyWeak(auStack_b0,auStack_a8);
          _objc_retain(param_3);
          lStack_b8 = param_3;
          func_0x00010c107380(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(puVar9);
          _objc_release(param_1);
          _objc_release(lStack_b8);
          _objc_destroyWeak(auStack_b0);
          _objc_destroyWeak(auStack_a8);
        }
        else {
          _objc_initWeak(auStack_a8,param_1);
          func_0x00010bf1ba60();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126b19f8;
          func_0x00010bf28e60();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b19f8;
          puStack_a0 = puVar9;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_98 = puVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_100 = 0xc2000000;
          pcStack_f8 = FUN_10b0c48dc;
          puStack_f0 = &UNK_1108acaf0;
          unaff_x25 = &puStack_108;
          _objc_copyWeak(auStack_e0,auStack_a8);
          _objc_retain(param_3);
          lStack_e8 = param_3;
          func_0x00010bfa5420(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(puVar9);
          _objc_release(param_1);
          _objc_release(lStack_e8);
          _objc_destroyWeak(auStack_e0);
          _objc_destroyWeak(auStack_a8);
        }
        _objc_release(ppuVar1);
      }
      goto LAB_10b0c480c;
    }
  }
LAB_10b0c440c:
  puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
  uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f5dcd8;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010bfafea0(param_1);
  _objc_release(puVar9);
LAB_10b0c480c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x25 + 5);
    _objc_destroyWeak(auStack_a8);
    __Unwind_Resume();
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained();
    if (param_3 != 0) {
      func_0x00010bfaff00(param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10b0c489c; end: 10b0c48db;  */

void FUN_10b0c489c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfaff00(lVar1,param_2,0,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0c48dc; end: 10b0c4973;  */

void FUN_10b0c48dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf933c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1145c0(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c4974; end: 10b0c4977; -[SCLens2DBitmojiDownloadOperation boostWithSettings:] */

void FUN_10b0c4974(void)

{
  return;
}



/* Entry: 10b0c4978; end: 10b0c4aa7; -[SCLens2DBitmojiDownloadOperation processBitmojiImageResponse:encodedBitmoji:inputSettings:] */

undefined *
FUN_10b0c4978(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined *)0x0) {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f5dcf8;
    _objc_retain(param_5);
    func_0x00010bf72080(puVar5,param_2,&ppuStack_50,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar1,param_2,&PTR____CFConstantStringClassReference_110f5de18,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    param_3 = puVar1;
    func_0x00010bfafea0(param_1,param_2,puVar1,param_5);
    _objc_release(param_5);
  }
  else {
    _objc_retain(param_5);
    func_0x00010bfaff00(param_1,param_2,param_3,param_5);
    puVar1 = param_5;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar5 = (undefined *)0x1;
  }
  else {
    puVar5 = puVar1;
    _objc_opt_class(puVar1);
    puVar2 = param_3;
    func_0x00010c077980(param_3,param_2,puVar5);
    if ((int)puVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar2 = param_3;
      func_0x00010bf0af00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf933c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0af00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010bf933c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c071ae0(puVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b0c4aa8; end: 10b0c4b93; -[SCLens2DBitmojiDownloadOperation isEqual:] */

long FUN_10b0c4aa8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar4 = 1;
  }
  else {
    lVar4 = param_1;
    _objc_opt_class(param_1);
    lVar1 = param_3;
    func_0x00010c077980(param_3,param_2,lVar4);
    if ((int)lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf0af00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf933c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0af00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf933c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c071ae0(lVar2,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b0c4b94; end: 10b0c4bef; -[SCLens2DBitmojiDownloadOperation hash] */

undefined8 FUN_10b0c4b94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf933c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b0c4bf0; end: 10b0c4bff; -[SCLens2DBitmojiDownloadOperation bitmojiImageFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c4bf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce28);
}



/* Entry: 10b0c4c00; end: 10b0c4c3f; -[SCLens2DBitmojiDownloadOperation setBitmojiImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c4c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce28;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c4c40; end: 10b0c4c4f; -[SCLens2DBitmojiDownloadOperation lensUserProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c4c40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce2c);
}



/* Entry: 10b0c4c50; end: 10b0c4c8f; -[SCLens2DBitmojiDownloadOperation setLensUserProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c4c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c4c90; end: 10b0c4ccf; -[SCLens2DBitmojiDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c4c90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278ce2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ce28,0);
  return;
}



/* Entry: 10b0c4cd0; end: 10b0c4d73; -[SCLens2DBitmojiMegapackDownloadOperation initWithLens:requestTiming:asset:bitmojiListManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0c4cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112705938;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithLens_requestTiming_asset_112541980,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278ce30;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}


