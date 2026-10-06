/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105be387c; end: 105be387f;  */

void FUN_105be387c(void)

{
  return;
}



/* Entry: 105be3880; end: 105be389b; -[SCContextPostSnapFeedButtonController _actionType] */

undefined8 FUN_105be3880(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 8;
  if ((*(long *)(param_1 + 0x28) - 1U & 0xfffffffffffffffd) != 0) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 105be389c; end: 105be38b7; -[SCContextPostSnapFeedButtonController _contextMenuSourceSpecific] */

undefined8 FUN_105be389c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  if ((*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe) != 2) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 105be38b8; end: 105be38fb; -[SCContextPostSnapFeedButtonController .cxx_destruct] */

void FUN_105be38b8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105be38fc; end: 105be395b;  */

void FUN_105be38fc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e21258;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e21258,
                      &PTR____CFConstantStringClassReference_110e21278,0);
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



/* Entry: 105be395c; end: 105be3a4f; -[SCContextPostSnapFeedScope initWithViewContainer:paramsObservable:baseViewController:source:actionHandlerDelegate:] */

undefined1 *
FUN_105be395c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ec440;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105be3a50; end: 105be3a57; -[SCContextPostSnapFeedScope viewContainer] */

undefined8 FUN_105be3a50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105be3a58; end: 105be3a5f; -[SCContextPostSnapFeedScope paramsObservable] */

undefined8 FUN_105be3a58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105be3a60; end: 105be3a77; -[SCContextPostSnapFeedScope baseViewController] */

void FUN_105be3a60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105be3a78; end: 105be3a7f; -[SCContextPostSnapFeedScope source] */

undefined8 FUN_105be3a78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105be3a80; end: 105be3a97; -[SCContextPostSnapFeedScope actionHandlerDelegate] */

void FUN_105be3a80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105be3a98; end: 105be3aa3; -[SCContextPostSnapFeedScope setActionHandlerDelegate:] */

void FUN_105be3a98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105be3aa4; end: 105be3ae3; -[SCContextPostSnapFeedScope .cxx_destruct] */

void FUN_105be3aa4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105be3ae4; end: 105be3e5b; -[SCBitmojiProfileBadgeState initWithPerformerProvider:appLifecycleManager:circumstanceEngine:myBitmojiAvatarIdProvider:phoneNumberProvider:contactPermissionInfoProvider:featureSettings:plusFeatureBadging:preferences:communitiesAttributionProviding:profilesProvider:badgeRanker:navigationLoggingServices:] */

undefined8 *
FUN_105be3ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126ec448;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c2f80;
    _objc_opt_new();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = puVar4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x99) = 1;
    uVar3 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c071800();
    _objc_release(uVar3);
    if ((int)uVar2 != 0) {
      func_0x00010bea98c0(puVar1);
    }
  }
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



/* Entry: 105be3e5c; end: 105be3ea3; -[SCBitmojiProfileBadgeState dealloc] */

void FUN_105be3e5c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x90));
  puStack_28 = PTR_PTR_1126ec448;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105be3ea4; end: 105be3ea7; -[SCBitmojiProfileBadgeState profileDidHide:] */

void FUN_105be3ea4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadBadgeState_112627cb0);
  return;
}



/* Entry: 105be3ea8; end: 105be4157; -[SCBitmojiProfileBadgeState reloadBadgeState] */

void FUN_105be3ea8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1;
  func_0x00010c288d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2f88;
    puVar5 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126c2f90;
    func_0x00010bf1af60(PTR_PTR_1126c2f90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c116920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23b400(puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c080b80();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    if ((int)uVar6 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      puVar8 = auStack_98;
      _objc_copyWeak(puVar8,auStack_68);
      func_0x00010c0f7fc0(uVar6);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c2f88;
      puVar5 = PTR_PTR_1126ae960;
      puVar3 = PTR_PTR_1126c2f90;
      func_0x00010bf1af60(PTR_PTR_1126c2f90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c116920(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23b400(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ae970;
      func_0x00010bfe2ec0(PTR_PTR_1126ae970);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c11de00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_105be4158;
      puStack_78 = &UNK_1108434b0;
      puVar8 = auStack_70;
      _objc_copyWeak(puVar8,auStack_68);
      func_0x00010c2a1660(uVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar6);
    }
    _objc_destroyWeak(puVar8);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 105be4158; end: 105be41af;  */

void FUN_105be4158(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd2700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105be41b0; end: 105be4403; -[SCBitmojiProfileBadgeState _badgeOnMainThreadIfNeeded] */

void FUN_105be41b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x90) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c116960();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  FUN_105be7354(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x10));
  puVar4 = PTR_PTR_1126b0bd8;
  func_0x00010c07b3c0();
  if ((int)puVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c116980();
    _objc_release(uVar5);
  }
  func_0x000108060cc8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x30));
  func_0x000108060e04(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x60));
  if ((*(char *)(param_1 + 0x99) == '\x01') && (*(char *)(param_1 + 0x9a) == '\x01')) {
    func_0x00010bdf5f00();
  }
  func_0x00010beddf40(param_1);
  return;
}



