/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c8452c; end: 106c84537;  */

bool FUN_106c8452c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106c84538; end: 106c845b3;  */

undefined * FUN_106c84538(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7c38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e81178,
                        &UNK_10ddec928,&UNK_10ddec958,5,FUN_106c845b4,0);
    do {
      if (puRam00000001136c7c38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7c38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7c38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7c38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7c38;
}



/* Entry: 106c845b4; end: 106c845bf;  */

bool FUN_106c845b4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106c845c0; end: 106c8463b;  */

undefined * FUN_106c845c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7c40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e81198,
                        &UNK_10ddec96c,&UNK_10ddec990,4,FUN_106c8463c,0);
    do {
      if (puRam00000001136c7c40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7c40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7c40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7c40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7c40;
}



/* Entry: 106c8463c; end: 106c84647;  */

bool FUN_106c8463c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106c84648; end: 106c846c3;  */

undefined * FUN_106c84648(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7c48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e811b8,
                        &UNK_10ddec9a0,&UNK_10ddec9c4,4,FUN_106c846c4,0);
    do {
      if (puRam00000001136c7c48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7c48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7c48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7c48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7c48;
}



/* Entry: 106c846c4; end: 106c846cf;  */

bool FUN_106c846c4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106c846d0; end: 106c8474b; +[BillingAddress descriptor] */

undefined * FUN_106c846d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e1b0,
                        &PTR____CFConstantStringClassReference_110e811d8,&PTR_DAT_1131830e8,
                        &PTR_s_firstName_1131836c0,8,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c7c50 = puVar1;
  }
  return puRam00000001136c7c50;
}



/* Entry: 106c8474c; end: 106c847b3; +[CreditCard descriptor] */

void FUN_106c8474c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e200,
                        &PTR____CFConstantStringClassReference_110e3e738,&PTR_DAT_1131830e8,
                        &PTR_s_id_p_1131835e0,7,0x38,0x1c);
    puRam00000001136c7c58 = puVar1;
  }
  return;
}



/* Entry: 106c847b4; end: 106c8481b; +[GetPaymentMethodsRequest descriptor] */

void FUN_106c847b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e250,
                        &PTR____CFConstantStringClassReference_110e811f8,&PTR_DAT_1131830e8,
                        &PTR_s_userId_113183100,1,0x10,0x1c);
    puRam00000001136c7c60 = puVar1;
  }
  return;
}



/* Entry: 106c8481c; end: 106c848a7; +[PaymentMethod descriptor] */

undefined * FUN_106c8481c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e2a0,
                        &PTR____CFConstantStringClassReference_110e81218,&PTR_DAT_1131830e8,
                        &PTR_DAT_113183360,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c7c68 = puVar1;
  }
  return puRam00000001136c7c68;
}



/* Entry: 106c848a8; end: 106c8490f; +[GetPaymentMethodsResponse descriptor] */

void FUN_106c848a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e2f0,
                        &PTR____CFConstantStringClassReference_110e81238,&PTR_DAT_1131830e8,
                        &PTR_DAT_113183120,1,0x10,0x1c);
    puRam00000001136c7c70 = puVar1;
  }
  return;
}



/* Entry: 106c84910; end: 106c84977; +[CreditCardRequest descriptor] */

void FUN_106c84910(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e340,
                        &PTR____CFConstantStringClassReference_110e81258,&PTR_DAT_1131830e8,
                        &PTR_s_userId_113183520,6,0x30,0x1c);
    puRam00000001136c7c78 = puVar1;
  }
  return;
}



/* Entry: 106c84978; end: 106c849df; +[CreditCardResponse descriptor] */

void FUN_106c84978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e390,
                        &PTR____CFConstantStringClassReference_110e81278,&PTR_DAT_1131830e8,
                        &PTR_DAT_1131831e0,2,0x10,0x1c);
    puRam00000001136c7c80 = puVar1;
  }
  return;
}



/* Entry: 106c849e0; end: 106c84a47; +[ApplePayCard descriptor] */

void FUN_106c849e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e3e0,
                        &PTR____CFConstantStringClassReference_110e81298,&PTR_DAT_1131830e8,
                        &PTR_s_id_p_1131837c0,8,0x48,0x1c);
    puRam00000001136c7c88 = puVar1;
  }
  return;
}



/* Entry: 106c84a48; end: 106c84aaf; +[ApplePayPaymentMethodRequest descriptor] */

void FUN_106c84a48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e430,
                        &PTR____CFConstantStringClassReference_110e812b8,&PTR_DAT_1131830e8,
                        &PTR_s_userId_113183480,5,0x28,0x1c);
    puRam00000001136c7c90 = puVar1;
  }
  return;
}



/* Entry: 106c84ab0; end: 106c84b17; +[ApplePayPaymentMethodResponse descriptor] */

void FUN_106c84ab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e480,
                        &PTR____CFConstantStringClassReference_110e812d8,&PTR_DAT_1131830e8,
                        &PTR_DAT_113183140,1,0x10,0x1c);
    puRam00000001136c7c98 = puVar1;
  }
  return;
}



/* Entry: 106c84b18; end: 106c84b93; +[SharePaymentMethodRequest descriptor] */

undefined * FUN_106c84b18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e4d0,
                        &PTR____CFConstantStringClassReference_110e812f8,&PTR_DAT_1131830e8,
                        &PTR_s_userId_1131838c0,9,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c7ca0 = puVar1;
  }
  return puRam00000001136c7ca0;
}



/* Entry: 106c84b94; end: 106c84bfb; +[SharePaymentMethodResponse descriptor] */

void FUN_106c84b94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e520,
                        &PTR____CFConstantStringClassReference_110e81318,&PTR_DAT_1131830e8,
                        &PTR_DAT_113183220,2,0x18,0x1c);
    puRam00000001136c7ca8 = puVar1;
  }
  return;
}



/* Entry: 106c84bfc; end: 106c84c63; +[BraintreeClientTokenRequest descriptor] */

void FUN_106c84bfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e570,
                        &PTR____CFConstantStringClassReference_110e81338,&PTR_DAT_1131830e8,
                        &PTR_s_country_1131833c0,3,0x18,0x1c);
    puRam00000001136c7cb0 = puVar1;
  }
  return;
}



/* Entry: 106c84c64; end: 106c84ccb; +[BraintreeClientTokenResponse descriptor] */

void FUN_106c84c64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e5c0,
                        &PTR____CFConstantStringClassReference_110e81358,&PTR_DAT_1131830e8,
                        &PTR_DAT_113183160,1,0x10,0x1c);
    puRam00000001136c7cb8 = puVar1;
  }
  return;
}



/* Entry: 106c84ccc; end: 106c84d33; +[RevokeSharedPaymentMethodRequest descriptor] */

void FUN_106c84ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e610,
                        &PTR____CFConstantStringClassReference_110e81378,&PTR_DAT_1131830e8,
                        &PTR_s_userId_113183420,3,0x20,0x1c);
    puRam00000001136c7cc0 = puVar1;
  }
  return;
}



/* Entry: 106c84d34; end: 106c84d9b; +[RevokeSharedPaymentMethodResponse descriptor] */

void FUN_106c84d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e660,
                        &PTR____CFConstantStringClassReference_110e81398,&PTR_DAT_1131830e8,
                        &PTR_s_status_113183180,1,8,0x1c);
    puRam00000001136c7cc8 = puVar1;
  }
  return;
}



/* Entry: 106c84d9c; end: 106c84e03; +[GetPaymentLocaleRequest descriptor] */

void FUN_106c84d9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e6b0,
                        &PTR____CFConstantStringClassReference_110e813b8,&PTR_DAT_1131830e8,
                        &PTR_s_userId_113183260,2,0x18,0x1c);
    puRam00000001136c7cd0 = puVar1;
  }
  return;
}



/* Entry: 106c84e04; end: 106c84e6b; +[GetPaymentLocaleResponse descriptor] */

void FUN_106c84e04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e700,
                        &PTR____CFConstantStringClassReference_110e813d8,&PTR_DAT_1131830e8,
                        &PTR_s_requestId_1131832a0,2,0x18,0x1c);
    puRam00000001136c7cd8 = puVar1;
  }
  return;
}



/* Entry: 106c84e6c; end: 106c84ed3; +[Locale descriptor] */

void FUN_106c84e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e750,
                        &PTR____CFConstantStringClassReference_110e7a1d8,&PTR_DAT_1131830e8,
                        &PTR_s_country_1131832e0,2,0x18,0x1c);
    puRam00000001136c7ce0 = puVar1;
  }
  return;
}



/* Entry: 106c84ed4; end: 106c84f3b; +[DeletePaymentMethodRequest descriptor] */

void FUN_106c84ed4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7ce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e7a0,
                        &PTR____CFConstantStringClassReference_110e813f8,&PTR_DAT_1131830e8,
                        &PTR_s_userId_113183320,2,0x18,0x1c);
    puRam00000001136c7ce8 = puVar1;
  }
  return;
}



/* Entry: 106c84f3c; end: 106c84fa3; +[DeletePaymentMethodResponse descriptor] */

void FUN_106c84f3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e7f0,
                        &PTR____CFConstantStringClassReference_110e81418,&PTR_DAT_1131830e8,
                        &PTR_s_status_1131831a0,1,8,0x1c);
    puRam00000001136c7cf0 = puVar1;
  }
  return;
}



/* Entry: 106c84fa4; end: 106c8500b; +[GeneratePurchaseOrderDataRequest descriptor] */

void FUN_106c84fa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7cf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e840,
                        &PTR____CFConstantStringClassReference_110e81438,&PTR_DAT_1131830e8,
                        &PTR_DAT_1131839e0,10,0x50,0x1c);
    puRam00000001136c7cf8 = puVar1;
  }
  return;
}



/* Entry: 106c8500c; end: 106c850ef; +[GeneratePurchaseOrderDataResponse descriptor] */

void FUN_106c8500c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b2e890,
                        &PTR____CFConstantStringClassReference_110e81458,&PTR_DAT_1131830e8,
                        &PTR_s_requestId_1131831c0,1,0x10,0x1c);
    puRam00000001136c7d00 = puVar1;
  }
  return;
}



/* Entry: 106c850f0; end: 106c850fb;  */

bool FUN_106c850f0(uint param_1)

{
  return param_1 < 0xb4;
}



/* Entry: 106c850fc; end: 106c851ef; +[SCSendToRankingExceptionGuard runCatching:] */

