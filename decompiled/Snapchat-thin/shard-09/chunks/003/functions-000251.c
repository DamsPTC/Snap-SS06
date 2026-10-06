/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c7f6c8; end: 106c7f743;  */

undefined * FUN_106c7f6c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c76a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7fc18,
                        &UNK_10ddebb08,&UNK_10ddebb4c,3,FUN_106c7f744,0);
    do {
      if (puRam00000001136c76a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c76a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c76a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c76a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c76a0;
}



/* Entry: 106c7f744; end: 106c7f74f;  */

bool FUN_106c7f744(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106c7f750; end: 106c7f7cb;  */

undefined * FUN_106c7f750(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c76a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e7fc38,
                        &UNK_10ddebb58,&UNK_10ddebb94,3,FUN_106c7f7cc,0);
    do {
      if (puRam00000001136c76a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c76a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c76a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c76a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c76a8;
}



/* Entry: 106c7f7cc; end: 106c7f7d7;  */

bool FUN_106c7f7cc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106c7f7d8; end: 106c7f83f; +[SCSubscriptionShopPbGetSocialProofRequest descriptor] */

void FUN_106c7f7d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b0a0,
                        &PTR____CFConstantStringClassReference_110e7fc58,&PTR_DAT_11317ecf0,0,0,4,
                        0x1c);
    puRam00000001136c76b0 = puVar1;
  }
  return;
}



/* Entry: 106c7f840; end: 106c7f8a7; +[SCSubscriptionShopPbGetSocialProofResponse descriptor] */

void FUN_106c7f840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b0f0,
                        &PTR____CFConstantStringClassReference_110e7fc78,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317ed08,1,0x10,0x1c);
    puRam00000001136c76b8 = puVar1;
  }
  return;
}



/* Entry: 106c7f8a8; end: 106c7f90f; +[SCSubscriptionShopPbGetReferralUserInfoRequest descriptor] */

void FUN_106c7f8a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b140,
                        &PTR____CFConstantStringClassReference_110e7fc98,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317ed28,1,0x10,0x1c);
    puRam00000001136c76c0 = puVar1;
  }
  return;
}



/* Entry: 106c7f910; end: 106c7f98b; +[SCSubscriptionShopPbGetReferralUserInfoResponse descriptor] */

undefined * FUN_106c7f910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b190,
                        &PTR____CFConstantStringClassReference_110e7fcb8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f428,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c76c8 = puVar1;
  }
  return puRam00000001136c76c8;
}



/* Entry: 106c7f98c; end: 106c7f9f3; +[SCSubscriptionShopPbGetReferralTokenRequest descriptor] */

void FUN_106c7f98c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b1e0,
                        &PTR____CFConstantStringClassReference_110e7fcd8,&PTR_DAT_11317ecf0,0,0,4,
                        0x1c);
    puRam00000001136c76d0 = puVar1;
  }
  return;
}



/* Entry: 106c7f9f4; end: 106c7fa5b; +[SCSubscriptionShopPbGetReferralTokenResponse descriptor] */

void FUN_106c7f9f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b230,
                        &PTR____CFConstantStringClassReference_110e7fcf8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317eea8,2,0x10,0x1c);
    puRam00000001136c76d8 = puVar1;
  }
  return;
}



/* Entry: 106c7fa5c; end: 106c7fac3; +[SCSubscriptionShopPbGetGoogleSubscriptionPlansRequest descriptor] */

void FUN_106c7fa5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b280,
                        &PTR____CFConstantStringClassReference_110e7fd18,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317eee8,2,0x18,0x1c);
    puRam00000001136c76e0 = puVar1;
  }
  return;
}



/* Entry: 106c7fac4; end: 106c7fb2f; +[SCSubscriptionShopPbGetGoogleSubscriptionPlansResponse descriptor] */

void FUN_106c7fac4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b2d0,
                        &PTR____CFConstantStringClassReference_110e7fd38,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_113180248,6,0x38,0x1c);
    puRam00000001136c76e8 = puVar1;
  }
  return;
}



/* Entry: 106c7fb30; end: 106c7fb97; +[SCSubscriptionShopPbGoogleSubscriptionPlanV2 descriptor] */

void FUN_106c7fb30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b320,
                        &PTR____CFConstantStringClassReference_110e7fd58,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317ef28,2,0x10,0x1c);
    puRam00000001136c76f0 = puVar1;
  }
  return;
}



/* Entry: 106c7fb98; end: 106c7fbff; +[SCSubscriptionShopPbGoogleSubscriptionPlan descriptor] */

