/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c238f8; end: 108c2390f;  */

void FUN_108c238f8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ded0f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded0f8,
                      &PTR____CFConstantStringClassReference_110eef118,0);
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



/* Entry: 108c23910; end: 108c23917; -[SCContactTempSnapchatterServices contactTempSnapchatterInviter] */

undefined8 FUN_108c23910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c23918; end: 108c23947; -[SCContactTempSnapchatterServices .cxx_destruct] */

void FUN_108c23918(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c23948; end: 108c23a3b; -[SCContactTempSnapchatter initWithUserId:phoneNumber:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108c23948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fdda8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112779028);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779028) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277902c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277902c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112779030);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779030) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c23a3c; end: 108c23a5f; -[SCContactTempSnapchatter copyWithZone:] */

undefined8 FUN_108c23a3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108c23a60; end: 108c23af3; -[SCContactTempSnapchatter hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108c23a60(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779028);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277902c);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779030);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108c23ba4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108c23bb0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112779028);
      if ((lVar5 == *(long *)(param_3 + _DAT_112779028)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11277902c);
        if ((lVar5 == *(long *)(param_3 + _DAT_11277902c)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_112779030);
          if (puVar6 != *(undefined1 **)(param_3 + _DAT_112779030)) {
            func_0x00010c071ae0();
            goto LAB_108c23bb0;
          }
          goto LAB_108c23ba4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108c23bb0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108c23af4; end: 108c23bcb; -[SCContactTempSnapchatter isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c23af4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108c23ba4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108c23bb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112779028);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112779028)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11277902c);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11277902c)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_112779030);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_112779030)) {
            func_0x00010c071ae0();
            goto LAB_108c23bb0;
          }
          goto LAB_108c23ba4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108c23bb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108c23bcc; end: 108c23bdb; -[SCContactTempSnapchatter userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c23bcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779028);
}



/* Entry: 108c23bdc; end: 108c23beb; -[SCContactTempSnapchatter phoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c23bdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277902c);
}



/* Entry: 108c23bec; end: 108c23bfb; -[SCContactTempSnapchatter displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c23bec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779030);
}



/* Entry: 108c23bfc; end: 108c23c4b; -[SCContactTempSnapchatter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c23bfc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779030,0);
  _objc_storeStrong(param_1 + _DAT_11277902c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779028,0);
  return;
}



/* Entry: 108c23c4c; end: 108c23c53; -[SCDefaultPhoneContactsFetcher fetchAddressBook] */

void FUN_108c23c4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_108c247c0;
  uStack_60 = 0x108c247d0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  puStack_58 = puVar1;
  _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  puVar1 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  _objc_alloc(PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0);
  uStack_50 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
  uStack_48 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
  uStack_40 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0210c0(puVar1);
  _objc_release(puVar3);
  func_0x00010bf97b60(puVar2);
  _objc_retain(0);
  uVar4 = puStack_78[5];
  func_0x00010bf51e00(uVar4);
  _objc_release(puVar1);
  _objc_release(0);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_80,8);
  puVar1 = puStack_58;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_80);
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 108c23c54; end: 108c23c5b; -[SCDefaultPhoneContactsFetcher fetchAddressBookWithMetadata] */

void FUN_108c23c54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined *puStack_318;
  long lStack_310;
  long lStack_308;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_160;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_108c247c0;
  uStack_90 = 0x108c247d0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  puStack_88 = puVar1;
  _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  puVar1 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  _objc_alloc();
  uStack_80 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
  uStack_78 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
  uStack_70 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
  uStack_68 = *(undefined8 *)PTR__CNContactImageDataAvailableKey_110349b18;
  uStack_60 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
  uStack_58 = *(undefined8 *)PTR__CNContactDatesKey_110349af0;
  uStack_50 = *(undefined8 *)PTR__CNContactBirthdayKey_110349ae8;
  uStack_48 = *(undefined8 *)PTR__CNContactNonGregorianBirthdayKey_110349b28;
  uStack_40 = *(undefined8 *)PTR__CNContactSocialProfilesKey_110349b38;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0210c0();
  _objc_release(puVar3);
  uStack_b8 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_108c24c44;
  puStack_d0 = &UNK_110ab89e0;
  uStack_c0 = 0;
  puStack_c8 = &uStack_b0;
  func_0x00010bf97b60(puVar2);
  uVar8 = uStack_b8;
  _objc_retain(uStack_b8);
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_b0,8);
  puVar1 = puStack_88;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar10 = 8;
    __Block_object_dispose(&uStack_b0);
    __Unwind_Resume();
    pcStack_f8 = FUN_108c24c44;
    lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_100 = &stack0xfffffffffffffff0;
    _objc_retain(lVar10);
    lVar4 = lVar10;
    FUN_108c24410();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    FUN_108c24530(lVar10,puVar1[0x28]);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar4 != 0) && (lVar5 != 0)) {
      puStack_2e8 = puVar1;
      _objc_retain(lVar10);
      _objc_retain(lVar4);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      plStack_290 = (long *)0x0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      lVar11 = lVar10;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar14 = *plStack_290;
        do {
          lVar12 = 0;
          do {
            if (*plStack_290 != lVar14) {
              _objc_enumerationMutation(lVar11);
            }
            uVar7 = *(undefined8 *)(lStack_298 + lVar12 * 8);
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            uVar7 = uVar8;
            func_0x000108c243bc();
            if ((int)uVar7 != 0) {
              func_0x00010befa120(puVar2);
            }
            _objc_release(uVar8);
            lVar12 = lVar12 + 1;
          } while (lVar6 != lVar12);
          lVar6 = lVar11;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar11);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      plStack_2d0 = (long *)0x0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      lVar11 = lVar10;
      func_0x00010bf8d6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar14 = *plStack_2d0;
        do {
          lVar12 = 0;
          do {
            if (*plStack_2d0 != lVar14) {
              _objc_enumerationMutation(lVar11);
            }
            uVar8 = *(undefined8 *)(lStack_2d8 + lVar12 * 8);
            func_0x00010c296d80(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(uVar8);
            lVar12 = lVar12 + 1;
          } while (lVar6 != lVar12);
          lVar6 = lVar11;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar11);
      func_0x00010bfe7320(lVar10);
      lVar11 = lVar10;
      func_0x00010bf65660();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x00010bf529e0();
      puVar1 = puStack_2e8;
      if (lVar6 == 0) {
        lVar6 = lVar10;
        func_0x00010bf1a5c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          func_0x00010c0dae00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        }
        _objc_release(lVar6);
      }
      _objc_release(lVar11);
      lVar11 = lVar10;
      func_0x00010c246080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(lVar11);
      puVar9 = PTR_PTR_1126db2e8;
      _objc_alloc();
      func_0x00010c035b80();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar4);
      _objc_release(lVar10);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28));
      _objc_release(puVar9);
    }
    _objc_release(lVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar10);
      return;
    }
    ___stack_chk_fail();
    pcStack_2f8 = FUN_108c24fe4;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_370 = &uStack_378;
    uStack_378 = 0;
    uStack_368 = 0x3032000000;
    pcStack_360 = FUN_108c247c0;
    uStack_358 = 0x108c247d0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    lStack_320 = lVar5;
    puStack_318 = puVar1;
    lStack_310 = lVar4;
    lStack_308 = lVar10;
    ppuStack_300 = &puStack_100;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
    puStack_350 = puVar2;
    _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
    puVar2 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
    _objc_alloc();
    uStack_348 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
    uStack_340 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
    uStack_338 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
    uStack_330 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0210c0();
    _objc_release(puVar3);
    func_0x00010bf97b60(puVar1);
    _objc_retain(0);
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release(0);
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_378,8);
    puVar1 = puStack_350;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
      ___stack_chk_fail();
      lVar10 = 8;
      __Block_object_dispose(&uStack_378);
      __Unwind_Resume();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(lVar10);
      lVar4 = lVar10;
      FUN_108c24410();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar10;
      FUN_108c24530(lVar10,puVar1[0x28]);
      _objc_retainAutoreleasedReturnValue();
      if ((lVar4 != 0) && (lVar5 != 0)) {
        _objc_retain(lVar10);
        _objc_retain(lVar4);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lVar12 = lVar10;
        func_0x00010c0fb120();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar12;
        func_0x00010bf52a60();
        lVar14 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar14) {
              _objc_enumerationMutation(lVar12);
            }
            uVar7 = *(undefined8 *)(lVar13 * 8);
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            uVar7 = uVar8;
            func_0x000108c243bc();
            if ((int)uVar7 != 0) {
              func_0x00010befa120(puVar2);
            }
            _objc_release(uVar8);
            lVar13 = lVar13 + 1;
          } while (lVar6 != lVar13);
          lVar6 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lVar12 = lVar10;
        func_0x00010bf8d6e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar12;
        func_0x00010bf52a60();
        lVar14 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar14) {
              _objc_enumerationMutation(lVar12);
            }
            uVar8 = *(undefined8 *)(lVar13 * 8);
            func_0x00010c296d80(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(uVar8);
            lVar13 = lVar13 + 1;
          } while (lVar6 != lVar13);
          lVar6 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
        puVar9 = PTR_PTR_1126db2e8;
        _objc_alloc(PTR_PTR_1126db2e8);
        func_0x00010c035b80();
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(lVar4);
        _objc_release(lVar10);
        func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28));
        _objc_release(puVar9);
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) goto code_r0x00010bdbf3e4;
      ___stack_chk_fail();
      func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c23c5c; end: 108c23c63; -[SCDefaultPhoneContactsFetcher fetchAddressBookWithEmailsOnly] */

void FUN_108c23c5c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_108c247c0;
  uStack_68 = 0x108c247d0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  puStack_60 = puVar2;
  _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  puVar2 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  _objc_alloc();
  uStack_58 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
  uStack_50 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
  uStack_48 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
  uStack_40 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0210c0();
  _objc_release(puVar4);
  func_0x00010bf97b60(puVar3);
  _objc_retain(0);
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_88,8);
  puVar2 = puStack_60;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar12 = 8;
    __Block_object_dispose(&uStack_88);
    __Unwind_Resume();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar12);
    lVar5 = lVar12;
    FUN_108c24410();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar12;
    FUN_108c24530(lVar12,puVar2[0x28]);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar5 != 0) && (lVar6 != 0)) {
      _objc_retain(lVar12);
      _objc_retain(lVar5);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar7 = lVar12;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar7);
          }
          uVar9 = *(undefined8 *)(lVar14 * 8);
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          uVar9 = uVar10;
          func_0x000108c243bc();
          if ((int)uVar9 != 0) {
            func_0x00010befa120(puVar3);
          }
          _objc_release(uVar10);
          lVar14 = lVar14 + 1;
        } while (lVar8 != lVar14);
        lVar8 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar7 = lVar12;
      func_0x00010bf8d6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar7);
          }
          uVar10 = *(undefined8 *)(lVar14 * 8);
          func_0x00010c296d80(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar10);
          lVar14 = lVar14 + 1;
        } while (lVar8 != lVar14);
        lVar8 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar11 = PTR_PTR_1126db2e8;
      _objc_alloc(PTR_PTR_1126db2e8);
      func_0x00010c035b80();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar5);
      _objc_release(lVar12);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x20) + 8) + 0x28));
      _objc_release(puVar11);
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar12);
      return;
    }
    ___stack_chk_fail();
    func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c23c64; end: 108c23c6f; -[SCDefaultPhoneContactsFetcher .cxx_destruct] */

void FUN_108c23c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c23c70; end: 108c23d6b; -[SCPhoneContactsStore initWithDocObjectContext:phoneContactsFetcher:currentDateProvider:contactPermissionInfoProvider:] */

undefined1 *
FUN_108c23c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fddb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c23d6c; end: 108c23e0f; -[SCPhoneContactsStore reloadWithMetadata] */

void FUN_108c23d6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcdc60();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x40);
  if ((int)uVar3 == 0) {
    func_0x00010bfa4aa0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa4ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010be1cd40(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c129100(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108c23e10; end: 108c23eb3; -[SCPhoneContactsStore reloadWithEmailsOnly] */

void FUN_108c23e10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcdc60();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x40);
  if ((int)uVar3 == 0) {
    func_0x00010bfa4aa0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa4ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010be1cd40(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c129100(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108c23eb4; end: 108c23ef3; -[SCPhoneContactsStore reloadWithoutMetadata] */

void FUN_108c23eb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfa4aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129100(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108c23ef4; end: 108c24077; -[SCPhoneContactsStore reloadWithLocalAddressBook:] */

void FUN_108c23ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108c25844(uVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar5;
  FUN_108c25f34(uVar5,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_108c26ff4(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  FUN_108c26174(uVar5,*(undefined8 *)(param_1 + 0x20),uVar3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_108c24868(uVar2,*(undefined8 *)(param_1 + 0x30),uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar2);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar5);
  return;
}



/* Entry: 108c24078; end: 108c24087;  */

ulong FUN_108c24078(long param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  code *pcVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  byte bStack_2b2;
  byte bStack_2b1;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_22c;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_158;
  
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf002e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_108c25ab0(param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_retain(uVar7);
  uVar8 = uVar7;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (uVar8 != 0) {
    uVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(uVar7);
      }
      FUN_108c25c58(param_2,*(undefined8 *)(uVar17 * 8));
      uVar17 = uVar17 + 1;
    } while (uVar8 != uVar17);
    uVar8 = uVar7;
    func_0x00010bf52a60();
  }
  _objc_release(uVar7);
  _objc_release(uVar7);
  uVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_release(uVar7);
  _objc_release(uVar7);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar13 = (code *)&uStack_270;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db2f0);
  if (uVar8 == 0) {
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_210,uVar8);
  }
  lStack_228 = 0;
  lStack_220 = 0;
  uStack_218 = 0;
  uStack_22c = 0;
  puVar9 = &uStack_210;
  plVar12 = &lStack_228;
  func_0x000107c310d0(puVar9,plVar12,&uStack_22c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_228 != 0) {
    lStack_220 = lStack_228;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_1e8);
  _objc_release(uStack_1f8);
  _objc_release(uStack_200);
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  _objc_retain(puVar9);
  puVar10 = puVar9;
  func_0x00010bf52a60();
  if (puVar10 != (undefined8 *)0x0) {
    lVar16 = *plStack_260;
    do {
      puVar18 = (undefined8 *)0x0;
      do {
        if (*plStack_260 != lVar16) {
          _objc_enumerationMutation(puVar9);
        }
        plVar12 = *(long **)(lStack_268 + (long)puVar18 * 8);
        FUN_108c25c58(uVar8,plVar12);
        puVar18 = (undefined8 *)((long)puVar18 + 1);
      } while (puVar10 != puVar18);
      puVar10 = puVar9;
      pcVar13 = (code *)&uStack_270;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined8 *)0x0);
  }
  _objc_release(puVar9);
  _objc_release(puVar9);
  uVar7 = uVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  __Unwind_Resume(uVar7);
  _objc_retain();
  _objc_retain(plVar12);
  (*pcVar13)(uVar7,&bStack_2b1);
  dVar4 = (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,
                                                  CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))));
  (*pcVar13)(plVar12,&bStack_2b2);
  uVar15 = 2;
  uVar2 = uVar15;
  if (bStack_2b2 == 0) {
    uVar2 = 0;
  }
  if (bStack_2b1 == 0) {
    uVar2 = 1;
  }
  bVar5 = false;
  bVar6 = false;
  bVar1 = NAN((double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(
                                                  uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))))
                                              )));
  if (!NAN(dVar4) && !bVar1) {
    bVar5 = dVar4 < (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13
                                                  (uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))))
                                                  )));
    bVar6 = dVar4 == (double)CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,
                                                  CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19)))))));
  }
  if (!bVar6 && bVar5 == (NAN(dVar4) || bVar1)) {
    uVar15 = 1;
  }
  uVar3 = 0;
  if (!bVar5) {
    uVar3 = uVar15;
  }
  uVar15 = uVar2;
  if ((bStack_2b2 & 1) == 0) {
    uVar15 = uVar3;
  }
  if ((bStack_2b1 & 1) == 0) {
    uVar2 = uVar15;
  }
  _objc_release(plVar12);
  _objc_release(uVar7);
  return (ulong)uVar2;
}



