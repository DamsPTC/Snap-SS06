/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106917844; end: 10691789b;  */

void FUN_106917844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10691789c; end: 1069178a3;  */

void FUN_10691789c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1069178a4; end: 1069178fb;  */

void FUN_1069178a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069178fc; end: 106917903;  */

void FUN_1069178fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15f2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_serverId_1126356d8);
  return;
}



/* Entry: 106917904; end: 106917943;  */

void FUN_106917904(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf27c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106917944; end: 106917b2b; -[SCContentSyncCacheServiceProvider _createRequestSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106917944(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + _DAT_112753ad0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753ad4;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753ad8;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c265c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753adc;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753ae0;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753ae4;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112753ae8;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR_PTR_1126cf058;
  _objc_alloc(PTR_PTR_1126cf058);
  func_0x00010c058e20();
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106917b2c; end: 106917bab; -[SCContentSyncCacheServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106917b2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753ae8);
  _objc_destroyWeak(param_1 + _DAT_112753ae4);
  _objc_destroyWeak(param_1 + _DAT_112753adc);
  _objc_destroyWeak(param_1 + _DAT_112753ad0);
  _objc_destroyWeak(param_1 + _DAT_112753ad8);
  _objc_destroyWeak(param_1 + _DAT_112753ad4);
  _objc_destroyWeak(param_1 + _DAT_112753ae0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753aec);
  return;
}



/* Entry: 106917bac; end: 106917c1f; -[UNISCSSMStoryManagementGatewayService initWithUnifiedGrpcService:] */

undefined1 * FUN_106917bac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3d28;
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



/* Entry: 106917c20; end: 106917d03; -[UNISCSSMStoryManagementGatewayService contentClientCacheSyncWithRequest:callOptionsBuilder:handler:] */

void FUN_106917c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126cf060;
  _objc_opt_class(PTR_PTR_1126cf060);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e64d58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106917d04; end: 106917de7; -[UNISCSSMStoryManagementGatewayService getSnapElementWithRequest:callOptionsBuilder:handler:] */

void FUN_106917d04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126cf068;
  _objc_opt_class(PTR_PTR_1126cf068);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e64d78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106917de8; end: 106917ecb; -[UNISCSSMStoryManagementGatewayService getActiveStoryStatusWithRequest:callOptionsBuilder:handler:] */

void FUN_106917de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126c1310;
  _objc_opt_class(PTR_PTR_1126c1310);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e64d98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106917ecc; end: 106917faf; -[UNISCSSMStoryManagementGatewayService postContentWithRequest:callOptionsBuilder:handler:] */

void FUN_106917ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126cf070;
  _objc_opt_class(PTR_PTR_1126cf070);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e64db8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106917fb0; end: 106917fbb; -[UNISCSSMStoryManagementGatewayService .cxx_destruct] */

void FUN_106917fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106917fbc; end: 106918047; +[SCSSMStoryId descriptor] */

undefined * FUN_106917fbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b063e0,
                        &PTR____CFConstantStringClassReference_110e64dd8,&PTR_DAT_113169c48,
                        &PTR_s_userId_113169ce0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c4720 = puVar1;
  }
  return puRam00000001136c4720;
}



/* Entry: 106918048; end: 1069180af; +[SCSSMContentClientCacheSyncRequest descriptor] */

void FUN_106918048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b06430,
                        &PTR____CFConstantStringClassReference_110e64df8,&PTR_DAT_113169c48,
                        &PTR_DAT_113169ca0,2,0x18,0x1c);
    puRam00000001136c4728 = puVar1;
  }
  return;
}



/* Entry: 1069180b0; end: 106918117; +[SCSSMContentClientCacheSyncResponse descriptor] */

void FUN_1069180b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b06480,
                        &PTR____CFConstantStringClassReference_110e64e18,&PTR_DAT_113169c48,
                        &PTR_DAT_113169c60,1,0x10,0x1c);
    puRam00000001136c4730 = puVar1;
  }
  return;
}



/* Entry: 106918118; end: 106918193; +[SCSSMContentClientCacheSyncResponse_ContentClientCacheSyncStoryMetadata descriptor] */

undefined * FUN_106918118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b064d0,
                        &PTR____CFConstantStringClassReference_110e64e38,&PTR_DAT_113169c48,
                        &PTR_DAT_113169c80,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c4738 = puVar1;
  }
  return puRam00000001136c4738;
}



/* Entry: 106918194; end: 1069181e7; -[SCSharedStoryNotificationProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106918194(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753b00);
  _objc_destroyWeak(param_1 + _DAT_112753afc);
  _objc_destroyWeak(param_1 + _DAT_112753af8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112753af4,0);
  return;
}



/* Entry: 1069181e8; end: 1069181ef; -[SCSharedStoryNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_1069181e8(void)

{
  return 0;
}



/* Entry: 1069181f0; end: 106918247; -[SCSharedStoryNotificationProcessor processNotification:] */

void FUN_1069181f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c11c420();
  if (param_3 == 0xa2) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106918248; end: 106918253; -[SCSharedStoryNotificationProcessor .cxx_destruct] */

void FUN_106918248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106918254; end: 106918293;  */

