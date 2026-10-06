/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055f18b0; end: 1055f192b; -[SOJUScannableScannableAction _urlPayloadForURLAction:] */

void FUN_1055f18b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc180;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21afe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f192c; end: 1055f1a1b; -[SOJUScannableScannableAction _unlockableLensPayloadForGeofilterResponse:actionData:] */

void FUN_1055f192c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c0763a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126bc188;
      func_0x00010c0cb140(PTR_PTR_1126bc188);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bfadea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60(puVar4,param_2,lVar1);
      _objc_release(lVar1);
      func_0x00010c1ba6e0(puVar4,param_2,param_4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055f1a1c; end: 1055f1b97; -[SOJUScannableScannableAction _adCreativePreviewPayloadForAdCreativePreviewAction:] */

void FUN_1055f1a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = lRam00000001136bd310;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136bd310,&PTR___NSConcreteGlobalBlock_11089e880);
  }
  puVar2 = PTR_PTR_1126aef20;
  func_0x00010c0cb140(PTR_PTR_1126aef20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uRam00000001136bd308;
  uVar3 = param_3;
  func_0x00010bf96f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c21acc0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = param_3;
  func_0x00010bf96e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196620(puVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bf5a640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1855a0(puVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c06b560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af040(puVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c27d140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c067ec0(uVar4);
  func_0x00010c21a960(puVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055f1b98; end: 1055f1baf;  */

void FUN_1055f1b98(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136bd308;
  ppuRam00000001136bd308 = &PTR__OBJC_CLASS___NSConstantDictionary_111174720;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055f1bb0; end: 1055f1bbb; -[SOJUScannableScannableAction _commerceProductPayloadForMarcoAction:] */

void FUN_1055f1bb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cb150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b04f8,PTR_s_message_112610668);
  return;
}



/* Entry: 1055f1bbc; end: 1055f1c37; -[SOJUScannableScannableAction _snapKitDeepLinkPayloadForSnapKitDeepLinkAction:] */

void FUN_1055f1bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5850;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf684c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21afe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f1c38; end: 1055f1d63; -[SOJUScannableScannableAction _scanToAuthPayloadForScanToAuthAction:] */

void FUN_1055f1c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5888;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c252440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf3ec60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17dbc0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c150b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1f6ca0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c124ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1e9320(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f1d64; end: 1055f1f47; -[SOJUScannableScannableAction _gamePayloadForGameAction:] */

void FUN_1055f1d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = lRam00000001136bd320;
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136bd320,&PTR___NSConcreteGlobalBlock_11089e8a0);
  }
  puVar2 = PTR_PTR_1126bc190;
  func_0x00010c0cb140(PTR_PTR_1126bc190);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf05300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168ae0(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bfe5be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9840(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf222c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174260(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0ecf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6240(puVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0f6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9a60(puVar2);
  _objc_release(uVar3);
  uVar3 = uRam00000001136bd318;
  uVar4 = param_3;
  func_0x00010bf06560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c169400(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d9820(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055f1f48; end: 1055f1f5f;  */

void FUN_1055f1f48(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136bd318;
  ppuRam00000001136bd318 = &PTR__OBJC_CLASS___NSConstantDictionary_111174748;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055f1f60; end: 1055f1fdb; -[SOJUScannableScannableAction _connectedLensPayloadForURLAction:] */

void FUN_1055f1f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc198;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21afe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f1fdc; end: 1055f207f; -[SOJUScannableScannableAction _sponsoredLensPreviewPayloadForSponsoredLensPreviewAction:] */

void FUN_1055f1fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc1a0;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf5ac40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c185820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f2080; end: 1055f23c7; -[SOJUScannableScannableAction useCase] */

ulong FUN_1055f2080(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lStack_48;
  
  uVar6 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  lStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,uVar1,0,&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  if ((lStack_48 == 0) || (uVar6 = param_1, func_0x00010bee65e0(), (uVar6 & 1) == 0)) {
    uVar6 = param_1;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010b791314();
    _objc_release(uVar6);
    uVar6 = 1;
    if ((long)uVar3 < 0x2398fe) {
      if ((long)uVar3 < -0x24898533) {
        if ((long)uVar3 < -0x3a9a1a72) {
          if ((uVar3 != 0xffffffff906a8c25) && (uVar3 != 0xffffffffa1a4dc7c)) {
            if (uVar3 == 0xffffffffae6d6c7f) {
              uVar6 = 0xd;
            }
            goto LAB_1055f2358;
          }
        }
        else if ((uVar3 != 0xffffffffc565e58e) && (uVar3 != 0xffffffffd729add0)) {
          uVar5 = 0xffffffffdb1a423c;
          goto LAB_1055f234c;
        }
      }
      else if ((long)uVar3 < -0xc4c54f1) {
        if (uVar3 == 0xffffffffdb767acd) {
          uVar6 = 0xf;
          goto LAB_1055f2358;
        }
        if (uVar3 != 0xffffffffdc028ccf) {
          if (uVar3 == 0xffffffffe9b61e9e) {
            uVar6 = 2;
          }
          goto LAB_1055f2358;
        }
      }
      else if (uVar3 != 0xfffffffff3b3ab0f) {
        if (uVar3 == 0xfffffffff693009c) {
          func_0x00010bee65c0(param_1,param_2,puVar2);
          uVar6 = param_1;
          goto LAB_1055f2358;
        }
        if (uVar3 != 0) goto LAB_1055f2358;
      }
    }
    else if ((long)uVar3 < 0x411ba16f) {
      if ((long)uVar3 < 0x1e36712a) {
        if (uVar3 != 0x2398fe) {
          if (uVar3 == 0x4073aa1) {
            uVar6 = 7;
            goto LAB_1055f2358;
          }
          uVar5 = 0x10a561da;
LAB_1055f234c:
          if (uVar3 != uVar5) goto LAB_1055f2358;
        }
      }
      else {
        if (uVar3 == 0x1e36712a) {
          uVar6 = 10;
          goto LAB_1055f2358;
        }
        if (uVar3 != 0x24b0f4ce) {
          if (uVar3 == 0x31ce9f6d) {
            puVar4 = puVar2;
            func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110df10b8);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = 4;
            if (puVar4 != (undefined *)0x0) {
              uVar6 = 6;
            }
            _objc_release();
          }
          goto LAB_1055f2358;
        }
      }
    }
    else {
      if ((long)uVar3 < 0x53ef319d) {
        if (uVar3 == 0x411ba16f) {
          uVar6 = 0xb;
        }
        else if (uVar3 == 0x46909bb4) {
          uVar6 = 9;
        }
        else if (uVar3 == 0x4e9eb1eb) {
          uVar6 = 8;
        }
        goto LAB_1055f2358;
      }
      if (uVar3 != 0x53ef319d) {
        if (uVar3 == 0x63b68be7) {
          uVar6 = 5;
          goto LAB_1055f2358;
        }
        uVar5 = 0x70b27857;
        goto LAB_1055f234c;
      }
    }
  }
  uVar6 = 0;
LAB_1055f2358:
  _objc_release(puVar2);
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 1055f23c8; end: 1055f241b; -[SOJUScannableScannableAction _useCasePayloadIsSerializable] */

bool FUN_1055f23c8(long param_1)

{
  long lVar1;
  
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010b791314();
  _objc_release(param_1);
  return lVar1 != -0x51929381 && lVar1 != -0x1649e162;
}



/* Entry: 1055f241c; end: 1055f2477; -[SOJUScannableScannableAction _useCaseFromURLOnly:] */

undefined8 FUN_1055f241c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ddd938);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfda7c0();
  uVar1 = 0xe;
  if ((int)uVar2 == 0) {
    uVar1 = 3;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1055f2478; end: 1055f24df; +[SCSnapcodePayloadCommerceProduct descriptor] */

void FUN_1055f2478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a517b0,
                        &PTR____CFConstantStringClassReference_110df10f8,&PTR_DAT_1130ee480,
                        &PTR_s_productId_1130ee498,1,0x10,0x1c);
    puRam00000001136bd328 = puVar1;
  }
  return;
}



/* Entry: 1055f24e0; end: 1055f255b; +[SCSnapcodePayloadConnectedLens descriptor] */

undefined * FUN_1055f24e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51850,
                        &PTR____CFConstantStringClassReference_110df1118,&PTR_DAT_1130ee4b8,
                        &PTR_s_URL_1130ee4d0,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd330 = puVar1;
  }
  return puRam00000001136bd330;
}



/* Entry: 1055f255c; end: 1055f25d7; +[SCSnapcodePayloadDeepLink descriptor] */

undefined * FUN_1055f255c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a518f0,
                        &PTR____CFConstantStringClassReference_110df1138,&PTR_DAT_1130ee4f0,
                        &PTR_s_URL_1130ee508,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd338 = puVar1;
  }
  return puRam00000001136bd338;
}



/* Entry: 1055f25d8; end: 1055f26cf; +[SCSnapcodePayloadDiscover descriptor] */

undefined * FUN_1055f25d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd340 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51990,
                        &PTR____CFConstantStringClassReference_110df1158,&PTR_DAT_1130ee528,
                        &PTR_s_header_1130ee540,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd340 = puVar1;
  }
  return puRam00000001136bd340;
}



/* Entry: 1055f26d0; end: 1055f26db;  */

bool FUN_1055f26d0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1055f26dc; end: 1055f2757; +[SCSnapcodePayloadGame descriptor] */

undefined * FUN_1055f26dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd350 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51a30,
                        &PTR____CFConstantStringClassReference_110df1198,&PTR_DAT_1130ee5c0,
                        &PTR_s_title_1130ee5d8,8,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd350 = puVar1;
  }
  return puRam00000001136bd350;
}