/* Entry: 108c24088; end: 108c2409f; -[SCPhoneContactsStore localAddressBook] */

void FUN_108c24088(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c240a0; end: 108c2410b; -[SCPhoneContactsStore localAddressBookMetaDataToUpdate:] */

void FUN_108c240a0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((param_3 & 1) == 0) {
    func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x38));
  }
  else {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108c2410c;
    puStack_20 = &UNK_110894890;
    lStack_18 = param_1;
    func_0x00010bd869d0(*(undefined8 *)(param_1 + 0x38),&puStack_38,
                        &PTR___NSConcreteGlobalBlock_110ab89c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c2410c; end: 108c2417b;  */

void FUN_108c2410c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_2);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = param_2;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c2417c; end: 108c241a3;  */

void FUN_108c2417c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108c241a4; end: 108c241cb; -[SCPhoneContactsStore addressBookToUpdate:] */

void FUN_108c241a4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (param_3 == 0) {
    lVar1 = 0x20;
  }
  func_0x00010bf51e00(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c241cc; end: 108c241d3; -[SCPhoneContactsStore newContactNumbers] */

void FUN_108c241cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_copy_1125b2128);
  return;
}



/* Entry: 108c241d4; end: 108c24343; -[SCPhoneContactsStore _getAddressBookFromMetaData:] */

void FUN_108c241d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar5 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(lVar6);
      _objc_release(lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 108c24344; end: 108c2440f; -[SCPhoneContactsStore .cxx_destruct] */

void FUN_108c24344(long param_1)

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



/* Entry: 108c24410; end: 108c2452f;  */

void FUN_108c24410(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bfcccc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bfa0820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
  if ((int)puVar3 == 0) {
LAB_108c24480:
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110db27b8);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108c24508;
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retain(puVar1);
      puVar3 = puVar1;
      goto LAB_108c24508;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retain(puVar2);
      puVar3 = puVar2;
      goto LAB_108c24508;
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar2);
    if (((ulong)puVar3 & 1) == 0) goto LAB_108c24480;
  }
  puVar3 = (undefined *)0x0;
LAB_108c24508:
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c24530; end: 108c245eb;  */

void FUN_108c24530(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  if ((param_1 != 0) && (uVar1 = param_1, func_0x00010bf529e0(), uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (((param_2 & 1) != 0) || (uVar1 = uVar3, func_0x000108c243bc(), (uVar1 & 1) != 0))
    goto LAB_108c245cc;
    _objc_release(uVar3);
  }
  uVar3 = 0;
LAB_108c245cc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108c245ec; end: 108c247bf;  */

void FUN_108c245ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_108c247c0;
  uStack_60 = 0x108c247d0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  puStack_58 = puVar1;
  _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  puVar1 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  _objc_alloc(PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0);
  uStack_50 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
  uStack_48 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
  uStack_40 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0210c0(puVar1);
  _objc_release(puVar3);
  func_0x00010bf97b60(puVar2);
  _objc_retain(0);
  uVar4 = puStack_78[5];
  func_0x00010bf51e00(uVar4);
  _objc_release(puVar1);
  _objc_release(0);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_80,8);
  puVar1 = puStack_58;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  lVar5 = 8;
  __Block_object_dispose(&uStack_80);
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 108c247c0; end: 108c247d7;  */

void FUN_108c247c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108c247d8; end: 108c24867;  */

void FUN_108c247d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  FUN_108c24410();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  FUN_108c24530(param_2,*(undefined1 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108c24868; end: 108c24a1b;  */

void FUN_108c24868(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar15;
  undefined8 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long lStack_450;
  undefined *puStack_448;
  long lStack_440;
  long lStack_438;
  undefined1 ***pppuStack_430;
  code *pcStack_428;
  undefined *puStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_290;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = param_2;
  func_0x00010c174c00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar3);
        }
        unaff_x25 = *(undefined8 *)(lStack_128 + unaff_x28 * 8);
        lVar11 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        unaff_x26 = 0;
        if (lVar11 != 0) {
          unaff_x26 = param_1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(unaff_x26);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar4 != unaff_x28);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar4 = param_1;
  _objc_release();
  uVar1 = (undefined1)lVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_108c24a1c;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1d8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d0 = 0x3032000000;
    pcStack_1c8 = FUN_108c247c0;
    uStack_1c0 = 0x108c247d0;
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_160 = puVar2;
    uStack_158 = param_3;
    lStack_150 = param_2;
    lStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
    puStack_1b8 = puVar6;
    _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
    puVar6 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
    _objc_alloc();
    uStack_1b0 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
    uStack_1a8 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
    uStack_1a0 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
    uStack_198 = *(undefined8 *)PTR__CNContactImageDataAvailableKey_110349b18;
    uStack_190 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
    uStack_188 = *(undefined8 *)PTR__CNContactDatesKey_110349af0;
    uStack_180 = *(undefined8 *)PTR__CNContactBirthdayKey_110349ae8;
    uStack_178 = *(undefined8 *)PTR__CNContactNonGregorianBirthdayKey_110349b28;
    uStack_170 = *(undefined8 *)PTR__CNContactSocialProfilesKey_110349b38;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0210c0();
    _objc_release(puVar7);
    uStack_1e8 = 0;
    puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_210 = 0xc2000000;
    pcStack_208 = FUN_108c24c44;
    puStack_200 = &UNK_110ab89e0;
    puStack_1f8 = &uStack_1e0;
    uStack_1f0 = uVar1;
    func_0x00010bf97b60(puVar2);
    uVar10 = uStack_1e8;
    _objc_retain(uStack_1e8);
    uVar8 = puStack_1d8[5];
    func_0x00010bf51e00();
    _objc_release(puVar6);
    _objc_release(uVar10);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_1e0,8);
    puVar2 = puStack_1b8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
      ___stack_chk_fail();
      lVar11 = 8;
      __Block_object_dispose(&uStack_1e0);
      puVar7 = puVar2;
      __Unwind_Resume();
      uStack_250 = uVar10;
      pcStack_228 = FUN_108c24c44;
      lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_280 = unaff_x28;
      lStack_278 = unaff_x27;
      lStack_270 = unaff_x26;
      uStack_268 = unaff_x25;
      puStack_260 = puVar5;
      lStack_258 = lVar3;
      puStack_248 = puVar6;
      uStack_240 = uVar8;
      puStack_238 = puVar2;
      ppuStack_230 = &puStack_140;
      _objc_retain(lVar11);
      lVar3 = lVar11;
      FUN_108c24410();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar11;
      FUN_108c24530(lVar11,puVar7[0x28]);
      _objc_retainAutoreleasedReturnValue();
      if ((lVar3 != 0) && (lVar4 != 0)) {
        puStack_418 = puVar7;
        _objc_retain(lVar11);
        _objc_retain(lVar3);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3b8 = 0;
        plStack_3c0 = (long *)0x0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        lVar12 = lVar11;
        func_0x00010c0fb120();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar12;
        func_0x00010bf52a60();
        if (lVar9 != 0) {
          lVar15 = *plStack_3c0;
          do {
            lVar13 = 0;
            do {
              if (*plStack_3c0 != lVar15) {
                _objc_enumerationMutation(lVar12);
              }
              uVar8 = *(undefined8 *)(lStack_3c8 + lVar13 * 8);
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar8;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar8);
              uVar8 = uVar10;
              func_0x000108c243bc();
              if ((int)uVar8 != 0) {
                func_0x00010befa120(puVar2);
              }
              _objc_release(uVar10);
              lVar13 = lVar13 + 1;
            } while (lVar9 != lVar13);
            lVar9 = lVar12;
            func_0x00010bf52a60();
          } while (lVar9 != 0);
        }
        _objc_release(lVar12);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lStack_408 = 0;
        uStack_410 = 0;
        uStack_3f8 = 0;
        plStack_400 = (long *)0x0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_3d8 = 0;
        uStack_3e0 = 0;
        lVar12 = lVar11;
        func_0x00010bf8d6e0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar12;
        func_0x00010bf52a60();
        if (lVar9 != 0) {
          lVar15 = *plStack_400;
          do {
            lVar13 = 0;
            do {
              if (*plStack_400 != lVar15) {
                _objc_enumerationMutation(lVar12);
              }
              uVar10 = *(undefined8 *)(lStack_408 + lVar13 * 8);
              func_0x00010c296d80(uVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5);
              _objc_release(uVar10);
              lVar13 = lVar13 + 1;
            } while (lVar9 != lVar13);
            lVar9 = lVar12;
            func_0x00010bf52a60();
          } while (lVar9 != 0);
        }
        _objc_release(lVar12);
        func_0x00010bfe7320(lVar11);
        lVar12 = lVar11;
        func_0x00010bf65660();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar12;
        func_0x00010bf529e0();
        puVar7 = puStack_418;
        if (lVar9 == 0) {
          lVar9 = lVar11;
          func_0x00010bf1a5c0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar9 == 0) {
            func_0x00010c0dae00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
          }
          _objc_release(lVar9);
        }
        _objc_release(lVar12);
        lVar12 = lVar11;
        func_0x00010c246080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(lVar12);
        puVar6 = PTR_PTR_1126db2e8;
        _objc_alloc();
        func_0x00010c035b80();
        _objc_release(puVar5);
        _objc_release(puVar2);
        _objc_release(lVar3);
        _objc_release(lVar11);
        func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(puVar7 + 0x20) + 8) + 0x28));
        _objc_release(puVar6);
      }
      _objc_release(lVar4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar11);
        return;
      }
      ___stack_chk_fail();
      pcStack_428 = FUN_108c24fe4;
      lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_4a0 = &uStack_4a8;
      uStack_4a8 = 0;
      uStack_498 = 0x3032000000;
      pcStack_490 = FUN_108c247c0;
      uStack_488 = 0x108c247d0;
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      lStack_450 = lVar4;
      puStack_448 = puVar7;
      lStack_440 = lVar3;
      lStack_438 = lVar11;
      pppuStack_430 = &ppuStack_230;
      _objc_opt_new();
      puVar5 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
      puStack_480 = puVar2;
      _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
      puVar2 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
      _objc_alloc();
      uStack_478 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
      uStack_470 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
      uStack_468 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
      uStack_460 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0210c0();
      _objc_release(puVar6);
      func_0x00010bf97b60(puVar5);
      _objc_retain(0);
      func_0x00010bf51e00();
      _objc_release(puVar2);
      _objc_release(0);
      _objc_release(puVar5);
      __Block_object_dispose(&uStack_4a8,8);
      puVar2 = puStack_480;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
        ___stack_chk_fail();
        lVar11 = 8;
        __Block_object_dispose(&uStack_4a8);
        __Unwind_Resume();
        lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(lVar11);
        lVar3 = lVar11;
        FUN_108c24410();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar11;
        FUN_108c24530(lVar11,puVar2[0x28]);
        _objc_retainAutoreleasedReturnValue();
        if ((lVar3 != 0) && (lVar4 != 0)) {
          _objc_retain(lVar11);
          _objc_retain(lVar3);
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          lVar13 = lVar11;
          func_0x00010c0fb120();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar13;
          func_0x00010bf52a60();
          lVar15 = lRam0000000000000000;
          while (lVar9 != 0) {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar15) {
                _objc_enumerationMutation(lVar13);
              }
              uVar8 = *(undefined8 *)(lVar14 * 8);
              func_0x00010c296d80();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar8;
              func_0x00010c25d700();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar8);
              uVar8 = uVar10;
              func_0x000108c243bc();
              if ((int)uVar8 != 0) {
                func_0x00010befa120(puVar5);
              }
              _objc_release(uVar10);
              lVar14 = lVar14 + 1;
            } while (lVar9 != lVar14);
            lVar9 = lVar13;
            func_0x00010bf52a60();
          }
          _objc_release(lVar13);
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          lVar13 = lVar11;
          func_0x00010bf8d6e0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar13;
          func_0x00010bf52a60();
          lVar15 = lRam0000000000000000;
          while (lVar9 != 0) {
            lVar14 = 0;
            do {
              if (lRam0000000000000000 != lVar15) {
                _objc_enumerationMutation(lVar13);
              }
              uVar10 = *(undefined8 *)(lVar14 * 8);
              func_0x00010c296d80(uVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar6);
              _objc_release(uVar10);
              lVar14 = lVar14 + 1;
            } while (lVar9 != lVar14);
            lVar9 = lVar13;
            func_0x00010bf52a60();
          }
          _objc_release(lVar13);
          puVar7 = PTR_PTR_1126db2e8;
          _objc_alloc(PTR_PTR_1126db2e8);
          func_0x00010c035b80();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(lVar3);
          _objc_release(lVar11);
          func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x20) + 8) + 0x28));
          _objc_release(puVar7);
        }
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto code_r0x00010bdbf3e4;
        ___stack_chk_fail();
        func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c24a1c; end: 108c24c43;  */

