/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b01e2f8; end: 10b01e53b; -[SCCommerceCatalogProductLink initWithCoder:] */

undefined8 * FUN_10b01e2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1127045e0;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      uVar3 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar3 == 0) {
        uVar3 = unaff_x21;
        func_0x00010c0720c0();
        if ((int)uVar3 == 0) goto LAB_10b01e4c8;
        uVar3 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puVar1[4];
        puVar1[4] = uVar3;
        _objc_release(uVar4);
        uVar3 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puVar1[5];
        puVar1[5] = uVar3;
        _objc_release(uVar4);
        uVar3 = param_3;
        func_0x00010bf66f40();
        puVar1[6] = uVar3;
        uVar3 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puVar1[7];
        puVar1[7] = uVar3;
        _objc_release(uVar4);
        uVar3 = 2;
      }
      else {
        uVar3 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puVar1[3];
        puVar1[3] = uVar3;
        _objc_release(uVar4);
        uVar3 = 1;
      }
    }
    else {
      uVar4 = param_3;
      func_0x00010bf66f00();
      uVar3 = 0;
      puVar1[2] = uVar4;
    }
    puVar1[1] = uVar3;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b01e4c8:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b01e53c; end: 10b01e55f; -[SCCommerceCatalogProductLink copyWithZone:] */

undefined8 FUN_10b01e53c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01e560; end: 10b01e64b; -[SCCommerceCatalogProductLink encodeWithCoder:] */

void FUN_10b01e560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110f4c838);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_110f4c858);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                        &PTR____CFConstantStringClassReference_110f4c878);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                        &PTR____CFConstantStringClassReference_110f4c898);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f4c818;
  }
  else if (lVar2 == 1) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110f4c7f8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f4c7d8;
  }
  else {
    if (lVar2 != 0) goto LAB_10b01e63c;
    func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110f4c7b8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f4c798;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b01e63c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01e64c; end: 10b01e6e3; -[SCCommerceCatalogProductLink hash] */

void FUN_10b01e64c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1127045e0;
  puStack_90 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01e6e4; end: 10b01e727; -[SCCommerceCatalogProductLink internalInit] */

void FUN_10b01e6e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127045e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01e728; end: 10b01e82f; -[SCCommerceCatalogProductLink isEqual:] */

long FUN_10b01e728(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01e808:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01e814;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if (lVar3 != *(long *)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_10b01e814;
            }
            goto LAB_10b01e808;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01e814:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01e830; end: 10b01e8e7; -[SCCommerceCatalogProductLink matchNativePDP:internalWebview:externalApp:] */

void FUN_10b01e830(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_10b01e8c4;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 0) || (param_3 == 0)) goto LAB_10b01e8c4;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_10b01e8c4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01e8e8; end: 10b01e92f; -[SCCommerceCatalogProductLink .cxx_destruct] */

void FUN_10b01e8e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b01e930; end: 10b01e9c7; +[SCCommerceProductCTAAction deeplinkWithDeeplinkPath:appId:] */

void FUN_10b01e930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126be300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01e9c8; end: 10b01ea33; +[SCCommerceProductCTAAction externalWebsiteWithDeeplinkPath:] */

void FUN_10b01e9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01ea34; end: 10b01ea97; +[SCCommerceProductCTAAction internalWebsiteWithDeeplinkPath:] */

void FUN_10b01ea34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01ea98; end: 10b01eb03; +[SCCommerceProductCTAAction nativeCheckoutWithStoreMetadata:] */

void FUN_10b01ea98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126be300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b01eb04; end: 10b01eb27; -[SCCommerceProductCTAAction copyWithZone:] */

undefined8 FUN_10b01eb04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01eb28; end: 10b01ebc3; -[SCCommerceProductCTAAction hash] */

void FUN_10b01eb28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1127045e8;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01ebc4; end: 10b01ec07; -[SCCommerceProductCTAAction internalInit] */

void FUN_10b01ebc4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127045e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b01ec08; end: 10b01ed07; -[SCCommerceProductCTAAction isEqual:] */

long FUN_10b01ec08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01ece0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01ecec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b01ecec;
              }
              goto LAB_10b01ece0;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01ecec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01ed08; end: 10b01edfb; -[SCCommerceProductCTAAction matchInternalWebsite:externalWebsite:nativeCheckout:deeplink:] */

