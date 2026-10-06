/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c5c68c; end: 105c5c697; -[UNISpectaclesPairingService .cxx_destruct] */

void FUN_105c5c68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c5c698; end: 105c5c713;  */

undefined * FUN_105c5c698(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1dc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e24258,
                        &UNK_10ddcc788,&UNK_10ddcc7c0,3,FUN_105c5c714,0);
    do {
      if (puRam00000001136c1dc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1dc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1dc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1dc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1dc8;
}



/* Entry: 105c5c714; end: 105c5c71f;  */

bool FUN_105c5c714(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105c5c720; end: 105c5c79b;  */

undefined * FUN_105c5c720(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1dd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e24278,
                        &UNK_10ddcc7cc,&UNK_10ddcc7fc,5,FUN_105c5c79c,0);
    do {
      if (puRam00000001136c1dd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1dd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1dd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1dd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1dd0;
}



/* Entry: 105c5c79c; end: 105c5c7a7;  */

bool FUN_105c5c79c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105c5c7a8; end: 105c5c80f; +[IsRegisteredRequest descriptor] */

void FUN_105c5c7a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1dd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a941a0,
                        &PTR____CFConstantStringClassReference_110e24298,&PTR_DAT_113120168,
                        &PTR_DAT_113120180,1,0x10,0x1c);
    puRam00000001136c1dd8 = puVar1;
  }
  return;
}



/* Entry: 105c5c810; end: 105c5c877; +[IsRegisteredResponse descriptor] */

void FUN_105c5c810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1de0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a941f0,
                        &PTR____CFConstantStringClassReference_110e242b8,&PTR_DAT_113120168,
                        &PTR_DAT_1131201a0,1,4,0x1c);
    puRam00000001136c1de0 = puVar1;
  }
  return;
}



/* Entry: 105c5c878; end: 105c5c8df; +[CanRegisterStudioRequest descriptor] */

void FUN_105c5c878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1de8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94240,
                        &PTR____CFConstantStringClassReference_110e242d8,&PTR_DAT_113120168,
                        &PTR_DAT_1131201c0,1,0x10,0x1c);
    puRam00000001136c1de8 = puVar1;
  }
  return;
}



/* Entry: 105c5c8e0; end: 105c5c947; +[CanRegisterStudioResponse descriptor] */

void FUN_105c5c8e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1df0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94290,
                        &PTR____CFConstantStringClassReference_110e242f8,&PTR_DAT_113120168,
                        &PTR_DAT_1131201e0,1,4,0x1c);
    puRam00000001136c1df0 = puVar1;
  }
  return;
}



/* Entry: 105c5c948; end: 105c5c9af; +[RegisterStudioRequest descriptor] */

void FUN_105c5c948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1df8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a942e0,
                        &PTR____CFConstantStringClassReference_110e24318,&PTR_DAT_113120168,
                        &PTR_DAT_1131204e0,6,0x38,0x1c);
    puRam00000001136c1df8 = puVar1;
  }
  return;
}



/* Entry: 105c5c9b0; end: 105c5ca17; +[RegisterStudioResponse descriptor] */

void FUN_105c5c9b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94330,
                        &PTR____CFConstantStringClassReference_110e24338,&PTR_DAT_113120168,0,0,4,
                        0x1c);
    puRam00000001136c1e00 = puVar1;
  }
  return;
}



/* Entry: 105c5ca18; end: 105c5ca7f; +[CreatePairingAuthorizationTokenRequest descriptor] */

void FUN_105c5ca18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94380,
                        &PTR____CFConstantStringClassReference_110e24358,&PTR_DAT_113120168,
                        &PTR_s_token_113120200,1,0x10,0x1c);
    puRam00000001136c1e08 = puVar1;
  }
  return;
}



/* Entry: 105c5ca80; end: 105c5cae7; +[CreatePairingAuthorizationTokenResponse descriptor] */

void FUN_105c5ca80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a943d0,
                        &PTR____CFConstantStringClassReference_110e24378,&PTR_DAT_113120168,0,0,4,
                        0x1c);
    puRam00000001136c1e10 = puVar1;
  }
  return;
}