/* Entry: 105be4404; end: 105be4463;  */

void FUN_105be4404(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bedd760(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105be4464; end: 105be45df; -[SCBitmojiProfileBadgeState _setUpProfileBadge] */

void FUN_105be4464(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108dc2e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1468;
  _objc_alloc(PTR_PTR_1126b1468);
  func_0x00010c055e20();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1270c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c13cc80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105be45e0; end: 105be464b;  */

void FUN_105be45e0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  puVar2 = PTR_PTR_1126b1460;
  if ((uVar1 & 1) == 0) {
    func_0x00010c0db7e0(PTR_PTR_1126b1460);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef0400();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105be464c; end: 105be47c3;  */

void FUN_105be464c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105be46f4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105be47c4; end: 105be48c7; -[SCBitmojiProfileBadgeState _updateProfileBadge:badgingSource:] */

void FUN_105be47c4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  if (param_3 != 0) {
    FUN_105be6f50(*(undefined8 *)(param_1 + 0x58),param_4,1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071800();
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105be48c8;
    puStack_58 = &UNK_110845ce0;
    uStack_48 = (undefined1)param_3;
    lStack_50 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_70);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105be48c8; end: 105be497b;  */

void FUN_105be48c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c288d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c288d00();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
    func_0x00010c0d6960(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3fa0();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105be497c; end: 105be4993; -[SCBitmojiProfileBadgeState _updatePlusBadgeState:] */

void FUN_105be497c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x98) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x98) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c128a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadBadgeState_112627cb0);
  return;
}



/* Entry: 105be4994; end: 105be4997; -[SCBitmojiProfileBadgeState didUpdateWithAnnouncerIdentifier:] */

void FUN_105be4994(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadBadgeState_112627cb0);
  return;
}



/* Entry: 105be4998; end: 105be49af; -[SCBitmojiProfileBadgeState _creatorActivityFeedBadgeEnabled] */

void FUN_105be4998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e213b8,0,0);
  return;
}



/* Entry: 105be49b0; end: 105be4a73; -[SCBitmojiProfileBadgeState showBadgeForCreatorActivityFeedWithBusinessId:] */

void FUN_105be49b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c266a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar4);
    if (lVar1 != 0) {
      lVar4 = lVar1;
      func_0x00010bf25020();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf251a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfddda0();
      *(char *)(param_1 + 0x9a) = (char)lVar3;
      _objc_release(lVar2);
      func_0x00010c128a40(param_1);
      _objc_release(lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105be4a74; end: 105be4a7b; -[SCBitmojiProfileBadgeState hideCreatorActivityFeedBadge] */

void FUN_105be4a74(long param_1)

{
  *(undefined1 *)(param_1 + 0x99) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c128a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadBadgeState_112627cb0);
  return;
}



/* Entry: 105be4a7c; end: 105be4a83; -[SCBitmojiProfileBadgeState updateProfileBadge] */

undefined8 FUN_105be4a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105be4a84; end: 105be4a8b; -[SCBitmojiProfileBadgeState setUpdateProfileBadge:] */

void FUN_105be4a84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105be4a8c; end: 105be4c13; -[SCBitmojiProfileBadgeState .cxx_destruct] */

void FUN_105be4a8c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105be4c14; end: 105be4c73;  */

void FUN_105be4c14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
  func_0x00010bed7ca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105be4c74; end: 105be4d5b; -[SCProfileHeaderButtonEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be4c74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_112731df8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112731dfc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_1126ec450;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105be4d5c; end: 105be4e2b; -[SCProfileHeaderButtonEntryPoint didUpdateMyStoriesDataRequest:] */

void FUN_105be4d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105be4e2c;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105be4e34;
  puStack_48 = &UNK_1108dc338;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105be4e3c;
  puStack_70 = &UNK_1108dc368;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105be4e44;
  puStack_98 = &UNK_110841f20;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0be260(param_3,param_2,&puStack_38,0,0,&puStack_60,&puStack_88,0,0,0,0,&puStack_b0);
  return;
}



/* Entry: 105be4e2c; end: 105be4e4f;  */

void FUN_105be4e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be11990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__fetchIcon_112562000)
  ;
  return;
}



