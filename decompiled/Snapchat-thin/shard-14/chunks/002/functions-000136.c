/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b024ed8; end: 10b025013; -[SCCommercePaymentObfuscatedCardDataModel initWithIdentifier:billingAddress:lastFourDigits:expiryMonth:expiryYear:cardBrand:isAuthorized:] */

undefined1 *
FUN_10b024ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1127046d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b025014; end: 10b025037; -[SCCommercePaymentObfuscatedCardDataModel copyWithZone:] */

undefined8 FUN_10b025014(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b025038; end: 10b0250db; -[SCCommercePaymentObfuscatedCardDataModel hash] */

undefined8 * FUN_10b025038(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0251c4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0251d0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
              if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b0251d0;
              }
              goto LAB_10b0251c4;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0251d0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0250dc; end: 10b0251eb; -[SCCommercePaymentObfuscatedCardDataModel isEqual:] */

long FUN_10b0250dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0251c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0251d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
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
                goto LAB_10b0251d0;
              }
              goto LAB_10b0251c4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0251d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0251ec; end: 10b0251f3; -[SCCommercePaymentObfuscatedCardDataModel identifier] */

undefined8 FUN_10b0251ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0251f4; end: 10b0251fb; -[SCCommercePaymentObfuscatedCardDataModel billingAddress] */

undefined8 FUN_10b0251f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0251fc; end: 10b025203; -[SCCommercePaymentObfuscatedCardDataModel lastFourDigits] */

undefined8 FUN_10b0251fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b025204; end: 10b02520b; -[SCCommercePaymentObfuscatedCardDataModel expiryMonth] */

undefined8 FUN_10b025204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b02520c; end: 10b025213; -[SCCommercePaymentObfuscatedCardDataModel expiryYear] */

undefined8 FUN_10b02520c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b025214; end: 10b02521b; -[SCCommercePaymentObfuscatedCardDataModel cardBrand] */

undefined8 FUN_10b025214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b02521c; end: 10b025223; -[SCCommercePaymentObfuscatedCardDataModel isAuthorized] */

undefined1 FUN_10b02521c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b025224; end: 10b025277; -[SCCommercePaymentObfuscatedCardDataModel .cxx_destruct] */

void FUN_10b025224(long param_1)

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



/* Entry: 10b025278; end: 10b0253ab; -[SCCommercePaymentCardDataModel initWithBillingAddress:cardNumber:expiryMonth:expiryYear:cvv:cardBrand:] */

undefined1 *
FUN_10b025278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1127046e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0253ac; end: 10b0253cf; -[SCCommercePaymentCardDataModel copyWithZone:] */

undefined8 FUN_10b0253ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0253d0; end: 10b0253d7; -[SCCommercePaymentCardDataModel billingAddress] */

undefined8 FUN_10b0253d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0253d8; end: 10b0253df; -[SCCommercePaymentCardDataModel cardNumber] */

undefined8 FUN_10b0253d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0253e0; end: 10b0253e7; -[SCCommercePaymentCardDataModel expiryMonth] */

undefined8 FUN_10b0253e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0253e8; end: 10b0253ef; -[SCCommercePaymentCardDataModel expiryYear] */

undefined8 FUN_10b0253e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0253f0; end: 10b0253f7; -[SCCommercePaymentCardDataModel cvv] */

undefined8 FUN_10b0253f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0253f8; end: 10b0253ff; -[SCCommercePaymentCardDataModel cardBrand] */

undefined8 FUN_10b0253f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b025400; end: 10b025453; -[SCCommercePaymentCardDataModel .cxx_destruct] */

void FUN_10b025400(long param_1)

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



/* Entry: 10b025454; end: 10b0255fb; -[SCCommerceAddressDataModel initWithFirstName:lastName:streetAddressLine1:streetAddressLine2:city:state:country:postcode:] */

undefined1 *
FUN_10b025454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1127046e8;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
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



/* Entry: 10b0255fc; end: 10b02561f; -[SCCommerceAddressDataModel copyWithZone:] */

undefined8 FUN_10b0255fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b025620; end: 10b025627; -[SCCommerceAddressDataModel firstName] */