void FUN_106c7fb98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c76f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b370,
                        &PTR____CFConstantStringClassReference_110e7fd78,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317ef68,2,0x10,0x1c);
    puRam00000001136c76f8 = puVar1;
  }
  return;
}



/* Entry: 106c7fc00; end: 106c7fc67; +[SCSubscriptionShopPbGetAppleSubscriptionPlansRequest descriptor] */

void FUN_106c7fc00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b3c0,
                        &PTR____CFConstantStringClassReference_110e7fd98,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f908,4,0x20,0x1c);
    puRam00000001136c7700 = puVar1;
  }
  return;
}



/* Entry: 106c7fc68; end: 106c7fccf; +[SCSubscriptionShopPbGetAppleSubscriptionPlansResponse descriptor] */

void FUN_106c7fc68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b410,
                        &PTR____CFConstantStringClassReference_110e7fdb8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f988,4,0x28,0x1c);
    puRam00000001136c7708 = puVar1;
  }
  return;
}



/* Entry: 106c7fcd0; end: 106c7fd37; +[SCSubscriptionShopPbAppleSubscriptionPlan descriptor] */

void FUN_106c7fcd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b460,
                        &PTR____CFConstantStringClassReference_110e7fdd8,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_11317f488,3,0x18,0x1c);
    puRam00000001136c7710 = puVar1;
  }
  return;
}



/* Entry: 106c7fd38; end: 106c7fda3; +[SCSubscriptionShopPbApplePromotionalOffer descriptor] */

void FUN_106c7fd38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b4b0,
                        &PTR____CFConstantStringClassReference_110e7fdf8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317fe88,5,0x30,0x1c);
    puRam00000001136c7718 = puVar1;
  }
  return;
}



/* Entry: 106c7fda4; end: 106c7fe0f; +[SCSubscriptionShopPbGetSnapSubscriptionPlansRequest descriptor] */

void FUN_106c7fda4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b500,
                        &PTR____CFConstantStringClassReference_110e7fe18,&PTR_DAT_11317ecf0,
                        &PTR_s_userId_11317ff28,5,0x30,0x1c);
    puRam00000001136c7720 = puVar1;
  }
  return;
}



/* Entry: 106c7fe10; end: 106c7fe77; +[SCSubscriptionShopPbGetSnapSubscriptionPlansResponse descriptor] */

void FUN_106c7fe10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b550,
                        &PTR____CFConstantStringClassReference_110e7fe38,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317efa8,2,0x10,0x1c);
    puRam00000001136c7728 = puVar1;
  }
  return;
}



/* Entry: 106c7fe78; end: 106c7fee3; +[SCSubscriptionShopPbSnapSubscriptionPlan descriptor] */

void FUN_106c7fe78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b5a0,
                        &PTR____CFConstantStringClassReference_110e7fe58,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_113180908,0xc,0x60,0x1c);
    puRam00000001136c7730 = puVar1;
  }
  return;
}



/* Entry: 106c7fee4; end: 106c7ff4b; +[SCSubscriptionShopPbFinancialInstruction descriptor] */

void FUN_106c7fee4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b5f0,
                        &PTR____CFConstantStringClassReference_110e7fe78,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317efe8,2,0x10,0x1c);
    puRam00000001136c7738 = puVar1;
  }
  return;
}



/* Entry: 106c7ff4c; end: 106c7ffb3; +[SCSubscriptionShopPbPaymentMethodInfo descriptor] */

void FUN_106c7ff4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b640,
                        &PTR____CFConstantStringClassReference_110e7fe98,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f028,2,0x10,0x1c);
    puRam00000001136c7740 = puVar1;
  }
  return;
}



/* Entry: 106c7ffb4; end: 106c8001b; +[SCSubscriptionShopPbSubscribeRequest descriptor] */

void FUN_106c7ffb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b690,
                        &PTR____CFConstantStringClassReference_110e7feb8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317fa08,4,0x28,0x1c);
    puRam00000001136c7748 = puVar1;
  }
  return;
}



/* Entry: 106c8001c; end: 106c80083; +[SCSubscriptionShopPbMockPurchaseParams descriptor] */

void FUN_106c8001c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b6e0,
                        &PTR____CFConstantStringClassReference_110e7fed8,&PTR_DAT_11317ecf0,
                        &PTR_s_enabled_11317f4e8,3,0x18,0x1c);
    puRam00000001136c7750 = puVar1;
  }
  return;
}



