/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062b5c50; end: 1062b5c53; -[SCContextSpotlightSubscriptionSnapchatterSessionStateSubject didStartSnapchattersUpdateDataRequest:] */

void FUN_1062b5c50(void)

{
  return;
}



/* Entry: 1062b5c54; end: 1062b5dab; -[SCContextSpotlightSubscriptionSnapchatterSessionStateSubject didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1062b5c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_1062b5dac;
  puStack_50 = &UNK_11091a718;
  uStack_48 = param_4;
  _objc_retain(param_3);
  ppuVar2 = &puStack_68;
  _objc_retainBlock();
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1062b5dbc;
  puStack_80 = &UNK_11091a738;
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1062b5e40;
  puStack_b0 = &UNK_11091a768;
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_1062b5fa8;
  puStack_e0 = &UNK_11091a798;
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x1062b602c;
  puStack_110 = &UNK_11091a7c8;
  puStack_150 = puVar1;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x1062b60b0;
  puStack_138 = &UNK_110862228;
  uStack_130 = param_1;
  uStack_108 = param_1;
  ppuStack_100 = ppuVar2;
  uStack_d8 = param_1;
  ppuStack_d0 = ppuVar2;
  uStack_a8 = param_1;
  ppuStack_a0 = ppuVar2;
  uStack_78 = param_1;
  ppuStack_70 = ppuVar2;
  func_0x00010c0bc6c0(param_3,param_2,&puStack_98,&puStack_c8,&puStack_f8,0,&puStack_128,
                      &puStack_150,0,0,0);
  _objc_release(param_3);
  _objc_release(ppuVar2);
  return;
}



/* Entry: 1062b5dac; end: 1062b5dbb;  */

bool FUN_1062b5dac(long param_1,uint param_2)

{
  return *(byte *)(param_1 + 0x20) == param_2;
}



/* Entry: 1062b5dbc; end: 1062b5e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b5dbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar2 + 0x10))(lVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_next__112614028,lVar2);
    return;
  }
  return;
}



/* Entry: 1062b5e40; end: 1062b5fa7;  */

/* WARNING: Possible PIC construction at 0x0001062b5f38: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b5e40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010c0720c0();
      _objc_release(lVar6);
      if ((int)lVar2 == 0) {
        return;
      }
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      lVar2 = *(long *)(param_2 + 0x28);
      (**(code **)(lVar2 + 0x10))(lVar2,0);
code_r0x00010c0d9840:
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_next__112614028,lVar2);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar3 = *(undefined8 *)(lVar8 * 8);
      func_0x00010c244280();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((int)uVar5 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        lVar2 = *(long *)(param_1 + 0x28);
        (**(code **)(lVar2 + 0x10))(lVar2,1);
        goto code_r0x00010c0d9840;
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1062b5fa8; end: 1062b6133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b5fa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar2 + 0x10))(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_next__112614028,lVar2);
    return;
  }
  return;
}



/* Entry: 1062b6134; end: 1062b6193; -[SCContextSpotlightSubscriptionSnapchatterSessionStateSubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b6134(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744e04,0);
  _objc_storeStrong(param_1 + _DAT_112744e00,0);
  _objc_storeStrong(param_1 + _DAT_112744e08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744e0c,0);
  return;
}



/* Entry: 1062b6194; end: 1062b61cf;  */

void FUN_1062b6194(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1062b61d0; end: 1062b6297; -[SCContextSpotlightSubscriptionStoreSubscriptionSessionStateSubject initWithSubcriptionStore:entityId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062b61d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0b78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112744e20;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112744e24;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744e28) = 0xfffffffffffffffe;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062b6298; end: 1062b636b; -[SCContextSpotlightSubscriptionStoreSubscriptionSessionStateSubject start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b6298(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112744e20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfcaea0(uVar1);
  *(undefined1 *)(param_1 + _DAT_112744e2c) = 1;
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1062b636c; end: 1062b63eb;  */

void FUN_1062b636c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be31520();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebf700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062b63ec; end: 1062b63ff; -[SCContextSpotlightSubscriptionStoreSubscriptionSessionStateSubject _startAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b63ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744e20),PTR_s_addListener__11259c008,param_1);
  return;
}



/* Entry: 1062b6400; end: 1062b6433; -[SCContextSpotlightSubscriptionStoreSubscriptionSessionStateSubject _handleSubscription:error:] */

void FUN_1062b6400(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
  func_0x00010c080120(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_next__112614028,param_3 & 0xffffffff);
  return;
}



/* Entry: 1062b6434; end: 1062b648b; -[SCContextSpotlightSubscriptionStoreSubscriptionSessionStateSubject next:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b6434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + _DAT_112744e28) = param_3;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112744e30);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062b648c; end: 1062b6573; -[SCContextSpotlightSubscriptionStoreSubscriptionSessionStateSubject subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b648c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar2 = &lStack_40;
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112744e30;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR_PTR_1126c9690;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    func_0x00010c24d960(param_1);
  }
  puStack_38 = PTR_PTR_1126f0b78;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_subscribe__112675970,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa200(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 1062b6574; end: 1062b6583; -[SCContextSpotlightSubscriptionStoreSubscriptionSessionStateSubject unsubscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b6574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744e30),PTR_s_removeObserver__112628f78);
  return;
}



/* Entry: 1062b6584; end: 1062b66b3; -[SCContextSpotlightSubscriptionStoreSubscriptionSessionStateSubject didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b6584(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if (((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112744e20);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfcaea0(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062b66b4; end: 1062b671b;  */

void FUN_1062b66b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31520();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062b671c; end: 1062b676b; -[SCContextSpotlightSubscriptionStoreSubscriptionSessionStateSubject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b671c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744e24,0);
  _objc_storeStrong(param_1 + _DAT_112744e20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744e30,0);
  return;
}



/* Entry: 1062b676c; end: 1062b6877; -[SCContextSpotlightSubscriptionStoreSubscriptionSession initWithSubscriptionStore:entityId:] */

undefined1 *
FUN_1062b676c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0b80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c9698;
    _objc_alloc();
    func_0x00010c04ee60();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x20));
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062b6878; end: 1062b687f; -[SCContextSpotlightSubscriptionStoreSubscriptionSession observeSubscriptionState] */

