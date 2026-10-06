/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055a5a2c; end: 1055a5a7f; -[SCFriendingContactSyncLogger logContactSyncSnapchattersReceived:] */

void FUN_1055a5a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb3b0;
  func_0x00010c244d40(PTR_PTR_1126bb3b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055a5a80; end: 1055a5ad3; -[SCFriendingContactSyncLogger logContactSyncContactsNotProcessed:] */

void FUN_1055a5a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb3b0;
  func_0x00010bf4aa20(PTR_PTR_1126bb3b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055a5ad4; end: 1055a5b27; -[SCFriendingContactSyncLogger logContactWithSavedDates:] */

void FUN_1055a5ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb3b0;
  func_0x00010bf4aae0(PTR_PTR_1126bb3b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055a5b28; end: 1055a5b7b; -[SCFriendingContactSyncLogger logContactWithEmails:] */

void FUN_1055a5b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb3b0;
  func_0x00010bf4ab00(PTR_PTR_1126bb3b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055a5b7c; end: 1055a5bcf; -[SCFriendingContactSyncLogger logContactWithPhotos:] */

void FUN_1055a5b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb3b0;
  func_0x00010bf4ab20(PTR_PTR_1126bb3b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055a5bd0; end: 1055a5bdb; -[SCFriendingContactSyncLogger .cxx_destruct] */

void FUN_1055a5bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055a5bdc; end: 1055a5c1b;  */

void FUN_1055a5bdc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055a5c1c; end: 1055a5f27; -[SCFriendingContactSyncServiceProvider _createContactSyncCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055a5c1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126bb3c0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112725f00;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112725f04;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058dc0(puVar1,param_2,lVar3,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2d54f4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar7,param_2,puVar8,0x11,0,0x17);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126bb3c8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112725f08;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0(puVar8,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126bb3d0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112725f0c;
  _objc_loadWeakRetained();
  lVar10 = lVar2;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112725f10;
  _objc_loadWeakRetained();
  lVar11 = lVar4;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112725f14;
  _objc_loadWeakRetained();
  lVar12 = lVar3;
  func_0x00010bf46520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112725f18;
  _objc_loadWeakRetained(lVar5);
  lVar13 = lVar5;
  func_0x00010c08d5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112725f1c;
  _objc_loadWeakRetained();
  lVar14 = lVar6;
  func_0x00010bf4a380();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112725f20;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d8a0(puVar9,param_2,lVar10,lVar11,lVar12,lVar13,puVar7,puVar1,puVar8,lVar14,lVar15)
  ;
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1055a5f28; end: 1055a5fbf; -[SCFriendingContactSyncServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055a5f28(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725f18);
  _objc_destroyWeak(param_1 + _DAT_112725f20);
  _objc_destroyWeak(param_1 + _DAT_112725f1c);
  _objc_destroyWeak(param_1 + _DAT_112725f08);
  _objc_destroyWeak(param_1 + _DAT_112725f0c);
  _objc_destroyWeak(param_1 + _DAT_112725f04);
  _objc_destroyWeak(param_1 + _DAT_112725f00);
  _objc_destroyWeak(param_1 + _DAT_112725f14);
  _objc_destroyWeak(param_1 + _DAT_112725f10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725f24);
  return;
}



/* Entry: 1055a5fc0; end: 1055a614f; -[SCFriendingContactSyncGRPCSender initWithUnifiedGRPCClientFactory:performerProvider:] */

undefined1 *
FUN_1055a5fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126e91a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bfcd0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf56360(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126bb3d8;
    _objc_alloc();
    func_0x00010c058f80();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar5;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055a6150; end: 1055a624f; -[SCFriendingContactSyncGRPCSender sendContactSyncRequestWithPhoneContacts:completionQueue:completionBlock:] */

void FUN_1055a6150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_1055a934c(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bdd8d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1055a6250;
  puStack_58 = &UNK_110899ec0;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bfbbd60(uVar1,param_2,param_3,param_1,&puStack_70);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055a6250; end: 1055a632b;  */

void FUN_1055a6250(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1055a632c;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = param_2;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010007380c(lVar1,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1055a632c; end: 1055a6353;  */

void FUN_1055a632c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055a6344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(long *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001055a6350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055a6354; end: 1055a635f; -[SCFriendingContactSyncGRPCSender _callOptionBuilder] */

void FUN_1055a6354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae748,PTR_s_builder_1125a6bb0);
  return;
}



/* Entry: 1055a6360; end: 1055a636b; -[SCFriendingContactSyncGRPCSender .cxx_destruct] */

void FUN_1055a6360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055a636c; end: 1055a6397; +[SCGrapheneContactSyncMetric requestTrigger] */

void FUN_1055a636c(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a6398; end: 1055a63c3; +[SCGrapheneContactSyncMetric requestSuccess] */

void FUN_1055a6398(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a63c4; end: 1055a63ef; +[SCGrapheneContactSyncMetric requestFailure] */

void FUN_1055a63c4(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a63f0; end: 1055a641b; +[SCGrapheneContactSyncMetric severLatency] */

void FUN_1055a63f0(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a641c; end: 1055a6447; +[SCGrapheneContactSyncMetric contactFetchLatency] */

void FUN_1055a641c(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a6448; end: 1055a6473; +[SCGrapheneContactSyncMetric databaseLatency] */

void FUN_1055a6448(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a6474; end: 1055a649f; +[SCGrapheneContactSyncMetric contactBookSize] */

void FUN_1055a6474(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a64a0; end: 1055a64cb; +[SCGrapheneContactSyncMetric snapchattersReceived] */

void FUN_1055a64a0(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a64cc; end: 1055a64f7; +[SCGrapheneContactSyncMetric contactsNotProcessed] */

void FUN_1055a64cc(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a64f8; end: 1055a6523; +[SCGrapheneContactSyncMetric contactsWithDates] */

void FUN_1055a64f8(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a6524; end: 1055a654f; +[SCGrapheneContactSyncMetric contactsWithEmails] */

void FUN_1055a6524(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a6550; end: 1055a657b; +[SCGrapheneContactSyncMetric contactsWithPhotos] */

void FUN_1055a6550(void)

{
  _objc_alloc(PTR_PTR_1126bb3b0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a657c; end: 1055a661b; -[SCGrapheneContactSyncMetric description] */

void FUN_1055a657c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110decfb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110decfb8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e91b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1055a661c; end: 1055a67cb; -[SCGrapheneRegistry contactSyncGraphene] */

void FUN_1055a661c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1055a66a4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bcbb8 != -1) {
    func_0x00010002a2fc(0x1136bcbb8,&puStack_48);
  }
  uVar1 = uRam00000001136bcbb0;
  _objc_retain(uRam00000001136bcbb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055a67cc; end: 1055a680b;  */

void FUN_1055a67cc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a680c; end: 1055a686b;  */

uint FUN_1055a680c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf49d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1055a686c; end: 1055a688b;  */

void FUN_1055a686c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf49d00(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a688c; end: 1055a68eb;  */

undefined8 FUN_1055a688c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf49d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1055a68ec; end: 1055a6ad3;  */

void FUN_1055a68ec(undefined8 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_c0;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    puVar1 = puVar2;
    if (puVar3 == (undefined *)0x0) {
      puVar1 = param_2;
      func_0x00010c0faf60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar3 = PTR_PTR_1126b84a8;
    _objc_alloc(PTR_PTR_1126b84a8);
    puVar2 = param_2;
    func_0x00010bf49d00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = param_2;
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar2;
    param_4 = unaff_x24;
    param_5 = puVar1;
    func_0x00010c0023a0(puVar3);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_2);
    __Unwind_Resume();
    lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(puVar10);
    _objc_retain(param_3);
    _objc_retain(param_4);
    puVar4 = param_3;
    func_0x00010c2449e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bf4a340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181540(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar5 = puVar4;
    func_0x000100504554(puVar4,&PTR___NSConcreteGlobalBlock_110899f10);
    puVar6 = puVar10;
    func_0x000100bf99b0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    func_0x00010050471c(param_4,&PTR___NSConcreteGlobalBlock_11089a020,
                        &PTR___NSConcreteGlobalBlock_11089a060);
    _objc_retain(puVar4);
    puVar1 = puVar4;
    func_0x00010bf52a60();
    puVar2 = puRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (puRam0000000000000000 != puVar2) {
          _objc_enumerationMutation(puVar4);
        }
        lVar15 = *(long *)((long)puVar19 * 8);
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
        lVar11 = lVar15;
        func_0x00010bf49d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar14 = puVar8;
        if (lVar11 != 0) {
          lVar11 = lVar15;
          func_0x00010bf49d00(lVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar7;
          func_0x00010c0e00e0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          puVar14 = puVar12;
          func_0x00010c0fb120(puVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar12);
        }
        FUN_1055a81a0(puVar10,lVar15,puVar6,puVar14,0);
        _objc_release(puVar14);
        puVar19 = puVar19 + 1;
      } while (puVar1 != puVar19);
      puVar1 = puVar4;
      func_0x00010bf52a60();
    }
    _objc_release(puVar4);
    FUN_1055a88b8(puVar10,puVar5,0);
    puVar1 = puVar4;
    func_0x000100504554(puVar4,&PTR___NSConcreteGlobalBlock_110899f30);
    puVar2 = param_3;
    func_0x00010c0daf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    _objc_retain(param_4);
    _objc_retain(puVar2);
    if (param_5 < (undefined *)0x2) {
      _objc_retain(param_4);
      _objc_retain(puVar1);
      puVar19 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_1055a680c;
      puStack_128 = &UNK_110899f50;
      puStack_120 = puVar19;
      _objc_retain();
      puStack_318 = param_4;
      func_0x0001006372a4(param_4,&puStack_140);
      _objc_release(puStack_120);
      _objc_release(puVar19);
      _objc_release(puVar1);
      _objc_release(param_4);
    }
    else if (param_5 == (undefined *)0x2) {
      _objc_retain(param_4);
      _objc_retain(puVar2);
      puVar19 = PTR__OBJC_CLASS___NSSet_1126ae870;
      puVar8 = puVar2;
      func_0x000100504554(puVar2,&PTR___NSConcreteGlobalBlock_110899fa0);
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_1055a688c;
      puStack_128 = &UNK_110899f50;
      puStack_120 = puVar19;
      _objc_retain(puVar19);
      puStack_318 = param_4;
      func_0x0001006372a4(param_4,&puStack_140);
      _objc_release(puStack_120);
      _objc_release(puVar19);
      _objc_release(puVar2);
      _objc_release(param_4);
    }
    else if (param_5 == (undefined *)0x3) {
      puStack_318 = puVar2;
      func_0x000100504554(puVar2,&PTR___NSConcreteGlobalBlock_110899fe0);
    }
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puStack_310 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c0dafa0();
    if (puVar2 != (undefined *)0x0) {
      puVar14 = param_3;
      func_0x00010c0daf80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(puVar14);
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar14);
      puVar2 = puVar14;
      func_0x00010bf52a60();
      puVar19 = puRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        do {
          if (puRam0000000000000000 != puVar19) {
            _objc_enumerationMutation(puVar14);
          }
          lVar15 = *(long *)((long)puVar12 * 8);
          lVar11 = lVar15;
          func_0x00010bf49d00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar11 != 0) {
            lVar11 = lVar15;
            func_0x00010c260ca0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf49d00(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar8);
            _objc_release(lVar15);
            _objc_release(lVar11);
          }
          puVar12 = puVar12 + 1;
        } while (puVar2 != puVar12);
        puVar2 = puVar14;
        func_0x00010bf52a60();
      }
      _objc_release(puVar14);
      _objc_release(puVar14);
      _objc_release(puStack_310);
      _objc_release(puVar14);
      puStack_310 = puVar8;
    }
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_3;
    func_0x00010c0dafa0();
    if (puVar19 != (undefined *)0x0) {
      puVar12 = param_3;
      func_0x00010c0daf80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(puVar12);
      func_0x00010bf71fe0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar12);
      puVar19 = puVar12;
      func_0x00010bf52a60();
      puVar8 = puRam0000000000000000;
      while (puVar19 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          if (puRam0000000000000000 != puVar8) {
            _objc_enumerationMutation(puVar12);
          }
          lVar15 = *(long *)((long)puVar13 * 8);
          lVar11 = lVar15;
          func_0x00010bf49d00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar11 != 0) {
            lVar11 = lVar15;
            func_0x00010bfded40(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf49d00(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar14);
            _objc_release(lVar15);
            _objc_release(lVar11);
          }
          puVar13 = puVar13 + 1;
        } while (puVar19 != puVar13);
        puVar19 = puVar12;
        func_0x00010bf52a60();
      }
      _objc_release(puVar12);
      _objc_release(puVar12);
      _objc_release(puVar2);
      _objc_release(puVar12);
      puVar2 = puVar14;
    }
    puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010c0dafa0();
    if (puVar8 != (undefined *)0x0) {
      puVar13 = param_3;
      func_0x00010c0daf80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf529e0(puVar13);
      func_0x00010bf71fe0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar13);
      puVar8 = puVar13;
      func_0x00010bf52a60();
      puVar14 = puRam0000000000000000;
      while (puVar8 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          if (puRam0000000000000000 != puVar14) {
            _objc_enumerationMutation(puVar13);
          }
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar16 = *(undefined8 *)((long)puVar17 * 8);
          func_0x00010c150c20(uVar16);
          func_0x00010c0df740(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf49d00(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12);
          _objc_release(uVar16);
          _objc_release(puVar9);
          puVar17 = puVar17 + 1;
        } while (puVar8 != puVar17);
        puVar8 = puVar13;
        func_0x00010bf52a60();
      }
      _objc_release(puVar13);
      _objc_release(puVar13);
      _objc_release(puVar19);
      _objc_release(puVar13);
      puVar19 = puVar12;
    }
    _objc_retain(puStack_318);
    puVar8 = puStack_318;
    func_0x00010bf52a60();
    puVar14 = puRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (puRam0000000000000000 != puVar14) {
          _objc_enumerationMutation(puStack_318);
        }
        uVar18 = *(undefined8 *)((long)puVar12 * 8);
        uVar16 = uVar18;
        func_0x00010bf49d40(uVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puStack_310;
        func_0x00010c0e00e0(puStack_310);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        uVar16 = uVar18;
        func_0x00010bf49d40(uVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar19;
        func_0x00010c0e00e0(puVar19);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        uVar16 = uVar18;
        func_0x00010bf49d40(uVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        func_0x00010c0e00e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        func_0x00010bf885a0(puVar17);
        FUN_1055a8a1c(puVar10,uVar18,puVar13,puVar9);
        _objc_release(puVar9);
        _objc_release(puVar17);
        _objc_release(puVar13);
        puVar12 = puVar12 + 1;
      } while (puVar8 != puVar12);
      puVar8 = puStack_318;
      func_0x00010bf52a60();
    }
    _objc_release(puStack_318);
    _objc_retain(puStack_318);
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retain(puStack_318);
    puVar8 = puStack_318;
    func_0x00010bf52a60();
    puVar12 = puRam0000000000000000;
    puVar14 = puStack_318;
    while (puVar8 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (puRam0000000000000000 != puVar12) {
          _objc_enumerationMutation(puStack_318);
        }
        uVar16 = *(undefined8 *)((long)puVar14 * 8);
        func_0x00010c0fb120(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar13);
        _objc_release(uVar16);
        puVar14 = puVar14 + 1;
      } while (puVar8 != puVar14);
      puVar8 = puStack_318;
      func_0x00010bf52a60();
      puVar14 = puVar12;
    }
    _objc_release(puStack_318);
    _objc_release(puStack_318);
    puVar8 = puVar13;
    FUN_1055a8cd0(puVar10,puVar13);
    _objc_release(puVar13);
    _objc_release(puVar19);
    _objc_release(puVar2);
    _objc_release(puStack_310);
    _objc_release(puStack_318);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar10);
    puVar2 = puVar3;
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puStack_120);
    _objc_release(puVar13);
    _objc_release(puVar14);
    _objc_release(param_4);
    _objc_release(puVar14);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar10);
    _objc_release(puVar3);
    __Unwind_Resume(puVar2);
    func_0x00010bf49d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a6ad4; end: 1055a7a07;  */

void FUN_1055a6ad4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c2449e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bf4a340(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181540(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x000100504554(puVar1,&PTR___NSConcreteGlobalBlock_110899f10);
  uVar2 = param_2;
  func_0x000100bf99b0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_4;
  func_0x00010050471c(param_4,&PTR___NSConcreteGlobalBlock_11089a020,
                      &PTR___NSConcreteGlobalBlock_11089a060);
  _objc_retain(puVar1);
  puVar3 = puVar1;
  func_0x00010bf52a60();
  puVar8 = puRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    do {
      if (puRam0000000000000000 != puVar8) {
        _objc_enumerationMutation(puVar1);
      }
      lVar13 = *(long *)((long)puVar17 * 8);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
      lVar7 = lVar13;
      func_0x00010bf49d00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar12 = puVar6;
      if (lVar7 != 0) {
        lVar7 = lVar13;
        func_0x00010bf49d00(lVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        func_0x00010c0e00e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        puVar12 = puVar10;
        func_0x00010c0fb120(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar10);
      }
      FUN_1055a81a0(param_2,lVar13,uVar2,puVar12,0);
      _objc_release(puVar12);
      puVar17 = puVar17 + 1;
    } while (puVar3 != puVar17);
    puVar3 = puVar1;
    func_0x00010bf52a60();
  }
  _objc_release(puVar1);
  FUN_1055a88b8(param_2,puVar4,0);
  puVar3 = puVar1;
  func_0x000100504554(puVar1,&PTR___NSConcreteGlobalBlock_110899f30);
  puVar8 = param_3;
  func_0x00010c0daf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(param_4);
  _objc_retain(puVar8);
  if (param_5 < 2) {
    _objc_retain(param_4);
    _objc_retain(puVar3);
    puVar17 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1055a680c;
    puStack_d8 = &UNK_110899f50;
    puStack_d0 = puVar17;
    _objc_retain();
    puStack_2c8 = param_4;
    func_0x0001006372a4(param_4,&puStack_f0);
    _objc_release(puStack_d0);
    _objc_release(puVar17);
    _objc_release(puVar3);
    _objc_release(param_4);
  }
  else if (param_5 == 2) {
    _objc_retain(param_4);
    _objc_retain(puVar8);
    puVar17 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar6 = puVar8;
    func_0x000100504554(puVar8,&PTR___NSConcreteGlobalBlock_110899fa0);
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1055a688c;
    puStack_d8 = &UNK_110899f50;
    puStack_d0 = puVar17;
    _objc_retain(puVar17);
    puStack_2c8 = param_4;
    func_0x0001006372a4(param_4,&puStack_f0);
    _objc_release(puStack_d0);
    _objc_release(puVar17);
    _objc_release(puVar8);
    _objc_release(param_4);
  }
  else if (param_5 == 3) {
    puStack_2c8 = puVar8;
    func_0x000100504554(puVar8,&PTR___NSConcreteGlobalBlock_110899fe0);
  }
  _objc_release(puVar8);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar8);
  puStack_2c0 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  func_0x00010c0dafa0();
  if (puVar8 != (undefined *)0x0) {
    puVar12 = param_3;
    func_0x00010c0daf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar12);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar12);
    puVar8 = puVar12;
    func_0x00010bf52a60();
    puVar17 = puRam0000000000000000;
    while (puVar8 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (puRam0000000000000000 != puVar17) {
          _objc_enumerationMutation(puVar12);
        }
        lVar13 = *(long *)((long)puVar10 * 8);
        lVar7 = lVar13;
        func_0x00010bf49d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          lVar7 = lVar13;
          func_0x00010c260ca0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf49d00(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar6);
          _objc_release(lVar13);
          _objc_release(lVar7);
        }
        puVar10 = puVar10 + 1;
      } while (puVar8 != puVar10);
      puVar8 = puVar12;
      func_0x00010bf52a60();
    }
    _objc_release(puVar12);
    _objc_release(puVar12);
    _objc_release(puStack_2c0);
    _objc_release(puVar12);
    puStack_2c0 = puVar6;
  }
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = param_3;
  func_0x00010c0dafa0();
  if (puVar17 != (undefined *)0x0) {
    puVar10 = param_3;
    func_0x00010c0daf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar10);
    func_0x00010bf71fe0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    puVar17 = puVar10;
    func_0x00010bf52a60();
    puVar6 = puRam0000000000000000;
    while (puVar17 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (puRam0000000000000000 != puVar6) {
          _objc_enumerationMutation(puVar10);
        }
        lVar13 = *(long *)((long)puVar11 * 8);
        lVar7 = lVar13;
        func_0x00010bf49d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          lVar7 = lVar13;
          func_0x00010bfded40(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf49d00(lVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12);
          _objc_release(lVar13);
          _objc_release(lVar7);
        }
        puVar11 = puVar11 + 1;
      } while (puVar17 != puVar11);
      puVar17 = puVar10;
      func_0x00010bf52a60();
    }
    _objc_release(puVar10);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar10);
    puVar8 = puVar12;
  }
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010c0dafa0();
  if (puVar6 != (undefined *)0x0) {
    puVar11 = param_3;
    func_0x00010c0daf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar11);
    func_0x00010bf71fe0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar11);
    puVar6 = puVar11;
    func_0x00010bf52a60();
    puVar12 = puRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (puRam0000000000000000 != puVar12) {
          _objc_enumerationMutation(puVar11);
        }
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar14 = *(undefined8 *)((long)puVar15 * 8);
        func_0x00010c150c20(uVar14);
        func_0x00010c0df740(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf49d00(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar10);
        _objc_release(uVar14);
        _objc_release(puVar9);
        puVar15 = puVar15 + 1;
      } while (puVar6 != puVar15);
      puVar6 = puVar11;
      func_0x00010bf52a60();
    }
    _objc_release(puVar11);
    _objc_release(puVar11);
    _objc_release(puVar17);
    _objc_release(puVar11);
    puVar17 = puVar10;
  }
  _objc_retain(puStack_2c8);
  puVar6 = puStack_2c8;
  func_0x00010bf52a60();
  puVar12 = puRam0000000000000000;
  while (puVar6 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (puRam0000000000000000 != puVar12) {
        _objc_enumerationMutation(puStack_2c8);
      }
      uVar16 = *(undefined8 *)((long)puVar10 * 8);
      uVar14 = uVar16;
      func_0x00010bf49d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puStack_2c0;
      func_0x00010c0e00e0(puStack_2c0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      uVar14 = uVar16;
      func_0x00010bf49d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar17;
      func_0x00010c0e00e0(puVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      uVar14 = uVar16;
      func_0x00010bf49d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0e00e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      func_0x00010bf885a0(puVar15);
      FUN_1055a8a1c(param_2,uVar16,puVar11,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar15);
      _objc_release(puVar11);
      puVar10 = puVar10 + 1;
    } while (puVar6 != puVar10);
    puVar6 = puStack_2c8;
    func_0x00010bf52a60();
  }
  _objc_release(puStack_2c8);
  _objc_retain(puStack_2c8);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(puStack_2c8);
  puVar6 = puStack_2c8;
  func_0x00010bf52a60();
  puVar10 = puRam0000000000000000;
  puVar12 = puStack_2c8;
  while (puVar6 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (puRam0000000000000000 != puVar10) {
        _objc_enumerationMutation(puStack_2c8);
      }
      uVar14 = *(undefined8 *)((long)puVar12 * 8);
      func_0x00010c0fb120(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar11);
      _objc_release(uVar14);
      puVar12 = puVar12 + 1;
    } while (puVar6 != puVar12);
    puVar6 = puStack_2c8;
    func_0x00010bf52a60();
    puVar12 = puVar10;
  }
  _objc_release(puStack_2c8);
  _objc_release(puStack_2c8);
  puVar6 = puVar11;
  FUN_1055a8cd0(param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar17);
  _objc_release(puVar8);
  _objc_release(puStack_2c0);
  _objc_release(puStack_2c8);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  uVar14 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_d0);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(param_4);
  _objc_release(puVar12);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(uVar14);
  func_0x00010bf49d40(puVar6);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a7a08; end: 1055a7a27;  */

void FUN_1055a7a08(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf49d40(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055a7a28; end: 1055a7a4f;  */

void FUN_1055a7a28(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055a7a50; end: 1055a7c67;  */

void FUN_1055a7a50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c2449e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x000100504554();
  lVar2 = param_1;
  func_0x000100bf99b0(param_1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
      FUN_1055a81a0(param_1,uVar7,lVar2,puVar6,1);
      _objc_release(puVar6);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  lVar8 = lVar1;
  FUN_1055a88b8(param_1,lVar1,1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x000100504554(lVar8,&PTR___NSConcreteGlobalBlock_110899f10);
  lVar9 = lVar3;
  func_0x000100bf99b0(lVar3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar7 = *(undefined8 *)(lVar10 * 8);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
      FUN_1055a81a0(lVar3,uVar7,lVar9,puVar6,3);
      _objc_release(puVar6);
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  FUN_1055a88b8(lVar3,lVar4,3);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar8);
  lVar1 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  __Unwind_Resume();
  _objc_retain();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117380(lVar1);
    func_0x00010c1173c0(lVar1);
    func_0x00010c116600(lVar1);
    func_0x00010bf699c0(lVar1);
    if ((lVar3 == 0) || (lVar8 = lVar3, func_0x00010c0b4660(), (int)lVar8 != 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar3;
      func_0x00010c0b4540();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126bb3e8;
    _objc_alloc(PTR_PTR_1126bb3e8);
    lVar2 = lVar1;
    func_0x00010c280020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f2e0(puVar6);
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055a7c68; end: 1055a7e6f;  */

void FUN_1055a7c68(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar7 = param_2;
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110899f10);
  lVar1 = param_1;
  func_0x000100bf99b0(param_1,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_2);
      }
      uVar6 = *(undefined8 *)(lVar8 * 8);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
      FUN_1055a81a0(param_1,uVar6,lVar1,puVar5,3);
      _objc_release(puVar5);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  FUN_1055a88b8(param_1,lVar7,3);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117380(lVar2);
    func_0x00010c1173c0(lVar2);
    func_0x00010c116600(lVar2);
    func_0x00010bf699c0(lVar2);
    if ((lVar3 == 0) || (lVar7 = lVar3, func_0x00010c0b4660(), (int)lVar7 != 0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar3;
      func_0x00010c0b4540();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126bb3e8;
    _objc_alloc(PTR_PTR_1126bb3e8);
    lVar1 = lVar2;
    func_0x00010c280020(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f2e0(puVar5);
    _objc_release(lVar1);
    _objc_release(lVar7);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1055a7e70; end: 1055a8003;  */

void FUN_1055a7e70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c117380(param_1);
    lVar3 = param_1;
    func_0x00010c1173c0(param_1);
    lVar4 = param_1;
    func_0x00010c116600(param_1);
    lVar5 = param_1;
    func_0x00010bf699c0(param_1);
    if ((lVar1 == 0) || (lVar8 = lVar1, func_0x00010c0b4660(), (int)lVar8 != 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar1;
      func_0x00010c0b4540();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR_PTR_1126bb3e8;
    _objc_alloc(PTR_PTR_1126bb3e8);
    lVar6 = param_1;
    func_0x00010c280020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f2e0(puVar7,param_2,(int)lVar2 == 3,lVar6,lVar2,lVar3,0 < (int)lVar4,lVar5,0);
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055a8004; end: 1055a819f;  */

void FUN_1055a8004(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126bb3f0;
    _objc_alloc(PTR_PTR_1126bb3f0);
    lVar1 = param_2;
    func_0x00010c0fb120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf85d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0359a0(0,0,param_1,puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055a81a0; end: 1055a88b7;  */

void FUN_1055a81a0(undefined8 *****param_1,undefined8 *****param_2,undefined8 *****param_3,
                  undefined8 *****param_4)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *****unaff_x21;
  undefined8 *****unaff_x22;
  long lVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****unaff_x26;
  undefined8 *****pppppuVar15;
  undefined8 uVar16;
  undefined8 ***pppuStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 ****ppppuStack_178;
  undefined8 uStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 uStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 ****ppppuStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar15 = param_2;
  pppppuVar8 = param_3;
  ppppuStack_80 = param_1;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppppuStack_88 = param_4;
  _objc_retain(param_4);
  pppppuVar5 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar14 = pppppuVar5;
  func_0x00010c08fa60();
  _objc_release(pppppuVar5);
  pppppuVar6 = (undefined8 *****)0x0;
  if (pppppuVar14 != (undefined8 *****)0x0) {
    pppppuVar6 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppppuVar6);
    if (unaff_x22 == (undefined8 *****)0x0) {
      _objc_retain(param_2);
      _objc_retain(ppppuStack_88);
      unaff_x22 = (undefined8 *****)PTR_PTR_1126b15c8;
      ppppuStack_90 = param_3;
      _objc_alloc();
      pppppuVar6 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar5 = param_2;
      ppppuStack_a0 = pppppuVar6;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar6 = param_2;
      ppppuStack_a8 = pppppuVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      pppppuVar5 = (undefined8 *****)PTR_PTR_1126b14b8;
      ppppuStack_b0 = pppppuVar6;
      _objc_alloc();
      pppppuVar6 = param_2;
      func_0x00010bf1acc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar14 = param_2;
      func_0x00010bf1c0a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = param_2;
      func_0x00010bf1c000(param_2);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar8 = param_2;
      func_0x00010bf1af00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff7be0();
      ppppuStack_98 = pppppuVar5;
      _objc_release(pppppuVar8);
      _objc_release(pppppuVar15);
      _objc_release(pppppuVar14);
      _objc_release(pppppuVar6);
      _objc_release(param_2);
      ppppuVar1 = ppppuStack_88;
      _objc_retain(ppppuStack_88);
      unaff_x26 = (undefined8 *****)PTR_PTR_1126bb3e0;
      _objc_alloc();
      func_0x00010c035b60();
      _objc_release(ppppuVar1);
      pppppuVar5 = (undefined8 *****)ppppuStack_98;
      pppppuVar14 = param_2;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar6 = param_2;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = param_2;
      func_0x00010c2427e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuStack_b8 = pppppuVar15;
      FUN_1055a7e70();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = (undefined8 *****)ppppuStack_a0;
      ppppuVar2 = ppppuStack_a8;
      ppppuVar1 = ppppuStack_b0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      pppppuVar8 = (undefined8 *****)ppppuStack_a0;
      ppppuStack_118 = unaff_x26;
      ppppuStack_108 = pppppuVar14;
      ppppuStack_100 = pppppuVar6;
      ppppuStack_e8 = pppppuVar15;
      func_0x00010c05c0e0();
      _objc_release(pppppuVar15);
      _objc_release(ppppuStack_b8);
      _objc_release(pppppuVar6);
      _objc_release(pppppuVar14);
      _objc_release(unaff_x26);
      _objc_release(pppppuVar5);
      _objc_release(ppppuVar1);
      _objc_release(ppppuVar2);
      _objc_release(unaff_x21);
      _objc_release(ppppuStack_88);
      _objc_release(param_2);
      param_3 = (undefined8 *****)ppppuStack_90;
      pppppuVar15 = unaff_x22;
      func_0x000108c1d01c(ppppuStack_80,unaff_x22);
    }
    else {
      pppppuVar6 = unaff_x22;
      func_0x00010bf4a3a0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = (undefined8 *****)ppppuStack_88;
      _objc_retain(ppppuStack_88);
      pppppuVar14 = (undefined8 *****)PTR_PTR_1126bb3e0;
      _objc_alloc();
      func_0x00010c035b60();
      _objc_release(unaff_x21);
      unaff_x26 = param_2;
      func_0x00010c2427e0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar7 = unaff_x26;
      FUN_1055a7e70();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = unaff_x22;
      pppppuVar8 = pppppuVar14;
      func_0x000108c20660(ppppuStack_80,unaff_x22,pppppuVar14,pppppuVar7);
      _objc_release(pppppuVar7);
      _objc_release(unaff_x26);
      _objc_release(pppppuVar14);
      _objc_release(pppppuVar6);
    }
    pppppuVar14 = param_2;
    func_0x00010c078940();
    if ((int)pppppuVar14 != 0) {
      unaff_x26 = (undefined8 *****)PTR_PTR_1126bb3f8;
      _objc_alloc();
      pppppuVar6 = unaff_x26;
      FUN_1055a8e2c();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar14 = pppppuVar6;
      FUN_1055a8e2c();
      _objc_retainAutoreleasedReturnValue();
      uStack_140 = 0;
      func_0x00010c04f5a0();
      _objc_release(pppppuVar14);
      _objc_release(pppppuVar6);
      func_0x000108c1ed28(ppppuStack_80,unaff_x26,unaff_x22);
      _objc_release(unaff_x26);
      pppppuVar6 = unaff_x22;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar8 = &ppppuStack_78;
      pppppuVar14 = (undefined8 *****)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppppuStack_78 = pppppuVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar15 = pppppuVar14;
      func_0x000108c114e4(ppppuStack_80,pppppuVar14);
      _objc_release(pppppuVar14);
      _objc_release(pppppuVar6);
    }
    _objc_release(unaff_x22);
  }
  _objc_release(ppppuStack_88);
  _objc_release(param_3);
  _objc_release(param_2);
  pppppuVar14 = (undefined8 *****)ppppuStack_80;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(ppppuStack_b8);
  _objc_release(pppppuVar6);
  _objc_release(unaff_x22);
  _objc_release(unaff_x26);
  _objc_release(ppppuStack_98);
  _objc_release(ppppuStack_b0);
  _objc_release(ppppuStack_a8);
  _objc_release(ppppuStack_a0);
  _objc_release(ppppuStack_88);
  _objc_release(param_2);
  _objc_release(0);
  ppppuVar1 = ppppuStack_90;
  _objc_release(ppppuStack_88);
  _objc_release(ppppuVar1);
  _objc_release(param_2);
  _objc_release(ppppuStack_80);
  pppppuVar7 = pppppuVar14;
  __Unwind_Resume();
  pppppuVar10 = (undefined8 *****)&pppuStack_250;
  uStack_170 = 0;
  pcStack_148 = FUN_1055a88b8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_180 = pppppuVar6;
  ppppuStack_178 = pppppuVar5;
  ppppuStack_168 = unaff_x21;
  ppppuStack_160 = param_2;
  ppppuStack_158 = pppppuVar14;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  pppppuVar6 = pppppuVar7;
  func_0x000108c1c9d0(pppppuVar7,pppppuVar8,pppppuVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  pppuStack_250 = (undefined8 ****)0x0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  _objc_retain();
  puVar11 = auStack_208;
  pppppuVar5 = pppppuVar6;
  func_0x00010bf52a60();
  if (pppppuVar5 != (undefined8 *****)0x0) {
    lVar13 = *plStack_240;
    do {
      pppppuVar14 = (undefined8 *****)0x0;
      do {
        if (*plStack_240 != lVar13) {
          _objc_enumerationMutation(pppppuVar6);
        }
        pppppuVar8 = *(undefined8 ******)(lStack_248 + (long)pppppuVar14 * 8);
        func_0x000108c2050c(pppppuVar7);
        pppppuVar14 = (undefined8 *****)((long)pppppuVar14 + 1);
      } while (pppppuVar5 != pppppuVar14);
      puVar11 = auStack_208;
      pppppuVar5 = pppppuVar6;
      pppppuVar10 = (undefined8 *****)&pppuStack_250;
      func_0x00010bf52a60();
    } while (pppppuVar5 != (undefined8 *****)0x0);
  }
  _objc_release(pppppuVar6);
  _objc_release(pppppuVar6);
  pppppuVar5 = pppppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar6);
  _objc_release(pppppuVar6);
  _objc_release(pppppuVar7);
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppppuVar8);
  _objc_retain(pppppuVar10);
  _objc_retain(puVar11);
  pppppuVar14 = pppppuVar8;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar6 = pppppuVar14;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  do {
    if (pppppuVar6 == (undefined8 *****)0x0) {
      _objc_release(pppppuVar14);
      pppppuVar14 = pppppuVar8;
      pppppuVar9 = pppppuVar10;
      FUN_1055a8004(uVar16,pppppuVar8,pppppuVar10,puVar11);
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar14 != (undefined8 *****)0x0) {
        pppppuVar9 = pppppuVar14;
        func_0x000108c13174(pppppuVar5,pppppuVar14);
      }
LAB_1055a8bcc:
      _objc_release(pppppuVar14);
      _objc_release(puVar11);
      _objc_release(pppppuVar10);
      _objc_release(pppppuVar8);
      pppppuVar6 = pppppuVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pppppuVar14);
      _objc_release(puVar11);
      _objc_release(pppppuVar10);
      _objc_release(pppppuVar8);
      _objc_release(pppppuVar5);
      __Unwind_Resume();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      pppppuVar14 = pppppuVar6;
      func_0x000108c12c3c(pppppuVar6,pppppuVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      pppppuVar5 = pppppuVar14;
      func_0x00010bf52a60();
      lVar13 = lRam0000000000000000;
      while (pppppuVar5 != (undefined8 *****)0x0) {
        pppppuVar15 = (undefined8 *****)0x0;
        do {
          if (lRam0000000000000000 != lVar13) {
            _objc_enumerationMutation(pppppuVar14);
          }
          func_0x000108c134e8(pppppuVar6,*(undefined8 *)((long)pppppuVar15 * 8));
          pppppuVar15 = (undefined8 *****)((long)pppppuVar15 + 1);
        } while (pppppuVar5 != pppppuVar15);
        pppppuVar5 = pppppuVar14;
        func_0x00010bf52a60();
      }
      _objc_release(pppppuVar14);
      _objc_release(pppppuVar14);
      pppppuVar5 = pppppuVar6;
      _objc_release(pppppuVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pppppuVar14);
      _objc_release(pppppuVar14);
      _objc_release(pppppuVar6);
      __Unwind_Resume(pppppuVar5);
      ppuVar3 = &PTR____CFConstantStringClassReference_110ded0f8;
      func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded0f8,
                          &PTR____CFConstantStringClassReference_110ded118,0);
      func_0x000107c61180();
      if (lRam00000001137fe070 != -1) {
        func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
      }
      ppuVar4 = ppuVar3;
      if ((bRam00000001137fe068 & 1) != 0) {
        func_0x000107c312ec(ppuVar3);
        func_0x000107c61180();
        func_0x000107c61170(ppuVar3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
      return;
    }
    pppppuVar15 = (undefined8 *****)0x0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(pppppuVar14);
      }
      pppppuVar9 = *(undefined8 ******)((long)pppppuVar15 * 8);
      pppppuVar7 = pppppuVar5;
      func_0x000108c12ef0(pppppuVar5,pppppuVar9);
      _objc_retainAutoreleasedReturnValue();
      if (pppppuVar7 != (undefined8 *****)0x0) {
        pppppuVar6 = pppppuVar8;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar15 = pppppuVar6;
        func_0x00010c08fa60();
        _objc_release(pppppuVar6);
        if (pppppuVar15 != (undefined8 *****)0x0) {
          pppppuVar6 = pppppuVar8;
          func_0x00010bf85d80(pppppuVar8);
          _objc_retainAutoreleasedReturnValue();
          pppppuVar9 = pppppuVar7;
          func_0x000108c133bc(uVar16,pppppuVar5,pppppuVar7,pppppuVar6,pppppuVar10,puVar11);
          _objc_release(pppppuVar6);
        }
        _objc_release(pppppuVar7);
        goto LAB_1055a8bcc;
      }
      pppppuVar15 = (undefined8 *****)((long)pppppuVar15 + 1);
    } while (pppppuVar6 != pppppuVar15);
    pppppuVar6 = pppppuVar14;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1055a88b8; end: 1055a8a1b;  */

void FUN_1055a88b8(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar7 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = param_1;
  func_0x000108c1c9d0(param_1,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  _objc_retain();
  puVar10 = auStack_c8;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      puVar10 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(puVar3);
        }
        param_3 = *(undefined1 **)(lStack_108 + (long)puVar10 * 8);
        func_0x000108c2050c(param_1);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar10 = auStack_c8;
      puVar4 = puVar3;
      puVar7 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  puVar11 = param_3;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  do {
    if (puVar3 == (undefined1 *)0x0) {
      _objc_release(puVar11);
      puVar11 = param_3;
      puVar6 = (undefined1 *)puVar7;
      FUN_1055a8004(uVar13,param_3,puVar7,puVar10);
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 != (undefined1 *)0x0) {
        puVar6 = puVar11;
        func_0x000108c13174(puVar4,puVar11);
      }
LAB_1055a8bcc:
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(param_3);
      puVar3 = puVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(param_3);
      _objc_release(puVar4);
      __Unwind_Resume();
      lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      puVar4 = puVar3;
      func_0x000108c12c3c(puVar3,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar10 = puVar4;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      while (puVar10 != (undefined1 *)0x0) {
        puVar11 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(puVar4);
          }
          func_0x000108c134e8(puVar3,*(undefined8 *)((long)puVar11 * 8));
          puVar11 = puVar11 + 1;
        } while (puVar10 != puVar11);
        puVar10 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
      _objc_release(puVar4);
      puVar10 = puVar3;
      _objc_release(puVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      __Unwind_Resume(puVar10);
      ppuVar1 = &PTR____CFConstantStringClassReference_110ded0f8;
      func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded0f8,
                          &PTR____CFConstantStringClassReference_110ded118,0);
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
    puVar12 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(puVar11);
      }
      puVar6 = *(undefined1 **)((long)puVar12 * 8);
      puVar5 = puVar4;
      func_0x000108c12ef0(puVar4,puVar6);
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined1 *)0x0) {
        puVar3 = param_3;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        if (puVar12 != (undefined1 *)0x0) {
          puVar3 = param_3;
          func_0x00010bf85d80(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x000108c133bc(uVar13,puVar4,puVar5,puVar3,puVar7,puVar10);
          _objc_release(puVar3);
        }
        _objc_release(puVar5);
        goto LAB_1055a8bcc;
      }
      puVar12 = puVar12 + 1;
    } while (puVar3 != puVar12);
    puVar3 = puVar11;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1055a8a1c; end: 1055a8ccf;  */

void FUN_1055a8a1c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_3;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(lVar3);
      lVar3 = param_3;
      lVar6 = param_4;
      FUN_1055a8004(param_1,param_3,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar6 = lVar3;
        func_0x000108c13174(param_2,lVar3);
      }
LAB_1055a8bcc:
      _objc_release(lVar3);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      lVar4 = param_2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(lVar3);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_2);
      __Unwind_Resume();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      lVar7 = lVar4;
      func_0x000108c12c3c(lVar4,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      lVar5 = lVar7;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar5 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar7);
          }
          func_0x000108c134e8(lVar4,*(undefined8 *)(lVar8 * 8));
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      _objc_release(lVar7);
      lVar5 = lVar4;
      _objc_release(lVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(lVar7);
      _objc_release(lVar7);
      _objc_release(lVar4);
      __Unwind_Resume(lVar5);
      ppuVar1 = &PTR____CFConstantStringClassReference_110ded0f8;
      func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded0f8,
                          &PTR____CFConstantStringClassReference_110ded118,0);
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
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar3);
      }
      lVar6 = *(long *)(lVar9 * 8);
      lVar8 = param_2;
      func_0x000108c12ef0(param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 != 0) {
        lVar4 = param_3;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          lVar4 = param_3;
          func_0x00010bf85d80(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar8;
          func_0x000108c133bc(param_1,param_2,lVar8,lVar4,param_4,param_5);
          _objc_release(lVar4);
        }
        _objc_release(lVar8);
        goto LAB_1055a8bcc;
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1055a8cd0; end: 1055a8e2b;  */

void FUN_1055a8cd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar4 = param_1;
  func_0x000108c12c3c(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x000108c134e8(param_1,*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar5 != lVar7);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  lVar5 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  __Unwind_Resume(lVar5);
  ppuVar2 = &PTR____CFConstantStringClassReference_110ded0f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded0f8,
                      &PTR____CFConstantStringClassReference_110ded118,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar3 = ppuVar2;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar2);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1055a8e2c; end: 1055a8e43;  */

void FUN_1055a8e2c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ded0f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded0f8,
                      &PTR____CFConstantStringClassReference_110ded118,0);
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



/* Entry: 1055a8e44; end: 1055a8eb7; -[UNIContactBook initWithUnifiedGrpcService:] */

undefined1 * FUN_1055a8e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e91b8;
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



/* Entry: 1055a8eb8; end: 1055a8f9b; -[UNIContactBook incrementalSyncContactBookUploadWithRequest:callOptionsBuilder:handler:] */

void FUN_1055a8eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb400;
  _objc_opt_class(PTR_PTR_1126bb400);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ded138,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055a8f9c; end: 1055a907f; -[UNIContactBook fullSyncContactBookUploadWithRequest:callOptionsBuilder:handler:] */

void FUN_1055a8f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb400;
  _objc_opt_class(PTR_PTR_1126bb400);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ded158,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055a9080; end: 1055a9163; -[UNIContactBook fullSyncContactBooksWithRequest:callOptionsBuilder:handler:] */

void FUN_1055a9080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb400;
  _objc_opt_class(PTR_PTR_1126bb400);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ded178,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055a9164; end: 1055a9247; -[UNIContactBook earlyContactBookUploadWithRequest:callOptionsBuilder:handler:] */

void FUN_1055a9164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb408;
  _objc_opt_class(PTR_PTR_1126bb408);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ded198,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055a9248; end: 1055a932b; -[UNIContactBook getFacebookFriendsWithRequest:callOptionsBuilder:handler:] */

void FUN_1055a9248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bb410;
  _objc_opt_class(PTR_PTR_1126bb410);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110ded1b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1055a932c; end: 1055a934b; -[UNIContactBook .cxx_destruct] */

void FUN_1055a932c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055a934c; end: 1055a9863;  */

/* WARNING: Possible PIC construction at 0x0001055a9494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001055a9498) */
/* WARNING: Removing unreachable block (ram,0x0001055a952c) */
/* WARNING: Removing unreachable block (ram,0x0001055a9538) */
/* WARNING: Removing unreachable block (ram,0x0001055a953c) */
/* WARNING: Removing unreachable block (ram,0x0001055a954c) */
/* WARNING: Removing unreachable block (ram,0x0001055a9554) */
/* WARNING: Removing unreachable block (ram,0x0001055a9568) */
/* WARNING: Removing unreachable block (ram,0x0001055a9590) */
/* WARNING: Removing unreachable block (ram,0x0001055a959c) */
/* WARNING: Removing unreachable block (ram,0x0001055a95b8) */
/* WARNING: Removing unreachable block (ram,0x0001055a9610) */
/* WARNING: Removing unreachable block (ram,0x0001055a961c) */
/* WARNING: Removing unreachable block (ram,0x0001055a9620) */
/* WARNING: Removing unreachable block (ram,0x0001055a9630) */
/* WARNING: Removing unreachable block (ram,0x0001055a9638) */
/* WARNING: Removing unreachable block (ram,0x0001055a964c) */
/* WARNING: Removing unreachable block (ram,0x0001055a9674) */
/* WARNING: Removing unreachable block (ram,0x0001055a9680) */
/* WARNING: Removing unreachable block (ram,0x0001055a969c) */
/* WARNING: Removing unreachable block (ram,0x0001055a9774) */
/* WARNING: Removing unreachable block (ram,0x0001055a9460) */

void FUN_1055a934c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126bb428;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c184960(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar7 = &PTR___NSConcreteGlobalBlock_11089a080;
  lVar5 = param_1;
  func_0x00010bd86590(param_1,&PTR___NSConcreteGlobalBlock_11089a080);
  _objc_retain();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  puVar2 = PTR_PTR_1126bb420;
  ppuVar8 = ppuRam0000000000000000;
  if (lVar6 == 0) {
    _objc_release(lVar5);
    func_0x00010c1817a0(puVar1);
    puVar2 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
    func_0x00010bf10fe0();
    ppuVar8 = ppuVar7;
    if (((undefined *)0x2 < puVar2) && (puVar2 == (undefined *)0x3)) {
      ppuVar8 = (undefined **)0x12;
      func_0x000100029b9c(2,0x12,0,0);
    }
    func_0x00010c181280(puVar1);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
      return;
    }
    ___stack_chk_fail();
  }
  else {
    _objc_retain(ppuRam0000000000000000);
    _objc_opt_new(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf49d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar8,PTR_s_contactIdentifier_1125b00f8);
  return;
}



/* Entry: 1055a9864; end: 1055a986b;  */

void FUN_1055a9864(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contactIdentifier_1125b00f8);
  return;
}



/* Entry: 1055a986c; end: 1055a9a0f; -[SCFriendingActiveStoryFetcher initWithSnapchattersObservableRepository:activeStoryStatusFetcher:performerProvider:timeProvider:logger:circumstanceEngine:] */

undefined1 *
FUN_1055a986c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e91c0;
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
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdef1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    func_0x00010be66360(puVar1);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    func_0x00010be66f00(puVar1);
    *(undefined8 *)((long)puVar1 + 0x50) = 0x14;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055a9a10; end: 1055a9a37; -[SCFriendingActiveStoryFetcher activeStoryInfosForIncomingFriends] */

void FUN_1055a9a10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055a9a38; end: 1055a9a6b; -[SCFriendingActiveStoryFetcher activeStoryInfosForSuggestionType:] */

void FUN_1055a9a38(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055a9a6c; end: 1055a9b43; -[SCFriendingActiveStoryFetcher fetchSuggestedFriendsActiveStoryInfoWithIndex:] */

void FUN_1055a9a6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1055a9b44; end: 1055a9b77;  */

void FUN_1055a9b44(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be19ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055a9b78; end: 1055a9caf; -[SCFriendingActiveStoryFetcher fetchActiveStoryStatusForUserIds:requestSource:requestOrigin:completion:] */

void FUN_1055a9b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_6 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_retain(param_3);
    uStack_58 = param_4;
    uStack_50 = param_5;
    _objc_retain(param_6);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1055a9cb0; end: 1055a9ce7;  */

void FUN_1055a9cb0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0f1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055a9ce8; end: 1055a9d3f; -[SCFriendingActiveStoryFetcher _fullFetchSuggestedFriendsOnAddFriendsPageInPerformerWithIndex:] */

void FUN_1055a9ce8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  if (*(ulong *)(param_1 + 0x50) <= param_3) {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0();
    if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x48) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be0f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__fetchActiveStoryInfoWithSuggest_112561610,
                 *(undefined8 *)(param_1 + 0x40));
      return;
    }
  }
  return;
}



/* Entry: 1055a9d40; end: 1055a9e73; -[SCFriendingActiveStoryFetcher _fetchActiveStoryInfoWithSuggestedUserIds:] */

void FUN_1055a9d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c129ba0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1055a9e74; end: 1055a9ebb;  */

void FUN_1055a9e74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be841c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055a9ebc; end: 1055aa013; -[SCFriendingActiveStoryFetcher _observeIncomingFriendsObservable] */

void FUN_1055a9ebc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfec000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1055aa014; end: 1055aa05b;  */

void FUN_1055aa014(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be38100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055aa05c; end: 1055aa1b3; -[SCFriendingActiveStoryFetcher _observeSuggestionsOnAddFriendsObservable] */

void FUN_1055aa05c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1055aa1b4; end: 1055aa1fb;  */

void FUN_1055aa1b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec8ea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055aa1fc; end: 1055aa26b; -[SCFriendingActiveStoryFetcher _incomingFriendsReceivedInPerformer:] */

void FUN_1055aa1fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11089a0d0);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010be0f1a0(param_1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055aa26c; end: 1055aa273;  */

void FUN_1055aa26c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1055aa274; end: 1055aa3a7; -[SCFriendingActiveStoryFetcher _fetchActiveStoryInfoWithIncomingFriendsUserIds:] */

void FUN_1055aa274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c129ba0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1055aa3a8; end: 1055aa3ef;  */

void FUN_1055aa3a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be841a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055aa3f0; end: 1055aa4c7; -[SCFriendingActiveStoryFetcher _suggestionsReceivedInPerformer:] */

void FUN_1055aa3f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11089a0f0);
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 != 0) {
      uVar2 = *(ulong *)(param_1 + 0x40);
      func_0x00010c071b60();
      if ((uVar2 & 1) == 0) {
        _objc_retain(uVar1);
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        *(ulong *)(param_1 + 0x40) = uVar1;
        _objc_release(uVar3);
        uVar2 = uVar1;
        func_0x00010bf529e0();
        if (uVar2 <= *(ulong *)(param_1 + 0x50)) {
          func_0x00010bf529e0(uVar1);
        }
        uVar2 = uVar1;
        func_0x00010c25e980(uVar1);
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 *)(param_1 + 0x48) = 0;
        func_0x00010be0f1c0(param_1);
        _objc_release(uVar2);
      }
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055aa4c8; end: 1055aa4cf;  */

void FUN_1055aa4c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1055aa4d0; end: 1055aa5c7; -[SCFriendingActiveStoryFetcher _fetchActiveStoryStatusForUserIds:requestSource:requestOrigin:completion:] */

void FUN_1055aa4d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,PTR____NSDictionary0__struct_11034ab58,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c129ba0(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055aa5c8; end: 1055aa6bb; -[SCFriendingActiveStoryFetcher _createLazyPerformerWithPerformerProvider:] */

void FUN_1055aa5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1055aa660;
  puStack_30 = &UNK_1108545f0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055aa6bc; end: 1055aa73b; -[SCFriendingActiveStoryFetcher _publishNewIncomingFriendsToActiveStoryInfo:] */

void FUN_1055aa6bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde9fc0(param_1,param_2,param_3);
  func_0x00010c0a8800(uVar1,param_2,lVar2);
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055aa73c; end: 1055aa7bb; -[SCFriendingActiveStoryFetcher _publishNewSuggestedFriendsToActiveStoryInfo:] */

void FUN_1055aa73c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bde9fc0(param_1,param_2,param_3);
  func_0x00010c0b14e0(uVar1,param_2,lVar2);
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055aa7bc; end: 1055aa81b; -[SCFriendingActiveStoryFetcher _countWithActiveStoryFromUserIdToActiveStoryInfo:] */

undefined8 FUN_1055aa7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf00d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x0001006372a4();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1055aa81c; end: 1055aa823;  */

void FUN_1055aa81c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1055aa824; end: 1055aa8a7; -[SCFriendingActiveStoryFetcher .cxx_destruct] */

void FUN_1055aa824(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1055aa8a8; end: 1055aa947; -[SCFriendingActiveStoryLogger initWithGrapheneRegistry:] */

undefined1 * FUN_1055aa8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e91c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe37c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055aa948; end: 1055aa9fb; -[SCFriendingActiveStoryLogger logAddFriendsPageEndEventWithNumberOfSeenIncomingFriends:numberOfSeenIncomingFriendsWithActiveStories:] */

void FUN_1055aa948(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126bb430;
    func_0x00010befcc00(PTR_PTR_1126bb430);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
    func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
    puVar2 = PTR_PTR_1126bb430;
    func_0x00010bef0420(PTR_PTR_1126bb430);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
    func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1055aa9fc; end: 1055aaaaf; -[SCFriendingActiveStoryLogger logAddFriendsPageEndEventWithNumberOfSeenSuggestions:numberOfSeenSuggestionsWithActiveStories:] */

void FUN_1055aa9fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126bb430;
    func_0x00010c11e1e0(PTR_PTR_1126bb430);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
    func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
    puVar2 = PTR_PTR_1126bb430;
    func_0x00010bef0f20(PTR_PTR_1126bb430);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
    func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1055aaab0; end: 1055aab07; -[SCFriendingActiveStoryLogger addIncomingFriendWithActiveStory:] */

void FUN_1055aaab0(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb430;
  if (param_3 == 0) {
    func_0x00010bef9260(PTR_PTR_1126bb430);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef6a00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055aab08; end: 1055aab5f; -[SCFriendingActiveStoryLogger addSuggestedFriendWithActiveStory:] */

void FUN_1055aab08(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb430;
  if (param_3 == 0) {
    func_0x00010bef9280(PTR_PTR_1126bb430);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef6a20();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055aab60; end: 1055aac8f; -[SCFriendingActiveStoryLogger logQueryActiveStoryForIncomingFriendsEnd:numberOfQueriedUserIds:numberOfReturnedUserIds:latency:] */

void FUN_1055aab60(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bb430;
  func_0x00010c11d0a0(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,puVar2);
  puVar1 = PTR_PTR_1126bb430;
  func_0x00010c11d0c0(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(*(undefined8 *)(param_2 + 8),param_3,puVar1,(long)param_1);
  puVar3 = PTR_PTR_1126bb430;
  func_0x00010c11d0e0(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_2 + 8),param_3,puVar3,param_5);
  puVar4 = PTR_PTR_1126bb430;
  func_0x00010c11d100(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_2 + 8),param_3,puVar4,param_6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1055aac90; end: 1055aadbf; -[SCFriendingActiveStoryLogger logQueryActiveStoryForSuggestionsEnd:numberOfQueriedUserIds:numberOfReturnedUserIds:latency:] */

void FUN_1055aac90(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bb430;
  func_0x00010c11d7e0(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,puVar2);
  puVar1 = PTR_PTR_1126bb430;
  func_0x00010c11d800(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(*(undefined8 *)(param_2 + 8),param_3,puVar1,(long)param_1);
  puVar3 = PTR_PTR_1126bb430;
  func_0x00010c11d820(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_2 + 8),param_3,puVar3,param_5);
  puVar4 = PTR_PTR_1126bb430;
  func_0x00010c11d840(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_2 + 8),param_3,puVar4,param_6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1055aadc0; end: 1055aae4b; -[SCFriendingActiveStoryLogger logIncomingFriendActiveStoryCount:] */

void FUN_1055aadc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb430;
  func_0x00010bef10e0(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1055aae4c; end: 1055aaed7; -[SCFriendingActiveStoryLogger logSuggestedFriendActiveStoryCount:] */

void FUN_1055aae4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb430;
  func_0x00010bef10e0(PTR_PTR_1126bb430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec320(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1055aaed8; end: 1055aaee3; -[SCFriendingActiveStoryLogger .cxx_destruct] */

void FUN_1055aaed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055aaee4; end: 1055aaf63;  */

void FUN_1055aaee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126bb440;
  _objc_alloc(PTR_PTR_1126bb440);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar4 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c049f60(puVar3,param_2,uVar1,uVar2,uVar5,puVar4,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055aaf64; end: 1055aaf93;  */

void FUN_1055aaf64(void)

{
  _objc_alloc(PTR_PTR_1126bb448);
  func_0x00010c0184a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055aaf94; end: 1055aaffb; -[SCFriendingActiveStoryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055aaf94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725f68);
  _objc_destroyWeak(param_1 + _DAT_112725f64);
  _objc_destroyWeak(param_1 + _DAT_112725f70);
  _objc_destroyWeak(param_1 + _DAT_112725f6c);
  _objc_destroyWeak(param_1 + _DAT_112725f60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725f74);
  return;
}



/* Entry: 1055aaffc; end: 1055ab027; +[SCGrapheneHintOnActiveStoryMetric addedMeImpressed] */

void FUN_1055aaffc(void)

{
  _objc_alloc(PTR_PTR_1126bb430);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055ab028; end: 1055ab053; +[SCGrapheneHintOnActiveStoryMetric activeAddedMeImpressed] */

void FUN_1055ab028(void)

{
  _objc_alloc(PTR_PTR_1126bb430);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055ab054; end: 1055ab07f; +[SCGrapheneHintOnActiveStoryMetric quickAddImpressed] */

void FUN_1055ab054(void)

{
  _objc_alloc(PTR_PTR_1126bb430);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055ab080; end: 1055ab0ab; +[SCGrapheneHintOnActiveStoryMetric activeQuickAddImpressed] */

void FUN_1055ab080(void)

{
  _objc_alloc(PTR_PTR_1126bb430);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055ab0ac; end: 1055ab0d7; +[SCGrapheneHintOnActiveStoryMetric addActiveAddedMe] */

void FUN_1055ab0ac(void)

{
  _objc_alloc(PTR_PTR_1126bb430);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