/* Entry: 1055f2758; end: 1055f27d3; +[SCSnapcodePayloadScanToAuth descriptor] */

undefined * FUN_1055f2758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd358 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51ad0,
                        &PTR____CFConstantStringClassReference_110df11b8,&PTR_DAT_1130ee6d8,
                        &PTR_DAT_1130ee6f0,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd358 = puVar1;
  }
  return puRam00000001136bd358;
}



/* Entry: 1055f27d4; end: 1055f284f; +[SCSnapcodePayloadSnapKitDeepLink descriptor] */

undefined * FUN_1055f27d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51b70,
                        &PTR____CFConstantStringClassReference_110df11d8,&PTR_DAT_1130ee790,
                        &PTR_s_URL_1130ee7a8,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd360 = puVar1;
  }
  return puRam00000001136bd360;
}



/* Entry: 1055f2850; end: 1055f29e7; -[SCMapHomeWorkDataProvider initWithActionmojiService:snapzenUserDataService:configProvider:httpMetadataService:mapNetworkCacheManager:] */

undefined1 *
FUN_1055f2850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e9520;
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
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar3 = PTR_PTR_1126bc1a8;
    _objc_opt_class(PTR_PTR_1126bc1a8);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_retain(&PTR____CFConstantStringClassReference_110df12b8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined ***)((long)puVar1 + 0x38) = &PTR____CFConstantStringClassReference_110df12b8;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055f29e8; end: 1055f2ad7; -[SCMapHomeWorkDataProvider updateInferredSchoolPermissionsWithHideSchool:completion:] */

void FUN_1055f29e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bc1b0;
  _objc_alloc_init(PTR_PTR_1126bc1b0);
  func_0x00010c1a8340();
  puVar2 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c2896c0(uVar3);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1055f2ad8; end: 1055f2b4f;  */

void FUN_1055f2ad8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    if (lVar1 == 0) goto LAB_1055f2b34;
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
    lVar3 = 0;
  }
  else {
    if (lVar1 == 0) goto LAB_1055f2b34;
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    lVar3 = param_3;
  }
  (*pcVar4)(lVar1,uVar2,lVar3);
LAB_1055f2b34:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f2b50; end: 1055f2b53; -[SCMapHomeWorkDataProvider resetInferredSchoolOnboarding] */

void FUN_1055f2b50(void)

{
  return;
}



/* Entry: 1055f2b54; end: 1055f2c87; -[SCMapHomeWorkDataProvider fetchUserPickedLocationsWithUserPickedOnly:completion:] */