void FUN_10b01ed08(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_10b01edcc;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10b01edcc;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else {
    if (lVar2 != 2) {
      if ((lVar2 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))
                  (param_6,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      }
      goto LAB_10b01edcc;
    }
    if (param_5 == 0) goto LAB_10b01edcc;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b01edcc:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01edfc; end: 10b01ee4f; -[SCCommerceProductCTAAction .cxx_destruct] */

void FUN_10b01edfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b01ee50; end: 10b01ef77; -[SCGalleryPrintSnap initWithCoder:] */

undefined1 * FUN_10b01ee50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127045f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01ef78; end: 10b01f09b; -[SCGalleryPrintSnap initWithSnapId:key:IV:thumbnail:printUrl:] */

undefined1 *
FUN_10b01ef78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127045f0;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01f09c; end: 10b01f0bf; -[SCGalleryPrintSnap copyWithZone:] */

undefined8 FUN_10b01f09c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01f0c0; end: 10b01f15b; -[SCGalleryPrintSnap encodeWithCoder:] */

void FUN_10b01f0c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e2dbb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e8a338);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ebd518);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f4c8b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b01f15c; end: 10b01f1f3; -[SCGalleryPrintSnap hash] */

undefined8 * FUN_10b01f15c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b01f2bc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b01f2c8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10b01f2c8;
              }
              goto LAB_10b01f2bc;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b01f2c8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b01f1f4; end: 10b01f2e3; -[SCGalleryPrintSnap isEqual:] */

long FUN_10b01f1f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01f2bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01f2c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10b01f2c8;
              }
              goto LAB_10b01f2bc;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01f2c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01f2e4; end: 10b01f2eb; -[SCGalleryPrintSnap snapId] */

undefined8 FUN_10b01f2e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b01f2ec; end: 10b01f2f3; -[SCGalleryPrintSnap key] */

undefined8 FUN_10b01f2ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01f2f4; end: 10b01f2fb; -[SCGalleryPrintSnap IV] */

undefined8 FUN_10b01f2f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01f2fc; end: 10b01f303; -[SCGalleryPrintSnap thumbnail] */

undefined8 FUN_10b01f2fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01f304; end: 10b01f30b; -[SCGalleryPrintSnap printUrl] */

undefined8 FUN_10b01f304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b01f30c; end: 10b01f35f; -[SCGalleryPrintSnap .cxx_destruct] */

void FUN_10b01f30c(long param_1)

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



/* Entry: 10b01f360; end: 10b01f483; -[SCCommerceBitmojiLineItemInfo initWithBitmojiAvatarIds:comicId:assetId:userIds:tintColor:] */

undefined1 *
FUN_10b01f360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127045f8;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01f484; end: 10b01f4a7; -[SCCommerceBitmojiLineItemInfo copyWithZone:] */

