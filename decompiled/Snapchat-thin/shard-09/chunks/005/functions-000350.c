/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e679bc; end: 106e679c3; -[SCPasskey createdDate] */

undefined8 FUN_106e679bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e679c4; end: 106e679cb; -[SCPasskey createdDevice] */

undefined8 FUN_106e679c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e679cc; end: 106e679d3; -[SCPasskey lastUsedDate] */

undefined8 FUN_106e679cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e679d4; end: 106e679db; -[SCPasskey lastUsedDevice] */

undefined8 FUN_106e679d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e679dc; end: 106e67a3b; -[SCPasskey .cxx_destruct] */

void FUN_106e679dc(long param_1)

{
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



/* Entry: 106e67a3c; end: 106e67a87; +[SCPasskeyListResult deduped] */

void FUN_106e67a3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2e40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e67a88; end: 106e67af3; +[SCPasskeyListResult failureWithMessage:] */

void FUN_106e67a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2e40;
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



/* Entry: 106e67af4; end: 106e67b47; +[SCPasskeyListResult successWithMaximumPasskeys:] */

void FUN_106e67af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2e40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e67b48; end: 106e67b6b; -[SCPasskeyListResult copyWithZone:] */

undefined8 FUN_106e67b48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e67b6c; end: 106e67bd7; -[SCPasskeyListResult hash] */

void FUN_106e67b6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f7508;
  puStack_60 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e67bd8; end: 106e67c1b; -[SCPasskeyListResult internalInit] */

void FUN_106e67bd8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f7508;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e67c1c; end: 106e67ccb; -[SCPasskeyListResult isEqual:] */

long FUN_106e67c1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e67cb0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_106e67cb0;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_106e67cb0;
    }
  }
  lVar3 = 1;
LAB_106e67cb0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e67ccc; end: 106e67d7b; -[SCPasskeyListResult matchSuccess:failure:deduped:] */

void FUN_106e67ccc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

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
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_106e67d58;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 0) || (param_3 == 0)) goto LAB_106e67d58;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_106e67d58:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e67d7c; end: 106e67d87; -[SCPasskeyListResult .cxx_destruct] */

void FUN_106e67d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106e67d88; end: 106e67e03;  */

undefined * FUN_106e67d88(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c7e18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e89038,
                        &UNK_10ddf00a0,&UNK_10ddf0104,8,FUN_106e67e04,0);
    do {
      if (puRam00000001136c7e18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c7e18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c7e18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c7e18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c7e18;
}



/* Entry: 106e67e04; end: 106e67e1b;  */

uint FUN_106e67e04(uint param_1)

{
  return (uint)(param_1 < 0xd) & 0x1f07U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106e67e1c; end: 106e67ea7; +[SCJanusVerifyChallengeRequest descriptor] */

undefined * FUN_106e67e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7e20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b3e8d0,
                        &PTR____CFConstantStringClassReference_110e89058,
                        &PTR_s_snapchat_janus_api_113188250,&PTR_DAT_1131882e8,7,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001136c7e20 = puVar1;
  }
  return puRam00000001136c7e20;
}



/* Entry: 106e67ea8; end: 106e67f33; +[SCJanusVerifyChallengeResponse descriptor] */

undefined * FUN_106e67ea8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7e28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b3e920,
                        &PTR____CFConstantStringClassReference_110e89078,
                        &PTR_s_snapchat_janus_api_113188250,&PTR_s_statusCode_113188268,4,0x28,0x1c)
    ;
    func_0x00010c229040();
    puRam00000001136c7e28 = puVar1;
  }
  return puRam00000001136c7e28;
}



/* Entry: 106e67f34; end: 106e67f3b; -[SCBitmojiDeepLinkServices bitmojiDeepLinkFactory] */

undefined8 FUN_106e67f34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e67f3c; end: 106e67f47; -[SCBitmojiDeepLinkServices .cxx_destruct] */

void FUN_106e67f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e67f48; end: 106e67fbb; -[SCComposerBitmojiAvatarBuilderServices initWithComposerAvatarBuilderPresenterFactory:] */

undefined1 * FUN_106e67f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7518;
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



/* Entry: 106e67fbc; end: 106e67fc3; -[SCComposerBitmojiAvatarBuilderServices composerAvatarBuilderPresenterFactory] */

undefined8 FUN_106e67fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e67fc4; end: 106e67fcf; -[SCComposerBitmojiAvatarBuilderServices .cxx_destruct] */

void FUN_106e67fc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e67fd0; end: 106e68043; -[SCCognacIAPTokenLoggingServices initWithTokenLogger:] */

undefined1 * FUN_106e67fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7520;
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



/* Entry: 106e68044; end: 106e6804b; -[SCCognacIAPTokenLoggingServices tokenLogger] */

