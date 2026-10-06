/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afa76b8; end: 10afa76bf; -[SCRegistrationSuccess hash] */

void FUN_10afa76b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10afa76c0; end: 10afa774f; -[SCRegistrationSuccess isEqual:] */

long FUN_10afa76c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa7734;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10afa7734;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afa7734;
    }
  }
  lVar3 = 1;
LAB_10afa7734:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa7750; end: 10afa7757; -[SCRegistrationSuccess bootstrapData] */

undefined8 FUN_10afa7750(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa7758; end: 10afa7763; -[SCRegistrationSuccess .cxx_destruct] */

void FUN_10afa7758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afa7764; end: 10afa7863; -[SCPhoneCountryCode initWithCoder:] */

undefined1 * FUN_10afa7764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703720;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afa7864; end: 10afa796f; -[SCPhoneCountryCode initWithCountryFullName:countryNameAbbreviation:countryCodeNumber:suggestedCountryRanking:] */

undefined1 *
FUN_10afa7864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703720;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afa7970; end: 10afa7993; -[SCPhoneCountryCode copyWithZone:] */

undefined8 FUN_10afa7970(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa7994; end: 10afa7a1b; -[SCPhoneCountryCode encodeWithCoder:] */

void FUN_10afa7994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f40c58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f40c78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f40c98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f40cb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afa7a1c; end: 10afa7aa7; -[SCPhoneCountryCode hash] */

undefined8 * FUN_10afa7a1c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afa7b58:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afa7b64;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10afa7b64;
            }
            goto LAB_10afa7b58;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afa7b64:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afa7aa8; end: 10afa7b7f; -[SCPhoneCountryCode isEqual:] */

long FUN_10afa7aa8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa7b58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa7b64;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10afa7b64;
            }
            goto LAB_10afa7b58;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afa7b64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa7b80; end: 10afa7b87; -[SCPhoneCountryCode countryFullName] */

undefined8 FUN_10afa7b80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa7b88; end: 10afa7b8f; -[SCPhoneCountryCode countryNameAbbreviation] */

undefined8 FUN_10afa7b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa7b90; end: 10afa7b97; -[SCPhoneCountryCode countryCodeNumber] */

undefined8 FUN_10afa7b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa7b98; end: 10afa7b9f; -[SCPhoneCountryCode suggestedCountryRanking] */

undefined8 FUN_10afa7b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afa7ba0; end: 10afa7be7; -[SCPhoneCountryCode .cxx_destruct] */

void FUN_10afa7ba0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afa7be8; end: 10afa7c0b;  */

undefined8 FUN_10afa7be8(long param_1)

{
  if (param_1 - 1U < 0x1b) {
    return *(undefined8 *)(&UNK_10e53f850 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 10afa7c0c; end: 10afa7c13; -[SCBitmojiMetricsServices eventLogger] */

undefined8 FUN_10afa7c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa7c14; end: 10afa7c1b; -[SCBitmojiMetricsServices webBuilderLogger] */

undefined8 FUN_10afa7c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa7c1c; end: 10afa7c23; -[SCBitmojiMetricsServices fashionSharingLogger] */

undefined8 FUN_10afa7c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa7c24; end: 10afa7c2b; -[SCBitmojiMetricsServices customojiLogger] */

undefined8 FUN_10afa7c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afa7c2c; end: 10afa7c73; -[SCBitmojiMetricsServices .cxx_destruct] */

void FUN_10afa7c2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afa7c74; end: 10afa7c7b; -[SCLensCarouselLensInjectionServices lensFetchObserver] */

undefined8 FUN_10afa7c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa7c7c; end: 10afa7cab; -[SCLensCarouselLensInjectionServices .cxx_destruct] */

void FUN_10afa7c7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afa7cac; end: 10afa7dd7; -[SCLensInjectionConfiguration initWithLenses:preselectedLens:unlockUsedLenses:activationSource:lensCarouselUIConfiguration:activateOnViewWillAppear:preferredLensSessionBaseId:] */

undefined1 *
FUN_10afa7cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112703738;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afa7dd8; end: 10afa7dfb; -[SCLensInjectionConfiguration copyWithZone:] */

undefined8 FUN_10afa7dd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa7dfc; end: 10afa7e93; -[SCLensInjectionConfiguration hash] */

undefined8 * FUN_10afa7dfc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afa7f74:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afa7f80;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)((long)puVar3 + 9) == param_3[9])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
            if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10afa7f80;
            }
            goto LAB_10afa7f74;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afa7f80:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afa7e94; end: 10afa7f9b; -[SCLensInjectionConfiguration isEqual:] */