undefined8 FUN_10b01f484(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01f4a8; end: 10b01f4af; -[SCCommerceBitmojiLineItemInfo bitmojiAvatarIds] */

undefined8 FUN_10b01f4a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b01f4b0; end: 10b01f4b7; -[SCCommerceBitmojiLineItemInfo comicId] */

undefined8 FUN_10b01f4b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01f4b8; end: 10b01f4bf; -[SCCommerceBitmojiLineItemInfo assetId] */

undefined8 FUN_10b01f4b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01f4c0; end: 10b01f4c7; -[SCCommerceBitmojiLineItemInfo userIds] */

undefined8 FUN_10b01f4c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01f4c8; end: 10b01f4cf; -[SCCommerceBitmojiLineItemInfo tintColor] */

undefined8 FUN_10b01f4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b01f4d0; end: 10b01f523; -[SCCommerceBitmojiLineItemInfo .cxx_destruct] */

void FUN_10b01f4d0(long param_1)

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



/* Entry: 10b01f524; end: 10b01f5cf; -[SCCommerceItemVariant initWithVariantItemId:available:variantValues:] */

undefined1 *
FUN_10b01f524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704600;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b01f5d0; end: 10b01f5f3; -[SCCommerceItemVariant copyWithZone:] */

undefined8 FUN_10b01f5d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01f5f4; end: 10b01f66b; -[SCCommerceItemVariant hash] */

undefined8 * FUN_10b01f5f4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b01f6fc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b01f708;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b01f708;
        }
        goto LAB_10b01f6fc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b01f708:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b01f66c; end: 10b01f723; -[SCCommerceItemVariant isEqual:] */

long FUN_10b01f66c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01f6fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01f708;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b01f708;
        }
        goto LAB_10b01f6fc;
      }
    }
    lVar3 = 0;
  }
LAB_10b01f708:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01f724; end: 10b01f72b; -[SCCommerceItemVariant variantItemId] */

undefined8 FUN_10b01f724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01f72c; end: 10b01f733; -[SCCommerceItemVariant available] */

undefined1 FUN_10b01f72c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b01f734; end: 10b01f73b; -[SCCommerceItemVariant variantValues] */

undefined8 FUN_10b01f734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01f73c; end: 10b01f76b; -[SCCommerceItemVariant .cxx_destruct] */

void FUN_10b01f73c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b01f76c; end: 10b01f937; -[SCCommerceProductVariant initWithVariantId:pixelId:title:price:strikethroughPrice:available:requiresShipping:taxable:variantCategoryMap:imageList:images:] */

undefined8 *
FUN_10b01f76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_112704608;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_9._1_1_;
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b01f938; end: 10b01f95b; -[SCCommerceProductVariant copyWithZone:] */

undefined8 FUN_10b01f938(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b01f95c; end: 10b01fa27; -[SCCommerceProductVariant hash] */

undefined8 * FUN_10b01f95c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b01fb68:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b01fb74;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_10b01fb74;
                    }
                    goto LAB_10b01fb68;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b01fb74:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b01fa28; end: 10b01fb8f; -[SCCommerceProductVariant isEqual:] */

long FUN_10b01fa28(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b01fb68:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b01fb74;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_10b01fb74;
                    }
                    goto LAB_10b01fb68;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b01fb74:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b01fb90; end: 10b01fb97; -[SCCommerceProductVariant variantId] */

undefined8 FUN_10b01fb90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b01fb98; end: 10b01fb9f; -[SCCommerceProductVariant pixelId] */

undefined8 FUN_10b01fb98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b01fba0; end: 10b01fba7; -[SCCommerceProductVariant title] */

undefined8 FUN_10b01fba0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b01fba8; end: 10b01fbaf; -[SCCommerceProductVariant price] */

undefined8 FUN_10b01fba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b01fbb0; end: 10b01fbb7; -[SCCommerceProductVariant strikethroughPrice] */

undefined8 FUN_10b01fbb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b01fbb8; end: 10b01fbbf; -[SCCommerceProductVariant available] */

undefined1 FUN_10b01fbb8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b01fbc0; end: 10b01fbc7; -[SCCommerceProductVariant requiresShipping] */

undefined1 FUN_10b01fbc0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b01fbc8; end: 10b01fbcf; -[SCCommerceProductVariant taxable] */

undefined1 FUN_10b01fbc8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b01fbd0; end: 10b01fbd7; -[SCCommerceProductVariant variantCategoryMap] */