void FUN_108c24a1c(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  code *pcStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  undefined *puStack_318;
  long lStack_310;
  long lStack_308;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_160;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_108c247c0;
  uStack_90 = 0x108c247d0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  puStack_88 = puVar1;
  _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  puVar1 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  _objc_alloc();
  uStack_80 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
  uStack_78 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
  uStack_70 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
  uStack_68 = *(undefined8 *)PTR__CNContactImageDataAvailableKey_110349b18;
  uStack_60 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
  uStack_58 = *(undefined8 *)PTR__CNContactDatesKey_110349af0;
  uStack_50 = *(undefined8 *)PTR__CNContactBirthdayKey_110349ae8;
  uStack_48 = *(undefined8 *)PTR__CNContactNonGregorianBirthdayKey_110349b28;
  uStack_40 = *(undefined8 *)PTR__CNContactSocialProfilesKey_110349b38;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0210c0();
  _objc_release(puVar3);
  uStack_b8 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_108c24c44;
  puStack_d0 = &UNK_110ab89e0;
  puStack_c8 = &uStack_b0;
  uStack_c0 = param_1;
  func_0x00010bf97b60(puVar2);
  uVar8 = uStack_b8;
  _objc_retain(uStack_b8);
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_b0,8);
  puVar1 = puStack_88;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar10 = 8;
    __Block_object_dispose(&uStack_b0);
    __Unwind_Resume();
    pcStack_f8 = FUN_108c24c44;
    lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_100 = &stack0xfffffffffffffff0;
    _objc_retain(lVar10);
    lVar4 = lVar10;
    FUN_108c24410();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    FUN_108c24530(lVar10,puVar1[0x28]);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar4 != 0) && (lVar5 != 0)) {
      puStack_2e8 = puVar1;
      _objc_retain(lVar10);
      _objc_retain(lVar4);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      plStack_290 = (long *)0x0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      lVar11 = lVar10;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar14 = *plStack_290;
        do {
          lVar12 = 0;
          do {
            if (*plStack_290 != lVar14) {
              _objc_enumerationMutation(lVar11);
            }
            uVar7 = *(undefined8 *)(lStack_298 + lVar12 * 8);
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            uVar7 = uVar8;
            func_0x000108c243bc();
            if ((int)uVar7 != 0) {
              func_0x00010befa120(puVar2);
            }
            _objc_release(uVar8);
            lVar12 = lVar12 + 1;
          } while (lVar6 != lVar12);
          lVar6 = lVar11;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar11);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      plStack_2d0 = (long *)0x0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      lVar11 = lVar10;
      func_0x00010bf8d6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar14 = *plStack_2d0;
        do {
          lVar12 = 0;
          do {
            if (*plStack_2d0 != lVar14) {
              _objc_enumerationMutation(lVar11);
            }
            uVar8 = *(undefined8 *)(lStack_2d8 + lVar12 * 8);
            func_0x00010c296d80(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(uVar8);
            lVar12 = lVar12 + 1;
          } while (lVar6 != lVar12);
          lVar6 = lVar11;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar11);
      func_0x00010bfe7320(lVar10);
      lVar11 = lVar10;
      func_0x00010bf65660();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar11;
      func_0x00010bf529e0();
      puVar1 = puStack_2e8;
      if (lVar6 == 0) {
        lVar6 = lVar10;
        func_0x00010bf1a5c0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          func_0x00010c0dae00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        }
        _objc_release(lVar6);
      }
      _objc_release(lVar11);
      lVar11 = lVar10;
      func_0x00010c246080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(lVar11);
      puVar9 = PTR_PTR_1126db2e8;
      _objc_alloc();
      func_0x00010c035b80();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar4);
      _objc_release(lVar10);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28));
      _objc_release(puVar9);
    }
    _objc_release(lVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_160) {
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar10);
      return;
    }
    ___stack_chk_fail();
    pcStack_2f8 = FUN_108c24fe4;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_370 = &uStack_378;
    uStack_378 = 0;
    uStack_368 = 0x3032000000;
    pcStack_360 = FUN_108c247c0;
    uStack_358 = 0x108c247d0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    lStack_320 = lVar5;
    puStack_318 = puVar1;
    lStack_310 = lVar4;
    lStack_308 = lVar10;
    ppuStack_300 = &puStack_100;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
    puStack_350 = puVar2;
    _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
    puVar2 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
    _objc_alloc();
    uStack_348 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
    uStack_340 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
    uStack_338 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
    uStack_330 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0210c0();
    _objc_release(puVar3);
    func_0x00010bf97b60(puVar1);
    _objc_retain(0);
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release(0);
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_378,8);
    puVar1 = puStack_350;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
      ___stack_chk_fail();
      lVar10 = 8;
      __Block_object_dispose(&uStack_378);
      __Unwind_Resume();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(lVar10);
      lVar4 = lVar10;
      FUN_108c24410();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar10;
      FUN_108c24530(lVar10,puVar1[0x28]);
      _objc_retainAutoreleasedReturnValue();
      if ((lVar4 != 0) && (lVar5 != 0)) {
        _objc_retain(lVar10);
        _objc_retain(lVar4);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lVar12 = lVar10;
        func_0x00010c0fb120();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar12;
        func_0x00010bf52a60();
        lVar14 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar14) {
              _objc_enumerationMutation(lVar12);
            }
            uVar7 = *(undefined8 *)(lVar13 * 8);
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            uVar7 = uVar8;
            func_0x000108c243bc();
            if ((int)uVar7 != 0) {
              func_0x00010befa120(puVar2);
            }
            _objc_release(uVar8);
            lVar13 = lVar13 + 1;
          } while (lVar6 != lVar13);
          lVar6 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lVar12 = lVar10;
        func_0x00010bf8d6e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar12;
        func_0x00010bf52a60();
        lVar14 = lRam0000000000000000;
        while (lVar6 != 0) {
          lVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar14) {
              _objc_enumerationMutation(lVar12);
            }
            uVar8 = *(undefined8 *)(lVar13 * 8);
            func_0x00010c296d80(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(uVar8);
            lVar13 = lVar13 + 1;
          } while (lVar6 != lVar13);
          lVar6 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
        puVar9 = PTR_PTR_1126db2e8;
        _objc_alloc(PTR_PTR_1126db2e8);
        func_0x00010c035b80();
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(lVar4);
        _objc_release(lVar10);
        func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28));
        _objc_release(puVar9);
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) goto code_r0x00010bdbf3e4;
      ___stack_chk_fail();
      func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c24c44; end: 108c24fe3;  */

void FUN_108c24c44(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
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
  _objc_retain(param_2);
  lVar1 = param_2;
  FUN_108c24410();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  FUN_108c24530(param_2,*(undefined1 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lStack_1f8 = param_1;
    _objc_retain(param_2);
    _objc_retain(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lVar10 = param_2;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar13 = *plStack_1a0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1a0 != lVar13) {
            _objc_enumerationMutation(lVar10);
          }
          uVar5 = *(undefined8 *)(lStack_1a8 + lVar11 * 8);
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          uVar5 = uVar7;
          func_0x000108c243bc();
          if ((int)uVar5 != 0) {
            func_0x00010befa120(puVar3);
          }
          _objc_release(uVar7);
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = lVar10;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar10);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lVar10 = param_2;
    func_0x00010bf8d6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar13 = *plStack_1e0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1e0 != lVar13) {
            _objc_enumerationMutation(lVar10);
          }
          uVar7 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);
          func_0x00010c296d80(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6);
          _objc_release(uVar7);
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = lVar10;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar10);
    func_0x00010bfe7320(param_2);
    lVar10 = param_2;
    func_0x00010bf65660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar10;
    func_0x00010bf529e0();
    param_1 = lStack_1f8;
    if (lVar4 == 0) {
      lVar4 = param_2;
      func_0x00010bf1a5c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        func_0x00010c0dae00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar10);
    lVar10 = param_2;
    func_0x00010c246080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar10);
    puVar8 = PTR_PTR_1126db2e8;
    _objc_alloc();
    func_0x00010c035b80();
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(param_2);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(puVar8);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_108c24fe4;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_280 = &uStack_288;
  uStack_288 = 0;
  uStack_278 = 0x3032000000;
  pcStack_270 = FUN_108c247c0;
  uStack_268 = 0x108c247d0;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_230 = lVar2;
  lStack_228 = param_1;
  lStack_220 = lVar1;
  lStack_218 = param_2;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  puStack_260 = puVar3;
  _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  puVar3 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  _objc_alloc();
  uStack_258 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
  uStack_250 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
  uStack_248 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
  uStack_240 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0210c0();
  _objc_release(puVar8);
  func_0x00010bf97b60(puVar6);
  _objc_retain(0);
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_288,8);
  puVar3 = puStack_260;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
    ___stack_chk_fail();
    param_2 = 8;
    __Block_object_dispose(&uStack_288);
    __Unwind_Resume();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    lVar1 = param_2;
    FUN_108c24410();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    FUN_108c24530(param_2,puVar3[0x28]);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (lVar2 != 0)) {
      _objc_retain(param_2);
      _objc_retain(lVar1);
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar11 = param_2;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar11;
      func_0x00010bf52a60();
      lVar13 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          uVar5 = *(undefined8 *)(lVar12 * 8);
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          uVar5 = uVar7;
          func_0x000108c243bc();
          if ((int)uVar5 != 0) {
            func_0x00010befa120(puVar6);
          }
          _objc_release(uVar7);
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar11;
        func_0x00010bf52a60();
      }
      _objc_release(lVar11);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar11 = param_2;
      func_0x00010bf8d6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar11;
      func_0x00010bf52a60();
      lVar13 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(lVar11);
          }
          uVar7 = *(undefined8 *)(lVar12 * 8);
          func_0x00010c296d80(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8);
          _objc_release(uVar7);
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar11;
        func_0x00010bf52a60();
      }
      _objc_release(lVar11);
      puVar9 = PTR_PTR_1126db2e8;
      _objc_alloc(PTR_PTR_1126db2e8);
      func_0x00010c035b80();
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(lVar1);
      _objc_release(param_2);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(puVar3 + 0x20) + 8) + 0x28));
      _objc_release(puVar9);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) goto code_r0x00010bdbf3e4;
    ___stack_chk_fail();
    func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c24fe4; end: 108c251c3;  */

void FUN_108c24fe4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_108c247c0;
  uStack_68 = 0x108c247d0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  puStack_60 = puVar2;
  _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
  puVar2 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  _objc_alloc();
  uStack_58 = *(undefined8 *)PTR__CNContactPhoneNumbersKey_110349b30;
  uStack_50 = *(undefined8 *)PTR__CNContactFamilyNameKey_110349b00;
  uStack_48 = *(undefined8 *)PTR__CNContactGivenNameKey_110349b08;
  uStack_40 = *(undefined8 *)PTR__CNContactEmailAddressesKey_110349af8;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0210c0();
  _objc_release(puVar4);
  func_0x00010bf97b60(puVar3);
  _objc_retain(0);
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_88,8);
  puVar2 = puStack_60;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar12 = 8;
    __Block_object_dispose(&uStack_88);
    __Unwind_Resume();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(lVar12);
    lVar5 = lVar12;
    FUN_108c24410();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar12;
    FUN_108c24530(lVar12,puVar2[0x28]);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar5 != 0) && (lVar6 != 0)) {
      _objc_retain(lVar12);
      _objc_retain(lVar5);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar7 = lVar12;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar7);
          }
          uVar9 = *(undefined8 *)(lVar14 * 8);
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          uVar9 = uVar10;
          func_0x000108c243bc();
          if ((int)uVar9 != 0) {
            func_0x00010befa120(puVar3);
          }
          _objc_release(uVar10);
          lVar14 = lVar14 + 1;
        } while (lVar8 != lVar14);
        lVar8 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar7 = lVar12;
      func_0x00010bf8d6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar8 != 0) {
        lVar14 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar7);
          }
          uVar10 = *(undefined8 *)(lVar14 * 8);
          func_0x00010c296d80(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar10);
          lVar14 = lVar14 + 1;
        } while (lVar8 != lVar14);
        lVar8 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      puVar11 = PTR_PTR_1126db2e8;
      _objc_alloc(PTR_PTR_1126db2e8);
      func_0x00010c035b80();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar5);
      _objc_release(lVar12);
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x20) + 8) + 0x28));
      _objc_release(puVar11);
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar12);
      return;
    }
    ___stack_chk_fail();
    func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c251c4; end: 108c254bf;  */

void FUN_108c251c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  FUN_108c24410();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  FUN_108c24530(param_2,*(undefined1 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (lVar3 != 0)) {
    _objc_retain(param_2);
    _objc_retain(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar5 = param_2;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar7 = *(undefined8 *)(lVar12 * 8);
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar7 = uVar9;
        func_0x000108c243bc();
        if ((int)uVar7 != 0) {
          func_0x00010befa120(puVar4);
        }
        _objc_release(uVar9);
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar5 = param_2;
    func_0x00010bf8d6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar9 = *(undefined8 *)(lVar12 * 8);
        func_0x00010c296d80(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8);
        _objc_release(uVar9);
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    puVar10 = PTR_PTR_1126db2e8;
    _objc_alloc(PTR_PTR_1126db2e8);
    func_0x00010c035b80();
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(param_2);
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(puVar10);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c254c0; end: 108c2550f;  */

void FUN_108c254c0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c25510; end: 108c25537;  */

void FUN_108c25510(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108c25538; end: 108c256df;  */

void FUN_108c25538(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [31];
  undefined1 uStack_f1;
  undefined **appuStack_f0 [9];
  undefined1 auStack_a8 [24];
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  func_0x000107c31908(param_2,&PTR___NSConcreteGlobalBlock_110ab8a10);
  _objc_opt_class(PTR_PTR_1126db2f0);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar2 = &uStack_f1;
  FUN_108c297c8(puVar2);
  FUN_108c256e0(auStack_110,param_2);
  func_0x000107c281a0(appuStack_f0,0xc,puVar2,auStack_110);
  puStack_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_80;
  func_0x000107c310cc(puVar3,appuStack_f0,&puStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_128 != (undefined1 *)0x0) {
    puStack_120 = puStack_128;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  appuStack_f0[0] = &PTR_SUB_110862700;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_128 = auStack_a8;
  func_0x000107c27dd4(&puStack_128);
  puStack_128 = auStack_110;
  func_0x000107c27dd4(&puStack_128);
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c256e0; end: 108c25843;  */

void FUN_108c256e0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uStack_3bc;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [31];
  undefined1 uStack_381;
  undefined **appuStack_380 [9];
  undefined1 auStack_338 [24];
  long *plStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_288;
  undefined1 uStack_281;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined1 auStack_250 [31];
  undefined1 uStack_231;
  undefined **appuStack_230 [9];
  undefined1 auStack_1e8 [24];
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined4 uStack_17c;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar3 = param_2;
  func_0x00010bf529e0();
  func_0x000107c281a4(param_1);
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)((long)puVar8 * 8);
      _objc_retain(uVar7);
      puVar3 = auStack_e0;
      auStack_e0[0] = uVar7;
      func_0x000107c281a8(param_1);
      _objc_release(auStack_e0[0]);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar4 != puVar8);
    puVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x000107c31908(puVar3,&PTR___NSConcreteGlobalBlock_110ab8a10);
  _objc_opt_class(PTR_PTR_1126db2f0);
  if (param_2 == (undefined8 *)0x0) {
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1c0,param_2);
  }
  puVar5 = &uStack_231;
  FUN_108c297c8(puVar5);
  FUN_108c256e0(auStack_250,puVar3);
  func_0x000107c281a0(appuStack_230,0xc,puVar5,auStack_250);
  puVar5 = &uStack_281;
  FUN_108c29940();
  puStack_188 = *(undefined1 **)(puVar5 + 0x10);
  uStack_180 = puVar5[0x19];
  uStack_17f = puVar5[0x18];
  uStack_170 = *(undefined8 *)(puVar5 + 0x28);
  uStack_17c = 0;
  pcStack_178 = FUN_108c26f40;
  lStack_278 = 0;
  uStack_270 = 0;
  lStack_280 = 0;
  func_0x000100c435d0(&lStack_280,&puStack_188,&lStack_168,1);
  func_0x000100c436b8(&lStack_268,&lStack_280);
  uStack_288 = 0;
  puVar4 = &uStack_1c0;
  pppuVar6 = appuStack_230;
  func_0x000107c310cc(puVar4,pppuVar6,&lStack_268,&uStack_288);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_268 != 0) {
    lStack_260 = lStack_268;
    __ZdlPv();
  }
  if (lStack_280 != 0) {
    lStack_278 = lStack_280;
    __ZdlPv();
  }
  plVar2 = plStack_1c8;
  appuStack_230[0] = &PTR_SUB_110862700;
  plStack_1c8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_1d0;
  plStack_1d0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_188 = auStack_1e8;
  func_0x000107c27dd4(&puStack_188);
  puStack_188 = auStack_250;
  func_0x000107c27dd4(&puStack_188);
  func_0x000107c27da8(&uStack_198);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(puVar3);
  puVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    func_0x0001050048c0(appuStack_230);
    puStack_188 = auStack_250;
    func_0x000107c27dd4(&puStack_188);
    func_0x000104d96620(&uStack_1c0);
    _objc_release(puVar3);
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain();
    func_0x000107c31908(pppuVar6,&PTR___NSConcreteGlobalBlock_110ab8a10);
    _objc_opt_class(PTR_PTR_1126db2f0);
    if (puVar8 == (undefined8 *)0x0) {
      uStack_2e0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_310,puVar8);
    }
    puVar5 = &uStack_381;
    FUN_108c297c8(puVar5);
    FUN_108c256e0(auStack_3a0,pppuVar6);
    func_0x000107c281a0(appuStack_380,0xd,puVar5,auStack_3a0);
    puStack_3b8 = (undefined1 *)0x0;
    puStack_3b0 = (undefined1 *)0x0;
    uStack_3a8 = 0;
    uStack_3bc = 0;
    puVar4 = &uStack_310;
    func_0x000107c310cc(puVar4,appuStack_380,&puStack_3b8,&uStack_3bc);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_3b8 != (undefined1 *)0x0) {
      puStack_3b0 = puStack_3b8;
      __ZdlPv();
    }
    plVar2 = plStack_318;
    appuStack_380[0] = &PTR_SUB_110862700;
    plStack_318 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_320;
    plStack_320 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puStack_3b8 = auStack_338;
    func_0x000107c27dd4(&puStack_3b8);
    puStack_3b8 = auStack_3a0;
    func_0x000107c27dd4(&puStack_3b8);
    func_0x000107c27da8(&uStack_2e8);
    _objc_release(uStack_2f8);
    _objc_release(uStack_300);
    _objc_release(pppuVar6);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c25844; end: 108c25aaf;  */