/* Entry: 105c5cae8; end: 105c5cb4f; +[PairAccountRequest descriptor] */

void FUN_105c5cae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94420,
                        &PTR____CFConstantStringClassReference_110e24398,&PTR_DAT_113120168,
                        &PTR_s_token_113120220,1,0x10,0x1c);
    puRam00000001136c1e18 = puVar1;
  }
  return;
}



/* Entry: 105c5cb50; end: 105c5cbb7; +[PairAccountResponse descriptor] */

void FUN_105c5cb50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94470,
                        &PTR____CFConstantStringClassReference_110e243b8,&PTR_DAT_113120168,
                        &PTR_s_status_113120240,1,8,0x1c);
    puRam00000001136c1e20 = puVar1;
  }
  return;
}



/* Entry: 105c5cbb8; end: 105c5cc1f; +[UnpairAllAccountsRequest descriptor] */

void FUN_105c5cbb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a944c0,
                        &PTR____CFConstantStringClassReference_110e243d8,&PTR_DAT_113120168,
                        &PTR_DAT_113120260,1,0x10,0x1c);
    puRam00000001136c1e28 = puVar1;
  }
  return;
}



/* Entry: 105c5cc20; end: 105c5cc87; +[UnpairAllAccountsResponse descriptor] */

void FUN_105c5cc20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94510,
                        &PTR____CFConstantStringClassReference_110e243f8,&PTR_DAT_113120168,0,0,4,
                        0x1c);
    puRam00000001136c1e30 = puVar1;
  }
  return;
}



/* Entry: 105c5cc88; end: 105c5ccef; +[GetAllPairedAccountsRequest descriptor] */

void FUN_105c5cc88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94560,
                        &PTR____CFConstantStringClassReference_110e24418,&PTR_DAT_113120168,
                        &PTR_DAT_113120280,1,0x10,0x1c);
    puRam00000001136c1e38 = puVar1;
  }
  return;
}



/* Entry: 105c5ccf0; end: 105c5cd57; +[GetAllPairedAccountsResponse descriptor] */

void FUN_105c5ccf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a945b0,
                        &PTR____CFConstantStringClassReference_110e24438,&PTR_DAT_113120168,
                        &PTR_DAT_113120340,2,0x18,0x1c);
    puRam00000001136c1e40 = puVar1;
  }
  return;
}



/* Entry: 105c5cd58; end: 105c5cdbf; +[GetAllAccountsPairedToAssociatedStudioRequest descriptor] */

void FUN_105c5cd58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94600,
                        &PTR____CFConstantStringClassReference_110e24458,&PTR_DAT_113120168,0,0,4,
                        0x1c);
    puRam00000001136c1e48 = puVar1;
  }
  return;
}



/* Entry: 105c5cdc0; end: 105c5ce27; +[GetAllAccountsPairedToAssociatedStudioResponse descriptor] */

void FUN_105c5cdc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94650,
                        &PTR____CFConstantStringClassReference_110e24478,&PTR_DAT_113120168,
                        &PTR_DAT_1131202a0,1,0x10,0x1c);
    puRam00000001136c1e50 = puVar1;
  }
  return;
}



/* Entry: 105c5ce28; end: 105c5ce8f; +[GetCertsRequest descriptor] */

void FUN_105c5ce28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a946a0,
                        &PTR____CFConstantStringClassReference_110e24498,&PTR_DAT_113120168,
                        &PTR_DAT_1131202c0,1,0x10,0x1c);
    puRam00000001136c1e58 = puVar1;
  }
  return;
}



/* Entry: 105c5ce90; end: 105c5cef7; +[GetCertsResponse descriptor] */

void FUN_105c5ce90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a946f0,
                        &PTR____CFConstantStringClassReference_110e244b8,&PTR_DAT_113120168,
                        &PTR_DAT_1131202e0,1,0x10,0x1c);
    puRam00000001136c1e60 = puVar1;
  }
  return;
}



