/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067d71f0; end: 1067d7257; +[LogTivNotificationReceivedResponse descriptor] */

void FUN_1067d71f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112afeeb0,
                        &PTR____CFConstantStringClassReference_110e601f8,&PTR_DAT_1131645c0,0,0,4,
                        0x1c);
    puRam00000001136c4638 = puVar1;
  }
  return;
}



/* Entry: 1067d7258; end: 1067d7263; -[SCTIVAppUserLifecycleObserver onAppDidEnterBackground] */

void FUN_1067d7258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appStateChanged__11259f230,1);
  return;
}



/* Entry: 1067d7264; end: 1067d726f; -[SCTIVAppUserLifecycleObserver onAppWillEnterForeground] */

void FUN_1067d7264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appStateChanged__11259f230,0);
  return;
}



/* Entry: 1067d7270; end: 1067d7273; -[SCTIVAppUserLifecycleObserver onAppWillResignActive] */

void FUN_1067d7270(void)

{
  return;
}



/* Entry: 1067d7274; end: 1067d727f; -[SCTIVAppUserLifecycleObserver onAppWillTerminate] */

void FUN_1067d7274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appStateChanged__11259f230,1);
  return;
}



/* Entry: 1067d7280; end: 1067d728b; -[SCTIVAppUserLifecycleObserver onUserLoggedIn] */

void FUN_1067d7280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appStateChanged__11259f230,0);
  return;
}



/* Entry: 1067d728c; end: 1067d7297; -[SCTIVAppUserLifecycleObserver onUserRegistered] */

void FUN_1067d728c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appStateChanged__11259f230,0);
  return;
}



/* Entry: 1067d7298; end: 1067d72a3; -[SCTIVAppUserLifecycleObserver .cxx_destruct] */

void FUN_1067d7298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d72a4; end: 1067d7367; -[SCTIVBlizzardLogger logNotificationDisplayed:tivBroadcastId:timestamp:isExpiredOnClient:] */