/* Entry: 106c80084; end: 106c800eb; +[SCSubscriptionShopPbSubscribeResponse descriptor] */

void FUN_106c80084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b730,
                        &PTR____CFConstantStringClassReference_110e7fef8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f548,3,0x10,0x1c);
    puRam00000001136c7758 = puVar1;
  }
  return;
}



/* Entry: 106c800ec; end: 106c8016b; +[SCSubscriptionShopPbInAppReceipt descriptor] */

undefined * FUN_106c800ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b780,
                        &PTR____CFConstantStringClassReference_110e0d778,&PTR_DAT_11317ecf0,
                        &PTR_s_provider_11317ffc8,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c7760 = puVar1;
  }
  return puRam00000001136c7760;
}



/* Entry: 106c8016c; end: 106c801d3; +[SCSubscriptionShopPbWebSubscribeRequest descriptor] */

void FUN_106c8016c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b7d0,
                        &PTR____CFConstantStringClassReference_110e7ff18,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f5a8,3,0x20,0x1c);
    puRam00000001136c7768 = puVar1;
  }
  return;
}



/* Entry: 106c801d4; end: 106c8023b; +[SCSubscriptionShopPbWebSubscribeResponse descriptor] */

void FUN_106c801d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b820,
                        &PTR____CFConstantStringClassReference_110e7ff38,&PTR_DAT_11317ecf0,
                        &PTR_s_status_11317f608,3,0x10,0x1c);
    puRam00000001136c7770 = puVar1;
  }
  return;
}



/* Entry: 106c8023c; end: 106c802a3; +[SCSubscriptionShopPbWebRedeemGiftCardRequest descriptor] */

void FUN_106c8023c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b870,
                        &PTR____CFConstantStringClassReference_110e7ff58,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f668,3,0x20,0x1c);
    puRam00000001136c7778 = puVar1;
  }
  return;
}



/* Entry: 106c802a4; end: 106c8030b; +[SCSubscriptionShopPbWebRedeemGiftCardResponse descriptor] */

void FUN_106c802a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b8c0,
                        &PTR____CFConstantStringClassReference_110e7ff78,&PTR_DAT_11317ecf0,
                        &PTR_s_error_11317ed48,1,8,0x1c);
    puRam00000001136c7780 = puVar1;
  }
  return;
}



/* Entry: 106c8030c; end: 106c80373; +[SCSubscriptionShopPbWebGetCurrentSubscriptionRequest descriptor] */

void FUN_106c8030c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b910,
                        &PTR____CFConstantStringClassReference_110e7ff98,&PTR_DAT_11317ecf0,0,0,4,
                        0x1c);
    puRam00000001136c7788 = puVar1;
  }
  return;
}



/* Entry: 106c80374; end: 106c803db; +[SCSubscriptionShopPbWebGetCurrentSubscriptionResponse descriptor] */

void FUN_106c80374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b960,
                        &PTR____CFConstantStringClassReference_110e7ffb8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317ed68,1,0x10,0x1c);
    puRam00000001136c7790 = puVar1;
  }
  return;
}



/* Entry: 106c803dc; end: 106c80443; +[SCSubscriptionShopPbWebPlanChangeRequest descriptor] */

void FUN_106c803dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2b9b0,
                        &PTR____CFConstantStringClassReference_110e7ffd8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f6c8,3,0x20,0x1c);
    puRam00000001136c7798 = puVar1;
  }
  return;
}



/* Entry: 106c80444; end: 106c804ab; +[SCSubscriptionShopPbWebPlanChangeResponse descriptor] */

void FUN_106c80444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2ba00,
                        &PTR____CFConstantStringClassReference_110e7fff8,&PTR_DAT_11317ecf0,
                        &PTR_s_status_11317f068,2,0xc,0x1c);
    puRam00000001136c77a0 = puVar1;
  }
  return;
}



/* Entry: 106c804ac; end: 106c80517; +[SCSubscriptionShopPbInhouseOffer descriptor] */

void FUN_106c804ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2ba50,
                        &PTR____CFConstantStringClassReference_110e80018,&PTR_DAT_11317ecf0,
                        &PTR_DAT_113180068,5,0x28,0x1c);
    puRam00000001136c77a8 = puVar1;
  }
  return;
}



/* Entry: 106c80518; end: 106c80583; +[SCSubscriptionShopPbInhousePlan descriptor] */

void FUN_106c80518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2baa0,
                        &PTR____CFConstantStringClassReference_110e80038,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_113180488,8,0x38,0x1c);
    puRam00000001136c77b0 = puVar1;
  }
  return;
}