undefined8 FUN_106e68044(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6804c; end: 106e68057; -[SCCognacIAPTokenLoggingServices .cxx_destruct] */

void FUN_106e6804c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e68058; end: 106e680cb; -[SCCommerceCartServices initWithCartCoordinator:] */

undefined1 * FUN_106e68058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7528;
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



/* Entry: 106e680cc; end: 106e680d3; -[SCCommerceCartServices cartCoordinator] */

undefined8 FUN_106e680cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e680d4; end: 106e680df; -[SCCommerceCartServices .cxx_destruct] */

void FUN_106e680d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e680e0; end: 106e684e3; -[SCCommerceProductLineItem initWithProductId:storeId:storeMetadata:storeInfo:variantId:quantity:maxQuantity:title:variant:unitPrice:linePrice:strikethroughUnitPrice:strikethroughLinePrice:type:thumbnailImageModel:taxable:requiresShipping:bitmojiProductInfo:pixelItemId:printSnap:isFromLegacy:] */

undefined8 *
FUN_106e680e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined1 param_23)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126f7530;
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
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + 9) = param_18._1_1_;
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
    *(undefined1 *)((long)puVar1 + 10) = param_23;
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e684e4; end: 106e68507; -[SCCommerceProductLineItem copyWithZone:] */

undefined8 FUN_106e684e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e68508; end: 106e6864b; -[SCCommerceProductLineItem hash] */