void FUN_108c25844(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined4 uStack_29c;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [31];
  undefined1 uStack_261;
  undefined **appuStack_260 [9];
  undefined1 auStack_218 [24];
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_168;
  undefined1 uStack_161;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined1 auStack_130 [31];
  undefined1 uStack_111;
  undefined **appuStack_110 [9];
  undefined1 auStack_c8 [24];
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined4 uStack_5c;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x000107c31908(param_2,&PTR___NSConcreteGlobalBlock_110ab8a10);
  _objc_opt_class(PTR_PTR_1126db2f0);
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
  FUN_108c297c8(puVar2);
  FUN_108c256e0(auStack_130,param_2);
  func_0x000107c281a0(appuStack_110,0xc,puVar2,auStack_130);
  puVar2 = &uStack_161;
  FUN_108c29940();
  puStack_68 = *(undefined1 **)(puVar2 + 0x10);
  uStack_60 = puVar2[0x19];
  uStack_5f = puVar2[0x18];
  uStack_50 = *(undefined8 *)(puVar2 + 0x28);
  uStack_5c = 0;
  pcStack_58 = FUN_108c26f40;
  lStack_158 = 0;
  uStack_150 = 0;
  lStack_160 = 0;
  func_0x000100c435d0(&lStack_160,&puStack_68,&lStack_48,1);
  func_0x000100c436b8(&lStack_148,&lStack_160);
  uStack_168 = 0;
  puVar3 = &uStack_a0;
  pppuVar5 = appuStack_110;
  func_0x000107c310cc(puVar3,pppuVar5,&lStack_148,&uStack_168);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  if (lStack_160 != 0) {
    lStack_158 = lStack_160;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  appuStack_110[0] = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_68 = auStack_c8;
  func_0x000107c27dd4(&puStack_68);
  puStack_68 = auStack_130;
  func_0x000107c27dd4(&puStack_68);
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  lVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x0001050048c0(appuStack_110);
    puStack_68 = auStack_130;
    func_0x000107c27dd4(&puStack_68);
    func_0x000104d96620(&uStack_a0);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    _objc_retain();
    func_0x000107c31908(pppuVar5,&PTR___NSConcreteGlobalBlock_110ab8a10);
    _objc_opt_class(PTR_PTR_1126db2f0);
    if (lVar4 == 0) {
      uStack_1c0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_1f0,lVar4);
    }
    puVar2 = &uStack_261;
    FUN_108c297c8(puVar2);
    FUN_108c256e0(auStack_280,pppuVar5);
    func_0x000107c281a0(appuStack_260,0xd,puVar2,auStack_280);
    puStack_298 = (undefined1 *)0x0;
    puStack_290 = (undefined1 *)0x0;
    uStack_288 = 0;
    uStack_29c = 0;
    puVar3 = &uStack_1f0;
    func_0x000107c310cc(puVar3,appuStack_260,&puStack_298,&uStack_29c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_298 != (undefined1 *)0x0) {
      puStack_290 = puStack_298;
      __ZdlPv();
    }
    plVar1 = plStack_1f8;
    appuStack_260[0] = &PTR_SUB_110862700;
    plStack_1f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_200;
    plStack_200 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_298 = auStack_218;
    func_0x000107c27dd4(&puStack_298);
    puStack_298 = auStack_280;
    func_0x000107c27dd4(&puStack_298);
    func_0x000107c27da8(&uStack_1c8);
    _objc_release(uStack_1d8);
    _objc_release(uStack_1e0);
    _objc_release(pppuVar5);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c25ab0; end: 108c25c57;  */

void FUN_108c25ab0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [31];
  undefined1 uStack_f1;
  undefined **appuStack_f0 [9];
  undefined1 auStack_a8 [24];
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  func_0x000107c31908(param_2,&PTR___NSConcreteGlobalBlock_110ab8a10);
  _objc_opt_class(PTR_PTR_1126db2f0);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar2 = &uStack_f1;
  FUN_108c297c8(puVar2);
  FUN_108c256e0(auStack_110,param_2);
  func_0x000107c281a0(appuStack_f0,0xd,puVar2,auStack_110);
  puStack_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_80;
  func_0x000107c310cc(puVar3,appuStack_f0,&puStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_128 != (undefined1 *)0x0) {
    puStack_120 = puStack_128;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  appuStack_f0[0] = &PTR_SUB_110862700;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_128 = auStack_a8;
  func_0x000107c27dd4(&puStack_128);
  puStack_128 = auStack_110;
  func_0x000107c27dd4(&puStack_128);
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c25c58; end: 108c25ce7;  */

void FUN_108c25c58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126db2f8;
  FUN_108c2a24c(PTR_PTR_1126db2f8,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c25ce8; end: 108c25de3;  */

void FUN_108c25ce8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000107c31914(param_2,&PTR___NSConcreteGlobalBlock_110ab8a30,
                      &PTR___NSConcreteGlobalBlock_110ab8a50);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108c25de4;
  puStack_40 = &UNK_110ab8a70;
  uStack_38 = uVar1;
  _objc_retain();
  uVar2 = param_1;
  func_0x000107c31914(param_1,&puStack_58,&PTR___NSConcreteGlobalBlock_110ab8ac0);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c25de4; end: 108c25e4b;  */

void FUN_108c25de4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0fafe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108c25e4c; end: 108c25e73;  */

void FUN_108c25e4c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108c25e74; end: 108c25f33;  */

void FUN_108c25e74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  FUN_108c25538(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108c25ce8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c25f34; end: 108c26173;  */

undefined *** FUN_108c25f34(long param_1,undefined ***param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  long *plVar14;
  code *pcVar15;
  uint uVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined ***pppuVar19;
  undefined ***pppuVar20;
  undefined8 *puVar21;
  undefined ***unaff_x24;
  long lVar22;
  undefined ***unaff_x26;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  double dVar23;
  double dVar24;
  double unaff_d8;
  double unaff_d9;
  byte bStack_812;
  byte bStack_811;
  double dStack_810;
  double dStack_808;
  undefined ***pppuStack_800;
  undefined ***pppuStack_7f8;
  undefined8 *puStack_7f0;
  undefined ***pppuStack_7e8;
  undefined8 ****ppppuStack_7e0;
  code *pcStack_7d8;
  undefined8 uStack_7d0;
  long lStack_7c8;
  undefined8 *puStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined4 uStack_78c;
  long lStack_788;
  long lStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  long lStack_6b8;
  undefined ***pppuStack_6b0;
  undefined ***pppuStack_6a8;
  undefined ***pppuStack_6a0;
  undefined ***pppuStack_698;
  undefined ***pppuStack_690;
  undefined ***pppuStack_688;
  undefined1 ****ppppuStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_5a8;
  undefined ***pppuStack_5a0;
  undefined ***pppuStack_598;
  undefined ***pppuStack_590;
  undefined ***pppuStack_588;
  undefined ***pppuStack_580;
  undefined ***pppuStack_578;
  undefined1 ***pppuStack_570;
  code *pcStack_568;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined ***pppuStack_548;
  long lStack_540;
  undefined ***pppuStack_538;
  undefined ***pppuStack_530;
  undefined ***pppuStack_528;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined4 uStack_4d4;
  undefined ***pppuStack_4d0;
  undefined ***pppuStack_4c8;
  undefined8 uStack_4c0;
  undefined **ppuStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4a0;
  undefined ***pppuStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  long *plStack_450;
  undefined1 uStack_441;
  undefined **ppuStack_440;
  undefined4 uStack_438;
  undefined2 uStack_428;
  undefined2 uStack_426;
  undefined ***pppuStack_408;
  undefined ***pppuStack_400;
  undefined **ppuStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_310;
  double dStack_300;
  double dStack_2f8;
  undefined ***pppuStack_2f0;
  undefined ***pppuStack_2e8;
  undefined ***pppuStack_2e0;
  undefined ***pppuStack_2d8;
  undefined ***pppuStack_2d0;
  undefined ***pppuStack_2c8;
  undefined ***pppuStack_2c0;
  undefined ***pppuStack_2b8;
  undefined ***pppuStack_2b0;
  undefined ***pppuStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  uint uStack_284;
  undefined ***pppuStack_280;
  undefined ***pppuStack_278;
  undefined **ppuStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **appuStack_e8 [16];
  long lStack_68;
  
  pppuVar18 = &ppuStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  pppuVar19 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  pppuVar17 = pppuVar19;
  FUN_108c25ce8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar19);
  _objc_release(param_1);
  pppuVar4 = (undefined ***)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  dVar23 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  ppuStack_130 = (undefined **)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  pppuVar20 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar19 = appuStack_e8;
  pppuVar5 = pppuVar20;
  func_0x00010bf52a60();
  if (pppuVar5 != (undefined ***)0x0) {
    lVar22 = *plStack_120;
    do {
      unaff_x26 = (undefined ***)0x0;
      do {
        if (*plStack_120 != lVar22) {
          _objc_enumerationMutation(pppuVar20);
        }
        unaff_x24 = *(undefined ****)(lStack_128 + (long)unaff_x26 * 8);
        lVar6 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = (undefined ***)(ulong)(lVar6 == 0);
        _objc_release();
        if (lVar6 == 0) {
          func_0x00010befa120(pppuVar4);
        }
        unaff_x26 = (undefined ***)((long)unaff_x26 + 1);
      } while (pppuVar5 != unaff_x26);
      pppuVar19 = appuStack_e8;
      pppuVar5 = pppuVar20;
      pppuVar18 = &ppuStack_130;
      func_0x00010bf52a60();
    } while (pppuVar5 != (undefined ***)0x0);
  }
  _objc_release(pppuVar20);
  pppuVar5 = pppuVar4;
  func_0x00010bf51e00();
  _objc_release(pppuVar4);
  _objc_release(lVar3);
  pppuVar20 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_release(pppuVar4);
  _objc_release(lVar3);
  _objc_release(param_2);
  pppuVar7 = pppuVar20;
  __Unwind_Resume();
  pcStack_138 = FUN_108c26174;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)pppuVar17;
  pppuVar4 = pppuVar18;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  pppuStack_280 = pppuVar17;
  _objc_retain(pppuVar17);
  _objc_retain(pppuVar18);
  _objc_retain(pppuVar19);
  pppuStack_278 = pppuVar18;
  if (pppuVar18 == (undefined ***)0x0) {
LAB_108c26438:
    pppuVar5 = (undefined ***)PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
  }
  else {
    pppuVar20 = pppuVar18;
    func_0x00010c270ce0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = pppuVar20;
    func_0x00010bf529e0();
    _objc_release(pppuVar20);
    if (unaff_x24 < (undefined ***)0x2) goto LAB_108c26438;
    pppuVar4 = pppuStack_280;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR___NSConcreteGlobalBlock_110ab8a30;
    pppuVar20 = pppuVar4;
    func_0x000107c31914();
    _objc_release(pppuVar4);
    pppuVar4 = pppuStack_278;
    func_0x00010c270ce0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = pppuVar4;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    unaff_x27 = pppuStack_278;
    dVar24 = dVar23;
    func_0x00010c270ce0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = unaff_x27;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    pppuVar5 = pppuStack_278;
    func_0x00010c270ce0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar17 = pppuVar5;
    func_0x00010bf529e0();
    unaff_d8 = (dVar23 - dVar24) / (double)((long)pppuVar17 - 1);
    _objc_release(pppuVar5);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(pppuVar4);
    unaff_d9 = 1209600.0;
    if (unaff_d8 <= 1209600.0) {
      unaff_d9 = unaff_d8;
    }
    unaff_x24 = (undefined ***)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    dVar23 = 0.0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    ppuStack_270 = (undefined **)0x0;
    uStack_258 = 0;
    puStack_260 = (undefined8 *)0x0;
    _objc_retain(pppuVar7);
    pppuVar4 = &ppuStack_270;
    pppuVar5 = pppuVar7;
    func_0x00010bf52a60();
    if (pppuVar5 != (undefined ***)0x0) {
      uStack_284 = 0;
      unaff_x28 = (undefined ***)*puStack_260;
      do {
        pppuVar17 = (undefined ***)0x0;
        pppuVar18 = (undefined ***)(ulong)uStack_284;
        uStack_284 = uStack_284 + (int)pppuVar5;
        do {
          unaff_d8 = dVar23;
          if ((undefined ***)*puStack_260 != unaff_x28) {
            _objc_enumerationMutation(pppuVar7);
            unaff_d8 = dVar23;
          }
          unaff_x26 = *(undefined ****)(lStack_268 + (long)pppuVar17 * 8);
          func_0x00010c0d0340(unaff_x26);
          dVar23 = unaff_d8;
          FUN_1090216c8(pppuVar19);
          dVar23 = ABS(dVar23 - unaff_d8);
          if ((dVar23 < unaff_d9) || (200 < (uint)pppuVar18)) goto LAB_108c26410;
          func_0x00010c0fafe0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = pppuVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar4 = unaff_x27;
          func_0x00010befa120(unaff_x24);
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          pppuVar18 = (undefined ***)(ulong)((uint)pppuVar18 + 1);
          pppuVar17 = (undefined ***)((long)pppuVar17 + 1);
        } while (pppuVar5 != pppuVar17);
        pppuVar4 = &ppuStack_270;
        pppuVar5 = pppuVar7;
        func_0x00010bf52a60();
      } while (pppuVar5 != (undefined ***)0x0);
    }
LAB_108c26410:
    _objc_release(pppuVar7);
    pppuVar5 = unaff_x24;
    func_0x00010bf51e00();
    _objc_release(unaff_x24);
    _objc_release(pppuVar20);
  }
  _objc_release(pppuVar19);
  _objc_release(pppuStack_278);
  _objc_release(pppuStack_280);
  pppuVar17 = pppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    _objc_release(pppuVar7);
    _objc_release(unaff_x24);
    _objc_release(pppuVar20);
    _objc_release(pppuVar19);
    _objc_release(pppuStack_278);
    _objc_release(pppuStack_280);
    _objc_release(pppuVar7);
    pppuVar8 = pppuVar17;
    __Unwind_Resume();
    pcStack_298 = FUN_108c265ac;
    lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar13 = (undefined ***)ppuVar9;
    dStack_300 = unaff_d9;
    dStack_2f8 = unaff_d8;
    pppuStack_2f0 = unaff_x28;
    pppuStack_2e8 = unaff_x27;
    pppuStack_2e0 = unaff_x26;
    pppuStack_2d8 = pppuVar5;
    pppuStack_2d0 = unaff_x24;
    pppuStack_2c8 = pppuVar20;
    pppuStack_2c0 = pppuVar19;
    pppuStack_2b8 = pppuVar18;
    pppuStack_2b0 = pppuVar17;
    pppuStack_2a8 = pppuVar7;
    ppuStack_2a0 = &puStack_140;
    _objc_retain();
    _objc_retain(ppuVar9);
    pppuStack_528 = pppuVar4;
    _objc_retain(pppuVar4);
    lStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    plStack_510 = (long *)0x0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    _objc_retain(ppuVar9);
    pppuVar5 = (undefined ***)ppuVar9;
    pppuStack_530 = (undefined ***)ppuVar9;
    func_0x00010bf52a60();
    if (pppuVar5 != (undefined ***)0x0) {
      lStack_540 = *plStack_510;
      pppuVar4 = &ppuStack_3f8;
      pppuStack_548 = &ppuStack_470;
      ppuStack_550 = &PTR_DAT_110862760;
      ppuStack_558 = &PTR_SUB_110862700;
      do {
        pppuVar17 = (undefined ***)0x0;
        pppuStack_538 = pppuVar5;
        do {
          if (*plStack_510 != lStack_540) {
            _objc_enumerationMutation(pppuStack_530);
          }
          pppuVar20 = *(undefined ****)(lStack_518 + (long)pppuVar17 * 8);
          pppuVar19 = pppuStack_530;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(pppuVar8);
          _objc_retain(pppuVar20);
          _objc_retain(pppuVar19);
          _objc_retain(pppuStack_528);
          unaff_x24 = (undefined ***)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bdc2600();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(pppuVar8);
          _objc_retain(unaff_x24);
          _objc_opt_class(PTR_PTR_1126db2f0);
          if (pppuVar8 == (undefined ***)0x0) {
            uStack_3a0 = 0;
            uStack_3b8 = 0;
            uStack_3c0 = 0;
            uStack_3a8 = 0;
            uStack_3b0 = 0;
            uStack_3c8 = 0;
            uStack_3d0 = 0;
          }
          else {
            func_0x00010bfa6be0(&uStack_3d0,pppuVar8);
          }
          ppuVar9 = (undefined **)&uStack_441;
          FUN_108c297c8();
          uStack_4b0 = 0xf;
          uStack_4a0 = 0x100;
          _objc_retain(unaff_x24);
          uStack_4c0 = 0;
          ppuStack_4b8 = ppuStack_550;
          pppuStack_400 = &ppuStack_4b8;
          dVar24 = 0.0;
          uStack_478 = 0;
          uStack_480 = 0;
          uStack_468 = 0;
          ppuStack_470 = (undefined **)0x0;
          plStack_458 = (long *)0x0;
          uStack_460 = 0;
          plStack_450 = (long *)0x0;
          uStack_426 = *(undefined2 *)((long)ppuVar9 + 0x1a);
          uStack_438 = 10;
          uStack_428 = 0x100;
          ppuStack_440 = ppuStack_558;
          uStack_3f0 = 0;
          ppuStack_3f8 = (undefined **)0x0;
          plStack_3e0 = (long *)0x0;
          uStack_3e8 = 0;
          plStack_3d8 = (long *)0x0;
          pppuStack_4d0 = (undefined ***)0x0;
          pppuStack_4c8 = (undefined ***)0x0;
          uStack_4d4 = 0;
          puVar10 = &uStack_3d0;
          pppuVar13 = &ppuStack_440;
          pppuStack_488 = unaff_x24;
          pppuStack_408 = (undefined ***)ppuVar9;
          func_0x000107c310cc(puVar10,pppuVar13,&pppuStack_4d0,&uStack_4d4);
          _objc_retainAutoreleasedReturnValue();
          if (pppuStack_4d0 != (undefined ***)0x0) {
            pppuStack_4c8 = pppuStack_4d0;
            __ZdlPv();
          }
          plVar14 = plStack_3d8;
          ppuStack_440 = &PTR_SUB_110862700;
          plStack_3d8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_3e0;
          plStack_3e0 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          pppuStack_4d0 = pppuVar4;
          func_0x000107c27dd4(&pppuStack_4d0);
          plVar14 = plStack_450;
          ppuStack_4b8 = &PTR_DAT_110862760;
          plStack_450 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          plVar14 = plStack_458;
          plStack_458 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
          pppuStack_4d0 = pppuStack_548;
          func_0x000107c27dd4(&pppuStack_4d0);
          _objc_release(pppuStack_488);
          func_0x000107c27da8(&uStack_3a8);
          _objc_release(uStack_3b8);
          _objc_release(uStack_3c0);
          puVar11 = puVar10;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(unaff_x24);
          _objc_release(pppuVar8);
          pppuVar5 = pppuStack_528;
          func_0x00010bf4b900();
          unaff_d9 = dVar23;
          if (((ulong)pppuVar5 & 1) == 0) {
            func_0x00010befd5e0(puVar11);
            unaff_d9 = dVar24;
          }
          pppuVar5 = (undefined ***)PTR_PTR_1126db2f0;
          _objc_alloc();
          dVar24 = dVar23;
          func_0x00010c035b20(dVar23,unaff_d9);
          if (puVar11 == (undefined8 *)0x0) {
            _objc_retain(pppuVar8);
            pppuVar18 = (undefined ***)PTR_PTR_1126db2f8;
            pppuVar13 = pppuVar5;
            FUN_108c29c40(PTR_PTR_1126db2f8,pppuVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(pppuVar8);
            _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108c269f8:
            _objc_release(pppuVar18);
            _objc_release(pppuVar8);
          }
          else {
            func_0x00010c0d0340(puVar11);
            if (dVar24 < dVar23) {
              _objc_retain(pppuVar8);
              _objc_retain(pppuVar5);
              puVar12 = PTR_PTR_1126db2f8;
              pppuVar13 = pppuVar5;
              FUN_108c29e40(PTR_PTR_1126db2f8,pppuVar5);
              _objc_retainAutoreleasedReturnValue();
              if (puVar12 != (undefined *)0x0) {
                ppuVar9 = (undefined **)pppuVar5;
                func_0x00010bf85d80();
                _objc_retainAutoreleasedReturnValue();
                _objc_setProperty_nonatomic_copy(puVar12);
                _objc_release(ppuVar9);
                func_0x00010c0d0340(pppuVar5);
                *(double *)(puVar12 + 0x28) = dVar24;
                func_0x00010befd5e0(pppuVar5);
                *(double *)(puVar12 + 0x30) = dVar24;
                func_0x00010c25ed40(pppuVar8);
                _objc_unsafeClaimAutoreleasedReturnValue();
              }
              _objc_release(puVar12);
              pppuVar18 = pppuVar5;
              goto LAB_108c269f8;
            }
          }
          _objc_release(pppuVar5);
          _objc_release(puVar11);
          _objc_release(unaff_x24);
          _objc_release(pppuStack_528);
          _objc_release(pppuVar19);
          _objc_release(pppuVar20);
          _objc_release(pppuVar8);
          _objc_release(pppuVar19);
          pppuVar17 = (undefined ***)((long)pppuVar17 + 1);
        } while (pppuStack_538 != pppuVar17);
        pppuVar5 = pppuStack_530;
        func_0x00010bf52a60();
      } while (pppuVar5 != (undefined ***)0x0);
    }
    _objc_release(pppuStack_530);
    _objc_release(pppuStack_528);
    _objc_release(pppuStack_530);
    pppuVar5 = pppuVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_310) {
      return pppuVar5;
    }
    ___stack_chk_fail();
    _objc_release(pppuStack_530);
    _objc_release(pppuStack_528);
    _objc_release(pppuStack_530);
    _objc_release(pppuVar8);
    __Unwind_Resume();
    pcStack_568 = FUN_108c26be4;
    lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_5a0 = unaff_x24;
    pppuStack_598 = pppuVar20;
    pppuStack_590 = pppuVar19;
    pppuStack_588 = pppuVar4;
    pppuStack_580 = (undefined ***)ppuVar9;
    pppuStack_578 = pppuVar8;
    pppuStack_570 = &ppuStack_2a0;
    _objc_retain();
    func_0x00010bf002e0(pppuVar13);
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar5;
    FUN_108c25ab0(pppuVar5,pppuVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar13);
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    lStack_668 = 0;
    uStack_670 = 0;
    uStack_658 = 0;
    puStack_660 = (undefined8 *)0x0;
    _objc_retain(pppuVar4);
    pppuVar17 = pppuVar4;
    func_0x00010bf52a60();
    if (pppuVar17 != (undefined ***)0x0) {
      pppuVar19 = (undefined ***)*puStack_660;
      do {
        pppuVar20 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_660 != pppuVar19) {
            _objc_enumerationMutation(pppuVar4);
          }
          FUN_108c25c58(pppuVar5,*(undefined8 *)(lStack_668 + (long)pppuVar20 * 8));
          pppuVar20 = (undefined ***)((long)pppuVar20 + 1);
        } while (pppuVar17 != pppuVar20);
        pppuVar17 = pppuVar4;
        func_0x00010bf52a60();
      } while (pppuVar17 != (undefined ***)0x0);
    }
    _objc_release(pppuVar4);
    _objc_release(pppuVar4);
    pppuVar17 = pppuVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
      return pppuVar17;
    }
    ___stack_chk_fail();
    _objc_release(pppuVar4);
    _objc_release(pppuVar4);
    _objc_release(pppuVar5);
    pppuVar18 = pppuVar17;
    __Unwind_Resume();
    pcVar15 = (code *)&uStack_7d0;
    pcStack_678 = FUN_108c26d74;
    lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_6b0 = unaff_x24;
    pppuStack_6a8 = pppuVar20;
    pppuStack_6a0 = pppuVar19;
    pppuStack_698 = pppuVar17;
    pppuStack_690 = pppuVar4;
    pppuStack_688 = pppuVar5;
    ppppuStack_680 = &pppuStack_570;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126db2f0);
    if (pppuVar18 == (undefined ***)0x0) {
      uStack_740 = 0;
      uStack_758 = 0;
      uStack_760 = 0;
      uStack_748 = 0;
      uStack_750 = 0;
      uStack_768 = 0;
      uStack_770 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_770,pppuVar18);
    }
    lStack_788 = 0;
    lStack_780 = 0;
    uStack_778 = 0;
    uStack_78c = 0;
    puVar10 = &uStack_770;
    plVar14 = &lStack_788;
    func_0x000107c310d0(puVar10,plVar14,&uStack_78c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_788 != 0) {
      lStack_780 = lStack_788;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_748);
    _objc_release(uStack_758);
    _objc_release(uStack_760);
    dVar24 = 0.0;
    lStack_7c8 = 0;
    uStack_7d0 = 0;
    uStack_7b8 = 0;
    puStack_7c0 = (undefined8 *)0x0;
    uStack_7a8 = 0;
    uStack_7b0 = 0;
    uStack_798 = 0;
    uStack_7a0 = 0;
    _objc_retain(puVar10);
    puVar11 = puVar10;
    func_0x00010bf52a60();
    if (puVar11 != (undefined8 *)0x0) {
      pppuVar19 = (undefined ***)*puStack_7c0;
      do {
        puVar21 = (undefined8 *)0x0;
        do {
          if ((undefined ***)*puStack_7c0 != pppuVar19) {
            _objc_enumerationMutation(puVar10);
          }
          plVar14 = *(long **)(lStack_7c8 + (long)puVar21 * 8);
          FUN_108c25c58(pppuVar18,plVar14);
          puVar21 = (undefined8 *)((long)puVar21 + 1);
        } while (puVar11 != puVar21);
        puVar11 = puVar10;
        pcVar15 = (code *)&uStack_7d0;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined8 *)0x0);
    }
    _objc_release(puVar10);
    _objc_release(puVar10);
    pppuVar4 = pppuVar18;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
      return pppuVar4;
    }
    ___stack_chk_fail();
    _objc_release(puVar10);
    _objc_release(puVar10);
    _objc_release(pppuVar18);
    pppuVar20 = pppuVar4;
    __Unwind_Resume(pppuVar4);
    pcStack_7d8 = FUN_108c26f40;
    dStack_810 = unaff_d9;
    dStack_808 = dVar23;
    pppuStack_800 = pppuVar19;
    pppuStack_7f8 = pppuVar4;
    puStack_7f0 = puVar10;
    pppuStack_7e8 = pppuVar18;
    ppppuStack_7e0 = &ppppuStack_680;
    _objc_retain();
    _objc_retain(plVar14);
    (*pcVar15)(pppuVar20,&bStack_811);
    dVar23 = dVar24;
    (*pcVar15)(plVar14,&bStack_812);
    uVar16 = 2;
    uVar1 = uVar16;
    if (bStack_812 == 0) {
      uVar1 = 0;
    }
    if (bStack_811 == 0) {
      uVar1 = 1;
    }
    if (dVar23 < dVar24) {
      uVar16 = 1;
    }
    uVar2 = 0;
    if (dVar23 <= dVar24) {
      uVar2 = uVar16;
    }
    uVar16 = uVar1;
    if ((bStack_812 & 1) == 0) {
      uVar16 = uVar2;
    }
    if ((bStack_811 & 1) == 0) {
      uVar1 = uVar16;
    }
    _objc_release(plVar14);
    _objc_release(pppuVar20);
    return (undefined ***)(ulong)uVar1;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar5);
  return pppuVar5;
}