void FUN_106c850fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  (**(code **)(param_3 + 0x10))(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 106c851f0; end: 106c85263; -[SCGrapheneRecentsMetric2 init] */

undefined1 * FUN_106c851f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f60d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c85264; end: 106c8554b;  */

/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c8583c) */
/* WARNING: Removing unreachable block (ram,0x000106c85514) */
/* WARNING: Removing unreachable block (ram,0x000106c860ec) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c85264(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  long *plVar19;
  char *unaff_x25;
  char *unaff_x26;
  double dVar20;
  double dVar21;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined1 *puStack_818;
  char *pcStack_810;
  char *pcStack_808;
  undefined8 *****pppppuStack_800;
  code *pcStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined1 *puStack_7d8;
  undefined8 auStack_7d0 [2];
  char cStack_7b9;
  long lStack_7b8;
  undefined8 *****pppppuStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined1 *puStack_758;
  undefined8 auStack_750 [2];
  char cStack_739;
  long lStack_738;
  char *pcStack_730;
  char *pcStack_728;
  char *pcStack_720;
  char *pcStack_718;
  char *pcStack_710;
  char *pcStack_708;
  undefined8 *****pppppuStack_700;
  code *pcStack_6f8;
  char acStack_6f0 [24];
  undefined1 *puStack_6d8;
  char acStack_6d0 [24];
  undefined1 auStack_6b8 [24];
  undefined8 auStack_6a0 [2];
  char cStack_689;
  long lStack_688;
  undefined8 *****pppppuStack_640;
  code *pcStack_638;
  char acStack_628 [24];
  char *pcStack_610;
  char acStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  char *pcStack_5a0;
  char *pcStack_598;
  char *pcStack_590;
  char *pcStack_588;
  char *pcStack_580;
  char *pcStack_578;
  char *pcStack_570;
  char *pcStack_568;
  undefined8 *****pppppuStack_560;
  code *pcStack_558;
  char acStack_548 [24];
  char *pcStack_530;
  undefined8 auStack_528 [2];
  char cStack_511;
  undefined8 auStack_510 [2];
  char cStack_4f9;
  long lStack_4f8;
  undefined8 *****pppppuStack_4c0;
  code *pcStack_4b8;
  char acStack_4b0 [24];
  undefined1 *puStack_498;
  char acStack_490 [24];
  undefined1 auStack_478 [24];
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  char *pcStack_440;
  char *pcStack_438;
  char *pcStack_430;
  char *pcStack_428;
  char *pcStack_420;
  char *pcStack_418;
  char *pcStack_410;
  char **ppcStack_408;
  undefined8 *****pppppuStack_400;
  code *pcStack_3f8;
  char acStack_3f0 [24];
  char *pcStack_3d8;
  char **appcStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  undefined1 *****pppppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  char acStack_358 [24];
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char **ppcStack_2f8;
  undefined1 ****ppppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2e0 [24];
  char *pcStack_2c8;
  char **appcStack_2c0 [2];
  char cStack_2a9;
  long lStack_2a8;
  undefined1 ***pppuStack_280;
  code *pcStack_278;
  char acStack_268 [24];
  char *pcStack_250;
  char acStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char *pcStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  char acStack_1c8 [24];
  char *pcStack_1b0;
  char acStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  char acStack_160 [23];
  char cStack_149;
  long lStack_148;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  char acStack_70 [23];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = param_3;
  pcVar1 = param_4;
  pcVar6 = param_5;
  pcVar3 = param_6;
  pcVar12 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar19 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x26 = acStack_b8;
    unaff_x25 = acStack_70;
    pcVar1 = "true";
    if ((int)param_6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x25,pcVar1);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar5 = "";
    param_6 = acStack_d8;
    pcVar1 = acStack_d8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_c0 = param_6;
    func_0x00010007e5dc(&pcStack_c0);
    lVar18 = 0;
    pcVar6 = param_7;
    do {
      if ((&cStack_59)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)(acStack_70 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x25 = unaff_x25 + -0x18;
  } while (unaff_x25 != acStack_b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_e8 = FUN_106c8554c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar15 = pcVar5;
  pcVar9 = pcVar1;
  pcVar13 = pcVar6;
  pcVar10 = pcVar3;
  dVar20 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar5);
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar5);
    _objc_retain(pcVar1);
    _objc_retain(pcVar6);
    plVar19 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(acStack_1a8,pcVar2);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar2 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_190,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_178,pcVar2);
    unaff_x25 = acStack_1a8;
    param_6 = acStack_160;
    pcVar2 = "true";
    if ((int)pcVar3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(param_6,pcVar2);
    acStack_1c8[0] = '\0';
    acStack_1c8[1] = '\0';
    acStack_1c8[2] = '\0';
    acStack_1c8[3] = '\0';
    acStack_1c8[4] = '\0';
    acStack_1c8[5] = '\0';
    acStack_1c8[6] = '\0';
    acStack_1c8[7] = '\0';
    acStack_1c8[8] = '\0';
    acStack_1c8[9] = '\0';
    acStack_1c8[10] = '\0';
    acStack_1c8[0xb] = '\0';
    acStack_1c8[0xc] = '\0';
    acStack_1c8[0xd] = '\0';
    acStack_1c8[0xe] = '\0';
    acStack_1c8[0xf] = '\0';
    acStack_1c8[0x10] = '\0';
    acStack_1c8[0x11] = '\0';
    acStack_1c8[0x12] = '\0';
    acStack_1c8[0x13] = '\0';
    acStack_1c8[0x14] = '\0';
    acStack_1c8[0x15] = '\0';
    acStack_1c8[0x16] = '\0';
    acStack_1c8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c8,acStack_1a8,&lStack_148,4);
    dVar20 = param_1 * 1000.0;
    pcVar13 = (char *)(long)dVar20;
    pcVar15 = "\x01";
    pcVar9 = acStack_1c8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    pcStack_1b0 = acStack_1c8;
    func_0x00010007e5dc(&pcStack_1b0);
    lVar18 = 0;
    do {
      if ((&cStack_149)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)(acStack_160 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    _objc_release(pcVar5);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    pcVar2 = acStack_1a8;
    do {
      param_6 = param_6 + -0x18;
    } while (param_6 != pcVar2);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    _objc_release(pcVar5);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    _objc_release(pcVar5);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_1d8 = FUN_106c8588c;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar16 = pcVar15;
    pcVar11 = pcVar9;
    pcVar14 = pcVar13;
    pcStack_210 = param_6;
    pcStack_208 = pcVar2;
    pcStack_200 = pcVar3;
    pcStack_1f8 = pcVar6;
    pcStack_1f0 = pcVar1;
    pcStack_1e8 = pcVar5;
    ppuStack_1e0 = &puStack_f0;
    _objc_retain(pcVar15);
    pcVar1 = (char *)0x0;
    if (pcVar4 != (char *)0x0) {
      plVar19 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar15);
      if (pcVar15 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar15;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar15);
      param_6 = acStack_248;
      func_0x00010002b838(acStack_248,pcVar2);
      pcVar1 = "true";
      if ((int)pcVar9 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_230,pcVar1);
      acStack_268[0] = '\0';
      acStack_268[1] = '\0';
      acStack_268[2] = '\0';
      acStack_268[3] = '\0';
      acStack_268[4] = '\0';
      acStack_268[5] = '\0';
      acStack_268[6] = '\0';
      acStack_268[7] = '\0';
      acStack_268[8] = '\0';
      acStack_268[9] = '\0';
      acStack_268[10] = '\0';
      acStack_268[0xb] = '\0';
      acStack_268[0xc] = '\0';
      acStack_268[0xd] = '\0';
      acStack_268[0xe] = '\0';
      acStack_268[0xf] = '\0';
      acStack_268[0x10] = '\0';
      acStack_268[0x11] = '\0';
      acStack_268[0x12] = '\0';
      acStack_268[0x13] = '\0';
      acStack_268[0x14] = '\0';
      acStack_268[0x15] = '\0';
      acStack_268[0x16] = '\0';
      acStack_268[0x17] = '\0';
      func_0x00010007e1e8(acStack_268,acStack_248,&lStack_218,2);
      pcVar16 = "";
      pcVar9 = acStack_268;
      pcVar11 = acStack_268;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcStack_250 = pcVar9;
      func_0x00010007e5dc(&pcStack_250);
      lVar18 = 0;
      pcVar1 = acStack_248;
      pcVar14 = pcVar13;
      do {
        if ((&cStack_219)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
    }
    pcVar5 = pcVar15;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar15);
    _objc_release(pcVar15);
    pcVar6 = pcVar5;
    __Unwind_Resume();
    pcVar3 = acStack_2e0;
    pcStack_278 = FUN_106c85a74;
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar7 = (char **)0x0;
    pppuStack_280 = &ppuStack_1e0;
    if (pcVar6 != (char *)0x0) {
      plVar19 = *(long **)(pcVar6 + 8);
      pcVar5 = "true";
      if ((int)pcVar16 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(appcStack_2c0,pcVar5);
      acStack_2e0[0] = '\0';
      acStack_2e0[1] = '\0';
      acStack_2e0[2] = '\0';
      acStack_2e0[3] = '\0';
      acStack_2e0[4] = '\0';
      acStack_2e0[5] = '\0';
      acStack_2e0[6] = '\0';
      acStack_2e0[7] = '\0';
      acStack_2e0[8] = '\0';
      acStack_2e0[9] = '\0';
      acStack_2e0[10] = '\0';
      acStack_2e0[0xb] = '\0';
      acStack_2e0[0xc] = '\0';
      acStack_2e0[0xd] = '\0';
      acStack_2e0[0xe] = '\0';
      acStack_2e0[0xf] = '\0';
      acStack_2e0[0x10] = '\0';
      acStack_2e0[0x11] = '\0';
      acStack_2e0[0x12] = '\0';
      acStack_2e0[0x13] = '\0';
      acStack_2e0[0x14] = '\0';
      acStack_2e0[0x15] = '\0';
      acStack_2e0[0x16] = '\0';
      acStack_2e0[0x17] = '\0';
      func_0x00010007e1e8(acStack_2e0,appcStack_2c0,&lStack_2a8,1);
      dVar20 = dVar20 * 1000.0;
      pcVar14 = (char *)(long)dVar20;
      pcVar16 = "\x01";
      (**(code **)(*plVar19 + 0x18))(plVar19);
      ppcVar7 = &pcStack_2c8;
      pcStack_2c8 = acStack_2e0;
      func_0x00010007e5dc();
      pcVar11 = pcVar3;
      pcVar5 = acStack_2e0;
      if (cStack_2a9 < '\0') {
        ppcVar7 = appcStack_2c0[0];
        __ZdlPv();
        pcVar11 = pcVar3;
        pcVar5 = acStack_2e0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
      return;
    }
    ___stack_chk_fail();
    pcStack_2c8 = pcVar5;
    func_0x00010007e5dc(&pcStack_2c8);
    if (cStack_2a9 < '\0') {
      __ZdlPv(appcStack_2c0[0]);
    }
    ppcVar8 = ppcVar7;
    __Unwind_Resume();
    pcStack_2e8 = FUN_106c85b98;
    lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar16;
    pcVar3 = pcVar11;
    pcVar15 = pcVar14;
    pcStack_320 = param_6;
    pcStack_318 = pcVar2;
    pcStack_310 = pcVar9;
    pcStack_308 = pcVar1;
    pcStack_300 = pcVar5;
    ppcStack_2f8 = ppcVar7;
    ppppuStack_2f0 = &pppuStack_280;
    _objc_retain(pcVar16);
    pcVar1 = (char *)0x0;
    if (ppcVar8 != (char **)0x0) {
      plVar19 = (long *)ppcVar8[1];
      _objc_retain(pcVar16);
      if (pcVar16 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar16;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar16);
      param_6 = acStack_358;
      func_0x00010002b838(acStack_358,pcVar2);
      pcVar1 = "true";
      if ((int)pcVar11 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_340,pcVar1);
      acStack_378[0] = '\0';
      acStack_378[1] = '\0';
      acStack_378[2] = '\0';
      acStack_378[3] = '\0';
      acStack_378[4] = '\0';
      acStack_378[5] = '\0';
      acStack_378[6] = '\0';
      acStack_378[7] = '\0';
      acStack_378[8] = '\0';
      acStack_378[9] = '\0';
      acStack_378[10] = '\0';
      acStack_378[0xb] = '\0';
      acStack_378[0xc] = '\0';
      acStack_378[0xd] = '\0';
      acStack_378[0xe] = '\0';
      acStack_378[0xf] = '\0';
      acStack_378[0x10] = '\0';
      acStack_378[0x11] = '\0';
      acStack_378[0x12] = '\0';
      acStack_378[0x13] = '\0';
      acStack_378[0x14] = '\0';
      acStack_378[0x15] = '\0';
      acStack_378[0x16] = '\0';
      acStack_378[0x17] = '\0';
      func_0x00010007e1e8(acStack_378,acStack_358,&lStack_328,2);
      pcVar6 = "";
      pcVar11 = acStack_378;
      pcVar3 = acStack_378;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcStack_360 = pcVar11;
      func_0x00010007e5dc(&pcStack_360);
      lVar18 = 0;
      pcVar1 = acStack_358;
      pcVar15 = pcVar14;
      do {
        if ((&cStack_329)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
    }
    pcVar9 = pcVar16;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar16);
    _objc_release(pcVar16);
    pcVar5 = pcVar9;
    __Unwind_Resume();
    pcVar13 = acStack_3f0;
    pcStack_388 = FUN_106c85d80;
    lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar7 = (char **)0x0;
    pppppuStack_390 = &ppppuStack_2f0;
    if (pcVar5 != (char *)0x0) {
      plVar19 = *(long **)(pcVar5 + 8);
      pcVar5 = "true";
      if ((int)pcVar6 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(appcStack_3d0,pcVar5);
      acStack_3f0[0] = '\0';
      acStack_3f0[1] = '\0';
      acStack_3f0[2] = '\0';
      acStack_3f0[3] = '\0';
      acStack_3f0[4] = '\0';
      acStack_3f0[5] = '\0';
      acStack_3f0[6] = '\0';
      acStack_3f0[7] = '\0';
      acStack_3f0[8] = '\0';
      acStack_3f0[9] = '\0';
      acStack_3f0[10] = '\0';
      acStack_3f0[0xb] = '\0';
      acStack_3f0[0xc] = '\0';
      acStack_3f0[0xd] = '\0';
      acStack_3f0[0xe] = '\0';
      acStack_3f0[0xf] = '\0';
      acStack_3f0[0x10] = '\0';
      acStack_3f0[0x11] = '\0';
      acStack_3f0[0x12] = '\0';
      acStack_3f0[0x13] = '\0';
      acStack_3f0[0x14] = '\0';
      acStack_3f0[0x15] = '\0';
      acStack_3f0[0x16] = '\0';
      acStack_3f0[0x17] = '\0';
      func_0x00010007e1e8(acStack_3f0,appcStack_3d0,&lStack_3b8,1);
      dVar20 = dVar20 * 1000.0;
      pcVar15 = (char *)(long)dVar20;
      pcVar6 = "\x01";
      (**(code **)(*plVar19 + 0x18))(plVar19);
      ppcVar7 = &pcStack_3d8;
      pcStack_3d8 = acStack_3f0;
      func_0x00010007e5dc();
      pcVar3 = pcVar13;
      pcVar9 = acStack_3f0;
      if (cStack_3b9 < '\0') {
        ppcVar7 = appcStack_3d0[0];
        __ZdlPv();
        pcVar3 = pcVar13;
        pcVar9 = acStack_3f0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
      return;
    }
    ___stack_chk_fail();
    pcStack_3d8 = pcVar9;
    func_0x00010007e5dc(&pcStack_3d8);
    if (cStack_3b9 < '\0') {
      __ZdlPv(appcStack_3d0[0]);
    }
    ppcVar8 = ppcVar7;
    __Unwind_Resume();
    pcVar14 = acStack_4b0;
    pcStack_3f8 = FUN_106c85ea4;
    lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar13 = pcVar6;
    pcVar5 = pcVar3;
    pcVar16 = pcVar15;
    pcVar4 = pcVar10;
    pcStack_440 = unaff_x26;
    pcStack_438 = unaff_x25;
    pcStack_430 = param_6;
    pcStack_428 = pcVar2;
    pcStack_420 = pcVar11;
    pcStack_418 = pcVar1;
    pcStack_410 = pcVar9;
    ppcStack_408 = ppcVar7;
    pppppuStack_400 = &pppppuStack_390;
    _objc_retain(pcVar6);
    _objc_retain(pcVar15);
    if (ppcVar8 != (char **)0x0) {
      plVar19 = (long *)ppcVar8[1];
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      unaff_x25 = acStack_490;
      func_0x00010002b838(acStack_490,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar3 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_478,pcVar1);
      _objc_retain(pcVar15);
      if (pcVar15 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar15);
        pcVar3 = pcVar15;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar15);
      func_0x00010002b838(auStack_460,pcVar3);
      acStack_4b0[0] = '\0';
      acStack_4b0[1] = '\0';
      acStack_4b0[2] = '\0';
      acStack_4b0[3] = '\0';
      acStack_4b0[4] = '\0';
      acStack_4b0[5] = '\0';
      acStack_4b0[6] = '\0';
      acStack_4b0[7] = '\0';
      acStack_4b0[8] = '\0';
      acStack_4b0[9] = '\0';
      acStack_4b0[10] = '\0';
      acStack_4b0[0xb] = '\0';
      acStack_4b0[0xc] = '\0';
      acStack_4b0[0xd] = '\0';
      acStack_4b0[0xe] = '\0';
      acStack_4b0[0xf] = '\0';
      acStack_4b0[0x10] = '\0';
      acStack_4b0[0x11] = '\0';
      acStack_4b0[0x12] = '\0';
      acStack_4b0[0x13] = '\0';
      acStack_4b0[0x14] = '\0';
      acStack_4b0[0x15] = '\0';
      acStack_4b0[0x16] = '\0';
      acStack_4b0[0x17] = '\0';
      func_0x00010007e1e8(acStack_4b0,acStack_490,&lStack_448,3);
      pcVar13 = "";
      (**(code **)(*plVar19 + 0x18))(plVar19);
      puStack_498 = acStack_4b0;
      func_0x00010007e5dc(&puStack_498);
      lVar18 = 0;
      pcVar5 = pcVar14;
      pcVar16 = pcVar10;
      do {
        if ((&cStack_449)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_460 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
        pcVar2 = acStack_4b0;
      } while (lVar18 != -0x48);
    }
    _objc_release(pcVar15);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar15);
    pcVar9 = acStack_490;
    do {
      pcVar2 = pcVar2 + -0x18;
    } while (pcVar2 != pcVar9);
    _objc_release(pcVar15);
    _objc_release(pcVar6);
    __Unwind_Resume();
    pcStack_4b8 = FUN_106c8611c;
    lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar10 = pcVar5;
    pcVar6 = pcVar13;
    pcVar15 = pcVar5;
    dVar21 = dVar20;
    pppppuStack_4c0 = &pppppuStack_400;
    _objc_retain();
    if (pcVar1 != (char *)0x0) {
      _objc_retain(pcVar5);
      plVar19 = *(long **)(pcVar1 + 8);
      pcVar1 = "true";
      if ((int)pcVar13 == 0) {
        pcVar1 = "false";
      }
      pcVar9 = (char *)auStack_528;
      func_0x00010002b838(auStack_528,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_510,pcVar1);
      acStack_548[0] = '\0';
      acStack_548[1] = '\0';
      acStack_548[2] = '\0';
      acStack_548[3] = '\0';
      acStack_548[4] = '\0';
      acStack_548[5] = '\0';
      acStack_548[6] = '\0';
      acStack_548[7] = '\0';
      acStack_548[8] = '\0';
      acStack_548[9] = '\0';
      acStack_548[10] = '\0';
      acStack_548[0xb] = '\0';
      acStack_548[0xc] = '\0';
      acStack_548[0xd] = '\0';
      acStack_548[0xe] = '\0';
      acStack_548[0xf] = '\0';
      acStack_548[0x10] = '\0';
      acStack_548[0x11] = '\0';
      acStack_548[0x12] = '\0';
      acStack_548[0x13] = '\0';
      acStack_548[0x14] = '\0';
      acStack_548[0x15] = '\0';
      acStack_548[0x16] = '\0';
      acStack_548[0x17] = '\0';
      func_0x00010007e1e8(acStack_548,auStack_528,&lStack_4f8,2);
      dVar21 = dVar20 * 1000.0;
      pcVar16 = (char *)(long)dVar21;
      pcVar6 = "\x01";
      pcVar15 = acStack_548;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      pcStack_530 = acStack_548;
      func_0x00010007e5dc(&pcStack_530);
      lVar18 = 0;
      pcVar13 = (char *)auStack_528;
      do {
        if ((&cStack_4f9)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_510 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
      pcVar10 = pcVar5;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4f8) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      if (cStack_511 < '\0') {
        __ZdlPv(auStack_528[0]);
      }
      _objc_release(pcVar5);
      _objc_release(pcVar5);
      pcVar11 = pcVar10;
      __Unwind_Resume();
      pcStack_558 = FUN_106c86328;
      lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar14 = pcVar6;
      pcVar1 = pcVar15;
      pcVar17 = pcVar16;
      pcStack_5a0 = unaff_x26;
      pcStack_598 = unaff_x25;
      pcStack_590 = pcVar3;
      pcStack_588 = pcVar2;
      pcStack_580 = pcVar9;
      pcStack_578 = pcVar13;
      pcStack_570 = pcVar10;
      pcStack_568 = pcVar5;
      pppppuStack_560 = &pppppuStack_4c0;
      _objc_retain(pcVar6);
      _objc_retain(pcVar15);
      _objc_retain(pcVar4);
      pcVar5 = pcVar14;
      if (pcVar11 != (char *)0x0) {
        plVar19 = *(long **)(pcVar11 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(acStack_608,pcVar1);
        _objc_retain(pcVar15);
        if (pcVar15 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar15);
          pcVar1 = pcVar15;
          func_0x00010bdc3520(pcVar15);
        }
        _objc_release(pcVar15);
        func_0x00010002b838(auStack_5f0,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar16 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_5d8,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_5c0,pcVar1);
        acStack_628[0] = '\0';
        acStack_628[1] = '\0';
        acStack_628[2] = '\0';
        acStack_628[3] = '\0';
        acStack_628[4] = '\0';
        acStack_628[5] = '\0';
        acStack_628[6] = '\0';
        acStack_628[7] = '\0';
        acStack_628[8] = '\0';
        acStack_628[9] = '\0';
        acStack_628[10] = '\0';
        acStack_628[0xb] = '\0';
        acStack_628[0xc] = '\0';
        acStack_628[0xd] = '\0';
        acStack_628[0xe] = '\0';
        acStack_628[0xf] = '\0';
        acStack_628[0x10] = '\0';
        acStack_628[0x11] = '\0';
        acStack_628[0x12] = '\0';
        acStack_628[0x13] = '\0';
        acStack_628[0x14] = '\0';
        acStack_628[0x15] = '\0';
        acStack_628[0x16] = '\0';
        acStack_628[0x17] = '\0';
        func_0x00010007e1e8(acStack_628,acStack_608,&lStack_5a8,4);
        pcVar5 = "";
        pcVar3 = acStack_628;
        pcVar1 = acStack_628;
        (**(code **)(*plVar19 + 0x18))(plVar19);
        pcStack_610 = pcVar3;
        func_0x00010007e5dc(&pcStack_610);
        lVar18 = 0;
        pcVar17 = pcVar12;
        do {
          if ((&cStack_5a9)[lVar18] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar18));
          }
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != -0x60);
      }
      _objc_release(pcVar4);
      _objc_release(pcVar15);
      pcVar12 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar4);
      do {
        pcVar3 = pcVar3 + -0x18;
      } while (pcVar3 != acStack_608);
      _objc_release(pcVar4);
      _objc_release(pcVar15);
      _objc_release(pcVar6);
      pcVar2 = pcVar12;
      __Unwind_Resume();
      pcVar9 = acStack_6f0;
      pcStack_638 = FUN_106c86610;
      lStack_688 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar5;
      pcVar15 = pcVar1;
      dVar20 = dVar21;
      pppppuStack_640 = &pppppuStack_560;
      _objc_retain(pcVar5);
      _objc_retain(pcVar17);
      if (pcVar2 != (char *)0x0) {
        _objc_retain(pcVar5);
        _objc_retain(pcVar17);
        plVar19 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar6 = "";
        }
        else {
          pcVar6 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        pcVar3 = acStack_6d0;
        func_0x00010002b838(acStack_6d0,pcVar6);
        pcVar6 = "true";
        if ((int)pcVar1 == 0) {
          pcVar6 = "false";
        }
        func_0x00010002b838(auStack_6b8,pcVar6);
        _objc_retain(pcVar17);
        if (pcVar17 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar17);
          pcVar1 = pcVar17;
          func_0x00010bdc3520(pcVar17);
        }
        _objc_release(pcVar17);
        func_0x00010002b838(auStack_6a0,pcVar1);
        acStack_6f0[0] = '\0';
        acStack_6f0[1] = '\0';
        acStack_6f0[2] = '\0';
        acStack_6f0[3] = '\0';
        acStack_6f0[4] = '\0';
        acStack_6f0[5] = '\0';
        acStack_6f0[6] = '\0';
        acStack_6f0[7] = '\0';
        acStack_6f0[8] = '\0';
        acStack_6f0[9] = '\0';
        acStack_6f0[10] = '\0';
        acStack_6f0[0xb] = '\0';
        acStack_6f0[0xc] = '\0';
        acStack_6f0[0xd] = '\0';
        acStack_6f0[0xe] = '\0';
        acStack_6f0[0xf] = '\0';
        acStack_6f0[0x10] = '\0';
        acStack_6f0[0x11] = '\0';
        acStack_6f0[0x12] = '\0';
        acStack_6f0[0x13] = '\0';
        acStack_6f0[0x14] = '\0';
        acStack_6f0[0x15] = '\0';
        acStack_6f0[0x16] = '\0';
        acStack_6f0[0x17] = '\0';
        func_0x00010007e1e8(acStack_6f0,acStack_6d0,&lStack_688,3);
        dVar20 = dVar21 * 1000.0;
        pcVar6 = "\x01";
        (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11096d1e0,acStack_6f0,(long)dVar20);
        puStack_6d8 = acStack_6f0;
        func_0x00010007e5dc(&puStack_6d8);
        lVar18 = 0;
        pcVar12 = acStack_6d0;
        pcVar15 = pcVar9;
        do {
          if ((&cStack_689)[lVar18] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_6a0 + lVar18));
          }
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != -0x48);
        _objc_release(pcVar17);
        _objc_release(pcVar5);
      }
      pcVar1 = pcVar17;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_688) {
        ___stack_chk_fail();
        _objc_release(pcVar17);
        pcStack_728 = acStack_6d0;
        do {
          pcVar12 = pcVar12 + -0x18;
        } while (pcVar12 != pcStack_728);
        _objc_release(pcVar17);
        _objc_release(pcVar5);
        _objc_release(pcVar17);
        _objc_release(pcVar5);
        pcVar2 = pcVar1;
        __Unwind_Resume();
        pcStack_6f8 = FUN_106c868c0;
        lStack_738 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar9 = pcVar6;
        pcStack_730 = pcVar3;
        pcStack_720 = pcVar12;
        pcStack_718 = pcVar1;
        pcStack_710 = pcVar17;
        pcStack_708 = pcVar5;
        pppppuStack_700 = &pppppuStack_640;
        _objc_retain(pcVar6);
        pcVar5 = pcVar9;
        if (pcVar2 != (char *)0x0) {
          plVar19 = *(long **)(pcVar2 + 8);
          _objc_retain(pcVar6);
          if (pcVar6 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar6;
            _objc_retainAutorelease(pcVar6);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar6);
          func_0x00010002b838(auStack_750,pcVar1);
          uStack_770 = 0;
          uStack_768 = 0;
          uStack_760 = 0;
          func_0x00010007e1e8(&uStack_770,auStack_750,&lStack_738,1);
          pcVar5 = "";
          (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11096d230,&uStack_770,pcVar15);
          puStack_758 = (undefined1 *)&uStack_770;
          func_0x00010007e5dc(&puStack_758);
          if (cStack_739 < '\0') {
            __ZdlPv(auStack_750[0]);
          }
        }
        pcVar1 = pcVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_738) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar6);
        _objc_release(pcVar6);
        __Unwind_Resume();
        pcStack_778 = FUN_106c86a34;
        lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar3 = pcVar5;
        pcVar6 = pcVar5;
        pppppuStack_780 = &pppppuStack_700;
        _objc_retain();
        if (pcVar1 != (char *)0x0) {
          _objc_retain(pcVar5);
          plVar19 = *(long **)(pcVar1 + 8);
          _objc_retain(pcVar5);
          if (pcVar5 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar5;
            _objc_retainAutorelease(pcVar5);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar5);
          func_0x00010002b838(auStack_7d0,pcVar1);
          uStack_7f0 = 0;
          uStack_7e8 = 0;
          uStack_7e0 = 0;
          func_0x00010007e1e8(&uStack_7f0,auStack_7d0,&lStack_7b8,1);
          pcVar6 = "\x01";
          (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_11096d280,&uStack_7f0,(long)(dVar20 * 1000.0))
          ;
          puStack_7d8 = (undefined1 *)&uStack_7f0;
          func_0x00010007e5dc(&puStack_7d8);
          if (cStack_7b9 < '\0') {
            __ZdlPv(auStack_7d0[0]);
          }
          pcVar3 = pcVar5;
          _objc_release();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7b8) {
          ___stack_chk_fail();
          _objc_release(pcVar5);
          _objc_release(pcVar5);
          _objc_release(pcVar5);
          pcVar1 = pcVar3;
          __Unwind_Resume();
          puStack_818 = (undefined1 *)&uStack_830;
          pcStack_7f8 = FUN_106c86bc8;
          if (pcVar1 != (char *)0x0) {
            uStack_830 = 0;
            uStack_828 = 0;
            uStack_820 = 0;
            pcStack_810 = pcVar3;
            pcStack_808 = pcVar5;
            pppppuStack_800 = &pppppuStack_780;
            (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                      (*(long **)(pcVar1 + 8),&UNK_11096d2d0,&uStack_830,pcVar6);
            func_0x00010007e5dc(&puStack_818);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return;
}



/* Entry: 106c8554c; end: 106c8588b;  */