/* Entry: 106c80584; end: 106c805eb; +[SCSubscriptionShopPbWebGetInhouseFinalProductsRequest descriptor] */

void FUN_106c80584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2baf0,
                        &PTR____CFConstantStringClassReference_110e80058,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f728,3,0x18,0x1c);
    puRam00000001136c77b8 = puVar1;
  }
  return;
}



/* Entry: 106c805ec; end: 106c80653; +[SCSubscriptionShopPbWebGetInhouseFinalProductsResponse descriptor] */

void FUN_106c805ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bb40,
                        &PTR____CFConstantStringClassReference_110e80078,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f788,3,0x18,0x1c);
    puRam00000001136c77c0 = puVar1;
  }
  return;
}



/* Entry: 106c80654; end: 106c806bb; +[SCSubscriptionShopPbWebGetSignedCheckoutBundleRequest descriptor] */

void FUN_106c80654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bb90,
                        &PTR____CFConstantStringClassReference_110e80098,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_11317fa88,4,0x20,0x1c);
    puRam00000001136c77c8 = puVar1;
  }
  return;
}



/* Entry: 106c806bc; end: 106c80727; +[SCSubscriptionShopPbInhouseCheckoutDetails descriptor] */

void FUN_106c806bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bbe0,
                        &PTR____CFConstantStringClassReference_110e800b8,&PTR_DAT_11317ecf0,
                        &PTR_s_action_113180588,9,0x48,0x1c);
    puRam00000001136c77d0 = puVar1;
  }
  return;
}



/* Entry: 106c80728; end: 106c8078f; +[SCSubscriptionShopPbWebGetSignedCheckoutBundleResponse descriptor] */

void FUN_106c80728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bc30,
                        &PTR____CFConstantStringClassReference_110e800d8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317fb08,4,0x20,0x1c);
    puRam00000001136c77d8 = puVar1;
  }
  return;
}



/* Entry: 106c80790; end: 106c807fb; +[SCSubscriptionShopPbSubscription descriptor] */

void FUN_106c80790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bc80,
                        &PTR____CFConstantStringClassReference_110e800f8,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_1131806a8,9,0x38,0x1c);
    puRam00000001136c77e0 = puVar1;
  }
  return;
}



/* Entry: 106c807fc; end: 106c80863; +[SCSubscriptionShopPbWebRedeemPromoCodeRequest descriptor] */

void FUN_106c807fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bcd0,
                        &PTR____CFConstantStringClassReference_110e80118,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317ed88,1,0x10,0x1c);
    puRam00000001136c77e8 = puVar1;
  }
  return;
}



/* Entry: 106c80864; end: 106c808df; +[SCSubscriptionShopPbWebRedeemPromoCodeResponse descriptor] */

undefined * FUN_106c80864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bd20,
                        &PTR____CFConstantStringClassReference_110e80138,&PTR_DAT_11317ecf0,
                        &PTR_s_status_11317f7e8,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c77f0 = puVar1;
  }
  return puRam00000001136c77f0;
}



/* Entry: 106c808e0; end: 106c80947; +[SCSubscriptionShopPbGetExternalUserIDRequest descriptor] */

void FUN_106c808e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c77f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bd70,
                        &PTR____CFConstantStringClassReference_110e80158,&PTR_DAT_11317ecf0,
                        &PTR_s_provider_11317f848,3,0x18,0x1c);
    puRam00000001136c77f8 = puVar1;
  }
  return;
}



/* Entry: 106c80948; end: 106c809af; +[SCSubscriptionShopPbGetExternalUserIDResponse descriptor] */

void FUN_106c80948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bdc0,
                        &PTR____CFConstantStringClassReference_110e80178,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f0a8,2,0x10,0x1c);
    puRam00000001136c7800 = puVar1;
  }
  return;
}



/* Entry: 106c809b0; end: 106c80a17; +[SCSubscriptionShopPbCheckPurchaseTokenRequest descriptor] */

void FUN_106c809b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2be10,
                        &PTR____CFConstantStringClassReference_110e80198,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317eda8,1,0x10,0x1c);
    puRam00000001136c7808 = puVar1;
  }
  return;
}



/* Entry: 106c80a18; end: 106c80a7f; +[SCSubscriptionShopPbCheckPurchaseTokenResponse descriptor] */

void FUN_106c80a18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2be60,
                        &PTR____CFConstantStringClassReference_110e801b8,&PTR_DAT_11317ecf0,
                        &PTR_s_status_11317edc8,1,8,0x1c);
    puRam00000001136c7810 = puVar1;
  }
  return;
}