void FUN_1055f2b54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bc1c0;
  _objc_alloc_init(PTR_PTR_1126bc1c0);
  func_0x00010c1abdc0();
  puVar2 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfcbec0(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1055f2c88; end: 1055f2cfb;  */

void FUN_1055f2c88(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  if (param_3 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be32e00();
    _objc_release(param_1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f2cfc; end: 1055f2e1f; -[SCMapHomeWorkDataProvider updateUserPickedLocations:completion:] */

void FUN_1055f2cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bc1c8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  lVar2 = param_1;
  func_0x00010bdf55e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1db660(puVar1);
  puVar3 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c28bb60(uVar4);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1055f2e20; end: 1055f2e97;  */

void FUN_1055f2e20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    if (lVar1 == 0) goto LAB_1055f2e7c;
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
    lVar3 = 0;
  }
  else {
    if (lVar1 == 0) goto LAB_1055f2e7c;
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    lVar3 = param_3;
  }
  (*pcVar4)(lVar1,uVar2,lVar3);
LAB_1055f2e7c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f2e98; end: 1055f2f6b; -[SCMapHomeWorkDataProvider fetchCurrentUserHomeModelWithCompletion:] */

void FUN_1055f2e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be10ba0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1055f2f6c; end: 1055f3047;  */

void FUN_1055f2f6c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_3);
  }
  else {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    func_0x00010bfa51e0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1055f3048; end: 1055f31d7;  */

void FUN_1055f3048(long param_1,undefined **param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_2);
  if ((param_2 == (undefined **)0x0) || (param_3 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    ppuVar5 = &PTR____CFConstantStringClassReference_110df12d8;
    FUN_1055f31d8(&PTR____CFConstantStringClassReference_110df12d8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0,ppuVar5);
  }
  else {
    ppuVar5 = *(undefined ***)(param_1 + 0x20);
    _objc_retain(ppuVar5);
    ppuVar3 = param_2;
    func_0x00010bfece40();
    if (ppuVar3 == (undefined **)0x7fffffffffffffff) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      ppuVar3 = &PTR____CFConstantStringClassReference_110df12f8;
      FUN_1055f31d8(&PTR____CFConstantStringClassReference_110df12f8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0,ppuVar3);
    }
    else {
      ppuVar3 = param_2;
      func_0x00010c0dfd20(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a8d20(*(undefined8 *)(param_1 + 0x20));
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,uVar1,puVar4,0);
      _objc_release(puVar4);
    }
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f31d8; end: 1055f324b;  */

void FUN_1055f31d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_1,
                      *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110df1378,200,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055f324c; end: 1055f32ff;  */

long FUN_1055f324c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe3e20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf4bb00(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 1055f3300; end: 1055f3303; -[SCMapHomeWorkDataProvider fetchUserHomeModelWithCompletion:] */

void FUN_1055f3300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be10bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchCurrentUserDataWithComplet_112561c88);
  return;
}



/* Entry: 1055f3304; end: 1055f36af; -[SCMapHomeWorkDataProvider updateCurrentUserHomeModelWithHomeModel:completion:] */

void FUN_1055f3304(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_1055f3404:
    _objc_release(param_4);
LAB_1055f340c:
    if (param_5 == 0) goto LAB_1055f3664;
    ppuVar3 = &PTR____CFConstantStringClassReference_110df1318;
    FUN_1055f31d8(&PTR____CFConstantStringClassReference_110df1318);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,0,ppuVar3);
  }
  else {
    lVar2 = param_4;
    func_0x00010bfe3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_1055f3404;
    ppuVar3 = (undefined **)PTR_PTR_1126bc218;
    _objc_alloc_init();
    lVar1 = param_4;
    func_0x00010bfe3e20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1742c0(ppuVar3);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010bf02ae0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      dVar9 = 0.0;
      func_0x00010c167da0(0,ppuVar3);
    }
    else {
      lVar2 = param_4;
      func_0x00010bf02ae0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar9 = (double)(ulong)(uint)(float)param_1;
      func_0x00010c167da0(dVar9,ppuVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c14e120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010c1f61c0(0x3f800000,ppuVar3);
    }
    else {
      lVar2 = param_4;
      func_0x00010c14e120(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c1f61c0((float)dVar9,ppuVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126bc210;
    _objc_alloc_init(PTR_PTR_1126bc210);
    lVar1 = param_4;
    func_0x00010c09ea00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    func_0x00010c1b9120(puVar4);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c09ea00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c1be5e0(puVar4);
    _objc_release(lVar1);
    func_0x00010c167d00(ppuVar3);
    _objc_release(puVar4);
    _objc_release(param_4);
    if (ppuVar3 == (undefined **)0x0) goto LAB_1055f340c;
    puVar4 = PTR_PTR_1126bc1d0;
    _objc_alloc_init(PTR_PTR_1126bc1d0);
    func_0x00010c1b7000();
    func_0x00010c21e180(puVar4);
    puVar5 = PTR_PTR_1126bc1b8;
    func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar8);
    _objc_initWeak(auStack_68,param_2);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_5);
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    func_0x00010c11c980(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(ppuVar3);
LAB_1055f3664:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1055f36b0; end: 1055f375b;  */

void FUN_1055f36b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_1055f3740;
      pcVar5 = *(code **)(lVar3 + 0x10);
      uVar2 = 0;
      lVar4 = param_3;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b5c0();
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x30);
      if (lVar3 == 0) goto LAB_1055f3740;
      pcVar5 = *(code **)(lVar3 + 0x10);
      uVar2 = 1;
      lVar4 = 0;
    }
    (*pcVar5)(lVar3,uVar2,lVar4);
  }
LAB_1055f3740:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055f375c; end: 1055f38af; -[SCMapHomeWorkDataProvider resetCurrentUserHomeCachedDataWithCompletion:] */

void FUN_1055f375c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc1d8;
  _objc_opt_new(PTR_PTR_1126bc1d8);
  puVar2 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c1383e0(uVar3);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1055f38b0; end: 1055f3b47; -[SCMapHomeWorkDataProvider fetchAvailableHomeModelsWithCompletion:] */

void FUN_1055f38b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000109021ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000109021cf8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc();
  func_0x00010c04e820();
  _objc_release(puVar3);
  puVar5 = *(undefined **)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf271e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar3 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126bc1e0;
    _objc_alloc(PTR_PTR_1126bc1e0);
    func_0x00010c02bce0();
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(puVar4);
    _objc_retain(uVar1);
    func_0x00010c25f600(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    puVar5 = puVar3;
    FUN_1055f3b48(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar5,0);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1055f3b48; end: 1055f414f;  */

/* WARNING: Removing unreachable block (ram,0x0001055f3ff4) */

void FUN_1055f3b48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined8 in_x4;
  undefined *in_x5;
  long lVar15;
  long lVar16;
  long lStack_140;
  undefined *puStack_130;
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
  puVar1 = PTR_PTR_1126bc1f0;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &PTR____CFConstantStringClassReference_110df13b8;
  lVar3 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar3;
  func_0x00010bf529e0();
  if (lVar15 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar3);
    ppuVar14 = &puStack_130;
    in_x4 = 0x10;
    lStack_140 = lVar3;
    func_0x00010bf52a60();
    if (lStack_140 != 0) {
      lVar15 = *plStack_120;
      do {
        lVar16 = 0;
        do {
          if (*plStack_120 != lVar15) {
            _objc_enumerationMutation(lVar3);
          }
          puVar4 = *(undefined **)(lStack_128 + lVar16 * 8);
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf529e0();
          if (puVar5 != (undefined *)0x0) {
            _objc_retain(puVar4);
            puVar6 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR____kCFBooleanTrue_11034ab68;
            if (puVar6 != (undefined *)0x0) {
              puVar5 = puVar6;
            }
            _objc_retain(puVar5);
            _objc_release(puVar6);
            puVar6 = PTR_PTR_1126bc1f0;
            _objc_alloc();
            puVar7 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar4;
            func_0x00010c0e00e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1f3c0();
            _objc_release(puVar5);
            in_x5 = puVar10;
            func_0x00010c01b4a0();
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar7);
            puVar5 = puVar4;
            func_0x00010c0e00e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2256c0(puVar6);
            _objc_release(puVar5);
            puVar5 = puVar4;
            func_0x00010c0e00e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a7d00(puVar6);
            _objc_release(puVar5);
            puVar5 = puVar4;
            func_0x00010c0e00e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18bde0(puVar6);
            _objc_release(puVar5);
            puVar5 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar5 != (undefined *)0x0) {
              puVar5 = puVar4;
              func_0x00010c0e00e0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c189440(puVar6);
              _objc_release(puVar5);
            }
            _objc_release(puVar4);
            if (puVar6 != (undefined *)0x0) {
              func_0x00010befa120(puVar2);
            }
            _objc_release(puVar6);
          }
          _objc_release(puVar4);
          lVar16 = lVar16 + 1;
        } while (lStack_140 != lVar16);
        ppuVar14 = &puStack_130;
        in_x4 = 0x10;
        lStack_140 = lVar3;
        func_0x00010bf52a60();
      } while (lStack_140 != 0);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(in_x4);
    _objc_retain(in_x5);
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (lVar3 != 0) {
      if ((ppuVar14 == (undefined **)0x0) && (in_x5 == (undefined *)0x0)) {
        puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bdc1900();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        puVar2 = puVar1;
        FUN_1055f3b48();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 == (undefined *)0x0) {
          lVar15 = *(long *)(param_1 + 0x30);
          puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          (**(code **)(lVar15 + 0x10))(lVar15,0,puVar4);
          _objc_release(puVar4);
        }
        else {
          uVar13 = *(undefined8 *)(lVar3 + 0x28);
          func_0x00010c269d40(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf267c0(0x40f5180000000000);
          _objc_release(uVar13);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar2,0);
        }
        _objc_release(puVar2);
        _objc_release(puVar1);
        _objc_release(0);
      }
      else {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,in_x5);
      }
    }
    _objc_release(lVar3);
    _objc_release(in_x5);
    _objc_release(in_x4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055f4150; end: 1055f4253; -[SCMapHomeWorkDataProvider fetchAllAvailableHomeModelsWithCompletion:] */

void FUN_1055f4150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000109021ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc1e8;
  _objc_alloc_init(PTR_PTR_1126bc1e8);
  func_0x00010c16ab60();
  puVar3 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bfc6340(uVar4);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1055f4254; end: 1055f448f;  */

/* WARNING: Removing unreachable block (ram,0x0001055f46f8) */

void FUN_1055f4254(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined *puVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 != 0) {
      lVar10 = param_2;
      func_0x00010bf0bb00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar10;
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        lVar1 = param_2;
        func_0x00010c116400();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf529e0();
        _objc_release(lVar1);
        _objc_release(lVar10);
        if (lVar2 == 0) goto LAB_1055f4430;
      }
      else {
        _objc_release(lVar10);
      }
      lVar10 = param_2;
      func_0x00010bf0bb00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar10;
      func_0x00010c0b8620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      lVar10 = param_2;
      func_0x00010c116400();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar10;
      func_0x00010c0b8620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puVar3 = PTR_PTR_1126bc1f0;
      _objc_alloc_init();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(puVar4);
      puVar4 = puVar13;
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar13,0);
      _objc_release(puVar13);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_1055f4444;
    }