/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c8583c) */
/* WARNING: Removing unreachable block (ram,0x000106c860ec) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c8554c(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  char *unaff_x24;
  double dVar16;
  double dVar17;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined1 *puStack_738;
  char *pcStack_730;
  char *pcStack_728;
  undefined8 ****ppppuStack_720;
  code *pcStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 *puStack_6f8;
  undefined8 auStack_6f0 [2];
  char cStack_6d9;
  long lStack_6d8;
  undefined8 ****ppppuStack_6a0;
  code *pcStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined1 *puStack_678;
  undefined8 auStack_670 [2];
  char cStack_659;
  long lStack_658;
  char *pcStack_650;
  char *pcStack_648;
  char *pcStack_640;
  char *pcStack_638;
  char *pcStack_630;
  char *pcStack_628;
  undefined8 ****ppppuStack_620;
  code *pcStack_618;
  char acStack_610 [24];
  undefined1 *puStack_5f8;
  char acStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 ****ppppuStack_560;
  code *pcStack_558;
  char acStack_548 [24];
  char *pcStack_530;
  char acStack_528 [24];
  undefined1 auStack_510 [24];
  undefined1 auStack_4f8 [24];
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  undefined8 ****ppppuStack_480;
  code *pcStack_478;
  char acStack_468 [24];
  char *pcStack_450;
  undefined8 auStack_448 [2];
  char cStack_431;
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 ****ppppuStack_3e0;
  code *pcStack_3d8;
  char acStack_3d0 [24];
  undefined1 *puStack_3b8;
  char acStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 ****ppppuStack_320;
  code *pcStack_318;
  char acStack_310 [24];
  char *pcStack_2f8;
  char **appcStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined1 auStack_278 [24];
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char **ppcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_200 [24];
  char *pcStack_1e8;
  char **appcStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  char acStack_188 [24];
  char *pcStack_170;
  char acStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  char acStack_e8 [24];
  char *pcStack_d0;
  char acStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  char acStack_80 [23];
  char cStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar7 = param_4;
  pcVar11 = param_5;
  pcVar8 = param_6;
  dVar16 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    plVar14 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(acStack_c8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_b0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_98,pcVar1);
    unaff_x24 = acStack_80;
    pcVar1 = "true";
    if ((int)param_6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    acStack_e8[0] = '\0';
    acStack_e8[1] = '\0';
    acStack_e8[2] = '\0';
    acStack_e8[3] = '\0';
    acStack_e8[4] = '\0';
    acStack_e8[5] = '\0';
    acStack_e8[6] = '\0';
    acStack_e8[7] = '\0';
    acStack_e8[8] = '\0';
    acStack_e8[9] = '\0';
    acStack_e8[10] = '\0';
    acStack_e8[0xb] = '\0';
    acStack_e8[0xc] = '\0';
    acStack_e8[0xd] = '\0';
    acStack_e8[0xe] = '\0';
    acStack_e8[0xf] = '\0';
    acStack_e8[0x10] = '\0';
    acStack_e8[0x11] = '\0';
    acStack_e8[0x12] = '\0';
    acStack_e8[0x13] = '\0';
    acStack_e8[0x14] = '\0';
    acStack_e8[0x15] = '\0';
    acStack_e8[0x16] = '\0';
    acStack_e8[0x17] = '\0';
    func_0x00010007e1e8(acStack_e8,acStack_c8,&lStack_68,4);
    dVar16 = param_1 * 1000.0;
    pcVar11 = (char *)(long)dVar16;
    pcVar1 = "\x01";
    pcVar7 = acStack_e8;
    (**(code **)(*plVar14 + 0x18))(plVar14);
    pcStack_d0 = acStack_e8;
    func_0x00010007e5dc(&pcStack_d0);
    lVar15 = 0;
    do {
      if ((&cStack_69)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)(acStack_80 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(param_5);
    pcVar4 = acStack_c8;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != pcVar4);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_f8 = FUN_106c8588c;
    lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar10 = pcVar1;
    pcVar9 = pcVar7;
    pcVar12 = pcVar11;
    pcStack_130 = unaff_x24;
    pcStack_128 = pcVar4;
    pcStack_120 = pcVar2;
    pcStack_118 = param_5;
    pcStack_110 = param_4;
    pcStack_108 = param_3;
    puStack_100 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    pcVar2 = (char *)0x0;
    if (pcVar3 != (char *)0x0) {
      plVar14 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pcVar1;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      unaff_x24 = acStack_168;
      func_0x00010002b838(acStack_168,pcVar4);
      pcVar2 = "true";
      if ((int)pcVar7 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_150,pcVar2);
      acStack_188[0] = '\0';
      acStack_188[1] = '\0';
      acStack_188[2] = '\0';
      acStack_188[3] = '\0';
      acStack_188[4] = '\0';
      acStack_188[5] = '\0';
      acStack_188[6] = '\0';
      acStack_188[7] = '\0';
      acStack_188[8] = '\0';
      acStack_188[9] = '\0';
      acStack_188[10] = '\0';
      acStack_188[0xb] = '\0';
      acStack_188[0xc] = '\0';
      acStack_188[0xd] = '\0';
      acStack_188[0xe] = '\0';
      acStack_188[0xf] = '\0';
      acStack_188[0x10] = '\0';
      acStack_188[0x11] = '\0';
      acStack_188[0x12] = '\0';
      acStack_188[0x13] = '\0';
      acStack_188[0x14] = '\0';
      acStack_188[0x15] = '\0';
      acStack_188[0x16] = '\0';
      acStack_188[0x17] = '\0';
      func_0x00010007e1e8(acStack_188,acStack_168,&lStack_138,2);
      pcVar10 = "";
      pcVar7 = acStack_188;
      pcVar9 = acStack_188;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      pcStack_170 = pcVar7;
      func_0x00010007e5dc(&pcStack_170);
      lVar15 = 0;
      pcVar2 = acStack_168;
      pcVar12 = pcVar11;
      do {
        if ((&cStack_139)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    pcVar11 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    pcVar1 = pcVar11;
    __Unwind_Resume();
    pcVar3 = acStack_200;
    pcStack_198 = FUN_106c85a74;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar5 = (char **)0x0;
    ppuStack_1a0 = &puStack_100;
    if (pcVar1 != (char *)0x0) {
      plVar14 = *(long **)(pcVar1 + 8);
      pcVar1 = "true";
      if ((int)pcVar10 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(appcStack_1e0,pcVar1);
      acStack_200[0] = '\0';
      acStack_200[1] = '\0';
      acStack_200[2] = '\0';
      acStack_200[3] = '\0';
      acStack_200[4] = '\0';
      acStack_200[5] = '\0';
      acStack_200[6] = '\0';
      acStack_200[7] = '\0';
      acStack_200[8] = '\0';
      acStack_200[9] = '\0';
      acStack_200[10] = '\0';
      acStack_200[0xb] = '\0';
      acStack_200[0xc] = '\0';
      acStack_200[0xd] = '\0';
      acStack_200[0xe] = '\0';
      acStack_200[0xf] = '\0';
      acStack_200[0x10] = '\0';
      acStack_200[0x11] = '\0';
      acStack_200[0x12] = '\0';
      acStack_200[0x13] = '\0';
      acStack_200[0x14] = '\0';
      acStack_200[0x15] = '\0';
      acStack_200[0x16] = '\0';
      acStack_200[0x17] = '\0';
      func_0x00010007e1e8(acStack_200,appcStack_1e0,&lStack_1c8,1);
      dVar16 = dVar16 * 1000.0;
      pcVar12 = (char *)(long)dVar16;
      pcVar10 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14);
      ppcVar5 = &pcStack_1e8;
      pcStack_1e8 = acStack_200;
      func_0x00010007e5dc();
      pcVar9 = pcVar3;
      pcVar11 = acStack_200;
      if (cStack_1c9 < '\0') {
        ppcVar5 = appcStack_1e0[0];
        __ZdlPv();
        pcVar9 = pcVar3;
        pcVar11 = acStack_200;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return;
    }
    ___stack_chk_fail();
    pcStack_1e8 = pcVar11;
    func_0x00010007e5dc(&pcStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(appcStack_1e0[0]);
    }
    ppcVar6 = ppcVar5;
    __Unwind_Resume();
    pcStack_208 = FUN_106c85b98;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar10;
    pcVar3 = pcVar9;
    pcVar13 = pcVar12;
    pcStack_240 = unaff_x24;
    pcStack_238 = pcVar4;
    pcStack_230 = pcVar7;
    pcStack_228 = pcVar2;
    pcStack_220 = pcVar11;
    ppcStack_218 = ppcVar5;
    pppuStack_210 = &ppuStack_1a0;
    _objc_retain(pcVar10);
    if (ppcVar6 != (char **)0x0) {
      plVar14 = (long *)ppcVar6[1];
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pcVar10;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_278,pcVar4);
      pcVar1 = "true";
      if ((int)pcVar9 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_260,pcVar1);
      acStack_298[0] = '\0';
      acStack_298[1] = '\0';
      acStack_298[2] = '\0';
      acStack_298[3] = '\0';
      acStack_298[4] = '\0';
      acStack_298[5] = '\0';
      acStack_298[6] = '\0';
      acStack_298[7] = '\0';
      acStack_298[8] = '\0';
      acStack_298[9] = '\0';
      acStack_298[10] = '\0';
      acStack_298[0xb] = '\0';
      acStack_298[0xc] = '\0';
      acStack_298[0xd] = '\0';
      acStack_298[0xe] = '\0';
      acStack_298[0xf] = '\0';
      acStack_298[0x10] = '\0';
      acStack_298[0x11] = '\0';
      acStack_298[0x12] = '\0';
      acStack_298[0x13] = '\0';
      acStack_298[0x14] = '\0';
      acStack_298[0x15] = '\0';
      acStack_298[0x16] = '\0';
      acStack_298[0x17] = '\0';
      func_0x00010007e1e8(acStack_298,auStack_278,&lStack_248,2);
      pcVar1 = "";
      pcVar3 = acStack_298;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      pcStack_280 = acStack_298;
      func_0x00010007e5dc(&pcStack_280);
      lVar15 = 0;
      pcVar13 = pcVar12;
      do {
        if ((&cStack_249)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    pcVar7 = pcVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar10);
    _objc_release(pcVar10);
    pcVar11 = pcVar7;
    __Unwind_Resume();
    pcVar2 = acStack_310;
    pcStack_2a8 = FUN_106c85d80;
    lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppcVar5 = (char **)0x0;
    ppppuStack_2b0 = &pppuStack_210;
    if (pcVar11 != (char *)0x0) {
      plVar14 = *(long **)(pcVar11 + 8);
      pcVar7 = "true";
      if ((int)pcVar1 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(appcStack_2f0,pcVar7);
      acStack_310[0] = '\0';
      acStack_310[1] = '\0';
      acStack_310[2] = '\0';
      acStack_310[3] = '\0';
      acStack_310[4] = '\0';
      acStack_310[5] = '\0';
      acStack_310[6] = '\0';
      acStack_310[7] = '\0';
      acStack_310[8] = '\0';
      acStack_310[9] = '\0';
      acStack_310[10] = '\0';
      acStack_310[0xb] = '\0';
      acStack_310[0xc] = '\0';
      acStack_310[0xd] = '\0';
      acStack_310[0xe] = '\0';
      acStack_310[0xf] = '\0';
      acStack_310[0x10] = '\0';
      acStack_310[0x11] = '\0';
      acStack_310[0x12] = '\0';
      acStack_310[0x13] = '\0';
      acStack_310[0x14] = '\0';
      acStack_310[0x15] = '\0';
      acStack_310[0x16] = '\0';
      acStack_310[0x17] = '\0';
      func_0x00010007e1e8(acStack_310,appcStack_2f0,&lStack_2d8,1);
      dVar16 = dVar16 * 1000.0;
      pcVar13 = (char *)(long)dVar16;
      pcVar1 = "\x01";
      (**(code **)(*plVar14 + 0x18))(plVar14);
      ppcVar5 = &pcStack_2f8;
      pcStack_2f8 = acStack_310;
      func_0x00010007e5dc();
      pcVar3 = pcVar2;
      pcVar7 = acStack_310;
      if (cStack_2d9 < '\0') {
        ppcVar5 = appcStack_2f0[0];
        __ZdlPv();
        pcVar3 = pcVar2;
        pcVar7 = acStack_310;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
      return;
    }
    ___stack_chk_fail();
    pcStack_2f8 = pcVar7;
    func_0x00010007e5dc(&pcStack_2f8);
    if (cStack_2d9 < '\0') {
      __ZdlPv(appcStack_2f0[0]);
    }
    __Unwind_Resume();
    pcVar9 = acStack_3d0;
    pcStack_318 = FUN_106c85ea4;
    lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar1;
    param_3 = pcVar3;
    pcVar11 = pcVar13;
    pcVar2 = pcVar8;
    ppppuStack_320 = &ppppuStack_2b0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar13);
    if (ppcVar5 != (char **)0x0) {
      plVar14 = (long *)ppcVar5[1];
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(acStack_3b0,pcVar7);
      pcVar7 = "true";
      if ((int)pcVar3 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(auStack_398,pcVar7);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar3 = pcVar13;
        func_0x00010bdc3520();
      }
      _objc_release(pcVar13);
      func_0x00010002b838(auStack_380,pcVar3);
      acStack_3d0[0] = '\0';
      acStack_3d0[1] = '\0';
      acStack_3d0[2] = '\0';
      acStack_3d0[3] = '\0';
      acStack_3d0[4] = '\0';
      acStack_3d0[5] = '\0';
      acStack_3d0[6] = '\0';
      acStack_3d0[7] = '\0';
      acStack_3d0[8] = '\0';
      acStack_3d0[9] = '\0';
      acStack_3d0[10] = '\0';
      acStack_3d0[0xb] = '\0';
      acStack_3d0[0xc] = '\0';
      acStack_3d0[0xd] = '\0';
      acStack_3d0[0xe] = '\0';
      acStack_3d0[0xf] = '\0';
      acStack_3d0[0x10] = '\0';
      acStack_3d0[0x11] = '\0';
      acStack_3d0[0x12] = '\0';
      acStack_3d0[0x13] = '\0';
      acStack_3d0[0x14] = '\0';
      acStack_3d0[0x15] = '\0';
      acStack_3d0[0x16] = '\0';
      acStack_3d0[0x17] = '\0';
      func_0x00010007e1e8(acStack_3d0,acStack_3b0,&lStack_368,3);
      pcVar7 = "";
      (**(code **)(*plVar14 + 0x18))(plVar14);
      puStack_3b8 = acStack_3d0;
      func_0x00010007e5dc(&puStack_3b8);
      lVar15 = 0;
      param_3 = pcVar9;
      pcVar11 = pcVar8;
      do {
        if ((&cStack_369)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        pcVar4 = acStack_3d0;
      } while (lVar15 != -0x48);
    }
    _objc_release(pcVar13);
    pcVar8 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar13);
    do {
      pcVar4 = pcVar4 + -0x18;
    } while (pcVar4 != acStack_3b0);
    _objc_release(pcVar13);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcStack_3d8 = FUN_106c8611c;
    lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = param_3;
    pcVar1 = pcVar7;
    pcVar4 = param_3;
    dVar17 = dVar16;
    ppppuStack_3e0 = &ppppuStack_320;
    _objc_retain();
    if (pcVar8 != (char *)0x0) {
      _objc_retain(param_3);
      plVar14 = *(long **)(pcVar8 + 8);
      pcVar1 = "true";
      if ((int)pcVar7 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_448,pcVar1);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(param_3);
        pcVar1 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_430,pcVar1);
      acStack_468[0] = '\0';
      acStack_468[1] = '\0';
      acStack_468[2] = '\0';
      acStack_468[3] = '\0';
      acStack_468[4] = '\0';
      acStack_468[5] = '\0';
      acStack_468[6] = '\0';
      acStack_468[7] = '\0';
      acStack_468[8] = '\0';
      acStack_468[9] = '\0';
      acStack_468[10] = '\0';
      acStack_468[0xb] = '\0';
      acStack_468[0xc] = '\0';
      acStack_468[0xd] = '\0';
      acStack_468[0xe] = '\0';
      acStack_468[0xf] = '\0';
      acStack_468[0x10] = '\0';
      acStack_468[0x11] = '\0';
      acStack_468[0x12] = '\0';
      acStack_468[0x13] = '\0';
      acStack_468[0x14] = '\0';
      acStack_468[0x15] = '\0';
      acStack_468[0x16] = '\0';
      acStack_468[0x17] = '\0';
      func_0x00010007e1e8(acStack_468,auStack_448,&lStack_418,2);
      dVar17 = dVar16 * 1000.0;
      pcVar11 = (char *)(long)dVar17;
      pcVar1 = "\x01";
      pcVar4 = acStack_468;
      (**(code **)(*plVar14 + 0x18))(plVar14);
      pcStack_450 = acStack_468;
      func_0x00010007e5dc(&pcStack_450);
      lVar15 = 0;
      do {
        if ((&cStack_419)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
      pcVar9 = param_3;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
      ___stack_chk_fail();
      _objc_release(param_3);
      if (cStack_431 < '\0') {
        __ZdlPv(auStack_448[0]);
      }
      _objc_release(param_3);
      _objc_release(param_3);
      __Unwind_Resume();
      pcStack_478 = FUN_106c86328;
      lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      param_3 = pcVar1;
      pcVar7 = pcVar4;
      pcVar8 = pcVar11;
      ppppuStack_480 = &ppppuStack_3e0;
      _objc_retain(pcVar1);
      _objc_retain(pcVar4);
      _objc_retain(pcVar2);
      if (pcVar9 != (char *)0x0) {
        plVar14 = *(long **)(pcVar9 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar7 = "";
        }
        else {
          pcVar7 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(acStack_528,pcVar7);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar7 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar7 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_510,pcVar7);
        pcVar7 = "true";
        if ((int)pcVar11 == 0) {
          pcVar7 = "false";
        }
        func_0x00010002b838(auStack_4f8,pcVar7);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar7 = "";
        }
        else {
          _objc_retainAutorelease(pcVar2);
          pcVar7 = pcVar2;
          func_0x00010bdc3520(pcVar2);
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_4e0,pcVar7);
        acStack_548[0] = '\0';
        acStack_548[1] = '\0';
        acStack_548[2] = '\0';
        acStack_548[3] = '\0';
        acStack_548[4] = '\0';
        acStack_548[5] = '\0';
        acStack_548[6] = '\0';
        acStack_548[7] = '\0';
        acStack_548[8] = '\0';
        acStack_548[9] = '\0';
        acStack_548[10] = '\0';
        acStack_548[0xb] = '\0';
        acStack_548[0xc] = '\0';
        acStack_548[0xd] = '\0';
        acStack_548[0xe] = '\0';
        acStack_548[0xf] = '\0';
        acStack_548[0x10] = '\0';
        acStack_548[0x11] = '\0';
        acStack_548[0x12] = '\0';
        acStack_548[0x13] = '\0';
        acStack_548[0x14] = '\0';
        acStack_548[0x15] = '\0';
        acStack_548[0x16] = '\0';
        acStack_548[0x17] = '\0';
        func_0x00010007e1e8(acStack_548,acStack_528,&lStack_4c8,4);
        param_3 = "";
        pcVar3 = acStack_548;
        pcVar7 = acStack_548;
        (**(code **)(*plVar14 + 0x18))(plVar14);
        pcStack_530 = pcVar3;
        func_0x00010007e5dc(&pcStack_530);
        lVar15 = 0;
        pcVar8 = param_7;
        do {
          if ((&cStack_4c9)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_4e0 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x60);
      }
      _objc_release(pcVar2);
      _objc_release(pcVar4);
      pcVar11 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar2);
      do {
        pcVar3 = pcVar3 + -0x18;
      } while (pcVar3 != acStack_528);
      _objc_release(pcVar2);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      pcVar2 = pcVar11;
      __Unwind_Resume();
      pcVar9 = acStack_610;
      pcStack_558 = FUN_106c86610;
      lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = param_3;
      pcVar4 = pcVar7;
      dVar16 = dVar17;
      ppppuStack_560 = &ppppuStack_480;
      _objc_retain(param_3);
      _objc_retain(pcVar8);
      if (pcVar2 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar8);
        plVar14 = *(long **)(pcVar2 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        pcVar3 = acStack_5f0;
        func_0x00010002b838(acStack_5f0,pcVar1);
        pcVar1 = "true";
        if ((int)pcVar7 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(auStack_5d8,pcVar1);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar1 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_5c0,pcVar1);
        acStack_610[0] = '\0';
        acStack_610[1] = '\0';
        acStack_610[2] = '\0';
        acStack_610[3] = '\0';
        acStack_610[4] = '\0';
        acStack_610[5] = '\0';
        acStack_610[6] = '\0';
        acStack_610[7] = '\0';
        acStack_610[8] = '\0';
        acStack_610[9] = '\0';
        acStack_610[10] = '\0';
        acStack_610[0xb] = '\0';
        acStack_610[0xc] = '\0';
        acStack_610[0xd] = '\0';
        acStack_610[0xe] = '\0';
        acStack_610[0xf] = '\0';
        acStack_610[0x10] = '\0';
        acStack_610[0x11] = '\0';
        acStack_610[0x12] = '\0';
        acStack_610[0x13] = '\0';
        acStack_610[0x14] = '\0';
        acStack_610[0x15] = '\0';
        acStack_610[0x16] = '\0';
        acStack_610[0x17] = '\0';
        func_0x00010007e1e8(acStack_610,acStack_5f0,&lStack_5a8,3);
        dVar16 = dVar17 * 1000.0;
        pcVar1 = "\x01";
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11096d1e0,acStack_610,(long)dVar16);
        puStack_5f8 = acStack_610;
        func_0x00010007e5dc(&puStack_5f8);
        lVar15 = 0;
        pcVar11 = acStack_5f0;
        pcVar4 = pcVar9;
        do {
          if ((&cStack_5a9)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_5c0 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != -0x48);
        _objc_release(pcVar8);
        _objc_release(param_3);
      }
      pcVar7 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5a8) {
        ___stack_chk_fail();
        _objc_release(pcVar8);
        pcStack_648 = acStack_5f0;
        do {
          pcVar11 = pcVar11 + -0x18;
        } while (pcVar11 != pcStack_648);
        _objc_release(pcVar8);
        _objc_release(param_3);
        _objc_release(pcVar8);
        _objc_release(param_3);
        pcVar2 = pcVar7;
        __Unwind_Resume();
        pcStack_618 = FUN_106c868c0;
        lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar9 = pcVar1;
        pcStack_650 = pcVar3;
        pcStack_640 = pcVar11;
        pcStack_638 = pcVar7;
        pcStack_630 = pcVar8;
        pcStack_628 = param_3;
        ppppuStack_620 = &ppppuStack_560;
        _objc_retain(pcVar1);
        param_3 = pcVar9;
        if (pcVar2 != (char *)0x0) {
          plVar14 = *(long **)(pcVar2 + 8);
          _objc_retain(pcVar1);
          if (pcVar1 == (char *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = pcVar1;
            _objc_retainAutorelease(pcVar1);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar1);
          func_0x00010002b838(auStack_670,pcVar7);
          uStack_690 = 0;
          uStack_688 = 0;
          uStack_680 = 0;
          func_0x00010007e1e8(&uStack_690,auStack_670,&lStack_658,1);
          param_3 = "";
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11096d230,&uStack_690,pcVar4);
          puStack_678 = (undefined1 *)&uStack_690;
          func_0x00010007e5dc(&puStack_678);
          if (cStack_659 < '\0') {
            __ZdlPv(auStack_670[0]);
          }
        }
        pcVar7 = pcVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar1);
        _objc_release(pcVar1);
        __Unwind_Resume();
        pcStack_698 = FUN_106c86a34;
        lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar11 = param_3;
        pcVar1 = param_3;
        ppppuStack_6a0 = &ppppuStack_620;
        _objc_retain();
        if (pcVar7 != (char *)0x0) {
          _objc_retain(param_3);
          plVar14 = *(long **)(pcVar7 + 8);
          _objc_retain(param_3);
          if (param_3 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = param_3;
            _objc_retainAutorelease(param_3);
            func_0x00010bdc3520();
          }
          _objc_release(param_3);
          func_0x00010002b838(auStack_6f0,pcVar1);
          uStack_710 = 0;
          uStack_708 = 0;
          uStack_700 = 0;
          func_0x00010007e1e8(&uStack_710,auStack_6f0,&lStack_6d8,1);
          pcVar1 = "\x01";
          (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11096d280,&uStack_710,(long)(dVar16 * 1000.0))
          ;
          puStack_6f8 = (undefined1 *)&uStack_710;
          func_0x00010007e5dc(&puStack_6f8);
          if (cStack_6d9 < '\0') {
            __ZdlPv(auStack_6f0[0]);
          }
          pcVar11 = param_3;
          _objc_release();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6d8) {
          ___stack_chk_fail();
          _objc_release(param_3);
          _objc_release(param_3);
          _objc_release(param_3);
          pcVar7 = pcVar11;
          __Unwind_Resume();
          puStack_738 = (undefined1 *)&uStack_750;
          pcStack_718 = FUN_106c86bc8;
          if (pcVar7 != (char *)0x0) {
            uStack_750 = 0;
            uStack_748 = 0;
            uStack_740 = 0;
            pcStack_730 = pcVar11;
            pcStack_728 = param_3;
            ppppuStack_720 = &ppppuStack_6a0;
            (**(code **)(**(long **)(pcVar7 + 8) + 0x18))
                      (*(long **)(pcVar7 + 8),&UNK_11096d2d0,&uStack_750,pcVar1);
            func_0x00010007e5dc(&puStack_738);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c8588c; end: 106c85a73;  */

