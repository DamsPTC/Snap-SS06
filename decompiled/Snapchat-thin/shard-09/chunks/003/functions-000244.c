/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c644cc; end: 106c645b7; -[SCPlusStoreKitStreakRestoreTransactionProcessor finishTransaction:metadata:purchaseHandleManager:] */

void FUN_106c644cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = param_4;
  FUN_106c596c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  FUN_106c59830(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010be17380(lVar1,param_2,param_3,uVar2,uVar3,*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),param_5,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c645b8; end: 106c64803; +[SCPlusStoreKitStreakRestoreTransactionProcessor _finishTransaction:conversationId:traceId:paymentQueue:performer:grpcClient:purchaseHandleManager:nativeMessagingServices:] */

void FUN_106c645b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_106c58588();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106c64804;
  puStack_c0 = &UNK_11096c680;
  uStack_88 = param_9;
  uStack_78 = param_10;
  uStack_b8 = param_6;
  uStack_b0 = param_7;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_8;
  puStack_80 = puVar1;
  uStack_70 = param_1;
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c297260(uVar4,param_2,&puStack_d8,param_7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c64804; end: 106c649eb;  */

void FUN_106c64804(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c587d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106c649ec;
  puStack_88 = &UNK_11096bf00;
  uStack_58 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar4;
  uStack_68 = uVar1;
  _objc_retain(uVar3);
  uStack_60 = uVar3;
  FUN_106c778cc(uVar2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  func_0x00010c297260(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar1);
  return;
}



/* Entry: 106c649ec; end: 106c649ff;  */

void FUN_106c649ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s__sendToServer_conversationId_tra_112585cf8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 106c64a00; end: 106c64baf;  */

void FUN_106c64a00(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f67c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43740(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7cb78;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cb78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106c64bb0;
  puStack_58 = &UNK_110863958;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar4;
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  FUN_106c778cc(uVar2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  func_0x00010c297260(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  return;
}



/* Entry: 106c64bb0; end: 106c64bbf;  */

/* WARNING: Removing unreachable block (ram,0x000106c750ec) */

void FUN_106c64bb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar2);
  lVar3 = lVar1;
  func_0x00010c08fa60();
  puVar11 = PTR_PTR_1126ae558;
  if (lVar3 == 0) {
    ppuVar10 = &PTR____CFConstantStringClassReference_110e7d458;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7d458);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar10 = (undefined **)PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b41e0;
    _objc_alloc(PTR_PTR_1126b41e0);
    func_0x00010c004e00();
    puVar5 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar6 = PTR_PTR_1126be918;
    _objc_alloc(PTR_PTR_1126be918);
    func_0x00010c04f4c0();
    uVar7 = uVar2;
    func_0x00010c0d5c60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfc7e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010c2665a0(uVar9);
    puVar11 = puVar5;
    func_0x00010bfbc3e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(ppuVar10);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106c64bc0; end: 106c64c3b;  */

void FUN_106c64bc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0f67c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43740(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c64c3c; end: 106c64f6f; +[SCPlusStoreKitStreakRestoreTransactionProcessor _sendToServer:conversationId:traceId:productInfo:grpcClient:] */

void FUN_106c64c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106c6723c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e7cbb8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126d1ca8;
    _objc_opt_new(PTR_PTR_1126d1ca8);
    func_0x00010c183b80();
    func_0x00010c218e40(ppuVar7);
    uVar4 = param_3;
    FUN_106c58af0(param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e81a0(ppuVar7);
    _objc_release(uVar4);
    uVar4 = param_6;
    func_0x00010c257f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c3c0(ppuVar7);
    _objc_release(uVar4);
    uVar4 = param_6;
    func_0x00010c112ac0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e28e0(ppuVar7);
    _objc_release(uVar4);
    func_0x00010c112aa0(param_6);
    func_0x00010c1e28a0(ppuVar7);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126d1cb0);
    func_0x00010c0199c0(puVar5);
    uVar4 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf63640(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar4);
    _objc_release(puVar1);
    _objc_release(ppuVar6);
    _objc_release(uVar4);
    puVar1 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c64f70; end: 106c64f83;  */

void FUN_106c64f70(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106c64f84; end: 106c64fcb; -[SCPlusStoreKitStreakRestoreTransactionProcessor .cxx_destruct] */

void FUN_106c64f84(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c64fcc; end: 106c651b7; -[SCPlusStoreKitSubscriptionTransactionProcessor finishTransaction:metadata:purchaseHandleManager:] */

void FUN_106c64fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_106c587c4();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_opt_class(param_1);
  if ((int)uVar2 == 0) {
    _objc_retain(param_4);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_106c666d4;
    uStack_60 = 0x106c666e4;
    uStack_58 = 0;
    func_0x00010c0c0700(param_4);
    uVar3 = puStack_78[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(param_4);
    func_0x00010be17420(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    func_0x00010be16d80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106c651b8; end: 106c653df; +[SCPlusStoreKitSubscriptionTransactionProcessor _finishTransaction:referralId:paymentQueue:performer:grpcClient:purchaseHandleManager:userService:] */

void FUN_106c651b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0f67c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_106c58588();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106c653e0;
  puStack_b0 = &UNK_11096c3b0;
  uStack_78 = param_9;
  uStack_a8 = param_5;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  uStack_90 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c297260(uVar4,param_2,&puStack_c8,param_6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c653e0; end: 106c654b7;  */

void FUN_106c653e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c587d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010be825a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106c654b8; end: 106c654cb;  */

void FUN_106c654b8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106c654cc; end: 106c6571b; +[SCPlusStoreKitSubscriptionTransactionProcessor _processSubscribeForTransaction:productInfo:referralId:paymentQueue:performer:grpcClient:purchaseHandleManager:userService:] */

void FUN_106c654cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106c6571c;
  puStack_a8 = &UNK_11096c320;
  uStack_80 = param_1;
  _objc_retain(param_3);
  uStack_a0 = param_3;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar2 = param_7;
  FUN_106c778cc(param_7,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_3);
  func_0x00010c297260(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_7);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c6571c; end: 106c6572f;  */

void FUN_106c6571c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s__sendToServer_productInfo_referr_112585d10,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106c65730; end: 106c65a1f;  */

void FUN_106c65730(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar4 = param_2;
    func_0x00010bf987e0();
    iVar1 = (int)uVar4;
    if (iVar1 == -0x4524111) {
      func_0x000106c59670(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0f67c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c115ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e7cd18;
      ppuVar2 = ppuVar5;
      FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cd18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9fae0(uVar3);
      _objc_release(ppuVar2);
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      goto LAB_106c657b4;
    }
    if (iVar1 == 2) {
      func_0x000106c59670(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0f67c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c115ea0();
      _objc_retainAutoreleasedReturnValue();
LAB_106c658a0:
      func_0x00010bf43740(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar4);
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
      goto LAB_106c657d8;
    }
    if (iVar1 == 1) {
      func_0x000106c59670(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0f67c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c115ea0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106c658a0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e7a0(param_2);
    func_0x00010c252d60(param_2);
    uVar4 = uVar3;
    func_0x00010bfb5040(uVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = *(undefined ***)(param_1 + 0x38);
    _objc_retain(ppuVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    func_0x00010c297260(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f67c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43740(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e7cb78;
LAB_106c657b4:
    FUN_106c7723c(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar4);
  }
  _objc_release(ppuVar5);
LAB_106c657d8:
  _objc_release(param_2);
  return;
}



/* Entry: 106c65a20; end: 106c65a9b;  */

void FUN_106c65a20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000106c59670(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0f67c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43740(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c65a9c; end: 106c65c83; +[SCPlusStoreKitSubscriptionTransactionProcessor _finishConsumableTransaction:paymentQueue:performer:grpcClient:purchaseHandleManager:userService:] */

void FUN_106c65a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0f67c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_106c58588();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106c65c84;
  puStack_a8 = &UNK_11096bf60;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_3;
  uStack_88 = param_6;
  uStack_80 = param_7;
  puStack_78 = puVar1;
  uStack_70 = param_8;
  uStack_68 = param_1;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c297260(uVar4,param_2,&puStack_c0,param_5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c65c84; end: 106c65e23;  */

void FUN_106c65c84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_106c587d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106c65e24;
  puStack_78 = &UNK_11096c740;
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar4;
  uStack_68 = uVar1;
  _objc_retain(uVar3);
  uStack_60 = uVar3;
  FUN_106c778cc(uVar2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  func_0x00010c297260(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uVar1);
  return;
}



/* Entry: 106c65e24; end: 106c65e33;  */

void FUN_106c65e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s__sendConsumeSubscriptionRequest__112585500,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106c65e34; end: 106c6610f;  */

void FUN_106c65e34(long param_1,int param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_3 == 0) {
    func_0x00010bf987e0();
    if (param_2 != -0x4524111) {
      if (param_2 == 2) {
        func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x38));
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0f67c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c115ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_2 != 1) {
          uVar3 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfb5040();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x38);
          _objc_retain(uVar5);
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          _objc_retain(uVar6);
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          _objc_retain(uVar7);
          func_0x00010c297260(uVar4);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          return;
        }
        func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x38));
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0f67c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c115ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bf43740(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_completeWithValue__1125ae900,
                 *(undefined8 *)(param_1 + 0x20));
      return;
    }
    func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x38));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f67c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7cd18;
    ppuVar2 = ppuVar1;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cd18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9fae0(uVar3);
    _objc_release(ppuVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f67c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43740(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7cb78;
  }
  FUN_106c7723c(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106c66110; end: 106c6618b;  */

void FUN_106c66110(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0f67c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43740(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c6618c; end: 106c66407; +[SCPlusStoreKitSubscriptionTransactionProcessor _sendToServer:productInfo:referralId:grpcClient:] */

void FUN_106c6618c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar1 = param_3;
  FUN_106c59050();
  if (((ulong)ppuVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    FUN_106c6723c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar3 = puVar8;
    func_0x00010c08fa60();
    puVar2 = PTR_PTR_1126ae558;
    if (puVar3 == (undefined *)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e7cbb8;
      FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9c80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106c66378;
    }
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  ppuVar1 = param_3;
  FUN_106c59204(param_3,puVar8,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  FUN_106c59628(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  _objc_opt_class(PTR_PTR_1126d1bb0);
  func_0x00010c0199c0(puVar5);
  uVar6 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar1;
  func_0x00010bf63640(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar6);
  _objc_release(ppuVar7);
  _objc_release(uVar6);
  puVar2 = puVar3;
  func_0x00010bfbc3e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar4);
LAB_106c66378:
  _objc_release(ppuVar1);
  _objc_release(puVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c66408; end: 106c6641b;  */

void FUN_106c66408(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106c6641c; end: 106c66677; +[SCPlusStoreKitSubscriptionTransactionProcessor _sendConsumeSubscriptionRequest:productInfo:grpcClient:] */

void FUN_106c6641c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106c6723c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  puVar1 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e7cbb8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7cbb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)PTR_PTR_1126d1cb8;
    _objc_opt_new(PTR_PTR_1126d1cb8);
    uVar4 = param_3;
    FUN_106c58af0(param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e81a0(ppuVar7);
    _objc_release(uVar4);
    func_0x00010c1697a0(ppuVar7);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126ae988;
    _objc_alloc(PTR_PTR_1126ae988);
    _objc_opt_class(PTR_PTR_1126d1cc0);
    func_0x00010c0199c0(puVar5);
    uVar4 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf63640(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(uVar4);
    _objc_release(puVar1);
    _objc_release(ppuVar6);
    _objc_release(uVar4);
    puVar1 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c66678; end: 106c6668b;  */

void FUN_106c66678(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106c6668c; end: 106c666d3; -[SCPlusStoreKitSubscriptionTransactionProcessor .cxx_destruct] */

void FUN_106c6668c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c666d4; end: 106c666eb;  */

void FUN_106c666d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c666ec; end: 106c66723;  */

void FUN_106c666ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c66724; end: 106c671cb;  */

void FUN_106c66724(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined4 uStack_d4;
  long lStack_d0;
  int iStack_c4;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_94;
  ulong uStack_90;
  int iStack_84;
  ulong auStack_80 [2];
  
  _objc_retain();
  lVar12 = param_1;
  func_0x00010c08fa60();
  if (lVar12 != 0) {
    plVar3 = (long *)&UNK_110c7bc38;
    func_0x0001001e73a4();
    lVar12 = param_1;
    _objc_retainAutorelease(param_1);
    func_0x00010bf25f00();
    lVar14 = param_1;
    func_0x00010c08fa60(param_1);
    func_0x0001001f16f8(plVar3,lVar12,lVar14);
    plVar4 = plVar3;
    func_0x00010ae4702c(plVar3,0);
    func_0x0001004d2e54(plVar3);
    if (plVar4 != (long *)0x0) {
      lVar12 = plVar4[1];
      if (lVar12 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        lVar14 = *plVar4;
        auStack_80[0] = auStack_80[0] & 0xffffffff00000000;
        lStack_f0 = 0;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        plVar3 = &lStack_b0;
        lStack_b0 = lVar14;
        func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,lVar12);
        puVar11 = (undefined *)0x0;
        if (((int)plVar3 == 0x20) && ((int)auStack_80[0] == 0x10)) {
          lVar14 = lVar14 + lVar12;
          plVar3 = &lStack_b0;
          func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,lVar14 - lStack_b0);
          puVar11 = (undefined *)0x0;
          if (((int)plVar3 == 0) && ((int)auStack_80[0] == 6)) {
            lStack_b0 = lStack_b0 + lStack_f0;
            plVar3 = &lStack_b0;
            func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,lVar14 - lStack_b0);
            puVar11 = (undefined *)0x0;
            if (((int)plVar3 == 0x20) && ((int)uStack_90 == 0x80)) {
              plVar3 = &lStack_b0;
              func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,lVar14 - lStack_b0);
              puVar11 = (undefined *)0x0;
              if (((int)plVar3 == 0x20) && ((int)auStack_80[0] == 0x10)) {
                plVar3 = &lStack_b0;
                func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,lVar14 - lStack_b0);
                puVar11 = (undefined *)0x0;
                if (((int)plVar3 == 0) && ((int)auStack_80[0] == 2)) {
                  lStack_b0 = lStack_b0 + lStack_f0;
                  plVar3 = &lStack_b0;
                  func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,lVar14 - lStack_b0);
                  puVar11 = (undefined *)0x0;
                  if (((int)plVar3 == 0x20) && ((int)auStack_80[0] == 0x11)) {
                    lStack_b0 = lStack_b0 + lStack_f0;
                    plVar3 = &lStack_b0;
                    func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,lVar14 - lStack_b0);
                    puVar11 = (undefined *)0x0;
                    if (((int)plVar3 == 0x20) && ((int)auStack_80[0] == 0x10)) {
                      plVar3 = &lStack_b0;
                      func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,lVar14 - lStack_b0
                                         );
                      puVar11 = (undefined *)0x0;
                      if (((int)plVar3 == 0) && ((int)auStack_80[0] == 6)) {
                        lStack_b0 = lStack_b0 + lStack_f0;
                        plVar3 = &lStack_b0;
                        func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,
                                            lVar14 - lStack_b0);
                        puVar11 = (undefined *)0x0;
                        if (((int)plVar3 == 0x20) && ((int)uStack_90 == 0x80)) {
                          plVar3 = &lStack_b0;
                          func_0x0001004cd8d4(plVar3,&lStack_f0,auStack_80,&uStack_90,
                                              lVar14 - lStack_b0);
                          puVar11 = (undefined *)0x0;
                          if (((int)plVar3 == 0) && ((int)auStack_80[0] == 4)) {
                            puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
                            func_0x00010bf64a00();
                            _objc_retainAutoreleasedReturnValue();
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
      func_0x00010ae46f18(plVar4);
      puVar15 = puVar11;
      func_0x00010c08fa60();
      if (puVar15 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar11);
        puVar15 = puVar11;
        func_0x00010c08fa60();
        if (puVar15 == (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar5 = puVar11;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar15 = puVar11;
          puStack_c0 = puVar5;
          func_0x00010c08fa60();
          puVar5 = puVar5 + (long)puVar15;
          iStack_c4 = 0;
          lStack_d0 = 0;
          uStack_d4 = 0;
          ppuVar6 = &puStack_c0;
          func_0x0001004cd8d4(ppuVar6,&lStack_d0,&iStack_c4,&uStack_d4,
                              (long)puVar5 - (long)puStack_c0);
          puVar15 = (undefined *)0x0;
          if (((int)ppuVar6 == 0x20) && (iStack_c4 == 0x11)) {
            puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            if (puStack_c0 < puVar5) {
              puStack_100 = (undefined *)0x0;
              do {
                ppuVar6 = &puStack_c0;
                FUN_106c672bc(ppuVar6,&lStack_f0,(long)puVar5 - (long)puStack_c0);
                uVar1 = uStack_e0;
                lVar12 = lStack_f0;
                if (((ulong)ppuVar6 & 1) == 0) {
LAB_106c67078:
                  puVar15 = (undefined *)0x0;
                  goto LAB_106c67088;
                }
                uStack_f8 = uStack_e0;
                if (lStack_e8 == 0x11) {
                  auStack_80[0] = uStack_e0;
                  iStack_84 = 0;
                  uStack_90 = 0;
                  uStack_94 = 0;
                  puVar8 = auStack_80;
                  func_0x0001004cd8d4(puVar8,&uStack_90,&iStack_84,&uStack_94,lStack_f0);
                  if ((int)puVar8 == 0x20 && iStack_84 == 0x11) {
                    puVar15 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
                    _objc_alloc_init();
                    func_0x00010c189b60();
                    puVar13 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
                    func_0x00010c26fd80(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c215860(puVar15);
                    uVar1 = uVar1 + lVar12;
                    _objc_release(puVar13);
                    if (auStack_80[0] < uVar1) {
                      puVar16 = (undefined *)0x0;
                      puVar17 = (undefined *)0x0;
                      puVar10 = (undefined *)0x0;
                      do {
                        puVar8 = auStack_80;
                        FUN_106c672bc(puVar8,&lStack_b0,uVar1 - auStack_80[0]);
                        if (((ulong)puVar8 & 1) == 0) goto LAB_106c66fdc;
                        lStack_b8 = lStack_a0;
                        puVar13 = puVar10;
                        puVar9 = puVar15;
                        if (lStack_a8 < 0x6a9) {
                          if (lStack_a8 == 0x6a6) {
                            plVar3 = &lStack_b8;
                            func_0x0001004cd8d4(plVar3,&uStack_90,&iStack_84,&uStack_94,lStack_b0);
                            uVar2 = uStack_90;
                            if (((int)plVar3 != 0) || (iStack_84 != 0xc)) goto LAB_106c66fdc;
                            puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            _objc_alloc();
                            func_0x00010bffa180();
                            lStack_b8 = lStack_b8 + uVar2;
                            _objc_release(puVar10);
                          }
                          else if (lStack_a8 == 0x6a7) {
                            plVar3 = &lStack_b8;
                            func_0x0001004cd8d4(plVar3,&uStack_90,&iStack_84,&uStack_94,lStack_b0);
                            uVar2 = uStack_90;
                            if (((int)plVar3 != 0) || (iStack_84 != 0xc)) goto LAB_106c66fdc;
                            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
                            func_0x00010bffa180();
                            lStack_b8 = lStack_b8 + uVar2;
                            _objc_release(puVar16);
                            puVar16 = puVar10;
                          }
                          else if (lStack_a8 == 0x6a8) {
                            plVar3 = &lStack_b8;
                            func_0x0001004cd8d4(plVar3,&uStack_90,&iStack_84,&uStack_94,lStack_b0);
                            uVar2 = uStack_90;
                            if (((int)plVar3 == 0) && (iStack_84 == 0x16)) {
                              puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                              _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
                              func_0x00010bffa180();
                              lStack_b8 = lStack_b8 + uVar2;
                              func_0x00010bf65160(puVar15);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c26f320();
                              goto LAB_106c66d8c;
                            }
LAB_106c66fdc:
                            puVar13 = (undefined *)0x0;
                            goto LAB_106c66fec;
                          }
                        }
                        else if (lStack_a8 < 0x6b1) {
                          if (lStack_a8 == 0x6a9) {
                            plVar3 = &lStack_b8;
                            func_0x0001004cd8d4(plVar3,&uStack_90,&iStack_84,&uStack_94,lStack_b0);
                            uVar2 = uStack_90;
                            if (((int)plVar3 != 0) || (iStack_84 != 0xc)) goto LAB_106c66fdc;
                            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
                            func_0x00010bffa180();
                            lStack_b8 = lStack_b8 + uVar2;
                            _objc_release(puVar17);
                            puVar17 = puVar10;
                          }
                          else if (lStack_a8 == 0x6ac) {
                            plVar3 = &lStack_b8;
                            func_0x0001004cd8d4(plVar3,&uStack_90,&iStack_84,&uStack_94,lStack_b0);
                            uVar2 = uStack_90;
                            if (((int)plVar3 != 0) || (iStack_84 != 0x16)) goto LAB_106c66fdc;
                            puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                            _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
                            func_0x00010bffa180();
                            lStack_b8 = lStack_b8 + uVar2;
                            func_0x00010bf65160(puVar15);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c26f320();
LAB_106c66d8c:
                            _objc_release(puVar9);
                            _objc_release(puVar10);
                          }
                        }
                        else if (lStack_a8 == 0x6b1) {
                          plVar3 = &lStack_b8;
                          func_0x0001004cd8d4(plVar3,&uStack_90,&iStack_84,&uStack_94,lStack_b0);
                          if (((int)plVar3 != 0) || (iStack_84 != 2)) goto LAB_106c66fdc;
                          FUN_106c673ec(&lStack_b8,uStack_90);
                        }
                        else if (lStack_a8 == 0x6b7) {
                          plVar3 = &lStack_b8;
                          func_0x0001004cd8d4(plVar3,&uStack_90,&iStack_84,&uStack_94,lStack_b0);
                          if (((int)plVar3 != 0) || (iStack_84 != 2)) goto LAB_106c66fdc;
                          FUN_106c673ec(&lStack_b8,uStack_90);
                        }
                        puVar10 = puVar13;
                      } while (auStack_80[0] < uVar1);
                    }
                    else {
                      puVar17 = (undefined *)0x0;
                      puVar16 = (undefined *)0x0;
                      puVar13 = (undefined *)0x0;
                    }
                    puVar9 = puVar13;
                    func_0x00010c08fa60();
                    puVar10 = puVar13;
                    if (puVar9 == (undefined *)0x0) {
                      puVar13 = (undefined *)0x0;
                    }
                    else {
                      puVar13 = PTR_PTR_1126d1cd0;
                      _objc_alloc();
                      func_0x00010c03a900();
                    }
LAB_106c66fec:
                    _objc_release(puVar15);
                    _objc_release(puVar17);
                    _objc_release(puVar16);
                    _objc_release(puVar10);
                    if (puVar13 != (undefined *)0x0) {
                      func_0x00010befa120(puVar7);
                    }
                  }
                  else {
                    puVar13 = (undefined *)0x0;
                  }
LAB_106c6701c:
                  _objc_release(puVar13);
                }
                else if (lStack_e8 == 2) {
                  puVar8 = &uStack_f8;
                  func_0x0001004cd8d4(puVar8,&lStack_d0,&iStack_c4,&uStack_d4,lStack_f0);
                  lVar12 = lStack_d0;
                  if (((int)puVar8 != 0) || (iStack_c4 != 0xc)) goto LAB_106c67078;
                  puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  _objc_alloc();
                  uVar1 = uStack_f8;
                  func_0x00010bffa180();
                  uStack_f8 = uVar1 + lVar12;
                  puVar13 = puStack_100;
                  puStack_100 = puVar15;
                  goto LAB_106c6701c;
                }
              } while (puStack_c0 < puVar5);
            }
            else {
              puStack_100 = (undefined *)0x0;
            }
            puVar15 = puStack_100;
            func_0x00010c08fa60();
            if (puVar15 == (undefined *)0x0) {
              puVar15 = (undefined *)0x0;
            }
            else {
              puVar15 = PTR_PTR_1126d1cc8;
              _objc_alloc(PTR_PTR_1126d1cc8);
              func_0x00010bff9ae0();
            }
LAB_106c67088:
            _objc_release(puVar7);
            _objc_release(puStack_100);
          }
        }
        _objc_release(puVar11);
      }
      _objc_release(puVar11);
      goto LAB_106c670a8;
    }
  }
  puVar15 = (undefined *)0x0;
LAB_106c670a8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106c671cc; end: 106c6723b;  */

void FUN_106c671cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf063a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c6723c; end: 106c672bb;  */

void FUN_106c6723c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_106c671cc();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf15da0(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_retain(lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c672bc; end: 106c673eb;  */

undefined8 FUN_106c672bc(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_44 [4];
  long lStack_40;
  int iStack_34;
  
  iStack_34 = 0;
  lStack_40 = 0;
  plVar1 = param_1;
  func_0x0001004cd8d4(param_1,&lStack_40,&iStack_34,auStack_44,param_3);
  lVar4 = lStack_40;
  if ((int)plVar1 == 0x20 && iStack_34 == 0x10) {
    lVar5 = *param_1;
    plVar1 = param_1;
    func_0x0001004cd8d4(param_1,&lStack_40,&iStack_34,auStack_44,lStack_40);
    if ((int)plVar1 == 0 && iStack_34 == 2) {
      plVar1 = param_1;
      FUN_106c673ec(param_1,lStack_40);
      plVar2 = param_1;
      func_0x0001004cd8d4(param_1,&lStack_40,&iStack_34,auStack_44,(lVar5 + lVar4) - *param_1);
      if ((int)plVar2 == 0 && iStack_34 == 2) {
        lVar3 = *param_1;
        *param_1 = lVar3 + lStack_40;
        plVar2 = param_1;
        func_0x0001004cd8d4(param_1,&lStack_40,&iStack_34,auStack_44,
                            (lVar5 + lVar4) - (lVar3 + lStack_40));
        if ((int)plVar2 != 0) {
          return 0;
        }
        if (iStack_34 != 4) {
          return 0;
        }
        *param_2 = lStack_40;
        param_2[1] = (long)plVar1;
        lVar4 = *param_1;
        param_2[2] = lVar4;
        *param_1 = lVar4 + lStack_40;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 106c673ec; end: 106c6742f;  */

undefined8 FUN_106c673ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001004cec58(0,param_1,param_2);
  uVar2 = uVar1;
  func_0x0001004d1e5c();
  func_0x00010ae1de94(uVar1);
  return uVar2;
}



/* Entry: 106c67430; end: 106c67533; -[SCPlusStoreKitReceiptTransaction initWithProductIdentifier:subscriptionTrialPeriod:introductoryPricePeriod:transactionIdentifier:originalTransactionIdentifier:purchaseDate:subscriptionExpirationDate:] */

undefined1 *
FUN_106c67430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f5f90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c67534; end: 106c67557; -[SCPlusStoreKitReceiptTransaction copyWithZone:] */

undefined8 FUN_106c67534(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c67558; end: 106c675ef; -[SCPlusStoreKitReceiptTransaction hash] */

undefined8 * FUN_106c67558(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106c676c8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106c676d4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
         && (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106c676d4;
          }
          goto LAB_106c676c8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106c676d4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106c675f0; end: 106c676ef; -[SCPlusStoreKitReceiptTransaction isEqual:] */

long FUN_106c675f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c676c8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c676d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106c676d4;
          }
          goto LAB_106c676c8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106c676d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c676f0; end: 106c676f7; -[SCPlusStoreKitReceiptTransaction productIdentifier] */

undefined8 FUN_106c676f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c676f8; end: 106c676ff; -[SCPlusStoreKitReceiptTransaction subscriptionTrialPeriod] */

undefined1 FUN_106c676f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106c67700; end: 106c67707; -[SCPlusStoreKitReceiptTransaction introductoryPricePeriod] */

undefined1 FUN_106c67700(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106c67708; end: 106c6770f; -[SCPlusStoreKitReceiptTransaction transactionIdentifier] */

undefined8 FUN_106c67708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c67710; end: 106c67717; -[SCPlusStoreKitReceiptTransaction originalTransactionIdentifier] */

undefined8 FUN_106c67710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c67718; end: 106c6771f; -[SCPlusStoreKitReceiptTransaction purchaseDate] */

undefined8 FUN_106c67718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106c67720; end: 106c67727; -[SCPlusStoreKitReceiptTransaction subscriptionExpirationDate] */

undefined8 FUN_106c67720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106c67728; end: 106c67763; -[SCPlusStoreKitReceiptTransaction .cxx_destruct] */

void FUN_106c67728(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106c67764; end: 106c6780f; -[SCPlusStoreKitReceipt initWithBundleIdentifier:transactions:] */

undefined1 *
FUN_106c67764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5f98;
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



/* Entry: 106c67810; end: 106c67833; -[SCPlusStoreKitReceipt copyWithZone:] */

undefined8 FUN_106c67810(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c67834; end: 106c678a7; -[SCPlusStoreKitReceipt hash] */

undefined8 * FUN_106c67834(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106c67928:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106c67934;
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
          goto LAB_106c67934;
        }
        goto LAB_106c67928;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106c67934:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106c678a8; end: 106c6794f; -[SCPlusStoreKitReceipt isEqual:] */

long FUN_106c678a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c67928:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c67934;
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
          goto LAB_106c67934;
        }
        goto LAB_106c67928;
      }
    }
    lVar3 = 0;
  }
LAB_106c67934:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c67950; end: 106c67957; -[SCPlusStoreKitReceipt bundleIdentifier] */

undefined8 FUN_106c67950(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c67958; end: 106c6795f; -[SCPlusStoreKitReceipt transactions] */

undefined8 FUN_106c67958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c67960; end: 106c6798f; -[SCPlusStoreKitReceipt .cxx_destruct] */

void FUN_106c67960(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c67990; end: 106c679fb; +[SCPlusStoreKitTransactionMetadata aLCWithEntityId:] */

void FUN_106c67990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1b50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c679fc; end: 106c67a93; +[SCPlusStoreKitTransactionMetadata bitmojiWithContentId:domainInfo:] */

void FUN_106c679fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d1b50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c67a94; end: 106c67aff; +[SCPlusStoreKitTransactionMetadata bulkStreakRestoreWithTraceId:] */

void FUN_106c67a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1b50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c67b00; end: 106c67b6b; +[SCPlusStoreKitTransactionMetadata dreamWithGenerationId:] */

void FUN_106c67b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1b50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c67b6c; end: 106c67bd7; +[SCPlusStoreKitTransactionMetadata giftWithRecipientUserId:] */

void FUN_106c67b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1b50;
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



/* Entry: 106c67bd8; end: 106c67c6f; +[SCPlusStoreKitTransactionMetadata streakRestoreWithConversationId:traceId:] */

void FUN_106c67bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d1b50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c67c70; end: 106c67cd3; +[SCPlusStoreKitTransactionMetadata subscriptionWithReferralToken:] */

void FUN_106c67c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1b50;
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



/* Entry: 106c67cd4; end: 106c67f7f; -[SCPlusStoreKitTransactionMetadata initWithCoder:] */

undefined8 * FUN_106c67cd4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_70 = PTR_PTR_1126f5fa0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) {
          uVar2 = unaff_x21;
          func_0x00010c0720c0();
          if ((uVar2 & 1) == 0) {
            uVar2 = unaff_x21;
            func_0x00010c0720c0();
            if ((uVar2 & 1) == 0) {
              uVar2 = unaff_x21;
              func_0x00010c0720c0();
              if ((uVar2 & 1) != 0) {
                uVar5 = 5;
                lVar6 = 0x48;
                lVar7 = 0x40;
                goto LAB_106c67dcc;
              }
              uVar2 = unaff_x21;
              func_0x00010c0720c0();
              if ((uVar2 & 1) == 0) goto LAB_106c67f0c;
              uVar5 = 6;
              lVar6 = 0x50;
            }
            else {
              uVar5 = 4;
              lVar6 = 0x38;
            }
          }
          else {
            uVar5 = 3;
            lVar6 = 0x30;
          }
        }
        else {
          uVar5 = 2;
          lVar6 = 0x28;
          lVar7 = 0x20;
LAB_106c67dcc:
          uVar2 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
          *(ulong *)((long)puVar1 + lVar7) = uVar2;
          _objc_release(uVar4);
        }
      }
      else {
        uVar5 = 1;
        lVar6 = 0x18;
      }
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_106c67f0c:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_60 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 106c67f80; end: 106c67fa3; -[SCPlusStoreKitTransactionMetadata copyWithZone:] */

undefined8 FUN_106c67f80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106c67fa4; end: 106c6810b; -[SCPlusStoreKitTransactionMetadata encodeWithCoder:] */

void FUN_106c67fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e7cd98;
      lVar2 = 0x10;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e7cdb8;
    }
    else if (lVar2 == 1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e7cdd8;
      lVar2 = 0x18;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e7cdf8;
    }
    else {
      if (lVar2 != 2) goto LAB_106c680f8;
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                          &PTR____CFConstantStringClassReference_110e7ce38);
      ppuVar3 = &PTR____CFConstantStringClassReference_110e7ce18;
      lVar2 = 0x28;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e7ce58;
    }
  }
  else if (lVar2 < 5) {
    if (lVar2 == 3) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e7ce78;
      lVar2 = 0x30;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e7ce98;
    }
    else {
      if (lVar2 != 4) goto LAB_106c680f8;
      ppuVar3 = &PTR____CFConstantStringClassReference_110e7ceb8;
      lVar2 = 0x38;
      ppuVar1 = &PTR____CFConstantStringClassReference_110e7ced8;
    }
  }
  else if (lVar2 == 5) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                        &PTR____CFConstantStringClassReference_110e7cf18);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e7cef8;
    lVar2 = 0x48;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7cf38;
  }
  else {
    if (lVar2 != 6) goto LAB_106c680f8;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e7cf58;
    lVar2 = 0x50;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e7cf78;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_106c680f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c6810c; end: 106c681d7; -[SCPlusStoreKitTransactionMetadata hash] */

void FUN_106c6810c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_1126f5fa0;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c681d8; end: 106c6821b; -[SCPlusStoreKitTransactionMetadata internalInit] */

void FUN_106c681d8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5fa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c6821c; end: 106c6837b; -[SCPlusStoreKitTransactionMetadata isEqual:] */

long FUN_106c6821c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106c68354:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106c68360;
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
                      if (lVar3 != *(long *)(param_3 + 0x50)) {
                        func_0x00010c071ae0();
                        goto LAB_106c68360;
                      }
                      goto LAB_106c68354;
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
LAB_106c68360:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106c6837c; end: 106c6850f; -[SCPlusStoreKitTransactionMetadata matchSubscription:gift:streakRestore:bulkStreakRestore:dream:bitmoji:aLC:] */

void FUN_106c6837c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 3) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_106c684c4;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if (lVar3 != 1) {
        if ((lVar3 != 2) || (param_5 == 0)) goto LAB_106c684c4;
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        pcVar4 = *(code **)(param_5 + 0x10);
        lVar3 = param_5;
        goto LAB_106c684a8;
      }
      if (param_4 == 0) goto LAB_106c684c4;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
  }
  else if (lVar3 < 5) {
    if (lVar3 == 3) {
      if (param_6 == 0) goto LAB_106c684c4;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    else {
      if ((lVar3 != 4) || (param_7 == 0)) goto LAB_106c684c4;
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      pcVar4 = *(code **)(param_7 + 0x10);
      lVar3 = param_7;
    }
  }
  else {
    if (lVar3 == 5) {
      if (param_8 == 0) goto LAB_106c684c4;
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      pcVar4 = *(code **)(param_8 + 0x10);
      lVar3 = param_8;
LAB_106c684a8:
      (*pcVar4)(lVar3,uVar1,uVar2);
      goto LAB_106c684c4;
    }
    if ((lVar3 != 6) || (param_9 == 0)) goto LAB_106c684c4;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    pcVar4 = *(code **)(param_9 + 0x10);
    lVar3 = param_9;
  }
  (*pcVar4)(lVar3,uVar1);
LAB_106c684c4:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c68510; end: 106c68593; -[SCPlusStoreKitTransactionMetadata .cxx_destruct] */

void FUN_106c68510(long param_1)

{
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



/* Entry: 106c68594; end: 106c6859b; -[SCUserInfoFetcherServices userInfoFetcher] */

undefined8 FUN_106c68594(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c6859c; end: 106c685a7; -[SCUserInfoFetcherServices .cxx_destruct] */

void FUN_106c6859c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c685a8; end: 106c6861b; -[SCGraphenePlusStorekitMetric2 init] */

undefined1 * FUN_106c685a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5fb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c6861c; end: 106c6884b;  */

char * FUN_106c6861c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11096c800,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  pcStack_a8 = FUN_106c6884c;
  puStack_c8 = PTR_PTR_1126f5fb8;
  pcStack_d0 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    pcVar1 = (char *)ppcVar2;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar2 + 8) = pcVar1;
  }
  return (char *)ppcVar2;
}



/* Entry: 106c6884c; end: 106c688bf; -[SCGraphenePlusSyncMetric2 init] */

undefined1 * FUN_106c6884c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5fb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106c688c0; end: 106c68a33;  */

void FUN_106c688c0(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096c870,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar8;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar8;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar9 = puVar7;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
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
    pcVar5 = "";
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096c8c0,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar9 = (undefined1 *)puVar8;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar9 = (undefined1 *)puVar8;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar10 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11096c910,&uStack_180,puVar9);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume(pcVar1);
  puVar3 = PTR_PTR_1126b3408;
  _objc_retain();
  _objc_alloc(puVar3);
  pcVar2 = pcVar1;
  func_0x00010c247a20(pcVar1);
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aae0(puVar3);
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c247a00(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(puVar3);
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c247d20(pcVar1);
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207200(puVar3);
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c247800(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206ea0(puVar3);
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c247760(pcVar1);
  func_0x00010bb06fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206e60(puVar3);
  _objc_release(pcVar2);
  puVar4 = PTR_PTR_1126d1cd8;
  _objc_alloc_init(PTR_PTR_1126d1cd8);
  pcVar2 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2;
  func_0x00010bf33480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a100(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2;
  func_0x00010c11fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e74c0(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2;
  func_0x00010c084960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b61c0(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar2);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcVar2 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c073680();
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1220(puVar4);
  _objc_release(puVar6);
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2;
  func_0x00010bfb75a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f820(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c096ca0(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcca0(puVar4);
  _objc_release(pcVar1);
  _objc_release(pcVar2);
  func_0x00010c1bb420(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c68a34; end: 106c68ba7;  */

void FUN_106c68a34(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11096c8c0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar8;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar8;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
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
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11096c910,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume(pcVar2);
  puVar3 = PTR_PTR_1126b3408;
  _objc_retain();
  _objc_alloc(puVar3);
  pcVar1 = pcVar2;
  func_0x00010c247a20(pcVar2);
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aae0(puVar3);
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c247a00(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(puVar3);
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c247d20(pcVar2);
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207200(puVar3);
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c247800(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206ea0(puVar3);
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c247760(pcVar2);
  func_0x00010bb06fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206e60(puVar3);
  _objc_release(pcVar1);
  puVar4 = PTR_PTR_1126d1cd8;
  _objc_alloc_init(PTR_PTR_1126d1cd8);
  pcVar1 = pcVar2;
  func_0x00010c091e80(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar1;
  func_0x00010bf33480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a100(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c091e80(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar1;
  func_0x00010c11fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e74c0(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c091e80(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar1;
  func_0x00010c084960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b61c0(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcVar1 = pcVar2;
  func_0x00010c091e80(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c073680();
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1220(puVar4);
  _objc_release(puVar6);
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c091e80(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar1;
  func_0x00010bfb75a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f820(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c091e80(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar1;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar1 = pcVar2;
  func_0x00010c091e80(pcVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar2);
  pcVar2 = pcVar1;
  func_0x00010c096ca0(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcca0(puVar4);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  func_0x00010c1bb420(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c68ba8; end: 106c68d1b;  */

void FUN_106c68ba8(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096c910,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  puVar2 = PTR_PTR_1126b3408;
  _objc_retain();
  _objc_alloc(puVar2);
  pcVar3 = pcVar1;
  func_0x00010c247a20(pcVar1);
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aae0(puVar2);
  _objc_release(pcVar3);
  pcVar3 = pcVar1;
  func_0x00010c247a00(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(puVar2);
  _objc_release(pcVar3);
  pcVar3 = pcVar1;
  func_0x00010c247d20(pcVar1);
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207200(puVar2);
  _objc_release(pcVar3);
  pcVar3 = pcVar1;
  func_0x00010c247800(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206ea0(puVar2);
  _objc_release(pcVar3);
  pcVar3 = pcVar1;
  func_0x00010c247760(pcVar1);
  func_0x00010bb06fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206e60(puVar2);
  _objc_release(pcVar3);
  puVar4 = PTR_PTR_1126d1cd8;
  _objc_alloc_init(PTR_PTR_1126d1cd8);
  pcVar3 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar3;
  func_0x00010bf33480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a100(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar3);
  pcVar3 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar3;
  func_0x00010c11fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e74c0(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar3);
  pcVar3 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar3;
  func_0x00010c084960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b61c0(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar3);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcVar3 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c073680();
  func_0x00010c0df6e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1220(puVar4);
  _objc_release(puVar6);
  _objc_release(pcVar3);
  pcVar3 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar3;
  func_0x00010bfb75a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f820(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar3);
  pcVar3 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar3;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar4);
  _objc_release(pcVar5);
  _objc_release(pcVar3);
  pcVar3 = pcVar1;
  func_0x00010c091e80(pcVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar1);
  pcVar1 = pcVar3;
  func_0x00010c096ca0(pcVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcca0(puVar4);
  _objc_release(pcVar1);
  _objc_release(pcVar3);
  func_0x00010c1bb420(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c68d1c; end: 106c6903f;  */

void FUN_106c68d1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b3408;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c247a20(param_1);
  func_0x00010bc9107c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aae0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c247a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c247d20(param_1);
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c207200(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c247800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206ea0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c247760(param_1);
  func_0x00010bb06fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206e60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d1cd8;
  _objc_alloc_init(PTR_PTR_1126d1cd8);
  uVar2 = param_1;
  func_0x00010c091e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf33480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a100(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c091e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c11fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e74c0(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c091e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c084960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b61c0(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010c091e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c073680();
  func_0x00010c0df6e0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1220(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c091e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfb75a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f820(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c091e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c091e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar2;
  func_0x00010c096ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcca0(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c1bb420(puVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c69040; end: 106c69173;  */

void FUN_106c69040(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c252440();
  _objc_release(param_1);
  if (lVar1 < 1) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c0e0460(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126d1ce0;
    _objc_alloc(PTR_PTR_1126d1ce0);
    uVar2 = uVar3;
    func_0x00010c272120(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    func_0x00010c04be00(puVar4);
    _objc_release(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c69174; end: 106c6917b;  */

void FUN_106c69174(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_106c6a704;
  uStack_30 = 0x106c6a714;
  uStack_28 = 0;
  func_0x00010c0bef60(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c6917c; end: 106c69273;  */

void FUN_106c6917c(undefined8 param_1)

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
  pcStack_38 = FUN_106c6a704;
  uStack_30 = 0x106c6a714;
  uStack_28 = 0;
  func_0x00010c0bef60(param_1);
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



/* Entry: 106c69274; end: 106c6927b;  */

void FUN_106c69274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_clear_1125ac340);
  return;
}



/* Entry: 106c6927c; end: 106c6a59f;  */

void FUN_106c6927c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d1ce8;
  _objc_opt_new(PTR_PTR_1126d1ce8);
  lVar2 = param_1;
  func_0x00010bf05280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf05280(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168a40(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf150c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16eb00(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf3e040(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d6a0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0fbf20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dba00(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c25ae60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d940(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c105520(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c105520(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df4c0(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf9ae40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198060(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c113de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e33c0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf619c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188620(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0d4bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dd20(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf611c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf611c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188240(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf37b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf37b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17bfc0(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_retain(param_1);
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010bfcc9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfcc9e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126d1d00;
    _objc_alloc(PTR_PTR_1126d1d00);
    _objc_retain(param_1);
    func_0x00010c017bc0(puVar5);
    puVar12 = PTR_PTR_1126d1d08;
    _objc_alloc(PTR_PTR_1126d1d08);
    func_0x00010bff6800();
    lVar2 = param_1;
    func_0x00010bfcc9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bfcca40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    FUN_106c69040(lVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bf20(puVar12);
    _objc_release(lVar6);
    _objc_release(uVar3);
    _objc_release(lVar2);
    uVar3 = param_2;
    func_0x00010c281f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21bf40(puVar12);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(puVar5);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(param_2);
  _objc_release(param_1);
  func_0x00010c1a3b20(puVar1);
  _objc_release(puVar12);
  lVar2 = param_1;
  func_0x00010c2591a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20cb20(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0cae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6c60(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0caea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6c80(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0b8740(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0b8740(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1e20(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c131420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ead80(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfb7540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f780(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf9dae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1991c0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0cb100(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6de0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf6a640(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b220(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010befec60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166740(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf61320(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188340(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c25c140(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e400(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0f6f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0f6f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9fe0(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010befea80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166580(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar3 = param_2;
  func_0x00010bfa0880();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar7 = uVar3;
  func_0x00010c0e0460(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar12 = PTR_PTR_1126d1ce0;
  _objc_alloc(PTR_PTR_1126d1ce0);
  uVar7 = uVar8;
  func_0x00010c272120(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  func_0x00010c04be00(puVar12);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar8);
  func_0x00010c19a2c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010c245da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206480(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf9ae00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c198040(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c25b680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dd40(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar4 = param_1;
  func_0x00010c0fa8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1daea0(puVar1);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c25ba00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e060(puVar1);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010beff0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1668e0(puVar1);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar2 = param_1;
  func_0x00010c098fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bda20(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar4 = param_1;
  func_0x00010bf61b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188780(puVar1);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010befeaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010befeaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  FUN_106c69040(lVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1665e0(puVar1);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c10acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c10acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  FUN_106c69040(lVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0e80(puVar1);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c131600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c131600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  FUN_106c69040(lVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eae00(puVar1);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar4);
  lVar2 = param_1;
  func_0x00010c0b9200(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2180(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfb8980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfb8980(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0000(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar4 = param_1;
  func_0x00010c067cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c067cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  FUN_106c69040(lVar4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1adc00(puVar1);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(lVar4);
  lVar6 = param_1;
  func_0x00010c2421c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2421e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c242240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  _objc_retain(uVar3);
  puVar5 = puVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar12 = (undefined *)0x0;
  if (puVar5 != (undefined *)0x0) {
    lVar13 = 0;
    do {
      puVar12 = (undefined *)0x0;
      lVar14 = lVar13;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar9);
        }
        lVar10 = *(long *)((long)puVar12 * 8);
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar10;
        func_0x00010c252440();
        _objc_release(lVar10);
        if (lVar13 <= lVar14) {
          lVar13 = lVar14;
        }
        puVar12 = puVar12 + 1;
        lVar14 = lVar13;
      } while (puVar5 != puVar12);
      puVar5 = puVar9;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
    if (lVar13 < 1) {
      puVar12 = (undefined *)0x0;
    }
    else {
      uVar7 = uVar3;
      func_0x00010c0e0460(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar12 = PTR_PTR_1126d1ce0;
      _objc_alloc(PTR_PTR_1126d1ce0);
      uVar7 = uVar8;
      func_0x00010c272120(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar3);
      func_0x00010c04be00(puVar12);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar8);
    }
  }
  _objc_release(uVar3);
  _objc_release(puVar9);
  func_0x00010c204ec0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar3);
  _objc_release(puVar9);
  _objc_release(lVar4);
  _objc_release(lVar6);
  lVar2 = param_1;
  func_0x00010bf21c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf21c00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174160(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf41a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf41a20(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c69040(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ed00(puVar1);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c129660(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17bfa0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0c9ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6600(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c129a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166800(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfbe700(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166600(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf03780(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  FUN_106c6a5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167f60(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252440();
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c6a5a0; end: 106c6a5fb;  */

void FUN_106c6a5a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c252440();
  func_0x00010c0df760(puVar2,param_2,lVar1 != 0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c6a5fc; end: 106c6a703;  */

void FUN_106c6a5fc(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  puVar1 = PTR_PTR_1126d1cf0;
  _objc_retain();
  _objc_alloc(puVar1);
  lVar2 = param_2;
  func_0x00010c080120(param_2);
  func_0x00010c260980(param_2);
  dVar9 = param_1 * 1000.0;
  func_0x00010c2607a0(param_2);
  lVar3 = param_2;
  func_0x00010c252d60(param_2);
  lVar4 = param_2;
  func_0x00010c119b40(param_2);
  lVar5 = param_2;
  func_0x00010c080140(param_2);
  lVar6 = param_2;
  func_0x00010bfa08a0(param_2);
  lVar7 = param_2;
  func_0x00010c260a00(param_2);
  lVar8 = param_2;
  func_0x00010c080180(param_2);
  _objc_release(param_2);
  func_0x00010c01f860(dVar9,param_1 * 1000.0,(double)lVar3,(double)lVar4,puVar1,param_3,lVar2,lVar5,
                      lVar6,lVar7 == 3,lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c6a704; end: 106c6a71b;  */

void FUN_106c6a704(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c6a71c; end: 106c6a7ab;  */

void FUN_106c6a71c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d1cf8;
  _objc_alloc();
  func_0x00010c046380();
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1891c0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28),param_3,
                      puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c6a7ac; end: 106c6a883;  */

void FUN_106c6a7ac(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d1cf8;
  _objc_alloc();
  func_0x00010c046380();
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7980(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28),param_4,
                      puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1891c0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28),param_4,
                      puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c6a884; end: 106c6a94b;  */

void FUN_106c6a884(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106c6a94c;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_38 = param_2;
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(uVar1);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106c6a94c; end: 106c6a99f;  */

void FUN_106c6a94c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bfcca20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106c6a9a0; end: 106c6a9bf;  */

void FUN_106c6a9a0(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_106c6a704;
  uStack_30 = 0x106c6a714;
  uStack_28 = 0;
  func_0x00010c0bef60(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c6a9c0; end: 106c6ab5f;  */

void FUN_106c6a9c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c19ed20();
  func_0x00010c1d02e0(puVar1);
  func_0x00010c186ec0(puVar1);
  _objc_release(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((double)param_1 / 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c6ab60; end: 106c6ac4b;  */

void FUN_106c6ab60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c71d0;
  _objc_retain();
  _objc_alloc(puVar1);
  lVar2 = param_1;
  func_0x00010c0cd460(param_1);
  lVar3 = param_1;
  func_0x00010bf5de80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf5de80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000106c6aa80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c09e220(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c02bf60((double)lVar2,puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c6ac4c; end: 106c6adc3;  */

void FUN_106c6ac4c(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010bf813e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar2);
        }
        puVar14 = *(undefined **)(uVar15 * 8);
        puVar4 = puVar14;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        if (((ulong)puVar5 & 1) != 0) {
          _objc_retain(puVar14);
          goto LAB_106c6ad64;
        }
        uVar15 = uVar15 + 1;
      } while (uVar3 != uVar15);
      uVar3 = uVar2;
      func_0x00010bf52a60();
    }
    puVar14 = (undefined *)0x0;
LAB_106c6ad64:
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_retain();
    if (param_1 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar3 = param_1;
      func_0x00010c2608a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      FUN_106c6afc8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (uVar2 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR_PTR_1126c71d0;
        _objc_alloc(PTR_PTR_1126c71d0);
        uVar3 = param_1;
        func_0x00010c112a80();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar3;
        func_0x00010c0cd460();
        uVar6 = param_1;
        func_0x00010c112a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf5de80();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_1;
        func_0x00010c112a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf5de80();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x000106c6aa80();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_1;
        func_0x00010c112a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c09e220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02bf60((double)(long)uVar15,puVar4);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar3);
        puVar14 = PTR_PTR_1126d1d10;
        _objc_alloc(PTR_PTR_1126d1d10);
        func_0x00010c0f6960();
        uVar3 = param_1;
        func_0x00010c0df100(param_1);
        func_0x00010c0347e0((double)uVar3,puVar14);
        _objc_release(puVar4);
      }
      _objc_release(uVar2);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106c6adc4; end: 106c6afc7;  */

void FUN_106c6adc4(ulong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c2608a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_106c6afc8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126c71d0;
      _objc_alloc(PTR_PTR_1126c71d0);
      uVar2 = param_1;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0cd460();
      uVar6 = param_1;
      func_0x00010c112a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf5de80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      func_0x00010c112a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf5de80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x000106c6aa80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = param_1;
      func_0x00010c112a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c09e220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02bf60((double)(long)uVar5,puVar4,param_2,uVar7,uVar10,uVar12);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar2);
      puVar13 = PTR_PTR_1126d1d10;
      _objc_alloc(PTR_PTR_1126d1d10);
      uVar2 = param_1;
      func_0x00010c0f6960();
      uVar1 = 2;
      if (uVar2 != 2) {
        uVar1 = uVar2 == 1;
      }
      uVar2 = param_1;
      func_0x00010c0df100(param_1);
      func_0x00010c0347e0((double)uVar2,puVar13,param_2,uVar1,uVar3,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106c6afc8; end: 106c6b047;  */

void FUN_106c6afc8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126b34c0;
  if (param_1 != 0) {
    _objc_retain();
    _objc_alloc(puVar2);
    uVar3 = param_1;
    func_0x00010c0df580(param_1);
    uVar4 = param_1;
    func_0x00010c2807a0();
    _objc_release(param_1);
    iVar1 = 0;
    if (uVar4 - 1 < 3) {
      iVar1 = (int)(uVar4 - 1) + 1;
    }
    func_0x00010c030620((double)uVar3,puVar2,param_2,iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c6b048; end: 106c6b06b;  */

undefined4 FUN_106c6b048(long param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined4 *)(&UNK_10dde9ffc + (param_1 - 1U) * 4);
  }
  return 2;
}



/* Entry: 106c6b06c; end: 106c6b08f;  */

undefined4 FUN_106c6b06c(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    func_0x00010c0705e0();
    uVar1 = 1;
    if ((int)param_1 != 0) {
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 106c6b090; end: 106c6b25b;  */

void FUN_106c6b090(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0e1a00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    puVar7 = (undefined *)0x0;
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c086840();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      puVar7 = (undefined *)0x0;
      if (lVar2 != 0) {
        lVar1 = param_1;
        func_0x00010c23c2c0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c08fa60();
        _objc_release(lVar1);
        puVar7 = (undefined *)0x0;
        if (lVar2 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc();
          lVar1 = param_1;
          func_0x00010c0db0e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c057ea0(puVar3,param_2,lVar1);
          _objc_release(lVar1);
          if (puVar3 == (undefined *)0x0) {
            puVar7 = (undefined *)0x0;
          }
          else {
            puVar7 = PTR_PTR_1126d1d18;
            _objc_alloc(PTR_PTR_1126d1d18);
            lVar1 = param_1;
            func_0x00010c0e1a00(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = param_1;
            func_0x00010c086840(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_1;
            func_0x00010c23c2c0(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            lVar5 = param_1;
            func_0x00010c270a80(param_1);
            func_0x00010c0df7c0(puVar6,param_2,lVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c031000(puVar7,param_2,lVar1,lVar2,puVar3,lVar4,puVar6);
            _objc_release(puVar6);
            _objc_release(lVar4);
            _objc_release(lVar2);
            _objc_release(lVar1);
          }
          _objc_release(puVar3);
        }
      }
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c6b25c; end: 106c6b62b;  */

void FUN_106c6b25c(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d1d20;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c112a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cd460();
  uVar12 = param_1;
  func_0x00010c112a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf5de80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c112a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02bf80();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar12);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2608a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c2608a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    FUN_106c6b62c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c06f2a0();
  uVar3 = uVar12;
  if ((int)uVar2 != 0) {
    uVar3 = param_2;
    func_0x00010bf498c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
  }
  uVar2 = param_1;
  func_0x00010bf813e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfda7c0();
  if ((uVar4 & 1) == 0) {
    func_0x00010bfda7c0();
  }
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126d1d28;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010c115ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c09e900();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c069aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_106c6b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f2a0();
  uVar9 = param_1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bb00();
  func_0x00010bf018e0();
  uVar10 = param_1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bb00();
  func_0x00010bfa0840();
  uVar11 = param_2;
  func_0x00010c124f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a8a0();
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