/* Entry: 106c80a80; end: 106c80aeb; +[SCSubscriptionShopPbPostSubscriptionPlanDetailsRequest descriptor] */

void FUN_106c80a80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2beb0,
                        &PTR____CFConstantStringClassReference_110e801d8,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_113180108,5,0x30,0x1c);
    puRam00000001136c7818 = puVar1;
  }
  return;
}



/* Entry: 106c80aec; end: 106c80b53; +[SCSubscriptionShopPbPricePhase descriptor] */

void FUN_106c80aec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7820 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bf00,
                        &PTR____CFConstantStringClassReference_110e801f8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317fb88,4,0x28,0x1c);
    puRam00000001136c7820 = puVar1;
  }
  return;
}



/* Entry: 106c80b54; end: 106c80bbb; +[SCSubscriptionShopPbPostSubscriptionPlanDetailsResponse descriptor] */

void FUN_106c80b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bf50,
                        &PTR____CFConstantStringClassReference_110e80218,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317ede8,1,0x10,0x1c);
    puRam00000001136c7828 = puVar1;
  }
  return;
}



/* Entry: 106c80bbc; end: 106c80c27; +[SCSubscriptionShopPbAppleProductInfo descriptor] */

void FUN_106c80bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bfa0,
                        &PTR____CFConstantStringClassReference_110e80238,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_113180308,6,0x38,0x1c);
    puRam00000001136c7830 = puVar1;
  }
  return;
}



/* Entry: 106c80c28; end: 106c80ca3; +[SCSubscriptionShopPbAppleProductInfo_SubscriptionPeriod descriptor] */

undefined * FUN_106c80c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2bff0,
                        &PTR____CFConstantStringClassReference_110e80258,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f0e8,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001136c7838 = puVar1;
  }
  return puRam00000001136c7838;
}



/* Entry: 106c80ca4; end: 106c80d0f; +[SCSubscriptionShopPbUserSubscriptionStateChange descriptor] */

void FUN_106c80ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c040,
                        &PTR____CFConstantStringClassReference_110e80278,&PTR_DAT_11317ecf0,
                        &PTR_s_userId_1131807c8,10,0x48,0x1c);
    puRam00000001136c7840 = puVar1;
  }
  return;
}



/* Entry: 106c80d10; end: 106c80d77; +[SCSubscriptionShopPbGetSubscriptionProviderRequest descriptor] */

void FUN_106c80d10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c090,
                        &PTR____CFConstantStringClassReference_110e80298,&PTR_DAT_11317ecf0,0,0,4,
                        0x1c);
    puRam00000001136c7848 = puVar1;
  }
  return;
}



/* Entry: 106c80d78; end: 106c80df3; +[SCSubscriptionShopPbGetSubscriptionProviderResponse descriptor] */

undefined * FUN_106c80d78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c0e0,
                        &PTR____CFConstantStringClassReference_110e802b8,&PTR_DAT_11317ecf0,
                        &PTR_s_provider_11317f128,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c7850 = puVar1;
  }
  return puRam00000001136c7850;
}



/* Entry: 106c80df4; end: 106c80e5b; +[SCSubscriptionShopPbGetGiftPlansRequest descriptor] */

void FUN_106c80df4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c130,
                        &PTR____CFConstantStringClassReference_110e802d8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f168,2,0x18,0x1c);
    puRam00000001136c7858 = puVar1;
  }
  return;
}



/* Entry: 106c80e5c; end: 106c80ec3; +[SCSubscriptionShopPbGetGiftPlansResponse descriptor] */

void FUN_106c80e5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c180,
                        &PTR____CFConstantStringClassReference_110e802f8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f8a8,3,0x20,0x1c);
    puRam00000001136c7860 = puVar1;
  }
  return;
}



/* Entry: 106c80ec4; end: 106c80f2b; +[SCSubscriptionShopPbGiftPlan descriptor] */

void FUN_106c80ec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c1d0,
                        &PTR____CFConstantStringClassReference_110e80318,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_11317f1a8,2,0x18,0x1c);
    puRam00000001136c7868 = puVar1;
  }
  return;
}



/* Entry: 106c80f2c; end: 106c80f97; +[SCSubscriptionShopPbPurchaseGiftRequest descriptor] */

void FUN_106c80f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c220,
                        &PTR____CFConstantStringClassReference_110e80338,&PTR_DAT_11317ecf0,
                        &PTR_DAT_1131801a8,5,0x30,0x1c);
    puRam00000001136c7870 = puVar1;
  }
  return;
}