void FUN_1062b6878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1062b6880; end: 1062b6907; -[SCContextSpotlightSubscriptionStoreSubscriptionSession subscribe] */

void FUN_1062b6880(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR_PTR_1126ae6b8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1062b6908;
  puStack_38 = &UNK_11084f340;
  uStack_30 = uVar2;
  lStack_28 = param_1;
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar1,param_2,&puStack_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062b6908; end: 1062b69d7;  */

void FUN_1062b6908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  _objc_retain(param_2);
  func_0x00010c28a900(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062b69d8; end: 1062b6a1f;  */

/* WARNING: Possible PIC construction at 0x0001062b6a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062b6a0c) */

void FUN_1062b69d8(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR____kCFBooleanFalse_11034ab60,*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,
             param_2 == 0);
  return;
}



/* Entry: 1062b6a20; end: 1062b6a23;  */

void FUN_1062b6a20(void)

{
  return;
}



/* Entry: 1062b6a24; end: 1062b6aff; -[SCContextSpotlightSubscriptionStoreSubscriptionSession unsubscribe] */

void FUN_1062b6a24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062b6b00; end: 1062b6bf3;  */

void FUN_1062b6b00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_2);
    func_0x00010c28a900(uVar1);
    _objc_release(param_2);
  }
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062b6bf4; end: 1062b6c3b;  */

/* WARNING: Possible PIC construction at 0x0001062b6c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001062b6c28) */

void FUN_1062b6bf4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR____kCFBooleanTrue_11034ab68,*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,
             param_2 != 0);
  return;
}



/* Entry: 1062b6c3c; end: 1062b6c3f;  */

void FUN_1062b6c3c(void)

{
  return;
}



/* Entry: 1062b6c40; end: 1062b6c87; -[SCContextSpotlightSubscriptionStoreSubscriptionSession .cxx_destruct] */

void FUN_1062b6c40(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062b6c88; end: 1062b6d17; -[SCContextScrubberView initWithTouchAreaHeightProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1062b6c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0b88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744e34);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744e34) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062b6d18; end: 1062b6df7; -[SCContextScrubberView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062b6d18(double param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 **ppuVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  dVar2 = param_1;
  _objc_retain(param_5);
  if ((*(long *)(param_3 + _DAT_112744e34) == 0) ||
     ((**(code **)(*(long *)(param_3 + _DAT_112744e34) + 0x10))(), dVar2 <= 0.0)) {
    puStack_48 = PTR_PTR_1126f0b88;
    puStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_pointInside_withEvent__11261e4e8,param_5);
  }
  else {
    dVar3 = dVar2;
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    dVar4 = dVar3 - dVar2;
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    _CGRectContainsPoint(0,dVar4,dVar3,dVar2,param_1,param_2);
    ppuVar1 = (undefined1 **)param_3;
  }
  _objc_release(param_5);
  return (undefined1 *)ppuVar1;
}



/* Entry: 1062b6df8; end: 1062b6f7f; -[SCContextScrubberView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b6df8(double param_1,undefined8 param_2,undefined8 *****param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  double dVar5;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 ****ppppuStack_60;
  undefined *puStack_58;
  
  pppppuVar1 = &ppppuStack_70;
  dVar5 = param_1;
  _objc_retain(param_5);
  if ((*(long *)((long)param_3 + (long)_DAT_112744e34) == 0) ||
     ((**(code **)(*(long *)((long)param_3 + (long)_DAT_112744e34) + 0x10))(), dVar5 <= 0.0)) {
    puStack_58 = PTR_PTR_1126f0b88;
    pppppuVar4 = &ppppuStack_60;
    ppppuStack_60 = param_3;
    _objc_msgSendSuper2(param_1,param_2,pppppuVar4,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_68 = PTR_PTR_1126f0b88;
    ppppuStack_70 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&ppppuStack_70,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (pppppuVar1 == (undefined8 *****)0x0) {
      pppppuVar4 = (undefined8 *****)0x0;
    }
    else {
      pppppuVar2 = param_3;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar4 = pppppuVar1;
      if (pppppuVar2 == (undefined8 *****)0x0) {
        _objc_retain(pppppuVar1);
      }
      else {
        func_0x00010c21e900(param_3);
        func_0x00010bf512a0(param_1,param_2,param_3);
        pppppuVar3 = pppppuVar2;
        func_0x00010bfe3a40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e900(param_3);
        if (pppppuVar3 != (undefined8 *****)0x0) {
          pppppuVar4 = pppppuVar3;
        }
        _objc_retain(pppppuVar4);
        _objc_release(pppppuVar3);
      }
      _objc_release(pppppuVar2);
    }
    _objc_release(pppppuVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar4);
  return;
}



/* Entry: 1062b6f80; end: 1062b6f93; -[SCContextScrubberView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b6f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744e34,0);
  return;
}



/* Entry: 1062b6f94; end: 1062b6f9b; -[SCContextSpotlightActionButton initWithStyle:icon:performer:] */

void FUN_1062b6f94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04ebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithStyle_icon_performer_mir_1125f14f8);
  return;
}



/* Entry: 1062b6f9c; end: 1062b72d7; -[SCContextSpotlightActionButton initWithStyle:icon:performer:mirrorInRTL:] */