void FUN_1067d72a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce2b8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c219600();
  _objc_release(param_3);
  func_0x00010c173d00(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c193e80(puVar1,param_2,param_5);
  func_0x00010c1b0c40(puVar1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d7368; end: 1067d744f; -[SCTIVBlizzardLogger logRequestReceived:tivBroadcastId:receiptType:timestamp:queueLength:] */

void FUN_1067d7368(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ce2c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c219600();
  _objc_release(param_3);
  func_0x00010c173d00(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c193e80(puVar1,param_2,param_6);
  func_0x00010c1e6780(puVar1,param_2,param_7);
  lVar2 = param_1;
  func_0x00010bdfaae0(param_1,param_2,param_5);
  func_0x00010c18ba40(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d7450; end: 1067d7523; -[SCTIVBlizzardLogger logUserResponse:transactionId:broadcastId:elapsedTime:] */

void FUN_1067d7450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ce2c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  lVar2 = param_1;
  func_0x00010be95240(param_1,param_2,param_3);
  func_0x00010c1ecf20(puVar1,param_2,lVar2);
  func_0x00010c219600(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c173d00(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c193e80(puVar1,param_2,param_6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d7524; end: 1067d75bf; -[SCTIVBlizzardLogger logChangePassword:broadcastId:] */

void FUN_1067d7524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce2d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c219600();
  _objc_release(param_3);
  func_0x00010c173d00(puVar1,param_2,param_4);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d75c0; end: 1067d765b; -[SCTIVBlizzardLogger logContactSupport:broadcastId:] */

void FUN_1067d75c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce2d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c219600();
  _objc_release(param_3);
  func_0x00010c173d00(puVar1,param_2,param_4);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d765c; end: 1067d7667; -[SCTIVBlizzardLogger _deliveryChannelFromReceiptType:] */

bool FUN_1067d765c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 1067d7668; end: 1067d768b; -[SCTIVBlizzardLogger _responseFromResult:] */

undefined8 FUN_1067d7668(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10dddfcb0 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1067d768c; end: 1067d7697; -[SCTIVBlizzardLogger .cxx_destruct] */

void FUN_1067d768c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d7698; end: 1067d770b; -[SCTIVRequestHandler initWithTIVClient:] */

undefined1 * FUN_1067d7698(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3410;
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



/* Entry: 1067d770c; end: 1067d7713; -[SCTIVRequestHandler submit:] */

void FUN_1067d770c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c271970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_tivRequestReceived__11267a080);
  return;
}



/* Entry: 1067d7714; end: 1067d771b; -[SCTIVRequestHandler submitV2:] */

void FUN_1067d7714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2719b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_tivV2RequestReceived__11267a090);
  return;
}



/* Entry: 1067d771c; end: 1067d7727; -[SCTIVRequestHandler .cxx_destruct] */

void FUN_1067d771c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d7728; end: 1067d780b;  */

void FUN_1067d7728(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067d780c; end: 1067d78eb; -[SCTIVRequestPresenter _createTIVGrcpService] */

void FUN_1067d780c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067d78ec; end: 1067d7933; -[SCTIVRequestPresenter nativeConversationManager] */

void FUN_1067d78ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067d7934; end: 1067d8173; -[SCTIVRequestPresenter _createTIVViewController:isExpiredOnClient:] */

void FUN_1067d7934(ulong param_1,undefined8 param_2,long param_3)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ce2e8;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010bf70280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c291200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf70280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf70280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0edc20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010bf70280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf21580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a7e0();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar10 = PTR_PTR_1126ce2f0;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c2797e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c2797e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf6eb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052e60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar11 = PTR_PTR_1126ce2f8;
  _objc_alloc(PTR_PTR_1126ce2f8);
  lVar2 = param_3;
  func_0x00010c279800(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf21380(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c136b20(param_3);
  lVar5 = param_3;
  func_0x00010bf9c800(param_3);
  lVar6 = param_3;
  func_0x00010bf39960(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf53220(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c279780(param_3);
  func_0x00010c05c240((double)lVar4,(double)lVar5,(double)lVar8,puVar11);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar11);
  _objc_release(uVar16);
  _objc_release(uVar12);
  uVar13 = param_1;
  func_0x00010be08b00();
  if ((int)uVar13 != 0) {
    lVar2 = param_3;
    func_0x00010c11a500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar14 = PTR_PTR_1126ce300;
      _objc_alloc(PTR_PTR_1126ce300);
      lVar2 = param_3;
      func_0x00010c11a500(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = param_1;
      func_0x00010beea4a0(param_1);
      func_0x00010c020e60((double)(uVar13 & 0xffffffff),puVar14);
      _objc_release(lVar2);
      func_0x00010c173240(puVar11);
      _objc_release(puVar14);
    }
  }
  puVar15 = PTR_PTR_1126ce308;
  _objc_alloc_init(PTR_PTR_1126ce308);
  _objc_initWeak(auStack_80,param_1);
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1067d8174;
  puStack_90 = &UNK_11093d9e0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c216780(puVar15);
  puStack_d0 = puVar14;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1067d81bc;
  puStack_b8 = &UNK_11093da10;
  uStack_b0 = param_1;
  func_0x00010c216760(puVar15);
  puStack_f8 = puVar14;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_1067d820c;
  puStack_e0 = &UNK_11093d9e0;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c216740(puVar15);
  puStack_120 = puVar14;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x1067d8268;
  puStack_108 = &UNK_11093d9e0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c2166e0(puVar15);
  puStack_148 = puVar14;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x1067d82b0;
  puStack_130 = &UNK_11093d9e0;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c2167e0(puVar15);
  puStack_170 = puVar14;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x1067d82f8;
  puStack_158 = &UNK_11093d9e0;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010c2167c0(puVar15);
  puStack_198 = puVar14;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x1067d8354;
  puStack_180 = &UNK_1108434b0;
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010c216700(puVar15);
  puStack_1c0 = puVar14;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_1067d8380;
  puStack_1a8 = &UNK_11093da40;
  _objc_copyWeak(auStack_1a0,auStack_80);
  func_0x00010c216820(puVar15);
  _objc_copyWeak(auStack_1c8,auStack_80);
  func_0x00010c2167a0(puVar15);
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a43c0(puVar15);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar15);
  _objc_release(uVar16);
  puVar14 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216720(puVar15);
  _objc_release(puVar17);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar17 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  func_0x00010c040b80();
  func_0x00010c1cba60(puVar15);
  puVar18 = PTR_PTR_1126ce310;
  _objc_alloc(PTR_PTR_1126ce310);
  func_0x00010c061d40();
  puVar19 = PTR_PTR_1126ce318;
  _objc_alloc(PTR_PTR_1126ce318);
  func_0x00010c0601e0();
  func_0x00010c1c8b80();
  _objc_opt_class(PTR_PTR_1126ce318);
  func_0x00010c181960(puVar17);
  func_0x00010c1c1bc0(puVar17);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar14);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar15);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 1067d8174; end: 1067d81bb;  */

void FUN_1067d8174(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfacc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067d81bc; end: 1067d820b;  */

void FUN_1067d81bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bdfacc0(uVar1);
  func_0x00010bdf8dc0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067d820c; end: 1067d837f;  */

void FUN_1067d820c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfacc0(param_1);
    func_0x00010bdf8da0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067d8380; end: 1067d83f7;  */

void FUN_1067d8380(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bec1b80(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067d83f8; end: 1067d8427;  */

void FUN_1067d83f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067d8428; end: 1067d87ef; -[SCTIVRequestPresenter _createTIVV2ViewController:] */

void FUN_1067d8428(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc_init();
  uVar10 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar1;
  _objc_release(uVar10);
  puVar1 = PTR_PTR_1126ce320;
  _objc_alloc_init();
  _objc_initWeak(auStack_88,param_1);
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010c1d2040(puVar1);
  puVar2 = param_1;
  func_0x00010beb15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224e20(puVar1);
  _objc_release(puVar2);
  uVar10 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010bf553a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a240(puVar1);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d83e0(puVar1);
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126ce328;
  _objc_alloc(PTR_PTR_1126ce328);
  lVar3 = param_3;
  func_0x00010bf05820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01de00(puVar2);
  _objc_release(lVar3);
  func_0x00010c1220e0(param_3);
  puVar4 = param_1;
  func_0x00010bde3e40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == PTR_PTR_113164de0) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bfc69a0(uVar10);
    _objc_release(uVar10);
    _objc_release(param_3);
  }
  func_0x00010c1e81c0(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  func_0x00010c040b80();
  puVar7 = PTR_PTR_1126ce340;
  _objc_alloc(PTR_PTR_1126ce340);
  func_0x00010c061d40();
  puVar8 = PTR_PTR_1126ce318;
  _objc_alloc();
  func_0x00010c0601e0();
  func_0x00010c1c8b80();
  _objc_opt_class(PTR_PTR_1126ce318);
  func_0x00010c181960(puVar6);
  func_0x00010c1c1bc0(puVar6);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2224a0(*(undefined8 *)(param_1 + 0xd8));
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be03760();
  _objc_release(param_3);
  return;
}



/* Entry: 1067d87f0; end: 1067d8863;  */

void FUN_1067d87f0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03760();
  _objc_release(param_1);
  return;
}



/* Entry: 1067d8864; end: 1067d8873;  */

void FUN_1067d8864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c220170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),PTR_s_setValue__112665a80,0);
  return;
}



/* Entry: 1067d8874; end: 1067d894f;  */

void FUN_1067d8874(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ce330;
  func_0x00010bfbc0e0(PTR_PTR_1126ce330,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce338;
  _objc_alloc(PTR_PTR_1126ce338);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf05820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360(puVar2);
  _objc_release(uVar3);
  puVar4 = puVar2;
  func_0x00010c271880(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab120(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 1067d8950; end: 1067d899f; -[SCTIVRequestPresenter _composerReceiptTypeFromClient:] */

void FUN_1067d8950(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR_PTR_113164de0;
  if (param_3 != 0) {
    ppuVar1 = &PTR_PTR_113164dd8;
  }
  ppuVar2 = &PTR_PTR_113164de8;
  if (param_3 != 1) {
    ppuVar2 = ppuVar1;
  }
  puVar3 = *ppuVar2;
  _objc_retain(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067d89a0; end: 1067d8b2f; -[SCTIVRequestPresenter _presentTIVView:isExpiredOnClient:] */

void FUN_1067d89a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bdf4780(param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  func_0x00010c1cb760();
  func_0x00010c1c8b80(puVar2,param_3,0);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd86158();
  func_0x00010c0b7280(uVar3);
  uVar5 = uVar3;
  func_0x00010c1417c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar5);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x50) = param_1;
  func_0x00010bf57500(*(undefined8 *)(param_2 + 0x80));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = *(long *)(param_2 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x88);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126aa0(uVar5,param_3,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162b40();
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067d8b30; end: 1067d8c4b; -[SCTIVRequestPresenter _presentTIVV2View:] */

void FUN_1067d8b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126af108;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c8b80();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bd86158();
  func_0x00010c0b7280(uVar2);
  uVar3 = uVar2;
  func_0x00010c1417c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf55bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = uVar3;
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bdf4760(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf0c980(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d8c4c; end: 1067d8cd3; -[SCTIVRequestPresenter _setupWebLauncher] */

void FUN_1067d8c4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126afe88;
  _objc_alloc(PTR_PTR_1126afe88);
  func_0x00010c062da0();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067d8cd4; end: 1067d8d8f; -[SCTIVRequestPresenter _approveTIV:] */

void FUN_1067d8cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010be08b00(param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1067d8d60;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be03760(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067d8d90; end: 1067d8de7; -[SCTIVRequestPresenter _approveTIVDoNotDismiss] */

void FUN_1067d8d90(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1067d8de8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 1067d8de8; end: 1067d8e17;  */

void FUN_1067d8de8(long param_1,undefined8 param_2)

{
  func_0x00010bea83c0(*(undefined8 *)(param_1 + 0x20),param_2,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010beb86b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showConfirmationToast_11258bb50);
  return;
}



/* Entry: 1067d8e18; end: 1067d8e9b; -[SCTIVRequestPresenter _denyTIV:] */

void FUN_1067d8e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1067d8e9c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be03760(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067d8e9c; end: 1067d8eab;  */

void FUN_1067d8e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setTIVResult_tivRequest__112587a98,1,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1067d8eac; end: 1067d8f2f; -[SCTIVRequestPresenter _errorTIV:] */

void FUN_1067d8eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1067d8f30;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be03760(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067d8f30; end: 1067d8f3f;  */

void FUN_1067d8f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setTIVResult_tivRequest__112587a98,3,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1067d8f40; end: 1067d9077; -[SCTIVRequestPresenter _startTIVBootstrapReencryption:version:completedCallback:] */

void FUN_1067d8f40(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0d58a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1067d9078;
  puStack_60 = &UNK_110849530;
  _objc_retain(param_5);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1067d9084;
  puStack_88 = &UNK_110852668;
  uStack_80 = param_5;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar2,param_3,&puStack_78,&puStack_a0);
  func_0x00010bf1fae0(param_2,param_3,param_4,(int)param_1,puVar2);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 1067d9078; end: 1067d908f;  */

void FUN_1067d9078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067d9080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1067d9090; end: 1067d917b; -[SCTIVRequestPresenter _setTIVResult:tivRequest:] */

void FUN_1067d9090(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_5);
  _CACurrentMediaTime();
  dVar5 = *(double *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = param_5;
  func_0x00010c279800(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf21380(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0b2c20(uVar4,param_3,param_4,uVar3,uVar1,(long)((param_1 - dVar5) * 1000.0));
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar3,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067d917c; end: 1067d9293; -[SCTIVRequestPresenter _dismissTIV:] */

void FUN_1067d917c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162b40();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,uVar2);
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067d9294;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067d9294; end: 1067d936b;  */

void FUN_1067d9294(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bf84b00(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1067d936c; end: 1067d93bb;  */

void FUN_1067d936c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067d93ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1067d93bc; end: 1067d9483; -[SCTIVRequestPresenter _deepLinkChangePassword:] */

void FUN_1067d93bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c279800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf21380(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0a2c20(uVar4,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010be5b880(param_1,param_2,&PTR____CFConstantStringClassReference_110e6acd8,
                      &PTR____CFConstantStringClassReference_110dc67f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf8d40(param_1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1067d9484; end: 1067d94c3; -[SCTIVRequestPresenter _makeDeepLinkURLForFeature:path:] */

void FUN_1067d9484(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e06c58);
  return;
}



/* Entry: 1067d94c4; end: 1067d958b; -[SCTIVRequestPresenter _deepLinkContactSuppport:] */

void FUN_1067d94c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c279800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf21380(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0a3b00(uVar4,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010be5b880(param_1,param_2,&PTR____CFConstantStringClassReference_110e6acd8,
                      &PTR____CFConstantStringClassReference_110f83e38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf8d40(param_1,param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1067d958c; end: 1067d966b; -[SCTIVRequestPresenter _deepLink:] */

void FUN_1067d958c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1067d961c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(puStack_28);
  _objc_release(puVar1);
  return;
}



/* Entry: 1067d966c; end: 1067d966f;  */

void FUN_1067d966c(void)

{
  return;
}



/* Entry: 1067d9670; end: 1067d973b; -[SCTIVRequestPresenter presentTIVRequest:isExpiredOnClient:] */

void FUN_1067d9670(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067d973c;
  puStack_50 = &UNK_11084d5f8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_68);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfc5fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067d973c; end: 1067d974b;  */

void FUN_1067d973c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7eef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentTIVView_isExpiredOnClien_11257d558,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 1067d974c; end: 1067d9807; -[SCTIVRequestPresenter presentTIVRequest:] */

void FUN_1067d974c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1067d9808;
  puStack_38 = &UNK_110841f80;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfc5fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067d9808; end: 1067d9813;  */

void FUN_1067d9808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7eed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentTIVV2View__11257d550,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1067d9814; end: 1067d98eb; -[SCTIVRequestPresenter _showConfirmationToast] */

void FUN_1067d9814(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  FUN_1067d9f8c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0ae0;
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0001067d9f74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57f00(puVar4,param_2,puVar2,puVar3,0,1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067d98ec; end: 1067d993b; -[SCTIVRequestPresenter _enableEelTivReencryption] */

long FUN_1067d98ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  FUN_1067d993c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf91540(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1067d993c; end: 1067d99f3;  */

void FUN_1067d993c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar2 = lRam00000001136c4648;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1067d9bc4;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136c4648,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam00000001136c4640;
  _objc_retain(uRam00000001136c4640);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067d99f4; end: 1067d9a43; -[SCTIVRequestPresenter _waitForDialogTimeoutMs] */

long FUN_1067d99f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0xb8);
  FUN_1067d993c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c2a1360(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1067d9a44; end: 1067d9bc3; -[SCTIVRequestPresenter .cxx_destruct] */

void FUN_1067d9a44(long param_1)

{
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
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



/* Entry: 1067d9bc4; end: 1067d9c97;  */

void FUN_1067d9bc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c1195e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110e60238,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ce348;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x00010c296d80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    func_0x00010c0f40e0(puVar5,param_2,lVar4,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lStack_38;
    _objc_retain(lStack_38);
    _objc_release(lVar4);
    if (lVar2 == 0) {
      _objc_retain(puVar5);
      puVar1 = puRam00000001136c4640;
      puRam00000001136c4640 = puVar5;
      _objc_release(puVar1);
    }
    _objc_release(puVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 1067d9c98; end: 1067d9cd7;  */

void FUN_1067d9c98(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067d9cd8; end: 1067d9d0f; -[SCTIVServicesEntryPoint _createRequestHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d9cd8(void)

{
  _objc_alloc(PTR_PTR_1126ce378);
  func_0x00010c050080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067d9d10; end: 1067d9ec7; -[SCTIVServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d9d10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750b48,0);
  _objc_storeStrong(param_1 + _DAT_112750adc,0);
  _objc_storeStrong(param_1 + _DAT_112750b0c,0);
  _objc_destroyWeak(param_1 + _DAT_112750b10);
  _objc_destroyWeak(param_1 + _DAT_112750aec);
  _objc_destroyWeak(param_1 + _DAT_112750b14);
  _objc_destroyWeak(param_1 + _DAT_112750af0);
  _objc_destroyWeak(param_1 + _DAT_112750ae4);
  _objc_destroyWeak(param_1 + _DAT_112750b40);
  _objc_destroyWeak(param_1 + _DAT_112750b44);
  _objc_destroyWeak(param_1 + _DAT_112750af8);
  _objc_destroyWeak(param_1 + _DAT_112750b00);
  _objc_destroyWeak(param_1 + _DAT_112750b08);
  _objc_destroyWeak(param_1 + _DAT_112750b38);
  _objc_destroyWeak(param_1 + _DAT_112750b34);
  _objc_destroyWeak(param_1 + _DAT_112750b1c);
  _objc_destroyWeak(param_1 + _DAT_112750b18);
  _objc_destroyWeak(param_1 + _DAT_112750b28);
  _objc_destroyWeak(param_1 + _DAT_112750b3c);
  _objc_destroyWeak(param_1 + _DAT_112750b2c);
  _objc_destroyWeak(param_1 + _DAT_112750b24);
  _objc_destroyWeak(param_1 + _DAT_112750b20);
  _objc_destroyWeak(param_1 + _DAT_112750b30);
  _objc_destroyWeak(param_1 + _DAT_112750ae0);
  _objc_destroyWeak(param_1 + _DAT_112750af4);
  _objc_destroyWeak(param_1 + _DAT_112750ae8);
  _objc_destroyWeak(param_1 + _DAT_112750b50);
  _objc_destroyWeak(param_1 + _DAT_112750b04);
  _objc_destroyWeak(param_1 + _DAT_112750b4c);
  _objc_storeStrong(param_1 + _DAT_112750afc,0);
  _objc_storeStrong(param_1 + _DAT_112750ad8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750ad4,0);
  return;
}



/* Entry: 1067d9ec8; end: 1067d9ef7; -[SCTIVShakeToReportInfoProvider setActiveTIVRequest:] */

void FUN_1067d9ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067d9ef8; end: 1067d9eff; -[SCTIVShakeToReportInfoProvider getJiraLabelsByProject:] */

undefined8 FUN_1067d9ef8(void)

{
  return 0;
}



/* Entry: 1067d9f00; end: 1067d9f07; -[SCTIVShakeToReportInfoProvider getMetaInfo] */

undefined8 FUN_1067d9f00(void)

{
  return 0;
}



/* Entry: 1067d9f08; end: 1067d9f13; -[SCTIVShakeToReportInfoProvider .cxx_destruct] */

void FUN_1067d9f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d9f14; end: 1067d9f67; -[SCTIVViewController initWithValdiView:] */

undefined1 * FUN_1067d9f14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3420;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067d9f68; end: 1067d9f8b; -[SCTIVViewController defaultProjectNameV2] */

void FUN_1067d9f68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf35d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_chat_1125ab100);
  return;
}



/* Entry: 1067d9f8c; end: 1067da007;  */

void FUN_1067d9f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126ce388;
  _objc_opt_class(PTR_PTR_1126ce388);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e60358,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067da008; end: 1067da0b7; -[SCApplicationWindow sendEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067da008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f3986fa;
  func_0x0001000ba800(&UNK_10f3986fa);
  puStack_38 = PTR_PTR_1126f3428;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_sendEvent__112531ca0,param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112750b58));
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1067da0b8; end: 1067da0bf;  */

void FUN_1067da0b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1067da0c0; end: 1067da0fb; -[SCApplicationWindow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067da0c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750b58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750b5c);
  return;
}



/* Entry: 1067da0fc; end: 1067da107; +[SCCTivLogNotificationReceived modulePath] */

undefined ** FUN_1067da0fc(void)

{
  return &PTR____CFConstantStringClassReference_110e60378;
}



/* Entry: 1067da108; end: 1067da10f; +[SCCTivLogNotificationReceived asyncStrictMode] */

undefined8 FUN_1067da108(void)

{
  return 0;
}



/* Entry: 1067da110; end: 1067da14f; -[SCCTivLogNotificationReceived logNotificationReceivedWithTivMetadataBytes:] */

void FUN_1067da110(void)

{
  long unaff_x20;
  
  FUN_1067da408();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(unaff_x20 + 0x10))();
  func_0x0001067da418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1067da150; end: 1067da2a3; +[SCCTivLogNotificationReceived invokeWithJSRuntimeProvider:tivMetadataBytes:completionHandler:] */

void FUN_1067da150(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1067da230;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  func_0x0001067da418();
  _objc_release(param_3);
  return;
}



/* Entry: 1067da2a4; end: 1067da2bf; +[SCCTivLogNotificationReceived valdiMarshallableObjectDescriptor] */

void FUN_1067da2a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11093da90;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1067da2c0; end: 1067da2cb; +[SCTIVView componentPath] */

undefined ** FUN_1067da2c0(void)

{
  return &PTR____CFConstantStringClassReference_110e60398;
}



/* Entry: 1067da2cc; end: 1067da2ef; -[SCTIVView initWithViewModel:componentContext:runtime:] */

void FUN_1067da2cc(void)

{
  func_0x0001067da420(PTR_PTR_1126f3430);
  return;
}



/* Entry: 1067da2f0; end: 1067da323; -[SCTIVView setViewModel:] */

void FUN_1067da2f0(void)

{
  FUN_1067da408();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067da434();
  func_0x0001067da418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067da324; end: 1067da363; -[SCTIVView viewModel] */

void FUN_1067da324(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067da418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1067da364; end: 1067da36f; +[SCTIVViewV2 componentPath] */

undefined ** FUN_1067da364(void)

{
  return &PTR____CFConstantStringClassReference_110e603b8;
}



/* Entry: 1067da370; end: 1067da393; -[SCTIVViewV2 initWithViewModel:componentContext:runtime:] */

void FUN_1067da370(void)

{
  func_0x0001067da420(PTR_PTR_1126f3438);
  return;
}



/* Entry: 1067da394; end: 1067da3c7; -[SCTIVViewV2 setViewModel:] */

void FUN_1067da394(void)

{
  FUN_1067da408();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067da434();
  func_0x0001067da418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067da3c8; end: 1067da407; -[SCTIVViewV2 viewModel] */

void FUN_1067da3c8(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067da418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1067da408; end: 1067da447;  */

void FUN_1067da408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1067da448; end: 1067da4f3; -[SCTIVReceiptType__Enum init] */

undefined * FUN_1067da448(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = PTR_PTR_113164dd8;
  puStack_38 = PTR_PTR_113164de0;
  puStack_30 = PTR_PTR_113164de8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001067da814(PTR_PTR_1126f3440);
  func_0x0001067da7f4();
  return puVar1;
}



/* Entry: 1067da4f4; end: 1067da51f; -[SCTIVTivBootstrapReencryptionData initWithKeyInitializationInfoBytes:dialogTimeoutMs:] */

void FUN_1067da4f4(void)

{
  func_0x0001067da814(PTR_PTR_1126f3440);
  func_0x0001067da7f4();
  return;
}



/* Entry: 1067da520; end: 1067da533; +[SCTIVTivBootstrapReencryptionData valdiMarshallableObjectDescriptor] */

void FUN_1067da520(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11093dac0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067da534; end: 1067da557; -[SCTIVTivContext init] */

void FUN_1067da534(void)

{
  func_0x0001067da800(PTR_PTR_1126f3448);
  return;
}



/* Entry: 1067da558; end: 1067da57b; +[SCTIVTivContext valdiMarshallableObjectDescriptor] */

void FUN_1067da558(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093db38;
  param_1[1] = &PTR_DAT_11093dc88;
  param_1[2] = &PTR_DAT_11093db08;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067da57c; end: 1067da5a7;  */

undefined8 FUN_1067da57c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],*param_2,param_2[1],param_2[3]);
  return 0;
}



/* Entry: 1067da5a8; end: 1067da627;  */

void FUN_1067da5a8(undefined8 param_1)

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
  pcStack_38 = FUN_1067da7a8;
  puStack_30 = &UNK_1108d6b00;
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



/* Entry: 1067da628; end: 1067da68f; -[SCTIVTivData initWithUserId:username:transactionId:broadcastId:requestTime:expirationTime:city:country:deviceData:transactionType:isExpiredOnClient:transactionDescription:] */

void FUN_1067da628(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3450;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}