undefined8 FUN_10b01fbd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b01fbd8; end: 10b01fbdf; -[SCCommerceProductVariant imageList] */

undefined8 FUN_10b01fbd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b01fbe0; end: 10b01fbe7; -[SCCommerceProductVariant images] */

undefined8 FUN_10b01fbe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b01fbe8; end: 10b01fc5f; -[SCCommerceProductVariant .cxx_destruct] */

void FUN_10b01fbe8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10b01fc60; end: 10b0200db; -[SCCommerceProductInfo initWithProductId:storeId:title:descriptionHTML:iconUrl:partner:checkoutItemLimit:images:variants:isShareable:actionLink:ctaAction:merchantInfo:productColors:brand:arMetadata:shoppingAttachment:trackingId:customBitmojiInfo:imageDetailsList:productVariantCategories:storeInfo:isNativeCheckoutEligible:adRenderData:] */

undefined8 *
FUN_10b01fc60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
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
  _objc_retain(param_28);
  puStack_70 = PTR_PTR_112704610;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar1[8] = param_9;
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_12;
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_26;
    _objc_retain(param_28);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_28;
    _objc_release(uVar2);
  }
  _objc_release(param_28);
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
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b0200dc; end: 10b0200ff; -[SCCommerceProductInfo copyWithZone:] */

undefined8 FUN_10b0200dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b020100; end: 10b020263; -[SCCommerceProductInfo hash] */