long * FUN_1062b6f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,long *param_6)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_170;
  long lStack_168;
  long *plStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  long *plStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long *plStack_118;
  undefined *puStack_110;
  undefined4 uStack_104;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puStack_a8 = PTR_PTR_1126f0b90;
  plVar1 = &lStack_b0;
  lStack_b0 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_initWithStyle__1125f14a8,param_3);
  plVar3 = param_6;
  if (plVar1 != (long *)0x0) {
    func_0x00010c216160(plVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uStack_f8 = param_4;
    func_0x00010c219b60();
    func_0x00010c21e900(puVar2);
    plVar3 = plVar1;
    func_0x00010bf4dce0(plVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(plVar3);
    puStack_128 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    plVar3 = plVar1;
    puStack_110 = puVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    plStack_100 = plVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    plStack_118 = plVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    puStack_120 = puVar4;
    puStack_a0 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    plVar3 = plVar1;
    puStack_138 = puVar5;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    plStack_130 = plVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_104 = SUB84(param_6,0);
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    puStack_98 = puVar5;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_90 = puVar6;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf49420(0x4040000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_128);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(plVar3);
    _objc_release(plStack_130);
    _objc_release(puStack_138);
    _objc_release(puStack_120);
    _objc_release(plStack_118);
    _objc_release(plStack_100);
    _objc_release(puStack_110);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1062b72d8;
    puStack_d8 = &UNK_11091a8c8;
    _objc_retain(plVar1);
    uStack_c0 = uStack_f8;
    uStack_b8 = (undefined1)uStack_104;
    plStack_d0 = plVar1;
    puStack_c8 = puVar2;
    func_0x00010c0f7fc0(param_5);
    _objc_release(plStack_d0);
    _objc_release(puVar2);
    param_1 = param_5;
  }
  lVar10 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return plVar1;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1062b72d8;
  plVar11 = *(long **)(lVar10 + 0x20);
  plStack_170 = plVar3;
  lStack_168 = param_1;
  plStack_160 = plVar1;
  lStack_158 = param_5;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010be37140();
  _objc_retainAutoreleasedReturnValue();
  plVar1 = plVar11;
  if (*(char *)(lVar10 + 0x38) == '\x01') {
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar11);
  }
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1062b73a4;
  puStack_188 = &UNK_110841f80;
  uStack_180 = *(undefined8 *)(lVar10 + 0x28);
  plStack_178 = plVar1;
  _objc_retain(plVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_1a0);
  _objc_release(plStack_178);
  _objc_release(plVar1);
  return plVar1;
}



/* Entry: 1062b72d8; end: 1062b73a3;  */

void FUN_1062b72d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be37140(uVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010bfe77e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062b73a4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 1062b73a4; end: 1062b73ab;  */

void FUN_1062b73a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setImage__1126481e8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1062b73ac; end: 1062b73e3; -[SCContextSpotlightActionButton _imageForIcon:] */

void FUN_1062b73ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010be61200();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 0) {
    func_0x0001062cd0ac();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062b73e4; end: 1062b745f; -[SCContextSpotlightActionButton _moreImageForCurrentStyle] */

void FUN_1062b73e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c25dfa0();
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010c25dfa0(param_1);
      func_0x00010c24d7e0(param_1,param_2,lVar1);
      func_0x00010bfe7b00(PTR_PTR_1126b0c40,param_2,0x2bf,0xd5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1062b7454;
    }
    if (lVar1 != 0) goto LAB_1062b7454;
  }
  func_0x0001062cd128();
  _objc_retainAutoreleasedReturnValue();
LAB_1062b7454:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062b7460; end: 1062b755f;  */