/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c860ec) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c8588c(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  char *unaff_x23;
  undefined1 *unaff_x24;
  double dVar15;
  double dVar16;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  char *pcStack_640;
  char *pcStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 *puStack_608;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  char *pcStack_560;
  char *pcStack_558;
  char *pcStack_550;
  char *pcStack_548;
  char *pcStack_540;
  char *pcStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  char acStack_520 [24];
  undefined1 *puStack_508;
  char acStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined8 auStack_4d0 [2];
  char cStack_4b9;
  long lStack_4b8;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  char acStack_458 [24];
  char *pcStack_440;
  char acStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2e0 [24];
  undefined1 *puStack_2c8;
  char acStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  char *pcStack_208;
  char **appcStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  char acStack_1a8 [24];
  char *pcStack_190;
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  undefined1 *puStack_138;
  char *pcStack_130;
  char **ppcStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_110 [24];
  char *pcStack_f8;
  char **appcStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = param_3;
  pcVar5 = param_4;
  pcVar10 = param_5;
  _objc_retain(param_3);
  puVar14 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    pcVar5 = "true";
    if ((int)param_4 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar5);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar6 = "";
    param_4 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_80 = param_4;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    pcVar10 = param_5;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar7 = acStack_110;
  pcStack_a8 = FUN_106c85a74;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar3 = (char **)0x0;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    pcVar5 = "true";
    if ((int)pcVar6 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(appcStack_f0,pcVar5);
    acStack_110[0] = '\0';
    acStack_110[1] = '\0';
    acStack_110[2] = '\0';
    acStack_110[3] = '\0';
    acStack_110[4] = '\0';
    acStack_110[5] = '\0';
    acStack_110[6] = '\0';
    acStack_110[7] = '\0';
    acStack_110[8] = '\0';
    acStack_110[9] = '\0';
    acStack_110[10] = '\0';
    acStack_110[0xb] = '\0';
    acStack_110[0xc] = '\0';
    acStack_110[0xd] = '\0';
    acStack_110[0xe] = '\0';
    acStack_110[0xf] = '\0';
    acStack_110[0x10] = '\0';
    acStack_110[0x11] = '\0';
    acStack_110[0x12] = '\0';
    acStack_110[0x13] = '\0';
    acStack_110[0x14] = '\0';
    acStack_110[0x15] = '\0';
    acStack_110[0x16] = '\0';
    acStack_110[0x17] = '\0';
    func_0x00010007e1e8(acStack_110,appcStack_f0,&lStack_d8,1);
    param_1 = param_1 * 1000.0;
    pcVar10 = (char *)(long)param_1;
    pcVar6 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    ppcVar3 = &pcStack_f8;
    pcStack_f8 = acStack_110;
    func_0x00010007e5dc();
    pcVar5 = pcVar7;
    pcVar1 = acStack_110;
    if (cStack_d9 < '\0') {
      ppcVar3 = appcStack_f0[0];
      __ZdlPv();
      pcVar5 = pcVar7;
      pcVar1 = acStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = pcVar1;
  func_0x00010007e5dc(&pcStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appcStack_f0[0]);
  }
  ppcVar4 = ppcVar3;
  __Unwind_Resume();
  pcStack_118 = FUN_106c85b98;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar7 = pcVar5;
  pcVar11 = pcVar10;
  puStack_150 = unaff_x24;
  pcStack_148 = unaff_x23;
  pcStack_140 = param_4;
  puStack_138 = puVar14;
  pcStack_130 = pcVar1;
  ppcStack_128 = ppcVar3;
  ppuStack_120 = &puStack_b0;
  _objc_retain(pcVar6);
  if (ppcVar4 != (char **)0x0) {
    plVar13 = (long *)ppcVar4[1];
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = pcVar6;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_188,unaff_x23);
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_170,pcVar1);
    acStack_1a8[0] = '\0';
    acStack_1a8[1] = '\0';
    acStack_1a8[2] = '\0';
    acStack_1a8[3] = '\0';
    acStack_1a8[4] = '\0';
    acStack_1a8[5] = '\0';
    acStack_1a8[6] = '\0';
    acStack_1a8[7] = '\0';
    acStack_1a8[8] = '\0';
    acStack_1a8[9] = '\0';
    acStack_1a8[10] = '\0';
    acStack_1a8[0xb] = '\0';
    acStack_1a8[0xc] = '\0';
    acStack_1a8[0xd] = '\0';
    acStack_1a8[0xe] = '\0';
    acStack_1a8[0xf] = '\0';
    acStack_1a8[0x10] = '\0';
    acStack_1a8[0x11] = '\0';
    acStack_1a8[0x12] = '\0';
    acStack_1a8[0x13] = '\0';
    acStack_1a8[0x14] = '\0';
    acStack_1a8[0x15] = '\0';
    acStack_1a8[0x16] = '\0';
    acStack_1a8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a8,auStack_188,&lStack_158,2);
    pcVar2 = "";
    pcVar7 = acStack_1a8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_190 = acStack_1a8;
    func_0x00010007e5dc(&pcStack_190);
    lVar12 = 0;
    pcVar11 = pcVar10;
    do {
      if ((&cStack_159)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar5 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcVar10 = acStack_220;
  pcStack_1b8 = FUN_106c85d80;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar3 = (char **)0x0;
  pppuStack_1c0 = &ppuStack_120;
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
    pcVar5 = "true";
    if ((int)pcVar2 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(appcStack_200,pcVar5);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,appcStack_200,&lStack_1e8,1);
    param_1 = param_1 * 1000.0;
    pcVar11 = (char *)(long)param_1;
    pcVar2 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    ppcVar3 = &pcStack_208;
    pcStack_208 = acStack_220;
    func_0x00010007e5dc();
    pcVar7 = pcVar10;
    pcVar5 = acStack_220;
    if (cStack_1e9 < '\0') {
      ppcVar3 = appcStack_200[0];
      __ZdlPv();
      pcVar7 = pcVar10;
      pcVar5 = acStack_220;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = pcVar5;
  func_0x00010007e5dc(&pcStack_208);
  if (cStack_1e9 < '\0') {
    __ZdlPv(appcStack_200[0]);
  }
  __Unwind_Resume();
  pcVar8 = acStack_2e0;
  pcStack_228 = FUN_106c85ea4;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar6 = pcVar7;
  pcVar10 = pcVar11;
  pcVar1 = param_6;
  pppuStack_230 = &pppuStack_1c0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar11);
  if (ppcVar3 != (char **)0x0) {
    plVar13 = (long *)ppcVar3[1];
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(acStack_2c0,pcVar5);
    pcVar5 = "true";
    if ((int)pcVar7 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(auStack_2a8,pcVar5);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar7 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_290,pcVar7);
    acStack_2e0[0] = '\0';
    acStack_2e0[1] = '\0';
    acStack_2e0[2] = '\0';
    acStack_2e0[3] = '\0';
    acStack_2e0[4] = '\0';
    acStack_2e0[5] = '\0';
    acStack_2e0[6] = '\0';
    acStack_2e0[7] = '\0';
    acStack_2e0[8] = '\0';
    acStack_2e0[9] = '\0';
    acStack_2e0[10] = '\0';
    acStack_2e0[0xb] = '\0';
    acStack_2e0[0xc] = '\0';
    acStack_2e0[0xd] = '\0';
    acStack_2e0[0xe] = '\0';
    acStack_2e0[0xf] = '\0';
    acStack_2e0[0x10] = '\0';
    acStack_2e0[0x11] = '\0';
    acStack_2e0[0x12] = '\0';
    acStack_2e0[0x13] = '\0';
    acStack_2e0[0x14] = '\0';
    acStack_2e0[0x15] = '\0';
    acStack_2e0[0x16] = '\0';
    acStack_2e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2e0,acStack_2c0,&lStack_278,3);
    pcVar5 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_2c8 = acStack_2e0;
    func_0x00010007e5dc(&puStack_2c8);
    lVar12 = 0;
    pcVar6 = pcVar8;
    pcVar10 = param_6;
    do {
      if ((&cStack_279)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x23 = acStack_2e0;
    } while (lVar12 != -0x48);
  }
  _objc_release(pcVar11);
  pcVar8 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != acStack_2c0);
  _objc_release(pcVar11);
  _objc_release(pcVar2);
  __Unwind_Resume();
  pcStack_2e8 = FUN_106c8611c;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar6;
  pcVar2 = pcVar5;
  pcVar11 = pcVar6;
  dVar15 = param_1;
  pppuStack_2f0 = &pppuStack_230;
  _objc_retain();
  if (pcVar8 != (char *)0x0) {
    _objc_retain(pcVar6);
    plVar13 = *(long **)(pcVar8 + 8);
    pcVar10 = "true";
    if ((int)pcVar5 == 0) {
      pcVar10 = "false";
    }
    func_0x00010002b838(auStack_358,pcVar10);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar5 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_340,pcVar5);
    acStack_378[0] = '\0';
    acStack_378[1] = '\0';
    acStack_378[2] = '\0';
    acStack_378[3] = '\0';
    acStack_378[4] = '\0';
    acStack_378[5] = '\0';
    acStack_378[6] = '\0';
    acStack_378[7] = '\0';
    acStack_378[8] = '\0';
    acStack_378[9] = '\0';
    acStack_378[10] = '\0';
    acStack_378[0xb] = '\0';
    acStack_378[0xc] = '\0';
    acStack_378[0xd] = '\0';
    acStack_378[0xe] = '\0';
    acStack_378[0xf] = '\0';
    acStack_378[0x10] = '\0';
    acStack_378[0x11] = '\0';
    acStack_378[0x12] = '\0';
    acStack_378[0x13] = '\0';
    acStack_378[0x14] = '\0';
    acStack_378[0x15] = '\0';
    acStack_378[0x16] = '\0';
    acStack_378[0x17] = '\0';
    func_0x00010007e1e8(acStack_378,auStack_358,&lStack_328,2);
    dVar15 = param_1 * 1000.0;
    pcVar10 = (char *)(long)dVar15;
    pcVar2 = "\x01";
    pcVar11 = acStack_378;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_360 = acStack_378;
    func_0x00010007e5dc(&pcStack_360);
    lVar12 = 0;
    do {
      if ((&cStack_329)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
    pcVar9 = pcVar6;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_341 < '\0') {
      __ZdlPv(auStack_358[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar6);
    __Unwind_Resume();
    pcStack_388 = FUN_106c86328;
    lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar2;
    pcVar5 = pcVar11;
    pcVar8 = pcVar10;
    pppuStack_390 = &pppuStack_2f0;
    _objc_retain(pcVar2);
    _objc_retain(pcVar11);
    _objc_retain(pcVar1);
    if (pcVar9 != (char *)0x0) {
      plVar13 = *(long **)(pcVar9 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(acStack_438,pcVar5);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar5 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_420,pcVar5);
      pcVar5 = "true";
      if ((int)pcVar10 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_408,pcVar5);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar1);
        pcVar5 = pcVar1;
        func_0x00010bdc3520(pcVar1);
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_3f0,pcVar5);
      acStack_458[0] = '\0';
      acStack_458[1] = '\0';
      acStack_458[2] = '\0';
      acStack_458[3] = '\0';
      acStack_458[4] = '\0';
      acStack_458[5] = '\0';
      acStack_458[6] = '\0';
      acStack_458[7] = '\0';
      acStack_458[8] = '\0';
      acStack_458[9] = '\0';
      acStack_458[10] = '\0';
      acStack_458[0xb] = '\0';
      acStack_458[0xc] = '\0';
      acStack_458[0xd] = '\0';
      acStack_458[0xe] = '\0';
      acStack_458[0xf] = '\0';
      acStack_458[0x10] = '\0';
      acStack_458[0x11] = '\0';
      acStack_458[0x12] = '\0';
      acStack_458[0x13] = '\0';
      acStack_458[0x14] = '\0';
      acStack_458[0x15] = '\0';
      acStack_458[0x16] = '\0';
      acStack_458[0x17] = '\0';
      func_0x00010007e1e8(acStack_458,acStack_438,&lStack_3d8,4);
      pcVar6 = "";
      pcVar7 = acStack_458;
      pcVar5 = acStack_458;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      pcStack_440 = pcVar7;
      func_0x00010007e5dc(&pcStack_440);
      lVar12 = 0;
      pcVar8 = param_7;
      do {
        if ((&cStack_3d9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3f0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x60);
    }
    _objc_release(pcVar1);
    _objc_release(pcVar11);
    pcVar10 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar1);
    do {
      pcVar7 = pcVar7 + -0x18;
    } while (pcVar7 != acStack_438);
    _objc_release(pcVar1);
    _objc_release(pcVar11);
    _objc_release(pcVar2);
    pcVar2 = pcVar10;
    __Unwind_Resume();
    pcVar9 = acStack_520;
    pcStack_468 = FUN_106c86610;
    lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    pcVar11 = pcVar5;
    dVar16 = dVar15;
    pppuStack_470 = &pppuStack_390;
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    if (pcVar2 != (char *)0x0) {
      _objc_retain(pcVar6);
      _objc_retain(pcVar8);
      plVar13 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      pcVar7 = acStack_500;
      func_0x00010002b838(acStack_500,pcVar10);
      pcVar10 = "true";
      if ((int)pcVar5 == 0) {
        pcVar10 = "false";
      }
      func_0x00010002b838(auStack_4e8,pcVar10);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar5 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_4d0,pcVar5);
      acStack_520[0] = '\0';
      acStack_520[1] = '\0';
      acStack_520[2] = '\0';
      acStack_520[3] = '\0';
      acStack_520[4] = '\0';
      acStack_520[5] = '\0';
      acStack_520[6] = '\0';
      acStack_520[7] = '\0';
      acStack_520[8] = '\0';
      acStack_520[9] = '\0';
      acStack_520[10] = '\0';
      acStack_520[0xb] = '\0';
      acStack_520[0xc] = '\0';
      acStack_520[0xd] = '\0';
      acStack_520[0xe] = '\0';
      acStack_520[0xf] = '\0';
      acStack_520[0x10] = '\0';
      acStack_520[0x11] = '\0';
      acStack_520[0x12] = '\0';
      acStack_520[0x13] = '\0';
      acStack_520[0x14] = '\0';
      acStack_520[0x15] = '\0';
      acStack_520[0x16] = '\0';
      acStack_520[0x17] = '\0';
      func_0x00010007e1e8(acStack_520,acStack_500,&lStack_4b8,3);
      dVar16 = dVar15 * 1000.0;
      pcVar1 = "\x01";
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11096d1e0,acStack_520,(long)dVar16);
      puStack_508 = acStack_520;
      func_0x00010007e5dc(&puStack_508);
      lVar12 = 0;
      pcVar10 = acStack_500;
      pcVar11 = pcVar9;
      do {
        if ((&cStack_4b9)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4d0 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
      } while (lVar12 != -0x48);
      _objc_release(pcVar8);
      _objc_release(pcVar6);
    }
    pcVar5 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4b8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      pcStack_558 = acStack_500;
      do {
        pcVar10 = pcVar10 + -0x18;
      } while (pcVar10 != pcStack_558);
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      pcVar2 = pcVar5;
      __Unwind_Resume();
      pcStack_528 = FUN_106c868c0;
      lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar1;
      pcStack_560 = pcVar7;
      pcStack_550 = pcVar10;
      pcStack_548 = pcVar5;
      pcStack_540 = pcVar8;
      pcStack_538 = pcVar6;
      pppuStack_530 = &pppuStack_470;
      _objc_retain(pcVar1);
      pcVar6 = pcVar9;
      if (pcVar2 != (char *)0x0) {
        plVar13 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_580,pcVar5);
        uStack_5a0 = 0;
        uStack_598 = 0;
        uStack_590 = 0;
        func_0x00010007e1e8(&uStack_5a0,auStack_580,&lStack_568,1);
        pcVar6 = "";
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11096d230,&uStack_5a0,pcVar11);
        puStack_588 = (undefined1 *)&uStack_5a0;
        func_0x00010007e5dc(&puStack_588);
        if (cStack_569 < '\0') {
          __ZdlPv(auStack_580[0]);
        }
      }
      pcVar5 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      __Unwind_Resume();
      pcStack_5a8 = FUN_106c86a34;
      lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar6;
      pcVar10 = pcVar6;
      pppuStack_5b0 = &pppuStack_530;
      _objc_retain();
      if (pcVar5 != (char *)0x0) {
        _objc_retain(pcVar6);
        plVar13 = *(long **)(pcVar5 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_600,pcVar5);
        uStack_620 = 0;
        uStack_618 = 0;
        uStack_610 = 0;
        func_0x00010007e1e8(&uStack_620,auStack_600,&lStack_5e8,1);
        pcVar10 = "\x01";
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11096d280,&uStack_620,(long)(dVar16 * 1000.0));
        puStack_608 = (undefined1 *)&uStack_620;
        func_0x00010007e5dc(&puStack_608);
        if (cStack_5e9 < '\0') {
          __ZdlPv(auStack_600[0]);
        }
        pcVar1 = pcVar6;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5e8) {
        ___stack_chk_fail();
        _objc_release(pcVar6);
        _objc_release(pcVar6);
        _objc_release(pcVar6);
        pcVar5 = pcVar1;
        __Unwind_Resume();
        puStack_648 = (undefined1 *)&uStack_660;
        pcStack_628 = FUN_106c86bc8;
        if (pcVar5 != (char *)0x0) {
          uStack_660 = 0;
          uStack_658 = 0;
          uStack_650 = 0;
          pcStack_640 = pcVar1;
          pcStack_638 = pcVar6;
          pppuStack_630 = &pppuStack_5b0;
          (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
                    (*(long **)(pcVar5 + 8),&UNK_11096d2d0,&uStack_660,pcVar10);
          func_0x00010007e5dc(&puStack_648);
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
  return;
}



/* Entry: 106c85a74; end: 106c85b97;  */

/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c860ec) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c85a74(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  char *unaff_x20;
  long lVar13;
  char *unaff_x23;
  double dVar14;
  double dVar15;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 *puStack_5a8;
  char *pcStack_5a0;
  char *pcStack_598;
  undefined8 ***pppuStack_590;
  code *pcStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 *puStack_568;
  undefined8 auStack_560 [2];
  char cStack_549;
  long lStack_548;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 *puStack_4e8;
  undefined8 auStack_4e0 [2];
  char cStack_4c9;
  long lStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  char *pcStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  char acStack_480 [24];
  undefined1 *puStack_468;
  char acStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  char acStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  char *pcStack_168;
  char **appcStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_108 [24];
  char *pcStack_f0;
  undefined1 auStack_e8 [24];
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  pcVar8 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    pcVar5 = "true";
    if ((int)param_3 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar5);
    acStack_70[0] = '\0';
    acStack_70[1] = '\0';
    acStack_70[2] = '\0';
    acStack_70[3] = '\0';
    acStack_70[4] = '\0';
    acStack_70[5] = '\0';
    acStack_70[6] = '\0';
    acStack_70[7] = '\0';
    acStack_70[8] = '\0';
    acStack_70[9] = '\0';
    acStack_70[10] = '\0';
    acStack_70[0xb] = '\0';
    acStack_70[0xc] = '\0';
    acStack_70[0xd] = '\0';
    acStack_70[0xe] = '\0';
    acStack_70[0xf] = '\0';
    acStack_70[0x10] = '\0';
    acStack_70[0x11] = '\0';
    acStack_70[0x12] = '\0';
    acStack_70[0x13] = '\0';
    acStack_70[0x14] = '\0';
    acStack_70[0x15] = '\0';
    acStack_70[0x16] = '\0';
    acStack_70[0x17] = '\0';
    func_0x00010007e1e8(acStack_70,appuStack_50,&lStack_38,1);
    param_1 = param_1 * 1000.0;
    param_5 = (char *)(long)param_1;
    param_3 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppuVar1 = &puStack_58;
    puStack_58 = acStack_70;
    func_0x00010007e5dc();
    param_4 = pcVar8;
    unaff_x20 = acStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      param_4 = pcVar8;
      unaff_x20 = acStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x20;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_106c85b98;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = param_3;
  pcVar5 = param_4;
  pcVar10 = param_5;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar12 = (long *)ppuVar1[1];
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_e8,unaff_x23);
    pcVar8 = "true";
    if ((int)param_4 == 0) {
      pcVar8 = "false";
    }
    func_0x00010002b838(auStack_d0,pcVar8);
    acStack_108[0] = '\0';
    acStack_108[1] = '\0';
    acStack_108[2] = '\0';
    acStack_108[3] = '\0';
    acStack_108[4] = '\0';
    acStack_108[5] = '\0';
    acStack_108[6] = '\0';
    acStack_108[7] = '\0';
    acStack_108[8] = '\0';
    acStack_108[9] = '\0';
    acStack_108[10] = '\0';
    acStack_108[0xb] = '\0';
    acStack_108[0xc] = '\0';
    acStack_108[0xd] = '\0';
    acStack_108[0xe] = '\0';
    acStack_108[0xf] = '\0';
    acStack_108[0x10] = '\0';
    acStack_108[0x11] = '\0';
    acStack_108[0x12] = '\0';
    acStack_108[0x13] = '\0';
    acStack_108[0x14] = '\0';
    acStack_108[0x15] = '\0';
    acStack_108[0x16] = '\0';
    acStack_108[0x17] = '\0';
    func_0x00010007e1e8(acStack_108,auStack_e8,&lStack_b8,2);
    pcVar8 = "";
    pcVar5 = acStack_108;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_f0 = acStack_108;
    func_0x00010007e5dc(&pcStack_f0);
    lVar13 = 0;
    pcVar10 = param_5;
    do {
      if ((&cStack_b9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar11 = acStack_180;
  pcStack_118 = FUN_106c85d80;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar4 = (char **)0x0;
  ppuStack_120 = &puStack_80;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    pcVar5 = "true";
    if ((int)pcVar8 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(appcStack_160,pcVar5);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,appcStack_160,&lStack_148,1);
    param_1 = param_1 * 1000.0;
    pcVar10 = (char *)(long)param_1;
    pcVar8 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppcVar4 = &pcStack_168;
    pcStack_168 = acStack_180;
    func_0x00010007e5dc();
    pcVar5 = pcVar11;
    pcVar2 = acStack_180;
    if (cStack_149 < '\0') {
      ppcVar4 = appcStack_160[0];
      __ZdlPv();
      pcVar5 = pcVar11;
      pcVar2 = acStack_180;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = pcVar2;
  func_0x00010007e5dc(&pcStack_168);
  if (cStack_149 < '\0') {
    __ZdlPv(appcStack_160[0]);
  }
  __Unwind_Resume();
  pcVar6 = acStack_240;
  pcStack_188 = FUN_106c85ea4;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar8;
  pcVar3 = pcVar5;
  pcVar11 = pcVar10;
  pcVar9 = param_6;
  pppuStack_190 = &ppuStack_120;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  if (ppcVar4 != (char **)0x0) {
    plVar12 = (long *)ppcVar4[1];
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(acStack_220,pcVar2);
    pcVar2 = "true";
    if ((int)pcVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_208,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar5 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1f0,pcVar5);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar2 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar13 = 0;
    pcVar3 = pcVar6;
    pcVar11 = param_6;
    do {
      if ((&cStack_1d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x23 = acStack_240;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar10);
  pcVar6 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != acStack_220);
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  __Unwind_Resume();
  pcStack_248 = FUN_106c8611c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar3;
  pcVar8 = pcVar2;
  pcVar10 = pcVar3;
  dVar14 = param_1;
  pppuStack_250 = &pppuStack_190;
  _objc_retain();
  if (pcVar6 != (char *)0x0) {
    _objc_retain(pcVar3);
    plVar12 = *(long **)(pcVar6 + 8);
    pcVar8 = "true";
    if ((int)pcVar2 == 0) {
      pcVar8 = "false";
    }
    func_0x00010002b838(auStack_2b8,pcVar8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar8 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar8 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2a0,pcVar8);
    acStack_2d8[0] = '\0';
    acStack_2d8[1] = '\0';
    acStack_2d8[2] = '\0';
    acStack_2d8[3] = '\0';
    acStack_2d8[4] = '\0';
    acStack_2d8[5] = '\0';
    acStack_2d8[6] = '\0';
    acStack_2d8[7] = '\0';
    acStack_2d8[8] = '\0';
    acStack_2d8[9] = '\0';
    acStack_2d8[10] = '\0';
    acStack_2d8[0xb] = '\0';
    acStack_2d8[0xc] = '\0';
    acStack_2d8[0xd] = '\0';
    acStack_2d8[0xe] = '\0';
    acStack_2d8[0xf] = '\0';
    acStack_2d8[0x10] = '\0';
    acStack_2d8[0x11] = '\0';
    acStack_2d8[0x12] = '\0';
    acStack_2d8[0x13] = '\0';
    acStack_2d8[0x14] = '\0';
    acStack_2d8[0x15] = '\0';
    acStack_2d8[0x16] = '\0';
    acStack_2d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2d8,auStack_2b8,&lStack_288,2);
    dVar14 = param_1 * 1000.0;
    pcVar11 = (char *)(long)dVar14;
    pcVar8 = "\x01";
    pcVar10 = acStack_2d8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_2c0 = acStack_2d8;
    func_0x00010007e5dc(&pcStack_2c0);
    lVar13 = 0;
    do {
      if ((&cStack_289)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
    pcVar7 = pcVar3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    if (cStack_2a1 < '\0') {
      __ZdlPv(auStack_2b8[0]);
    }
    _objc_release(pcVar3);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcStack_2e8 = FUN_106c86328;
    lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar8;
    pcVar2 = pcVar10;
    pcVar6 = pcVar11;
    pppuStack_2f0 = &pppuStack_250;
    _objc_retain(pcVar8);
    _objc_retain(pcVar10);
    _objc_retain(pcVar9);
    if (pcVar7 != (char *)0x0) {
      plVar12 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(acStack_398,pcVar5);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar5 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_380,pcVar5);
      pcVar5 = "true";
      if ((int)pcVar11 == 0) {
        pcVar5 = "false";
      }
      func_0x00010002b838(auStack_368,pcVar5);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar5 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_350,pcVar5);
      acStack_3b8[0] = '\0';
      acStack_3b8[1] = '\0';
      acStack_3b8[2] = '\0';
      acStack_3b8[3] = '\0';
      acStack_3b8[4] = '\0';
      acStack_3b8[5] = '\0';
      acStack_3b8[6] = '\0';
      acStack_3b8[7] = '\0';
      acStack_3b8[8] = '\0';
      acStack_3b8[9] = '\0';
      acStack_3b8[10] = '\0';
      acStack_3b8[0xb] = '\0';
      acStack_3b8[0xc] = '\0';
      acStack_3b8[0xd] = '\0';
      acStack_3b8[0xe] = '\0';
      acStack_3b8[0xf] = '\0';
      acStack_3b8[0x10] = '\0';
      acStack_3b8[0x11] = '\0';
      acStack_3b8[0x12] = '\0';
      acStack_3b8[0x13] = '\0';
      acStack_3b8[0x14] = '\0';
      acStack_3b8[0x15] = '\0';
      acStack_3b8[0x16] = '\0';
      acStack_3b8[0x17] = '\0';
      func_0x00010007e1e8(acStack_3b8,acStack_398,&lStack_338,4);
      pcVar3 = "";
      pcVar5 = acStack_3b8;
      pcVar2 = acStack_3b8;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      pcStack_3a0 = pcVar5;
      func_0x00010007e5dc(&pcStack_3a0);
      lVar13 = 0;
      pcVar6 = param_7;
      do {
        if ((&cStack_339)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x60);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar10);
    pcVar11 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar9);
    do {
      pcVar5 = pcVar5 + -0x18;
    } while (pcVar5 != acStack_398);
    _objc_release(pcVar9);
    _objc_release(pcVar10);
    _objc_release(pcVar8);
    pcVar10 = pcVar11;
    __Unwind_Resume();
    pcVar7 = acStack_480;
    pcStack_3c8 = FUN_106c86610;
    lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar3;
    pcVar9 = pcVar2;
    dVar15 = dVar14;
    pppuStack_3d0 = &pppuStack_2f0;
    _objc_retain(pcVar3);
    _objc_retain(pcVar6);
    if (pcVar10 != (char *)0x0) {
      _objc_retain(pcVar3);
      _objc_retain(pcVar6);
      plVar12 = *(long **)(pcVar10 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      pcVar5 = acStack_460;
      func_0x00010002b838(acStack_460,pcVar8);
      pcVar8 = "true";
      if ((int)pcVar2 == 0) {
        pcVar8 = "false";
      }
      func_0x00010002b838(auStack_448,pcVar8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar8 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar8 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_430,pcVar8);
      acStack_480[0] = '\0';
      acStack_480[1] = '\0';
      acStack_480[2] = '\0';
      acStack_480[3] = '\0';
      acStack_480[4] = '\0';
      acStack_480[5] = '\0';
      acStack_480[6] = '\0';
      acStack_480[7] = '\0';
      acStack_480[8] = '\0';
      acStack_480[9] = '\0';
      acStack_480[10] = '\0';
      acStack_480[0xb] = '\0';
      acStack_480[0xc] = '\0';
      acStack_480[0xd] = '\0';
      acStack_480[0xe] = '\0';
      acStack_480[0xf] = '\0';
      acStack_480[0x10] = '\0';
      acStack_480[0x11] = '\0';
      acStack_480[0x12] = '\0';
      acStack_480[0x13] = '\0';
      acStack_480[0x14] = '\0';
      acStack_480[0x15] = '\0';
      acStack_480[0x16] = '\0';
      acStack_480[0x17] = '\0';
      func_0x00010007e1e8(acStack_480,acStack_460,&lStack_418,3);
      dVar15 = dVar14 * 1000.0;
      pcVar8 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11096d1e0,acStack_480,(long)dVar15);
      puStack_468 = acStack_480;
      func_0x00010007e5dc(&puStack_468);
      lVar13 = 0;
      pcVar11 = acStack_460;
      pcVar9 = pcVar7;
      do {
        if ((&cStack_419)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x48);
      _objc_release(pcVar6);
      _objc_release(pcVar3);
    }
    pcVar10 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      pcStack_4b8 = acStack_460;
      do {
        pcVar11 = pcVar11 + -0x18;
      } while (pcVar11 != pcStack_4b8);
      _objc_release(pcVar6);
      _objc_release(pcVar3);
      _objc_release(pcVar6);
      _objc_release(pcVar3);
      pcVar2 = pcVar10;
      __Unwind_Resume();
      pcStack_488 = FUN_106c868c0;
      lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar7 = pcVar8;
      pcStack_4c0 = pcVar5;
      pcStack_4b0 = pcVar11;
      pcStack_4a8 = pcVar10;
      pcStack_4a0 = pcVar6;
      pcStack_498 = pcVar3;
      pppuStack_490 = &pppuStack_3d0;
      _objc_retain(pcVar8);
      pcVar3 = pcVar7;
      if (pcVar2 != (char *)0x0) {
        plVar12 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_4e0,pcVar5);
        uStack_500 = 0;
        uStack_4f8 = 0;
        uStack_4f0 = 0;
        func_0x00010007e1e8(&uStack_500,auStack_4e0,&lStack_4c8,1);
        pcVar3 = "";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11096d230,&uStack_500,pcVar9);
        puStack_4e8 = (undefined1 *)&uStack_500;
        func_0x00010007e5dc(&puStack_4e8);
        if (cStack_4c9 < '\0') {
          __ZdlPv(auStack_4e0[0]);
        }
      }
      pcVar5 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar8);
      _objc_release(pcVar8);
      __Unwind_Resume();
      pcStack_508 = FUN_106c86a34;
      lStack_548 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar10 = pcVar3;
      pcVar8 = pcVar3;
      pppuStack_510 = &pppuStack_490;
      _objc_retain();
      if (pcVar5 != (char *)0x0) {
        _objc_retain(pcVar3);
        plVar12 = *(long **)(pcVar5 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar8 = "";
        }
        else {
          pcVar8 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_560,pcVar8);
        uStack_580 = 0;
        uStack_578 = 0;
        uStack_570 = 0;
        func_0x00010007e1e8(&uStack_580,auStack_560,&lStack_548,1);
        pcVar8 = "\x01";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11096d280,&uStack_580,(long)(dVar15 * 1000.0));
        puStack_568 = (undefined1 *)&uStack_580;
        func_0x00010007e5dc(&puStack_568);
        if (cStack_549 < '\0') {
          __ZdlPv(auStack_560[0]);
        }
        pcVar10 = pcVar3;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_548) {
        ___stack_chk_fail();
        _objc_release(pcVar3);
        _objc_release(pcVar3);
        _objc_release(pcVar3);
        pcVar5 = pcVar10;
        __Unwind_Resume();
        puStack_5a8 = (undefined1 *)&uStack_5c0;
        pcStack_588 = FUN_106c86bc8;
        if (pcVar5 != (char *)0x0) {
          uStack_5c0 = 0;
          uStack_5b8 = 0;
          uStack_5b0 = 0;
          pcStack_5a0 = pcVar10;
          pcStack_598 = pcVar3;
          pppuStack_590 = &pppuStack_510;
          (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
                    (*(long **)(pcVar5 + 8),&UNK_11096d2d0,&uStack_5c0,pcVar8);
          func_0x00010007e5dc(&puStack_5a8);
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 106c85b98; end: 106c85d7f;  */

/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c860ec) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c85b98(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x23;
  double dVar13;
  double dVar14;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 *puStack_538;
  char *pcStack_530;
  char *pcStack_528;
  undefined8 ***pppuStack_520;
  code *pcStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined1 *puStack_4f8;
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  long lStack_4d8;
  undefined8 ***pppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 *puStack_478;
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  char *pcStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  char *pcStack_430;
  char *pcStack_428;
  undefined8 ***pppuStack_420;
  code *pcStack_418;
  char acStack_410 [24];
  undefined1 *puStack_3f8;
  char acStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  char acStack_348 [24];
  char *pcStack_330;
  char acStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  char acStack_268 [24];
  char *pcStack_250;
  undefined8 auStack_248 [2];
  char cStack_231;
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  char acStack_1d0 [24];
  undefined1 *puStack_1b8;
  char acStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_110 [24];
  char *pcStack_f8;
  char **appcStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = param_3;
  pcVar4 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,unaff_x23);
    pcVar7 = "true";
    if ((int)param_4 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar7);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar7 = "";
    pcVar4 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    pcVar9 = param_5;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar10 = acStack_110;
  pcStack_a8 = FUN_106c85d80;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar3 = (char **)0x0;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    pcVar4 = "true";
    if ((int)pcVar7 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(appcStack_f0,pcVar4);
    acStack_110[0] = '\0';
    acStack_110[1] = '\0';
    acStack_110[2] = '\0';
    acStack_110[3] = '\0';
    acStack_110[4] = '\0';
    acStack_110[5] = '\0';
    acStack_110[6] = '\0';
    acStack_110[7] = '\0';
    acStack_110[8] = '\0';
    acStack_110[9] = '\0';
    acStack_110[10] = '\0';
    acStack_110[0xb] = '\0';
    acStack_110[0xc] = '\0';
    acStack_110[0xd] = '\0';
    acStack_110[0xe] = '\0';
    acStack_110[0xf] = '\0';
    acStack_110[0x10] = '\0';
    acStack_110[0x11] = '\0';
    acStack_110[0x12] = '\0';
    acStack_110[0x13] = '\0';
    acStack_110[0x14] = '\0';
    acStack_110[0x15] = '\0';
    acStack_110[0x16] = '\0';
    acStack_110[0x17] = '\0';
    func_0x00010007e1e8(acStack_110,appcStack_f0,&lStack_d8,1);
    param_1 = param_1 * 1000.0;
    pcVar9 = (char *)(long)param_1;
    pcVar7 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    ppcVar3 = &pcStack_f8;
    pcStack_f8 = acStack_110;
    func_0x00010007e5dc();
    pcVar4 = pcVar10;
    pcVar1 = acStack_110;
    if (cStack_d9 < '\0') {
      ppcVar3 = appcStack_f0[0];
      __ZdlPv();
      pcVar4 = pcVar10;
      pcVar1 = acStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = pcVar1;
  func_0x00010007e5dc(&pcStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appcStack_f0[0]);
  }
  __Unwind_Resume();
  pcVar5 = acStack_1d0;
  pcStack_118 = FUN_106c85ea4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  pcVar2 = pcVar4;
  pcVar10 = pcVar9;
  pcVar8 = param_6;
  ppuStack_120 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar9);
  if (ppcVar3 != (char **)0x0) {
    plVar12 = (long *)ppcVar3[1];
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(acStack_1b0,pcVar1);
    pcVar1 = "true";
    if ((int)pcVar4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar4 = pcVar9;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_180,pcVar4);
    acStack_1d0[0] = '\0';
    acStack_1d0[1] = '\0';
    acStack_1d0[2] = '\0';
    acStack_1d0[3] = '\0';
    acStack_1d0[4] = '\0';
    acStack_1d0[5] = '\0';
    acStack_1d0[6] = '\0';
    acStack_1d0[7] = '\0';
    acStack_1d0[8] = '\0';
    acStack_1d0[9] = '\0';
    acStack_1d0[10] = '\0';
    acStack_1d0[0xb] = '\0';
    acStack_1d0[0xc] = '\0';
    acStack_1d0[0xd] = '\0';
    acStack_1d0[0xe] = '\0';
    acStack_1d0[0xf] = '\0';
    acStack_1d0[0x10] = '\0';
    acStack_1d0[0x11] = '\0';
    acStack_1d0[0x12] = '\0';
    acStack_1d0[0x13] = '\0';
    acStack_1d0[0x14] = '\0';
    acStack_1d0[0x15] = '\0';
    acStack_1d0[0x16] = '\0';
    acStack_1d0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d0,acStack_1b0,&lStack_168,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_1b8 = acStack_1d0;
    func_0x00010007e5dc(&puStack_1b8);
    lVar11 = 0;
    pcVar2 = pcVar5;
    pcVar10 = param_6;
    do {
      if ((&cStack_169)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_1d0;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar9);
  pcVar5 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != acStack_1b0);
  _objc_release(pcVar9);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcStack_1d8 = FUN_106c8611c;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar7 = pcVar1;
  pcVar9 = pcVar2;
  dVar13 = param_1;
  pppuStack_1e0 = &ppuStack_120;
  _objc_retain();
  if (pcVar5 != (char *)0x0) {
    _objc_retain(pcVar2);
    plVar12 = *(long **)(pcVar5 + 8);
    pcVar7 = "true";
    if ((int)pcVar1 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(auStack_248,pcVar7);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar7 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_230,pcVar7);
    acStack_268[0] = '\0';
    acStack_268[1] = '\0';
    acStack_268[2] = '\0';
    acStack_268[3] = '\0';
    acStack_268[4] = '\0';
    acStack_268[5] = '\0';
    acStack_268[6] = '\0';
    acStack_268[7] = '\0';
    acStack_268[8] = '\0';
    acStack_268[9] = '\0';
    acStack_268[10] = '\0';
    acStack_268[0xb] = '\0';
    acStack_268[0xc] = '\0';
    acStack_268[0xd] = '\0';
    acStack_268[0xe] = '\0';
    acStack_268[0xf] = '\0';
    acStack_268[0x10] = '\0';
    acStack_268[0x11] = '\0';
    acStack_268[0x12] = '\0';
    acStack_268[0x13] = '\0';
    acStack_268[0x14] = '\0';
    acStack_268[0x15] = '\0';
    acStack_268[0x16] = '\0';
    acStack_268[0x17] = '\0';
    func_0x00010007e1e8(acStack_268,auStack_248,&lStack_218,2);
    dVar13 = param_1 * 1000.0;
    pcVar10 = (char *)(long)dVar13;
    pcVar7 = "\x01";
    pcVar9 = acStack_268;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_250 = acStack_268;
    func_0x00010007e5dc(&pcStack_250);
    lVar11 = 0;
    do {
      if ((&cStack_219)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
    pcVar6 = pcVar2;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
    ___stack_chk_fail();
    _objc_release(pcVar2);
    if (cStack_231 < '\0') {
      __ZdlPv(auStack_248[0]);
    }
    _objc_release(pcVar2);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcStack_278 = FUN_106c86328;
    lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar7;
    pcVar1 = pcVar9;
    pcVar5 = pcVar10;
    pppuStack_280 = &pppuStack_1e0;
    _objc_retain(pcVar7);
    _objc_retain(pcVar9);
    _objc_retain(pcVar8);
    if (pcVar6 != (char *)0x0) {
      plVar12 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      func_0x00010002b838(acStack_328,pcVar4);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar4 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_310,pcVar4);
      pcVar4 = "true";
      if ((int)pcVar10 == 0) {
        pcVar4 = "false";
      }
      func_0x00010002b838(auStack_2f8,pcVar4);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar4 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_2e0,pcVar4);
      acStack_348[0] = '\0';
      acStack_348[1] = '\0';
      acStack_348[2] = '\0';
      acStack_348[3] = '\0';
      acStack_348[4] = '\0';
      acStack_348[5] = '\0';
      acStack_348[6] = '\0';
      acStack_348[7] = '\0';
      acStack_348[8] = '\0';
      acStack_348[9] = '\0';
      acStack_348[10] = '\0';
      acStack_348[0xb] = '\0';
      acStack_348[0xc] = '\0';
      acStack_348[0xd] = '\0';
      acStack_348[0xe] = '\0';
      acStack_348[0xf] = '\0';
      acStack_348[0x10] = '\0';
      acStack_348[0x11] = '\0';
      acStack_348[0x12] = '\0';
      acStack_348[0x13] = '\0';
      acStack_348[0x14] = '\0';
      acStack_348[0x15] = '\0';
      acStack_348[0x16] = '\0';
      acStack_348[0x17] = '\0';
      func_0x00010007e1e8(acStack_348,acStack_328,&lStack_2c8,4);
      pcVar2 = "";
      pcVar4 = acStack_348;
      pcVar1 = acStack_348;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      pcStack_330 = pcVar4;
      func_0x00010007e5dc(&pcStack_330);
      lVar11 = 0;
      pcVar5 = param_7;
      do {
        if ((&cStack_2c9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x60);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar9);
    pcVar10 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar8);
    do {
      pcVar4 = pcVar4 + -0x18;
    } while (pcVar4 != acStack_328);
    _objc_release(pcVar8);
    _objc_release(pcVar9);
    _objc_release(pcVar7);
    pcVar9 = pcVar10;
    __Unwind_Resume();
    pcVar6 = acStack_410;
    pcStack_358 = FUN_106c86610;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar2;
    pcVar8 = pcVar1;
    dVar14 = dVar13;
    pppuStack_360 = &pppuStack_280;
    _objc_retain(pcVar2);
    _objc_retain(pcVar5);
    if (pcVar9 != (char *)0x0) {
      _objc_retain(pcVar2);
      _objc_retain(pcVar5);
      plVar12 = *(long **)(pcVar9 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar7 = "";
      }
      else {
        pcVar7 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      pcVar4 = acStack_3f0;
      func_0x00010002b838(acStack_3f0,pcVar7);
      pcVar7 = "true";
      if ((int)pcVar1 == 0) {
        pcVar7 = "false";
      }
      func_0x00010002b838(auStack_3d8,pcVar7);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar7 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar7 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_3c0,pcVar7);
      acStack_410[0] = '\0';
      acStack_410[1] = '\0';
      acStack_410[2] = '\0';
      acStack_410[3] = '\0';
      acStack_410[4] = '\0';
      acStack_410[5] = '\0';
      acStack_410[6] = '\0';
      acStack_410[7] = '\0';
      acStack_410[8] = '\0';
      acStack_410[9] = '\0';
      acStack_410[10] = '\0';
      acStack_410[0xb] = '\0';
      acStack_410[0xc] = '\0';
      acStack_410[0xd] = '\0';
      acStack_410[0xe] = '\0';
      acStack_410[0xf] = '\0';
      acStack_410[0x10] = '\0';
      acStack_410[0x11] = '\0';
      acStack_410[0x12] = '\0';
      acStack_410[0x13] = '\0';
      acStack_410[0x14] = '\0';
      acStack_410[0x15] = '\0';
      acStack_410[0x16] = '\0';
      acStack_410[0x17] = '\0';
      func_0x00010007e1e8(acStack_410,acStack_3f0,&lStack_3a8,3);
      dVar14 = dVar13 * 1000.0;
      pcVar7 = "\x01";
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11096d1e0,acStack_410,(long)dVar14);
      puStack_3f8 = acStack_410;
      func_0x00010007e5dc(&puStack_3f8);
      lVar11 = 0;
      pcVar10 = acStack_3f0;
      pcVar8 = pcVar6;
      do {
        if ((&cStack_3a9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x48);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
    }
    pcVar9 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      pcStack_448 = acStack_3f0;
      do {
        pcVar10 = pcVar10 + -0x18;
      } while (pcVar10 != pcStack_448);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      _objc_release(pcVar5);
      _objc_release(pcVar2);
      pcVar1 = pcVar9;
      __Unwind_Resume();
      pcStack_418 = FUN_106c868c0;
      lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar7;
      pcStack_450 = pcVar4;
      pcStack_440 = pcVar10;
      pcStack_438 = pcVar9;
      pcStack_430 = pcVar5;
      pcStack_428 = pcVar2;
      pppuStack_420 = &pppuStack_360;
      _objc_retain(pcVar7);
      pcVar2 = pcVar6;
      if (pcVar1 != (char *)0x0) {
        plVar12 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar4 = "";
        }
        else {
          pcVar4 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_470,pcVar4);
        uStack_490 = 0;
        uStack_488 = 0;
        uStack_480 = 0;
        func_0x00010007e1e8(&uStack_490,auStack_470,&lStack_458,1);
        pcVar2 = "";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11096d230,&uStack_490,pcVar8);
        puStack_478 = (undefined1 *)&uStack_490;
        func_0x00010007e5dc(&puStack_478);
        if (cStack_459 < '\0') {
          __ZdlPv(auStack_470[0]);
        }
      }
      pcVar4 = pcVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar7);
      _objc_release(pcVar7);
      __Unwind_Resume();
      pcStack_498 = FUN_106c86a34;
      lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar9 = pcVar2;
      pcVar7 = pcVar2;
      pppuStack_4a0 = &pppuStack_420;
      _objc_retain();
      if (pcVar4 != (char *)0x0) {
        _objc_retain(pcVar2);
        plVar12 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar7 = "";
        }
        else {
          pcVar7 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_4f0,pcVar7);
        uStack_510 = 0;
        uStack_508 = 0;
        uStack_500 = 0;
        func_0x00010007e1e8(&uStack_510,auStack_4f0,&lStack_4d8,1);
        pcVar7 = "\x01";
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11096d280,&uStack_510,(long)(dVar14 * 1000.0));
        puStack_4f8 = (undefined1 *)&uStack_510;
        func_0x00010007e5dc(&puStack_4f8);
        if (cStack_4d9 < '\0') {
          __ZdlPv(auStack_4f0[0]);
        }
        pcVar9 = pcVar2;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4d8) {
        ___stack_chk_fail();
        _objc_release(pcVar2);
        _objc_release(pcVar2);
        _objc_release(pcVar2);
        pcVar4 = pcVar9;
        __Unwind_Resume();
        puStack_538 = (undefined1 *)&uStack_550;
        pcStack_518 = FUN_106c86bc8;
        if (pcVar4 != (char *)0x0) {
          uStack_550 = 0;
          uStack_548 = 0;
          uStack_540 = 0;
          pcStack_530 = pcVar9;
          pcStack_528 = pcVar2;
          pppuStack_520 = &pppuStack_4a0;
          (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
                    (*(long **)(pcVar4 + 8),&UNK_11096d2d0,&uStack_550,pcVar7);
          func_0x00010007e5dc(&puStack_538);
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 106c85d80; end: 106c85ea3;  */

/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c860ec) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c85d80(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  char *unaff_x20;
  long lVar11;
  char *unaff_x23;
  double dVar12;
  double dVar13;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 *puStack_498;
  char *pcStack_490;
  char *pcStack_488;
  undefined8 ***pppuStack_480;
  code *pcStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 *puStack_458;
  undefined8 auStack_450 [2];
  char cStack_439;
  long lStack_438;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 *puStack_3d8;
  undefined8 auStack_3d0 [2];
  char cStack_3b9;
  long lStack_3b8;
  char *pcStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  char *pcStack_390;
  char *pcStack_388;
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  char acStack_370 [24];
  undefined1 *puStack_358;
  char acStack_350 [24];
  undefined1 auStack_338 [24];
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  char acStack_2a8 [24];
  char *pcStack_290;
  char acStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  char acStack_1c8 [24];
  char *pcStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  char acStack_130 [24];
  undefined1 *puStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  pcVar2 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    pcVar7 = "true";
    if ((int)param_3 == 0) {
      pcVar7 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar7);
    acStack_70[0] = '\0';
    acStack_70[1] = '\0';
    acStack_70[2] = '\0';
    acStack_70[3] = '\0';
    acStack_70[4] = '\0';
    acStack_70[5] = '\0';
    acStack_70[6] = '\0';
    acStack_70[7] = '\0';
    acStack_70[8] = '\0';
    acStack_70[9] = '\0';
    acStack_70[10] = '\0';
    acStack_70[0xb] = '\0';
    acStack_70[0xc] = '\0';
    acStack_70[0xd] = '\0';
    acStack_70[0xe] = '\0';
    acStack_70[0xf] = '\0';
    acStack_70[0x10] = '\0';
    acStack_70[0x11] = '\0';
    acStack_70[0x12] = '\0';
    acStack_70[0x13] = '\0';
    acStack_70[0x14] = '\0';
    acStack_70[0x15] = '\0';
    acStack_70[0x16] = '\0';
    acStack_70[0x17] = '\0';
    func_0x00010007e1e8(acStack_70,appuStack_50,&lStack_38,1);
    param_1 = param_1 * 1000.0;
    param_5 = (char *)(long)param_1;
    param_3 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    ppuVar1 = &puStack_58;
    puStack_58 = acStack_70;
    func_0x00010007e5dc();
    param_4 = pcVar2;
    unaff_x20 = acStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      param_4 = pcVar2;
      unaff_x20 = acStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x20;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcVar3 = acStack_130;
  pcStack_78 = FUN_106c85ea4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar7 = param_4;
  pcVar9 = param_5;
  pcVar6 = param_6;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar10 = (long *)ppuVar1[1];
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_110,pcVar2);
    pcVar2 = "true";
    if ((int)param_4 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      param_4 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      param_4 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_e0,param_4);
    acStack_130[0] = '\0';
    acStack_130[1] = '\0';
    acStack_130[2] = '\0';
    acStack_130[3] = '\0';
    acStack_130[4] = '\0';
    acStack_130[5] = '\0';
    acStack_130[6] = '\0';
    acStack_130[7] = '\0';
    acStack_130[8] = '\0';
    acStack_130[9] = '\0';
    acStack_130[10] = '\0';
    acStack_130[0xb] = '\0';
    acStack_130[0xc] = '\0';
    acStack_130[0xd] = '\0';
    acStack_130[0xe] = '\0';
    acStack_130[0xf] = '\0';
    acStack_130[0x10] = '\0';
    acStack_130[0x11] = '\0';
    acStack_130[0x12] = '\0';
    acStack_130[0x13] = '\0';
    acStack_130[0x14] = '\0';
    acStack_130[0x15] = '\0';
    acStack_130[0x16] = '\0';
    acStack_130[0x17] = '\0';
    func_0x00010007e1e8(acStack_130,auStack_110,&lStack_c8,3);
    pcVar2 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_118 = acStack_130;
    func_0x00010007e5dc(&puStack_118);
    lVar11 = 0;
    pcVar7 = pcVar3;
    pcVar9 = param_6;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x23 = acStack_130;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_5);
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != auStack_110);
  _objc_release(param_5);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_138 = FUN_106c8611c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar7;
  pcVar5 = pcVar2;
  pcVar8 = pcVar7;
  dVar12 = param_1;
  ppuStack_140 = &puStack_80;
  _objc_retain();
  if (pcVar3 != (char *)0x0) {
    _objc_retain(pcVar7);
    plVar10 = *(long **)(pcVar3 + 8);
    pcVar9 = "true";
    if ((int)pcVar2 == 0) {
      pcVar9 = "false";
    }
    func_0x00010002b838(auStack_1a8,pcVar9);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_190,pcVar2);
    acStack_1c8[0] = '\0';
    acStack_1c8[1] = '\0';
    acStack_1c8[2] = '\0';
    acStack_1c8[3] = '\0';
    acStack_1c8[4] = '\0';
    acStack_1c8[5] = '\0';
    acStack_1c8[6] = '\0';
    acStack_1c8[7] = '\0';
    acStack_1c8[8] = '\0';
    acStack_1c8[9] = '\0';
    acStack_1c8[10] = '\0';
    acStack_1c8[0xb] = '\0';
    acStack_1c8[0xc] = '\0';
    acStack_1c8[0xd] = '\0';
    acStack_1c8[0xe] = '\0';
    acStack_1c8[0xf] = '\0';
    acStack_1c8[0x10] = '\0';
    acStack_1c8[0x11] = '\0';
    acStack_1c8[0x12] = '\0';
    acStack_1c8[0x13] = '\0';
    acStack_1c8[0x14] = '\0';
    acStack_1c8[0x15] = '\0';
    acStack_1c8[0x16] = '\0';
    acStack_1c8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c8,auStack_1a8,&lStack_178,2);
    dVar12 = param_1 * 1000.0;
    pcVar9 = (char *)(long)dVar12;
    pcVar5 = "\x01";
    pcVar8 = acStack_1c8;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_1b0 = acStack_1c8;
    func_0x00010007e5dc(&pcStack_1b0);
    lVar11 = 0;
    do {
      if ((&cStack_179)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
    pcVar4 = pcVar7;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_191 < '\0') {
      __ZdlPv(auStack_1a8[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    __Unwind_Resume();
    pcStack_1d8 = FUN_106c86328;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar5;
    pcVar2 = pcVar8;
    pcVar3 = pcVar9;
    pppuStack_1e0 = &ppuStack_140;
    _objc_retain(pcVar5);
    _objc_retain(pcVar8);
    _objc_retain(pcVar6);
    if (pcVar4 != (char *)0x0) {
      plVar10 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(acStack_288,pcVar2);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar2 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_270,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar9 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_258,pcVar2);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_240,pcVar2);
      acStack_2a8[0] = '\0';
      acStack_2a8[1] = '\0';
      acStack_2a8[2] = '\0';
      acStack_2a8[3] = '\0';
      acStack_2a8[4] = '\0';
      acStack_2a8[5] = '\0';
      acStack_2a8[6] = '\0';
      acStack_2a8[7] = '\0';
      acStack_2a8[8] = '\0';
      acStack_2a8[9] = '\0';
      acStack_2a8[10] = '\0';
      acStack_2a8[0xb] = '\0';
      acStack_2a8[0xc] = '\0';
      acStack_2a8[0xd] = '\0';
      acStack_2a8[0xe] = '\0';
      acStack_2a8[0xf] = '\0';
      acStack_2a8[0x10] = '\0';
      acStack_2a8[0x11] = '\0';
      acStack_2a8[0x12] = '\0';
      acStack_2a8[0x13] = '\0';
      acStack_2a8[0x14] = '\0';
      acStack_2a8[0x15] = '\0';
      acStack_2a8[0x16] = '\0';
      acStack_2a8[0x17] = '\0';
      func_0x00010007e1e8(acStack_2a8,acStack_288,&lStack_228,4);
      pcVar7 = "";
      param_4 = acStack_2a8;
      pcVar2 = acStack_2a8;
      (**(code **)(*plVar10 + 0x18))(plVar10);
      pcStack_290 = param_4;
      func_0x00010007e5dc(&pcStack_290);
      lVar11 = 0;
      pcVar3 = param_7;
      do {
        if ((&cStack_229)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x60);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar8);
    pcVar9 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar6);
    do {
      param_4 = param_4 + -0x18;
    } while (param_4 != acStack_288);
    _objc_release(pcVar6);
    _objc_release(pcVar8);
    _objc_release(pcVar5);
    pcVar5 = pcVar9;
    __Unwind_Resume();
    pcVar4 = acStack_370;
    pcStack_2b8 = FUN_106c86610;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar7;
    pcVar8 = pcVar2;
    dVar13 = dVar12;
    pppuStack_2c0 = &pppuStack_1e0;
    _objc_retain(pcVar7);
    _objc_retain(pcVar3);
    if (pcVar5 != (char *)0x0) {
      _objc_retain(pcVar7);
      _objc_retain(pcVar3);
      plVar10 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar9 = "";
      }
      else {
        pcVar9 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      param_4 = acStack_350;
      func_0x00010002b838(acStack_350,pcVar9);
      pcVar9 = "true";
      if ((int)pcVar2 == 0) {
        pcVar9 = "false";
      }
      func_0x00010002b838(auStack_338,pcVar9);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar2 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_320,pcVar2);
      acStack_370[0] = '\0';
      acStack_370[1] = '\0';
      acStack_370[2] = '\0';
      acStack_370[3] = '\0';
      acStack_370[4] = '\0';
      acStack_370[5] = '\0';
      acStack_370[6] = '\0';
      acStack_370[7] = '\0';
      acStack_370[8] = '\0';
      acStack_370[9] = '\0';
      acStack_370[10] = '\0';
      acStack_370[0xb] = '\0';
      acStack_370[0xc] = '\0';
      acStack_370[0xd] = '\0';
      acStack_370[0xe] = '\0';
      acStack_370[0xf] = '\0';
      acStack_370[0x10] = '\0';
      acStack_370[0x11] = '\0';
      acStack_370[0x12] = '\0';
      acStack_370[0x13] = '\0';
      acStack_370[0x14] = '\0';
      acStack_370[0x15] = '\0';
      acStack_370[0x16] = '\0';
      acStack_370[0x17] = '\0';
      func_0x00010007e1e8(acStack_370,acStack_350,&lStack_308,3);
      dVar13 = dVar12 * 1000.0;
      pcVar6 = "\x01";
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096d1e0,acStack_370,(long)dVar13);
      puStack_358 = acStack_370;
      func_0x00010007e5dc(&puStack_358);
      lVar11 = 0;
      pcVar9 = acStack_350;
      pcVar8 = pcVar4;
      do {
        if ((&cStack_309)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x48);
      _objc_release(pcVar3);
      _objc_release(pcVar7);
    }
    pcVar2 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      pcStack_3a8 = acStack_350;
      do {
        pcVar9 = pcVar9 + -0x18;
      } while (pcVar9 != pcStack_3a8);
      _objc_release(pcVar3);
      _objc_release(pcVar7);
      _objc_release(pcVar3);
      _objc_release(pcVar7);
      pcVar5 = pcVar2;
      __Unwind_Resume();
      pcStack_378 = FUN_106c868c0;
      lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar4 = pcVar6;
      pcStack_3b0 = param_4;
      pcStack_3a0 = pcVar9;
      pcStack_398 = pcVar2;
      pcStack_390 = pcVar3;
      pcStack_388 = pcVar7;
      pppuStack_380 = &pppuStack_2c0;
      _objc_retain(pcVar6);
      pcVar7 = pcVar4;
      if (pcVar5 != (char *)0x0) {
        plVar10 = *(long **)(pcVar5 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_3d0,pcVar2);
        uStack_3f0 = 0;
        uStack_3e8 = 0;
        uStack_3e0 = 0;
        func_0x00010007e1e8(&uStack_3f0,auStack_3d0,&lStack_3b8,1);
        pcVar7 = "";
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096d230,&uStack_3f0,pcVar8);
        puStack_3d8 = (undefined1 *)&uStack_3f0;
        func_0x00010007e5dc(&puStack_3d8);
        if (cStack_3b9 < '\0') {
          __ZdlPv(auStack_3d0[0]);
        }
      }
      pcVar2 = pcVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar6);
      _objc_release(pcVar6);
      __Unwind_Resume();
      pcStack_3f8 = FUN_106c86a34;
      lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar6 = pcVar7;
      pcVar9 = pcVar7;
      pppuStack_400 = &pppuStack_380;
      _objc_retain();
      if (pcVar2 != (char *)0x0) {
        _objc_retain(pcVar7);
        plVar10 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = pcVar7;
          _objc_retainAutorelease(pcVar7);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_450,pcVar2);
        uStack_470 = 0;
        uStack_468 = 0;
        uStack_460 = 0;
        func_0x00010007e1e8(&uStack_470,auStack_450,&lStack_438,1);
        pcVar9 = "\x01";
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096d280,&uStack_470,(long)(dVar13 * 1000.0));
        puStack_458 = (undefined1 *)&uStack_470;
        func_0x00010007e5dc(&puStack_458);
        if (cStack_439 < '\0') {
          __ZdlPv(auStack_450[0]);
        }
        pcVar6 = pcVar7;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_438) {
        ___stack_chk_fail();
        _objc_release(pcVar7);
        _objc_release(pcVar7);
        _objc_release(pcVar7);
        pcVar2 = pcVar6;
        __Unwind_Resume();
        puStack_498 = (undefined1 *)&uStack_4b0;
        pcStack_478 = FUN_106c86bc8;
        if (pcVar2 != (char *)0x0) {
          uStack_4b0 = 0;
          uStack_4a8 = 0;
          uStack_4a0 = 0;
          pcStack_490 = pcVar6;
          pcStack_488 = pcVar7;
          pppuStack_480 = &pppuStack_400;
          (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
                    (*(long **)(pcVar2 + 8),&UNK_11096d2d0,&uStack_4b0,pcVar9);
          func_0x00010007e5dc(&puStack_498);
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar7);
  return;
}



/* Entry: 106c85ea4; end: 106c8611b;  */

/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c860ec) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c85ea4(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char *unaff_x23;
  double dVar11;
  double dVar12;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  char *pcStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  char *pcStack_340;
  char *pcStack_338;
  char *pcStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  char acStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_238 [24];
  char *pcStack_220;
  char acStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar6 = param_4;
  pcVar8 = param_5;
  pcVar5 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      param_4 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      param_4 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,param_4);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    pcVar6 = pcVar2;
    pcVar8 = param_6;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x23 = acStack_c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_5);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x23 = unaff_x23 + -0x18;
  } while (unaff_x23 != auStack_a0);
  _objc_release(param_5);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_c8 = FUN_106c8611c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar6;
  pcVar4 = pcVar1;
  pcVar7 = pcVar6;
  dVar11 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar6);
    plVar10 = *(long **)(pcVar2 + 8);
    pcVar8 = "true";
    if ((int)pcVar1 == 0) {
      pcVar8 = "false";
    }
    func_0x00010002b838(auStack_138,pcVar8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_120,pcVar1);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    dVar11 = param_1 * 1000.0;
    pcVar8 = (char *)(long)dVar11;
    pcVar4 = "\x01";
    pcVar7 = acStack_158;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar9 = 0;
    do {
      if ((&cStack_109)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
    pcVar3 = pcVar6;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar6);
    __Unwind_Resume();
    pcStack_168 = FUN_106c86328;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar4;
    pcVar1 = pcVar7;
    pcVar2 = pcVar8;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar4);
    _objc_retain(pcVar7);
    _objc_retain(pcVar5);
    if (pcVar3 != (char *)0x0) {
      plVar10 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(acStack_218,pcVar1);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar1 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_200,pcVar1);
      pcVar1 = "true";
      if ((int)pcVar8 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_1e8,pcVar1);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar1 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_1d0,pcVar1);
      acStack_238[0] = '\0';
      acStack_238[1] = '\0';
      acStack_238[2] = '\0';
      acStack_238[3] = '\0';
      acStack_238[4] = '\0';
      acStack_238[5] = '\0';
      acStack_238[6] = '\0';
      acStack_238[7] = '\0';
      acStack_238[8] = '\0';
      acStack_238[9] = '\0';
      acStack_238[10] = '\0';
      acStack_238[0xb] = '\0';
      acStack_238[0xc] = '\0';
      acStack_238[0xd] = '\0';
      acStack_238[0xe] = '\0';
      acStack_238[0xf] = '\0';
      acStack_238[0x10] = '\0';
      acStack_238[0x11] = '\0';
      acStack_238[0x12] = '\0';
      acStack_238[0x13] = '\0';
      acStack_238[0x14] = '\0';
      acStack_238[0x15] = '\0';
      acStack_238[0x16] = '\0';
      acStack_238[0x17] = '\0';
      func_0x00010007e1e8(acStack_238,acStack_218,&lStack_1b8,4);
      pcVar6 = "";
      param_4 = acStack_238;
      pcVar1 = acStack_238;
      (**(code **)(*plVar10 + 0x18))(plVar10);
      pcStack_220 = param_4;
      func_0x00010007e5dc(&pcStack_220);
      lVar9 = 0;
      pcVar2 = param_7;
      do {
        if ((&cStack_1b9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x60);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar7);
    pcVar8 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar5);
    do {
      param_4 = param_4 + -0x18;
    } while (param_4 != acStack_218);
    _objc_release(pcVar5);
    _objc_release(pcVar7);
    _objc_release(pcVar4);
    pcVar4 = pcVar8;
    __Unwind_Resume();
    pcVar3 = acStack_300;
    pcStack_248 = FUN_106c86610;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar6;
    pcVar7 = pcVar1;
    dVar12 = dVar11;
    pppuStack_250 = &ppuStack_170;
    _objc_retain(pcVar6);
    _objc_retain(pcVar2);
    if (pcVar4 != (char *)0x0) {
      _objc_retain(pcVar6);
      _objc_retain(pcVar2);
      plVar10 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar8 = "";
      }
      else {
        pcVar8 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      param_4 = acStack_2e0;
      func_0x00010002b838(acStack_2e0,pcVar8);
      pcVar8 = "true";
      if ((int)pcVar1 == 0) {
        pcVar8 = "false";
      }
      func_0x00010002b838(auStack_2c8,pcVar8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar1 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_2b0,pcVar1);
      acStack_300[0] = '\0';
      acStack_300[1] = '\0';
      acStack_300[2] = '\0';
      acStack_300[3] = '\0';
      acStack_300[4] = '\0';
      acStack_300[5] = '\0';
      acStack_300[6] = '\0';
      acStack_300[7] = '\0';
      acStack_300[8] = '\0';
      acStack_300[9] = '\0';
      acStack_300[10] = '\0';
      acStack_300[0xb] = '\0';
      acStack_300[0xc] = '\0';
      acStack_300[0xd] = '\0';
      acStack_300[0xe] = '\0';
      acStack_300[0xf] = '\0';
      acStack_300[0x10] = '\0';
      acStack_300[0x11] = '\0';
      acStack_300[0x12] = '\0';
      acStack_300[0x13] = '\0';
      acStack_300[0x14] = '\0';
      acStack_300[0x15] = '\0';
      acStack_300[0x16] = '\0';
      acStack_300[0x17] = '\0';
      func_0x00010007e1e8(acStack_300,acStack_2e0,&lStack_298,3);
      dVar12 = dVar11 * 1000.0;
      pcVar5 = "\x01";
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096d1e0,acStack_300,(long)dVar12);
      puStack_2e8 = acStack_300;
      func_0x00010007e5dc(&puStack_2e8);
      lVar9 = 0;
      pcVar8 = acStack_2e0;
      pcVar7 = pcVar3;
      do {
        if ((&cStack_299)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x48);
      _objc_release(pcVar2);
      _objc_release(pcVar6);
    }
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      pcStack_338 = acStack_2e0;
      do {
        pcVar8 = pcVar8 + -0x18;
      } while (pcVar8 != pcStack_338);
      _objc_release(pcVar2);
      _objc_release(pcVar6);
      _objc_release(pcVar2);
      _objc_release(pcVar6);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      pcStack_308 = FUN_106c868c0;
      lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = pcVar5;
      pcStack_340 = param_4;
      pcStack_330 = pcVar8;
      pcStack_328 = pcVar1;
      pcStack_320 = pcVar2;
      pcStack_318 = pcVar6;
      pppuStack_310 = &pppuStack_250;
      _objc_retain(pcVar5);
      pcVar6 = pcVar3;
      if (pcVar4 != (char *)0x0) {
        plVar10 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar5);
        if (pcVar5 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar5;
          _objc_retainAutorelease(pcVar5);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar5);
        func_0x00010002b838(auStack_360,pcVar1);
        uStack_380 = 0;
        uStack_378 = 0;
        uStack_370 = 0;
        func_0x00010007e1e8(&uStack_380,auStack_360,&lStack_348,1);
        pcVar6 = "";
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096d230,&uStack_380,pcVar7);
        puStack_368 = (undefined1 *)&uStack_380;
        func_0x00010007e5dc(&puStack_368);
        if (cStack_349 < '\0') {
          __ZdlPv(auStack_360[0]);
        }
      }
      pcVar1 = pcVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar5);
      _objc_release(pcVar5);
      __Unwind_Resume();
      pcStack_388 = FUN_106c86a34;
      lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar5 = pcVar6;
      pcVar8 = pcVar6;
      pppuStack_390 = &pppuStack_310;
      _objc_retain();
      if (pcVar1 != (char *)0x0) {
        _objc_retain(pcVar6);
        plVar10 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar6;
          _objc_retainAutorelease(pcVar6);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_3e0,pcVar1);
        uStack_400 = 0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
        pcVar8 = "\x01";
        (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096d280,&uStack_400,(long)(dVar12 * 1000.0));
        puStack_3e8 = (undefined1 *)&uStack_400;
        func_0x00010007e5dc(&puStack_3e8);
        if (cStack_3c9 < '\0') {
          __ZdlPv(auStack_3e0[0]);
        }
        pcVar5 = pcVar6;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
        ___stack_chk_fail();
        _objc_release(pcVar6);
        _objc_release(pcVar6);
        _objc_release(pcVar6);
        pcVar1 = pcVar5;
        __Unwind_Resume();
        puStack_428 = (undefined1 *)&uStack_440;
        pcStack_408 = FUN_106c86bc8;
        if (pcVar1 != (char *)0x0) {
          uStack_440 = 0;
          uStack_438 = 0;
          uStack_430 = 0;
          pcStack_420 = pcVar5;
          pcStack_418 = pcVar6;
          pppuStack_410 = &pppuStack_390;
          (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                    (*(long **)(pcVar1 + 8),&UNK_11096d2d0,&uStack_440,pcVar8);
          func_0x00010007e5dc(&puStack_428);
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
  return;
}



/* Entry: 106c8611c; end: 106c86327;  */

/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c8611c(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *unaff_x24;
  double dVar10;
  double dVar11;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ****ppppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  char *pcStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_178 [24];
  char *pcStack_160;
  char acStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_4;
  pcVar2 = param_3;
  pcVar3 = param_4;
  dVar10 = param_1;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_4);
    plVar8 = *(long **)(param_2 + 8);
    pcVar2 = "true";
    if ((int)param_3 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    dVar10 = param_1 * 1000.0;
    param_5 = (char *)(long)dVar10;
    pcVar2 = "\x01";
    pcVar3 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
    pcVar1 = param_4;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_4);
    _objc_release(param_4);
    __Unwind_Resume();
    pcStack_a8 = FUN_106c86328;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    param_4 = pcVar2;
    pcVar4 = pcVar3;
    pcVar7 = param_5;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar2);
    _objc_retain(pcVar3);
    _objc_retain(param_6);
    if (pcVar1 != (char *)0x0) {
      plVar8 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(acStack_158,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_140,pcVar1);
      pcVar1 = "true";
      if ((int)param_5 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_128,pcVar1);
      _objc_retain(param_6);
      if (param_6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(param_6);
        pcVar1 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x00010002b838(auStack_110,pcVar1);
      acStack_178[0] = '\0';
      acStack_178[1] = '\0';
      acStack_178[2] = '\0';
      acStack_178[3] = '\0';
      acStack_178[4] = '\0';
      acStack_178[5] = '\0';
      acStack_178[6] = '\0';
      acStack_178[7] = '\0';
      acStack_178[8] = '\0';
      acStack_178[9] = '\0';
      acStack_178[10] = '\0';
      acStack_178[0xb] = '\0';
      acStack_178[0xc] = '\0';
      acStack_178[0xd] = '\0';
      acStack_178[0xe] = '\0';
      acStack_178[0xf] = '\0';
      acStack_178[0x10] = '\0';
      acStack_178[0x11] = '\0';
      acStack_178[0x12] = '\0';
      acStack_178[0x13] = '\0';
      acStack_178[0x14] = '\0';
      acStack_178[0x15] = '\0';
      acStack_178[0x16] = '\0';
      acStack_178[0x17] = '\0';
      func_0x00010007e1e8(acStack_178,acStack_158,&lStack_f8,4);
      param_4 = "";
      unaff_x24 = acStack_178;
      pcVar4 = acStack_178;
      (**(code **)(*plVar8 + 0x18))(plVar8);
      pcStack_160 = unaff_x24;
      func_0x00010007e5dc(&pcStack_160);
      lVar9 = 0;
      pcVar7 = param_7;
      do {
        if ((&cStack_f9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x60);
    }
    _objc_release(param_6);
    _objc_release(pcVar3);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_6);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != acStack_158);
    _objc_release(param_6);
    _objc_release(pcVar3);
    _objc_release(pcVar2);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcVar5 = acStack_240;
    pcStack_188 = FUN_106c86610;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = param_4;
    pcVar6 = pcVar4;
    dVar11 = dVar10;
    ppuStack_190 = &puStack_b0;
    _objc_retain(param_4);
    _objc_retain(pcVar7);
    if (pcVar3 != (char *)0x0) {
      _objc_retain(param_4);
      _objc_retain(pcVar7);
      plVar8 = *(long **)(pcVar3 + 8);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_4;
        _objc_retainAutorelease(param_4);
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      unaff_x24 = acStack_220;
      func_0x00010002b838(acStack_220,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar4 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_208,pcVar2);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar2 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_1f0,pcVar2);
      acStack_240[0] = '\0';
      acStack_240[1] = '\0';
      acStack_240[2] = '\0';
      acStack_240[3] = '\0';
      acStack_240[4] = '\0';
      acStack_240[5] = '\0';
      acStack_240[6] = '\0';
      acStack_240[7] = '\0';
      acStack_240[8] = '\0';
      acStack_240[9] = '\0';
      acStack_240[10] = '\0';
      acStack_240[0xb] = '\0';
      acStack_240[0xc] = '\0';
      acStack_240[0xd] = '\0';
      acStack_240[0xe] = '\0';
      acStack_240[0xf] = '\0';
      acStack_240[0x10] = '\0';
      acStack_240[0x11] = '\0';
      acStack_240[0x12] = '\0';
      acStack_240[0x13] = '\0';
      acStack_240[0x14] = '\0';
      acStack_240[0x15] = '\0';
      acStack_240[0x16] = '\0';
      acStack_240[0x17] = '\0';
      func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
      dVar11 = dVar10 * 1000.0;
      pcVar2 = "\x01";
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11096d1e0,acStack_240,(long)dVar11);
      puStack_228 = acStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar9 = 0;
      pcVar1 = acStack_220;
      pcVar6 = pcVar5;
      do {
        if ((&cStack_1d9)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x48);
      _objc_release(pcVar7);
      _objc_release(param_4);
    }
    pcVar3 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      pcStack_278 = acStack_220;
      do {
        pcVar1 = pcVar1 + -0x18;
      } while (pcVar1 != pcStack_278);
      _objc_release(pcVar7);
      _objc_release(param_4);
      _objc_release(pcVar7);
      _objc_release(param_4);
      pcVar4 = pcVar3;
      __Unwind_Resume();
      pcStack_248 = FUN_106c868c0;
      lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar5 = pcVar2;
      pcStack_280 = unaff_x24;
      pcStack_270 = pcVar1;
      pcStack_268 = pcVar3;
      pcStack_260 = pcVar7;
      pcStack_258 = param_4;
      pppuStack_250 = &ppuStack_190;
      _objc_retain(pcVar2);
      param_4 = pcVar5;
      if (pcVar4 != (char *)0x0) {
        plVar8 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_2a0,pcVar3);
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
        param_4 = "";
        (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11096d230,&uStack_2c0,pcVar6);
        puStack_2a8 = (undefined1 *)&uStack_2c0;
        func_0x00010007e5dc(&puStack_2a8);
        if (cStack_289 < '\0') {
          __ZdlPv(auStack_2a0[0]);
        }
      }
      pcVar3 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar2);
      _objc_release(pcVar2);
      __Unwind_Resume();
      pcStack_2c8 = FUN_106c86a34;
      lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = param_4;
      pcVar2 = param_4;
      ppppuStack_2d0 = &pppuStack_250;
      _objc_retain();
      if (pcVar3 != (char *)0x0) {
        _objc_retain(param_4);
        plVar8 = *(long **)(pcVar3 + 8);
        _objc_retain(param_4);
        if (param_4 == (char *)0x0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = param_4;
          _objc_retainAutorelease(param_4);
          func_0x00010bdc3520();
        }
        _objc_release(param_4);
        func_0x00010002b838(auStack_320,pcVar2);
        uStack_340 = 0;
        uStack_338 = 0;
        uStack_330 = 0;
        func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
        pcVar2 = "\x01";
        (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11096d280,&uStack_340,(long)(dVar11 * 1000.0));
        puStack_328 = (undefined1 *)&uStack_340;
        func_0x00010007e5dc(&puStack_328);
        if (cStack_309 < '\0') {
          __ZdlPv(auStack_320[0]);
        }
        pcVar1 = param_4;
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
        ___stack_chk_fail();
        _objc_release(param_4);
        _objc_release(param_4);
        _objc_release(param_4);
        pcVar3 = pcVar1;
        __Unwind_Resume();
        puStack_368 = (undefined1 *)&uStack_380;
        pcStack_348 = FUN_106c86bc8;
        if (pcVar3 != (char *)0x0) {
          uStack_380 = 0;
          uStack_378 = 0;
          uStack_370 = 0;
          pcStack_360 = pcVar1;
          pcStack_358 = param_4;
          ppppuStack_350 = &ppppuStack_2d0;
          (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                    (*(long **)(pcVar3 + 8),&UNK_11096d2d0,&uStack_380,pcVar2);
          func_0x00010007e5dc(&puStack_368);
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106c86328; end: 106c8660f;  */

/* WARNING: Removing unreachable block (ram,0x000106c865d8) */
/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c86328(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  char *unaff_x24;
  double dVar11;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  char acStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  char acStack_d8 [24];
  char *pcStack_c0;
  char acStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  pcVar1 = param_4;
  pcVar6 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(acStack_b8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_6);
    if (param_6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_6);
      pcVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_d8,acStack_b8,&lStack_58,4);
    pcVar3 = "";
    unaff_x24 = acStack_d8;
    pcVar1 = acStack_d8;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_c0 = unaff_x24;
    func_0x00010007e5dc(&pcStack_c0);
    lVar8 = 0;
    pcVar6 = param_7;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  pcVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_b8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = pcVar9;
  __Unwind_Resume();
  pcVar5 = acStack_1a0;
  pcStack_e8 = FUN_106c86610;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar3;
  pcVar7 = pcVar1;
  dVar11 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar3);
    _objc_retain(pcVar6);
    plVar10 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = acStack_180;
    func_0x00010002b838(acStack_180,pcVar9);
    pcVar9 = "true";
    if ((int)pcVar1 == 0) {
      pcVar9 = "false";
    }
    func_0x00010002b838(auStack_168,pcVar9);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_150,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,acStack_180,&lStack_138,3);
    dVar11 = param_1 * 1000.0;
    pcVar4 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096d1e0,acStack_1a0,(long)dVar11);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    lVar8 = 0;
    pcVar9 = acStack_180;
    pcVar7 = pcVar5;
    do {
      if ((&cStack_139)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x48);
    _objc_release(pcVar6);
    _objc_release(pcVar3);
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(pcVar6);
    pcStack_1d8 = acStack_180;
    do {
      pcVar9 = pcVar9 + -0x18;
    } while (pcVar9 != pcStack_1d8);
    _objc_release(pcVar6);
    _objc_release(pcVar3);
    _objc_release(pcVar6);
    _objc_release(pcVar3);
    pcVar2 = pcVar1;
    __Unwind_Resume();
    pcStack_1a8 = FUN_106c868c0;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar4;
    pcStack_1e0 = unaff_x24;
    pcStack_1d0 = pcVar9;
    pcStack_1c8 = pcVar1;
    pcStack_1c0 = pcVar6;
    pcStack_1b8 = pcVar3;
    ppuStack_1b0 = &puStack_f0;
    _objc_retain(pcVar4);
    pcVar3 = pcVar5;
    if (pcVar2 != (char *)0x0) {
      plVar10 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar4;
        _objc_retainAutorelease(pcVar4);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_200,pcVar1);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
      pcVar3 = "";
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096d230,&uStack_220,pcVar7);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x00010007e5dc(&puStack_208);
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
      }
    }
    pcVar1 = pcVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar4);
    _objc_release(pcVar4);
    __Unwind_Resume();
    pcStack_228 = FUN_106c86a34;
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar3;
    pcVar6 = pcVar3;
    pppuStack_230 = &ppuStack_1b0;
    _objc_retain();
    if (pcVar1 != (char *)0x0) {
      _objc_retain(pcVar3);
      plVar10 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_280,pcVar1);
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
      pcVar6 = "\x01";
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096d280,&uStack_2a0,(long)(dVar11 * 1000.0));
      puStack_288 = (undefined1 *)&uStack_2a0;
      func_0x00010007e5dc(&puStack_288);
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
      }
      pcVar9 = pcVar3;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
      ___stack_chk_fail();
      _objc_release(pcVar3);
      _objc_release(pcVar3);
      _objc_release(pcVar3);
      pcVar1 = pcVar9;
      __Unwind_Resume();
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      pcStack_2a8 = FUN_106c86bc8;
      if (pcVar1 != (char *)0x0) {
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        pcStack_2c0 = pcVar9;
        pcStack_2b8 = pcVar3;
        ppppuStack_2b0 = &pppuStack_230;
        (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
                  (*(long **)(pcVar1 + 8),&UNK_11096d2d0,&uStack_2e0,pcVar6);
        func_0x00010007e5dc(&puStack_2c8);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 106c86610; end: 106c868bf;  */

/* WARNING: Removing unreachable block (ram,0x000106c86880) */

void FUN_106c86610(double param_1,long param_2,char *param_3,undefined1 *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined1 *unaff_x22;
  undefined1 *unaff_x24;
  double dVar9;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar5 = param_4;
  dVar9 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_5);
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_a0;
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    dVar9 = param_1 * 1000.0;
    pcVar1 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096d1e0,&uStack_c0,(long)dVar9);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar8 = 0;
    unaff_x22 = auStack_a0;
    puVar5 = (undefined1 *)puVar6;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x48);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  pcVar2 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puStack_f8 = auStack_a0;
    do {
      unaff_x22 = unaff_x22 + -0x18;
    } while (unaff_x22 != puStack_f8);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_3);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_c8 = FUN_106c868c0;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar4 = pcVar1;
    puStack_100 = unaff_x24;
    puStack_f0 = unaff_x22;
    pcStack_e8 = pcVar2;
    pcStack_e0 = param_5;
    pcStack_d8 = param_3;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    param_3 = pcVar4;
    if (pcVar3 != (char *)0x0) {
      plVar7 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_120,pcVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
      param_3 = "";
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096d230,&uStack_140,puVar5);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      if (cStack_109 < '\0') {
        __ZdlPv(auStack_120[0]);
      }
    }
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcStack_148 = FUN_106c86a34;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = param_3;
    pcVar1 = param_3;
    ppuStack_150 = &puStack_d0;
    _objc_retain();
    if (pcVar2 != (char *)0x0) {
      _objc_retain(param_3);
      plVar7 = *(long **)(pcVar2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_1a0,pcVar1);
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
      pcVar1 = "\x01";
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096d280,&uStack_1c0,(long)(dVar9 * 1000.0));
      puStack_1a8 = (undefined1 *)&uStack_1c0;
      func_0x00010007e5dc(&puStack_1a8);
      if (cStack_189 < '\0') {
        __ZdlPv(auStack_1a0[0]);
      }
      pcVar3 = param_3;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      pcVar2 = pcVar3;
      __Unwind_Resume();
      puStack_1e8 = (undefined1 *)&uStack_200;
      pcStack_1c8 = FUN_106c86bc8;
      if (pcVar2 != (char *)0x0) {
        uStack_200 = 0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        pcStack_1e0 = pcVar3;
        pcStack_1d8 = param_3;
        pppuStack_1d0 = &ppuStack_150;
        (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
                  (*(long **)(pcVar2 + 8),&UNK_11096d2d0,&uStack_200,pcVar1);
        func_0x00010007e5dc(&puStack_1e8);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c868c0; end: 106c86a33;  */

void FUN_106c868c0(double param_1,long param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11096d230,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_106c86a34;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar1);
    plVar5 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "\x01";
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11096d280,&uStack_100,(long)(param_1 * 1000.0));
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
    pcVar3 = pcVar1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar3;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106c86bc8;
  if (pcVar2 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar3;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_11096d2d0,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106c86a34; end: 106c86bc7;  */

void FUN_106c86a34(double param_1,long param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_3;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar4 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11096d280,&uStack_80,(long)(param_1 * 1000.0));
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106c86bc8;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar1;
    pcStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_11096d2d0,&uStack_c0,pcVar2);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106c86bc8; end: 106c86c3f;  */

void FUN_106c86bc8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11096d2d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106c86c40; end: 106c86cc3;  */

void FUN_106c86c40(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_11096d320,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106c86cc4; end: 106c86f33;  */

void FUN_106c86cc4(double param_1,long param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  double dVar4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar4 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar2 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010007e1e8(&uStack_a8,auStack_88,&lStack_58,2);
    dVar4 = param_1 * 1000.0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_11096d370,&uStack_a8,(long)dVar4);
    puStack_90 = &uStack_a8;
    func_0x00010007e5dc(&puStack_90);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puStack_d8 = (undefined1 *)&uStack_f0;
  pcStack_b8 = FUN_106c86f34;
  if (pcVar1 != (char *)0x0) {
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    pcStack_d0 = param_4;
    pcStack_c8 = param_3;
    puStack_c0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar1 + 8) + 0x18))
              (*(long **)(pcVar1 + 8),&UNK_11096d3c0,&uStack_f0,(long)(dVar4 * 1000.0));
    func_0x00010007e5dc(&puStack_d8);
  }
  return;
}