/* Entry: 108c26174; end: 108c265ab;  */

undefined ***
FUN_108c26174(double param_1,undefined ***param_2,undefined ***param_3,undefined ***param_4,
             undefined ***param_5)

{
  uint uVar1;
  uint uVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  long *plVar12;
  code *pcVar13;
  uint uVar14;
  undefined ***pppuVar15;
  undefined ***unaff_x23;
  undefined8 *puVar16;
  undefined ***unaff_x24;
  undefined ***unaff_x26;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  double dVar17;
  double dVar18;
  double unaff_d8;
  double unaff_d9;
  byte bStack_6e2;
  byte bStack_6e1;
  double dStack_6e0;
  double dStack_6d8;
  undefined ***pppuStack_6d0;
  undefined ***pppuStack_6c8;
  undefined8 *puStack_6c0;
  undefined ***pppuStack_6b8;
  undefined1 ****ppppuStack_6b0;
  code *pcStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  undefined8 *puStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined4 uStack_65c;
  long lStack_658;
  long lStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  long lStack_588;
  undefined ***pppuStack_580;
  undefined ***pppuStack_578;
  undefined ***pppuStack_570;
  undefined ***pppuStack_568;
  undefined ***pppuStack_560;
  undefined ***pppuStack_558;
  undefined1 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_478;
  undefined ***pppuStack_470;
  undefined ***pppuStack_468;
  undefined ***pppuStack_460;
  undefined ***pppuStack_458;
  undefined ***pppuStack_450;
  undefined ***pppuStack_448;
  undefined1 **ppuStack_440;
  code *pcStack_438;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined ***pppuStack_418;
  long lStack_410;
  undefined ***pppuStack_408;
  undefined ***pppuStack_400;
  undefined ***pppuStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3a4;
  undefined ***pppuStack_3a0;
  undefined ***pppuStack_398;
  undefined8 uStack_390;
  undefined **ppuStack_388;
  undefined4 uStack_380;
  undefined4 uStack_370;
  undefined ***pppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  long *plStack_320;
  undefined1 uStack_311;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined2 uStack_2f8;
  undefined2 uStack_2f6;
  undefined ***pppuStack_2d8;
  undefined ***pppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_1e0;
  double dStack_1d0;
  double dStack_1c8;
  undefined ***pppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined ***pppuStack_1a0;
  undefined ***pppuStack_198;
  undefined ***pppuStack_190;
  undefined ***pppuStack_188;
  undefined ***pppuStack_180;
  undefined ***pppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  uint uStack_154;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)param_3;
  pppuVar3 = param_4;
  _objc_retain();
  pppuStack_150 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  pppuStack_148 = param_4;
  if (param_4 != (undefined ***)0x0) {
    unaff_x23 = param_4;
    func_0x00010c270ce0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bf529e0();
    _objc_release(unaff_x23);
    if ((undefined ***)0x1 < unaff_x24) {
      pppuVar3 = pppuStack_150;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR___NSConcreteGlobalBlock_110ab8a30;
      unaff_x23 = pppuVar3;
      func_0x000107c31914();
      _objc_release(pppuVar3);
      pppuVar3 = pppuStack_148;
      func_0x00010c270ce0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = pppuVar3;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      unaff_x27 = pppuStack_148;
      dVar17 = param_1;
      func_0x00010c270ce0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x28 = unaff_x27;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      pppuVar4 = pppuStack_148;
      func_0x00010c270ce0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar15 = pppuVar4;
      func_0x00010bf529e0();
      unaff_d8 = (param_1 - dVar17) / (double)((long)pppuVar15 - 1);
      _objc_release(pppuVar4);
      _objc_release(unaff_x28);
      _objc_release(unaff_x27);
      _objc_release(unaff_x26);
      _objc_release(pppuVar3);
      unaff_d9 = 1209600.0;
      if (unaff_d8 <= 1209600.0) {
        unaff_d9 = unaff_d8;
      }
      unaff_x24 = (undefined ***)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      param_1 = 0.0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      ppuStack_140 = (undefined **)0x0;
      uStack_128 = 0;
      puStack_130 = (undefined8 *)0x0;
      _objc_retain(param_2);
      pppuVar3 = &ppuStack_140;
      pppuVar4 = param_2;
      func_0x00010bf52a60();
      if (pppuVar4 != (undefined ***)0x0) {
        uStack_154 = 0;
        unaff_x28 = (undefined ***)*puStack_130;
        do {
          pppuVar15 = (undefined ***)0x0;
          param_4 = (undefined ***)(ulong)uStack_154;
          uStack_154 = uStack_154 + (int)pppuVar4;
          do {
            unaff_d8 = param_1;
            if ((undefined ***)*puStack_130 != unaff_x28) {
              _objc_enumerationMutation(param_2);
              unaff_d8 = param_1;
            }
            unaff_x26 = *(undefined ****)(lStack_138 + (long)pppuVar15 * 8);
            func_0x00010c0d0340(unaff_x26);
            dVar17 = unaff_d8;
            FUN_1090216c8(param_5);
            param_1 = ABS(dVar17 - unaff_d8);
            if ((param_1 < unaff_d9) || (200 < (uint)param_4)) goto LAB_108c26410;
            func_0x00010c0fafe0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x23;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar3 = unaff_x27;
            func_0x00010befa120(unaff_x24);
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            param_4 = (undefined ***)(ulong)((uint)param_4 + 1);
            pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
          } while (pppuVar4 != pppuVar15);
          pppuVar3 = &ppuStack_140;
          pppuVar4 = param_2;
          func_0x00010bf52a60();
        } while (pppuVar4 != (undefined ***)0x0);
      }
LAB_108c26410:
      _objc_release(param_2);
      pppuVar4 = unaff_x24;
      func_0x00010bf51e00();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      goto LAB_108c26448;
    }
  }
  pppuVar4 = (undefined ***)PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new();