/* Entry: 105c5cef8; end: 105c5cf5f; +[FSNProxyPairAccountRequest descriptor] */

void FUN_105c5cef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94740,
                        &PTR____CFConstantStringClassReference_110e244d8,&PTR_DAT_113120168,
                        &PTR_DAT_113120380,2,0x18,0x1c);
    puRam00000001136c1e68 = puVar1;
  }
  return;
}



/* Entry: 105c5cf60; end: 105c5cfc7; +[FSNProxyPairAccountResponse descriptor] */

void FUN_105c5cf60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94790,
                        &PTR____CFConstantStringClassReference_110e244f8,&PTR_DAT_113120168,0,0,4,
                        0x1c);
    puRam00000001136c1e70 = puVar1;
  }
  return;
}



/* Entry: 105c5cfc8; end: 105c5d02f; +[FSNProxyUploadCertRequest descriptor] */

void FUN_105c5cfc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a947e0,
                        &PTR____CFConstantStringClassReference_110e24518,&PTR_DAT_113120168,
                        &PTR_DAT_1131203c0,2,0x18,0x1c);
    puRam00000001136c1e78 = puVar1;
  }
  return;
}



/* Entry: 105c5d030; end: 105c5d097; +[FSNProxyUploadCertResponse descriptor] */

void FUN_105c5d030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94830,
                        &PTR____CFConstantStringClassReference_110e24538,&PTR_DAT_113120168,0,0,4,
                        0x1c);
    puRam00000001136c1e80 = puVar1;
  }
  return;
}



/* Entry: 105c5d098; end: 105c5d0ff; +[ProvisionStudioMetadataRequest descriptor] */

void FUN_105c5d098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94880,
                        &PTR____CFConstantStringClassReference_110e24558,&PTR_DAT_113120168,
                        &PTR_DAT_113120440,5,0x30,0x1c);
    puRam00000001136c1e88 = puVar1;
  }
  return;
}



/* Entry: 105c5d100; end: 105c5d167; +[ProvisionStudioMetadataResponse descriptor] */

void FUN_105c5d100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a948d0,
                        &PTR____CFConstantStringClassReference_110e24578,&PTR_DAT_113120168,0,0,4,
                        0x1c);
    puRam00000001136c1e90 = puVar1;
  }
  return;
}



/* Entry: 105c5d168; end: 105c5d1cf; +[EchoRequest descriptor] */

void FUN_105c5d168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1e98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94920,
                        &PTR____CFConstantStringClassReference_110e24598,&PTR_DAT_113120168,
                        &PTR_s_message_113120300,1,0x10,0x1c);
    puRam00000001136c1e98 = puVar1;
  }
  return;
}



/* Entry: 105c5d1d0; end: 105c5d237; +[EchoResponse descriptor] */

void FUN_105c5d1d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a94970,
                        &PTR____CFConstantStringClassReference_110e245b8,&PTR_DAT_113120168,
                        &PTR_s_message_113120320,1,0x10,0x1c);
    puRam00000001136c1ea0 = puVar1;
  }
  return;
}



/* Entry: 105c5d238; end: 105c5d29f; +[PairedAccount descriptor] */

void FUN_105c5d238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a949c0,
                        &PTR____CFConstantStringClassReference_110e245d8,&PTR_DAT_113120168,
                        &PTR_DAT_113120400,2,0x10,0x1c);
    puRam00000001136c1ea8 = puVar1;
  }
  return;
}



/* Entry: 105c5d2a0; end: 105c5d2fb; -[SCLensStudioSettingsTableViewCell initWithReuseIdentifier:] */

undefined1 * FUN_105c5d2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec8f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithStyle_reuseIdentifier__1125f1528,0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105c5d2fc; end: 105c5d3a3; +[SCLensStudioSettingsTableViewCell formattedLabel:fontSize:] */