/* Entry: 106c86f34; end: 106c86fb7;  */

void FUN_106c86f34(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_11096d3c0,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106c86fb8; end: 106c8703b;  */

void FUN_106c86fb8(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_11096d410,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106c8703c; end: 106c870bf;  */

void FUN_106c8703c(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_11096d460,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106c870c0; end: 106c871d7;  */

void FUN_106c870c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106c871d8;
  uStack_30 = 0x106c871e8;
  uStack_28 = 0;
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c871d8; end: 106c871ef;  */

void FUN_106c871d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c871f0; end: 106c872af;  */

void FUN_106c871f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c872b0; end: 106c873c7;  */

void FUN_106c872b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106c871d8;
  uStack_30 = 0x106c871e8;
  uStack_28 = 0;
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c873c8; end: 106c87407;  */

void FUN_106c873c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c87408; end: 106c8749b;  */

void FUN_106c87408(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  if (lVar1 == 0) {
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c8749c; end: 106c874db;  */

void FUN_106c8749c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c874dc; end: 106c875f3;  */

void FUN_106c874dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106c871d8;
  uStack_30 = 0x106c871e8;
  uStack_28 = 0;
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c875f4; end: 106c876b7;  */

void FUN_106c875f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010901dae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) == 0) {
    uVar1 = param_2;
    func_0x00010901e0a4();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    _objc_release(uVar2);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) == 0) {
      uVar1 = param_2;
      func_0x00010901e044();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = uVar1;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c876b8; end: 106c877c7;  */

void FUN_106c876b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010bf5ab40();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  if (lVar1 == 0) {
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c877c8; end: 106c878df;  */

void FUN_106c877c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106c871d8;
  uStack_30 = 0x106c871e8;
  uStack_28 = 0;
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c878e0; end: 106c8791f;  */

void FUN_106c878e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010901dae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c87920; end: 106c87a2f;  */

void FUN_106c87920(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010bf5ab40();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  if (lVar1 == 0) {
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c87a30; end: 106c87af7;  */

undefined1 FUN_106c87a30(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0060(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106c87af8; end: 106c87b63;  */

void FUN_106c87af8(double param_1,long param_2,long param_3)

{
  bool bVar1;
  
  func_0x00010901db40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c26f3a0(param_3);
    if (param_1 <= 0.0) {
      bVar1 = false;
    }
    else {
      bVar1 = param_1 < (double)*(long *)(param_2 + 0x28);
    }
    *(bool *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = bVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c87b64; end: 106c87b6b;  */

void FUN_106c87b64(void)

{
  return;
}



/* Entry: 106c87b6c; end: 106c87c53;  */

void FUN_106c87b6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106c871d8;
  uStack_30 = 0x106c871e8;
  uStack_28 = 0;
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c87c54; end: 106c87c93;  */

void FUN_106c87c54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010901e044();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c87c94; end: 106c87c9b;  */

void FUN_106c87c94(void)

{
  return;
}



/* Entry: 106c87c9c; end: 106c87e7b;  */

undefined8
FUN_106c87c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc0000000;
  pcStack_78 = FUN_106c87e7c;
  puStack_70 = &UNK_11096d740;
  ppuVar1 = &puStack_88;
  uStack_68 = param_4;
  _objc_retainBlock();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0c0060(param_1);
  uVar2 = puStack_a0[3];
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(ppuVar1);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106c87e7c; end: 106c87fb7;  */

undefined8 FUN_106c87e7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  if ((*(char *)(param_1 + 0x20) == '\x01') &&
     (uVar1 = param_2, func_0x00010901df08(), (int)uVar1 != 0)) {
    uVar1 = param_2;
    func_0x000100bf119c(param_2);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106c87fb8; end: 106c8811f;  */

void FUN_106c87fb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106c871d8;
  uStack_40 = 0x106c871e8;
  uStack_38 = 0;
  _objc_retain(param_2);
  func_0x00010c0c0060(param_1);
  lVar2 = puStack_58[5];
  _objc_retain(lVar2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
  if (lVar2 == 0) {
    lVar1 = param_1;
    FUN_106c874dc(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar1 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c88120; end: 106c8826f;  */

void FUN_106c88120(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106c871d8;
  uStack_50 = 0x106c871e8;
  uStack_48 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c88270; end: 106c8838f;  */

void FUN_106c88270(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000106c882cc();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c88390; end: 106c88393;  */

void FUN_106c88390(void)

{
  return;
}



/* Entry: 106c88394; end: 106c884e3;  */

void FUN_106c88394(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106c871d8;
  uStack_50 = 0x106c871e8;
  uStack_48 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c884e4; end: 106c88603;  */

void FUN_106c884e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000106c88540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c88604; end: 106c88607;  */

void FUN_106c88604(void)

{
  return;
}



/* Entry: 106c88608; end: 106c88757;  */

void FUN_106c88608(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106c871d8;
  uStack_50 = 0x106c871e8;
  uStack_48 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c88758; end: 106c88877;  */

void FUN_106c88758(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000106c887b4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c88878; end: 106c8887b;  */

void FUN_106c88878(void)

{
  return;
}



/* Entry: 106c8887c; end: 106c889a7;  */

undefined1 FUN_106c8887c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0060(param_1);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106c889a8; end: 106c889ef;  */

void FUN_106c889a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c889f0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c889f0; end: 106c88aa7;  */

undefined8 FUN_106c889f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010c0e00e0(param_2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar1 = param_2;
      func_0x00010c08a5e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010bf8be60();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010bf433a0(), lVar3 == -1)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(param_2);
  }
  return uVar4;
}



/* Entry: 106c88aa8; end: 106c88aef;  */

void FUN_106c88aa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c889f0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c88af0; end: 106c88af3;  */

void FUN_106c88af0(void)

{
  return;
}



/* Entry: 106c88af4; end: 106c88c43;  */

void FUN_106c88af4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106c871d8;
  uStack_50 = 0x106c871e8;
  uStack_48 = 0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0c0060(param_1);
  uVar1 = puStack_68[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c88c44; end: 106c88d73;  */

void FUN_106c88c44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000106c88ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c88d74; end: 106c88d77;  */

void FUN_106c88d74(void)

{
  return;
}



/* Entry: 106c88d78; end: 106c88e13;  */

void FUN_106c88d78(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar1;
      func_0x00010c08a5e0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(long *)(lVar1 + 0x28) = lVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c88e14; end: 106c88e1b;  */

void FUN_106c88e14(void)

{
  return;
}



/* Entry: 106c88e1c; end: 106c88ef3;  */

void FUN_106c88e1c(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106c88ef4;
  puStack_58 = &UNK_110854b20;
  uStack_50 = param_1;
  uStack_48 = param_2;
  _objc_retain(param_1);
  ppuVar2 = &puStack_70;
  _objc_retainBlock();
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106c88fb4;
  puStack_80 = &UNK_11096d930;
  ppuStack_78 = ppuVar2;
  _objc_retain();
  ppuVar3 = &puStack_98;
  _objc_retainBlock(ppuVar3);
  _objc_release(ppuStack_78);
  _objc_release(ppuVar2);
  _objc_release(uStack_50);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106c88ef4; end: 106c88fb3;  */

uint FUN_106c88ef4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      uVar2 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) goto LAB_106c88f1c;
    }
    else {
      _objc_release(uVar1);
    }
    uVar4 = 0;
  }
  else {
LAB_106c88f1c:
    uVar1 = param_2;
    func_0x00010901ca64(param_2);
    uVar4 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 106c88fb4; end: 106c890db;  */

undefined1 FUN_106c88fb4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0060(param_2);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106c890dc; end: 106c8910f;  */

void FUN_106c890dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)lVar1;
  return;
}



/* Entry: 106c89110; end: 106c89123;  */

void FUN_106c89110(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106c89124; end: 106c891a7;  */

void FUN_106c89124(double param_1,long param_2,undefined8 param_3)

{
  func_0x00010c089f60(param_3);
  *(bool *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 0.0 < param_1;
  return;
}



/* Entry: 106c891a8; end: 106c89277;  */

void FUN_106c891a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_90;
  _objc_retain();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106c89278;
  puStack_50 = &UNK_11085a548;
  uStack_48 = param_1;
  _objc_retain(param_1);
  ppuVar2 = &puStack_68;
  _objc_retainBlock();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106c89400;
  puStack_78 = &UNK_11096d9f0;
  ppuStack_70 = ppuVar2;
  _objc_retain();
  _objc_retainBlock(&puStack_90);
  _objc_release(ppuStack_70);
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106c89278; end: 106c893ff;  */

bool FUN_106c89278(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010901ca64();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) == 0) {
        uVar6 = *(ulong *)(param_2 + 0x20);
        uVar3 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar6 & 1) != 0) goto LAB_106c892ac;
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        dVar7 = param_1;
        _objc_release(puVar4);
        uVar1 = param_3;
        func_0x00010bfb8280(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef89e0();
        if (dVar7 <= 0.0) goto LAB_106c892dc;
        uVar2 = param_3;
        func_0x00010bfb8280(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef89e0();
        bVar5 = param_1 - dVar7 <= 2592000.0;
      }
      else {
        bVar5 = false;
      }
      _objc_release(uVar2);
    }
    else {
LAB_106c892dc:
      bVar5 = false;
    }
    _objc_release(uVar1);
  }
  else {
LAB_106c892ac:
    bVar5 = false;
  }
  _objc_release(param_3);
  return bVar5;
}