LAB_108c26448:
  _objc_release(param_5);
  _objc_release(pppuStack_148);
  _objc_release(pppuStack_150);
  pppuVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar4);
    return pppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(unaff_x24);
  _objc_release(unaff_x23);
  _objc_release(param_5);
  _objc_release(pppuStack_148);
  _objc_release(pppuStack_150);
  _objc_release(param_2);
  pppuVar5 = pppuVar15;
  __Unwind_Resume();
  pcStack_168 = FUN_108c265ac;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar11 = (undefined ***)ppuVar6;
  dStack_1d0 = unaff_d9;
  dStack_1c8 = unaff_d8;
  pppuStack_1c0 = unaff_x28;
  pppuStack_1b8 = unaff_x27;
  pppuStack_1b0 = unaff_x26;
  pppuStack_1a8 = pppuVar4;
  pppuStack_1a0 = unaff_x24;
  pppuStack_198 = unaff_x23;
  pppuStack_190 = param_5;
  pppuStack_188 = param_4;
  pppuStack_180 = pppuVar15;
  pppuStack_178 = param_2;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppuVar6);
  pppuStack_3f8 = pppuVar3;
  _objc_retain(pppuVar3);
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  _objc_retain(ppuVar6);
  pppuVar4 = (undefined ***)ppuVar6;
  pppuStack_400 = (undefined ***)ppuVar6;
  func_0x00010bf52a60();
  if (pppuVar4 != (undefined ***)0x0) {
    lStack_410 = *plStack_3e0;
    pppuVar3 = &ppuStack_2c8;
    pppuStack_418 = &ppuStack_340;
    ppuStack_420 = &PTR_DAT_110862760;
    ppuStack_428 = &PTR_SUB_110862700;
    do {
      pppuVar15 = (undefined ***)0x0;
      pppuStack_408 = pppuVar4;
      do {
        if (*plStack_3e0 != lStack_410) {
          _objc_enumerationMutation(pppuStack_400);
        }
        unaff_x23 = *(undefined ****)(lStack_3e8 + (long)pppuVar15 * 8);
        param_5 = pppuStack_400;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(pppuVar5);
        _objc_retain(unaff_x23);
        _objc_retain(param_5);
        _objc_retain(pppuStack_3f8);
        unaff_x24 = (undefined ***)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bdc2600();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(pppuVar5);
        _objc_retain(unaff_x24);
        _objc_opt_class(PTR_PTR_1126db2f0);
        if (pppuVar5 == (undefined ***)0x0) {
          uStack_270 = 0;
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
        }
        else {
          func_0x00010bfa6be0(&uStack_2a0,pppuVar5);
        }
        ppuVar6 = (undefined **)&uStack_311;
        FUN_108c297c8();
        uStack_380 = 0xf;
        uStack_370 = 0x100;
        _objc_retain(unaff_x24);
        uStack_390 = 0;
        ppuStack_388 = ppuStack_420;
        pppuStack_2d0 = &ppuStack_388;
        dVar17 = 0.0;
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_338 = 0;
        ppuStack_340 = (undefined **)0x0;
        plStack_328 = (long *)0x0;
        uStack_330 = 0;
        plStack_320 = (long *)0x0;
        uStack_2f6 = *(undefined2 *)((long)ppuVar6 + 0x1a);
        uStack_308 = 10;
        uStack_2f8 = 0x100;
        ppuStack_310 = ppuStack_428;
        uStack_2c0 = 0;
        ppuStack_2c8 = (undefined **)0x0;
        plStack_2b0 = (long *)0x0;
        uStack_2b8 = 0;
        plStack_2a8 = (long *)0x0;
        pppuStack_3a0 = (undefined ***)0x0;
        pppuStack_398 = (undefined ***)0x0;
        uStack_3a4 = 0;
        puVar7 = &uStack_2a0;
        pppuVar11 = &ppuStack_310;
        pppuStack_358 = unaff_x24;
        pppuStack_2d8 = (undefined ***)ppuVar6;
        func_0x000107c310cc(puVar7,pppuVar11,&pppuStack_3a0,&uStack_3a4);
        _objc_retainAutoreleasedReturnValue();
        if (pppuStack_3a0 != (undefined ***)0x0) {
          pppuStack_398 = pppuStack_3a0;
          __ZdlPv();
        }
        plVar12 = plStack_2a8;
        ppuStack_310 = &PTR_SUB_110862700;
        plStack_2a8 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 8))();
        }
        plVar12 = plStack_2b0;
        plStack_2b0 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 8))();
        }
        pppuStack_3a0 = pppuVar3;
        func_0x000107c27dd4(&pppuStack_3a0);
        plVar12 = plStack_320;
        ppuStack_388 = &PTR_DAT_110862760;
        plStack_320 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 8))();
        }
        plVar12 = plStack_328;
        plStack_328 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 8))();
        }
        pppuStack_3a0 = pppuStack_418;
        func_0x000107c27dd4(&pppuStack_3a0);
        _objc_release(pppuStack_358);
        func_0x000107c27da8(&uStack_278);
        _objc_release(uStack_288);
        _objc_release(uStack_290);
        puVar8 = puVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(unaff_x24);
        _objc_release(pppuVar5);
        pppuVar4 = pppuStack_3f8;
        func_0x00010bf4b900();
        unaff_d9 = param_1;
        if (((ulong)pppuVar4 & 1) == 0) {
          func_0x00010befd5e0(puVar8);
          unaff_d9 = dVar17;
        }
        pppuVar4 = (undefined ***)PTR_PTR_1126db2f0;
        _objc_alloc();
        dVar17 = param_1;
        func_0x00010c035b20(param_1,unaff_d9);
        if (puVar8 == (undefined8 *)0x0) {
          _objc_retain(pppuVar5);
          pppuVar10 = (undefined ***)PTR_PTR_1126db2f8;
          pppuVar11 = pppuVar4;
          FUN_108c29c40(PTR_PTR_1126db2f8,pppuVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108c269f8:
          _objc_release(pppuVar10);
          _objc_release(pppuVar5);
        }
        else {
          func_0x00010c0d0340(puVar8);
          if (dVar17 < param_1) {
            _objc_retain(pppuVar5);
            _objc_retain(pppuVar4);
            puVar9 = PTR_PTR_1126db2f8;
            pppuVar11 = pppuVar4;
            FUN_108c29e40(PTR_PTR_1126db2f8,pppuVar4);
            _objc_retainAutoreleasedReturnValue();
            if (puVar9 != (undefined *)0x0) {
              ppuVar6 = (undefined **)pppuVar4;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              _objc_setProperty_nonatomic_copy(puVar9);
              _objc_release(ppuVar6);
              func_0x00010c0d0340(pppuVar4);
              *(double *)(puVar9 + 0x28) = dVar17;
              func_0x00010befd5e0(pppuVar4);
              *(double *)(puVar9 + 0x30) = dVar17;
              func_0x00010c25ed40(pppuVar5);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
            _objc_release(puVar9);
            pppuVar10 = pppuVar4;
            goto LAB_108c269f8;
          }
        }
        _objc_release(pppuVar4);
        _objc_release(puVar8);
        _objc_release(unaff_x24);
        _objc_release(pppuStack_3f8);
        _objc_release(param_5);
        _objc_release(unaff_x23);
        _objc_release(pppuVar5);
        _objc_release(param_5);
        pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
      } while (pppuStack_408 != pppuVar15);
      pppuVar4 = pppuStack_400;
      func_0x00010bf52a60();
    } while (pppuVar4 != (undefined ***)0x0);
  }
  _objc_release(pppuStack_400);
  _objc_release(pppuStack_3f8);
  _objc_release(pppuStack_400);
  pppuVar4 = pppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(pppuStack_400);
  _objc_release(pppuStack_3f8);
  _objc_release(pppuStack_400);
  _objc_release(pppuVar5);
  __Unwind_Resume();
  pcStack_438 = FUN_108c26be4;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_470 = unaff_x24;
  pppuStack_468 = unaff_x23;
  pppuStack_460 = param_5;
  pppuStack_458 = pppuVar3;
  pppuStack_450 = (undefined ***)ppuVar6;
  pppuStack_448 = pppuVar5;
  ppuStack_440 = &puStack_170;
  _objc_retain();
  func_0x00010bf002e0(pppuVar11);
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuVar4;
  FUN_108c25ab0(pppuVar4,pppuVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar11);
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  lStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  puStack_530 = (undefined8 *)0x0;
  _objc_retain(pppuVar3);
  pppuVar15 = pppuVar3;
  func_0x00010bf52a60();
  if (pppuVar15 != (undefined ***)0x0) {
    param_5 = (undefined ***)*puStack_530;
    do {
      unaff_x23 = (undefined ***)0x0;
      do {
        if ((undefined ***)*puStack_530 != param_5) {
          _objc_enumerationMutation(pppuVar3);
        }
        FUN_108c25c58(pppuVar4,*(undefined8 *)(lStack_538 + (long)unaff_x23 * 8));
        unaff_x23 = (undefined ***)((long)unaff_x23 + 1);
      } while (pppuVar15 != unaff_x23);
      pppuVar15 = pppuVar3;
      func_0x00010bf52a60();
    } while (pppuVar15 != (undefined ***)0x0);
  }
  _objc_release(pppuVar3);
  _objc_release(pppuVar3);
  pppuVar15 = pppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
    return pppuVar15;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar3);
  _objc_release(pppuVar3);
  _objc_release(pppuVar4);
  pppuVar11 = pppuVar15;
  __Unwind_Resume();
  pcVar13 = (code *)&uStack_6a0;
  pcStack_548 = FUN_108c26d74;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_580 = unaff_x24;
  pppuStack_578 = unaff_x23;
  pppuStack_570 = param_5;
  pppuStack_568 = pppuVar15;
  pppuStack_560 = pppuVar3;
  pppuStack_558 = pppuVar4;
  pppuStack_550 = &ppuStack_440;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db2f0);
  if (pppuVar11 == (undefined ***)0x0) {
    uStack_610 = 0;
    uStack_628 = 0;
    uStack_630 = 0;
    uStack_618 = 0;
    uStack_620 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_640,pppuVar11);
  }
  lStack_658 = 0;
  lStack_650 = 0;
  uStack_648 = 0;
  uStack_65c = 0;
  puVar7 = &uStack_640;
  plVar12 = &lStack_658;
  func_0x000107c310d0(puVar7,plVar12,&uStack_65c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_658 != 0) {
    lStack_650 = lStack_658;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_618);
  _objc_release(uStack_628);
  _objc_release(uStack_630);
  dVar17 = 0.0;
  lStack_698 = 0;
  uStack_6a0 = 0;
  uStack_688 = 0;
  puStack_690 = (undefined8 *)0x0;
  uStack_678 = 0;
  uStack_680 = 0;
  uStack_668 = 0;
  uStack_670 = 0;
  _objc_retain(puVar7);
  puVar8 = puVar7;
  func_0x00010bf52a60();
  if (puVar8 != (undefined8 *)0x0) {
    param_5 = (undefined ***)*puStack_690;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if ((undefined ***)*puStack_690 != param_5) {
          _objc_enumerationMutation(puVar7);
        }
        plVar12 = *(long **)(lStack_698 + (long)puVar16 * 8);
        FUN_108c25c58(pppuVar11,plVar12);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar8 != puVar16);
      puVar8 = puVar7;
      pcVar13 = (code *)&uStack_6a0;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined8 *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar7);
  pppuVar3 = pppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(pppuVar11);
  pppuVar4 = pppuVar3;
  __Unwind_Resume(pppuVar3);
  pcStack_6a8 = FUN_108c26f40;
  dStack_6e0 = unaff_d9;
  dStack_6d8 = param_1;
  pppuStack_6d0 = param_5;
  pppuStack_6c8 = pppuVar3;
  puStack_6c0 = puVar7;
  pppuStack_6b8 = pppuVar11;
  ppppuStack_6b0 = &pppuStack_550;
  _objc_retain();
  _objc_retain(plVar12);
  (*pcVar13)(pppuVar4,&bStack_6e1);
  dVar18 = dVar17;
  (*pcVar13)(plVar12,&bStack_6e2);
  uVar14 = 2;
  uVar1 = uVar14;
  if (bStack_6e2 == 0) {
    uVar1 = 0;
  }
  if (bStack_6e1 == 0) {
    uVar1 = 1;
  }
  if (dVar18 < dVar17) {
    uVar14 = 1;
  }
  uVar2 = 0;
  if (dVar18 <= dVar17) {
    uVar2 = uVar14;
  }
  uVar14 = uVar1;
  if ((bStack_6e2 & 1) == 0) {
    uVar14 = uVar2;
  }
  if ((bStack_6e1 & 1) == 0) {
    uVar1 = uVar14;
  }
  _objc_release(plVar12);
  _objc_release(pppuVar4);
  return (undefined ***)(ulong)uVar1;
}



/* Entry: 108c265ac; end: 108c26be3;  */