void FUN_1062b7460(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 == 1) {
    _objc_retain();
    uVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4020000000000000);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar1);
    _objc_release(puVar2);
    uVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f000000);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c1fe7a0(0,0x4000000000000000,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1062b7560; end: 1062b75cb;  */

void FUN_1062b7560(void)

{
  double in_d6;
  double in_d7;
  
  if ((in_d6 <= 0.0) && (in_d7 <= 0.0)) {
    _CGRectInset();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1062b75cc; end: 1062b78c3; -[SCContextSpotlightActionButtonBaseView initWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1062b75cc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f0b98;
  puVar2 = &uStack_b8;
  puVar3 = param_3;
  uStack_b8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  puVar5 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined **)((long)puVar2 + (long)_DAT_112744e40) = param_3;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar17 = (long)_DAT_112744e44;
    uVar15 = *(undefined8 *)((long)puVar2 + lVar17);
    *(undefined **)((long)puVar2 + lVar17) = puVar3;
    _objc_release(uVar15);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar17));
    FUN_1062b7460(*(undefined8 *)((long)puVar2 + lVar17),param_3);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf49420(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112744e48;
    uVar16 = *(undefined8 *)((long)puVar2 + lVar18);
    *(undefined8 *)((long)puVar2 + lVar18) = uVar15;
    _objc_release(uVar16);
    _objc_release(uVar4);
    func_0x00010befbb60(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = *(undefined8 **)((long)puVar2 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar7;
    uVar16 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf348e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar15;
    uVar9 = *(undefined8 *)((long)puVar2 + lVar17);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf49420(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar4;
    uStack_90 = *(undefined8 *)((long)puVar2 + lVar18);
    puVar10 = puVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf49420(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    puStack_88 = puVar11;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf49420(0x4048000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar15);
    _objc_release(puVar8);
    _objc_release(uVar16);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  func_0x00010becc520(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  func_0x00010c08fa60(puVar3);
  _objc_release(puVar3);
  func_0x00010c1a7f60(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return puVar5;
}



/* Entry: 1062b78c4; end: 1062b7937; -[SCContextSpotlightActionButtonBaseView setTitle:] */

void FUN_1062b78c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010becc520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  lVar1 = param_3;
  func_0x00010c08fa60(param_3);
  _objc_release(param_3);
  func_0x00010c1a7f60(param_1,param_2,lVar1 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062b7938; end: 1062b7997; -[SCContextSpotlightActionButtonBaseView setTextColor:] */

void FUN_1062b7938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010becc520();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062b7998; end: 1062b79a7; -[SCContextSpotlightActionButtonBaseView setAlpha:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b7998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744e44),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062b79a8; end: 1062b79b7; -[SCContextSpotlightActionButtonBaseView alpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b79a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf01b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744e44),PTR_s_alpha_11259e078);
  return;
}



/* Entry: 1062b79b8; end: 1062b79d3; -[SCContextSpotlightActionButtonBaseView setTitleTopOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b79b8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112744e4c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_112744e50),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 1062b79d4; end: 1062b7a8b; -[SCContextSpotlightActionButtonBaseView setTitleOverflowEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b79d4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(byte *)(param_1 + _DAT_112744e54) != param_3) {
    *(char *)(param_1 + _DAT_112744e54) = (char)param_3;
    lVar4 = (long)_DAT_112744e58;
    lVar1 = *(long *)(param_1 + lVar4);
    if (lVar1 != 0) {
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c26b920(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar3);
      func_0x00010c216240(param_1,param_2,lVar1);
      func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1062b7a8c; end: 1062b7dfb; -[SCContextSpotlightActionButtonBaseView _titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b7a8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_112744e58;
  lVar8 = *(long *)(param_1 + lVar10);
  if (lVar8 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar1;
    _objc_release(uVar6);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar10));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar10));
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar10));
    lVar8 = param_1;
    func_0x00010c271440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10));
    _objc_release(lVar8);
    puVar1 = PTR_PTR_1126b08d8;
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010085b3c8(0x4000000000000000,0x3fe3333333333333,0,0x3ff0000000000000,puVar1,uVar6,
                        puVar2);
    _objc_release(puVar2);
    lVar8 = (long)_DAT_112744e54;
    uVar5 = 0x447a0000;
    if (*(char *)(param_1 + lVar8) == '\0') {
      uVar5 = 0x437a0000;
    }
    func_0x00010c181cc0(uVar5,*(undefined8 *)(param_1 + lVar10));
    lVar9 = (long)_DAT_112744e44;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9));
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bf1ff80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf493c0(*(undefined8 *)(param_1 + _DAT_112744e4c));
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112744e50);
    *(undefined8 *)(param_1 + _DAT_112744e50) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf49420(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a120(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    lVar9 = param_1;
    if (*(char *)(param_1 + lVar8) == '\x01') {
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34860(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010c08de00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010bf493a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(uVar3);
      _objc_release(lVar8);
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c2793a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = uVar6;
    func_0x00010bf493a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar3);
    _objc_release(lVar9);
    _objc_release(uVar6);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar8 = *(long *)(param_1 + lVar10);
    _objc_retain(lVar8);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1062b7dfc; end: 1062b7e07; -[SCContextSpotlightActionButtonBaseView titleLabelAccessibilityIdentifier] */

undefined ** FUN_1062b7dfc(void)

{
  return &PTR____CFConstantStringClassReference_110e47f78;
}



/* Entry: 1062b7e08; end: 1062b7e93; -[SCContextSpotlightActionButtonBaseView pointInside:withEvent:] */

void FUN_1062b7e08(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bf20c00();
  dVar1 = param_1;
  func_0x00010c269420(param_5);
  dVar2 = dVar1;
  func_0x00010c269440(param_5);
  if ((dVar1 <= 0.0) && (dVar2 <= 0.0)) {
    _CGRectInset(param_1,param_2,param_3,param_4,0xc020000000000000,0xc020000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1062b7e94; end: 1062b7eaf; -[SCContextSpotlightActionButtonBaseView standardIconSizeForStyle:] */

undefined8 FUN_1062b7e94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x4041000000000000;
  if (param_3 != 1) {
    uVar1 = 0x4048000000000000;
  }
  return uVar1;
}



/* Entry: 1062b7eb0; end: 1062b7ec7; -[SCContextSpotlightActionButtonBaseView circleInsetIconSizeForStyle:] */

undefined8 FUN_1062b7eb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x4038000000000000;
  if (param_3 != 1) {
    uVar1 = 0x4048000000000000;
  }
  return uVar1;
}



/* Entry: 1062b7ec8; end: 1062b7ef7; -[SCContextSpotlightActionButtonBaseView setCustomContentViewHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b7ec8(long param_1)

{
  func_0x00010c181140(*(undefined8 *)(param_1 + _DAT_112744e48));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1062b7ef8; end: 1062b7f07; -[SCContextSpotlightActionButtonBaseView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b7ef8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e44);
}



/* Entry: 1062b7f08; end: 1062b7f17; -[SCContextSpotlightActionButtonBaseView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b7f08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e40);
}



/* Entry: 1062b7f18; end: 1062b7f27; -[SCContextSpotlightActionButtonBaseView tapTargetExtensionLeading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b7f18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e38);
}



/* Entry: 1062b7f28; end: 1062b7f37; -[SCContextSpotlightActionButtonBaseView setTapTargetExtensionLeading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b7f28(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112744e38) = param_1;
  return;
}



/* Entry: 1062b7f38; end: 1062b7f47; -[SCContextSpotlightActionButtonBaseView tapTargetExtensionTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b7f38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e3c);
}



/* Entry: 1062b7f48; end: 1062b7f57; -[SCContextSpotlightActionButtonBaseView setTapTargetExtensionTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b7f48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112744e3c) = param_1;
  return;
}



/* Entry: 1062b7f58; end: 1062b7f67; -[SCContextSpotlightActionButtonBaseView titleTopOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b7f58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e4c);
}



/* Entry: 1062b7f68; end: 1062b7f77; -[SCContextSpotlightActionButtonBaseView titleOverflowEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062b7f68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112744e54);
}



/* Entry: 1062b7f78; end: 1062b7fd7; -[SCContextSpotlightActionButtonBaseView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b7f78(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744e44,0);
  _objc_storeStrong(param_1 + _DAT_112744e50,0);
  _objc_storeStrong(param_1 + _DAT_112744e48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744e58,0);
  return;
}



/* Entry: 1062b7fd8; end: 1062b83df; -[SCContextSpotlightActionControl initWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1062b7fd8(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126f0ba0;
  puVar1 = &uStack_c0;
  puVar2 = param_4;
  uStack_c0 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar15 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined **)((long)puVar1 + (long)_DAT_112744e64) = param_4;
    func_0x00010c24d7e0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar19 = (long)_DAT_112744e68;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar16);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010bf49420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112744e6c;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined8 *)((long)puVar1 + lVar18) = uVar16;
    _objc_release(uVar17);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar16;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar3;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar7;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar17;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf1ff80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf49520(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf49420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar13;
    uStack_88 = *(undefined8 *)((long)puVar1 + lVar18);
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar17);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(uVar4);
    dVar20 = 5.67605380487384e-315;
    func_0x00010c181cc0(0x447a0000,puVar1);
    func_0x00010c181cc0(puVar1);
    puVar2 = param_4;
    func_0x00010beb7cc0(puVar1);
    if (dVar20 != 0.0) {
      uVar16 = *(undefined8 *)((long)puVar1 + lVar19);
      func_0x00010c08c0e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(param_1 * 0.5);
      _objc_release(uVar16);
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3ff0000000000000,0x3fb999999999999a);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar14;
      func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar19));
      _objc_release(puVar14);
    }
    puVar15 = *(undefined8 **)((long)puVar1 + lVar19);
    FUN_1062b7460(puVar15,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  func_0x00010c271420(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar15);
  return puVar15;
}



/* Entry: 1062b83e0; end: 1062b842f; -[SCContextSpotlightActionControl setTitle:] */

void FUN_1062b83e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062b8430; end: 1062b8453; -[SCContextSpotlightActionControl setTitleTopOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b8430(double param_1,long param_2)

{
  *(double *)(param_2 + _DAT_112744e70) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + 3.0,*(undefined8 *)(param_2 + _DAT_112744e74),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 1062b8454; end: 1062b84ef; -[SCContextSpotlightActionControl setTitleOverflowEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b8454(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(byte *)(param_1 + _DAT_112744e78) != param_3) {
    *(char *)(param_1 + _DAT_112744e78) = (char)param_3;
    lVar3 = (long)_DAT_112744e7c;
    lVar1 = *(long *)(param_1 + lVar3);
    if (lVar1 != 0) {
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = 0;
      _objc_release(uVar2);
      lVar3 = lVar1;
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        func_0x00010c216240(param_1,param_2,lVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1062b84f0; end: 1062b8877; -[SCContextSpotlightActionControl titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b84f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_112744e7c;
  lVar7 = *(long *)(param_1 + lVar10);
  if (lVar7 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar1;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10),param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar10),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar10),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar10),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar10));
    lVar7 = (long)_DAT_112744e78;
    uVar4 = 0x447a0000;
    if (*(char *)(param_1 + lVar7) == '\0') {
      uVar4 = 0x437a0000;
    }
    func_0x00010c181cc0(uVar4,*(undefined8 *)(param_1 + lVar10),param_2,0);
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112744e68);
    func_0x00010bf1ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf493c0(*(double *)(param_1 + _DAT_112744e70) + 3.0,uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112744e74;
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf493a0(uVar3,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf49420(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a120(puVar1,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar9);
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    lVar9 = param_1;
    if (*(char *)(param_1 + lVar7) == '\x01') {
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34860(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010c08de00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bf493a0(uVar5,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar7);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c2793a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar2 = uVar5;
    func_0x00010bf493a0(uVar5,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar9);
    _objc_release(uVar5);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
    lVar7 = *(long *)(param_1 + lVar10);
    _objc_retain(lVar7);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 1062b8878; end: 1062b8903; -[SCContextSpotlightActionControl pointInside:withEvent:] */

void FUN_1062b8878(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bf20c00();
  dVar1 = param_1;
  func_0x00010c269420(param_5);
  dVar2 = dVar1;
  func_0x00010c269440(param_5);
  if ((dVar1 <= 0.0) && (dVar2 <= 0.0)) {
    _CGRectInset(param_1,param_2,param_3,param_4,0xc020000000000000,0xc020000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1062b8904; end: 1062b890f; -[SCContextSpotlightActionControl standardIconSizeForStyle:] */

undefined8 FUN_1062b8904(void)

{
  return 0x4044000000000000;
}



/* Entry: 1062b8910; end: 1062b893f; -[SCContextSpotlightActionControl setCustomContentViewHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b8910(long param_1)

{
  func_0x00010c181140(*(undefined8 *)(param_1 + _DAT_112744e6c));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1062b8940; end: 1062b8953; -[SCContextSpotlightActionControl _showBackgroundCircleForStyle:] */

undefined8 FUN_1062b8940(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 != 1) {
    uVar1 = 0x3ff0000000000000;
  }
  return uVar1;
}



/* Entry: 1062b8954; end: 1062b8963; -[SCContextSpotlightActionControl contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b8954(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e68);
}



/* Entry: 1062b8964; end: 1062b8973; -[SCContextSpotlightActionControl style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b8964(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e64);
}



/* Entry: 1062b8974; end: 1062b8983; -[SCContextSpotlightActionControl tapTargetExtensionLeading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b8974(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e5c);
}



/* Entry: 1062b8984; end: 1062b8993; -[SCContextSpotlightActionControl setTapTargetExtensionLeading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b8984(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112744e5c) = param_1;
  return;
}



/* Entry: 1062b8994; end: 1062b89a3; -[SCContextSpotlightActionControl tapTargetExtensionTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b8994(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e60);
}



/* Entry: 1062b89a4; end: 1062b89b3; -[SCContextSpotlightActionControl setTapTargetExtensionTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b89a4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112744e60) = param_1;
  return;
}



/* Entry: 1062b89b4; end: 1062b89c3; -[SCContextSpotlightActionControl titleTopOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062b89b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112744e70);
}



/* Entry: 1062b89c4; end: 1062b89d3; -[SCContextSpotlightActionControl titleOverflowEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1062b89c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112744e78);
}



/* Entry: 1062b89d4; end: 1062b8a33; -[SCContextSpotlightActionControl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b89d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112744e68,0);
  _objc_storeStrong(param_1 + _DAT_112744e74,0);
  _objc_storeStrong(param_1 + _DAT_112744e6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744e7c,0);
  return;
}



/* Entry: 1062b8a34; end: 1062b8b4b; -[SCContextSpotlightAvatarSubscribeButton initWithPerformer:style:subscribeAction:canSubscribe:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062b8a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f0ba8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithStyle__1125f14a8,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112744e80;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744e84) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744e88) = param_4;
    lVar3 = (long)_DAT_112744e8c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112744e90) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112744e94),param_7);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062b8b4c; end: 1062b8c17; -[SCContextSpotlightAvatarSubscribeButton initWithPerformer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1062b8b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0ba8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithStyle__1125f14a8,1);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112744e80;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744e88) = 1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112744e94),param_4);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062b8c18; end: 1062b8eaf; -[SCContextSpotlightAvatarSubscribeButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b8c18(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f0ba8;
  lStack_60 = param_4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  if (*(char *)(param_4 + _DAT_112744e90) == '\x01') {
    lVar4 = (long)_DAT_112744e98;
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar4));
    dVar5 = param_3 * 0.5;
    if (param_3 <= 0.0) {
      dVar5 = 10.0;
    }
    uVar1 = *(undefined8 *)(param_4 + lVar4);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar5);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010b83340c(0x34);
    func_0x00010c23ba80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_4 + lVar4));
    _objc_release(puVar2);
    func_0x00010c160fc0(*(undefined8 *)(param_4 + lVar4));
  }
  lVar4 = param_4;
  func_0x00010be37fe0();
  if ((int)lVar4 == 0) {
    lVar4 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dfa0(param_4);
    FUN_1062b7460(lVar4,param_4);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar4 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(puVar2);
    lVar4 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e99999a);
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4008000000000000);
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0);
    _objc_release(lVar3);
    _objc_release(lVar4);
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(lVar4);
    lVar4 = param_4;
  }
  _objc_release(lVar4);
  return;
}



/* Entry: 1062b8eb0; end: 1062b8f63; -[SCContextSpotlightAvatarSubscribeButton setProfileIcon:shouldResizeToCircle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b8eb0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  if (param_4 != 0) {
    func_0x00010bdd1c40(param_1);
    func_0x00010b6918b0(param_3,2,0);
    _objc_release(param_3);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112744e9c;
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar2);
  func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062b8f64; end: 1062b9097; -[SCContextSpotlightAvatarSubscribeButton setStateObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b8f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112744ea0;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar5));
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1062b9098; end: 1062b9107;  */

void FUN_1062b9098(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea26a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062b9108; end: 1062b9177; -[SCContextSpotlightAvatarSubscribeButton setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b9108(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0ba8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setSelected__11265c598);
  func_0x00010c1aa620(*(undefined8 *)(param_1 + _DAT_112744eac));
  return;
}



/* Entry: 1062b9178; end: 1062b920f; -[SCContextSpotlightAvatarSubscribeButton displayStoryRingWithViewed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b9178(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112744eb0;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar2 = 0x84;
  if (param_3 == 0) {
    uVar2 = 0xa1;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062b9210; end: 1062b921f; -[SCContextSpotlightAvatarSubscribeButton profileIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b9210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5ef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112744e9c),PTR_s_currentImage_1125b5580);
  return;
}



/* Entry: 1062b9220; end: 1062b9ed3; -[SCContextSpotlightAvatarSubscribeButton _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b9220(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar36 = 5.67605380487384e-315;
  func_0x00010c181cc0(0x447a0000,param_1,param_2,0);
  func_0x00010bdd1c40(param_1);
  dVar38 = dVar36 * 0.5;
  dVar39 = dVar38 + 1.25 + 2.5;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar35 = (long)_DAT_112744eb0;
  uVar28 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar1;
  _objc_release(uVar28);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar35));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar28 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c08c0e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar28);
  _objc_release(puVar1);
  uVar28 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c08c0e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar39);
  _objc_release(uVar28);
  uVar28 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c08c0e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4004000000000000);
  _objc_release(uVar28);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar35));
  lVar33 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar33);
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ee20();
  lVar32 = (long)_DAT_112744eb4;
  uVar28 = *(undefined8 *)(param_1 + lVar32);
  *(undefined **)(param_1 + lVar32) = puVar1;
  _objc_release(uVar28);
  _objc_release(puVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar32));
  uVar28 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c08c0e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar28);
  uVar28 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c08c0e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar38);
  _objc_release(uVar28);
  lVar33 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar33);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc();
  func_0x00010bf20c00(param_1);
  func_0x00010c013de0();
  lVar34 = (long)_DAT_112744e9c;
  uVar28 = *(undefined8 *)(param_1 + lVar34);
  *(undefined **)(param_1 + lVar34) = puVar1;
  _objc_release(uVar28);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar34));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar34));
  uVar28 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08c0e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar38);
  _objc_release(uVar28);
  uVar28 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08c0e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar28);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar28 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08c0e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar28);
  _objc_release(puVar1);
  uVar28 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c08c0e0(uVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff4000000000000);
  _objc_release(uVar28);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar34));
  uVar28 = *(undefined8 *)(param_1 + lVar34);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar28);
  _objc_release(puVar1);
  lVar33 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar33);
  lVar33 = (long)_DAT_112744e90;
  dVar40 = 0.0;
  if (*(char *)(param_1 + lVar33) == '\x01') {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010bfe8280();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_1 + _DAT_112744ea8);
    *(undefined **)(param_1 + _DAT_112744ea8) = puVar1;
    _objc_release(uVar28);
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010bfe8280();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_1 + _DAT_112744ea4);
    *(undefined **)(param_1 + _DAT_112744ea4) = puVar1;
    _objc_release(uVar28);
    puVar1 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_1 + _DAT_112744eb8);
    *(undefined **)(param_1 + _DAT_112744eb8) = puVar1;
    _objc_release(uVar28);
    puVar1 = PTR_PTR_1126c96a0;
    _objc_alloc();
    func_0x00010c01a880(0x4034000000000000);
    lVar31 = (long)_DAT_112744e98;
    uVar28 = *(undefined8 *)(param_1 + lVar31);
    *(undefined **)(param_1 + lVar31) = puVar1;
    _objc_release(uVar28);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar31));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar31));
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar31));
    lVar30 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar30);
    puVar1 = PTR_PTR_1126b0648;
    _objc_alloc();
    dVar37 = 13.0;
    func_0x00010c013de0(0x400c000000000000,0x400c000000000000,0x402a000000000000,0x402a000000000000)
    ;
    lVar30 = (long)_DAT_112744eac;
    uVar28 = *(undefined8 *)(param_1 + lVar30);
    *(undefined **)(param_1 + lVar30) = puVar1;
    _objc_release(uVar28);
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar30));
    dVar37 = dVar37 * 0.5;
    uVar28 = *(undefined8 *)(param_1 + lVar30);
    func_0x00010c08c0e0(uVar28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar37);
    _objc_release(uVar28);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar30));
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar30));
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar31));
    if (*(char *)(param_1 + lVar33) == '\x01') {
      func_0x00010be37860(param_1);
      dVar40 = -dVar37;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar3;
  func_0x00010bf493c0(dVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + _DAT_112744ebc);
  *(undefined8 *)(param_1 + _DAT_112744ebc) = uVar28;
  _objc_release(uVar29);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf49420(dVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar6;
  func_0x00010bf49420(dVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf49420(dVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar32);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar15;
  func_0x00010bf49420(dVar36);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf348e0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar18;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar20;
  func_0x00010bf49420(dVar39 + dVar39);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar21;
  func_0x00010bf49420(dVar39 + dVar39);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar26);
  _objc_release(uVar21);
  _objc_release(uVar25);
  _objc_release(uVar20);
  _objc_release(uVar24);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar23);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar22);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar29);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar28);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (*(char *)(param_1 + lVar33) == '\x01') {
    lVar35 = (long)_DAT_112744e98;
    uVar22 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar33;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar23;
    func_0x00010bf493c0(dVar38);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar25;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar26;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar34 = (long)_DAT_112744eac;
    uVar4 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010bf34860(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar34);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar35);
    func_0x00010bf348e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar14);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar26);
    _objc_release(uVar29);
    _objc_release(uVar25);
    _objc_release(uVar3);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar28);
    _objc_release(lVar32);
    _objc_release(lVar33);
    _objc_release(uVar22);
    puVar1 = PTR_PTR_1126b08d8;
    uVar28 = *(undefined8 *)(param_1 + lVar35);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100b74f58(0x4018000000000000,0x3fd47ae147ae147b,0,0,puVar1,uVar28,puVar2);
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  _objc_alloc(PTR_PTR_1126aeff0);
  func_0x00010bfffb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062b9ed4; end: 1062b9efb;  */

void FUN_1062b9ed4(void)

{
  _objc_alloc(PTR_PTR_1126aeff0);
  func_0x00010bfffb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062b9efc; end: 1062ba51f; -[SCContextSpotlightAvatarSubscribeButton _setButtonStateBySubscriptionState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062b9efc(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  undefined1 auStack_240 [48];
  undefined *puStack_210;
  undefined *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  lStack_1f8 = unaff_x19;
  lStack_200 = unaff_x20;
  if (*(char *)(param_2 + _DAT_112744e90) != '\x01') goto LAB_1062ba4dc;
  func_0x00010c067fc0();
  unaff_x21 = (undefined *)(long)_DAT_112744e84;
  if (unaff_x21[param_2] == '\x01') {
    if (param_4 < 0) {
LAB_1062b9fd4:
      if (param_4 == -2) {
LAB_1062ba4a8:
        uVar6 = *(undefined8 *)(param_2 + _DAT_112744e98);
        goto LAB_1062ba4b8;
      }
      if ((param_4 == -1) && ((*(byte *)(param_2 + _DAT_112744ec0) & 1) == 0)) {
        *(undefined1 *)(param_2 + _DAT_112744ec0) = 1;
        lVar7 = (long)_DAT_112744e98;
        func_0x00010c21e900(*(undefined8 *)(param_2 + lVar7));
        func_0x00010c21e900(param_2);
        lVar9 = (long)_DAT_112744eb8;
        lVar8 = *(long *)(param_2 + lVar9);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar8 == 0) {
          func_0x00010bf57500(*(undefined8 *)(param_2 + lVar9));
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_2 + lVar9);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a8560();
          _objc_release(uVar6);
          uVar6 = *(undefined8 *)(param_2 + lVar9);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c219b60();
          _objc_release(uVar6);
          lVar8 = param_2;
          func_0x00010bf4dce0(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_2 + lVar9);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60(lVar8);
          _objc_release(uVar6);
          _objc_release(lVar8);
          puStack_1e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          uVar1 = *(undefined8 *)(param_2 + lVar9);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uStack_1c0 = uVar1;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_2 + lVar7);
          uStack_1c8 = uVar1;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          uStack_1d0 = uVar6;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = *(undefined **)(param_2 + lVar9);
          uStack_1d8 = uVar1;
          uStack_a8 = uVar1;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = unaff_x22;
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_2 + lVar7);
          func_0x00010bf348e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_a0 = puVar3;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puStack_1e0);
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(uVar6);
          _objc_release(puVar2);
          _objc_release(unaff_x22);
          _objc_release(uStack_1d8);
          _objc_release(uStack_1d0);
          _objc_release(uStack_1c8);
          _objc_release(uStack_1c0);
        }
        func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_112744eac));
        uVar6 = *(undefined8 *)(param_2 + lVar9);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24dbc0();
        _objc_release(uVar6);
        _CGAffineTransformMakeScale(&uStack_d8,0x3feccccccccccccd,0x3feccccccccccccd);
        uStack_108 = uStack_d0;
        uStack_110 = uStack_d8;
        uStack_f8 = uStack_c0;
        uStack_100 = uStack_c8;
        uStack_e8 = uStack_b0;
        uStack_f0 = uStack_b8;
        func_0x00010c219960(*(undefined8 *)(param_2 + lVar7));
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)(param_2 + lVar7));
        unaff_x21 = puVar2;
        goto LAB_1062ba4a0;
      }
    }
    else if (param_4 == 1) {
      func_0x00010bdd1c40(param_2);
      func_0x00010c1883c0(param_2);
      unaff_x21[param_2] = 0;
      func_0x00010c08cdc0(param_2);
LAB_1062ba3d4:
      if (*(char *)(param_2 + _DAT_112744ec0) != '\x01') goto LAB_1062ba4a8;
      lVar8 = *(long *)(param_2 + _DAT_112744eb8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      unaff_x21 = (undefined *)0x0;
      if (lVar8 == 0) goto LAB_1062ba4bc;
      unaff_x21 = (undefined *)0x0;
      _dispatch_time(0,1250000000);
      _dispatch_time(0,500000000);
      puVar2 = PTR___dispatch_main_q_11034be20;
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_1062ba520;
      puStack_120 = &UNK_110842e18;
      lStack_118 = param_2;
      func_0x00010058c530();
      puStack_160 = puVar3;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_1062ba5c8;
      puStack_148 = &UNK_110842e18;
      lStack_140 = param_2;
      func_0x00010058c530(unaff_x21,puVar2,&puStack_160);
      unaff_x22 = puVar2;
LAB_1062ba4a0:
      _objc_release(puVar2);
    }
    else if (param_4 == 0) {
      func_0x00010be37860(param_2);
      dVar10 = param_1;
      func_0x00010bdd1c40(param_2);
      func_0x00010c181140(-(param_1 + 10.0),*(undefined8 *)(param_2 + _DAT_112744ebc));
      func_0x00010c1883c0(dVar10 + 10.0,param_2);
      unaff_x21[param_2] = 0;
      func_0x00010c08cdc0(param_2);
      goto LAB_1062ba2b0;
    }
  }
  else {
    if (param_4 < 0) goto LAB_1062b9fd4;
    if (param_4 != 0) {
      if (param_4 != 1) goto LAB_1062ba4bc;
      goto LAB_1062ba3d4;
    }
LAB_1062ba2b0:
    if (*(char *)(param_2 + _DAT_112744ec0) == '\x01') {
      _dispatch_time(0,500000000);
      puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_180 = 0xc2000000;
      pcStack_178 = FUN_1062ba60c;
      puStack_170 = &UNK_110842e18;
      lStack_168 = param_2;
      func_0x00010058c530();
      goto LAB_1062ba4bc;
    }
    unaff_x22 = &DAT_112744e98;
    lVar8 = (long)_DAT_112744e98;
    func_0x00010c21e900(*(undefined8 *)(param_2 + lVar8));
    unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010b83340c(0x34);
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + lVar8));
    _objc_release(unaff_x21);
    _CGAffineTransformMakeScale(&uStack_1b8,0x3ff0000000000000,0x3ff0000000000000);
    uStack_108 = uStack_1b0;
    uStack_110 = uStack_1b8;
    uStack_f8 = uStack_1a0;
    uStack_100 = uStack_1a8;
    uStack_e8 = uStack_190;
    uStack_f0 = uStack_198;
    func_0x00010c219960(*(undefined8 *)(param_2 + lVar8));
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar8));
    uVar6 = *(undefined8 *)(param_2 + _DAT_112744eac);
LAB_1062ba4b8:
    func_0x00010c1a7f60(uVar6);
  }
LAB_1062ba4bc:
  func_0x00010c1fadc0(param_2);
  func_0x00010c195460();
  lStack_1f8 = param_2;
  lStack_200 = param_4;
LAB_1062ba4dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    pcStack_1e8 = FUN_1062ba520;
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + (long)_DAT_112744eb8);
    puStack_210 = unaff_x22;
    puStack_208 = unaff_x21;
    puStack_1f0 = &stack0xfffffffffffffff0;
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
    _objc_release(uVar6);
    func_0x00010c1a7f60(*(undefined8 *)(*(long *)(lVar5 + 0x20) + (long)_DAT_112744eac));
    _CGAffineTransformMakeScale(auStack_240,0x3ff2666666666666,0x3ff2666666666666);
    func_0x00010c219960(*(undefined8 *)(*(long *)(lVar5 + 0x20) + (long)_DAT_112744e98));
    return;
  }
  return;
}



/* Entry: 1062ba520; end: 1062ba5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ba520(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744eb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744eac),param_2,0);
  _CGAffineTransformMakeScale(&uStack_60,0x3ff2666666666666,0x3ff2666666666666);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744e98),param_2,
                      &uStack_90);
  return;
}



/* Entry: 1062ba5c8; end: 1062ba60b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ba5c8(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744e98),param_2,1);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744ec0) = 0;
  return;
}



/* Entry: 1062ba60c; end: 1062ba6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ba60c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
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
  
  lVar3 = (long)_DAT_112744e98;
  func_0x00010c21e900(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),param_2,1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0x20),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar1 = 0x34;
  func_0x00010b83340c(0x34);
  func_0x00010c23ba80(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),param_2,puVar2);
  _objc_release(puVar2);
  _CGAffineTransformMakeScale(&uStack_60,0x3ff0000000000000,0x3ff0000000000000);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),param_2,&uStack_90);
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),param_2,0);
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112744eac),param_2,0);
  return;
}



/* Entry: 1062ba6f4; end: 1062ba70f; -[SCContextSpotlightAvatarSubscribeButton _updateContentViewHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ba6f4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112744e88) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c1883d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCustomContentViewHeight__11263fb10);
    return;
  }
  return;
}



/* Entry: 1062ba710; end: 1062ba8a7; -[SCContextSpotlightAvatarSubscribeButton hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062ba710(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  double dVar5;
  long lStack_70;
  undefined *puStack_68;
  
  plVar3 = &lStack_70;
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c074c20();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c102b20(param_1,param_2);
    uVar2 = (uint)lVar1;
    if (((*(byte *)(param_3 + _DAT_112744e90) & 1) == 0) && (uVar2 != 0)) {
      plVar3 = *(long **)(param_3 + _DAT_112744e9c);
    }
    else {
      lVar4 = (long)_DAT_112744e98;
      dVar5 = param_2;
      func_0x00010bf51200(param_1,*(undefined8 *)(param_3 + lVar4));
      lVar1 = *(long *)(param_3 + lVar4);
      func_0x00010bfe3a40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      plVar3 = *(long **)(param_3 + lVar4);
      if (lVar1 == 0) {
        if ((((plVar3 != (long *)0x0 & uVar2) != 1) || (dVar5 < 0.0)) ||
           (func_0x00010c074c20(), ((ulong)plVar3 & 1) != 0)) {
          lVar1 = (long)_DAT_112744e9c;
          func_0x00010bf51200(param_1,*(undefined8 *)(param_3 + lVar1));
          if ((-8.0 <= param_2) || (uVar2 != 0)) {
            plVar3 = *(long **)(param_3 + lVar1);
          }
          else {
            plVar3 = (long *)0x0;
          }
        }
        else {
          plVar3 = *(long **)(param_3 + lVar4);
        }
      }
    }
    _objc_retain(plVar3);
  }
  else {
    puStack_68 = PTR_PTR_1126f0ba8;
    lStack_70 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&lStack_70,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 1062ba8a8; end: 1062ba8cf; -[SCContextSpotlightAvatarSubscribeButton _avatarButtonSizeForCurrentStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1062ba8a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4044000000000000;
  if (*(long *)(param_1 + _DAT_112744e88) != 1) {
    uVar1 = 0x4045000000000000;
  }
  return uVar1;
}