long FUN_10afa7e94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa7f74:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa7f80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10afa7f80;
            }
            goto LAB_10afa7f74;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afa7f80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa7f9c; end: 10afa7fa3; -[SCLensInjectionConfiguration lenses] */

undefined8 FUN_10afa7f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa7fa4; end: 10afa7fab; -[SCLensInjectionConfiguration preselectedLens] */

undefined8 FUN_10afa7fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa7fac; end: 10afa7fb3; -[SCLensInjectionConfiguration unlockUsedLenses] */

undefined1 FUN_10afa7fac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afa7fb4; end: 10afa7fbb; -[SCLensInjectionConfiguration activationSource] */

undefined8 FUN_10afa7fb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afa7fbc; end: 10afa7fc3; -[SCLensInjectionConfiguration lensCarouselUIConfiguration] */

undefined8 FUN_10afa7fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afa7fc4; end: 10afa7fcb; -[SCLensInjectionConfiguration activateOnViewWillAppear] */

undefined1 FUN_10afa7fc4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afa7fcc; end: 10afa7fd3; -[SCLensInjectionConfiguration preferredLensSessionBaseId] */

undefined8 FUN_10afa7fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afa7fd4; end: 10afa801b; -[SCLensInjectionConfiguration .cxx_destruct] */

void FUN_10afa7fd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afa801c; end: 10afa8037; +[SCLensInjectionConfigurationBuilder lensInjectionConfiguration] */

void FUN_10afa801c(void)