undefined8 * FUN_10b020100(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
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
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uStack_b8 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uStack_a0 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_e8;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b0204dc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0204e8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[8] == param_3[8] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[9];
                  if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[10];
                    if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[0xb];
                      if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0xc];
                        if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xd];
                          if ((lVar5 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xe];
                            if ((lVar5 == param_3[0xe]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              lVar5 = puVar3[0xf];
                              if ((lVar5 == param_3[0xf]) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = puVar3[0x10];
                                if ((lVar5 == param_3[0x10]) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = puVar3[0x11];
                                  if ((lVar5 == param_3[0x11]) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = puVar3[0x12];
                                    if ((lVar5 == param_3[0x12]) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = puVar3[0x13];
                                      if ((lVar5 == param_3[0x13]) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        lVar5 = puVar3[0x14];
                                        if ((lVar5 == param_3[0x14]) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = puVar3[0x15];
                                          if ((lVar5 == param_3[0x15]) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = puVar3[0x16];
                                            if ((lVar5 == param_3[0x16]) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              puVar6 = (undefined8 *)puVar3[0x17];
                                              if (puVar6 != (undefined8 *)param_3[0x17]) {
                                                func_0x00010c071ae0();
                                                goto LAB_10b0204e8;
                                              }
                                              goto LAB_10b0204dc;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0204e8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b020264; end: 10b020503; -[SCCommerceProductInfo isEqual:] */

long FUN_10b020264(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0204dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0204e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x70);
                            if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x78);
                              if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x80);
                                if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x88);
                                  if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0x90);
                                    if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0x98);
                                      if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0xa0);
                                        if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xa8);
                                          if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xb0);
                                            if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xb8);
                                              if (lVar3 != *(long *)(param_3 + 0xb8)) {
                                                func_0x00010c071ae0();
                                                goto LAB_10b0204e8;
                                              }
                                              goto LAB_10b0204dc;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0204e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b020504; end: 10b02050b; -[SCCommerceProductInfo productId] */

undefined8 FUN_10b020504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b02050c; end: 10b020513; -[SCCommerceProductInfo storeId] */

undefined8 FUN_10b02050c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b020514; end: 10b02051b; -[SCCommerceProductInfo title] */

undefined8 FUN_10b020514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b02051c; end: 10b020523; -[SCCommerceProductInfo descriptionHTML] */

undefined8 FUN_10b02051c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b020524; end: 10b02052b; -[SCCommerceProductInfo iconUrl] */

undefined8 FUN_10b020524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b02052c; end: 10b020533; -[SCCommerceProductInfo partner] */

undefined8 FUN_10b02052c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b020534; end: 10b02053b; -[SCCommerceProductInfo checkoutItemLimit] */

undefined8 FUN_10b020534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b02053c; end: 10b020543; -[SCCommerceProductInfo images] */

undefined8 FUN_10b02053c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b020544; end: 10b02054b; -[SCCommerceProductInfo variants] */

undefined8 FUN_10b020544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b02054c; end: 10b020553; -[SCCommerceProductInfo isShareable] */

undefined1 FUN_10b02054c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b020554; end: 10b02055b; -[SCCommerceProductInfo actionLink] */

undefined8 FUN_10b020554(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b02055c; end: 10b020563; -[SCCommerceProductInfo ctaAction] */

undefined8 FUN_10b02055c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b020564; end: 10b02056b; -[SCCommerceProductInfo merchantInfo] */

undefined8 FUN_10b020564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b02056c; end: 10b020573; -[SCCommerceProductInfo productColors] */

undefined8 FUN_10b02056c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b020574; end: 10b02057b; -[SCCommerceProductInfo brand] */

undefined8 FUN_10b020574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b02057c; end: 10b020583; -[SCCommerceProductInfo arMetadata] */

undefined8 FUN_10b02057c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b020584; end: 10b02058b; -[SCCommerceProductInfo shoppingAttachment] */

undefined8 FUN_10b020584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b02058c; end: 10b020593; -[SCCommerceProductInfo trackingId] */

undefined8 FUN_10b02058c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b020594; end: 10b02059b; -[SCCommerceProductInfo customBitmojiInfo] */

undefined8 FUN_10b020594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b02059c; end: 10b0205a3; -[SCCommerceProductInfo imageDetailsList] */

undefined8 FUN_10b02059c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b0205a4; end: 10b0205ab; -[SCCommerceProductInfo productVariantCategories] */

undefined8 FUN_10b0205a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b0205ac; end: 10b0205b3; -[SCCommerceProductInfo storeInfo] */

undefined8 FUN_10b0205ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b0205b4; end: 10b0205bb; -[SCCommerceProductInfo isNativeCheckoutEligible] */

undefined1 FUN_10b0205b4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b0205bc; end: 10b0205c3; -[SCCommerceProductInfo adRenderData] */

undefined8 FUN_10b0205bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b0205c4; end: 10b0206d7; -[SCCommerceProductInfo .cxx_destruct] */

void FUN_10b0205c4(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10b0206d8; end: 10b0207d3; -[SCCommerceProductARMetadata initWithIfmUrl:makeupProperties:glassesProperties:renderingMetadata:] */

undefined1 *
FUN_10b0206d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112704618;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0207d4; end: 10b0207f7; -[SCCommerceProductARMetadata copyWithZone:] */

undefined8 FUN_10b0207d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0207f8; end: 10b0207ff; -[SCCommerceProductARMetadata ifmUrl] */

undefined8 FUN_10b0207f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b020800; end: 10b020807; -[SCCommerceProductARMetadata makeupProperties] */

undefined8 FUN_10b020800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b020808; end: 10b02080f; -[SCCommerceProductARMetadata glassesProperties] */

undefined8 FUN_10b020808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b020810; end: 10b020817; -[SCCommerceProductARMetadata renderingMetadata] */

undefined8 FUN_10b020810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b020818; end: 10b02085f; -[SCCommerceProductARMetadata .cxx_destruct] */

void FUN_10b020818(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b020860; end: 10b0208bb; +[SCCommerceProductShoppingAttachment organicAttachmentWithProductId:] */

void FUN_10b020860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7f08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0208bc; end: 10b02091f; +[SCCommerceProductShoppingAttachment sponsoredAttachmentWithAdRenderDataBytes:] */

void FUN_10b0208bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7f08;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