/* Entry: 106c80f98; end: 106c80fff; +[SCSubscriptionShopPbPurchaseGiftResponse descriptor] */

void FUN_106c80f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c270,
                        &PTR____CFConstantStringClassReference_110e80358,&PTR_DAT_11317ecf0,0,0,4,
                        0x1c);
    puRam00000001136c7878 = puVar1;
  }
  return;
}



/* Entry: 106c81000; end: 106c81067; +[SCSubscriptionShopPbListGiftRequest descriptor] */

void FUN_106c81000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c2c0,
                        &PTR____CFConstantStringClassReference_110e80378,&PTR_DAT_11317ecf0,0,0,4,
                        0x1c);
    puRam00000001136c7880 = puVar1;
  }
  return;
}



/* Entry: 106c81068; end: 106c810cf; +[SCSubscriptionShopPbListGiftResponse descriptor] */

void FUN_106c81068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c310,
                        &PTR____CFConstantStringClassReference_110e80398,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f1e8,2,0x18,0x1c);
    puRam00000001136c7888 = puVar1;
  }
  return;
}



/* Entry: 106c810d0; end: 106c8113b; +[SCSubscriptionShopPbGift descriptor] */

void FUN_106c810d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c360,
                        &PTR____CFConstantStringClassReference_110e803b8,&PTR_DAT_11317ecf0,
                        &PTR_s_id_p_1131803c8,6,0x38,0x1c);
    puRam00000001136c7890 = puVar1;
  }
  return;
}



/* Entry: 106c8113c; end: 106c811a3; +[SCSubscriptionShopPbRedeemGiftRequest descriptor] */

void FUN_106c8113c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c3b0,
                        &PTR____CFConstantStringClassReference_110e803d8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f228,2,0x10,0x1c);
    puRam00000001136c7898 = puVar1;
  }
  return;
}



/* Entry: 106c811a4; end: 106c8120b; +[SCSubscriptionShopPbRedeemGiftResponse descriptor] */

void FUN_106c811a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c978,
                        &PTR____CFConstantStringClassReference_110e803f8,&PTR_DAT_11317ecf0,
                        &PTR_s_error_11317f268,2,0x10,0x1c);
    puRam00000001136c78a0 = puVar1;
  }
  return;
}



/* Entry: 106c8120c; end: 106c8128f; +[SCSubscriptionShopPbRedeemGiftResponse_ApplePromotionalOfferRedeemAction descriptor] */

undefined * FUN_106c8120c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c9a0,
                        &PTR____CFConstantStringClassReference_110e80418,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_11317f2a8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c78a8 = puVar1;
  }
  return puRam00000001136c78a8;
}



/* Entry: 106c81290; end: 106c812f7; +[SCSubscriptionShopPbConsumeSubscriptionRequest descriptor] */

void FUN_106c81290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c450,
                        &PTR____CFConstantStringClassReference_110e80438,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f2e8,2,0x18,0x1c);
    puRam00000001136c78b0 = puVar1;
  }
  return;
}



/* Entry: 106c812f8; end: 106c8135f; +[SCSubscriptionShopPbConsumeSubscriptionResponse descriptor] */

void FUN_106c812f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c4a0,
                        &PTR____CFConstantStringClassReference_110e80458,&PTR_DAT_11317ecf0,
                        &PTR_s_error_11317ee08,1,8,0x1c);
    puRam00000001136c78b8 = puVar1;
  }
  return;
}



/* Entry: 106c81360; end: 106c813c7; +[SCSubscriptionShopPbBangoActivateRequest descriptor] */

void FUN_106c81360(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c4f0,
                        &PTR____CFConstantStringClassReference_110e80478,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f328,2,0x18,0x1c);
    puRam00000001136c78c0 = puVar1;
  }
  return;
}



/* Entry: 106c813c8; end: 106c8142f; +[SCSubscriptionShopPbBangoActivateResponse descriptor] */

void FUN_106c813c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c540,
                        &PTR____CFConstantStringClassReference_110e80498,&PTR_DAT_11317ecf0,
                        &PTR_s_error_11317ee28,1,8,0x1c);
    puRam00000001136c78c8 = puVar1;
  }
  return;
}



/* Entry: 106c81430; end: 106c81497; +[SCSubscriptionShopPbPromotionalOfferIdentifier descriptor] */