/* Entry: 105be4e50; end: 105be4f77; -[SCProfileHeaderButtonEntryPoint didUpdateThumbnailStateChangeRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be4e50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if ((lVar1 == 2) && (lVar1 = param_3, func_0x00010c26e380(), lVar1 == 1)) {
    lVar1 = param_3;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112731dcc);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105be4f78; end: 105be4ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be4f78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112731e00;
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + lVar4);
      *(undefined8 *)(lVar1 + lVar4) = 0;
      _objc_release(uVar3);
      func_0x00010be11980(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105be4ff8; end: 105be504f; -[SCProfileHeaderButtonEntryPoint _updateFailedViewIfNecessaryWithFailedSnapCount:] */

void FUN_105be4ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105be5050;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 105be5050; end: 105be52bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be5050(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)(param_1 + 0x20);
  if (0 < *(long *)(param_1 + 0x28)) {
    *(undefined8 *)(lVar6 + _DAT_112731df4) = 1;
    puVar1 = PTR_PTR_1126c2f98;
    _objc_alloc(PTR_PTR_1126c2f98);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(0,0,0,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6420(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    func_0x00010c18b5e0(puVar1);
    if (*(long *)(param_1 + 0x28) == 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e21418;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e21418,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e21438;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e21438,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108f588dc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    lVar6 = *(long *)(param_1 + 0x20) + (long)_DAT_112731ddc;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf25780();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0ec860();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e960(0x40ac200000000000);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(puVar2);
    _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  if (*(long *)(lVar6 + _DAT_112731df4) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be8db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar6,PTR_s__removeTooltip_112581060);
    return;
  }
  return;
}



/* Entry: 105be52c0; end: 105be5317; -[SCProfileHeaderButtonEntryPoint _removeTooltip] */

void FUN_105be52c0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105be5318;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105be5318; end: 105be53af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be5318(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731df4) = 0;
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112731ddc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf25780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84800();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105be53b0; end: 105be53b3; -[SCProfileHeaderButtonEntryPoint tappedDismissButton] */

void FUN_105be53b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeTooltip_112581060);
  return;
}



/* Entry: 105be53b4; end: 105be53b7; -[SCProfileHeaderButtonEntryPoint tooltipDidDismiss:] */

void FUN_105be53b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeTooltip_112581060);
  return;
}



/* Entry: 105be53b8; end: 105be53d3; -[SCProfileHeaderButtonEntryPoint tooltipTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be53b8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112731df4) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be8db10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeTooltip_112581060);
    return;
  }
  return;
}



/* Entry: 105be53d4; end: 105be53ff;  */

void FUN_105be53d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be118e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105be5400; end: 105be54b7;  */