void FUN_106918254(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1a480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106918294; end: 1069184d3; -[SCGalleryStorySavingServiceProvider _galleryStorySaver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106918294(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126cf088;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112753b08;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112753b0c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112753b10;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c244420();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112753b14;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0c9680();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112753b18;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112753b1c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bef1320();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112753b20;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_112753b24;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112753b28;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c22c220();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753b2c;
  _objc_loadWeakRetained();
  func_0x00010c05e860(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar14,lVar16,lVar18,
                      param_1);
  _objc_release(param_1);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069184d4; end: 106918577; -[SCGalleryStorySavingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069184d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753b28);
  _objc_destroyWeak(param_1 + _DAT_112753b24);
  _objc_destroyWeak(param_1 + _DAT_112753b10);
  _objc_destroyWeak(param_1 + _DAT_112753b0c);
  _objc_destroyWeak(param_1 + _DAT_112753b18);
  _objc_destroyWeak(param_1 + _DAT_112753b20);
  _objc_destroyWeak(param_1 + _DAT_112753b2c);
  _objc_destroyWeak(param_1 + _DAT_112753b14);
  _objc_destroyWeak(param_1 + _DAT_112753b1c);
  _objc_destroyWeak(param_1 + _DAT_112753b08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753b30);
  return;
}



/* Entry: 106918578; end: 10691865b; -[SCSharedStoryServiceProvider provide] */

void FUN_106918578(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cf090;
  _objc_alloc(PTR_PTR_1126cf090);
  func_0x00010c045c60();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10691865c; end: 10691869b;  */

void FUN_10691865c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10691869c; end: 1069188bf; -[SCSharedStoryServiceProvider _createSharedStorySnapManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691869c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf098;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112753b34;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112753b38;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112753b3c;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112753b40;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753b44;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010c08f760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d200(puVar2);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069188c0; end: 1069188ff;  */

void FUN_1069188c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106918900; end: 106918bd3; -[SCSharedStoryServiceProvider _createSharedStoryManagerNetworkRequester] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106918900(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = (long)_DAT_112753b48;
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753b4c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753b50;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf0dd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753b54;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126cf0a0;
  _objc_alloc(PTR_PTR_1126cf0a0);
  func_0x00010c03f3c0();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar13);
  lVar7 = lVar13;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar1 = param_1 + _DAT_112753b58;
  _objc_loadWeakRetained(lVar1);
  lVar13 = lVar1;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753b5c;
  _objc_loadWeakRetained(lVar1);
  lVar8 = lVar1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753b34;
  _objc_loadWeakRetained(lVar1);
  lVar9 = lVar1;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753b38;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112753b60;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c244420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar11 = PTR_PTR_1126cf0a8;
  _objc_alloc(PTR_PTR_1126cf0a8);
  lVar12 = lVar7;
  func_0x00010c2923e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b920(puVar11,param_2,puVar6,lVar12,lVar13,lVar8,lVar9,lVar1,lVar10);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106918bd4; end: 106918c8f; -[SCSharedStoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106918bd4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753b5c);
  _objc_destroyWeak(param_1 + _DAT_112753b60);
  _objc_destroyWeak(param_1 + _DAT_112753b50);
  _objc_destroyWeak(param_1 + _DAT_112753b4c);
  _objc_destroyWeak(param_1 + _DAT_112753b54);
  _objc_destroyWeak(param_1 + _DAT_112753b58);
  _objc_destroyWeak(param_1 + _DAT_112753b3c);
  _objc_destroyWeak(param_1 + _DAT_112753b38);
  _objc_destroyWeak(param_1 + _DAT_112753b40);
  _objc_destroyWeak(param_1 + _DAT_112753b44);
  _objc_destroyWeak(param_1 + _DAT_112753b34);
  _objc_destroyWeak(param_1 + _DAT_112753b48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753b64);
  return;
}



/* Entry: 106918c90; end: 106918e0b; -[SCSharedStoryManagerNetworkRequester initWithProtobufRequestManager:currentUserId:networkConnectivityMonitor:locationProvider:customStoriesDataFetcher:remoteSnapchattersDataFetcher:circumstanceEngine:] */

undefined1 *
FUN_106918c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f3d38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
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



/* Entry: 106918e0c; end: 106918fdf; -[SCSharedStoryManagerNetworkRequester fetchStoryElementWithStoryId:requestSuccessCallBack:requestFailureCallBack:] */

void FUN_106918e0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106918fe0;
  puStack_90 = &UNK_11094a660;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_opt_class(PTR_PTR_1126cf068);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(param_4);
  func_0x00010c0b77a0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(param_5);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106918fe0; end: 106919047;  */

void FUN_106918fe0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106919048; end: 10691938b;  */

void FUN_106919048(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) && (param_5 != 0)) {
    lVar1 = param_5;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c11afe0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar3 = lVar10;
    func_0x00010bdd69a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar4 = lVar10;
    func_0x00010bdd69c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = param_1 + 0x38;
    _objc_loadWeakRetained();
    func_0x00010c252d60(param_5);
    func_0x00010be5cf00();
    _objc_release(lVar10);
    lVar10 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c25b720(param_5);
    func_0x00010be5cd20(lVar10);
    _objc_release(lVar10);
    lVar10 = param_5;
    func_0x00010c259cc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    func_0x00010bfe2ee0();
    lVar6 = param_5;
    func_0x00010c259cc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0b5940();
    func_0x000100c4a928(lVar5,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar10);
    lVar10 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar10);
    func_0x00010bf626e0(param_5);
    func_0x00010be5cc80(lVar10);
    _objc_release(lVar10);
    puVar8 = PTR_PTR_1126cf0b0;
    _objc_alloc(PTR_PTR_1126cf0b0);
    lVar10 = lVar2;
    func_0x00010bf6e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d480(puVar8);
    _objc_release(lVar10);
    lVar10 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar10);
    puVar9 = puVar8;
    func_0x00010c259840(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d60(param_5);
    func_0x00010c25b720(param_5);
    lVar6 = lVar10;
    func_0x00010bdd6280(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(lVar10);
    func_0x00010bde8d20(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar6);
    _objc_release(puVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x28);
    if (lVar10 != 0) {
      (**(code **)(lVar10 + 0x10))(lVar10,param_4);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10691938c; end: 10691946b; -[SCSharedStoryManagerNetworkRequester _createSnapElementRequestWithSnapId:accessToken:] */

void FUN_10691938c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126cf0b8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100564a1c(uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebe80(puVar1);
  _objc_release(uVar2);
  func_0x00010c204680(puVar1);
  _objc_release(param_3);
  _objc_retain(0);
  puVar3 = puVar1;
  func_0x00010059c104(puVar1,param_4,&PTR____CFConstantStringClassReference_110def498,
                      &PTR____CFConstantStringClassReference_110e64e58,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10691946c; end: 106919517; -[SCSharedStoryManagerNetworkRequester _conversationStoryElementResponseFromMessage:response:story:requestSuccessCallBack:] */

void FUN_10691946c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf626e0();
  if ((int)uVar1 - 9U < 0xfffffffd) {
    func_0x00010be14920();
  }
  else {
    func_0x00010bdf7960(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106919518; end: 106919957; -[SCSharedStoryManagerNetworkRequester _customStoryConversationStoryElementResponseFromMessage:response:story:requestSuccessCallBack:] */

void FUN_106919518(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar8 = param_3;
  func_0x00010c11afe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bfe2ee0();
  lVar4 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b5940();
  func_0x000100c4a928(lVar3,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release();
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_106919958;
  uStack_98 = 0x106919968;
  uStack_90 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_106919958;
  uStack_c8 = 0x106919968;
  uStack_c0 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_106919970;
  puStack_108 = &UNK_11094a6c0;
  _objc_retain(lVar8);
  puStack_f0 = &uStack_b8;
  lStack_100 = lVar8;
  _objc_retain(lVar2);
  lStack_f8 = lVar2;
  func_0x00010bfaa4c0(uVar6);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _dispatch_group_enter(lVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b5ac0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_1069199dc;
  puStack_138 = &UNK_11094a6f0;
  _objc_retain(lVar8);
  puStack_128 = &uStack_e8;
  lStack_130 = lVar8;
  func_0x00010bf62500(uVar6);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_initWeak(auStack_158,param_1);
  puStack_1b0 = puVar1;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x106919a1c;
  puStack_198 = &UNK_11094a720;
  _objc_copyWeak(auStack_160,auStack_158);
  puStack_170 = &uStack_b8;
  puStack_168 = &uStack_e8;
  lStack_190 = param_3;
  uStack_188 = param_4;
  uStack_180 = param_5;
  uStack_178 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x000100bc0718(lVar8,PTR___dispatch_main_q_11034be20,&puStack_1b0);
  _objc_release(puVar1);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(lStack_190);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(lStack_130);
  _objc_release(lStack_f8);
  _objc_release(lStack_100);
  _objc_release(lVar8);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_e8,8);
  lVar8 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  return;
}



/* Entry: 106919958; end: 10691996f;  */

void FUN_106919958(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106919970; end: 1069199db;  */

void FUN_106919970(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _dispatch_group_leave(uVar3);
  uVar3 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069199dc; end: 106919a67;  */

void FUN_1069199dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106919a68; end: 106919f13; -[SCSharedStoryManagerNetworkRequester _customStoryConversationStoryElementResponseWithCreator:customStoryMetadata:message:response:story:requestSuccessCallBack:] */

void FUN_106919a68(long param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x000100bf119c();
  if ((uVar2 & 1) == 0) {
    uVar19 = *(ulong *)(param_1 + 0x18);
    uVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar19,param_2,uVar2);
    _objc_release(uVar2);
    if ((uVar19 & 1) == 0) {
      lVar3 = param_4;
      func_0x00010c29ef80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf4b900();
      _objc_release(lVar3);
      if ((int)lVar4 == 0) {
        bVar1 = false;
      }
      else {
        lVar3 = param_4;
        func_0x00010c27dd80();
        bVar1 = lVar3 == 6;
      }
      uVar5 = param_5;
      func_0x00010bf626e0();
      if (((int)uVar5 != 7) && (uVar5 = param_5, func_0x00010bf626e0(), (int)uVar5 != 8))
      goto LAB_106919b84;
    }
  }
  bVar1 = true;
LAB_106919b84:
  uVar5 = param_5;
  func_0x00010bf626e0(param_5);
  lVar3 = param_1;
  func_0x00010be5ca80(param_1,param_2,uVar5);
  uVar6 = param_6;
  func_0x00010c253100();
  uVar5 = param_7;
  func_0x00010c252d60();
  if (!bVar1) {
    uVar5 = 3;
    uVar6 = 0x2b446133;
  }
  puVar7 = PTR_PTR_1126cf0b0;
  _objc_alloc();
  uVar8 = param_6;
  func_0x00010c258f40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_6;
  func_0x00010c11afe0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_6;
  func_0x00010c27dde0(param_6);
  uVar11 = param_6;
  func_0x00010c259cc0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_6;
  func_0x00010c261420(param_6);
  uVar13 = param_6;
  func_0x00010c259840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c04d480(puVar7,param_2,uVar8,uVar6,uVar9,uVar10,uVar11,uVar12,lVar3,uVar13);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar14 = PTR_PTR_1126cf0c0;
  _objc_alloc();
  uVar6 = param_7;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar7;
  func_0x00010c259840(puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_7;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_7;
  func_0x00010c25a520(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c26df60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_7;
  func_0x00010c25a520(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010c26e500();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_5;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dae0(puVar14,param_2,uVar8,puVar15,uVar10,uVar12,uVar16,lVar3,uVar18);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar15);
  _objc_release(uVar8);
  _objc_release(uVar6);
  puVar15 = PTR_PTR_1126cbc98;
  _objc_alloc(PTR_PTR_1126cbc98);
  uVar6 = param_7;
  func_0x00010c105740(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_7;
  func_0x00010bf4e840(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_7;
  func_0x00010c105a80(param_7);
  uVar10 = param_7;
  func_0x00010c07b720(param_7);
  uVar11 = param_7;
  func_0x00010c25b720();
  _objc_release(param_7);
  func_0x00010c04de00(puVar15,param_2,puVar14,uVar6,uVar8,uVar9,uVar10,uVar5,uVar11);
  _objc_release(uVar8);
  _objc_release(uVar6);
  func_0x00010be14920(param_1,param_2,param_5,puVar7,puVar15,param_8);
  _objc_release(param_8);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106919f14; end: 106919f2f; -[SCSharedStoryManagerNetworkRequester _fetchStoryElementFromMessage:response:story:requestSuccessCallBack:] */

void FUN_106919f14(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long in_x5;
  
  if (in_x5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106919f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x5 + 0x10))(in_x5,in_x3,in_x4);
    return;
  }
  return;
}



/* Entry: 106919f30; end: 106919f53; -[SCSharedStoryManagerNetworkRequester _mapStorySharedStatusWithSTMSStatus:] */

undefined8 FUN_106919f30(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10dde2e78 + (ulong)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 106919f54; end: 106919f77; -[SCSharedStoryManagerNetworkRequester _mapPostingStoryTypeWithSTMSType:] */

undefined8 FUN_106919f54(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 6) {
    return *(undefined8 *)(&UNK_10dde2e90 + (ulong)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 106919f78; end: 106919f9b; -[SCSharedStoryManagerNetworkRequester _mapMobStoryTypeWithSTMSType:] */

undefined8 FUN_106919f78(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 8) {
    return *(undefined8 *)(&UNK_10dde2ec0 + (ulong)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 106919f9c; end: 10691a20b; -[SCSharedStoryManagerNetworkRequester _buildSOJUPublisherDataWithSnap:publisherData:] */

void FUN_106919f9c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cf0c8;
  _objc_alloc();
  lVar2 = param_4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = lVar2;
  if (lVar2 == 0) {
    uStack_90 = param_3;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = uStack_90;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_4;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = lVar3;
  if (lVar3 == 0) {
    uStack_98 = param_3;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = uStack_98;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = param_4;
  func_0x00010bf85d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c243660(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_4;
  func_0x00010bf6e6e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = param_4;
  func_0x00010c11ae40(param_4);
  func_0x00010c0df7c0(puVar9,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  if (lVar8 == 0) {
    lVar10 = param_4;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar11 = param_4;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c180(puVar1,param_2,uStack_68,uStack_70,lVar4,lVar6,lVar7,
                      PTR____kCFBooleanFalse_11034ab60,puVar9,lVar10,lVar11,0,
                      PTR____kCFBooleanFalse_11034ab60);
  _objc_release(lVar11);
  if (lVar8 == 0) {
    _objc_release(lVar10);
  }
  _objc_release(lVar8);
  _objc_release(puVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (lVar3 == 0) {
    _objc_release(uStack_70);
    _objc_release(uStack_98);
  }
  _objc_release(lVar3);
  if (lVar2 == 0) {
    _objc_release(uStack_68);
    _objc_release(uStack_90);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10691a20c; end: 10691ac67; -[SCSharedStoryManagerNetworkRequester _buildSOJOStoryWithSnap:publisherData:] */

void FUN_10691a20c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  undefined *puVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined *puVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  undefined *puVar48;
  long lVar49;
  undefined *puVar50;
  long lVar51;
  long lVar52;
  undefined *puVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  undefined *puVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  undefined8 uStack_148;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cf0d0;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c120340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = lVar4;
  if (lVar4 == 0) {
    uStack_148 = param_4;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = param_3;
  func_0x00010bf5ab80(param_3);
  func_0x00010c0df7c0(puVar8,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126cf0d8;
  _objc_alloc();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = param_3;
  func_0x00010c2476c0(param_3);
  func_0x00010c0df7c0(puVar10,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = param_3;
  func_0x00010c243400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010c247520();
  func_0x00010c0df760(puVar12,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0066a0(puVar9,param_2,puVar10);
  lVar11 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c0c5480();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_3;
  func_0x00010c243660();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c26df60();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_3;
  func_0x00010c243660();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar24 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c0c6c20();
  func_0x00010c0df760(puVar26,param_2,lVar25);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar25 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar28 = param_3;
  func_0x00010bf9c8a0(param_3);
  func_0x00010c0df7c0(puVar29,param_2,lVar28);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_3;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar30 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010c083e00();
  func_0x00010c0df6e0(puVar32,param_2,lVar31);
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_3;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_3;
  func_0x00010c259b00();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_3;
  func_0x00010c22c3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_3;
  func_0x00010bf93ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR_PTR_1126cf0e0;
  _objc_alloc();
  lVar37 = param_3;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  if (lVar38 == 0) {
    lVar39 = param_4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar40 = param_3;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  if (lVar41 == 0) {
    lVar42 = param_4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar43 = param_3;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = lVar43;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar44;
  if (lVar44 == 0) {
    lVar45 = param_4;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c045c20(puVar36,param_2,lVar39,lVar42,lVar45);
  lVar46 = param_3;
  func_0x00010bf0d660();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar47 = param_3;
  func_0x00010c07b720(param_3);
  func_0x00010c0df6e0(puVar48,param_2,lVar47);
  _objc_retainAutoreleasedReturnValue();
  puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar47 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = lVar47;
  func_0x00010c075780();
  func_0x00010c0df6e0(puVar50,param_2,lVar49);
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_3;
  func_0x00010c0fc8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar49;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  puVar53 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar52 = param_3;
  func_0x00010bf20ec0(param_3);
  func_0x00010c0df760(puVar53,param_2,lVar52);
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = lVar52;
  func_0x00010c0c47e0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_3;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_3;
  func_0x00010c0fc8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = lVar57;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = lVar58;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = lVar59;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_3;
  func_0x00010bf03740(param_3);
  func_0x00010be5cda0(param_1,param_2,lVar61);
  func_0x00010b7680c4();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_3;
  func_0x00010c243660();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = lVar61;
  func_0x00010c0880a0();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = param_3;
  func_0x00010c094fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = lVar63;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_3;
  func_0x00010c15ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = lVar65;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  puVar67 = PTR_PTR_1126cf0e8;
  _objc_alloc();
  lVar68 = param_3;
  func_0x00010c23f900();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = lVar68;
  func_0x00010c247580();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = param_3;
  func_0x00010c23f900(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar71 = lVar70;
  func_0x00010c2475a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a980(puVar67,param_2,lVar69,lVar71);
  func_0x00010c01b420(puVar1,param_2,lVar2,uStack_148,0,lVar6,puVar8,puVar9,lVar13,lVar15,lVar17,
                      lVar19,lVar21,lVar23,puVar26,puVar27,puVar29,lVar28,0,puVar32,lVar31,0,lVar33,
                      0,0,0,0,0,0,0,lVar34,lVar35,0,puVar36,0,lVar46,puVar48,puVar50,lVar51,puVar53,
                      0,lVar54,0,lVar55,lVar56,lVar60,param_1,lVar62,lVar64,lVar66,puVar67,0,0,0,0,0
                      ,0);
  _objc_release(puVar67);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(param_1);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar52);
  _objc_release(puVar53);
  _objc_release(lVar51);
  _objc_release(lVar49);
  _objc_release(puVar50);
  _objc_release(lVar47);
  _objc_release(puVar48);
  _objc_release(lVar46);
  _objc_release(puVar36);
  if (lVar44 == 0) {
    _objc_release(lVar45);
  }
  _objc_release(lVar44);
  _objc_release(lVar43);
  if (lVar41 == 0) {
    _objc_release(lVar42);
  }
  _objc_release(lVar41);
  _objc_release(lVar40);
  if (lVar38 == 0) {
    _objc_release(lVar39);
  }
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar31);
  _objc_release(puVar32);
  _objc_release(lVar30);
  _objc_release(lVar28);
  _objc_release(puVar29);
  _objc_release(puVar27);
  _objc_release(lVar25);
  _objc_release(puVar26);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar11);
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(lVar7);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  if (lVar4 == 0) {
    _objc_release(uStack_148);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10691ac68; end: 10691ac8b; -[SCSharedStoryManagerNetworkRequester _mapSOJUAnmatedSnapTypeWithAnimatedSnapType:] */

undefined8 FUN_10691ac68(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined8 *)(&UNK_10dde2f00 + (ulong)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10691ac8c; end: 10691b4a3; -[SCSharedStoryManagerNetworkRequester _buildFriendStoryWithStoryId:storyDisplayName:status:snap:publisherData:storyType:] */

void FUN_10691ac8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,ulong param_6,ulong param_7,undefined4 param_8)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  byte bVar25;
  ulong uVar26;
  ulong in_stack_fffffffffffffeb0;
  undefined8 uStack_108;
  undefined8 uStack_a0;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126bfca8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar3 = param_6;
  func_0x00010c0c5340(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c0c5340(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c5480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar2,param_2,uVar4,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c6c20();
  bVar25 = 1;
  uVar1 = (int)uVar4 + 1;
  if ((uVar1 < 0x1c) && ((1 << (ulong)(uVar1 & 0x1f) & 0xb4b5dbbU) != 0)) {
    uVar1 = (int)uVar4 + 1;
    if (uVar1 < 0x1b) {
      bVar25 = (byte)(0x1394288 >> (ulong)(uVar1 & 0x1f));
    }
  }
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc();
  uVar3 = param_6;
  func_0x00010bf9c8a0(param_6);
  func_0x00010c052380((double)(long)uVar3 / 1000.0);
  puVar8 = PTR_PTR_1126cbca8;
  _objc_alloc();
  uVar3 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c4640();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_6;
  func_0x00010c0c5340(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0ef6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_6;
  func_0x00010c0c5340(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bfb1200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022600(puVar8,param_2,0,uVar6,uVar12,0,uVar14,0,
                      in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar15 = PTR_PTR_1126c3390;
  _objc_alloc();
  uVar3 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar5;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c0c6c20();
  uVar10 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c083e00();
  uVar12 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar16 == 0) {
    uVar26 = 0;
  }
  else {
    uStack_108 = param_6;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uStack_108;
    func_0x00010c0c6e00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar17 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf1f280();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c27f9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa840(puVar15,param_2,uVar4,uStack_a0,puVar2,(long)(int)uVar9,uVar11 & 0xffffffff,0,
                      uVar13,uVar26,puVar7,puVar8,bVar25 & 1);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  if (uVar16 != 0) {
    _objc_release(uVar26);
    _objc_release(uStack_108);
  }
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uStack_a0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar21 = PTR_PTR_1126cf0f0;
  _objc_alloc();
  uVar3 = param_7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  if (uVar3 == 0) {
    uStack_a0 = param_6;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uStack_a0;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = param_7;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  if (uVar5 == 0) {
    uVar20 = param_6;
    func_0x00010bf5b480(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar20;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = param_7;
  func_0x00010bf85d80(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_7;
  func_0x00010bf1acc0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_7;
  func_0x00010bf1c0a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05be60(puVar21,param_2,uVar4,uVar6,uVar9,uVar10,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  if (uVar5 == 0) {
    _objc_release(uVar6);
    _objc_release(uVar20);
  }
  _objc_release(uVar5);
  if (uVar3 == 0) {
    _objc_release(uVar4);
    _objc_release(uStack_a0);
  }
  _objc_release(uVar3);
  puVar22 = PTR_PTR_1126cf0c0;
  _objc_alloc(PTR_PTR_1126cf0c0);
  uVar3 = param_6;
  func_0x00010c243660(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c26df60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c243660(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_6;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dae0(puVar22,param_2,param_3,param_4,puVar15,uVar4,uVar6,0,uVar9);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar23 = PTR_PTR_1126cbc98;
  _objc_alloc(PTR_PTR_1126cbc98);
  uVar3 = param_6;
  func_0x00010c0fc8c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_6;
  func_0x00010bf5ab80(param_6);
  uVar9 = param_6;
  func_0x00010c07b720(param_6);
  uVar24 = param_1;
  func_0x00010be5cb20(param_1,param_2,param_5);
  func_0x00010be5cb40(param_1,param_2,param_8);
  func_0x00010c04de00(puVar23,param_2,puVar22,puVar21,uVar5,uVar6,uVar9,uVar24,param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 10691b4a4; end: 10691b4b3; -[SCSharedStoryManagerNetworkRequester _mapFriendStorySharedStatusWithSTMSStatus:] */

long FUN_10691b4a4(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 10691b4b4; end: 10691b4d7; -[SCSharedStoryManagerNetworkRequester _mapFriendStoryTypeWithSTMSType:] */

undefined8 FUN_10691b4b4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 6) {
    return *(undefined8 *)(&UNK_10dde2f20 + (ulong)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10691b4d8; end: 10691b4fb; -[SCSharedStoryManagerNetworkRequester _mapCustomStoryTypeWithSTMSType:] */

undefined8 FUN_10691b4d8(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 8) {
    return *(undefined8 *)(&UNK_10dde2f50 + (ulong)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10691b4fc; end: 10691b573; -[SCSharedStoryManagerNetworkRequester .cxx_destruct] */

void FUN_10691b4fc(long param_1)

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



/* Entry: 10691b574; end: 10691b6c7; -[SCSharedStorySnapManager initWithStoriesMediaCoordinator:circumstanceEngine:chatContentDelivery:sharedStoryManagerNetworkRequester:userBlizzardLogger:legacyStoryMediaCache:] */

undefined1 *
FUN_10691b574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f3d40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
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



/* Entry: 10691b6c8; end: 10691b9eb; -[SCSharedStorySnapManager fetchMediaForStoryId:senderUsername:sequenceNumber:conversationId:userInitiated:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:withRequestContexts:] */

void FUN_10691b6c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    if (param_9 != 0) {
      (**(code **)(param_9 + 0x10))(param_1,param_9,0,0xffffffffbf2f4718,0,0,0);
    }
    if (param_10 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      (**(code **)(param_10 + 0x10))(param_10,0,0,0);
      _objc_release(puVar1);
    }
  }
  else {
    _objc_initWeak(auStack_80,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10691b9ec;
    puStack_b8 = &UNK_11094a750;
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(param_9);
    lStack_a8 = param_9;
    _objc_retain(param_10);
    lStack_a0 = param_10;
    _objc_retain(param_11);
    uStack_98 = param_11;
    _objc_retain(param_12);
    uStack_b0 = param_12;
    uStack_88 = param_1;
    _objc_retain(param_4);
    _objc_copyWeak(auStack_e0,auStack_80);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    uStack_d8 = param_1;
    func_0x00010bfaa940(uVar3);
    _objc_release(uVar3);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_destroyWeak(auStack_e0);
    _objc_release(param_4);
    _objc_release(uStack_b0);
    _objc_release(uStack_98);
    _objc_release(lStack_a0);
    _objc_release(lStack_a8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10691b9ec; end: 10691baa3;  */

void FUN_10691b9ec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2f260(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10691baa4; end: 10691bb87; -[SCSharedStorySnapManager _fetchStoryMediaIfNeeded:readFromContentManager:completion:] */

void FUN_10691baa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10691bb88;
  puStack_68 = &UNK_110864938;
  uStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10691bb88; end: 10691bc7b;  */

void FUN_10691bb88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b4c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10691bc7c;
  puStack_58 = &UNK_11084e040;
  uStack_38 = (undefined1)uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_37 = *(undefined1 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar3;
  _objc_retain(uVar1);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10691bc7c; end: 10691be6f;  */

void FUN_10691bc7c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010691bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(0,*(long *)(param_1 + 0x30),1,0);
    return;
  }
  if (*(char *)(param_1 + 0x39) == '\x01') {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10691be70;
    puStack_70 = &UNK_11084c0d0;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    ppuVar1 = &puStack_88;
    uStack_68 = uVar5;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_1071ea420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c259cc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf267e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010b26c050(uVar3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar1);
    func_0x00010c11d620(uVar5);
    _objc_release(uVar5);
    _objc_release(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uStack_68);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfaa990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fetchStoryMediaUserInitiated_com_1125c8408,1,
             *(undefined8 *)(param_1 + 0x30),&PTR____CFConstantStringClassReference_110e64eb8);
  return;
}



/* Entry: 10691be70; end: 10691be8b;  */

void FUN_10691be70(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010691be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(0,*(long *)(param_1 + 0x20),param_2 != 0,0);
  return;
}



/* Entry: 10691be8c; end: 10691bf4f;  */

void FUN_10691be8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0ef700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  }
  else {
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0ef700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108455a88(lVar1,lVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10691bf50; end: 10691c22b; -[SCSharedStorySnapManager _handleRequestSuccessWithStoryElementResponse:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:withRequestContexts:metadataFetchStartTs:] */

void FUN_10691bf50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar6 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c253100(param_4);
  if (param_5 != 0) {
    lVar1 = param_4;
    func_0x00010c253100(param_4);
    lVar2 = param_4;
    func_0x00010c27dde0(param_4);
    (**(code **)(param_5 + 0x10))(param_5,1,lVar1,param_4,lVar2,0);
    uVar6 = param_1;
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  lVar1 = param_4;
  func_0x00010c253100();
  if (lVar1 == 0x4da97dc) {
    puVar3 = PTR_PTR_1126cbca0;
    _objc_alloc();
    lVar1 = param_4;
    func_0x00010c258f40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeeb80();
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c11afe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e360(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_4;
    func_0x00010c27dde0();
    puVar4 = puVar3;
    if (lVar1 == -0xebd194a) {
      puVar4 = PTR_PTR_1126cbca0;
      _objc_alloc();
      lVar1 = param_4;
      func_0x00010c258f40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeed20();
      _objc_release(puVar3);
      _objc_release(lVar1);
    }
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10691c22c;
    puStack_90 = &UNK_11094a7b0;
    _objc_retain(puVar4);
    puStack_88 = puVar4;
    _objc_retain(param_6);
    ppuVar5 = &puStack_a8;
    uStack_80 = param_6;
    uStack_78 = uVar6;
    _objc_retainBlock(ppuVar5);
    func_0x00010c1ebb80(puVar4);
    func_0x00010be14a40(param_2);
    lVar1 = param_4;
    func_0x00010c27dde0();
    if ((param_7 != 0) && (lVar1 == -0xebd194a)) {
      (**(code **)(param_7 + 0x10))(param_7,1,puVar4);
    }
    _objc_release(ppuVar5);
    _objc_release(uStack_80);
    _objc_release(puStack_88);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10691c22c; end: 10691c29f;  */

void FUN_10691c22c(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if (param_2 == 0) {
    if (lVar1 == 0) goto LAB_10691c28c;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    if (lVar1 == 0) goto LAB_10691c28c;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
  }
  (*pcVar4)(uVar5,lVar1,uVar2,uVar3,param_3);
LAB_10691c28c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10691c2a0; end: 10691c3a3; -[SCSharedStorySnapManager _handleRequestFailureWithError:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:metadataFetchStartTs:] */

void FUN_10691c2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_1,param_5,0,0x4da97dc,0,0,param_4);
  }
  if (param_6 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    (**(code **)(param_6 + 0x10))(param_6,0,0,0);
    _objc_release(puVar1);
  }
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,0);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10691c3a4; end: 10691c6af; -[SCSharedStorySnapManager fetchMediaV2ForStoryId:senderUsername:sequenceNumber:conversationId:userInitiated:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:withRequestContexts:] */

void FUN_10691c3a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    if (param_9 != 0) {
      (**(code **)(param_9 + 0x10))(param_1,param_9,0,2,0,0,0);
    }
    if (param_10 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      (**(code **)(param_10 + 0x10))(param_10,0,0,0);
      _objc_release(puVar1);
    }
  }
  else {
    _objc_initWeak(auStack_80,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10691c6b0;
    puStack_b0 = &UNK_11094a7e0;
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(param_9);
    lStack_a8 = param_9;
    _objc_retain(param_10);
    lStack_a0 = param_10;
    _objc_retain(param_11);
    uStack_98 = param_11;
    uStack_88 = param_1;
    _objc_retain(param_4);
    _objc_copyWeak(auStack_d8,auStack_80);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    uStack_d0 = param_1;
    func_0x00010bfaa940(uVar3);
    _objc_release(uVar3);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_destroyWeak(auStack_d8);
    _objc_release(param_4);
    _objc_release(uStack_98);
    _objc_release(lStack_a0);
    _objc_release(lStack_a8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10691c6b0; end: 10691c767;  */

void FUN_10691c6b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2f240(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10691c768; end: 10691c867; -[SCSharedStorySnapManager _handleRequestFailureV2WithError:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:metadataFetchStartTs:] */

void FUN_10691c768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_1,param_5,0,1,0,0,param_4);
  }
  if (param_6 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    (**(code **)(param_6 + 0x10))(param_6,0,0,0);
    _objc_release(puVar1);
  }
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,0);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10691c868; end: 10691ca1b; -[SCSharedStorySnapManager _handleRequestSuccessWithStory:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:metadataFetchStartTs:] */

void FUN_10691c868(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c252d60(param_4);
  if (param_5 != 0) {
    lVar1 = param_4;
    func_0x00010c252d60(param_4);
    lVar2 = param_4;
    func_0x00010c25b720(param_4);
    (**(code **)(param_5 + 0x10))(param_5,1,lVar1,param_4,lVar2,0);
    uVar5 = param_1;
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  lVar1 = param_4;
  func_0x00010c252d60();
  if (lVar1 == 1) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10691ca1c;
    puStack_70 = &UNK_11094a7b0;
    _objc_retain(param_4);
    lStack_68 = param_4;
    _objc_retain(param_6);
    ppuVar4 = &puStack_88;
    uStack_60 = param_6;
    uStack_58 = uVar5;
    _objc_retainBlock(ppuVar4);
    func_0x00010be14a60(param_2);
    lVar1 = param_4;
    func_0x00010c25b720();
    if ((param_7 != 0) && (lVar1 == 3)) {
      (**(code **)(param_7 + 0x10))(param_7,1,param_4);
    }
    _objc_release(ppuVar4);
    _objc_release(uStack_60);
    _objc_release(lStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10691ca1c; end: 10691ca8f;  */

void FUN_10691ca1c(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  if (param_2 == 0) {
    if (lVar1 == 0) goto LAB_10691ca7c;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    if (lVar1 == 0) goto LAB_10691ca7c;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(lVar1 + 0x10);
    uVar2 = 1;
  }
  (*pcVar4)(uVar5,lVar1,uVar2,uVar3,param_3);
LAB_10691ca7c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10691ca90; end: 10691cb63; -[SCSharedStorySnapManager _fetchStoryMediaV2:readFromContentManager:completion:] */

void FUN_10691ca90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10691cb64;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10691cb64; end: 10691cc6f;  */

void FUN_10691cb64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf4b4c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10691cc70;
  puStack_68 = &UNK_110864938;
  uStack_48 = (undefined1)uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar3;
  _objc_retain(uVar4);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar4;
  func_0x000100162d98("APPSTORE",&puStack_80);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  return;
}



/* Entry: 10691cc70; end: 10691ce8f;  */

void FUN_10691cc70(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010691ccd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(0,*(long *)(param_1 + 0x30),1,0);
    return;
  }
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10691ce90;
  puStack_80 = &UNK_11084c0d0;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  ppuVar1 = &puStack_98;
  uStack_78 = uVar7;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25a520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25a520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010b26c050(uVar7,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25a520(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar1);
  func_0x00010c11d620(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  return;
}



/* Entry: 10691ce90; end: 10691ceab;  */

void FUN_10691ce90(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010691cea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(0,*(long *)(param_1 + 0x20),param_2 != 0,0);
  return;
}



/* Entry: 10691ceac; end: 10691cf6f;  */

void FUN_10691ceac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0ef700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
  }
  else {
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0ef700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108455a88(lVar1,lVar2,*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10691cf70; end: 10691cfcf; -[SCSharedStorySnapManager .cxx_destruct] */

void FUN_10691cf70(long param_1)

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



/* Entry: 10691cfd0; end: 10691d0cb; -[SCStoriesFeatureNavigationRouter initWithSharedStoryProfileScopeExposer:customStoriesDataFetcher:customStoriesDataSyncer:circumstanceEngine:] */

undefined1 *
FUN_10691cfd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f3d48;
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



/* Entry: 10691d0cc; end: 10691d1a3; -[SCStoriesFeatureNavigationRouter handleNavigationWithNotification:navigationDelegate:featureNavigationRoutingDelegate:] */

undefined8
FUN_10691d0cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0xa2) {
    _objc_storeWeak(param_1 + 0x28,param_5);
    _objc_storeWeak(param_1 + 0x30,param_4);
    uVar3 = param_4;
    func_0x00010c0cf9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    _objc_release(uVar2);
    lVar1 = param_3;
    func_0x00010c11c420();
    if (lVar1 == 0xa2) {
      func_0x00010be62480(param_1);
      uVar3 = 1;
      goto LAB_10691d178;
    }
  }
  uVar3 = 0;
LAB_10691d178:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10691d1a4; end: 10691d38f; -[SCStoriesFeatureNavigationRouter _navigationForSharedStoriesMemberAddedNotificationWithNotification:] */

void FUN_10691d1a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10691d390;
  puStack_88 = &UNK_110853480;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10691d3d8;
  puStack_c0 = &UNK_11094a810;
  _objc_copyWeak(auStack_a8,auStack_78);
  _objc_retain(param_3);
  uStack_b8 = param_3;
  _objc_retain(ppuVar2);
  ppuVar3 = &puStack_d8;
  ppuStack_b0 = ppuVar2;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf62500(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 10691d390; end: 10691d3d7;  */

void FUN_10691d390(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcf40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10691d3d8; end: 10691d42b;  */

void FUN_10691d3d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcd80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10691d42c; end: 10691d467; -[SCStoriesFeatureNavigationRouter _didCompleteSyncWithCustomStory:] */

void FUN_10691d42c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be04dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__displaySharedStoryProfileWithCu_11255ed10)
    ;
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2389c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10691d468; end: 10691d55b; -[SCStoriesFeatureNavigationRouter _didCompleteFetchWithCustomStory:notification:syncCompletion:] */

void FUN_10691d468(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c292820(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9980(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010be04dc0(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10691d55c; end: 10691d5cb; -[SCStoriesFeatureNavigationRouter _displaySharedStoryProfileWithCustomStoryMetadata:] */

void FUN_10691d55c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c27f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c007fa0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10691d5cc; end: 10691d5eb; -[SCStoriesFeatureNavigationRouter didCompleteSharedStoryProfileScope:] */

void FUN_10691d5cc(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10691d5ec; end: 10691d60f; -[SCStoriesFeatureNavigationRouter navigationTypeWithNotification:] */

undefined8 FUN_10691d5ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c11c420();
  uVar1 = 2;
  if (param_3 != 0xa2) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10691d610; end: 10691d6b3; -[SCStoriesFeatureNavigationRouter .cxx_destruct] */

void FUN_10691d610(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10691d6b4; end: 10691d7af; -[SCStoriesFeatureNavigationServiceProvider _createStoriesFeatureNavigationRouter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691d6b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126cf100;
  _objc_alloc(PTR_PTR_1126cf100);
  lVar4 = (long)_DAT_112753bc0;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112753bbc);
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf620a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753bc4;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045c40(puVar1,param_2,uVar7,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10691d7b0; end: 10691d95b; -[SCStoriesFeatureNavigationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691d7b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112753bbc,0);
  _objc_destroyWeak(param_1 + _DAT_112753bc4);
  _objc_destroyWeak(param_1 + _DAT_112753bc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753bc8);
  return;
}



/* Entry: 10691d95c; end: 10691d977;  */

void FUN_10691d95c(void)

{
  _objc_alloc_init(PTR_PTR_1126c0e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10691d978; end: 10691dbab; -[SCStoriesPlaybackServicesEntryPoint _myStoriesPlaybackDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691d978(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126b0e28;
  _objc_alloc();
  lVar14 = (long)_DAT_112753bd0;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126cf110;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112753bd4;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar7 = lVar14;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112753bd8;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112753bdc;
  _objc_loadWeakRetained(lVar4);
  lVar10 = lVar4;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112753be0;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753be4;
  _objc_loadWeakRetained();
  lVar13 = param_1;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffaa80(puVar5,param_2,lVar6,lVar7,puVar1,lVar9,lVar10,lVar12,lVar13);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10691dbac; end: 10691de33; -[SCStoriesPlaybackServicesEntryPoint _storiesPlaybackDataProviderWithDataCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691dbac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf118;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112753be8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112753bd0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112753bd4;
  lVar7 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar15);
  lVar9 = lVar15;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112753be4;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112753be0;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753bec;
  _objc_loadWeakRetained();
  lVar14 = param_1;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021f80(puVar2);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10691de34; end: 10691de93;  */

void FUN_10691de34(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be49ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10691de94; end: 10691e193; -[SCStoriesPlaybackServicesEntryPoint _storiesCombinedPlaybackDataProviderWithDataCoordinatorWithRemoteStoriesDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691de94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2a60;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112753be8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112753bd0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_112753bd4;
  lVar7 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar9 = lVar18;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112753be4;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112753be0;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112753bf0;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753bec;
  _objc_loadWeakRetained();
  lVar16 = param_1;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021fa0(puVar2);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar18);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar17 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea320(puVar2);
  _objc_release(uVar17);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10691e194; end: 10691e1f3;  */

void FUN_10691e194(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be49ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10691e1f4; end: 10691e59b; -[SCStoriesPlaybackServicesEntryPoint _storiesDataProviderFactoryWithFriendStoriesPlaybackDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691e1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  
  puVar1 = PTR_PTR_1126cf120;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1 + _DAT_112753be8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112753bf4;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112753bd4;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112753bf8;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112753be0;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112753bfc;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112753c00;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112753c04;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112753be4;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112753bd0;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112753c08;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_112753c0c;
  lVar25 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar28 = lVar31;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112753c10;
  _objc_loadWeakRetained();
  lVar30 = param_1;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04cfa0(puVar1,param_2,lVar3,param_3,lVar5,lVar7,lVar9,lVar11,lVar14,lVar16,lVar18,
                      lVar20,lVar22,lVar24,lVar27,lVar29,lVar30);
  _objc_release(param_3);
  _objc_release(lVar30);
  _objc_release(param_1);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar31);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10691e59c; end: 10691e653; -[SCStoriesPlaybackServicesEntryPoint _lazyCreatorSubscriptionsInfoProvider] */

void FUN_10691e59c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10691e654; end: 10691e6c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691e654(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112753c14;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c260aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10691e6c4; end: 10691e7cb; -[SCStoriesPlaybackServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10691e6c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112753bcc,0);
  _objc_destroyWeak(param_1 + _DAT_112753bec);
  _objc_destroyWeak(param_1 + _DAT_112753c14);
  _objc_destroyWeak(param_1 + _DAT_112753c04);
  _objc_destroyWeak(param_1 + _DAT_112753c0c);
  _objc_destroyWeak(param_1 + _DAT_112753c08);
  _objc_destroyWeak(param_1 + _DAT_112753c00);
  _objc_destroyWeak(param_1 + _DAT_112753be4);
  _objc_destroyWeak(param_1 + _DAT_112753bf8);
  _objc_destroyWeak(param_1 + _DAT_112753bdc);
  _objc_destroyWeak(param_1 + _DAT_112753bfc);
  _objc_destroyWeak(param_1 + _DAT_112753bf4);
  _objc_destroyWeak(param_1 + _DAT_112753be8);
  _objc_destroyWeak(param_1 + _DAT_112753bd4);
  _objc_destroyWeak(param_1 + _DAT_112753bd0);
  _objc_destroyWeak(param_1 + _DAT_112753be0);
  _objc_destroyWeak(param_1 + _DAT_112753bf0);
  _objc_destroyWeak(param_1 + _DAT_112753c10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753bd8);
  return;
}



/* Entry: 10691e7cc; end: 10691e7d7; -[SCFriendOfGroupStoryDestinationEnsurer ensureFriendOfGroupStoryDestinations:completion:] */

void FUN_10691e7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__ensureDestinations_index_comple_1125602b0,param_3,0,param_4);
  return;
}



/* Entry: 10691e7d8; end: 10691e9af; -[SCFriendOfGroupStoryDestinationEnsurer _ensureDestinations:index:completion:] */

void FUN_10691e7d8(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar1 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010c08fa60();
    if (uVar1 == 0) {
      (**(code **)(param_5 + 0x10))(param_5,7);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bfa7660(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_retain(uVar3);
      _objc_retain(param_5);
      _objc_retain(param_3);
      func_0x00010c297260(uVar6);
      _objc_release(param_3);
      _objc_release(param_5);
      _objc_release(uVar3);
      _objc_release(uVar6);
    }
    _objc_release(uVar3);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}