void FUN_106c81430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c590,
                        &PTR____CFConstantStringClassReference_110e804b8,&PTR_DAT_11317ecf0,
                        &PTR_s_productId_11317f368,2,0x18,0x1c);
    puRam00000001136c78d0 = puVar1;
  }
  return;
}



/* Entry: 106c81498; end: 106c814ff; +[SCSubscriptionShopPbGetApplePromotionalOffersRequest descriptor] */

void FUN_106c81498(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c5e0,
                        &PTR____CFConstantStringClassReference_110e804d8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317ee48,1,0x10,0x1c);
    puRam00000001136c78d8 = puVar1;
  }
  return;
}



/* Entry: 106c81500; end: 106c81567; +[SCSubscriptionShopPbGetApplePromotionalOffersResponse descriptor] */

void FUN_106c81500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c630,
                        &PTR____CFConstantStringClassReference_110e804f8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317ee68,1,0x10,0x1c);
    puRam00000001136c78e0 = puVar1;
  }
  return;
}



/* Entry: 106c81568; end: 106c815e3; +[SCSubscriptionShopPbGetApplePromotionalOffersResponse_PromotionalOfferResult descriptor] */

undefined * FUN_106c81568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c680,
                        &PTR____CFConstantStringClassReference_110e80518,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f3a8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c78e8 = puVar1;
  }
  return puRam00000001136c78e8;
}



/* Entry: 106c815e4; end: 106c8164b; +[SCSubscriptionShopPbSetSubscriptionForTestingRequest descriptor] */

void FUN_106c815e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c6d0,
                        &PTR____CFConstantStringClassReference_110e80538,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317fc08,4,0x18,0x1c);
    puRam00000001136c78f0 = puVar1;
  }
  return;
}



/* Entry: 106c8164c; end: 106c816b3; +[SCSubscriptionShopPbSetSubscriptionForTestingResponse descriptor] */

void FUN_106c8164c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c78f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c720,
                        &PTR____CFConstantStringClassReference_110e80558,&PTR_DAT_11317ecf0,0,0,4,
                        0x1c);
    puRam00000001136c78f8 = puVar1;
  }
  return;
}



/* Entry: 106c816b4; end: 106c8171f; +[SCSubscriptionShopPbSetEntitySubscriptionForTestingRequest descriptor] */

void FUN_106c816b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7900 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c770,
                        &PTR____CFConstantStringClassReference_110e80578,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317fc88,4,0x20,0x1c);
    puRam00000001136c7900 = puVar1;
  }
  return;
}



/* Entry: 106c81720; end: 106c81787; +[SCSubscriptionShopPbSetEntitySubscriptionForTestingResponse descriptor] */

void FUN_106c81720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7908 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c7c0,
                        &PTR____CFConstantStringClassReference_110e80598,&PTR_DAT_11317ecf0,0,0,4,
                        0x1c);
    puRam00000001136c7908 = puVar1;
  }
  return;
}



/* Entry: 106c81788; end: 106c817ef; +[SCSubscriptionShopPbGetReferralPlanRequest descriptor] */

void FUN_106c81788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7910 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c810,
                        &PTR____CFConstantStringClassReference_110e805b8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317f3e8,2,0x10,0x1c);
    puRam00000001136c7910 = puVar1;
  }
  return;
}



/* Entry: 106c817f0; end: 106c8187f; +[SCSubscriptionShopPbGetReferralPlanResponse descriptor] */

undefined * FUN_106c817f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7918 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c860,
                        &PTR____CFConstantStringClassReference_110e805d8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317fd08,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c7918 = puVar1;
  }
  return puRam00000001136c7918;
}



/* Entry: 106c81880; end: 106c818eb; +[SCSubscriptionShopPbOrderInfo descriptor] */

void FUN_106c81880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7920 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c8b0,
                        &PTR____CFConstantStringClassReference_110e805f8,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317fd88,4,0x28,0x1c);
    puRam00000001136c7920 = puVar1;
  }
  return;
}



/* Entry: 106c818ec; end: 106c81957; +[SCSubscriptionShopPbPurchaseProductRequest descriptor] */

void FUN_106c818ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7928 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c900,
                        &PTR____CFConstantStringClassReference_110e80618,&PTR_DAT_11317ecf0,
                        &PTR_DAT_11317fe08,4,0x28,0x1c);
    puRam00000001136c7928 = puVar1;
  }
  return;
}



/* Entry: 106c81958; end: 106c81a3b; +[SCSubscriptionShopPbPurchaseProductResponse descriptor] */