undefined8 FUN_10b025620(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b025628; end: 10b02562f; -[SCCommerceAddressDataModel lastName] */

undefined8 FUN_10b025628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b025630; end: 10b025637; -[SCCommerceAddressDataModel streetAddressLine1] */

undefined8 FUN_10b025630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b025638; end: 10b02563f; -[SCCommerceAddressDataModel streetAddressLine2] */

undefined8 FUN_10b025638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b025640; end: 10b025647; -[SCCommerceAddressDataModel city] */

undefined8 FUN_10b025640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b025648; end: 10b02564f; -[SCCommerceAddressDataModel state] */

undefined8 FUN_10b025648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b025650; end: 10b025657; -[SCCommerceAddressDataModel country] */

undefined8 FUN_10b025650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b025658; end: 10b02565f; -[SCCommerceAddressDataModel postcode] */

undefined8 FUN_10b025658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b025660; end: 10b0256d7; -[SCCommerceAddressDataModel .cxx_destruct] */

void FUN_10b025660(long param_1)

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



/* Entry: 10b0256d8; end: 10b02577b; -[SCCommerceContactDetailsDataModel initWithEmail:phone:] */

undefined1 *
FUN_10b0256d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127046f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b02577c; end: 10b02579f; -[SCCommerceContactDetailsDataModel copyWithZone:] */

undefined8 FUN_10b02577c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0257a0; end: 10b0257a7; -[SCCommerceContactDetailsDataModel email] */

undefined8 FUN_10b0257a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0257a8; end: 10b0257af; -[SCCommerceContactDetailsDataModel phone] */

undefined8 FUN_10b0257a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0257b0; end: 10b0257df; -[SCCommerceContactDetailsDataModel .cxx_destruct] */

void FUN_10b0257b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0257e0; end: 10b025913; -[SCCommerceShippingAddressDataModel initWithAddress:addressId:isDefault:lastUsed:lastUpdated:createdAt:] */

undefined1 *
FUN_10b0257e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127046f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b025914; end: 10b025937; -[SCCommerceShippingAddressDataModel copyWithZone:] */

undefined8 FUN_10b025914(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b025938; end: 10b02593f; -[SCCommerceShippingAddressDataModel address] */

undefined8 FUN_10b025938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b025940; end: 10b025947; -[SCCommerceShippingAddressDataModel addressId] */

undefined8 FUN_10b025940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b025948; end: 10b02594f; -[SCCommerceShippingAddressDataModel isDefault] */

undefined1 FUN_10b025948(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b025950; end: 10b025957; -[SCCommerceShippingAddressDataModel lastUsed] */

undefined8 FUN_10b025950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b025958; end: 10b02595f; -[SCCommerceShippingAddressDataModel lastUpdated] */

undefined8 FUN_10b025958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b025960; end: 10b025967; -[SCCommerceShippingAddressDataModel createdAt] */

undefined8 FUN_10b025960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b025968; end: 10b0259bb; -[SCCommerceShippingAddressDataModel .cxx_destruct] */

void FUN_10b025968(long param_1)

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



/* Entry: 10b0259bc; end: 10b025a5f; -[SCCommerceCurrency initWithCurrency:amount:] */

undefined1 *
FUN_10b0259bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704700;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b025a60; end: 10b025a83; -[SCCommerceCurrency copyWithZone:] */

undefined8 FUN_10b025a60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b025a84; end: 10b025a8b; -[SCCommerceCurrency currency] */

undefined8 FUN_10b025a84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b025a8c; end: 10b025a93; -[SCCommerceCurrency amount] */

undefined8 FUN_10b025a8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b025a94; end: 10b025ac3; -[SCCommerceCurrency .cxx_destruct] */

void FUN_10b025a94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b025ac4; end: 10b025aff; -[SCCSnapEditorPluginSnapDocSendPostProcessContext initWithSnapSessionId:] */

void FUN_10b025ac4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704708;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b025b00; end: 10b025b13; +[SCCSnapEditorPluginSnapDocSendPostProcessContext valdiMarshallableObjectDescriptor] */

void FUN_10b025b00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cad260;
  param_1[1] = &PTR_DAT_110cad2a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025b14; end: 10b025b47; -[SCCSnapEditorPluginSnapEditorPluginDependencies init] */

void FUN_10b025b14(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704710;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b025b48; end: 10b025b6b; +[SCCSnapEditorPluginSnapEditorPluginDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b025b48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cad2b8;
  param_1[1] = &PTR_s_SCCFoundationProvider_110cad690;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025b6c; end: 10b025ba7; -[SCCSnapEditorAttachmentToolAttachmentDependencies initWithSafeBrowsingAPI:urlPreviewProvider:] */

void FUN_10b025b6c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704718;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b025ba8; end: 10b025bc7; +[SCCSnapEditorAttachmentToolAttachmentDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b025ba8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cad7e0;
  param_1[1] = &PTR_DAT_110cad828;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025bc8; end: 10b025c03; -[SCCSnapEditorCameraToolCCDParams initWithCaptureTimestampMs:] */

void FUN_10b025bc8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704720;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b025c04; end: 10b025c1b; +[SCCSnapEditorCameraToolCCDParams valdiMarshallableObjectDescriptor] */

void FUN_10b025c04(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cad840;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025c1c; end: 10b025c3f; -[SCCSnapEditorCameraToolCameraConfig init] */

void FUN_10b025c1c(void)

{
  func_0x00010b025c8c(PTR_PTR_112704728);
  return;
}



/* Entry: 10b025c40; end: 10b025c53; +[SCCSnapEditorCameraToolCameraConfig valdiMarshallableObjectDescriptor] */

void FUN_10b025c40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cad870;
  param_1[1] = &PTR_DAT_110cad8a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025c54; end: 10b025c77; -[SCCSnapEditorCameraToolCameraDependencies init] */

void FUN_10b025c54(void)

{
  func_0x00010b025c8c(PTR_PTR_112704730);
  return;
}



/* Entry: 10b025c78; end: 10b025caf; +[SCCSnapEditorCameraToolCameraDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b025c78(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cad8b0;
  param_1[1] = &PTR_DAT_110cad8e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025cb0; end: 10b025cd3; -[SCCSnapEditorEditToolEditConfig init] */

void FUN_10b025cb0(void)

{
  func_0x00010b025d30(PTR_PTR_112704738);
  return;
}



/* Entry: 10b025cd4; end: 10b025ceb; +[SCCSnapEditorEditToolEditConfig valdiMarshallableObjectDescriptor] */

void FUN_10b025cd4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f198;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025cec; end: 10b025d0f; -[SCCSnapEditorEditToolEditDependencies init] */

void FUN_10b025cec(void)

{
  func_0x00010b025d30(PTR_PTR_112704740);
  return;
}



/* Entry: 10b025d10; end: 10b025d43; +[SCCSnapEditorEditToolEditDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b025d10(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cad8f0;
  param_1[1] = &PTR_DAT_110cad920;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025d44; end: 10b025d7f; -[SCCSnapEditorFramePickerFramePickerDependencies initWithConfirmHandler:] */

void FUN_10b025d44(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704748;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b025d80; end: 10b025d9f; +[SCCSnapEditorFramePickerFramePickerDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b025d80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cad930;
  param_1[1] = &PTR_DAT_110cad978;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025da0; end: 10b025e37; -[SCCSnapEditorMagicEraserMagicEraserAdapter initWithActivateMagicEraser:editingComplete:] */

undefined8 *
FUN_10b025da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_112704750;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b025e38; end: 10b025e5f; +[SCCSnapEditorMagicEraserMagicEraserAdapter valdiMarshallableObjectDescriptor] */

void FUN_10b025e38(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cad9b8;
  param_1[1] = &PTR_DAT_110cada00;
  param_1[2] = &PTR_s_oobo_v_110cad988;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025e60; end: 10b025e8f;  */

undefined8 FUN_10b025e60(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1,param_2[3]);
  return 0;
}



/* Entry: 10b025e90; end: 10b025f0f;  */

void FUN_10b025e90(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b025f64;
  puStack_30 = &UNK_110845480;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b025f10; end: 10b025f43; -[SCCSnapEditorMagicEraserMagicEraserDependencies init] */

void FUN_10b025f10(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704758;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b025f44; end: 10b025f63; +[SCCSnapEditorMagicEraserMagicEraserDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b025f44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cada18;
  param_1[1] = &PTR_DAT_110cada48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025f64; end: 10b025f97;  */

void FUN_10b025f64(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b025f98; end: 10b025fcb; -[SCCSnapEditorMediaImportToolMediaImportConfig init] */

void FUN_10b025f98(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704760;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b025fcc; end: 10b025fe3; +[SCCSnapEditorMediaImportToolMediaImportConfig valdiMarshallableObjectDescriptor] */

void FUN_10b025fcc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e54f1b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b025fe4; end: 10b02604b; -[SCCSnapEditorMediaImportToolMediaImportDependencies initWithGetMedia:] */

undefined8 * FUN_10b025fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_112704768;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b02604c; end: 10b02605f; +[SCCSnapEditorMediaImportToolMediaImportDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b02604c(undefined8 *param_1)

{
  *param_1 = &PTR_s_config_110cada58;
  param_1[1] = &PTR_DAT_110cadab8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026060; end: 10b02609b; -[SCCSnapEditorMediaImportToolMemoriesPickerMedia initWithNativeMedia:] */

void FUN_10b026060(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704770;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b02609c; end: 10b0260bf; +[SCCSnapEditorMediaImportToolMemoriesPickerMedia valdiMarshallableObjectDescriptor] */

void FUN_10b02609c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cadae0;
  param_1[1] = &PTR_DAT_110cadb28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0260c0; end: 10b0260c7; -[SCCSnapEditorPerfectSelfieLifecycleEvent__Enum init] */

void FUN_10b0260c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b0260c8; end: 10b0260cf; -[SCCSnapEditorPerfectSelfieProcessingState__Enum init] */

void FUN_10b0260c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b0260d0; end: 10b02619f; -[SCCSnapEditorPerfectSelfiePerfectSelfieAdapter initWithActivatePerfectSelfie:startPerfectSelfieGeneration:resetPerfectSelfie:] */

undefined8 *
FUN_10b0260d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  _objc_retainBlock();
  func_0x00010b0263f4();
  puStack_48 = PTR_PTR_112704778;
  puVar2 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 10b0261a0; end: 10b0261c7; +[SCCSnapEditorPerfectSelfiePerfectSelfieAdapter valdiMarshallableObjectDescriptor] */

void FUN_10b0261a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cadb80;
  param_1[1] = &PTR_s_SCBridgeObservable_110cadc58;
  param_1[2] = &PTR_s_ob_v_110cadb38;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b0261c8; end: 10b0261ef;  */

undefined8 FUN_10b0261c8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b0261f0; end: 10b02624f;  */

void FUN_10b0261f0(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b0263cc(FUN_10b02636c);
  _objc_retainBlock(&puStack_48);
  func_0x00010b0263e8();
  func_0x00010b0263f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b026250; end: 10b026273;  */

undefined8 FUN_10b026250(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 10b026274; end: 10b0262d3;  */

void FUN_10b026274(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010b0263cc(0x10b026388);
  _objc_retainBlock(&puStack_48);
  func_0x00010b0263e8();
  func_0x00010b0263f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0262d4; end: 10b026307; -[SCCSnapEditorPerfectSelfiePerfectSelfieDependencies init] */

void FUN_10b0262d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704780;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b026308; end: 10b02631b; +[SCCSnapEditorPerfectSelfiePerfectSelfieDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b026308(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_110cadc80;
  param_1[1] = &PTR_DAT_110cadd10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02631c; end: 10b026357; -[SCCSnapEditorPerfectSelfiePerfectSelfieProcessingData initWithState:] */

void FUN_10b02631c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704788;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10b026358; end: 10b02636b; +[SCCSnapEditorPerfectSelfiePerfectSelfieProcessingData valdiMarshallableObjectDescriptor] */

void FUN_10b026358(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cadd20;
  param_1[1] = &PTR_DAT_110cadd50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b02636c; end: 10b0263a3;  */

void FUN_10b02636c(void)

{
  FUN_10b0263a4();
  return;
}



/* Entry: 10b0263a4; end: 10b0263fb;  */

void FUN_10b0263a4(long param_1,ulong param_2)

{
  ulong uStack0000000000000000;
  
  uStack0000000000000000 = param_2 & 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00010b0263b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b0263fc; end: 10b02642f; -[SCCSnapEditorQuickCutToolQuickCutDependencies init] */

void FUN_10b0263fc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704790;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b026430; end: 10b02644f; +[SCCSnapEditorQuickCutToolQuickCutDependencies valdiMarshallableObjectDescriptor] */

void FUN_10b026430(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cadd60;
  param_1[1] = &PTR_DAT_110cadd90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b026450; end: 10b02647f; -[SCCSnapEditorScissorToolCustomStickerPastingProvider initWithCustomStickerPastingObservable:] */

void FUN_10b026450(void)

{
  func_0x00010b026870();
  func_0x00010b026834();
  return;
}



/* Entry: 10b026480; end: 10b026493; +[SCCSnapEditorScissorToolCustomStickerPastingProvider valdiMarshallableObjectDescriptor] */

void FUN_10b026480(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cadda0;
  param_1[1] = &PTR_s_SCBridgeObservable_110caddd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