ulong FUN_108c265ac(double param_1,ulong param_2,undefined ***param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  ulong uVar8;
  undefined ***pppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  code *pcVar14;
  uint uVar15;
  undefined ***unaff_x22;
  ulong unaff_x23;
  undefined8 *puVar16;
  undefined *unaff_x24;
  undefined ***pppuVar17;
  double dVar18;
  double dVar19;
  double unaff_d9;
  byte bStack_582;
  byte bStack_581;
  double dStack_580;
  double dStack_578;
  undefined ***pppuStack_570;
  ulong uStack_568;
  undefined8 *puStack_560;
  ulong uStack_558;
  undefined1 ***pppuStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  long lStack_538;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_4fc;
  long lStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_428;
  undefined *puStack_420;
  ulong uStack_418;
  undefined ***pppuStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined1 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_318;
  undefined *puStack_310;
  ulong uStack_308;
  undefined ***pppuStack_300;
  undefined8 *puStack_2f8;
  undefined ***pppuStack_2f0;
  ulong uStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined8 *puStack_2b8;
  long lStack_2b0;
  undefined ***pppuStack_2a8;
  undefined ***pppuStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_244;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined **ppuStack_228;
  undefined4 uStack_220;
  undefined4 uStack_210;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined1 uStack_1b1;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  puStack_298 = param_4;
  _objc_retain(param_4);
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  _objc_retain(param_3);
  pppuVar3 = param_3;
  pppuStack_2a0 = param_3;
  func_0x00010bf52a60();
  if (pppuVar3 != (undefined ***)0x0) {
    lStack_2b0 = *plStack_280;
    param_4 = &uStack_168;
    puStack_2b8 = &uStack_1e0;
    ppuStack_2c0 = &PTR_DAT_110862760;
    ppuStack_2c8 = &PTR_SUB_110862700;
    do {
      pppuVar17 = (undefined ***)0x0;
      pppuStack_2a8 = pppuVar3;
      do {
        if (*plStack_280 != lStack_2b0) {
          _objc_enumerationMutation(pppuStack_2a0);
        }
        unaff_x23 = *(ulong *)(lStack_288 + (long)pppuVar17 * 8);
        unaff_x22 = pppuStack_2a0;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_2);
        _objc_retain(unaff_x23);
        _objc_retain(unaff_x22);
        _objc_retain(puStack_298);
        unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bdc2600();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_2);
        _objc_retain(unaff_x24);
        _objc_opt_class(PTR_PTR_1126db2f0);
        if (param_2 == 0) {
          uStack_110 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
        }
        else {
          func_0x00010bfa6be0(&uStack_140,param_2);
        }
        param_3 = (undefined ***)&uStack_1b1;
        FUN_108c297c8();
        uStack_220 = 0xf;
        uStack_210 = 0x100;
        _objc_retain(unaff_x24);
        uStack_230 = 0;
        ppuStack_228 = ppuStack_2c0;
        pppuStack_170 = &ppuStack_228;
        dVar18 = 0.0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        plStack_1c8 = (long *)0x0;
        uStack_1d0 = 0;
        plStack_1c0 = (long *)0x0;
        uStack_196 = *(undefined2 *)((long)param_3 + 0x1a);
        uStack_1a8 = 10;
        uStack_198 = 0x100;
        ppuStack_1b0 = ppuStack_2c8;
        uStack_160 = 0;
        uStack_168 = 0;
        plStack_150 = (long *)0x0;
        uStack_158 = 0;
        plStack_148 = (long *)0x0;
        puStack_240 = (undefined8 *)0x0;
        puStack_238 = (undefined8 *)0x0;
        uStack_244 = 0;
        puVar4 = &uStack_140;
        pppuVar9 = &ppuStack_1b0;
        puStack_1f8 = unaff_x24;
        pppuStack_178 = param_3;
        func_0x000107c310cc(puVar4,pppuVar9,&puStack_240,&uStack_244);
        _objc_retainAutoreleasedReturnValue();
        if (puStack_240 != (undefined8 *)0x0) {
          puStack_238 = puStack_240;
          __ZdlPv();
        }
        plVar13 = plStack_148;
        ppuStack_1b0 = &PTR_SUB_110862700;
        plStack_148 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        plVar13 = plStack_150;
        plStack_150 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        puStack_240 = param_4;
        func_0x000107c27dd4(&puStack_240);
        plVar13 = plStack_1c0;
        ppuStack_228 = &PTR_DAT_110862760;
        plStack_1c0 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        plVar13 = plStack_1c8;
        plStack_1c8 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        puStack_240 = puStack_2b8;
        func_0x000107c27dd4(&puStack_240);
        _objc_release(puStack_1f8);
        func_0x000107c27da8(&uStack_118);
        _objc_release(uStack_128);
        _objc_release(uStack_130);
        puVar5 = puVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(unaff_x24);
        _objc_release(param_2);
        puVar4 = puStack_298;
        func_0x00010bf4b900();
        unaff_d9 = param_1;
        if (((ulong)puVar4 & 1) == 0) {
          func_0x00010befd5e0(puVar5);
          unaff_d9 = dVar18;
        }
        pppuVar3 = (undefined ***)PTR_PTR_1126db2f0;
        _objc_alloc();
        dVar18 = param_1;
        func_0x00010c035b20(param_1,unaff_d9);
        if (puVar5 == (undefined8 *)0x0) {
          _objc_retain(param_2);
          pppuVar7 = (undefined ***)PTR_PTR_1126db2f8;
          pppuVar9 = pppuVar3;
          FUN_108c29c40(PTR_PTR_1126db2f8,pppuVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
LAB_108c269f8:
          _objc_release(pppuVar7);
          _objc_release(param_2);
        }
        else {
          func_0x00010c0d0340(puVar5);
          if (dVar18 < param_1) {
            _objc_retain(param_2);
            _objc_retain(pppuVar3);
            puVar6 = PTR_PTR_1126db2f8;
            pppuVar9 = pppuVar3;
            FUN_108c29e40(PTR_PTR_1126db2f8,pppuVar3);
            _objc_retainAutoreleasedReturnValue();
            if (puVar6 != (undefined *)0x0) {
              param_3 = pppuVar3;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              _objc_setProperty_nonatomic_copy(puVar6);
              _objc_release(param_3);
              func_0x00010c0d0340(pppuVar3);
              *(double *)(puVar6 + 0x28) = dVar18;
              func_0x00010befd5e0(pppuVar3);
              *(double *)(puVar6 + 0x30) = dVar18;
              func_0x00010c25ed40(param_2);
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
            _objc_release(puVar6);
            pppuVar7 = pppuVar3;
            goto LAB_108c269f8;
          }
        }
        _objc_release(pppuVar3);
        _objc_release(puVar5);
        _objc_release(unaff_x24);
        _objc_release(puStack_298);
        _objc_release(unaff_x22);
        _objc_release(unaff_x23);
        _objc_release(param_2);
        _objc_release(unaff_x22);
        pppuVar17 = (undefined ***)((long)pppuVar17 + 1);
      } while (pppuStack_2a8 != pppuVar17);
      pppuVar3 = pppuStack_2a0;
      func_0x00010bf52a60();
    } while (pppuVar3 != (undefined ***)0x0);
  }
  _objc_release(pppuStack_2a0);
  _objc_release(puStack_298);
  _objc_release(pppuStack_2a0);
  uVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_release(pppuStack_2a0);
  _objc_release(puStack_298);
  _objc_release(pppuStack_2a0);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_2d8 = FUN_108c26be4;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_310 = unaff_x24;
  uStack_308 = unaff_x23;
  pppuStack_300 = unaff_x22;
  puStack_2f8 = param_4;
  pppuStack_2f0 = param_3;
  uStack_2e8 = param_2;
  puStack_2e0 = &stack0xfffffffffffffff0;
  _objc_retain();
  func_0x00010bf002e0(pppuVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  FUN_108c25ab0(uVar8,pppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar9);
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  lStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  puStack_3d0 = (undefined8 *)0x0;
  _objc_retain(uVar10);
  uVar11 = uVar10;
  func_0x00010bf52a60();
  if (uVar11 != 0) {
    unaff_x22 = (undefined ***)*puStack_3d0;
    do {
      unaff_x23 = 0;
      do {
        if ((undefined ***)*puStack_3d0 != unaff_x22) {
          _objc_enumerationMutation(uVar10);
        }
        FUN_108c25c58(uVar8,*(undefined8 *)(lStack_3d8 + unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (uVar11 != unaff_x23);
      uVar11 = uVar10;
      func_0x00010bf52a60();
    } while (uVar11 != 0);
  }
  _objc_release(uVar10);
  _objc_release(uVar10);
  uVar11 = uVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return uVar11;
  }
  ___stack_chk_fail();
  _objc_release(uVar10);
  _objc_release(uVar10);
  _objc_release(uVar8);
  uVar12 = uVar11;
  __Unwind_Resume();
  pcVar14 = (code *)&uStack_540;
  pcStack_3e8 = FUN_108c26d74;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_420 = unaff_x24;
  uStack_418 = unaff_x23;
  pppuStack_410 = unaff_x22;
  uStack_408 = uVar11;
  uStack_400 = uVar10;
  uStack_3f8 = uVar8;
  ppuStack_3f0 = &puStack_2e0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db2f0);
  if (uVar12 == 0) {
    uStack_4b0 = 0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_4e0,uVar12);
  }
  lStack_4f8 = 0;
  lStack_4f0 = 0;
  uStack_4e8 = 0;
  uStack_4fc = 0;
  puVar4 = &uStack_4e0;
  plVar13 = &lStack_4f8;
  func_0x000107c310d0(puVar4,plVar13,&uStack_4fc);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_4f8 != 0) {
    lStack_4f0 = lStack_4f8;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_4b8);
  _objc_release(uStack_4c8);
  _objc_release(uStack_4d0);
  dVar18 = 0.0;
  lStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  puStack_530 = (undefined8 *)0x0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    unaff_x22 = (undefined ***)*puStack_530;
    do {
      puVar16 = (undefined8 *)0x0;
      do {
        if ((undefined ***)*puStack_530 != unaff_x22) {
          _objc_enumerationMutation(puVar4);
        }
        plVar13 = *(long **)(lStack_538 + (long)puVar16 * 8);
        FUN_108c25c58(uVar12,plVar13);
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar5 != puVar16);
      puVar5 = puVar4;
      pcVar14 = (code *)&uStack_540;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  uVar8 = uVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(uVar12);
  uVar10 = uVar8;
  __Unwind_Resume(uVar8);
  pcStack_548 = FUN_108c26f40;
  dStack_580 = unaff_d9;
  dStack_578 = param_1;
  pppuStack_570 = unaff_x22;
  uStack_568 = uVar8;
  puStack_560 = puVar4;
  uStack_558 = uVar12;
  pppuStack_550 = &ppuStack_3f0;
  _objc_retain();
  _objc_retain(plVar13);
  (*pcVar14)(uVar10,&bStack_581);
  dVar19 = dVar18;
  (*pcVar14)(plVar13,&bStack_582);
  uVar15 = 2;
  uVar1 = uVar15;
  if (bStack_582 == 0) {
    uVar1 = 0;
  }
  if (bStack_581 == 0) {
    uVar1 = 1;
  }
  if (dVar19 < dVar18) {
    uVar15 = 1;
  }
  uVar2 = 0;
  if (dVar19 <= dVar18) {
    uVar2 = uVar15;
  }
  uVar15 = uVar1;
  if ((bStack_582 & 1) == 0) {
    uVar15 = uVar2;
  }
  if ((bStack_581 & 1) == 0) {
    uVar1 = uVar15;
  }
  _objc_release(plVar13);
  _objc_release(uVar10);
  return (ulong)uVar1;
}



/* Entry: 108c26be4; end: 108c26d73;  */

ulong FUN_108c26be4(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  byte bStack_2b2;
  byte bStack_2b1;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_22c;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_158;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_108c25ab0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_retain(uVar7);
  uVar8 = uVar7;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (uVar8 != 0) {
    uVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(uVar7);
      }
      FUN_108c25c58(param_1,*(undefined8 *)(uVar16 * 8));
      uVar16 = uVar16 + 1;
    } while (uVar8 != uVar16);
    uVar8 = uVar7;
    func_0x00010bf52a60();
  }
  _objc_release(uVar7);
  _objc_release(uVar7);
  uVar8 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return uVar8;
  }
  ___stack_chk_fail();
  _objc_release(uVar7);
  _objc_release(uVar7);
  _objc_release(param_1);
  __Unwind_Resume();
  pcVar12 = (code *)&uStack_270;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db2f0);
  if (uVar8 == 0) {
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_210,uVar8);
  }
  lStack_228 = 0;
  lStack_220 = 0;
  uStack_218 = 0;
  uStack_22c = 0;
  puVar9 = &uStack_210;
  plVar11 = &lStack_228;
  func_0x000107c310d0(puVar9,plVar11,&uStack_22c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_228 != 0) {
    lStack_220 = lStack_228;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_1e8);
  _objc_release(uStack_1f8);
  _objc_release(uStack_200);
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  _objc_retain(puVar9);
  puVar10 = puVar9;
  func_0x00010bf52a60();
  if (puVar10 != (undefined8 *)0x0) {
    lVar15 = *plStack_260;
    do {
      puVar17 = (undefined8 *)0x0;
      do {
        if (*plStack_260 != lVar15) {
          _objc_enumerationMutation(puVar9);
        }
        plVar11 = *(long **)(lStack_268 + (long)puVar17 * 8);
        FUN_108c25c58(uVar8,plVar11);
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar10 != puVar17);
      puVar10 = puVar9;
      pcVar12 = (code *)&uStack_270;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined8 *)0x0);
  }
  _objc_release(puVar9);
  _objc_release(puVar9);
  uVar7 = uVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(uVar8);
  __Unwind_Resume(uVar7);
  _objc_retain();
  _objc_retain(plVar11);
  (*pcVar12)(uVar7,&bStack_2b1);
  dVar4 = (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,CONCAT13(uVar21,
                                                  CONCAT12(uVar20,CONCAT11(uVar19,uVar18)))))));
  (*pcVar12)(plVar11,&bStack_2b2);
  uVar14 = 2;
  uVar2 = uVar14;
  if (bStack_2b2 == 0) {
    uVar2 = 0;
  }
  if (bStack_2b1 == 0) {
    uVar2 = 1;
  }
  bVar5 = false;
  bVar6 = false;
  bVar1 = NAN((double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,CONCAT13(
                                                  uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18)))))
                                              )));
  if (!NAN(dVar4) && !bVar1) {
    bVar5 = dVar4 < (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,CONCAT13
                                                  (uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))))
                                                  )));
    bVar6 = dVar4 == (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18)))))));
  }
  if (!bVar6 && bVar5 == (NAN(dVar4) || bVar1)) {
    uVar14 = 1;
  }
  uVar3 = 0;
  if (!bVar5) {
    uVar3 = uVar14;
  }
  uVar14 = uVar2;
  if ((bStack_2b2 & 1) == 0) {
    uVar14 = uVar3;
  }
  if ((bStack_2b1 & 1) == 0) {
    uVar2 = uVar14;
  }
  _objc_release(plVar11);
  _objc_release(uVar7);
  return (ulong)uVar2;
}



/* Entry: 108c26d74; end: 108c26f3f;  */