LAB_1055f4430:
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar12 = *(code **)(lVar1 + 0x10);
    lVar10 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar12 = *(code **)(lVar1 + 0x10);
    lVar10 = param_3;
  }
  puVar4 = (undefined *)0x0;
  (*pcVar12)(lVar1,0,lVar10);
LAB_1055f4444:
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(0);
    puVar3 = puVar4;
    func_0x00010c294d60();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    func_0x00010c08fa60();
    if (puVar13 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      _objc_release(puVar3);
    }
    else {
      puVar13 = puVar4;
      func_0x00010c112140();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar13;
      func_0x00010c08fa60();
      _objc_release(puVar13);
      _objc_release(puVar3);
      if (puVar5 == (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR_PTR_1126bc1f0;
        _objc_alloc();
        puVar3 = puVar4;
        func_0x00010c294d60();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf0b320();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010c112140(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c22a600();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x00010c26cfe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01b4a0(puVar13);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c2a5040(puVar4);
        func_0x00010c0df720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2256c0(puVar13);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bfe0640(puVar4);
        func_0x00010c0df720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7d00(puVar13);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf6dba0(puVar4);
        func_0x00010c0df720(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18bde0(puVar13);
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x00010bf63540(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189440(puVar13);
        _objc_release(puVar3);
      }
    }
    _objc_release(0);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  return;
}



/* Entry: 1055f4490; end: 1055f449b;  */

/* WARNING: Removing unreachable block (ram,0x0001055f46f8) */

void FUN_1055f4490(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(0);
  lVar1 = param_2;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_2;
    func_0x00010c112140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126bc1f0;
      _objc_alloc();
      lVar1 = param_2;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010bf0b320();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c112140(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c22a600();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c26cfe0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b4a0(puVar8);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c2a5040(param_2);
      func_0x00010c0df720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2256c0(puVar8);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bfe0640(param_2);
      func_0x00010c0df720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7d00(puVar8);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf6dba0(param_2);
      func_0x00010c0df720(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bde0(puVar8);
      _objc_release(puVar7);
      lVar1 = param_2;
      func_0x00010bf63540(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189440(puVar8);
      _objc_release(lVar1);
    }
  }
  _objc_release(0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1055f449c; end: 1055f47d3;  */

void FUN_1055f449c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c112140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      puVar8 = (undefined *)0x0;
      goto LAB_1055f47a0;
    }
    puVar8 = PTR_PTR_1126bc1f0;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c294d60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf0b320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c112140(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c22a600();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c26cfe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b4a0(puVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c2a5040(param_1);
    func_0x00010c0df720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2256c0(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfe0640(param_1);
    func_0x00010c0df720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7d00(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf6dba0(param_1);
    func_0x00010c0df720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18bde0(puVar8);
    _objc_release(puVar7);
    lVar1 = param_1;
    func_0x00010bf63540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189440(puVar8);
    _objc_release(lVar1);
    if (param_2 == 0) goto LAB_1055f47a0;
    lVar1 = param_2;
    func_0x00010c115c20(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3bc0(puVar8);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c115c20(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196620(puVar8);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_1055f47a0:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1055f47d4; end: 1055f483b;  */

void FUN_1055f47d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf0af00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1055f449c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055f483c; end: 1055f4baf; -[SCMapHomeWorkDataProvider _handleUserPickedLocationsResponse:completion:] */

void FUN_1055f483c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c0fb920(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe3d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c102a80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar3 = uVar2;
  uVar4 = param_1;
  func_0x00010c102a80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(param_1,uVar4);
  uVar5 = param_1;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0fb920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfd7c60();
  if ((int)uVar3 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126b1d38;
    _objc_alloc(PTR_PTR_1126b1d38);
    func_0x00010c230b20(uVar2);
    func_0x00010c055ca0(param_1,uVar4,puVar7);
    uVar5 = param_1;
  }
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0fb920(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2bd380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c102a80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar4 = uVar3;
  uVar10 = uVar5;
  func_0x00010c102a80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(uVar5,uVar10);
  uVar11 = uVar5;
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0fb920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfde920();
  if ((int)uVar4 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b1d38;
    _objc_alloc(PTR_PTR_1126b1d38);
    func_0x00010c230b20(uVar3);
    func_0x00010c055ca0(uVar5,uVar10,puVar8);
    uVar11 = uVar5;
  }
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0fb920(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c150500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c102a80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar5 = uVar4;
  uVar10 = uVar11;
  func_0x00010c102a80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(uVar11,uVar10);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0fb920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfdb720();
  if ((int)uVar5 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126b1d38;
    _objc_alloc(PTR_PTR_1126b1d38);
    func_0x00010c230b20(uVar4);
    func_0x00010c055ca0(uVar11,uVar10,puVar9);
  }
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126bc1f8;
  _objc_alloc(PTR_PTR_1126bc1f8);
  func_0x00010c01a920();
  (**(code **)(param_5 + 0x10))(param_5,puVar6,0);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(uVar4);
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f4bb0; end: 1055f4d7b; -[SCMapHomeWorkDataProvider _createUserPickedLocationsFromHomeWorkLocations:] */

void FUN_1055f4bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 uVar6;
  long unaff_x24;
  undefined8 uVar7;
  long unaff_x25;
  undefined8 uVar8;
  undefined **unaff_x26;
  long lVar9;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined **ppuStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
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
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bc200;
  _objc_alloc_init();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x25 = *plStack_120;
    unaff_x26 = &PTR_PTR_1126bc000;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_5);
        }
        unaff_x24 = *(long *)(lStack_128 + lVar9 * 8);
        unaff_x22 = PTR_PTR_1126bc208;
        _objc_alloc_init();
        func_0x00010c074c20(unaff_x24);
        func_0x00010c2006c0(unaff_x22);
        unaff_x23 = PTR_PTR_1126bc210;
        _objc_alloc_init();
        func_0x00010bf51c80(unaff_x24);
        func_0x00010c1b9120(unaff_x23);
        func_0x00010bf51c80(unaff_x24);
        func_0x00010c1be5e0(param_2,unaff_x23);
        func_0x00010c1de8e0(unaff_x22);
        lVar3 = unaff_x24;
        func_0x00010c27dd80();
        if (lVar3 == 0) {
          func_0x00010c1a8d00(puVar1);
        }
        else {
          lVar3 = unaff_x24;
          func_0x00010c27dd80();
          if (lVar3 == 1) {
            func_0x00010c227220(puVar1);
          }
        }
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_5;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_5);
  lVar2 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1055f4d7c;
  ppuStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  puStack_150 = puVar1;
  lStack_148 = param_5;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  lVar3 = *(long *)(lVar2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bc218);
  lVar9 = lVar3;
  func_0x00010bf27460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar9 == 0) {
    puVar1 = PTR_PTR_1126bc220;
    _objc_alloc_init(PTR_PTR_1126bc220);
    puVar4 = PTR_PTR_1126bc1b8;
    func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    _objc_retain(uVar7);
    _objc_initWeak(auStack_188,lVar2);
    uVar8 = *(undefined8 *)(lVar2 + 0x10);
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_retain(puVar5);
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    func_0x00010bfca840(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be27be0(lVar2);
  }
  _objc_release(lVar9);
  _objc_release(puVar5);
  return;
}



/* Entry: 1055f4d7c; end: 1055f4f67; -[SCMapHomeWorkDataProvider _fetchCurrentUserDataWithCompletion:] */

void FUN_1055f4d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bc218);
  lVar2 = lVar1;
  func_0x00010bf27460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126bc220;
    _objc_alloc_init(PTR_PTR_1126bc220);
    puVar4 = PTR_PTR_1126bc1b8;
    func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    _objc_initWeak(auStack_58,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    func_0x00010bfca840(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    func_0x00010be27be0(param_1);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1055f4f68; end: 1055f50ab;  */

void FUN_1055f4f68(long param_1,undefined **param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      if ((param_2 == (undefined **)0x0) ||
         (ppuVar2 = param_2, func_0x00010bfde0a0(), ((ulong)ppuVar2 & 1) == 0)) {
        lVar4 = *(long *)(param_1 + 0x30);
        ppuVar2 = &PTR____CFConstantStringClassReference_110df1358;
        FUN_1055f31d8(&PTR____CFConstantStringClassReference_110df1358);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar2);
      }
      else {
        uVar3 = *(undefined8 *)(lVar1 + 0x28);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = param_2;
        func_0x00010c291840(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf26a60(0x40f5180000000000,uVar3);
        _objc_release(ppuVar2);
        _objc_release(uVar3);
        ppuVar2 = param_2;
        func_0x00010c291840(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be27be0(lVar1);
      }
      _objc_release(ppuVar2);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,param_3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f50ac; end: 1055f52cf; -[SCMapHomeWorkDataProvider _handleCurrentUserData:completion:] */

void FUN_1055f50ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined **ppuVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  double dVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf24860();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_1055f5270:
    _objc_release(param_4);
  }
  else {
    uVar2 = param_4;
    func_0x00010bfd4100();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_1055f5270;
    puVar3 = PTR_PTR_1126b1d80;
    _objc_alloc(PTR_PTR_1126b1d80);
    uVar1 = param_4;
    func_0x00010bf02920(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    uVar2 = param_4;
    uVar11 = param_1;
    func_0x00010bf02920(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c0219a0(param_1,uVar11,puVar3);
    fVar9 = (float)param_1;
    _objc_release(uVar2);
    _objc_release(uVar1);
    ppuVar5 = (undefined **)PTR_PTR_1126bc228;
    _objc_alloc();
    uVar1 = param_4;
    func_0x00010bf24860(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026bc0();
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf02ae0(param_4);
    fVar10 = SUB84((double)fVar9,0);
    if (fVar9 == 0.0) {
      fVar10 = 0.0;
    }
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167da0(ppuVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c14e7e0(param_4);
    dVar12 = (double)fVar10;
    if (fVar10 == 0.0) {
      dVar12 = 1.0;
    }
    func_0x00010c0df720(dVar12,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f5fe0(ppuVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_4);
    if (ppuVar5 != (undefined **)0x0) {
      pcVar7 = *(code **)(param_5 + 0x10);
      ppuVar6 = (undefined **)0x0;
      ppuVar8 = ppuVar5;
      goto LAB_1055f52a0;
    }
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110df1318;
  FUN_1055f31d8(&PTR____CFConstantStringClassReference_110df1318);
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = *(code **)(param_5 + 0x10);
  ppuVar5 = (undefined **)0x0;
  ppuVar8 = ppuVar6;
LAB_1055f52a0:
  (*pcVar7)(param_5,ppuVar5,ppuVar6);
  _objc_release(ppuVar8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f52d0; end: 1055f533b; -[SCMapHomeWorkDataProvider .cxx_destruct] */

void FUN_1055f52d0(long param_1)

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



/* Entry: 1055f533c; end: 1055f541f; -[SCMapHomeWorkSettingsServiceProvider provide] */

void FUN_1055f533c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc230;
  _objc_alloc(PTR_PTR_1126bc230);
  func_0x00010c01a980();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055f5420; end: 1055f545f;  */

void FUN_1055f5420(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055f5460; end: 1055f567b; -[SCMapHomeWorkSettingsServiceProvider _mapHomeWorkDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055f5460(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar1 = param_1 + _DAT_112726984;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bc1b8;
  lVar1 = param_1 + _DAT_112726988;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106b139c8(puVar5,&PTR____CFConstantStringClassReference_110df13f8,lVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11272698c);
  *(undefined **)(param_1 + _DAT_11272698c) = puVar5;
  _objc_release(uVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bc238;
  _objc_alloc(PTR_PTR_1126bc238);
  func_0x00010c058f80();
  puVar6 = PTR_PTR_1126bc240;
  _objc_alloc(PTR_PTR_1126bc240);
  func_0x00010c058f80();
  puVar7 = PTR_PTR_1126bc248;
  _objc_alloc(PTR_PTR_1126bc248);
  lVar1 = param_1 + _DAT_112726990;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112726994;
  _objc_loadWeakRetained(lVar2);
  lVar8 = lVar2;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112726998;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c0d78c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0ac0(puVar7);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055f567c; end: 1055f56f3; -[SCMapHomeWorkSettingsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055f567c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726998);
  _objc_destroyWeak(param_1 + _DAT_112726994);
  _objc_destroyWeak(param_1 + _DAT_112726990);
  _objc_destroyWeak(param_1 + _DAT_112726984);
  _objc_destroyWeak(param_1 + _DAT_112726988);
  _objc_destroyWeak(param_1 + _DAT_11272699c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272698c,0);
  return;
}



/* Entry: 1055f56f4; end: 1055f5767; -[UNISCMAActionmoji initWithUnifiedGrpcService:] */

undefined1 * FUN_1055f56f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9528;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055f5768; end: 1055f584b; -[UNISCMAActionmoji getActionmojiAssetsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055f5768(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc250;
  _objc_opt_class(PTR_PTR_1126bc250);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df1418,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f584c; end: 1055f592f; -[UNISCMAActionmoji setActionmojiPreferencesWithRequest:callOptionsBuilder:handler:] */

void FUN_1055f584c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc258;
  _objc_opt_class(PTR_PTR_1126bc258);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df1438,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f5930; end: 1055f5a13; -[UNISCMAActionmoji getActionmojiPreferencesWithRequest:callOptionsBuilder:handler:] */

void FUN_1055f5930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc260;
  _objc_opt_class(PTR_PTR_1126bc260);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df1458,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f5a14; end: 1055f5af7; -[UNISCMAActionmoji deleteUserGeneratedActionmojiAssetWithRequest:callOptionsBuilder:handler:] */

void FUN_1055f5a14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc268;
  _objc_opt_class(PTR_PTR_1126bc268);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df1478,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f5af8; end: 1055f5bdb; -[UNISCMAActionmoji getActionmojiSharingOptionsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055f5af8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc270;
  _objc_opt_class(PTR_PTR_1126bc270);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df1498,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f5bdc; end: 1055f5cbf; -[UNISCMAActionmoji setActionmojiSharingOptionsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055f5bdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc278;
  _objc_opt_class(PTR_PTR_1126bc278);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df14b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f5cc0; end: 1055f5da3; -[UNISCMAActionmoji getUserPickedLocationsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055f5cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc280;
  _objc_opt_class(PTR_PTR_1126bc280);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df14d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f5da4; end: 1055f5e87; -[UNISCMAActionmoji updateUserPickedLocationsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055f5da4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc288;
  _objc_opt_class(PTR_PTR_1126bc288);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df14f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f5e88; end: 1055f5f6b; -[UNISCMAActionmoji updateSchoolPermissionWithRequest:callOptionsBuilder:handler:] */

void FUN_1055f5e88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bc290;
  _objc_opt_class(PTR_PTR_1126bc290);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df1518,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055f5f6c; end: 1055f5f77; -[UNISCMAActionmoji .cxx_destruct] */

void FUN_1055f5f6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055f5f78; end: 1055f5fb7;  */

void FUN_1055f5f78(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be62960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055f5fb8; end: 1055f6033; -[SCMapNetworkCachingServiceProvider _networkCacheManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055f5fb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126bc2a0;
  _objc_alloc(PTR_PTR_1126bc2a0);
  param_1 = param_1 + _DAT_1127269a4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055f6034; end: 1055f606b; -[SCMapNetworkCachingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055f6034(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127269a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127269a8);
  return;
}



/* Entry: 1055f606c; end: 1055f6113; -[SCMapNetworkCacheManager initWithDocObjectContext:] */

undefined1 * FUN_1055f606c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9530;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010bde0440(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055f6114; end: 1055f633b; -[SCMapNetworkCacheManager cacheJSONResponse:forUrl:identifier:ttl:] */

void FUN_1055f6114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  FUN_1055f633c(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar3 = PTR_PTR_1126bc2a8;
  _objc_alloc();
  func_0x00010c020d00();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010c0f8500(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055f633c; end: 1055f63f7;  */

void FUN_1055f633c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010beec820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010bdc1b20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055f63f8; end: 1055f6483;  */

void FUN_1055f63f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1055f95b4(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f6484; end: 1055f6a57; -[SCMapNetworkCacheManager cachedJSONResponseForURL:identifier:] */

void FUN_1055f6484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  double dVar11;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_1055f633c(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bc2a8);
  if (lVar4 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar4);
  }
  puVar5 = &uStack_191;
  FUN_1055f8c94();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(uVar3);
  ppuStack_208 = &PTR_SUB_110862760;
  dVar11 = 0.0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined *)0x0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar5 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  pppuStack_150 = &ppuStack_208;
  uStack_140 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar6 = &uStack_279;
  uStack_1d8 = uVar3;
  puStack_158 = puVar5;
  FUN_1055f8e0c();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lStack_2c0 = (long)dVar11;
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_110864b98;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar6[0x1a];
  bStack_25d = puVar6[0x1b];
  uStack_270 = 8;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_110864b38;
  pppuStack_238 = &ppuStack_2f0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_278;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar8 = &uStack_b0;
  puStack_240 = puVar6;
  func_0x0001000e77a0(puVar8,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_110864b38;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110864b98;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  _objc_release(puVar7);
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_148;
  func_0x000100105004(&ppuStack_278);
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_1c0;
  func_0x000100105004(&ppuStack_278);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar4);
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar9;
    func_0x00010c15eb00(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar10 = (undefined *)0x0;
    if (puVar7 != (undefined *)0x0) {
      _objc_retain(puVar7);
      puVar10 = puVar7;
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar9);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1055f6a58; end: 1055f6c53; -[SCMapNetworkCacheManager cacheMessage:forUrl:identifier:ttl:] */

void FUN_1055f6a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  FUN_1055f633c(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bc2a8;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020d00();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00010c0f8500(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055f6c54; end: 1055f6cdf;  */

void FUN_1055f6c54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1055f95b4(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f6ce0; end: 1055f72af; -[SCMapNetworkCacheManager cachedResponseForURL:identifier:responseClass:] */

void FUN_1055f6ce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_1055f633c(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bc2a8);
  if (lVar4 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar4);
  }
  puVar5 = &uStack_191;
  FUN_1055f8c94();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(uVar3);
  ppuStack_208 = &PTR_SUB_110862760;
  dVar10 = 0.0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined *)0x0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar5 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  pppuStack_150 = &ppuStack_208;
  uStack_140 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar6 = &uStack_279;
  uStack_1d8 = uVar3;
  puStack_158 = puVar5;
  FUN_1055f8e0c();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lStack_2c0 = (long)dVar10;
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_110864b98;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar6[0x1a];
  bStack_25d = puVar6[0x1b];
  uStack_270 = 8;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_110864b38;
  pppuStack_238 = &ppuStack_2f0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_278;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar8 = &uStack_b0;
  puStack_240 = puVar6;
  func_0x0001000e77a0(puVar8,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_110864b38;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110864b98;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  _objc_release(puVar7);
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_148;
  func_0x000100105004(&ppuStack_278);
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_1c0;
  func_0x000100105004(&ppuStack_278);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar4);
  if (puVar9 == (undefined8 *)0x0) {
    lVar4 = 0;
  }
  else {
    _objc_alloc();
    puVar8 = puVar9;
    func_0x00010c15eb00(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360();
    _objc_release(puVar8);
    lVar4 = 0;
    if (param_5 != 0) {
      _objc_retain(param_5);
      lVar4 = param_5;
    }
    _objc_release(param_5);
  }
  _objc_release(puVar9);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1055f72b0; end: 1055f7857; -[SCMapNetworkCacheManager removeCachedResponseForURL:identifier:] */

void FUN_1055f72b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  FUN_1055f633c(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bc2a8);
  if (lVar3 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar3);
  }
  puVar4 = &uStack_191;
  FUN_1055f8c94();
  uStack_200 = 0xf;
  uStack_1f0 = 0x100;
  _objc_retain(uVar2);
  ppuStack_208 = &PTR_SUB_110862760;
  dVar10 = 0.0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined *)0x0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_FUN_110862700;
  pppuStack_150 = &ppuStack_208;
  uStack_140 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar5 = &uStack_279;
  uStack_1d8 = uVar2;
  puStack_158 = puVar4;
  FUN_1055f8e0c();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lStack_2c0 = (long)dVar10;
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_DAT_110864b98;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  lStack_2a0 = 0;
  lStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar5[0x1a];
  bStack_25d = puVar5[0x1b];
  uStack_270 = 8;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_FUN_110864b38;
  pppuStack_238 = &ppuStack_2f0;
  lStack_228 = 0;
  lStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  pppuStack_e0 = &ppuStack_278;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  lStack_308 = 0;
  lStack_300 = 0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar7 = &uStack_b0;
  puStack_240 = puVar5;
  func_0x0001000e77a0(puVar7,&ppuStack_120,&lStack_308,&uStack_30c);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (lStack_308 != 0) {
    lStack_300 = lStack_308;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_FUN_110864b38;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110864b98;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    lStack_2a0 = lStack_2a8;
    __ZdlPv();
  }
  _objc_release(puVar6);
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_FUN_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_148;
  func_0x000100105004(&ppuStack_278);
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_SUB_110862760;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_278 = &puStack_1c0;
  func_0x000100105004(&ppuStack_278);
  _objc_release(uStack_1d8);
  func_0x0001000e76e0(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar3);
  if (puVar8 != (undefined8 *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    func_0x00010c0f8500(uVar9);
    _objc_release(uVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055f7858; end: 1055f78e7;  */

void FUN_1055f7858(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bc2b0;
  FUN_1055f9540(PTR_PTR_1126bc2b0,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f78e8; end: 1055f81f3; -[SCMapNetworkCacheManager batchCachedEntitiesForIds:url:prefix:entityClass:] */

void FUN_1055f78e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  double dVar17;
  undefined4 uStack_41c;
  long lStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined **ppuStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  undefined1 uStack_381;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_361;
  undefined **appuStack_360 [3];
  byte bStack_346;
  byte bStack_345;
  undefined *apuStack_318 [3];
  long *plStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined2 uStack_2d8;
  byte bStack_2d6;
  byte bStack_2d5;
  undefined ***pppuStack_2b8;
  undefined ***pppuStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  undefined2 uStack_e0;
  byte bStack_de;
  byte bStack_dd;
  undefined1 *puStack_c0;
  undefined ***pppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar12 = *plStack_230;
    do {
      lVar15 = 0;
      do {
        if (*plStack_230 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_4;
        FUN_1055f633c(param_4,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar11);
        _objc_release(puVar5);
        lVar15 = lVar15 + 1;
      } while (lVar6 != lVar15);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  lVar6 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bc2a8);
  if (lVar6 == 0) {
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_280,lVar6);
  }
  puVar7 = &uStack_361;
  FUN_1055f8c94(puVar7);
  puVar5 = puVar4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_378 = 0;
  uStack_370 = 0;
  puStack_380 = (undefined *)0x0;
  puVar8 = puVar5;
  func_0x00010bf529e0(puVar5);
  func_0x0001004c2bb4(&puStack_380,puVar8);
  dVar17 = 0.0;
  lStack_3f8 = 0;
  ppuStack_400 = (undefined **)0x0;
  uStack_3e8 = 0;
  plStack_3f0 = (long *)0x0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  lStack_3d0 = 0;
  _objc_retain(puVar5);
  puVar8 = puVar5;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar12 = *plStack_3f0;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_3f0 != lVar12) {
          _objc_enumerationMutation(puVar5);
        }
        lVar15 = *(long *)(lStack_3f8 + (long)puVar16 * 8);
        _objc_retain(lVar15);
        lStack_418 = lVar15;
        func_0x0001004c2d3c(&puStack_380,&lStack_418);
        _objc_release(lStack_418);
        puVar16 = puVar16 + 1;
      } while (puVar8 != puVar16);
      puVar8 = puVar5;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  func_0x0001004c2e3c(appuStack_360,0xc,puVar7,&puStack_380);
  puVar7 = &uStack_381;
  FUN_1055f8e0c();
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lStack_3d0 = (long)dVar17;
  lStack_3f8 = CONCAT44(lStack_3f8._4_4_,0xf);
  uStack_3e8 = CONCAT44(uStack_3e8._4_4_,0x100);
  ppuStack_400 = &PTR_DAT_110864b98;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  lStack_3b0 = 0;
  lStack_3b8 = 0;
  plStack_3a0 = (long *)0x0;
  uStack_3a8 = 0;
  plStack_398 = (long *)0x0;
  bStack_de = puVar7[0x1a];
  bStack_dd = puVar7[0x1b];
  uStack_f0 = 8;
  uStack_e0 = 0x100;
  ppuStack_f8 = &PTR_FUN_110864b38;
  pppuStack_b8 = &ppuStack_400;
  lStack_a8 = 0;
  lStack_b0 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  plStack_90 = (long *)0x0;
  bStack_2d6 = bStack_346 | bStack_de;
  bStack_2d5 = bStack_345 & bStack_dd;
  uStack_2e8 = 4;
  uStack_2d8 = 0x100;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  pppuStack_2b8 = appuStack_360;
  pppuStack_2b0 = &ppuStack_f8;
  plStack_288 = (long *)0x0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2a8 = 0;
  lStack_418 = 0;
  lStack_410 = 0;
  uStack_408 = 0;
  uStack_41c = 0;
  puVar9 = &uStack_280;
  puStack_c0 = puVar7;
  func_0x0001000e77a0(puVar9,&ppuStack_2f0,&lStack_418,&uStack_41c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_418 != 0) {
    lStack_410 = lStack_418;
    __ZdlPv();
  }
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_SUB_1108629c8;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2a8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_90;
  ppuStack_f8 = &PTR_FUN_110864b38;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_98;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  plVar1 = plStack_398;
  ppuStack_400 = &PTR_DAT_110864b98;
  plStack_398 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3a0;
  plStack_3a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3b8 != 0) {
    lStack_3b0 = lStack_3b8;
    __ZdlPv();
  }
  _objc_release(puVar8);
  plVar1 = plStack_2f8;
  appuStack_360[0] = &PTR_FUN_110862700;
  plStack_2f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_300;
  plStack_300 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_f8 = apuStack_318;
  func_0x000100105004(&ppuStack_f8);
  ppuStack_f8 = &puStack_380;
  func_0x000100105004(&ppuStack_f8);
  _objc_release(puVar5);
  func_0x0001000e76e0(&uStack_258);
  _objc_release(uStack_268);
  _objc_release(uStack_270);
  _objc_release(lVar6);
  _objc_retain(puVar9);
  uVar11 = 0x10;
  puVar10 = puVar9;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar10 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar9);
      }
      uVar14 = *(undefined8 *)((long)puVar13 * 8);
      uVar11 = uVar14;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      if (puVar5 != (undefined *)0x0) {
        lVar12 = param_6;
        _objc_alloc();
        func_0x00010c15eb00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360();
        _objc_retain(0);
        _objc_release(uVar14);
        if (lVar12 != 0) {
          func_0x00010c1d0640(puVar2);
          func_0x00010c12d360(puVar3);
        }
        _objc_release(lVar12);
        _objc_release(0);
      }
      _objc_release(puVar5);
      puVar13 = (undefined8 *)((long)puVar13 + 1);
    } while (puVar10 != puVar13);
    uVar11 = 0x10;
    puVar10 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  puVar5 = PTR_PTR_1126bc2b8;
  _objc_alloc(PTR_PTR_1126bc2b8);
  puVar8 = puVar2;
  puVar16 = puVar3;
  func_0x00010bffaa00();
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar8);
    _objc_retain(puVar16);
    _objc_retain(uVar11);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    uVar14 = *(undefined8 *)(lVar6 + 8);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    _objc_retain(uVar11);
    _objc_retain(puVar16);
    func_0x00010c0f8500(uVar14);
    _objc_release(uVar14);
    _objc_release(puVar16);
    _objc_release(uVar11);
    _objc_release(puVar8);
    _objc_release(uVar11);
    _objc_release(puVar16);
    _objc_release(puVar8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055f81f4; end: 1055f8393; -[SCMapNetworkCacheManager batchCacheEntities:url:prefix:ttl:] */

void FUN_1055f81f4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1055f8394;
  puStack_78 = &UNK_11089ebb0;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_6);
  uStack_68 = param_6;
  _objc_retain(param_5);
  uStack_60 = param_5;
  dStack_58 = param_1 + dVar3;
  func_0x00010c0f8500(uVar2,param_3,&puStack_90,0,0);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1055f8394; end: 1055f847b;  */

void FUN_1055f8394(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010bf97ce0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055f847c; end: 1055f85fb;  */

void FUN_1055f847c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_1055f633c(uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc2a8;
  _objc_alloc(PTR_PTR_1126bc2a8);
  uVar5 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020d00(puVar3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar4 = puVar3;
  FUN_1055f95b4(puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055f85fc; end: 1055f8653; -[SCMapNetworkCacheManager _clearExpiredItems] */

void FUN_1055f85fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055f8654; end: 1055f89c7;  */

void FUN_1055f8654(double param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uStack_214;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126bc2a8);
  if (param_3 == 0) {
    uStack_e0 = 0;
    param_1 = 0.0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_3);
  }
  puVar2 = &uStack_181;
  FUN_1055f8e0c();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lStack_1c8 = (long)param_1;
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  ppuStack_1f8 = &PTR_DAT_110864b98;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  uStack_166 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_178 = 6;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_FUN_110864b38;
  pppuStack_140 = &ppuStack_1f8;
  lStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  lStack_210 = 0;
  lStack_208 = 0;
  uStack_200 = 0;
  uStack_214 = 0;
  puVar4 = &uStack_110;
  puStack_148 = puVar2;
  func_0x0001000e77a0(puVar4,&ppuStack_180,&lStack_210,&uStack_214);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_210 != 0) {
    lStack_208 = lStack_210;
    __ZdlPv();
  }
  plVar1 = plStack_118;
  ppuStack_180 = &PTR_FUN_110864b38;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  plVar1 = plStack_190;
  ppuStack_1f8 = &PTR_DAT_110864b98;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    __ZdlPv();
  }
  _objc_release(puVar3);
  func_0x0001000e76e0(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar4);
      }
      puVar3 = PTR_PTR_1126bc2b0;
      FUN_1055f9540(PTR_PTR_1126bc2b0,*(undefined8 *)((long)puVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar7 = (undefined8 *)((long)puVar7 + 1);
    } while (puVar5 != puVar7);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  lVar6 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_3);
  __Unwind_Resume(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar6 + 8,0);
  return;
}



/* Entry: 1055f89c8; end: 1055f89d3; -[SCMapNetworkCacheManager .cxx_destruct] */

void FUN_1055f89c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055f89d4; end: 1055f8aa3; -[SCMapNetworkCacheItem initWithKey:serializedItem:expirationTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1055f89d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e9538;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127269b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127269b0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127269b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127269b4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127269b8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055f8aa4; end: 1055f8ac7; -[SCMapNetworkCacheItem copyWithZone:] */

undefined8 FUN_1055f8aa4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055f8ac8; end: 1055f8b53; -[SCMapNetworkCacheItem hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1055f8ac8(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127269b0);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127269b4);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + _DAT_1127269b8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1055f8bfc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1055f8c08;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_1127269b8) == *(long *)(param_3 + _DAT_1127269b8))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_1127269b0);
      if ((lVar5 == *(long *)(param_3 + _DAT_1127269b0)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_1127269b4);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_1127269b4)) {
          func_0x00010c071ae0();
          goto LAB_1055f8c08;
        }
        goto LAB_1055f8bfc;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1055f8c08:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1055f8b54; end: 1055f8c23; -[SCMapNetworkCacheItem isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1055f8b54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1055f8bfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1055f8c08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_1127269b8) == *(long *)(param_3 + (long)_DAT_1127269b8))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_1127269b0);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_1127269b0)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_1127269b4);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_1127269b4)) {
          func_0x00010c071ae0();
          goto LAB_1055f8c08;
        }
        goto LAB_1055f8bfc;
      }
    }
    lVar3 = 0;
  }
LAB_1055f8c08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1055f8c24; end: 1055f8c33; -[SCMapNetworkCacheItem key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055f8c24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127269b0);
}



/* Entry: 1055f8c34; end: 1055f8c43; -[SCMapNetworkCacheItem serializedItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055f8c34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127269b4);
}



/* Entry: 1055f8c44; end: 1055f8c53; -[SCMapNetworkCacheItem expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1055f8c44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127269b8);
}



/* Entry: 1055f8c54; end: 1055f8c93; -[SCMapNetworkCacheItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055f8c54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127269b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127269b0,0);
  return;
}



/* Entry: 1055f8c94; end: 1055f8cf7;  */

undefined ** FUN_1055f8c94(void)

{
  int iVar1;
  
  if ((bRam0000000113819d00 & 1) == 0) {
    iVar1 = 0x13819d00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130ee888,0x100000000);
      ___cxa_guard_release(0x113819d00);
    }
  }
  return &PTR_PTR_1130ee888;
}



/* Entry: 1055f8cf8; end: 1055f8d7f;  */

void FUN_1055f8cf8(uint *param_1,undefined1 *param_2)

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



/* Entry: 1055f8d80; end: 1055f8e0b;  */

void FUN_1055f8d80(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055f8e0c; end: 1055f8ec7;  */

undefined8 FUN_1055f8e0c(void)

{
  int iVar1;
  
  if ((bRam0000000113819d78 & 1) == 0) {
    iVar1 = 0x13819d78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113819d10 = 0xe;
      puRam0000000113819d18 = &UNK_10f2dd69a;
      uRam0000000113819d20 = 0x1010000;
      pcRam0000000113819d28 = FUN_1055f8ec8;
      pcRam0000000113819d30 = FUN_1055f8f00;
      ppuRam0000000113819d08 = &PTR_DAT_110864b98;
      uRam0000000113819d48 = 0;
      uRam0000000113819d40 = 0;
      uRam0000000113819d58 = 0;
      uRam0000000113819d50 = 0;
      uRam0000000113819d68 = 0;
      uRam0000000113819d60 = 0;
      uRam0000000113819d70 = 0;
      ___cxa_atexit(0x105077cd4,0x113819d08,0x100000000);
      ___cxa_guard_release(0x113819d78);
    }
  }
  return 0x113819d08;
}



/* Entry: 1055f8ec8; end: 1055f8eff;  */

undefined8 FUN_1055f8ec8(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}