undefined8 * FUN_106e68508(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_d0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_d0,0x15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e6887c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e68888;
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
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x50);
                      if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x58);
                        if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x60);
                          if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + 0x68);
                            if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + 0x70);
                              if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + 0x78);
                                if ((lVar5 == *(long *)(param_3 + 0x78)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = *(long *)((long)puVar3 + 0x80);
                                  if ((lVar5 == *(long *)(param_3 + 0x80)) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = *(long *)((long)puVar3 + 0x88);
                                    if ((lVar5 == *(long *)(param_3 + 0x88)) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = *(long *)((long)puVar3 + 0x90);
                                      if ((lVar5 == *(long *)(param_3 + 0x90)) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        puVar6 = *(undefined1 **)((long)puVar3 + 0x98);
                                        if (puVar6 != *(undefined1 **)(param_3 + 0x98)) {
                                          func_0x00010c071ae0();
                                          goto LAB_106e68888;
                                        }
                                        goto LAB_106e6887c;
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
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e68888:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e6864c; end: 106e688a3; -[SCCommerceProductLineItem isEqual:] */

long FUN_106e6864c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6887c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e68888;
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
                                        if (lVar3 != *(long *)(param_3 + 0x98)) {
                                          func_0x00010c071ae0();
                                          goto LAB_106e68888;
                                        }
                                        goto LAB_106e6887c;
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
LAB_106e68888:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e688a4; end: 106e688ab; -[SCCommerceProductLineItem productId] */

undefined8 FUN_106e688a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e688ac; end: 106e688b3; -[SCCommerceProductLineItem storeId] */

undefined8 FUN_106e688ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e688b4; end: 106e688bb; -[SCCommerceProductLineItem storeMetadata] */

undefined8 FUN_106e688b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e688bc; end: 106e688c3; -[SCCommerceProductLineItem storeInfo] */

undefined8 FUN_106e688bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e688c4; end: 106e688cb; -[SCCommerceProductLineItem variantId] */

undefined8 FUN_106e688c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e688cc; end: 106e688d3; -[SCCommerceProductLineItem quantity] */

undefined8 FUN_106e688cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e688d4; end: 106e688db; -[SCCommerceProductLineItem maxQuantity] */

undefined8 FUN_106e688d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e688dc; end: 106e688e3; -[SCCommerceProductLineItem title] */

undefined8 FUN_106e688dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106e688e4; end: 106e688eb; -[SCCommerceProductLineItem variant] */

undefined8 FUN_106e688e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106e688ec; end: 106e688f3; -[SCCommerceProductLineItem unitPrice] */

undefined8 FUN_106e688ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106e688f4; end: 106e688fb; -[SCCommerceProductLineItem linePrice] */

undefined8 FUN_106e688f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106e688fc; end: 106e68903; -[SCCommerceProductLineItem strikethroughUnitPrice] */

undefined8 FUN_106e688fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106e68904; end: 106e6890b; -[SCCommerceProductLineItem strikethroughLinePrice] */

undefined8 FUN_106e68904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106e6890c; end: 106e68913; -[SCCommerceProductLineItem type] */

undefined8 FUN_106e6890c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106e68914; end: 106e6891b; -[SCCommerceProductLineItem thumbnailImageModel] */

undefined8 FUN_106e68914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106e6891c; end: 106e68923; -[SCCommerceProductLineItem taxable] */

undefined1 FUN_106e6891c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e68924; end: 106e6892b; -[SCCommerceProductLineItem requiresShipping] */

undefined1 FUN_106e68924(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e6892c; end: 106e68933; -[SCCommerceProductLineItem bitmojiProductInfo] */

undefined8 FUN_106e6892c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106e68934; end: 106e6893b; -[SCCommerceProductLineItem pixelItemId] */

undefined8 FUN_106e68934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106e6893c; end: 106e68943; -[SCCommerceProductLineItem printSnap] */

undefined8 FUN_106e6893c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106e68944; end: 106e6894b; -[SCCommerceProductLineItem isFromLegacy] */

undefined1 FUN_106e68944(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e6894c; end: 106e68a3b; -[SCCommerceProductLineItem .cxx_destruct] */

void FUN_106e6894c(long param_1)

{
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



/* Entry: 106e68a3c; end: 106e68d8f; -[SCCommerceCheckoutDataModel initWithIdentifier:storeId:partner:webUrl:total:lineItems:tax:contactDetails:shippingAddress:paymentDetails:discountCode:discountAmount:selectedShippingId:selectableShippingOptions:storeTermsPolicy:] */

undefined8 *
FUN_106e68a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f7538;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e68d90; end: 106e68db3; -[SCCommerceCheckoutDataModel copyWithZone:] */

undefined8 FUN_106e68d90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e68db4; end: 106e68ec3; -[SCCommerceCheckoutDataModel hash] */

undefined8 * FUN_106e68db4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_a0;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e6907c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e69088;
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
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x48);
                      if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x50);
                        if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x58);
                          if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + 0x60);
                            if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + 0x68);
                              if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + 0x70);
                                if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  puVar6 = *(undefined1 **)((long)puVar3 + 0x78);
                                  if (puVar6 != *(undefined1 **)(param_3 + 0x78)) {
                                    func_0x00010c071ae0();
                                    goto LAB_106e69088;
                                  }
                                  goto LAB_106e6907c;
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
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e69088:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e68ec4; end: 106e690a3; -[SCCommerceCheckoutDataModel isEqual:] */

long FUN_106e68ec4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6907c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e69088;
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
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
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
                                  if (lVar3 != *(long *)(param_3 + 0x78)) {
                                    func_0x00010c071ae0();
                                    goto LAB_106e69088;
                                  }
                                  goto LAB_106e6907c;
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
LAB_106e69088:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e690a4; end: 106e690ab; -[SCCommerceCheckoutDataModel identifier] */

undefined8 FUN_106e690a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e690ac; end: 106e690b3; -[SCCommerceCheckoutDataModel storeId] */

undefined8 FUN_106e690ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e690b4; end: 106e690bb; -[SCCommerceCheckoutDataModel partner] */

undefined8 FUN_106e690b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e690bc; end: 106e690c3; -[SCCommerceCheckoutDataModel webUrl] */

undefined8 FUN_106e690bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e690c4; end: 106e690cb; -[SCCommerceCheckoutDataModel total] */

undefined8 FUN_106e690c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e690cc; end: 106e690d3; -[SCCommerceCheckoutDataModel lineItems] */

undefined8 FUN_106e690cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e690d4; end: 106e690db; -[SCCommerceCheckoutDataModel tax] */

undefined8 FUN_106e690d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e690dc; end: 106e690e3; -[SCCommerceCheckoutDataModel contactDetails] */

undefined8 FUN_106e690dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e690e4; end: 106e690eb; -[SCCommerceCheckoutDataModel shippingAddress] */

undefined8 FUN_106e690e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106e690ec; end: 106e690f3; -[SCCommerceCheckoutDataModel paymentDetails] */

undefined8 FUN_106e690ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106e690f4; end: 106e690fb; -[SCCommerceCheckoutDataModel discountCode] */

undefined8 FUN_106e690f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106e690fc; end: 106e69103; -[SCCommerceCheckoutDataModel discountAmount] */

undefined8 FUN_106e690fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106e69104; end: 106e6910b; -[SCCommerceCheckoutDataModel selectedShippingId] */

undefined8 FUN_106e69104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106e6910c; end: 106e69113; -[SCCommerceCheckoutDataModel selectableShippingOptions] */

undefined8 FUN_106e6910c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106e69114; end: 106e6911b; -[SCCommerceCheckoutDataModel storeTermsPolicy] */

undefined8 FUN_106e69114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106e6911c; end: 106e691e7; -[SCCommerceCheckoutDataModel .cxx_destruct] */

void FUN_106e6911c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106e691e8; end: 106e69203; +[SCCommerceCheckoutDataModelBuilder commerceCheckoutDataModel] */

void FUN_106e691e8(void)

{
  _objc_alloc_init(PTR_PTR_1126d2e48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e69204; end: 106e69627; +[SCCommerceCheckoutDataModelBuilder commerceCheckoutDataModelFromExistingCommerceCheckoutDataModel:] */

void FUN_106e69204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  
  puVar1 = PTR_PTR_1126d2e48;
  _objc_retain(param_3);
  func_0x00010bf42340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2af9a0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ba2e0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0f4c80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b5540(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c2a3ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2bcc80(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c275ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2bb780(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c099320();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b2e80(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c26aa00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2badc0(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2aacc0(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c22c980();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2b86a0(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c0f6800();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2b5580(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf81340(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2ac660(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bf81320(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar23;
  func_0x00010c2ac640(puVar23,param_2,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c159f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010c2b8120(puVar25,param_2,uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c159220(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010c2b80c0(puVar27,param_2,uVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_3;
  func_0x00010c257cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar31 = puVar29;
  func_0x00010c2ba300(puVar29,param_2,uVar30);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar30);
  _objc_release(puVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_release(uVar26);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return;
}



/* Entry: 106e69628; end: 106e69687; -[SCCommerceCheckoutDataModelBuilder build] */

void FUN_106e69628(void)

{
  _objc_alloc(PTR_PTR_1126b0578);
  func_0x00010c01ba20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e69688; end: 106e696bf; -[SCCommerceCheckoutDataModelBuilder withIdentifier:] */

long FUN_106e69688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e696c0; end: 106e696f7; -[SCCommerceCheckoutDataModelBuilder withStoreId:] */

long FUN_106e696c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e696f8; end: 106e6972f; -[SCCommerceCheckoutDataModelBuilder withPartner:] */

long FUN_106e696f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e69730; end: 106e69767; -[SCCommerceCheckoutDataModelBuilder withWebUrl:] */

long FUN_106e69730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e69768; end: 106e6979f; -[SCCommerceCheckoutDataModelBuilder withTotal:] */

long FUN_106e69768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e697a0; end: 106e697d7; -[SCCommerceCheckoutDataModelBuilder withLineItems:] */

long FUN_106e697a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e697d8; end: 106e6980f; -[SCCommerceCheckoutDataModelBuilder withTax:] */

long FUN_106e697d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e69810; end: 106e69847; -[SCCommerceCheckoutDataModelBuilder withContactDetails:] */

long FUN_106e69810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e69848; end: 106e6987f; -[SCCommerceCheckoutDataModelBuilder withShippingAddress:] */

long FUN_106e69848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e69880; end: 106e698b7; -[SCCommerceCheckoutDataModelBuilder withPaymentDetails:] */

long FUN_106e69880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e698b8; end: 106e698ef; -[SCCommerceCheckoutDataModelBuilder withDiscountCode:] */

long FUN_106e698b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e698f0; end: 106e69927; -[SCCommerceCheckoutDataModelBuilder withDiscountAmount:] */

long FUN_106e698f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e69928; end: 106e6995f; -[SCCommerceCheckoutDataModelBuilder withSelectedShippingId:] */

long FUN_106e69928(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e69960; end: 106e69997; -[SCCommerceCheckoutDataModelBuilder withSelectableShippingOptions:] */

long FUN_106e69960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e69998; end: 106e699cf; -[SCCommerceCheckoutDataModelBuilder withStoreTermsPolicy:] */

long FUN_106e69998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106e699d0; end: 106e69a9b; -[SCCommerceCheckoutDataModelBuilder .cxx_destruct] */

void FUN_106e699d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106e69a9c; end: 106e69bef; -[SCCommerceCheckoutShippingOption initWithIdentifier:price:title:totalTax:subtotalPrice:totalPrice:] */

undefined1 *
FUN_106e69a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f7540;
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e69bf0; end: 106e69c13; -[SCCommerceCheckoutShippingOption copyWithZone:] */

undefined8 FUN_106e69bf0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e69c14; end: 106e69cb7; -[SCCommerceCheckoutShippingOption hash] */

undefined8 * FUN_106e69c14(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
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
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e69d98:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e69da4;
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
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_106e69da4;
                }
                goto LAB_106e69d98;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e69da4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e69cb8; end: 106e69dbf; -[SCCommerceCheckoutShippingOption isEqual:] */

long FUN_106e69cb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e69d98:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e69da4;
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
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_106e69da4;
                }
                goto LAB_106e69d98;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e69da4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e69dc0; end: 106e69dc7; -[SCCommerceCheckoutShippingOption identifier] */

undefined8 FUN_106e69dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e69dc8; end: 106e69dcf; -[SCCommerceCheckoutShippingOption price] */

undefined8 FUN_106e69dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