ulong FUN_108c26d74(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  code *pcVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  byte bStack_1a2;
  byte bStack_1a1;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_11c;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_48;
  
  pcVar11 = (code *)&uStack_160;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db2f0);
  if (param_1 == 0) {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_100,param_1);
  }
  lStack_118 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  uStack_11c = 0;
  puVar7 = &uStack_100;
  plVar10 = &lStack_118;
  func_0x000107c310d0(puVar7,plVar10,&uStack_11c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_d8);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(puVar7);
  puVar8 = puVar7;
  func_0x00010bf52a60();
  if (puVar8 != (undefined8 *)0x0) {
    lVar13 = *plStack_150;
    do {
      puVar14 = (undefined8 *)0x0;
      do {
        if (*plStack_150 != lVar13) {
          _objc_enumerationMutation(puVar7);
        }
        plVar10 = *(long **)(lStack_158 + (long)puVar14 * 8);
        FUN_108c25c58(param_1,plVar10);
        puVar14 = (undefined8 *)((long)puVar14 + 1);
      } while (puVar8 != puVar14);
      puVar8 = puVar7;
      pcVar11 = (code *)&uStack_160;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined8 *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar7);
  uVar9 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar9;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(param_1);
  __Unwind_Resume(uVar9);
  _objc_retain();
  _objc_retain(plVar10);
  (*pcVar11)(uVar9,&bStack_1a1);
  dVar4 = (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
  (*pcVar11)(plVar10,&bStack_1a2);
  uVar12 = 2;
  uVar2 = uVar12;
  if (bStack_1a2 == 0) {
    uVar2 = 0;
  }
  if (bStack_1a1 == 0) {
    uVar2 = 1;
  }
  bVar5 = false;
  bVar6 = false;
  bVar1 = NAN((double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                              )));
  if (!NAN(dVar4) && !bVar1) {
    bVar5 = dVar4 < (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13
                                                  (uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15))))
                                                  )));
    bVar6 = dVar4 == (double)CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,
                                                  CONCAT13(uVar18,CONCAT12(uVar17,CONCAT11(uVar16,
                                                  uVar15)))))));
  }
  if (!bVar6 && bVar5 == (NAN(dVar4) || bVar1)) {
    uVar12 = 1;
  }
  uVar3 = 0;
  if (!bVar5) {
    uVar3 = uVar12;
  }
  uVar12 = uVar2;
  if ((bStack_1a2 & 1) == 0) {
    uVar12 = uVar3;
  }
  if ((bStack_1a1 & 1) == 0) {
    uVar2 = uVar12;
  }
  _objc_release(plVar10);
  _objc_release(uVar9);
  return (ulong)uVar2;
}



/* Entry: 108c26f40; end: 108c26ff3;  */

undefined4 FUN_108c26f40(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108c26ff4; end: 108c27207;  */

void FUN_108c26ff4(long param_1)

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
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
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
  _objc_opt_class(PTR_PTR_1126db300);
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
  FUN_108c2a9c8();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 0;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_110ab8b50;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_FUN_110ab8af0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x000107c310cc(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_110ab8af0;
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
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110ab8b50;
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
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  puVar4 = puVar3;
  func_0x00010bfb1920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c27208; end: 108c272e3;  */

undefined8 * FUN_108c27208(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ab8af0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108c272e4; end: 108c2761b;  */

void FUN_108c272e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  FUN_108c26ff4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)PTR_PTR_1126db300;
    _objc_alloc(PTR_PTR_1126db300);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    FUN_1090216c8(param_2);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056240(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_retain(param_1);
    puVar4 = PTR_PTR_1126db308;
    FUN_108c2aca8(PTR_PTR_1126db308,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  else {
    puVar2 = puVar1;
    func_0x00010c270ce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    while (puVar2 = puVar3, func_0x00010bf529e0(), puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570,
          (undefined8 *)0x9 < puVar2) {
      func_0x00010c12d3c0(puVar3);
    }
    FUN_1090216c8(param_2);
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(puVar4);
    _objc_retain(param_1);
    _objc_retain(puVar3);
    puVar4 = PTR_PTR_1126db308;
    FUN_108c2ae28(PTR_PTR_1126db308,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar4);
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  *puVar2 = &PTR_DAT_110ab8b50;
  plVar6 = (long *)puVar2[0xd];
  puVar2[0xd] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar6 = (long *)puVar2[0xc];
  puVar2[0xc] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  if (puVar2[9] != 0) {
    puVar2[10] = puVar2[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 108c2761c; end: 108c2768b;  */

void FUN_108c2761c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110ab8b50;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c2768c; end: 108c27d47;  */

void FUN_108c2768c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000108c27cec;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108c27d0c;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108c27d0c;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000108c27c80:
                    /* WARNING: Could not recover jumptable at 0x000108c27ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108c27c80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x000108c27d0c;
    }
    goto code_r0x000108c27d00;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108c27d00;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x000108c27d0c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108c27d0c;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_108c27d1c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108c27cec:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108c27d00:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108c27d0c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108c27d1c:
  return;
}



/* Entry: 108c27d48; end: 108c27dcf;  */

void FUN_108c27d48(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c27dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108c27dd0; end: 108c27f03;  */

void FUN_108c27dd0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108c27ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108c27f04; end: 108c27fb3;  */

long FUN_108c27f04(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    lVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar3,param_4);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108c27fb4; end: 108c27fef;  */

undefined8 FUN_108c27fb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_108c27ff0(uVar1,param_1);
  return uVar1;
}



/* Entry: 108c27ff0; end: 108c2819b;  */

void FUN_108c27ff0(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000108c28230(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000108c2819c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_108c280dc:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_108c28330(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_108c280dc;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110ab8b50;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 108c2819c; end: 108c2832f;  */

undefined8 * FUN_108c2819c(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110ab8b50;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c28330; end: 108c283c7;  */

undefined8 * FUN_108c28330(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110ab8b50;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_108c283c8(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 108c283c8; end: 108c2843f;  */

void FUN_108c283c8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_108c28440(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 108c28440; end: 108c2847b;  */

void FUN_108c28440(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_108c28490();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return;
  }
  FUN_108c2847c();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110ab8af0;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 108c2847c; end: 108c2848f;  */

void FUN_108c2847c(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110ab8af0;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 108c28490; end: 108c2852f;  */

void FUN_108c28490(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ab8af0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c28530; end: 108c28beb;  */

void FUN_108c28530(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x000108c28b90;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108c28bb0;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108c28bb0;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x000108c28b24:
                    /* WARNING: Could not recover jumptable at 0x000108c28b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108c28b24;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x000108c28bb0;
    }
    goto code_r0x000108c28ba4;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108c28ba4;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x000108c28bb0;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108c28bb0;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_108c28bc0;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108c28b90:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108c28ba4:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108c28bb0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108c28bc0:
  return;
}



/* Entry: 108c28bec; end: 108c28c73;  */

void FUN_108c28bec(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c28c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108c28c74; end: 108c28da7;  */

void FUN_108c28c74(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108c28d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108c28da8; end: 108c28fb3;  */

uint FUN_108c28da8(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar9 = *(uint *)(param_1 + 8);
  if ((int)uVar9 < 0xe) {
    if (1 < uVar9 - 1) {
      if (uVar9 - 0xc < 2) {
        plVar10 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,param_4);
        puVar2 = *(undefined8 **)(param_1 + 0x48);
        puVar3 = *(undefined8 **)(param_1 + 0x50);
        if (uVar9 == 0xc) {
          if (puVar2 == puVar3) {
            uVar9 = 0;
          }
          else {
            do {
              puVar7 = puVar2 + 1;
              plVar8 = (long *)*puVar2;
              uVar9 = (uint)(plVar10 == plVar8);
              puVar2 = puVar7;
            } while (plVar10 != plVar8 && puVar7 != puVar3);
          }
        }
        else if (puVar2 == puVar3) {
          uVar9 = 1;
        }
        else {
          do {
            puVar7 = puVar2 + 1;
            plVar8 = (long *)*puVar2;
            uVar9 = (uint)(plVar10 != plVar8);
            puVar2 = puVar7;
          } while (plVar10 != plVar8 && puVar7 != puVar3);
        }
        _objc_release(param_3);
        goto LAB_108c28f8c;
      }
      goto LAB_108c28ed8;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar5 = uVar9 != 1;
    bVar4 = bStack_43;
  }
  else {
    if (uVar9 - 0xf < 2) {
      *param_4 = 0;
      uVar9 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_108c28f8c;
    }
    if (uVar9 == 0xe) {
      lVar1 = 0x28;
      lVar6 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar6 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar6,param_4);
      uVar9 = (uint)lVar6;
      goto LAB_108c28f8c;
    }
LAB_108c28ed8:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_108c28f8c;
    }
    plVar10 = *(long **)(param_1 + 0x38);
    plVar8 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_41);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar5 = uVar9 == 0xb;
    bVar4 = plVar10 == plVar8;
  }
  uVar9 = (uint)(bVar5 ^ bVar4);
LAB_108c28f8c:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 108c28fb4; end: 108c2922f;  */

undefined8 * FUN_108c28fb4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_110ab8af0;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_108c283c8(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 3);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_110ab8af0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_110ab8af0;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_108c290dc;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_108c290dc;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_108c290dc:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_110ab8af0;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 108c29230; end: 108c2930b; -[SCPhoneContactsContact initWithPhoneNumberHash:displayName:modificationTimestamp:addressBookEditionTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108c29230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fddb8;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112779058);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779058) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277905c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277905c) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779060) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779064) = param_2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108c2930c; end: 108c2932f; -[SCPhoneContactsContact copyWithZone:] */

undefined8 FUN_108c2930c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108c29330; end: 108c293ff; -[SCPhoneContactsContact hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108c29330(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779058);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277905c);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_112779060) + *(ulong *)(param_1 + _DAT_112779060) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + _DAT_112779064) + *(ulong *)(param_1 + _DAT_112779064) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_40 = uVar3;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_108c29508:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108c29514;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_112779060);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_112779060);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if (bVar1) {
        dVar9 = *(double *)((long)puVar4 + (long)_DAT_112779064);
        dVar10 = *(double *)((long)param_3 + (long)_DAT_112779064);
        dVar11 = ABS(dVar9 - dVar10);
        dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
          bVar1 = dVar11 < dVar9;
        }
        if ((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_112779058),
            lVar6 == *(long *)((long)param_3 + (long)_DAT_112779058) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11277905c);
          if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11277905c)) {
            func_0x00010c071ae0();
            goto LAB_108c29514;
          }
          goto LAB_108c29508;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_108c29514:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 108c29400; end: 108c2952f; -[SCPhoneContactsContact isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c29400(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108c29508:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108c29514;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar5 = *(double *)(param_1 + (long)_DAT_112779060);
      dVar6 = *(double *)(param_3 + (long)_DAT_112779060);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_112779064);
        dVar6 = *(double *)(param_3 + (long)_DAT_112779064);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if ((bVar1) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_112779058),
            lVar4 == *(long *)(param_3 + (long)_DAT_112779058) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_11277905c);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_11277905c)) {
            func_0x00010c071ae0();
            goto LAB_108c29514;
          }
          goto LAB_108c29508;
        }
      }
    }
    lVar4 = 0;
  }
LAB_108c29514:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108c29530; end: 108c2953f; -[SCPhoneContactsContact phoneNumberHash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c29530(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779058);
}



/* Entry: 108c29540; end: 108c2954f; -[SCPhoneContactsContact displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c29540(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277905c);
}



/* Entry: 108c29550; end: 108c2955f; -[SCPhoneContactsContact modificationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c29550(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779060);
}



/* Entry: 108c29560; end: 108c2956f; -[SCPhoneContactsContact addressBookEditionTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c29560(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779064);
}



/* Entry: 108c29570; end: 108c295af; -[SCPhoneContactsContact .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c29570(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277905c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779058,0);
  return;
}



/* Entry: 108c295b0; end: 108c29647; -[SCPhoneContactsTimer initWithType:timestamps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108c295b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fddc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779068) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277906c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277906c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108c29648; end: 108c2966b; -[SCPhoneContactsTimer copyWithZone:] */

undefined8 FUN_108c29648(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108c2966c; end: 108c296e3; -[SCPhoneContactsTimer hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_108c2966c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + _DAT_112779068);
  lStack_28 = -lVar4;
  if (-1 < lVar4) {
    lStack_28 = lVar4;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277906c);
  func_0x00010bfde980();
  plVar2 = &lStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_108c29778;
    plVar5 = plVar2;
    _objc_opt_class(plVar2);
    plVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar3 & 1) == 0) ||
       (*(long *)((long)plVar2 + (long)_DAT_112779068) !=
        *(long *)((long)param_3 + (long)_DAT_112779068))) {
      plVar5 = (long *)0x0;
      goto LAB_108c29778;
    }
    plVar5 = *(long **)((long)plVar2 + (long)_DAT_11277906c);
    if (plVar5 != *(long **)((long)param_3 + (long)_DAT_11277906c)) {
      func_0x00010c071ae0();
      goto LAB_108c29778;
    }
  }
  plVar5 = (long *)0x1;
LAB_108c29778:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 108c296e4; end: 108c29793; -[SCPhoneContactsTimer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c296e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108c29778;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (*(long *)(param_1 + (long)_DAT_112779068) != *(long *)(param_3 + (long)_DAT_112779068))) {
      lVar3 = 0;
      goto LAB_108c29778;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11277906c);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11277906c)) {
      func_0x00010c071ae0();
      goto LAB_108c29778;
    }
  }
  lVar3 = 1;
LAB_108c29778:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108c29794; end: 108c297a3; -[SCPhoneContactsTimer type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c29794(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779068);
}



/* Entry: 108c297a4; end: 108c297b3; -[SCPhoneContactsTimer timestamps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c297a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277906c);
}



/* Entry: 108c297b4; end: 108c297c7; -[SCPhoneContactsTimer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c297b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277906c,0);
  return;
}



/* Entry: 108c297c8; end: 108c2982b;  */

undefined ** FUN_108c297c8(void)

{
  int iVar1;
  
  if ((bRam0000000113828b68 & 1) == 0) {
    iVar1 = 0x13828b68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_1132912a8,0x100000000);
      ___cxa_guard_release(0x113828b68);
    }
  }
  return &PTR_PTR_1132912a8;
}



/* Entry: 108c2982c; end: 108c298b3;  */

void FUN_108c2982c(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c298b4; end: 108c2993f;  */

void FUN_108c298b4(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0fafe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0fafe0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c29940; end: 108c299fb;  */

undefined8 FUN_108c29940(void)

{
  int iVar1;
  
  if ((bRam0000000113828be0 & 1) == 0) {
    iVar1 = 0x13828be0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113828b78 = 0xe;
      puRam0000000113828b80 = &UNK_10f50aebe;
      uRam0000000113828b88 = 0x1010000;
      pcRam0000000113828b90 = FUN_108c299fc;
      pcRam0000000113828b98 = FUN_108c29a30;
      ppuRam0000000113828b70 = &PTR_SUB_11086d7d0;
      uRam0000000113828bb0 = 0;
      uRam0000000113828ba8 = 0;
      uRam0000000113828bc0 = 0;
      uRam0000000113828bb8 = 0;
      uRam0000000113828bd0 = 0;
      uRam0000000113828bc8 = 0;
      uRam0000000113828bd8 = 0;
      ___cxa_atexit(&SUB_105187b98,0x113828b70,0x100000000);
      ___cxa_guard_release(0x113828be0);
    }
  }
  return 0x113828b70;
}



/* Entry: 108c299fc; end: 108c29a2f;  */

undefined8 FUN_108c299fc(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  uVar3 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    uVar3 = *(undefined8 *)((long)piVar1 + uVar2);
  }
  return uVar3;
}



/* Entry: 108c29a30; end: 108c29a8b;  */

undefined8 FUN_108c29a30(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  _objc_retain();
  _objc_retain(param_2);
  *param_3 = 0;
  func_0x00010c0d0340(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c29a8c; end: 108c29a97; +[SCPhoneContactsContact table] */

undefined * FUN_108c29a8c(void)

{
  return &UNK_10f50aed4;
}