{
  _objc_alloc_init(PTR_PTR_1126df288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa8038; end: 10afa8217; +[SCLensInjectionConfigurationBuilder lensInjectionConfigurationFromExistingLensInjectionConfiguration:] */

void FUN_10afa8038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar1 = PTR_PTR_1126df288;
  _objc_retain(param_3);
  func_0x00010c094b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2da0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c10aa40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b5ba0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c280e60(param_3);
  puVar7 = puVar5;
  func_0x00010c2bbe40(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bef0340(param_3);
  puVar8 = puVar7;
  func_0x00010c2a7680(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c091280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b26e0(puVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010beefe20(param_3);
  puVar11 = puVar9;
  func_0x00010c2a7640(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c106d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar12 = puVar11;
  func_0x00010c2b5a40(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10afa8218; end: 10afa8263; -[SCLensInjectionConfigurationBuilder build] */

void FUN_10afa8218(void)

{
  _objc_alloc(PTR_PTR_1126b5b58);
  func_0x00010c025e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa8264; end: 10afa829b; -[SCLensInjectionConfigurationBuilder withLenses:] */

long FUN_10afa8264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afa829c; end: 10afa82d3; -[SCLensInjectionConfigurationBuilder withPreselectedLens:] */

long FUN_10afa829c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afa82d4; end: 10afa82db; -[SCLensInjectionConfigurationBuilder withUnlockUsedLenses:] */

void FUN_10afa82d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10afa82dc; end: 10afa82e3; -[SCLensInjectionConfigurationBuilder withActivationSource:] */

void FUN_10afa82dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10afa82e4; end: 10afa831b; -[SCLensInjectionConfigurationBuilder withLensCarouselUIConfiguration:] */

long FUN_10afa82e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afa831c; end: 10afa8323; -[SCLensInjectionConfigurationBuilder withActivateOnViewWillAppear:] */

void FUN_10afa831c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10afa8324; end: 10afa835b; -[SCLensInjectionConfigurationBuilder withPreferredLensSessionBaseId:] */

long FUN_10afa8324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afa835c; end: 10afa83a3; -[SCLensInjectionConfigurationBuilder .cxx_destruct] */

void FUN_10afa835c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afa83a4; end: 10afa840f; +[SCLensInjectionFetchResult allLensesFetchFailedWithError:] */

void FUN_10afa83a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ddca8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afa8410; end: 10afa84a7; +[SCLensInjectionFetchResult lensFetchFailedWithLens:error:] */

void FUN_10afa8410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ddca8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afa84a8; end: 10afa850b; +[SCLensInjectionFetchResult lensFetchedWithLens:] */

void FUN_10afa84a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ddca8;
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



/* Entry: 10afa850c; end: 10afa852f; -[SCLensInjectionFetchResult copyWithZone:] */

undefined8 FUN_10afa850c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa8530; end: 10afa85bf; -[SCLensInjectionFetchResult hash] */

void FUN_10afa8530(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112703740;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa85c0; end: 10afa8603; -[SCLensInjectionFetchResult internalInit] */

void FUN_10afa85c0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703740;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa8604; end: 10afa86eb; -[SCLensInjectionFetchResult isEqual:] */

long FUN_10afa8604(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa86c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa86d0;
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
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10afa86d0;
            }
            goto LAB_10afa86c4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afa86d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa86ec; end: 10afa879f; -[SCLensInjectionFetchResult matchLensFetched:lensFetchFailed:allLensesFetchFailed:] */

void FUN_10afa86ec(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10afa877c;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_10afa877c;
    }
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_10afa877c;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10afa877c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afa87a0; end: 10afa87e7; -[SCLensInjectionFetchResult .cxx_destruct] */

void FUN_10afa87a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afa87e8; end: 10afa87ef; -[SCObjcMusicServices selectionLoader] */

undefined8 FUN_10afa87e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa87f0; end: 10afa87f7; -[SCObjcMusicServices experiments] */

undefined8 FUN_10afa87f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa87f8; end: 10afa87ff; -[SCObjcMusicServices featureSettings] */

undefined8 FUN_10afa87f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afa8800; end: 10afa8807; -[SCObjcMusicServices notificationPresenterFactory] */

undefined8 FUN_10afa8800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afa8808; end: 10afa885b; -[SCObjcMusicServices .cxx_destruct] */

void FUN_10afa8808(long param_1)

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



/* Entry: 10afa885c; end: 10afa8907; -[SCMusicNotificationInfo initWithRemoteMedia:placeholderImage:] */

undefined1 *
FUN_10afa885c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703750;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afa8908; end: 10afa892b; -[SCMusicNotificationInfo copyWithZone:] */

undefined8 FUN_10afa8908(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa892c; end: 10afa899f; -[SCMusicNotificationInfo hash] */

undefined8 * FUN_10afa892c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afa8a20:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afa8a2c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10afa8a2c;
        }
        goto LAB_10afa8a20;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afa8a2c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afa89a0; end: 10afa8a47; -[SCMusicNotificationInfo isEqual:] */

long FUN_10afa89a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa8a20:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa8a2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10afa8a2c;
        }
        goto LAB_10afa8a20;
      }
    }
    lVar3 = 0;
  }
LAB_10afa8a2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa8a48; end: 10afa8a4f; -[SCMusicNotificationInfo remoteMedia] */

undefined8 FUN_10afa8a48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa8a50; end: 10afa8a57; -[SCMusicNotificationInfo placeholderImage] */

undefined8 FUN_10afa8a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa8a58; end: 10afa8a87; -[SCMusicNotificationInfo .cxx_destruct] */

void FUN_10afa8a58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afa8a88; end: 10afa8c1f; -[SCMusicPickerSelection initWithSelection:trackInfo:albumArtInfo:ctContext:subtextInfo:matchedTrackId:artistPublicProfileId:] */

undefined1 *
FUN_10afa8a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112703758;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10afa8c20; end: 10afa8c43; -[SCMusicPickerSelection copyWithZone:] */

undefined8 FUN_10afa8c20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa8c44; end: 10afa8cf3; -[SCMusicPickerSelection hash] */

undefined8 * FUN_10afa8c44(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afa8dec:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afa8df8;
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
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10afa8df8;
                  }
                  goto LAB_10afa8dec;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afa8df8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afa8cf4; end: 10afa8e13; -[SCMusicPickerSelection isEqual:] */

long FUN_10afa8cf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa8dec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa8df8;
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
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if (lVar3 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10afa8df8;
                  }
                  goto LAB_10afa8dec;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afa8df8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa8e14; end: 10afa8e1b; -[SCMusicPickerSelection selection] */

undefined8 FUN_10afa8e14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa8e1c; end: 10afa8e23; -[SCMusicPickerSelection trackInfo] */

undefined8 FUN_10afa8e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa8e24; end: 10afa8e2b; -[SCMusicPickerSelection albumArtInfo] */

undefined8 FUN_10afa8e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa8e2c; end: 10afa8e33; -[SCMusicPickerSelection ctContext] */

undefined8 FUN_10afa8e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afa8e34; end: 10afa8e3b; -[SCMusicPickerSelection subtextInfo] */

undefined8 FUN_10afa8e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afa8e3c; end: 10afa8e43; -[SCMusicPickerSelection matchedTrackId] */

undefined8 FUN_10afa8e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afa8e44; end: 10afa8e4b; -[SCMusicPickerSelection artistPublicProfileId] */

undefined8 FUN_10afa8e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afa8e4c; end: 10afa8eb7; -[SCMusicPickerSelection .cxx_destruct] */

void FUN_10afa8e4c(long param_1)

{
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



/* Entry: 10afa8eb8; end: 10afa9043; -[SCMusicSelection initWithTrackId:audioData:audioStartOffset:encodedContentRestrictions:permanentRemoteAudioData:loggingInfo:externalServiceURL:editCapabilities:] */

undefined1 *
FUN_10afa8eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112703760;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_5[1];
    uVar3 = *param_5;
    *(undefined8 *)((long)puVar1 + 0x50) = param_5[2];
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
    uVar3 = param_6;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_7;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_8;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_9;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_10;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afa9044; end: 10afa9067; -[SCMusicSelection copyWithZone:] */

undefined8 FUN_10afa9044(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa9068; end: 10afa9127; -[SCMusicSelection hash] */

undefined8 * FUN_10afa9068(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = (ulong)*(uint *)(param_1 + 0x4c);
  lStack_68 = (long)*(int *)(param_1 + 0x48);
  uStack_58 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afa9254:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afa9258;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      uStack_c8 = *(undefined8 *)((long)puVar3 + 0x48);
      uStack_d0 = *(undefined8 *)((long)puVar3 + 0x40);
      uStack_c0 = *(undefined8 *)((long)puVar3 + 0x50);
      uStack_e8 = *(undefined8 *)(param_3 + 0x48);
      uStack_f0 = *(undefined8 *)(param_3 + 0x40);
      uStack_e0 = *(undefined8 *)(param_3 + 0x50);
      puVar5 = &uStack_d0;
      _CMTimeCompare(puVar5,&uStack_f0);
      if ((int)puVar5 == 0) {
        lVar6 = *(long *)((long)puVar3 + 0x10);
        if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar3 + 0x18);
          if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar3 + 0x20);
            if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar3 + 0x28);
              if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                lVar6 = *(long *)((long)puVar3 + 0x30);
                if ((lVar6 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar6 != 0)
                   ) {
                  puVar7 = *(undefined1 **)((long)puVar3 + 0x38);
                  if (puVar7 != *(undefined1 **)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10afa9258;
                  }
                  goto LAB_10afa9254;
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10afa9258:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10afa9128; end: 10afa9277; -[SCMusicSelection isEqual:] */

long FUN_10afa9128(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afa9254:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa9258;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      uStack_48 = *(undefined8 *)(param_1 + 0x48);
      uStack_50 = *(undefined8 *)(param_1 + 0x40);
      uStack_40 = *(undefined8 *)(param_1 + 0x50);
      uStack_68 = *(undefined8 *)(param_3 + 0x48);
      uStack_70 = *(undefined8 *)(param_3 + 0x40);
      uStack_60 = *(undefined8 *)(param_3 + 0x50);
      puVar3 = &uStack_50;
      _CMTimeCompare(puVar3,&uStack_70);
      if ((int)puVar3 == 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = *(long *)(param_1 + 0x18);
          if ((lVar4 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)(param_1 + 0x20);
            if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
              lVar4 = *(long *)(param_1 + 0x28);
              if ((lVar4 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar4 != 0))
              {
                lVar4 = *(long *)(param_1 + 0x30);
                if ((lVar4 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar4 != 0)
                   ) {
                  lVar4 = *(long *)(param_1 + 0x38);
                  if (lVar4 != *(long *)(param_3 + 0x38)) {
                    func_0x00010c071ae0();
                    goto LAB_10afa9258;
                  }
                  goto LAB_10afa9254;
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10afa9258:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afa9278; end: 10afa927f; -[SCMusicSelection trackId] */

undefined8 FUN_10afa9278(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa9280; end: 10afa9287; -[SCMusicSelection audioData] */

undefined8 FUN_10afa9280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa9288; end: 10afa929b; -[SCMusicSelection audioStartOffset] */

void FUN_10afa9288(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x50);
  return;
}



/* Entry: 10afa929c; end: 10afa92a3; -[SCMusicSelection encodedContentRestrictions] */

undefined8 FUN_10afa929c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afa92a4; end: 10afa92ab; -[SCMusicSelection permanentRemoteAudioData] */

undefined8 FUN_10afa92a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afa92ac; end: 10afa92b3; -[SCMusicSelection loggingInfo] */

undefined8 FUN_10afa92ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afa92b4; end: 10afa92bb; -[SCMusicSelection externalServiceURL] */

undefined8 FUN_10afa92b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afa92bc; end: 10afa92c3; -[SCMusicSelection editCapabilities] */

undefined8 FUN_10afa92bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afa92c4; end: 10afa9323; -[SCMusicSelection .cxx_destruct] */

void FUN_10afa92c4(long param_1)

{
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



/* Entry: 10afa9324; end: 10afa93ab; -[SCMusicSelectionLoggingInfo initWithSourcePageType:pickerSessionId:] */

undefined1 *
FUN_10afa9324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703768;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afa93ac; end: 10afa93cf; -[SCMusicSelectionLoggingInfo copyWithZone:] */

undefined8 FUN_10afa93ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afa93d0; end: 10afa9437; -[SCMusicSelectionLoggingInfo hash] */

long * FUN_10afa93d0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10afa94bc;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10afa94bc;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10afa94bc;
    }
  }
  plVar5 = (long *)0x1;
LAB_10afa94bc:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10afa9438; end: 10afa94d7; -[SCMusicSelectionLoggingInfo isEqual:] */

long FUN_10afa9438(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afa94bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10afa94bc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afa94bc;
    }
  }
  lVar3 = 1;
LAB_10afa94bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afa94d8; end: 10afa94df; -[SCMusicSelectionLoggingInfo sourcePageType] */

undefined8 FUN_10afa94d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afa94e0; end: 10afa94e7; -[SCMusicSelectionLoggingInfo pickerSessionId] */

undefined8 FUN_10afa94e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afa94e8; end: 10afa94f3; -[SCMusicSelectionLoggingInfo .cxx_destruct] */

void FUN_10afa94e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afa94f4; end: 10afa9593; -[SCMusicEditorSelection initWithPickerSelection:stickerType:context:segmentDuration:] */

undefined1 *
FUN_10afa94f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112703770;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}