void FUN_106c81958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7930 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2c950,
                        &PTR____CFConstantStringClassReference_110e80638,&PTR_DAT_11317ecf0,
                        &PTR_s_status_11317ee88,1,8,0x1c);
    puRam00000001136c7930 = puVar1;
  }
  return;
}



/* Entry: 106c81a3c; end: 106c81a47;  */

bool FUN_106c81a3c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106c81a48; end: 106c81ac3;  */

undefined * FUN_106c81a48(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7940 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e80678,
                        &UNK_10ddebc50,&UNK_10ddebc88,4,FUN_106c81ac4,0);
    do {
      if (puRam00000001136c7940 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7940;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7940,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7940 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7940;
}



/* Entry: 106c81ac4; end: 106c81acf;  */

bool FUN_106c81ac4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106c81ad0; end: 106c81b4b;  */

undefined * FUN_106c81ad0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7948 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e80698,
                        &UNK_10ddebc98,&UNK_10ddebd30,8,FUN_106c81b4c,0);
    do {
      if (puRam00000001136c7948 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7948;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7948,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7948 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7948;
}



/* Entry: 106c81b4c; end: 106c81b57;  */

bool FUN_106c81b4c(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 106c81b58; end: 106c81bd3;  */

undefined * FUN_106c81b58(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7950 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e806b8,
                        &UNK_10ddebd50,&UNK_10ddebd78,3,FUN_106c81bd4,0);
    do {
      if (puRam00000001136c7950 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7950;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7950,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7950 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7950;
}



/* Entry: 106c81bd4; end: 106c81bdf;  */

bool FUN_106c81bd4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106c81be0; end: 106c81c5b;  */

undefined * FUN_106c81be0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7958 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e806d8,
                        &UNK_10ddebd84,&UNK_10ddebe10,5,FUN_106c81c5c,0);
    do {
      if (puRam00000001136c7958 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7958;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7958,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7958 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7958;
}



/* Entry: 106c81c5c; end: 106c81c67;  */

bool FUN_106c81c5c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106c81c68; end: 106c81cf3; +[SCSubscriptionShopPbSyncSnapchatPlusConfigRequest descriptor] */

undefined * FUN_106c81c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2ca40,
                        &PTR____CFConstantStringClassReference_110e806f8,&PTR_DAT_113180aa8,
                        &PTR_s_platform_113180f20,6,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136c7960 = puVar1;
  }
  return puRam00000001136c7960;
}



/* Entry: 106c81cf4; end: 106c81d5b; +[SCSubscriptionShopPbAppleReceiptMetadata descriptor] */

void FUN_106c81cf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7968 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2ca90,
                        &PTR____CFConstantStringClassReference_110e80718,&PTR_DAT_113180aa8,
                        &PTR_DAT_113180ac0,1,0x10,0x1c);
    puRam00000001136c7968 = puVar1;
  }
  return;
}



/* Entry: 106c81d5c; end: 106c81dc3; +[SCSubscriptionShopPbGoogleReceiptMetadata descriptor] */

void FUN_106c81d5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7970 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2cae0,
                        &PTR____CFConstantStringClassReference_110e80738,&PTR_DAT_113180aa8,
                        &PTR_DAT_113180ae0,1,0x10,0x1c);
    puRam00000001136c7970 = puVar1;
  }
  return;
}



/* Entry: 106c81dc4; end: 106c81e2b; +[SCSubscriptionShopPbTransaction descriptor] */

void FUN_106c81dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7978 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2cb30,
                        &PTR____CFConstantStringClassReference_110e5ffb8,&PTR_DAT_113180aa8,
                        &PTR_s_transactionId_113180be0,2,0x18,0x1c);
    puRam00000001136c7978 = puVar1;
  }
  return;
}



/* Entry: 106c81e2c; end: 106c81e93; +[SCSubscriptionShopPbSyncSnapchatPlusConfigResponse descriptor] */

void FUN_106c81e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7980 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2cb80,
                        &PTR____CFConstantStringClassReference_110e80758,&PTR_DAT_113180aa8,
                        &PTR_DAT_1131810a0,8,0x48,0x1c);
    puRam00000001136c7980 = puVar1;
  }
  return;
}



/* Entry: 106c81e94; end: 106c81f1f; +[SCSubscriptionShopPbPricingDetails descriptor] */

undefined * FUN_106c81e94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7988 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2cbd0,
                        &PTR____CFConstantStringClassReference_110e80778,&PTR_DAT_113180aa8,
                        &PTR_DAT_113180c20,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c7988 = puVar1;
  }
  return puRam00000001136c7988;
}