void FUN_105be5400(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
        func_0x00010be119a0(param_1);
      }
      else {
        func_0x00010be119e0(param_1);
      }
    }
    else {
      func_0x00010be119c0(param_1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105be54b8; end: 105be563f; -[SCProfileHeaderButtonEntryPoint _fetchIconForThumbnailInfo:storiesSnapAttributes:cropImageToCircle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be54b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105be5640;
  puStack_80 = &UNK_1108dc3c8;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_5;
  _objc_retain(param_4);
  uStack_78 = param_4;
  _objc_retain(param_3);
  ppuVar1 = &puStack_98;
  uStack_70 = param_3;
  _objc_retainBlock(ppuVar1);
  lVar2 = param_1 + _DAT_112731dfc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112731dcc);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11da60(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105be5640; end: 105be5787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be5640(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf26940();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf51e00();
      uVar7 = *(undefined8 *)(lVar1 + _DAT_112731e00);
      *(undefined8 *)(lVar1 + _DAT_112731e00) = uVar3;
      _objc_release(uVar7);
      _objc_release(uVar5);
      func_0x00010be119a0(lVar1);
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112731e00);
      *(undefined8 *)(lVar1 + _DAT_112731e00) = 0;
      _objc_release(uVar3);
      lVar6 = lVar1;
      if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
        func_0x00010be82c60(lVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = puVar2;
        func_0x00010bf5c7e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be82c60(lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      func_0x00010beddf80(lVar1);
      _objc_release(lVar6);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105be5788; end: 105be587f; -[SCProfileHeaderButtonEntryPoint _fetchIconForThumbnailURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be5788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112731dcc;
  if (*(long *)(param_1 + lVar2) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105be5880;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(uVar1);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105be5880; end: 105be598b;  */

void FUN_105be5880(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0040a0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010be119a0(lVar1);
    }
    else {
      puVar4 = puVar3;
      func_0x00010bf5c7e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010be82c60(lVar1,param_2,puVar4,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010beddf80(lVar1,param_2,lVar5);
      _objc_release(lVar5);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105be598c; end: 105be5a4f;  */

void FUN_105be598c(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  puVar2 = param_3;
  func_0x00010c14e2c0(0x4044000000000000,0x4044000000000000,param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010beddf80();
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105be5a50; end: 105be5b73; -[SCProfileHeaderButtonEntryPoint _isTodayBirthdayDate:] */

bool FUN_105be5a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf44640(puVar2,param_2,0x18,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010c0d0e40();
  puVar5 = puVar3;
  func_0x00010c0d0e40();
  if (puVar2 == puVar5) {
    puVar2 = puVar4;
    func_0x00010bf65700(puVar4);
    puVar5 = puVar3;
    func_0x00010bf65700(puVar3);
    bVar1 = puVar2 == puVar5;
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar3);
  _objc_release(puVar4);
  return bVar1;
}



/* Entry: 105be5b74; end: 105be5d77; -[SCProfileHeaderButtonEntryPoint _profileButtonIconWithStoryThumbnail:storiesSnapAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be5b74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(0x4044000000000000,0x4044000000000000,0,0);
  _UIGraphicsGetCurrentContext();
  _UIGraphicsPushContext();
  uVar6 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar7 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(uVar6,uVar7,0x4044000000000000,0x4044000000000000,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  _CGContextAddPath(uVar1,puVar3);
  _CGContextClip(uVar1);
  func_0x00010bf89920(uVar6,uVar7,0x4044000000000000,0x4044000000000000,param_3);
  _objc_release(param_3);
  _CGContextSetLineWidth(0x4010000000000000,uVar1);
  puVar3 = PTR_PTR_1126c2fa8;
  param_1 = param_1 + _DAT_112731dd0;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdf560();
  _objc_release(lVar4);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126c2fa8;
  if (puVar3 == (undefined *)0x3) {
    func_0x00010c25aea0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c25aec0(PTR_PTR_1126c2fa8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfc9760();
  _objc_release(puVar5);
  _CGContextSetRGBStrokeColor(uStack_78,uStack_80,uStack_88,0x3ff0000000000000,uVar1);
  _CGContextAddEllipseInRect(uVar6,uVar7,0x4044000000000000,0x4044000000000000,uVar1);
  _CGContextStrokePath(uVar1);
  _UIGraphicsPopContext();
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105be5d78; end: 105be6603; -[SCProfileHeaderButtonEntryPoint _setupBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be5d78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + _DAT_112731ddc;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf25780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c2fb0;
  _objc_alloc();
  func_0x00010bdd2660(param_1);
  func_0x00010be1d240(param_1);
  func_0x00010bfffba0();
  func_0x00010c1b1a80();
  func_0x00010c21daa0(puVar3);
  func_0x00010c213180(puVar3);
  lVar1 = lVar2;
  func_0x00010c0ec860(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16eb00();
  _objc_release(lVar34);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar31 = *(undefined8 *)(param_1 + _DAT_112731e18);
  *(undefined **)(param_1 + _DAT_112731e18) = puVar4;
  _objc_release(uVar31);
  puVar4 = PTR_PTR_1126c2fb8;
  _objc_alloc();
  lVar34 = (long)_DAT_112731e10;
  lVar1 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar6 = lVar34;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112731dd0;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_112731e14;
  lVar9 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar35;
  _objc_loadWeakRetained();
  lVar11 = lVar35;
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112731e1c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112731e20;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112731df0;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfa1900();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112731e24;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112731e28;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf42d20();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_112731e04;
  lVar22 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112731e40;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c14c2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112731e44;
  _objc_loadWeakRetained();
  func_0x00010c0352c0();
  lVar33 = (long)_DAT_112731e2c;
  uVar31 = *(undefined8 *)(param_1 + lVar33);
  *(undefined **)(param_1 + lVar33) = puVar4;
  _objc_release(uVar31);
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
  _objc_release(lVar35);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar34);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_initWeak(auStack_80,param_1);
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar34 = lVar32;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar34;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105be6604;
  puStack_90 = &UNK_110843540;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c116a60(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar34);
  _objc_release(lVar32);
  puStack_d0 = puVar4;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105be665c;
  puStack_b8 = &UNK_110841f20;
  _objc_retain(lVar2);
  lStack_b0 = lVar2;
  func_0x00010c21c6e0(*(undefined8 *)(param_1 + lVar33));
  lVar1 = param_1 + _DAT_112731e30;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar35;
  func_0x00010bfcd180();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar9;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar4;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105be6730;
  puStack_e8 = &UNK_110859c28;
  _objc_retain(lVar2);
  lStack_e0 = lVar2;
  _objc_copyWeak(auStack_d8,auStack_80);
  lVar34 = lVar7;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar34);
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(lVar35);
  _objc_release(lVar12);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112731e34;
  _objc_loadWeakRetained();
  lVar34 = lVar1;
  func_0x00010c116f80();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar35;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = puVar4;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_105be6874;
  puStack_110 = &UNK_1108dc3f8;
  _objc_copyWeak(auStack_108,auStack_80);
  lVar7 = lVar9;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(puVar29);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar1);
  puVar27 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126c2f88;
  puVar4 = PTR_PTR_1126ae960;
  puVar28 = PTR_PTR_1126c2f90;
  func_0x00010c128a20(PTR_PTR_1126c2f90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116920(puVar29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23b400(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126ae970;
  func_0x00010c292920();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + _DAT_112731dcc);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_130,auStack_80);
  func_0x00010c2a1660(puVar27);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar31);
  _objc_release(puVar30);
  _objc_release(puVar4);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_destroyWeak(auStack_130);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_d8);
  _objc_release(lStack_e0);
  _objc_release(lStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105be6604; end: 105be665b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be6604(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c2360e0(*(undefined8 *)(param_1 + _DAT_112731e2c));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105be665c; end: 105be672f;  */

void FUN_105be665c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ec860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf150c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1a80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ec860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105be6730; end: 105be67db;  */

void FUN_105be6730(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105be67dc;
  puStack_48 = &UNK_110841fb0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105be67dc; end: 105be6873;  */

void FUN_105be67dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdd2660();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ec860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf150c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e800();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105be6874; end: 105be68fb;  */

void FUN_105be6874(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bd840(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105be68fc; end: 105be690f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be68fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731e2c),
             PTR_s_hideCreatorActivityFeedBadge_1125d6128);
  return;
}



/* Entry: 105be6910; end: 105be693b;  */

void FUN_105be6910(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105be693c; end: 105be6957; -[SCProfileHeaderButtonEntryPoint _badgeColor] */

undefined8 FUN_105be693c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x6a;
  if (lRam00000001138466f0 < 3) {
    uVar1 = 0x38;
  }
  return uVar1;
}



/* Entry: 105be6958; end: 105be695f; -[SCProfileHeaderButtonEntryPoint _getBadgeStyle] */

undefined8 FUN_105be6958(void)

{
  return 5;
}



/* Entry: 105be6960; end: 105be696f; -[SCProfileHeaderButtonEntryPoint _reloadBadgeState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be6960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112731e2c),PTR_s_reloadBadgeState_112627cb0);
  return;
}



/* Entry: 105be6970; end: 105be6b17; -[SCProfileHeaderButtonEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105be6970(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112731e44);
  _objc_destroyWeak(param_1 + _DAT_112731e40);
  _objc_destroyWeak(param_1 + _DAT_112731dec);
  _objc_destroyWeak(param_1 + _DAT_112731e3c);
  _objc_destroyWeak(param_1 + _DAT_112731e28);
  _objc_destroyWeak(param_1 + _DAT_112731e04);
  _objc_destroyWeak(param_1 + _DAT_112731e10);
  _objc_destroyWeak(param_1 + _DAT_112731e24);
  _objc_destroyWeak(param_1 + _DAT_112731e30);
  _objc_destroyWeak(param_1 + _DAT_112731df0);
  _objc_destroyWeak(param_1 + _DAT_112731e1c);
  _objc_destroyWeak(param_1 + _DAT_112731e38);
  _objc_destroyWeak(param_1 + _DAT_112731dd0);
  _objc_destroyWeak(param_1 + _DAT_112731e20);
  _objc_destroyWeak(param_1 + _DAT_112731e34);
  _objc_destroyWeak(param_1 + _DAT_112731df8);
  _objc_destroyWeak(param_1 + _DAT_112731dfc);
  _objc_destroyWeak(param_1 + _DAT_112731de8);
  _objc_destroyWeak(param_1 + _DAT_112731de4);
  _objc_destroyWeak(param_1 + _DAT_112731e14);
  _objc_destroyWeak(param_1 + _DAT_112731e08);
  _objc_destroyWeak(param_1 + _DAT_112731ddc);
  _objc_storeStrong(param_1 + _DAT_112731e00,0);
  _objc_storeStrong(param_1 + _DAT_112731dd4,0);
  _objc_storeStrong(param_1 + _DAT_112731e0c,0);
  _objc_storeStrong(param_1 + _DAT_112731dcc,0);
  _objc_storeStrong(param_1 + _DAT_112731dd8,0);
  _objc_storeStrong(param_1 + _DAT_112731e18,0);
  _objc_storeStrong(param_1 + _DAT_112731e2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112731de0,0);
  return;
}



/* Entry: 105be6b18; end: 105be6b1f;  */

void FUN_105be6b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105be6b20; end: 105be6b7b;  */

void FUN_105be6b20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105be6b7c; end: 105be6cc7;  */

void FUN_105be6b7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bf25020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_2;
      func_0x00010bf25020(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar5 = PTR_PTR_1126c2fc0;
      _objc_alloc(PTR_PTR_1126c2fc0);
      lVar1 = lVar2;
      func_0x00010c26f620(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf957e0();
      func_0x000100bc47dc();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c26e3a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c037e80(puVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(lVar2);
      goto LAB_105be6c94;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_105be6c94:
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105be6cc8; end: 105be6deb; -[SCProfileHeaderLiveStoryThumbnailProvider _getLatestThumbnailWithThumbnails:] */

void FUN_105be6cc8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if ((param_3 == (undefined *)0x0) ||
     (puVar4 = param_3, func_0x00010bf529e0(), puVar4 == (undefined *)0x0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf87080(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar4 = (undefined *)0x0;
      puVar5 = (undefined *)0x0;
      do {
        puVar2 = param_3;
        func_0x00010c0dfd40(param_3,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c105720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = puVar3;
        func_0x00010bf433a0(puVar3,param_2,puVar1);
        if (puVar2 == (undefined *)0x1) {
          _objc_retain(puVar3);
          _objc_release(puVar1);
          puVar1 = puVar3;
          puVar5 = puVar4;
        }
        _objc_release(puVar3);
        puVar4 = puVar4 + 1;
        puVar2 = param_3;
        func_0x00010bf529e0();
      } while (puVar4 < puVar2);
    }
    puVar4 = param_3;
    func_0x00010c0dfd40(param_3,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105be6dec; end: 105be6e7b; -[SCProfileHeaderLiveStoryThumbnailProvider _updatePublicStorySnapAttributesForThumbnail:pendingPublicThumbnail:publicThumbnail:] */

void FUN_105be6dec(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_3 == param_4) || (param_3 == param_5)) {
    puVar2 = PTR_PTR_1126c2fa8;
    func_0x00010bfdf560(PTR_PTR_1126c2fa8,param_2,*(undefined8 *)(param_1 + 0x30));
    if (puVar2 == (undefined *)0x3) {
      puVar1 = PTR_PTR_1126c2fc8;
      _objc_alloc(PTR_PTR_1126c2fc8);
      func_0x00010c0559e0();
      puVar2 = PTR_PTR_1126c2fd0;
      func_0x00010c293b20(PTR_PTR_1126c2fd0,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      goto LAB_105be6e6c;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_105be6e6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105be6e7c; end: 105be6edb; -[SCProfileHeaderLiveStoryThumbnailProvider .cxx_destruct] */

void FUN_105be6e7c(long param_1)

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



/* Entry: 105be6edc; end: 105be6f4f; -[SCGrapheneProfileHeaderButtonBadgingMetric2 init] */

undefined1 * FUN_105be6edc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ec460;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105be6f50; end: 105be70c3;  */

undefined *
FUN_105be6f50(long param_1,undefined *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  plVar9 = (long *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f32f2b2;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108dc4b8);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
      unaff_x22 = &uStack_80;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_c0;
  pcStack_88 = FUN_105be70c4;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar9;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_b8 = PTR_PTR_1126ec468;
  puStack_c0 = puVar2;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = puVar5;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
    _objc_release(uVar7);
    puVar4 = param_4;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined1 **)((long)ppuVar3 + 0x10) = puVar4;
    _objc_release(uVar7);
    uVar7 = param_5;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x18) = uVar7;
    _objc_release(uVar8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  return (undefined *)ppuVar3;
}



/* Entry: 105be70c4; end: 105be719b; -[SCProfileHeaderLiveStoryThumbnail initWithPostedTimestamp:thumbnailInfo:thumbnailUrl:] */

undefined1 *
FUN_105be70c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ec468;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105be719c; end: 105be71bf; -[SCProfileHeaderLiveStoryThumbnail copyWithZone:] */

undefined8 FUN_105be719c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105be71c0; end: 105be723f; -[SCProfileHeaderLiveStoryThumbnail hash] */

undefined8 * FUN_105be71c0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105be72d8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105be72e4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105be72e4;
          }
          goto LAB_105be72d8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105be72e4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105be7240; end: 105be72ff; -[SCProfileHeaderLiveStoryThumbnail isEqual:] */

long FUN_105be7240(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105be72d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105be72e4;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105be72e4;
          }
          goto LAB_105be72d8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105be72e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105be7300; end: 105be7307; -[SCProfileHeaderLiveStoryThumbnail postedTimestamp] */

undefined8 FUN_105be7300(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105be7308; end: 105be730f; -[SCProfileHeaderLiveStoryThumbnail thumbnailInfo] */

undefined8 FUN_105be7308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105be7310; end: 105be7317; -[SCProfileHeaderLiveStoryThumbnail thumbnailUrl] */

undefined8 FUN_105be7310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105be7318; end: 105be7353; -[SCProfileHeaderLiveStoryThumbnail .cxx_destruct] */

void FUN_105be7318(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105be7354; end: 105be764f;  */

uint FUN_105be7354(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  uint uVar12;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(param_1);
  if (lVar5 == 0) {
    _objc_retain(param_5);
    iVar1 = 0x110c3220;
    func_0x00010c067fc0();
    if (iVar1 == 0) {
      puVar6 = PTR_PTR_1126af7d0;
      _objc_opt_new(PTR_PTR_1126af7d0);
      uVar7 = param_5;
      func_0x00010c1195e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126c2fd8;
      _objc_alloc();
      uVar8 = uVar7;
      func_0x00010c296d80(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360();
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    else {
      puVar6 = PTR_PTR_1126c2fd8;
      _objc_alloc_init();
      func_0x00010c195460();
      func_0x00010c067fc0(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3220);
      func_0x00010c21a0a0(puVar6);
      func_0x00010c1c3340(puVar6);
    }
    _objc_release(param_5);
    lVar4 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c116840();
    puVar9 = puVar6;
    func_0x00010c0c2440();
    if (lVar5 < (int)puVar9) {
      puVar9 = puVar6;
      func_0x00010bf926c0(puVar6);
      uVar2 = (uint)puVar9;
    }
    else {
      uVar2 = 0;
    }
    _objc_release(lVar4);
    puVar9 = puVar6;
    func_0x00010c27b7e0();
    if (((uint)puVar9 & 0xfffffffe) == 2) {
      uVar7 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfcdbe0();
      uVar3 = (uint)uVar8;
      _objc_release(uVar7);
    }
    else {
      uVar3 = 1;
    }
    puVar10 = puVar6;
    func_0x00010c27b7e0();
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar10 == 3) {
      uVar7 = param_2;
      func_0x00010c269d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010c0cf3c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00(puVar9);
      uVar12 = (uint)puVar9 ^ 1;
      _objc_release(uVar11);
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    else {
      uVar12 = 1;
    }
    uVar12 = uVar2 & uVar3 & uVar12;
    _objc_release(puVar6);
  }
  else {
    uVar12 = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar12;
}



/* Entry: 105be7650; end: 105be7663;  */

void FUN_105be7650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dc39d8,0,0);
  return;
}



/* Entry: 105be7664; end: 105be766f; -[SCFeatureSettingsService hasProfileExpandedIdentityViewImpressionCount] */

void FUN_105be7664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e21478);
  return;
}



/* Entry: 105be7670; end: 105be767b; -[SCFeatureSettingsService profileExpandedIdentityViewImpressionCountServerParam] */

undefined ** FUN_105be7670(void)

{
  return &PTR____CFConstantStringClassReference_110e21478;
}



/* Entry: 105be767c; end: 105be768b; -[SCFeatureSettingsService setProfileExpandedIdentityViewImpressionCount:] */

void FUN_105be767c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e21478,param_3);
  return;
}



/* Entry: 105be768c; end: 105be7693; -[SCFeatureSettingsService profile_expanded_identity_view_impression_count_client_value:] */

void FUN_105be768c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 105be7694; end: 105be769b; -[SCFeatureSettingsService profile_expanded_identity_view_impression_count_server_value:] */

void FUN_105be7694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 105be769c; end: 105be76ab; -[SCFeatureSettingsService profileExpandedIdentityViewImpressionCount] */

void FUN_105be769c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e21478,0);
  return;
}



/* Entry: 105be76ac; end: 105be7727;  */

undefined * FUN_105be76ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1cc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e21498,
                        &UNK_10ddcae50,&UNK_10ddcae8c,4,FUN_105be7728,0);
    do {
      if (puRam00000001136c1cc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1cc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1cc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1cc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1cc0;
}



/* Entry: 105be7728; end: 105be7733;  */

bool FUN_105be7728(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105be7734; end: 105be779b; +[SCPrivateProfilePbExpandedIdentityViewConfig descriptor] */

void FUN_105be7734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a90550,
                        &PTR____CFConstantStringClassReference_110e214b8,
                        &PTR_s_snapchat_private_profile_cof_11311e098,&PTR_s_enabled_11311e0b0,3,0xc
                        ,0x1c);
    puRam00000001136c1cc8 = puVar1;
  }
  return;
}



/* Entry: 105be779c; end: 105be780f; -[SCHideSuggestionUnitActionHandler initWithSnapchattersDataMutator:] */

undefined1 * FUN_105be779c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec470;
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



/* Entry: 105be7810; end: 105be7993; -[SCHideSuggestionUnitActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_105be7810(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2fe0;
  _objc_opt_class(PTR_PTR_1126c2fe0);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    puVar4 = PTR_PTR_1126b15c0;
    _objc_alloc(PTR_PTR_1126b15c0);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0fdba0();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008d20(puVar4);
    _objc_release(puVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
    puVar2 = PTR_PTR_1126bd780;
    func_0x00010c0fdba0(param_4);
    func_0x00010bfe1800(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bd780;
    func_0x00010c0fdba0(param_4);
    func_0x00010bfe1800(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2940(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
  return uVar1 != 0;
}



/* Entry: 105be7994; end: 105be799b; -[SCHideSuggestionUnitActionHandler addFriendsActionEventObservable] */

undefined8 FUN_105be7994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105be799c; end: 105be79cb; -[SCHideSuggestionUnitActionHandler setAddFriendsActionEventObservable:] */

void FUN_105be799c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105be79cc; end: 105be79fb; -[SCHideSuggestionUnitActionHandler .cxx_destruct] */

void FUN_105be79cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105be79fc; end: 105be7d2f; +[SCBusinessAccountSelectorHelpers userAvatarViewWithUserInfoServices:resourceDownloader:bitmojiSelfieFetcher:] */

void FUN_105be79fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc_init();
  func_0x00010c219b60();
  lVar2 = param_3;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126afd38;
    _objc_opt_new(PTR_PTR_1126afd38);
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc360(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c2a8ea0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf1c0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8160(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c2bbd20(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010bfaa020(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar1);
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_setImage__1126481e8,param_2);
  return;
}