void FUN_105c5d2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c23d620(puVar1);
  func_0x00010c212f20(puVar1,param_3,param_4);
  _objc_release(param_4);
  func_0x00010c1cfce0(puVar1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c5d3a4; end: 105c5d42b; +[SCLensStudioSettingsTableViewCell formattedLabel:fontSize:color:] */

void FUN_105c5d3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_class(param_2);
  func_0x00010bfb6080(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c213180(param_2,param_3,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105c5d42c; end: 105c5d557; -[SCLensStudioSettingsTableViewCell updateCellTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5d42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112732e10;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    lVar1 = param_1;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb60a0(0x402e000000000000,lVar1,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105c5d558;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be3cfc0(param_1);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c212f20(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c5d558; end: 105c5d77f;  */

void FUN_105c5d558(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c5d780; end: 105c5d833; -[SCLensStudioSettingsTableViewCell _installTitleCapIfReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5d780(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar2 = (long)_DAT_112732e10;
  if (((*(long *)(param_1 + lVar2) != 0) &&
      (lVar1 = (long)_DAT_112732e14, *(long *)(param_1 + lVar1) != 0)) &&
     ((*(byte *)(param_1 + _DAT_112732e18) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_112732e18) = 1;
    func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar1),param_2,0);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105c5d834;
    puStack_30 = &UNK_1108471b0;
    lStack_28 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar2),param_2,&puStack_48);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105c5d834; end: 105c5d91f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5d834(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732e14);
  func_0x00010c0bbf80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc038000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c5d920; end: 105c5da43; -[SCLensStudioSettingsTableViewCell updateCellDescription:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5d920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112732e1c;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    lVar1 = param_1;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb60a0(0x4026000000000000,lVar1,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105c5da44;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c212f20(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c5da44; end: 105c5dd4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5da44(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112732e10);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (**(code **)(lVar5 + 0x10))(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar7 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c5dd4c; end: 105c5de77; -[SCLensStudioSettingsTableViewCell updateCellIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5dd4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112732e14;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    lVar1 = param_1;
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb60a0(0x402a000000000000,lVar1,param_2,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105c5de78;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be3cfc0(param_1);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  func_0x00010c212f20(lVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c5de78; end: 105c5e063;  */

void FUN_105c5de78(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x402a000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c5e064; end: 105c5e14f; -[SCLensStudioSettingsTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5e064(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_layoutSubviews_112600e60;
  puStack_48 = PTR_PTR_1126ec8f0;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar4 = param_1 + -48.0;
  _objc_release(lVar2);
  if (*(long *)(param_2 + _DAT_112732e14) != 0) {
    func_0x00010bfb68e0();
    _CGRectGetWidth();
    dVar4 = dVar4 - (param_1 + 24.0);
  }
  lVar2 = (long)_DAT_112732e10;
  if (*(long *)(param_2 + lVar2) != 0) {
    dVar3 = 0.0;
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    func_0x00010c106d40();
    if (dVar3 != dVar4) {
      func_0x00010c1e0180(dVar4,*(undefined8 *)(param_2 + lVar2));
      puStack_58 = PTR_PTR_1126ec8f0;
      lStack_60 = param_2;
      _objc_msgSendSuper2(&lStack_60,puVar1);
    }
  }
  return;
}



/* Entry: 105c5e150; end: 105c5e16b; -[SCLensStudioSettingsTableViewCell hideCellIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5e150(long param_1)

{
  if (*(long *)(param_1 + _DAT_112732e14) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112732e14),PTR_s_setHidden__1126479f8,1);
    return;
  }
  return;
}



/* Entry: 105c5e16c; end: 105c5e303; -[SCLensStudioSettingsTableViewCell minimumHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105c5e16c(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112732e1c);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  dVar4 = param_2;
  func_0x00010c14dd20(param_1 + -48.0,param_2,uVar1,param_4,puVar2,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_3 + _DAT_112732e14);
  dVar5 = 0.0;
  if (lVar3 != 0) {
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    dVar5 = 13.0;
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dce0(lVar3,param_4,puVar2);
    dVar5 = (double)(long)dVar5 + 24.0;
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
  uVar1 = *(undefined8 *)(param_3 + _DAT_112732e10);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = (param_1 + -48.0) - dVar5;
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  func_0x00010c14dd20(dVar5,param_2,uVar1,param_4,puVar2,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return dVar4 + param_2 + 26.0 + 5.0;
}



/* Entry: 105c5e304; end: 105c5e353; -[SCLensStudioSettingsTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5e304(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732e14,0);
  _objc_storeStrong(param_1 + _DAT_112732e1c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732e10,0);
  return;
}



/* Entry: 105c5e354; end: 105c5e447; -[SCLensStudioSettingsViewController initWithStudioSettingsScope:lensStudioPairManager:lensUserProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c5e354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ec8f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112732e20;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732e24;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112732e28;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c5e448; end: 105c5e52b; -[SCLensStudioSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5e448(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec8f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bfef740(param_1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112732e2c;
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_opt_class(PTR_PTR_1126c3718);
  func_0x00010c125fe0(uVar2);
  return;
}



/* Entry: 105c5e52c; end: 105c5e69b;  */

void FUN_105c5e52c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdef60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105c5e69c; end: 105c5e7cb; -[SCLensStudioSettingsViewController initTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5e69c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112732e2c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,1);
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x400000ad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c5e7cc; end: 105c5e833; -[SCLensStudioSettingsViewController leftButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5e7cc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec8f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_leftButtonPressed_112601348);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732e20);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0970c0();
  _objc_release(uVar1);
  return;
}



/* Entry: 105c5e834; end: 105c5e83b; -[SCLensStudioSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_105c5e834(void)

{
  return 1;
}



/* Entry: 105c5e83c; end: 105c5e843; -[SCLensStudioSettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_105c5e83c(void)

{
  return 1;
}



/* Entry: 105c5e844; end: 105c5e8e7; -[SCLensStudioSettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_105c5e844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e245f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_105c5f050();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2843c0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  func_0x000105c5f068();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284360(param_3,param_2,uVar1);
  _objc_release(uVar1);
  func_0x000105c5f080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284380(param_3,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105c5e8e8; end: 105c5e977; -[SCLensStudioSettingsViewController tableView:heightForRowAtIndexPath:] */

undefined8
FUN_105c5e8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_7);
  func_0x00010c267f20(param_5,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_7);
  _objc_release(param_7);
  func_0x00010c0ce420(param_3,param_4,param_5);
  _objc_release(param_5);
  return param_3;
}



/* Entry: 105c5e978; end: 105c5ea27; -[SCLensStudioSettingsViewController unpairStudioAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5e978(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732e24);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c281ce0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c5ea28; end: 105c5ebc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5ea28(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126af180;
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010bebb4a0(param_1);
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      puVar3 = PTR_PTR_1126af178;
      func_0x00010c22b900(PTR_PTR_1126af178);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc3e98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e24618;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e24618,0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235c40(puVar3);
      _objc_release(puVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112732e2c));
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105c5ebc8; end: 105c5ebd7;  */

void FUN_105c5ebc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105c5ebd8; end: 105c5ec23; -[SCLensStudioSettingsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5ebd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010beb8660(param_1);
  func_0x00010bf6e880(*(undefined8 *)(param_1 + _DAT_112732e2c),param_2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105c5ec24; end: 105c5ee23; -[SCLensStudioSettingsViewController _showConfirmationDialog] */

void FUN_105c5ec24(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126af180;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e24638;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e24638,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  ppuVar3 = ppuVar1;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  func_0x00010c160fc0(puVar4);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar4);
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e24658;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e24658,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar5);
  _objc_release(puVar6);
  _objc_release(ppuVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c281cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x20),PTR_s_unpairStudioAction_11267e158);
  return;
}



/* Entry: 105c5ee24; end: 105c5ee3b;  */

void FUN_105c5ee24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_unpairStudioAction_11267e158);
  return;
}



/* Entry: 105c5ee3c; end: 105c5efa7; -[SCLensStudioSettingsViewController _showSuccessDialog] */

void FUN_105c5ee3c(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126af180;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010c160fc0(puVar2);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar2);
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000105c5f098();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105c5efa8; end: 105c5efb7;  */

void FUN_105c5efa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105c5efb8; end: 105c5efc7; -[SCLensStudioSettingsViewController lensUserProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5efb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732e28),PTR_s_target_112678178);
  return;
}



/* Entry: 105c5efc8; end: 105c5efd7; -[SCLensStudioSettingsViewController getTitle] */

void FUN_105c5efc8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc8278;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dc8278,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105c5efd8; end: 105c5efef; -[SCLensStudioSettingsViewController saveSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5efd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732e2c);
  *(undefined8 *)(param_1 + _DAT_112732e2c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c5eff0; end: 105c5f04f; -[SCLensStudioSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c5eff0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732e2c,0);
  _objc_storeStrong(param_1 + _DAT_112732e28,0);
  _objc_storeStrong(param_1 + _DAT_112732e24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732e20,0);
  return;
}



/* Entry: 105c5f050; end: 105c5f0af;  */

void FUN_105c5f050(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e24678;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e24678,
                      &PTR____CFConstantStringClassReference_110e24698,0);
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



/* Entry: 105c5f0b0; end: 105c5f0c3; +[SCCSettingsFriendsOnlyProfileFetcher valdiMarshallableObjectDescriptor] */

void FUN_105c5f0b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108e0558;
  param_1[1] = &PTR_s_SCBridgeObservable_1108e0588;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105c5f0c4; end: 105c5f0d7; +[SCCSettingsNativeRowsFetcher valdiMarshallableObjectDescriptor] */

void FUN_105c5f0c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108e0598;
  param_1[1] = &PTR_s_SCBridgeObservable_1108e05c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105c5f0d8; end: 105c5f0eb; +[SCCSettingsPlusHeaderDependenciesFetcher valdiMarshallableObjectDescriptor] */

void FUN_105c5f0d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108e05e0;
  param_1[1] = &PTR_s_SCBridgeObservable_1108e0610;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105c5f0ec; end: 105c5f0f7; +[SCCSettingsRootSettingsComponent componentPath] */

undefined ** FUN_105c5f0ec(void)

{
  return &PTR____CFConstantStringClassReference_110e24718;
}



/* Entry: 105c5f0f8; end: 105c5f12b; -[SCCSettingsRootSettingsComponent initWithViewModel:componentContext:runtime:] */

void FUN_105c5f0f8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec900;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105c5f12c; end: 105c5f17b; -[SCCSettingsRootSettingsComponent setViewModel:] */

void FUN_105c5f12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c5f17c; end: 105c5f1bf; -[SCCSettingsRootSettingsComponent viewModel] */

void FUN_105c5f17c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c5f1c0; end: 105c5f1d3;  */

void FUN_105c5f1c0(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105c5f1d4; end: 105c5f1df; +[SCCPlusSettingsSectionView componentPath] */

undefined ** FUN_105c5f1d4(void)

{
  return &PTR____CFConstantStringClassReference_110e24738;
}



/* Entry: 105c5f1e0; end: 105c5f213; -[SCCPlusSettingsSectionView initWithViewModel:componentContext:runtime:] */

void FUN_105c5f1e0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec908;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105c5f214; end: 105c5f263; -[SCCPlusSettingsSectionView setViewModel:] */

void FUN_105c5f214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c5f264; end: 105c5f2a7; -[SCCPlusSettingsSectionView viewModel] */

void FUN_105c5f264(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c5f2a8; end: 105c5f2af; -[SCCSettingsRowID__Enum init] */

void FUN_105c5f2a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x67);
  return;
}



/* Entry: 105c5f2b0; end: 105c5f2b7; -[SCCSettingsSettingsRowStyle__Enum init] */

void FUN_105c5f2b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105c5f2b8; end: 105c5f347; -[SCCSettingsNativeRow initWithRowId:title:onTap:] */

undefined8 *
FUN_105c5f2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ec910;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_4);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105c5f348; end: 105c5f35b; +[SCCSettingsNativeRow valdiMarshallableObjectDescriptor] */

void FUN_105c5f348(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108e0628;
  param_1[1] = &PTR_DAT_1108e06b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c5f35c; end: 105c5f37f; -[SCCSettingsNativeRowsFetcherResponse initWithRows:] */

void FUN_105c5f35c(void)

{
  func_0x000105c5f484(PTR_PTR_1126ec918);
  return;
}



/* Entry: 105c5f380; end: 105c5f393; +[SCCSettingsNativeRowsFetcherResponse valdiMarshallableObjectDescriptor] */

void FUN_105c5f380(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108e06d0;
  param_1[1] = &PTR_DAT_1108e0700;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c5f394; end: 105c5f3c7; -[SCCSettingsPlusHeaderDependencies init] */

void FUN_105c5f394(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec920;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105c5f3c8; end: 105c5f3db; +[SCCSettingsPlusHeaderDependencies valdiMarshallableObjectDescriptor] */

void FUN_105c5f3c8(undefined8 *param_1)

{
  *param_1 = &PTR_s_viewModel_1108e0710;
  param_1[1] = &PTR_DAT_1108e0758;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c5f3dc; end: 105c5f423; -[SCCSettingsRootSettingsContext initWithPlusHeaderDependenciesFetcher:nativeRowsFetcher:friendsOnlyProfileFetcher:] */

void FUN_105c5f3dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec928;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105c5f424; end: 105c5f437; +[SCCSettingsRootSettingsContext valdiMarshallableObjectDescriptor] */

void FUN_105c5f424(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_1108e0770;
  param_1[1] = &PTR_s_SCValdiINavigator_1108e0830;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c5f438; end: 105c5f45b; -[SCCSettingsRootSettingsViewModel initWithVersionLabel:] */

void FUN_105c5f438(void)

{
  func_0x000105c5f484(PTR_PTR_1126ec930);
  return;
}



/* Entry: 105c5f45c; end: 105c5f49f; +[SCCSettingsRootSettingsViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c5f45c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108e0860;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c5f4a0; end: 105c5f5db; -[SCCPlusSettingsSectionViewContext initWithBlizzardLogger:onInteraction:onImpression:onDismiss:presentSubscribePage:presentManagementPage:] */

undefined8 *
FUN_105c5f4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  uVar2 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar3 = param_7;
  _objc_retainBlock();
  _objc_release(param_7);
  uVar4 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  puStack_58 = PTR_PTR_1126ec938;
  puVar5 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return puVar5;
}



/* Entry: 105c5f5dc; end: 105c5f5ef; +[SCCPlusSettingsSectionViewContext valdiMarshallableObjectDescriptor] */

void FUN_105c5f5dc(undefined8 *param_1)

{
  *param_1 = &PTR_s_blizzardLogger_1108e0890;
  param_1[1] = &PTR_s_SCCBlizzardLogging_1108e0938;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c5f5f0; end: 105c5f62b; -[SCCPlusSettingsSectionViewModel initWithSubscriptionInfo:] */

void FUN_105c5f5f0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec940;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105c5f62c; end: 105c5f64f; +[SCCPlusSettingsSectionViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c5f62c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108e0948;
  param_1[1] = &PTR_DAT_1108e0990;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c5f650; end: 105c5f6f3; -[SCComposerAppInfosStore initWithLogger:grapheneRegistry:] */

undefined1 *
FUN_105c5f650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec948;
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



/* Entry: 105c5f6f4; end: 105c5f703; -[SCComposerAppInfosStore getAppInfosWithAppsInfos:completion:] */

void FUN_105c5f6f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be1cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getAppInstallationStatus_comple_112564d80)
    ;
    return;
  }
  return;
}



/* Entry: 105c5f704; end: 105c5f7cb; -[SCComposerAppInfosStore installAppWithAppInfo:callback:] */

void FUN_105c5f704(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf06760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f520(param_1,param_2,lVar1,0);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf06760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f500(param_1,param_2,lVar1,0);
    _objc_release(lVar1);
    func_0x00010be3cc00(param_1,param_2,param_3,param_4);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}


